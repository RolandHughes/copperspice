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

#ifndef QVULKAN_WINDOW_H
#define QVULKAN_WINDOW_H

#include <qwindow.h>
#include <qvulkan_instance.h>
#include <qvulkan_window_renderer.h>

#include <vulkan/vulkan.hpp>

class Q_VULKAN_EXPORT QVulkanWindow: public QWindow
{
   VULKAN_CS_OBJECT(QVulkanWindow)

 public:
   enum VulkanOptions : uint32_t {
      PersistentResources = 0x0001
   };

   using VulkanFlags = QFlags<VulkanOptions>;
   using Flags [[deprecated("Replace with QVulkanWindow::VulkanFlags")]] = VulkanFlags;

   static constexpr const int MAX_CONCURRENT_FRAME_COUNT = 10;

   QVulkanWindow(QWindow *parent = nullptr);
   ~QVulkanWindow();

   QVector<VkPhysicalDeviceProperties> availablePhysicalDevices();
   QMatrix4x4 clipCorrectionMatrix();
   int concurrentFrameCount() const;

   virtual QVulkanWindowRenderer *createRenderer();

   VkCommandBuffer currentCommandBuffer() const;
   int currentFrame() const;
   VkFramebuffer currentFramebuffer() const;
   VkRenderPass defaultRenderPass() const;
   VkDevice device() const;

   QVulkanWindow::VulkanFlags flags() const;
   bool isValid() const;
   VkPhysicalDevice physicalDevice() const;
   const VkPhysicalDeviceProperties *physicalDeviceProperties() const;
   void setDeviceExtensions(const QStringList &extensions);
   void setFlags(QVulkanWindow::VulkanFlags flags);
   void setPhysicalDeviceIndex(int idx);
   void setSampleCount(int sampleCount);
   QVector<QVulkanExtensionProperties> supportedDeviceExtensions();

 private:
   bool populatePhysicalDevices() const;
   bool populateRenderPass() const;

   bool m_isValid;

   int m_concurrentFrameCount;
   int m_currentFrame;
   int m_physicalDeviceIndex;
   int m_requestedSampleCount;
   QStringList m_requestedDeviceExtensions;

   VkDevice m_device;
   VulkanFlags m_vulkanFlags;
   mutable vk::UniqueHandle<vk::RenderPass, vk::DispatchLoaderDynamic> m_renderPass;

   vk::Format m_colorFormat;
   vk::Format m_depthFormat;
   vk::SampleCountFlagBits m_sampleCount;

   mutable QVector<VkPhysicalDevice> m_physicalDevices;
   mutable QVector<VkPhysicalDeviceProperties> m_physicalDeviceProperties;

   QVulkanDeviceFunctions *m_deviceFunctions;

   QVector<vk::CommandBuffer> m_commandbuffers;
   QVector<vk::Framebuffer> m_framebuffers;
};

#endif
