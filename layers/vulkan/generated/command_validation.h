// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See command_validation_generator.py for modifications

/***************************************************************************
*
* Copyright (c) 2021-2023 Valve Corporation
* Copyright (c) 2021-2023 LunarG, Inc.
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
****************************************************************************/

// NOLINTBEGIN

#pragma once
#include <array>

// Used as key for maps of all vkCmd* calls
// Does not include vkBeginCommandBuffer/vkEndCommandBuffer
typedef enum CMD_TYPE {
    CMD_NONE = 0,
    CMD_BINDPIPELINE = 1,
    CMD_SETVIEWPORT = 2,
    CMD_SETSCISSOR = 3,
    CMD_SETLINEWIDTH = 4,
    CMD_SETDEPTHBIAS = 5,
    CMD_SETBLENDCONSTANTS = 6,
    CMD_SETDEPTHBOUNDS = 7,
    CMD_SETSTENCILCOMPAREMASK = 8,
    CMD_SETSTENCILWRITEMASK = 9,
    CMD_SETSTENCILREFERENCE = 10,
    CMD_BINDDESCRIPTORSETS = 11,
    CMD_BINDINDEXBUFFER = 12,
    CMD_BINDVERTEXBUFFERS = 13,
    CMD_DRAW = 14,
    CMD_DRAWINDEXED = 15,
    CMD_DRAWINDIRECT = 16,
    CMD_DRAWINDEXEDINDIRECT = 17,
    CMD_DISPATCH = 18,
    CMD_DISPATCHINDIRECT = 19,
    CMD_COPYBUFFER = 20,
    CMD_COPYIMAGE = 21,
    CMD_BLITIMAGE = 22,
    CMD_COPYBUFFERTOIMAGE = 23,
    CMD_COPYIMAGETOBUFFER = 24,
    CMD_UPDATEBUFFER = 25,
    CMD_FILLBUFFER = 26,
    CMD_CLEARCOLORIMAGE = 27,
    CMD_CLEARDEPTHSTENCILIMAGE = 28,
    CMD_CLEARATTACHMENTS = 29,
    CMD_RESOLVEIMAGE = 30,
    CMD_SETEVENT = 31,
    CMD_RESETEVENT = 32,
    CMD_WAITEVENTS = 33,
    CMD_PIPELINEBARRIER = 34,
    CMD_BEGINQUERY = 35,
    CMD_ENDQUERY = 36,
    CMD_RESETQUERYPOOL = 37,
    CMD_WRITETIMESTAMP = 38,
    CMD_COPYQUERYPOOLRESULTS = 39,
    CMD_PUSHCONSTANTS = 40,
    CMD_BEGINRENDERPASS = 41,
    CMD_NEXTSUBPASS = 42,
    CMD_ENDRENDERPASS = 43,
    CMD_EXECUTECOMMANDS = 44,
    CMD_SETDEVICEMASK = 45,
    CMD_DISPATCHBASE = 46,
    CMD_DRAWINDIRECTCOUNT = 47,
    CMD_DRAWINDEXEDINDIRECTCOUNT = 48,
    CMD_BEGINRENDERPASS2 = 49,
    CMD_NEXTSUBPASS2 = 50,
    CMD_ENDRENDERPASS2 = 51,
    CMD_SETEVENT2 = 52,
    CMD_RESETEVENT2 = 53,
    CMD_WAITEVENTS2 = 54,
    CMD_PIPELINEBARRIER2 = 55,
    CMD_WRITETIMESTAMP2 = 56,
    CMD_COPYBUFFER2 = 57,
    CMD_COPYIMAGE2 = 58,
    CMD_COPYBUFFERTOIMAGE2 = 59,
    CMD_COPYIMAGETOBUFFER2 = 60,
    CMD_BLITIMAGE2 = 61,
    CMD_RESOLVEIMAGE2 = 62,
    CMD_BEGINRENDERING = 63,
    CMD_ENDRENDERING = 64,
    CMD_SETCULLMODE = 65,
    CMD_SETFRONTFACE = 66,
    CMD_SETPRIMITIVETOPOLOGY = 67,
    CMD_SETVIEWPORTWITHCOUNT = 68,
    CMD_SETSCISSORWITHCOUNT = 69,
    CMD_BINDVERTEXBUFFERS2 = 70,
    CMD_SETDEPTHTESTENABLE = 71,
    CMD_SETDEPTHWRITEENABLE = 72,
    CMD_SETDEPTHCOMPAREOP = 73,
    CMD_SETDEPTHBOUNDSTESTENABLE = 74,
    CMD_SETSTENCILTESTENABLE = 75,
    CMD_SETSTENCILOP = 76,
    CMD_SETRASTERIZERDISCARDENABLE = 77,
    CMD_SETDEPTHBIASENABLE = 78,
    CMD_SETPRIMITIVERESTARTENABLE = 79,
    CMD_BEGINVIDEOCODINGKHR = 80,
    CMD_ENDVIDEOCODINGKHR = 81,
    CMD_CONTROLVIDEOCODINGKHR = 82,
    CMD_DECODEVIDEOKHR = 83,
    CMD_BEGINRENDERINGKHR = 84,
    CMD_ENDRENDERINGKHR = 85,
    CMD_SETDEVICEMASKKHR = 86,
    CMD_DISPATCHBASEKHR = 87,
    CMD_PUSHDESCRIPTORSETKHR = 88,
    CMD_PUSHDESCRIPTORSETWITHTEMPLATEKHR = 89,
    CMD_BEGINRENDERPASS2KHR = 90,
    CMD_NEXTSUBPASS2KHR = 91,
    CMD_ENDRENDERPASS2KHR = 92,
    CMD_DRAWINDIRECTCOUNTKHR = 93,
    CMD_DRAWINDEXEDINDIRECTCOUNTKHR = 94,
    CMD_SETFRAGMENTSHADINGRATEKHR = 95,
    CMD_ENCODEVIDEOKHR = 96,
    CMD_SETEVENT2KHR = 97,
    CMD_RESETEVENT2KHR = 98,
    CMD_WAITEVENTS2KHR = 99,
    CMD_PIPELINEBARRIER2KHR = 100,
    CMD_WRITETIMESTAMP2KHR = 101,
    CMD_WRITEBUFFERMARKER2AMD = 102,
    CMD_COPYBUFFER2KHR = 103,
    CMD_COPYIMAGE2KHR = 104,
    CMD_COPYBUFFERTOIMAGE2KHR = 105,
    CMD_COPYIMAGETOBUFFER2KHR = 106,
    CMD_BLITIMAGE2KHR = 107,
    CMD_RESOLVEIMAGE2KHR = 108,
    CMD_TRACERAYSINDIRECT2KHR = 109,
    CMD_DEBUGMARKERBEGINEXT = 110,
    CMD_DEBUGMARKERENDEXT = 111,
    CMD_DEBUGMARKERINSERTEXT = 112,
    CMD_BINDTRANSFORMFEEDBACKBUFFERSEXT = 113,
    CMD_BEGINTRANSFORMFEEDBACKEXT = 114,
    CMD_ENDTRANSFORMFEEDBACKEXT = 115,
    CMD_BEGINQUERYINDEXEDEXT = 116,
    CMD_ENDQUERYINDEXEDEXT = 117,
    CMD_DRAWINDIRECTBYTECOUNTEXT = 118,
    CMD_CULAUNCHKERNELNVX = 119,
    CMD_DRAWINDIRECTCOUNTAMD = 120,
    CMD_DRAWINDEXEDINDIRECTCOUNTAMD = 121,
    CMD_BEGINCONDITIONALRENDERINGEXT = 122,
    CMD_ENDCONDITIONALRENDERINGEXT = 123,
    CMD_SETVIEWPORTWSCALINGNV = 124,
    CMD_SETDISCARDRECTANGLEEXT = 125,
    CMD_SETDISCARDRECTANGLEENABLEEXT = 126,
    CMD_SETDISCARDRECTANGLEMODEEXT = 127,
    CMD_BEGINDEBUGUTILSLABELEXT = 128,
    CMD_ENDDEBUGUTILSLABELEXT = 129,
    CMD_INSERTDEBUGUTILSLABELEXT = 130,
    CMD_SETSAMPLELOCATIONSEXT = 131,
    CMD_BINDSHADINGRATEIMAGENV = 132,
    CMD_SETVIEWPORTSHADINGRATEPALETTENV = 133,
    CMD_SETCOARSESAMPLEORDERNV = 134,
    CMD_BUILDACCELERATIONSTRUCTURENV = 135,
    CMD_COPYACCELERATIONSTRUCTURENV = 136,
    CMD_TRACERAYSNV = 137,
    CMD_WRITEACCELERATIONSTRUCTURESPROPERTIESNV = 138,
    CMD_WRITEBUFFERMARKERAMD = 139,
    CMD_DRAWMESHTASKSNV = 140,
    CMD_DRAWMESHTASKSINDIRECTNV = 141,
    CMD_DRAWMESHTASKSINDIRECTCOUNTNV = 142,
    CMD_SETEXCLUSIVESCISSORENABLENV = 143,
    CMD_SETEXCLUSIVESCISSORNV = 144,
    CMD_SETCHECKPOINTNV = 145,
    CMD_SETPERFORMANCEMARKERINTEL = 146,
    CMD_SETPERFORMANCESTREAMMARKERINTEL = 147,
    CMD_SETPERFORMANCEOVERRIDEINTEL = 148,
    CMD_SETLINESTIPPLEEXT = 149,
    CMD_SETCULLMODEEXT = 150,
    CMD_SETFRONTFACEEXT = 151,
    CMD_SETPRIMITIVETOPOLOGYEXT = 152,
    CMD_SETVIEWPORTWITHCOUNTEXT = 153,
    CMD_SETSCISSORWITHCOUNTEXT = 154,
    CMD_BINDVERTEXBUFFERS2EXT = 155,
    CMD_SETDEPTHTESTENABLEEXT = 156,
    CMD_SETDEPTHWRITEENABLEEXT = 157,
    CMD_SETDEPTHCOMPAREOPEXT = 158,
    CMD_SETDEPTHBOUNDSTESTENABLEEXT = 159,
    CMD_SETSTENCILTESTENABLEEXT = 160,
    CMD_SETSTENCILOPEXT = 161,
    CMD_PREPROCESSGENERATEDCOMMANDSNV = 162,
    CMD_EXECUTEGENERATEDCOMMANDSNV = 163,
    CMD_BINDPIPELINESHADERGROUPNV = 164,
    CMD_SETDEPTHBIAS2EXT = 165,
    CMD_BINDDESCRIPTORBUFFERSEXT = 166,
    CMD_SETDESCRIPTORBUFFEROFFSETSEXT = 167,
    CMD_BINDDESCRIPTORBUFFEREMBEDDEDSAMPLERSEXT = 168,
    CMD_SETFRAGMENTSHADINGRATEENUMNV = 169,
    CMD_SETVERTEXINPUTEXT = 170,
    CMD_SUBPASSSHADINGHUAWEI = 171,
    CMD_BINDINVOCATIONMASKHUAWEI = 172,
    CMD_SETPATCHCONTROLPOINTSEXT = 173,
    CMD_SETRASTERIZERDISCARDENABLEEXT = 174,
    CMD_SETDEPTHBIASENABLEEXT = 175,
    CMD_SETLOGICOPEXT = 176,
    CMD_SETPRIMITIVERESTARTENABLEEXT = 177,
    CMD_SETCOLORWRITEENABLEEXT = 178,
    CMD_DRAWMULTIEXT = 179,
    CMD_DRAWMULTIINDEXEDEXT = 180,
    CMD_BUILDMICROMAPSEXT = 181,
    CMD_COPYMICROMAPEXT = 182,
    CMD_COPYMICROMAPTOMEMORYEXT = 183,
    CMD_COPYMEMORYTOMICROMAPEXT = 184,
    CMD_WRITEMICROMAPSPROPERTIESEXT = 185,
    CMD_DRAWCLUSTERHUAWEI = 186,
    CMD_DRAWCLUSTERINDIRECTHUAWEI = 187,
    CMD_COPYMEMORYINDIRECTNV = 188,
    CMD_COPYMEMORYTOIMAGEINDIRECTNV = 189,
    CMD_DECOMPRESSMEMORYNV = 190,
    CMD_DECOMPRESSMEMORYINDIRECTCOUNTNV = 191,
    CMD_SETTESSELLATIONDOMAINORIGINEXT = 192,
    CMD_SETDEPTHCLAMPENABLEEXT = 193,
    CMD_SETPOLYGONMODEEXT = 194,
    CMD_SETRASTERIZATIONSAMPLESEXT = 195,
    CMD_SETSAMPLEMASKEXT = 196,
    CMD_SETALPHATOCOVERAGEENABLEEXT = 197,
    CMD_SETALPHATOONEENABLEEXT = 198,
    CMD_SETLOGICOPENABLEEXT = 199,
    CMD_SETCOLORBLENDENABLEEXT = 200,
    CMD_SETCOLORBLENDEQUATIONEXT = 201,
    CMD_SETCOLORWRITEMASKEXT = 202,
    CMD_SETRASTERIZATIONSTREAMEXT = 203,
    CMD_SETCONSERVATIVERASTERIZATIONMODEEXT = 204,
    CMD_SETEXTRAPRIMITIVEOVERESTIMATIONSIZEEXT = 205,
    CMD_SETDEPTHCLIPENABLEEXT = 206,
    CMD_SETSAMPLELOCATIONSENABLEEXT = 207,
    CMD_SETCOLORBLENDADVANCEDEXT = 208,
    CMD_SETPROVOKINGVERTEXMODEEXT = 209,
    CMD_SETLINERASTERIZATIONMODEEXT = 210,
    CMD_SETLINESTIPPLEENABLEEXT = 211,
    CMD_SETDEPTHCLIPNEGATIVEONETOONEEXT = 212,
    CMD_SETVIEWPORTWSCALINGENABLENV = 213,
    CMD_SETVIEWPORTSWIZZLENV = 214,
    CMD_SETCOVERAGETOCOLORENABLENV = 215,
    CMD_SETCOVERAGETOCOLORLOCATIONNV = 216,
    CMD_SETCOVERAGEMODULATIONMODENV = 217,
    CMD_SETCOVERAGEMODULATIONTABLEENABLENV = 218,
    CMD_SETCOVERAGEMODULATIONTABLENV = 219,
    CMD_SETSHADINGRATEIMAGEENABLENV = 220,
    CMD_SETREPRESENTATIVEFRAGMENTTESTENABLENV = 221,
    CMD_SETCOVERAGEREDUCTIONMODENV = 222,
    CMD_OPTICALFLOWEXECUTENV = 223,
    CMD_BINDSHADERSEXT = 224,
    CMD_SETATTACHMENTFEEDBACKLOOPENABLEEXT = 225,
    CMD_BUILDACCELERATIONSTRUCTURESKHR = 226,
    CMD_BUILDACCELERATIONSTRUCTURESINDIRECTKHR = 227,
    CMD_COPYACCELERATIONSTRUCTUREKHR = 228,
    CMD_COPYACCELERATIONSTRUCTURETOMEMORYKHR = 229,
    CMD_COPYMEMORYTOACCELERATIONSTRUCTUREKHR = 230,
    CMD_WRITEACCELERATIONSTRUCTURESPROPERTIESKHR = 231,
    CMD_TRACERAYSKHR = 232,
    CMD_TRACERAYSINDIRECTKHR = 233,
    CMD_SETRAYTRACINGPIPELINESTACKSIZEKHR = 234,
    CMD_DRAWMESHTASKSEXT = 235,
    CMD_DRAWMESHTASKSINDIRECTEXT = 236,
    CMD_DRAWMESHTASKSINDIRECTCOUNTEXT = 237,
    CMD_RANGE_SIZE = 238
} CMD_TYPE;

static const std::array<const char *, CMD_RANGE_SIZE> kGeneratedCommandNameList = {{
    "Command_Undefined",
    "vkCmdBindPipeline",
    "vkCmdSetViewport",
    "vkCmdSetScissor",
    "vkCmdSetLineWidth",
    "vkCmdSetDepthBias",
    "vkCmdSetBlendConstants",
    "vkCmdSetDepthBounds",
    "vkCmdSetStencilCompareMask",
    "vkCmdSetStencilWriteMask",
    "vkCmdSetStencilReference",
    "vkCmdBindDescriptorSets",
    "vkCmdBindIndexBuffer",
    "vkCmdBindVertexBuffers",
    "vkCmdDraw",
    "vkCmdDrawIndexed",
    "vkCmdDrawIndirect",
    "vkCmdDrawIndexedIndirect",
    "vkCmdDispatch",
    "vkCmdDispatchIndirect",
    "vkCmdCopyBuffer",
    "vkCmdCopyImage",
    "vkCmdBlitImage",
    "vkCmdCopyBufferToImage",
    "vkCmdCopyImageToBuffer",
    "vkCmdUpdateBuffer",
    "vkCmdFillBuffer",
    "vkCmdClearColorImage",
    "vkCmdClearDepthStencilImage",
    "vkCmdClearAttachments",
    "vkCmdResolveImage",
    "vkCmdSetEvent",
    "vkCmdResetEvent",
    "vkCmdWaitEvents",
    "vkCmdPipelineBarrier",
    "vkCmdBeginQuery",
    "vkCmdEndQuery",
    "vkCmdResetQueryPool",
    "vkCmdWriteTimestamp",
    "vkCmdCopyQueryPoolResults",
    "vkCmdPushConstants",
    "vkCmdBeginRenderPass",
    "vkCmdNextSubpass",
    "vkCmdEndRenderPass",
    "vkCmdExecuteCommands",
    "vkCmdSetDeviceMask",
    "vkCmdDispatchBase",
    "vkCmdDrawIndirectCount",
    "vkCmdDrawIndexedIndirectCount",
    "vkCmdBeginRenderPass2",
    "vkCmdNextSubpass2",
    "vkCmdEndRenderPass2",
    "vkCmdSetEvent2",
    "vkCmdResetEvent2",
    "vkCmdWaitEvents2",
    "vkCmdPipelineBarrier2",
    "vkCmdWriteTimestamp2",
    "vkCmdCopyBuffer2",
    "vkCmdCopyImage2",
    "vkCmdCopyBufferToImage2",
    "vkCmdCopyImageToBuffer2",
    "vkCmdBlitImage2",
    "vkCmdResolveImage2",
    "vkCmdBeginRendering",
    "vkCmdEndRendering",
    "vkCmdSetCullMode",
    "vkCmdSetFrontFace",
    "vkCmdSetPrimitiveTopology",
    "vkCmdSetViewportWithCount",
    "vkCmdSetScissorWithCount",
    "vkCmdBindVertexBuffers2",
    "vkCmdSetDepthTestEnable",
    "vkCmdSetDepthWriteEnable",
    "vkCmdSetDepthCompareOp",
    "vkCmdSetDepthBoundsTestEnable",
    "vkCmdSetStencilTestEnable",
    "vkCmdSetStencilOp",
    "vkCmdSetRasterizerDiscardEnable",
    "vkCmdSetDepthBiasEnable",
    "vkCmdSetPrimitiveRestartEnable",
    "vkCmdBeginVideoCodingKHR",
    "vkCmdEndVideoCodingKHR",
    "vkCmdControlVideoCodingKHR",
    "vkCmdDecodeVideoKHR",
    "vkCmdBeginRenderingKHR",
    "vkCmdEndRenderingKHR",
    "vkCmdSetDeviceMaskKHR",
    "vkCmdDispatchBaseKHR",
    "vkCmdPushDescriptorSetKHR",
    "vkCmdPushDescriptorSetWithTemplateKHR",
    "vkCmdBeginRenderPass2KHR",
    "vkCmdNextSubpass2KHR",
    "vkCmdEndRenderPass2KHR",
    "vkCmdDrawIndirectCountKHR",
    "vkCmdDrawIndexedIndirectCountKHR",
    "vkCmdSetFragmentShadingRateKHR",
    "vkCmdEncodeVideoKHR",
    "vkCmdSetEvent2KHR",
    "vkCmdResetEvent2KHR",
    "vkCmdWaitEvents2KHR",
    "vkCmdPipelineBarrier2KHR",
    "vkCmdWriteTimestamp2KHR",
    "vkCmdWriteBufferMarker2AMD",
    "vkCmdCopyBuffer2KHR",
    "vkCmdCopyImage2KHR",
    "vkCmdCopyBufferToImage2KHR",
    "vkCmdCopyImageToBuffer2KHR",
    "vkCmdBlitImage2KHR",
    "vkCmdResolveImage2KHR",
    "vkCmdTraceRaysIndirect2KHR",
    "vkCmdDebugMarkerBeginEXT",
    "vkCmdDebugMarkerEndEXT",
    "vkCmdDebugMarkerInsertEXT",
    "vkCmdBindTransformFeedbackBuffersEXT",
    "vkCmdBeginTransformFeedbackEXT",
    "vkCmdEndTransformFeedbackEXT",
    "vkCmdBeginQueryIndexedEXT",
    "vkCmdEndQueryIndexedEXT",
    "vkCmdDrawIndirectByteCountEXT",
    "vkCmdCuLaunchKernelNVX",
    "vkCmdDrawIndirectCountAMD",
    "vkCmdDrawIndexedIndirectCountAMD",
    "vkCmdBeginConditionalRenderingEXT",
    "vkCmdEndConditionalRenderingEXT",
    "vkCmdSetViewportWScalingNV",
    "vkCmdSetDiscardRectangleEXT",
    "vkCmdSetDiscardRectangleEnableEXT",
    "vkCmdSetDiscardRectangleModeEXT",
    "vkCmdBeginDebugUtilsLabelEXT",
    "vkCmdEndDebugUtilsLabelEXT",
    "vkCmdInsertDebugUtilsLabelEXT",
    "vkCmdSetSampleLocationsEXT",
    "vkCmdBindShadingRateImageNV",
    "vkCmdSetViewportShadingRatePaletteNV",
    "vkCmdSetCoarseSampleOrderNV",
    "vkCmdBuildAccelerationStructureNV",
    "vkCmdCopyAccelerationStructureNV",
    "vkCmdTraceRaysNV",
    "vkCmdWriteAccelerationStructuresPropertiesNV",
    "vkCmdWriteBufferMarkerAMD",
    "vkCmdDrawMeshTasksNV",
    "vkCmdDrawMeshTasksIndirectNV",
    "vkCmdDrawMeshTasksIndirectCountNV",
    "vkCmdSetExclusiveScissorEnableNV",
    "vkCmdSetExclusiveScissorNV",
    "vkCmdSetCheckpointNV",
    "vkCmdSetPerformanceMarkerINTEL",
    "vkCmdSetPerformanceStreamMarkerINTEL",
    "vkCmdSetPerformanceOverrideINTEL",
    "vkCmdSetLineStippleEXT",
    "vkCmdSetCullModeEXT",
    "vkCmdSetFrontFaceEXT",
    "vkCmdSetPrimitiveTopologyEXT",
    "vkCmdSetViewportWithCountEXT",
    "vkCmdSetScissorWithCountEXT",
    "vkCmdBindVertexBuffers2EXT",
    "vkCmdSetDepthTestEnableEXT",
    "vkCmdSetDepthWriteEnableEXT",
    "vkCmdSetDepthCompareOpEXT",
    "vkCmdSetDepthBoundsTestEnableEXT",
    "vkCmdSetStencilTestEnableEXT",
    "vkCmdSetStencilOpEXT",
    "vkCmdPreprocessGeneratedCommandsNV",
    "vkCmdExecuteGeneratedCommandsNV",
    "vkCmdBindPipelineShaderGroupNV",
    "vkCmdSetDepthBias2EXT",
    "vkCmdBindDescriptorBuffersEXT",
    "vkCmdSetDescriptorBufferOffsetsEXT",
    "vkCmdBindDescriptorBufferEmbeddedSamplersEXT",
    "vkCmdSetFragmentShadingRateEnumNV",
    "vkCmdSetVertexInputEXT",
    "vkCmdSubpassShadingHUAWEI",
    "vkCmdBindInvocationMaskHUAWEI",
    "vkCmdSetPatchControlPointsEXT",
    "vkCmdSetRasterizerDiscardEnableEXT",
    "vkCmdSetDepthBiasEnableEXT",
    "vkCmdSetLogicOpEXT",
    "vkCmdSetPrimitiveRestartEnableEXT",
    "vkCmdSetColorWriteEnableEXT",
    "vkCmdDrawMultiEXT",
    "vkCmdDrawMultiIndexedEXT",
    "vkCmdBuildMicromapsEXT",
    "vkCmdCopyMicromapEXT",
    "vkCmdCopyMicromapToMemoryEXT",
    "vkCmdCopyMemoryToMicromapEXT",
    "vkCmdWriteMicromapsPropertiesEXT",
    "vkCmdDrawClusterHUAWEI",
    "vkCmdDrawClusterIndirectHUAWEI",
    "vkCmdCopyMemoryIndirectNV",
    "vkCmdCopyMemoryToImageIndirectNV",
    "vkCmdDecompressMemoryNV",
    "vkCmdDecompressMemoryIndirectCountNV",
    "vkCmdSetTessellationDomainOriginEXT",
    "vkCmdSetDepthClampEnableEXT",
    "vkCmdSetPolygonModeEXT",
    "vkCmdSetRasterizationSamplesEXT",
    "vkCmdSetSampleMaskEXT",
    "vkCmdSetAlphaToCoverageEnableEXT",
    "vkCmdSetAlphaToOneEnableEXT",
    "vkCmdSetLogicOpEnableEXT",
    "vkCmdSetColorBlendEnableEXT",
    "vkCmdSetColorBlendEquationEXT",
    "vkCmdSetColorWriteMaskEXT",
    "vkCmdSetRasterizationStreamEXT",
    "vkCmdSetConservativeRasterizationModeEXT",
    "vkCmdSetExtraPrimitiveOverestimationSizeEXT",
    "vkCmdSetDepthClipEnableEXT",
    "vkCmdSetSampleLocationsEnableEXT",
    "vkCmdSetColorBlendAdvancedEXT",
    "vkCmdSetProvokingVertexModeEXT",
    "vkCmdSetLineRasterizationModeEXT",
    "vkCmdSetLineStippleEnableEXT",
    "vkCmdSetDepthClipNegativeOneToOneEXT",
    "vkCmdSetViewportWScalingEnableNV",
    "vkCmdSetViewportSwizzleNV",
    "vkCmdSetCoverageToColorEnableNV",
    "vkCmdSetCoverageToColorLocationNV",
    "vkCmdSetCoverageModulationModeNV",
    "vkCmdSetCoverageModulationTableEnableNV",
    "vkCmdSetCoverageModulationTableNV",
    "vkCmdSetShadingRateImageEnableNV",
    "vkCmdSetRepresentativeFragmentTestEnableNV",
    "vkCmdSetCoverageReductionModeNV",
    "vkCmdOpticalFlowExecuteNV",
    "vkCmdBindShadersEXT",
    "vkCmdSetAttachmentFeedbackLoopEnableEXT",
    "vkCmdBuildAccelerationStructuresKHR",
    "vkCmdBuildAccelerationStructuresIndirectKHR",
    "vkCmdCopyAccelerationStructureKHR",
    "vkCmdCopyAccelerationStructureToMemoryKHR",
    "vkCmdCopyMemoryToAccelerationStructureKHR",
    "vkCmdWriteAccelerationStructuresPropertiesKHR",
    "vkCmdTraceRaysKHR",
    "vkCmdTraceRaysIndirectKHR",
    "vkCmdSetRayTracingPipelineStackSizeKHR",
    "vkCmdDrawMeshTasksEXT",
    "vkCmdDrawMeshTasksIndirectEXT",
    "vkCmdDrawMeshTasksIndirectCountEXT",
}};
// NOLINTEND
