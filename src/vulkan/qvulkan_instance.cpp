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

#include <qvulkan_instance.h>
#include <qvulkan_functions.h>

#include <qapplication.h>

QVulkanInstance::QVulkanInstance()
   : m_errorCode(VK_SUCCESS)
{
   PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr = m_dl.getProcAddress<PFN_vkGetInstanceProcAddr>("vkGetInstanceProcAddr");
   m_dld.init(vkGetInstanceProcAddr);
}

QVulkanInstance::~QVulkanInstance()
{
}

static const QStringList s_requiredExtensions = {
   "VK_KHR_SURFACE",
   "VK_KHR_win32_surface",
   "VK_KHR_xcb_surface",
   "VK_EXT_debug_report"
};

bool QVulkanInstance::create()
{
   for (const auto &item : s_requiredExtensions) {
      if (! m_extensions.contains(item)) {
         m_extensions.append(item);
      }
   }

   m_extensions = filterStringList(std::move(m_extensions), supportedExtensionSet());
   m_layers     = filterStringList(std::move(m_layers), supportedLayerSet());

   QVector<const char *> layerPointers;
   for (const auto &layerString : m_layers) {
      layerPointers.append(layerString.constData());
   }

   QVector<const char *> extensionPointers;
   for (const auto &extensionString : m_extensions) {
      extensionPointers.append(extensionString.constData());
   }

   QString appName = QApplication::instance()->applicationName();

   vk::InstanceCreateInfo createInfo;
   createInfo.enabledLayerCount       = layerPointers.size();
   createInfo.ppEnabledLayerNames     = layerPointers.constData();
   createInfo.enabledExtensionCount   = extensionPointers.size();
   createInfo.ppEnabledExtensionNames = extensionPointers.constData();

   vk::ApplicationInfo applicationInfo;
   applicationInfo.pApplicationName   = appName.constData();
   applicationInfo.applicationVersion = 0;
   applicationInfo.pEngineName        = "CsVulkan";
   applicationInfo.engineVersion      = 0;
   applicationInfo.apiVersion         = VK_API_VERSION_1_1;

   createInfo.pApplicationInfo = &applicationInfo;

   m_debugCallback.reset();

   vk::Instance instance;
   vk::Result result = vk::createInstance(&createInfo, nullptr, &instance, m_dld);

   if (result != vk::Result::eSuccess) {
      m_errorCode = static_cast<VkResult>(result);
      return false;
   }

   m_vkInstance = cs_makeDynamicUnique<vk::Instance>(instance, m_dld);

   m_dld.init(*m_vkInstance);

   if (! m_flags.testFlag(NoDebugOutputRedirect)) {
      vk::DebugReportCallbackCreateInfoEXT debugCreateInfo;

      debugCreateInfo.pfnCallback = &debugCallback;
      debugCreateInfo.flags       = vk::DebugReportFlagBitsEXT::eError | vk::DebugReportFlagBitsEXT::eWarning;

      m_debugCallback = m_vkInstance->createDebugReportCallbackEXTUnique(debugCreateInfo, nullptr, m_dld);
   }

   return true;
}

VkBool32 QVulkanInstance::debugCallback(VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object,
   size_t location, int32_t messageCode, const char *pLayerPrefix, const char *pMessage, void *pUserData)
{
   (void) flags;
   (void) pUserData;

   QString errorMessage;

   if (objectType == VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT) {
      errorMessage = QString("Vulkan error: object type = unknown, location = %1, messageCode = %2, layer = %3, message = %4")
         .formatArg(location).formatArg(messageCode).formatArg(QString::fromUtf8(pLayerPrefix))
         .formatArg(QString::fromUtf8(pMessage));

   } else {
      vk::DebugReportObjectTypeEXT type = static_cast<vk::DebugReportObjectTypeEXT>(objectType);
      QString typeString                = QString::fromStdString(to_string(type));

      errorMessage = QString("Vulkan error: object type = %1, object = %2, location = %3, messageCode = %4, layer = %5, message = %6")
         .formatArg(typeString).formatArg(object).formatArg(location).formatArg(messageCode)
         .formatArg(QString::fromUtf8(pLayerPrefix)).formatArg(QString::fromUtf8(pMessage));
   }

   qDebug("%s", errorMessage.constData());

   return VK_FALSE;
}

void QVulkanInstance::destroy()
{
   m_errorCode = VK_SUCCESS;
   m_debugCallback.reset();
   m_vkInstance.reset();
}

QStringList QVulkanInstance::extensions() const
{
   return m_extensions;
}

VkResult QVulkanInstance::errorCode() const
{
   return m_errorCode;
}

QVulkanInstance::InstanceFlags QVulkanInstance::flags() const
{
   return m_flags;
}

QStringList QVulkanInstance::filterStringList(QStringList input, QSet<QString> validStrings)
{
   auto iter = input.begin();
   while (iter != input.end()) {
      if (validStrings.contains(*iter)) {
         ++iter;
      } else {
         iter = input.erase(iter);
      }
   }

   return input;
}

QVulkanFunctions *QVulkanInstance::functions() const
{
   if (m_functions == nullptr) {
      m_functions.reset(new QVulkanFunctions(*m_vkInstance, m_dld));
   }

   return m_functions.get();
}

void QVulkanInstance::setFlags(QVulkanInstance::InstanceFlags flags)
{
   m_flags = flags;
}

void QVulkanInstance::setExtensions(const QStringList &extensions)
{
   m_extensions = extensions;
}

void QVulkanInstance::setLayers(const QStringList &layers)
{
   m_layers = layers;
}

QVector<QVulkanExtensionProperties> QVulkanInstance::supportedExtensions() const
{
   uint32_t numExtensions;
   vk::Result result;
   QVector<QVulkanExtensionProperties> retval;
   QVector<vk::ExtensionProperties> properties;

   // can not use dynamic loader before instance is loaded
   result = vk::enumerateInstanceExtensionProperties(nullptr, &numExtensions, properties.data());

   if (result != vk::Result::eSuccess) {
      return retval;
   }

   properties.resize(numExtensions);
   result = vk::enumerateInstanceExtensionProperties(nullptr, &numExtensions, properties.data());

   if (result != vk::Result::eSuccess) {
      return retval;
   }

   for (const auto &item: properties) {
      retval.append({QString::fromUtf8(item.extensionName), item.specVersion});
   }

   return retval;
}

QSet<QString> QVulkanInstance::supportedExtensionSet() const
{
   QSet<QString> retval;
   QVector<QVulkanExtensionProperties> extensions = supportedExtensions();

   for (auto &item: extensions) {
      retval.insert(std::move(item.extensionName));
   }

   return retval;
}

QVector<QVulkanLayerProperties> QVulkanInstance::supportedLayers() const
{
   uint32_t numLayers;
   vk::Result result;
   QVector<QVulkanLayerProperties> retval;
   QVector<vk::LayerProperties> properties;

   // can not use dynamic loader before instance is loaded
   result = vk::enumerateInstanceLayerProperties(&numLayers, properties.data());

   if (result != vk::Result::eSuccess) {
      return retval;
   }

   properties.resize(numLayers);
   result = vk::enumerateInstanceLayerProperties(&numLayers, properties.data());

   if (result != vk::Result::eSuccess) {
      return retval;
   }

   for (const auto &item: properties) {
      retval.append({QString::fromUtf8(item.layerName), item.specVersion,
            item.implementationVersion, QString::fromUtf8(item.description)});
   }

   return retval;
}

QSet<QString> QVulkanInstance::supportedLayerSet() const
{
   QSet<QString> retval;
   QVector<QVulkanLayerProperties> layers = supportedLayers();

   for (auto &item : layers) {
      retval.insert(std::move(item.layerName));
   }

   return retval;
}

VkInstance QVulkanInstance::vkInstance() const
{
   return *m_vkInstance;
}
