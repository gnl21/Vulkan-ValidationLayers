/*
 * Copyright (c) 2023-2024 LunarG, Inc.
 * Copyright (c) 2023-2024 Valve Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once
// clang-format off

// This file list all VUID that are not possible to validate.
// This file should never be included, but here for searchability and statistics

const char* unimplementable_validation[] = {
    // sparseAddressSpaceSize can't be tracked in a layer
    // https://gitlab.khronos.org/vulkan/vulkan/-/issues/2403
    "VUID-vkCreateBuffer-flags-00911",

    // Some of the early extensions were not created with a feature bit. This means if the extension is used, we considered it
    // "enabled". This becomes a problem as some coniditional VUIDs depend on the Extension to be enabled, this means we are left
    // with 2 variations of the VUIDs, but only one is not possible to ever get to.
    // The following are a list of these:
    "VUID-VkSubpassDescription2-multisampledRenderToSingleSampled-06869",  // VUID-VkSubpassDescription2-multisampledRenderToSingleSampled-06872

    // This VUID cannot be validated at vkCmdEndDebugUtilsLabelEXT time. Needs spec clarification.
    // https://github.com/KhronosGroup/Vulkan-ValidationLayers/issues/5671
    "VUID-vkCmdEndDebugUtilsLabelEXT-commandBuffer-01912",

    // These VUIDs cannot be validated beyond making sure the pointer is not null
    "VUID-VkMemoryToImageCopyEXT-pHostPointer-09061", "VUID-VkImageToMemoryCopyEXT-pHostPointer-09066"

    // these are already taken care in spirv-val for 08737
    "VUID-VkShaderModuleCreateInfo-pCode-08736", "VUID-VkShaderCreateInfoEXT-pCode-08736",
    "VUID-VkShaderModuleCreateInfo-pCode-08738", "VUID-VkShaderCreateInfoEXT-pCode-08738",

    // These implicit VUs ask to check for a valid structure that has no sType,
    // there is nothing that can actually be validated
    //
    // VkImageSubresourceLayers
    "VUID-VkImageBlit-dstSubresource-parameter",
    "VUID-VkImageBlit-srcSubresource-parameter",
    "VUID-VkImageBlit2-dstSubresource-parameter",
    "VUID-VkImageBlit2-srcSubresource-parameter",
    "VUID-VkImageCopy-dstSubresource-parameter",
    "VUID-VkImageCopy-srcSubresource-parameter",
    "VUID-VkImageCopy2-dstSubresource-parameter",
    "VUID-VkImageCopy2-srcSubresource-parameter",
    "VUID-VkImageResolve-dstSubresource-parameter",
    "VUID-VkImageResolve-srcSubresource-parameter",
    "VUID-VkImageResolve2-dstSubresource-parameter",
    "VUID-VkImageResolve2-srcSubresource-parameter",
    "VUID-VkBufferImageCopy-imageSubresource-parameter",
    "VUID-VkBufferImageCopy2-imageSubresource-parameter",
    "VUID-VkMemoryToImageCopyEXT-imageSubresource-parameter",
    "VUID-VkImageToMemoryCopyEXT-imageSubresource-parameter",
    "VUID-VkCopyMemoryToImageIndirectCommandNV-imageSubresource-parameter",
    // VkImageSubresourceRange
    "VUID-VkImageMemoryBarrier-subresourceRange-parameter",
    "VUID-VkImageMemoryBarrier2-subresourceRange-parameter",
    "VUID-VkHostImageLayoutTransitionInfoEXT-subresourceRange-parameter",
    "VUID-VkImageViewCreateInfo-subresourceRange-parameter",
    // VkImageSubresource
    "VUID-VkImageSubresource2KHR-imageSubresource-parameter",
    "VUID-VkSparseImageMemoryBind-subresource-parameter",
    // VkStencilOpState
    "VUID-VkPipelineDepthStencilStateCreateInfo-front-parameter",
    "VUID-VkPipelineDepthStencilStateCreateInfo-back-parameter",
    // VkClearValue
    "VUID-VkRenderingAttachmentInfo-clearValue-parameter",
    // VkComponentMapping
    "VUID-VkImageViewCreateInfo-components-parameter",
    "VUID-VkSamplerYcbcrConversionCreateInfo-components-parameter",
    "VUID-VkSamplerBorderColorComponentMappingCreateInfoEXT-components-parameter",
    "VUID-VkBufferCollectionPropertiesFUCHSIA-samplerYcbcrConversionComponents-parameter",
    // VkAttachmentReference
    "VUID-VkRenderPassFragmentDensityMapCreateInfoEXT-fragmentDensityMapAttachment-parameter"

    // When:
    //   Struct A has a pointer field to Struct B
    //   Struct B has a non-pointer field to Struct C
    // you get a situation where Struct B has a VU that is not hit because we validate it in Struct C
    "VUID-VkAttachmentSampleLocationsEXT-sampleLocationsInfo-parameter",              // VUID-VkSampleLocationsInfoEXT-sType-sType
    "VUID-VkSubpassSampleLocationsEXT-sampleLocationsInfo-parameter",                 // VUID-VkSampleLocationsInfoEXT-sType-sType
    "VUID-VkPipelineSampleLocationsStateCreateInfoEXT-sampleLocationsInfo-parameter", // VUID-VkSampleLocationsInfoEXT-sType-sType
    "VUID-VkComputePipelineCreateInfo-stage-parameter", // VUID-VkPipelineShaderStageCreateInfo-sType-sType

    // These VUs have "is not NULL it must be a pointer to a valid pointer to valid structure" language
    // There is no actual way to validate thsese
    // https://gitlab.khronos.org/vulkan/vulkan/-/issues/3718
    "VUID-VkDescriptorGetInfoEXT-pUniformTexelBuffer-parameter",
    "VUID-VkDescriptorGetInfoEXT-pStorageTexelBuffer-parameter",
    "VUID-VkDescriptorGetInfoEXT-pUniformBuffer-parameter",
    "VUID-VkDescriptorGetInfoEXT-pStorageBuffer-parameter",
    // These occur in stateless validation when a pointer member is optional and the length member is also optional
    "VUID-VkPipelineColorBlendStateCreateInfo-pAttachments-parameter",
    "VUID-VkSubpassDescription-pResolveAttachments-parameter",
    "VUID-VkTimelineSemaphoreSubmitInfo-pWaitSemaphoreValues-parameter",
    "VUID-VkTimelineSemaphoreSubmitInfo-pSignalSemaphoreValues-parameter",
    "VUID-VkVideoEncodeH264SessionParametersAddInfoKHR-pStdSPSs-parameter",
    "VUID-VkVideoEncodeH264SessionParametersAddInfoKHR-pStdPPSs-parameter",
    "VUID-VkVideoEncodeH265SessionParametersAddInfoKHR-pStdVPSs-parameter",
    "VUID-VkVideoEncodeH265SessionParametersAddInfoKHR-pStdSPSs-parameter",
    "VUID-VkVideoEncodeH265SessionParametersAddInfoKHR-pStdPPSs-parameter",
    "VUID-VkD3D12FenceSubmitInfoKHR-pWaitSemaphoreValues-parameter",
    "VUID-VkD3D12FenceSubmitInfoKHR-pSignalSemaphoreValues-parameter",
    "VUID-VkPresentRegionKHR-pRectangles-parameter",
    "VUID-VkBindDescriptorSetsInfoKHR-pDynamicOffsets-parameter",
    "VUID-VkPhysicalDeviceHostImageCopyPropertiesEXT-pCopySrcLayouts-parameter",
    "VUID-VkPhysicalDeviceHostImageCopyPropertiesEXT-pCopyDstLayouts-parameter",
    "VUID-VkSurfacePresentModeCompatibilityEXT-pPresentModes-parameter",
    "VUID-VkFrameBoundaryEXT-pImages-parameter",
    "VUID-VkFrameBoundaryEXT-pBuffers-parameter",
    "VUID-VkFrameBoundaryEXT-pTag-parameter",
    "VUID-VkMicromapBuildInfoEXT-pUsageCounts-parameter",
    "VUID-VkMicromapBuildInfoEXT-ppUsageCounts-parameter",
    "VUID-VkAccelerationStructureTrianglesOpacityMicromapEXT-pUsageCounts-parameter",
    "VUID-VkAccelerationStructureTrianglesOpacityMicromapEXT-ppUsageCounts-parameter",
    "VUID-VkAccelerationStructureTrianglesDisplacementMicromapNV-pUsageCounts-parameter",
    "VUID-VkAccelerationStructureTrianglesDisplacementMicromapNV-ppUsageCounts-parameter",
    "VUID-VkShaderCreateInfoEXT-pSetLayouts-parameter",
    "VUID-VkShaderCreateInfoEXT-pPushConstantRanges-parameter",
    "VUID-VkLatencySurfaceCapabilitiesNV-pPresentModes-parameter",
    "VUID-vkCmdBeginTransformFeedbackEXT-pCounterBufferOffsets-parameter",
    "VUID-vkCmdEndTransformFeedbackEXT-pCounterBufferOffsets-parameter",
    // These occur in stateless validation when a pointer member is optional and the length member is null
    "VUID-VkDeviceCreateInfo-pEnabledFeatures-parameter",
    "VUID-VkPipelineShaderStageCreateInfo-pSpecializationInfo-parameter",
    "VUID-VkSubpassDescription-pDepthStencilAttachment-parameter",
    "VUID-VkDeviceFaultInfoEXT-pAddressInfos-parameter",
    "VUID-VkDeviceFaultInfoEXT-pVendorInfos-parameter",
    "VUID-VkShaderCreateInfoEXT-pSpecializationInfo-parameter",
    "VUID-VkExportFenceWin32HandleInfoKHR-pAttributes-parameter",
    "VUID-VkExportSemaphoreWin32HandleInfoKHR-pAttributes-parameter",
    "VUID-VkExportMemoryWin32HandleInfoKHR-pAttributes-parameter",
    "VUID-VkExportMemoryWin32HandleInfoNV-pAttributes-parameter",
    // Checking for null-terminated UTF-8 string
    "VUID-VkApplicationInfo-pApplicationName-parameter",
    "VUID-VkApplicationInfo-pEngineName-parameter",
    "VUID-VkDebugUtilsObjectNameInfoEXT-pObjectName-parameter",
    "VUID-VkDebugUtilsMessengerCallbackDataEXT-pMessageIdName-parameter",
    "VUID-VkPipelineShaderStageNodeCreateInfoAMDX-pName-parameter",
    "VUID-VkShaderCreateInfoEXT-pName-parameter",
};

// clang-format on