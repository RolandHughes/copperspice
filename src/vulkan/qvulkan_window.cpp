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

#include <qvulkan_functions.h>
#include <qmatrix4x4.h>

QVulkanWindow::QVulkanWindow(QWindow *parent)
   : QWindow(parent), m_concurrentFrameCount(MAX_CONCURRENT_FRAME_COUNT), m_currentFrame(0),
     m_physicalDeviceIndex(0), m_requestedSampleCount(1)
{
   setSurfaceType(QSurface::VulkanSurface);
}

QVulkanWindow::~QVulkanWindow() = default;

bool QVulkanWindow::populatePhysicalDevices() const
{
   QVector<VkPhysicalDeviceProperties> properties;
   QVector<VkPhysicalDevice> devices;
   uint32_t deviceCount;

   if (! m_physicalDevices.empty()) {
      // Already populated
      return true;
   }

   QVulkanInstance *instance = vulkanInstance();
   if (instance == nullptr) {
      qWarning("QVulkanWindow: physical devices cannot be retrieved before an instance is created");
      return false;
   }

   QVulkanFunctions *f = instance->functions();
   VkResult result = f->vkEnumeratePhysicalDevices(instance->vkInstance(), &deviceCount, nullptr);

   if (result != VK_SUCCESS || deviceCount < 1) {
      qWarning("QVulkanWindow: first call to vkEnumeratePhysicalDevices failed");
      return false;
   }

   devices.resize(deviceCount);
   result = f->vkEnumeratePhysicalDevices(instance->vkInstance(), &deviceCount, devices.data());

   if (result != VK_SUCCESS) {
      qWarning("QVulkanWindow: vkEnumeratePhysicalDevices failed");
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

int QVulkanWindow::currentFrame() const
{
   return m_currentFrame;
}

VkDevice QVulkanWindow::device() const
{
   return m_device;
}

QVulkanWindow::VulkanFlags QVulkanWindow::flags() const
{
   return m_vulkanFlags;
}

VkPhysicalDevice QVulkanWindow::physicalDevice() const
{
   if (! populatePhysicalDevices()) {
      return nullptr;
   }

   if ((m_physicalDeviceIndex < 0) || (m_physicalDeviceIndex >= m_physicalDevices.size())) {
      qWarning("QVulkanWindow::physicalDevice() index %d out of range", m_physicalDeviceIndex);
   }

   return m_physicalDevices[m_physicalDeviceIndex];
}

const VkPhysicalDeviceProperties *QVulkanWindow::physicalDeviceProperties() const
{
   if (! populatePhysicalDevices()) {
      return nullptr;
   }

   if ((m_physicalDeviceIndex < 0) || (m_physicalDeviceIndex >= m_physicalDeviceProperties.size())) {
      qWarning("QVulkanWindow::physicalDeviceProperties() index %d out of range", m_physicalDeviceIndex);
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

   auto &physicalDevice    = m_physicalDevices[m_physicalDeviceIndex];
   uint32_t extensionCount = 0;
   QVector<VkExtensionProperties> extensionProperties;

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
      retval.append(QVulkanExtensionProperties{QString::fromUtf8(item.extensionName), item.specVersion});
   }

   return retval;
}
