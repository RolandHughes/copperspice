/***********************************************************************
*
* Copyright (c) 2012-2022 Barbara Geller
* Copyright (c) 2012-2022 Ansel Sermersheim
*
* Copyright (c) 2015 The Qt Company Ltd.
* Copyright (c) 2012-2016 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
*
* This file is part of CopperSpice.
*
* CopperSpice is free software. You can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* https://www.gnu.org/licenses/
*
***********************************************************************/

#include <qvulkan_window.h>

#include <qmatrix4x4.h>
#include <qvulkan_device_functions.h>
#include <qvulkan_functions.h>

namespace {

template <typename T, typename Func, template<typename> typename Container_T>
QVector<std::invoke_result_t<Func, T>> map_vector(const Container_T<T> &data, Func f)
{
   QVector<std::invoke_result_t<Func, T>> retval;
   retval.reserve(data.size());

   for (const auto &item : data) {
      retval.push_back( f(item) );
   }

   return retval;
}

template <typename T, typename Func>
QVector<T> filter_vector(QVector<T> data, Func f)
{
   data.erase(std::remove_if(data.begin(), data.end(),
         [&f] (const T &item) { return ! f(item); }), data.end());

   return data;
}

template <typename T, typename Flags>
QVector<T> filter_sort_queues(QVector<T> data, Flags f)
{
   auto retval = filter_vector(std::move(data),
         [f] (auto &item) {
            auto &[properties, index] = item;
            (void) index;
            return (properties.queueFlags & f) != Flags{};
         });

   std::stable_sort(retval.begin(), retval.end(),
         [] (auto &a, auto &b) {
            return uint32_t(a.first.queueFlags) < uint32_t(b.first.queueFlags);
         });

   return retval;
}

};

QVulkanWindow::QVulkanWindow(QWindow *parent)
   : QWindow(parent), m_isValid(false), m_concurrentFrameCount(MAX_CONCURRENT_FRAME_COUNT), m_currentFrame(0),
     m_physicalDeviceIndex(0), m_requestedSampleCount(1)
{
   setSurfaceType(QSurface::VulkanSurface);
}

QVulkanWindow::~QVulkanWindow() = default;

bool QVulkanWindow::initialize()
{
   auto instance = vulkanInstance();

   if (! instance) {
      qWarning("QVulkanWindow::initialize() Called without a valid instance");
      return false;
   }

   if (m_renderer == nullptr) {
      m_renderer.reset(createRenderer());
   }

   if (! populatePhysicalDevices()) {
      qWarning("QVulkanWindow::initialize() Unable to detect a physical device");
      return false;
   }

   if ((m_physicalDeviceIndex < 0) || (m_physicalDeviceIndex >= m_physicalDeviceProperties.size())) {
      m_physicalDeviceIndex = 0;
   }

   if (m_renderer != nullptr) {
      m_renderer->preInitResources();
   }

   if (! m_surface && ! createSurface()) {
      qWarning("QVulkanWindow::initialize() Unable to create surface");
   }

   auto supported = supportedDeviceExtensions();

   QStringList deviceExtensions;

   for (const QString &item : m_requestedDeviceExtensions) {
      for (const auto& ext : supported) {

         if (item == ext.extensionName) {
            deviceExtensions.append(item);
            break;
         }
      }
   }

   // load queues
   auto queues = map_vector(m_physicalDevice.getQueueFamilyProperties(),
         [id = 0] (auto item) mutable {
            if (item.queueFlags & (vk::QueueFlagBits::eGraphics | vk::QueueFlagBits::eCompute)) {
               // any queue that supports graphics or compute is required to support transfer by the spec
               item.queueFlags |= vk::QueueFlagBits::eTransfer;
            }

            return std::make_pair(std::move(item), id++);
         });

   auto graphicsQueues = filter_sort_queues(queues, vk::QueueFlagBits::eGraphics);
   auto transferQueues = filter_sort_queues(std::move(queues), vk::QueueFlagBits::eTransfer);

   if (graphicsQueues.empty()) {
      qWarning("QVulkanWindow::initialize() Unable to select a graphics queue");
      return false;
   }

   if (transferQueues.empty()) {
      qWarning("QVulkanWindow::initialize() Unable to select a transfer queue");
      return false;
   }

   try {

      std::tie(m_graphicsDevice, m_graphicsQueues) =
            createLogicalDevice(graphicsQueues.front(), deviceExtensions);

      m_graphicsCommandQueueFamily = graphicsQueues.front().second;

      if (graphicsQueues.front() == transferQueues.front()) {
         // unified graphics and transfer queue
         m_singleDevice = true;

      } else {
         // seperate graphics and transfer queues
         std::tie(m_transferDevice, m_transferQueues) =
               createLogicalDevice(transferQueues.front(), deviceExtensions);

         m_transferCommandQueueFamily = transferQueues.front().second;
      }

   } catch (vk::DeviceLostError& err) {
      m_graphicsDevice.reset();
      m_graphicsQueues.clear();
      m_transferDevice.reset();
      m_transferQueues.clear();
      m_physicalDevices.clear();
      m_physicalDeviceProperties.clear();

   } catch (vk::SystemError& err) {
      qWarning("QVulkanWindow::initialize() unable to create device: %s", err.what());
      return false;

   }

   vk::CommandPoolCreateInfo poolCreateInfo;

   poolCreateInfo.queueFamilyIndex = m_graphicsCommandQueueFamily;
   m_graphicsPool = m_graphicsDevice->createCommandPoolUnique(poolCreateInfo, nullptr, m_deviceFunctions->dynamicLoader());

   vk::PhysicalDeviceMemoryProperties memoryProperties =
         m_physicalDevice.getMemoryProperties(m_deviceFunctions->dynamicLoader());

   uint32_t i = 0;
   std::optional<uint32_t> hostMemIndex;
   std::optional<uint32_t> hostCachedMemIndex;
   std::optional<uint32_t> deviceMemIndex;

   const auto hostBits = vk::MemoryPropertyFlagBits::eHostVisible
         | vk::MemoryPropertyFlagBits::eHostCoherent;

   const auto hostCachedBits = vk::MemoryPropertyFlagBits::eHostVisible
         | vk::MemoryPropertyFlagBits::eHostCoherent;

   const auto deviceBits = vk::MemoryPropertyFlagBits::eDeviceLocal;

   for (const auto& memoryType : memoryProperties.memoryTypes) {

      if (! hostMemIndex.has_value() && ((memoryType.propertyFlags & hostBits) == hostBits)) {
         hostMemIndex = i;
      }

      if (! hostCachedMemIndex.has_value() && ((memoryType.propertyFlags & hostCachedBits) == hostCachedBits)) {
         hostCachedMemIndex = i;
      }

      if (! deviceMemIndex.has_value() && ((memoryType.propertyFlags & deviceBits) == deviceBits)) {
         deviceMemIndex = i;
      }

      ++i;
   }

   // default colorspace and format
   m_colorSpace  = vk::ColorSpaceKHR::eSrgbNonlinear;
   m_colorFormat = vk::Format::eR8G8B8A8Unorm;

   auto surfaceFormats =
         m_physicalDevice.getSurfaceFormatsKHR(m_surface.get(), m_deviceFunctions->dynamicLoader());

   // use first available format for the surface, if there is one
   for (const auto &item : surfaceFormats) {
      if (item.format != vk::Format::eUndefined) {
         m_colorFormat = item.format;
         m_colorSpace  = item.colorSpace;
         break;
      }
   }

   // find the optimal depth stencil format
   auto preferredFormatList = { vk::Format::eD24UnormS8Uint, vk::Format::eD16UnormS8Uint, vk::Format::eD32SfloatS8Uint };

   m_depthFormat = vk::Format::eUndefined;

   for (auto item : preferredFormatList) {
      auto formatProperties = m_physicalDevice.getFormatProperties(item, m_deviceFunctions->dynamicLoader());

      if (formatProperties.optimalTilingFeatures & vk::FormatFeatureFlagBits::eDepthStencilAttachment) {
         m_depthFormat = item;
      }
   }

   if (! populateRenderPass()) {
      return false;
   }

   if (m_renderer != nullptr) {
      m_renderer->initResources();
   }

   return true;
}

std::pair<vk::UniqueHandle<vk::Device, vk::DispatchLoaderDynamic>, QVector<vk::Queue>>
QVulkanWindow::createLogicalDevice(std::pair<const vk::QueueFamilyProperties &, uint32_t> deviceProperties, QStringList extensions)
{
   vk::UniqueHandle<vk::Device, vk::DispatchLoaderDynamic> device;
   QVector<vk::Queue> queueVector;

   auto &[properties, id] = deviceProperties;
   const uint32_t count = properties.queueCount;

   QVector<float> priorities(count, 1.0f);

   vk::DeviceQueueCreateInfo createInfo({}, id, count, priorities.data());

   QVector<const char *> extensionPointers;
   for (const auto &extensionString : extensions) {
      extensionPointers.append(extensionString.constData());
   }

   if (properties.queueFlags & vk::QueueFlagBits::eGraphics) {
      extensionPointers.push_back("VK_KHR_swapchain");
   }

   device =  m_physicalDevice.createDeviceUnique(vk::DeviceCreateInfo(
         {}, 1, &createInfo, 0, nullptr, extensionPointers.size(), extensionPointers.data()),
         nullptr, m_deviceFunctions->dynamicLoader());

   std::vector<vk::Queue> queues;
   queues.reserve(count);

   for (uint32_t i = 0; i < count; ++i) {
      queues.push_back(device->getQueue(id, i));
   }

   return {std::move(device), std::move(queueVector)};
}

bool QVulkanWindow::createSurface() const
{
#if defined(Q_OS_WIN)
   // windows platform specific code

#elif defined(Q_OS_UNIX)
   // unix platform specific code

#endif

   return true;
}

bool QVulkanWindow::populatePhysicalDevices() const
{
   QVector<VkPhysicalDeviceProperties> properties;
   QVector<VkPhysicalDevice> devices;
   uint32_t deviceCount;

   if (! m_physicalDevices.empty()) {
      // already populated
      return true;
   }

   QVulkanInstance *instance = vulkanInstance();
   if (instance == nullptr) {
      qWarning("QVulkanWindow: Unable to retrieve a physical device before an instance is created");
      return false;
   }

   QVulkanFunctions *f = instance->functions();
   VkResult result = f->vkEnumeratePhysicalDevices(instance->vkInstance(), &deviceCount, nullptr);

   if (result != VK_SUCCESS || deviceCount < 1) {
      qWarning("QVulkanWindow: First call to vkEnumeratePhysicalDevices() failed");
      return false;
   }

   devices.resize(deviceCount);
   result = f->vkEnumeratePhysicalDevices(instance->vkInstance(), &deviceCount, devices.data());

   if (result != VK_SUCCESS || deviceCount == 0) {
      qWarning("QVulkanWindow: Second call to vkEnumeratePhysicalDevices() failed");
      return false;
   }

   properties.resize(deviceCount);
   for (uint32_t i = 0; i < deviceCount; ++i) {
      f->vkGetPhysicalDeviceProperties(devices[i], properties.data() + i);
   }

   m_physicalDevices = devices;
   m_physicalDeviceProperties = properties;

   return true;
}

bool QVulkanWindow::populateRenderPass() const
{
   if (m_renderPass) {
      // already populated
      return true;
   }

   bool multisampleEnabled = false;

   if (m_requestedSampleCount > 1) {
      multisampleEnabled = true;
   }

   QVector<vk::AttachmentDescription> attachments;

   attachments.append(vk::AttachmentDescription(
                   vk::AttachmentDescriptionFlagBits{}, m_colorFormat, vk::SampleCountFlagBits::e1,
                   vk::AttachmentLoadOp::eLoad, vk::AttachmentStoreOp::eStore,
                   vk::AttachmentLoadOp::eDontCare, vk::AttachmentStoreOp::eDontCare,
                   vk::ImageLayout::eUndefined, vk::ImageLayout::ePresentSrcKHR));

   attachments.append(vk::AttachmentDescription(
                   vk::AttachmentDescriptionFlagBits{}, m_depthFormat, vk::SampleCountFlagBits::e1,
                   vk::AttachmentLoadOp::eLoad, vk::AttachmentStoreOp::eStore,
                   vk::AttachmentLoadOp::eDontCare, vk::AttachmentStoreOp::eDontCare,
                   vk::ImageLayout::eUndefined, vk::ImageLayout::eDepthStencilAttachmentOptimal));

   uint32_t colorId = 0;

   if (multisampleEnabled) {
      attachments.append(vk::AttachmentDescription(
                   vk::AttachmentDescriptionFlagBits{}, m_colorFormat, m_sampleCount,
                   vk::AttachmentLoadOp::eLoad, vk::AttachmentStoreOp::eStore,
                   vk::AttachmentLoadOp::eDontCare, vk::AttachmentStoreOp::eDontCare,
                   vk::ImageLayout::eUndefined, vk::ImageLayout::eColorAttachmentOptimal));
      colorId = 2;
   }

   vk::AttachmentReference colorAttachment(colorId, vk::ImageLayout::eColorAttachmentOptimal);
   vk::AttachmentReference depthAttachment(1, vk::ImageLayout::eDepthStencilAttachmentOptimal);
   vk::AttachmentReference multisampleAttachment(0, vk::ImageLayout::eColorAttachmentOptimal);

   vk::SubpassDescription subPass;
   subPass.pipelineBindPoint       = vk::PipelineBindPoint::eGraphics;
   subPass.colorAttachmentCount    = 1;
   subPass.pColorAttachments       = &colorAttachment;
   subPass.pDepthStencilAttachment = &depthAttachment;

   if (multisampleEnabled) {
      subPass.pResolveAttachments = &multisampleAttachment;
   }

   vk::RenderPassCreateInfo passInfo;
   passInfo.attachmentCount = attachments.size();
   passInfo.pAttachments    = attachments.data();
   passInfo.subpassCount    = 1;
   passInfo.pSubpasses      = &subPass;

   auto pass = m_deviceFunctions->device().createRenderPassUnique(passInfo, nullptr, m_deviceFunctions->dynamicLoader());

   if (! pass) {
      qWarning("QVulkanWindow: Unable to create render pass");
   }

   m_renderPass = std::move(pass);

   return true;
}

bool QVulkanWindow::populateSwapChain()
{
   m_swapChainImageSize = size() * devicePixelRatio();

   if (m_swapChainImageSize.isEmpty()) {
      return false;
   }

   m_deviceFunctions->device().waitIdle();

   uint32_t numBuffers = 3;
   auto capabilities   = m_physicalDevice.getSurfaceCapabilitiesKHR(m_surface.get());

   if (capabilities.maxImageCount != 0) {
      numBuffers = std::min(numBuffers, capabilities.maxImageCount);
   }

   numBuffers   = std::max(numBuffers, capabilities.minImageCount);
   auto vk_size = capabilities.currentExtent;

   // compute Vulkan extent
   if (vk_size.width == 0xFFFFFFFF) {
      if (vk_size.height != 0xFFFFFFFF) {
         qWarning("QVulkanWindow::populateSwapChain() Unable to set extent, width was invalid but height was not");
         return false;
      }

      vk_size.width  = m_swapChainImageSize.width();
      vk_size.height = m_swapChainImageSize.height();
   }

   // save extent back to QSize
   m_swapChainImageSize = QSize(vk_size.width, vk_size.height);

   vk::SwapchainCreateInfoKHR swapchainInfo;

   swapchainInfo.surface          = m_surface.get();
   swapchainInfo.minImageCount    = numBuffers;
   swapchainInfo.imageFormat      = m_colorFormat;
   swapchainInfo.imageColorSpace  = m_colorSpace;
   swapchainInfo.imageExtent      = vk_size;
   swapchainInfo.imageArrayLayers = 1;
   swapchainInfo.imageUsage       = vk::ImageUsageFlagBits::eColorAttachment | vk::ImageUsageFlagBits::eTransferDst;
   swapchainInfo.imageSharingMode = vk::SharingMode::eExclusive;
   swapchainInfo.preTransform     = capabilities.currentTransform;
   swapchainInfo.compositeAlpha   = vk::CompositeAlphaFlagBitsKHR::eOpaque;
   swapchainInfo.presentMode      = vk::PresentModeKHR::eFifo;
   swapchainInfo.clipped          = true;
   swapchainInfo.oldSwapchain     = m_swapchain.get();

   try {
      m_swapchain    = m_graphicsDevice->createSwapchainKHRUnique(swapchainInfo, nullptr, m_deviceFunctions->dynamicLoader());
      auto vk_images = m_deviceFunctions->device().getSwapchainImagesKHR(m_swapchain.get());

      auto createFramebuffer =
         [this](auto vk_image) {
            auto view = m_deviceFunctions->device().createImageViewUnique(
                  vk::ImageViewCreateInfo{
                     { }, vk_image, vk::ImageViewType::e2D, m_colorFormat,
                     {vk::ComponentSwizzle::eIdentity, vk::ComponentSwizzle::eIdentity,
                      vk::ComponentSwizzle::eIdentity, vk::ComponentSwizzle::eIdentity},
                     {vk::ImageAspectFlagBits::eColor, 0, 1, 0, 1} },
                  nullptr, m_deviceFunctions->dynamicLoader());

            std::vector<vk::ImageView> tmp_images;
            tmp_images.push_back(*view);

            auto framebuffer = m_deviceFunctions->device().createFramebufferUnique(vk::FramebufferCreateInfo(
               {}, m_renderPass.get(), uint32_t(tmp_images.size()), tmp_images.data(),
               m_swapChainImageSize.width(), m_swapChainImageSize.height(), 1),
               nullptr, m_deviceFunctions->dynamicLoader());

            return std::make_tuple(std::move(vk_image), std::move(view), std::move(framebuffer));
         };

      m_framebuffers = map_vector(vk_images, createFramebuffer);

   } catch (vk::SystemError& err) {
      qWarning("QVulkanWindow::populateSwapChain() Unable to create device: %s", err.what());
      return false;

   }

   return true;
}

QVector<VkPhysicalDeviceProperties> QVulkanWindow::availablePhysicalDevices()
{
   if (! m_physicalDeviceProperties.empty()) {
      return m_physicalDeviceProperties;
   }

   if (! populatePhysicalDevices()) {
      return QVector<VkPhysicalDeviceProperties>();
   }

   return m_physicalDeviceProperties;
}

void QVulkanWindow::startFrame()
{
   // ensure we have a working swapchain
   if (! m_swapchain) {
      return;
   }

   // see if the size has changed since last frame
   if (size() * devicePixelRatio() != m_swapChainImageSize) {
      if (! populateSwapChain()) {
         return;
      }
   }

   auto frameData = m_frameData.begin() + m_currentFrame;

   if (! frameData->imageAcquired) {
      if (frameData->frameFenceActive) {
         // make sure previous operations on this frame have completed

         vk::Result result = m_deviceFunctions->device().waitForFences(1, &frameData->frameFence, true, std::numeric_limits<uint64_t>::max());
         if (result != vk::Result::eSuccess) {
            return;
         }

         result = m_deviceFunctions->device().resetFences(1, &frameData->imageFence);
         if (result != vk::Result::eSuccess) {
            return;
         }

         frameData->frameFenceActive = false;

         // get next image
         auto imageResult = m_deviceFunctions->device().acquireNextImageKHR(
               m_swapchain.get(), std::numeric_limits<uint64_t>::max(), frameData->imageSemaphore, frameData->frameFence);

         switch (imageResult.result) {
            case vk::Result::eSuccess:
            case vk::Result::eSuboptimalKHR:
               frameData->imageSemaphoreActive = true;
               frameData->imageAcquired        = true;
               frameData->frameFenceActive     = true;
               break;

            case vk::Result::eErrorOutOfDateKHR:
               // stale swapchain, regenerate and try again next frame
               populateSwapChain();
               requestUpdate();
               break;

            default:
               // some other error occurred, drop this frame
               requestUpdate();
               break;
         }
      }
   }

   if (frameData->imageFenceActive)  {
      // make sure previous operations on this image have completed

      vk::Result result = m_deviceFunctions->device().waitForFences(1, &frameData->imageFence, true, std::numeric_limits<uint64_t>::max());
      if (result != vk::Result::eSuccess) {
         return;
      }

      result = m_deviceFunctions->device().resetFences(1, &frameData->imageFence);
      if (result != vk::Result::eSuccess) {
         return;
      }

      frameData->imageFenceActive = false;
   }

   vk::CommandBufferAllocateInfo allocateInfo;
   allocateInfo.commandPool        = m_graphicsPool.get();
   allocateInfo.level              = vk::CommandBufferLevel::ePrimary;
   allocateInfo.commandBufferCount = 1;

   try {
      auto commandBufferList = m_deviceFunctions->device().allocateCommandBuffersUnique(allocateInfo, m_deviceFunctions->dynamicLoader());
      frameData->commandBuffer = std::move(commandBufferList[0]);

   } catch (vk::SystemError &err) {
      return;

   }

   frameData->commandBuffer->begin(vk::CommandBufferBeginInfo{});

   if (m_renderer) {
      m_renderer->startNextFrame();

   } else {
      // no renderer available, clear the images
      vk::ClearValue clearColor[3];
      vk::ClearColorValue clearBlack{std::array{0.0f, 0.0f, 0.0f, 1.0f}};
      vk::ClearDepthStencilValue clearDepth{1.0f, 0};

      clearColor[0].color        = clearBlack;
      clearColor[1].depthStencil = clearDepth;
      clearColor[2].color        = clearBlack;

      vk::RenderPassBeginInfo renderPassInfo;
      renderPassInfo.renderPass               = m_renderPass.get();
      renderPassInfo.framebuffer              = std::get<2>(m_framebuffers[m_currentFrame]).get();
      renderPassInfo.renderArea.extent.width  = m_swapChainImageSize.width();
      renderPassInfo.renderArea.extent.height = m_swapChainImageSize.height();
      renderPassInfo.pClearValues             = clearColor;
      renderPassInfo.clearValueCount          = 2;

      if (m_requestedSampleCount > 1) {
         renderPassInfo.clearValueCount = 3;
      }

      frameData->commandBuffer->beginRenderPass(renderPassInfo, vk::SubpassContents::eInline,  m_deviceFunctions->dynamicLoader());
      frameData->commandBuffer->endRenderPass(m_deviceFunctions->dynamicLoader());

   }
}

QMatrix4x4 QVulkanWindow::clipCorrectionMatrix()
{
   static const QMatrix4x4 retval = {1.0,  0.0,  0.0,  0.0,
                                     0.0, -1.0,  0.0,  0.0,
                                     0.0,  0.0,  0.5,  0.5,
                                     0.0,  0.0,  0.0,  1.0};

   return retval;
}

int QVulkanWindow::concurrentFrameCount() const
{
   return m_concurrentFrameCount;
}

QVulkanWindowRenderer *QVulkanWindow::createRenderer()
{
   return nullptr;
}

VkCommandBuffer QVulkanWindow::currentCommandBuffer() const
{
   if (m_currentFrame < m_commandbuffers.size()) {
      return nullptr;
   }

   return m_commandbuffers[m_currentFrame];
}

int QVulkanWindow::currentFrame() const
{
   return m_currentFrame;
}

VkFramebuffer QVulkanWindow::currentFramebuffer() const
{
   if (m_currentFrame < m_framebuffers.size()) {
      return nullptr;
   }

   return std::get<2>(m_framebuffers[m_currentFrame]).get();
}

VkRenderPass QVulkanWindow::defaultRenderPass() const
{
   if (! populateRenderPass()) {
      return nullptr;
   }

   return m_renderPass.get();
}

VkDevice QVulkanWindow::device() const
{
   return m_graphicsDevice.get();
}

QVulkanWindow::VulkanFlags QVulkanWindow::flags() const
{
   return m_vulkanFlags;
}

bool QVulkanWindow::isValid() const
{
   return m_isValid;
}

VkPhysicalDevice QVulkanWindow::physicalDevice() const
{
   if (! populatePhysicalDevices()) {
      return nullptr;
   }

   if ((m_physicalDeviceIndex < 0) || (m_physicalDeviceIndex >= m_physicalDevices.size())) {
      qWarning("QVulkanWindow::physicalDevice() Index %d is out of range", m_physicalDeviceIndex);
   }

   return m_physicalDevices[m_physicalDeviceIndex];
}

const VkPhysicalDeviceProperties *QVulkanWindow::physicalDeviceProperties() const
{
   if (! populatePhysicalDevices()) {
      return nullptr;
   }

   if ((m_physicalDeviceIndex < 0) || (m_physicalDeviceIndex >= m_physicalDeviceProperties.size())) {
      qWarning("QVulkanWindow::physicalDeviceProperties() Index %d is out of range", m_physicalDeviceIndex);
      return nullptr;
   }

   return &(m_physicalDeviceProperties[m_physicalDeviceIndex]);
}

void QVulkanWindow::setDeviceExtensions(const QStringList &extensions)
{
   m_requestedDeviceExtensions = extensions;
}

void QVulkanWindow::setFlags(QVulkanWindow::VulkanFlags flags)
{
   m_vulkanFlags = flags;
}

void QVulkanWindow::setPhysicalDeviceIndex(int idx)
{
   auto deviceList = availablePhysicalDevices();

   if (idx >= 0 && idx < deviceList.size()) {
      m_physicalDeviceIndex = idx;
   }
}

void QVulkanWindow::setSampleCount(int sampleCount)
{
   m_requestedSampleCount = sampleCount;

   if (m_requestedSampleCount < 1) {
      m_requestedSampleCount = 1;
   }
}

QVector<QVulkanExtensionProperties> QVulkanWindow::supportedDeviceExtensions()
{
   QVector<QVulkanExtensionProperties> retval;

   if (! populatePhysicalDevices()) {
      return retval;
   }

   QVector<VkExtensionProperties> extensionProperties;

   auto &physicalDevice      = m_physicalDevices[m_physicalDeviceIndex];
   uint32_t extensionCount   = 0;
   QVulkanInstance *instance = vulkanInstance();
   QVulkanFunctions *f       = instance->functions();

   VkResult result = f->vkEnumerateDeviceExtensionProperties(physicalDevice, nullptr, &extensionCount, nullptr);

   if (result != VK_SUCCESS) {
      return retval;
   }

   extensionProperties.resize(extensionCount);

   result = f->vkEnumerateDeviceExtensionProperties(physicalDevice, nullptr, &extensionCount, extensionProperties.data());

   if (result != VK_SUCCESS) {
      return retval;
   }

   for (const auto &item : extensionProperties) {
      retval.append(QVulkanExtensionProperties{item.specVersion, QString::fromUtf8(item.extensionName)});
   }

   return retval;
}

VkSurfaceKHR QVulkanWindow::vulkanSurface() const {

   if (! m_surface) {
      createSurface();
   }

   return m_surface.get();
}

VkImage QVulkanWindow::swapChainImage(int idx) const
{
   if (idx >= m_framebuffers.size()) {
      return nullptr;
   }

   return std::get<0>(m_framebuffers[idx]);
}

int QVulkanWindow::swapChainImageCount() const
{
   return m_framebuffers.count();
}

QSize QVulkanWindow::swapChainImageSize() const
{
   return m_swapChainImageSize;
}

VkImageView QVulkanWindow::swapChainImageView(int idx) const
{
   if (idx >= m_framebuffers.size()) {
      return nullptr;
   }

   return std::get<1>(m_framebuffers[idx]).get();
}
