// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See command_validation_generator.py for modifications


/***************************************************************************
 *
 * Copyright (c) 2021-2023 The Khronos Group Inc.
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

#pragma once
#include <array>

// Used as key for maps of all vkCmd* calls
// Does not include vkBeginCommandBuffer/vkEndCommandBuffer
typedef enum CMD_TYPE {
    CMD_NONE = 0,
    CMD_BEGINCONDITIONALRENDERINGEXT = 1,
    CMD_BEGINDEBUGUTILSLABELEXT = 2,
    CMD_BEGINQUERY = 3,
    CMD_BEGINQUERYINDEXEDEXT = 4,
    CMD_BEGINRENDERPASS = 5,
    CMD_BEGINRENDERPASS2 = 6,
    CMD_BEGINRENDERPASS2KHR = 7,
    CMD_BEGINRENDERING = 8,
    CMD_BEGINRENDERINGKHR = 9,
    CMD_BEGINTRANSFORMFEEDBACKEXT = 10,
    CMD_BEGINVIDEOCODINGKHR = 11,
    CMD_BINDDESCRIPTORBUFFEREMBEDDEDSAMPLERSEXT = 12,
    CMD_BINDDESCRIPTORBUFFERSEXT = 13,
    CMD_BINDDESCRIPTORSETS = 14,
    CMD_BINDINDEXBUFFER = 15,
    CMD_BINDINVOCATIONMASKHUAWEI = 16,
    CMD_BINDPIPELINE = 17,
    CMD_BINDPIPELINESHADERGROUPNV = 18,
    CMD_BINDSHADERSEXT = 19,
    CMD_BINDSHADINGRATEIMAGENV = 20,
    CMD_BINDTRANSFORMFEEDBACKBUFFERSEXT = 21,
    CMD_BINDVERTEXBUFFERS = 22,
    CMD_BINDVERTEXBUFFERS2 = 23,
    CMD_BINDVERTEXBUFFERS2EXT = 24,
    CMD_BLITIMAGE = 25,
    CMD_BLITIMAGE2 = 26,
    CMD_BLITIMAGE2KHR = 27,
    CMD_BUILDACCELERATIONSTRUCTURENV = 28,
    CMD_BUILDACCELERATIONSTRUCTURESINDIRECTKHR = 29,
    CMD_BUILDACCELERATIONSTRUCTURESKHR = 30,
    CMD_BUILDMICROMAPSEXT = 31,
    CMD_CLEARATTACHMENTS = 32,
    CMD_CLEARCOLORIMAGE = 33,
    CMD_CLEARDEPTHSTENCILIMAGE = 34,
    CMD_CONTROLVIDEOCODINGKHR = 35,
    CMD_COPYACCELERATIONSTRUCTUREKHR = 36,
    CMD_COPYACCELERATIONSTRUCTURENV = 37,
    CMD_COPYACCELERATIONSTRUCTURETOMEMORYKHR = 38,
    CMD_COPYBUFFER = 39,
    CMD_COPYBUFFER2 = 40,
    CMD_COPYBUFFER2KHR = 41,
    CMD_COPYBUFFERTOIMAGE = 42,
    CMD_COPYBUFFERTOIMAGE2 = 43,
    CMD_COPYBUFFERTOIMAGE2KHR = 44,
    CMD_COPYIMAGE = 45,
    CMD_COPYIMAGE2 = 46,
    CMD_COPYIMAGE2KHR = 47,
    CMD_COPYIMAGETOBUFFER = 48,
    CMD_COPYIMAGETOBUFFER2 = 49,
    CMD_COPYIMAGETOBUFFER2KHR = 50,
    CMD_COPYMEMORYINDIRECTNV = 51,
    CMD_COPYMEMORYTOACCELERATIONSTRUCTUREKHR = 52,
    CMD_COPYMEMORYTOIMAGEINDIRECTNV = 53,
    CMD_COPYMEMORYTOMICROMAPEXT = 54,
    CMD_COPYMICROMAPEXT = 55,
    CMD_COPYMICROMAPTOMEMORYEXT = 56,
    CMD_COPYQUERYPOOLRESULTS = 57,
    CMD_CULAUNCHKERNELNVX = 58,
    CMD_DEBUGMARKERBEGINEXT = 59,
    CMD_DEBUGMARKERENDEXT = 60,
    CMD_DEBUGMARKERINSERTEXT = 61,
    CMD_DECODEVIDEOKHR = 62,
    CMD_DECOMPRESSMEMORYINDIRECTCOUNTNV = 63,
    CMD_DECOMPRESSMEMORYNV = 64,
    CMD_DISPATCH = 65,
    CMD_DISPATCHBASE = 66,
    CMD_DISPATCHBASEKHR = 67,
    CMD_DISPATCHINDIRECT = 68,
    CMD_DRAW = 69,
    CMD_DRAWCLUSTERHUAWEI = 70,
    CMD_DRAWCLUSTERINDIRECTHUAWEI = 71,
    CMD_DRAWINDEXED = 72,
    CMD_DRAWINDEXEDINDIRECT = 73,
    CMD_DRAWINDEXEDINDIRECTCOUNT = 74,
    CMD_DRAWINDEXEDINDIRECTCOUNTAMD = 75,
    CMD_DRAWINDEXEDINDIRECTCOUNTKHR = 76,
    CMD_DRAWINDIRECT = 77,
    CMD_DRAWINDIRECTBYTECOUNTEXT = 78,
    CMD_DRAWINDIRECTCOUNT = 79,
    CMD_DRAWINDIRECTCOUNTAMD = 80,
    CMD_DRAWINDIRECTCOUNTKHR = 81,
    CMD_DRAWMESHTASKSEXT = 82,
    CMD_DRAWMESHTASKSINDIRECTCOUNTEXT = 83,
    CMD_DRAWMESHTASKSINDIRECTCOUNTNV = 84,
    CMD_DRAWMESHTASKSINDIRECTEXT = 85,
    CMD_DRAWMESHTASKSINDIRECTNV = 86,
    CMD_DRAWMESHTASKSNV = 87,
    CMD_DRAWMULTIEXT = 88,
    CMD_DRAWMULTIINDEXEDEXT = 89,
    CMD_ENCODEVIDEOKHR = 90,
    CMD_ENDCONDITIONALRENDERINGEXT = 91,
    CMD_ENDDEBUGUTILSLABELEXT = 92,
    CMD_ENDQUERY = 93,
    CMD_ENDQUERYINDEXEDEXT = 94,
    CMD_ENDRENDERPASS = 95,
    CMD_ENDRENDERPASS2 = 96,
    CMD_ENDRENDERPASS2KHR = 97,
    CMD_ENDRENDERING = 98,
    CMD_ENDRENDERINGKHR = 99,
    CMD_ENDTRANSFORMFEEDBACKEXT = 100,
    CMD_ENDVIDEOCODINGKHR = 101,
    CMD_EXECUTECOMMANDS = 102,
    CMD_EXECUTEGENERATEDCOMMANDSNV = 103,
    CMD_FILLBUFFER = 104,
    CMD_INSERTDEBUGUTILSLABELEXT = 105,
    CMD_NEXTSUBPASS = 106,
    CMD_NEXTSUBPASS2 = 107,
    CMD_NEXTSUBPASS2KHR = 108,
    CMD_OPTICALFLOWEXECUTENV = 109,
    CMD_PIPELINEBARRIER = 110,
    CMD_PIPELINEBARRIER2 = 111,
    CMD_PIPELINEBARRIER2KHR = 112,
    CMD_PREPROCESSGENERATEDCOMMANDSNV = 113,
    CMD_PUSHCONSTANTS = 114,
    CMD_PUSHDESCRIPTORSETKHR = 115,
    CMD_PUSHDESCRIPTORSETWITHTEMPLATEKHR = 116,
    CMD_RESETEVENT = 117,
    CMD_RESETEVENT2 = 118,
    CMD_RESETEVENT2KHR = 119,
    CMD_RESETQUERYPOOL = 120,
    CMD_RESOLVEIMAGE = 121,
    CMD_RESOLVEIMAGE2 = 122,
    CMD_RESOLVEIMAGE2KHR = 123,
    CMD_SETALPHATOCOVERAGEENABLEEXT = 124,
    CMD_SETALPHATOONEENABLEEXT = 125,
    CMD_SETBLENDCONSTANTS = 126,
    CMD_SETCHECKPOINTNV = 127,
    CMD_SETCOARSESAMPLEORDERNV = 128,
    CMD_SETCOLORBLENDADVANCEDEXT = 129,
    CMD_SETCOLORBLENDENABLEEXT = 130,
    CMD_SETCOLORBLENDEQUATIONEXT = 131,
    CMD_SETCOLORWRITEENABLEEXT = 132,
    CMD_SETCOLORWRITEMASKEXT = 133,
    CMD_SETCONSERVATIVERASTERIZATIONMODEEXT = 134,
    CMD_SETCOVERAGEMODULATIONMODENV = 135,
    CMD_SETCOVERAGEMODULATIONTABLEENABLENV = 136,
    CMD_SETCOVERAGEMODULATIONTABLENV = 137,
    CMD_SETCOVERAGEREDUCTIONMODENV = 138,
    CMD_SETCOVERAGETOCOLORENABLENV = 139,
    CMD_SETCOVERAGETOCOLORLOCATIONNV = 140,
    CMD_SETCULLMODE = 141,
    CMD_SETCULLMODEEXT = 142,
    CMD_SETDEPTHBIAS = 143,
    CMD_SETDEPTHBIASENABLE = 144,
    CMD_SETDEPTHBIASENABLEEXT = 145,
    CMD_SETDEPTHBOUNDS = 146,
    CMD_SETDEPTHBOUNDSTESTENABLE = 147,
    CMD_SETDEPTHBOUNDSTESTENABLEEXT = 148,
    CMD_SETDEPTHCLAMPENABLEEXT = 149,
    CMD_SETDEPTHCLIPENABLEEXT = 150,
    CMD_SETDEPTHCLIPNEGATIVEONETOONEEXT = 151,
    CMD_SETDEPTHCOMPAREOP = 152,
    CMD_SETDEPTHCOMPAREOPEXT = 153,
    CMD_SETDEPTHTESTENABLE = 154,
    CMD_SETDEPTHTESTENABLEEXT = 155,
    CMD_SETDEPTHWRITEENABLE = 156,
    CMD_SETDEPTHWRITEENABLEEXT = 157,
    CMD_SETDESCRIPTORBUFFEROFFSETSEXT = 158,
    CMD_SETDEVICEMASK = 159,
    CMD_SETDEVICEMASKKHR = 160,
    CMD_SETDISCARDRECTANGLEEXT = 161,
    CMD_SETDISCARDRECTANGLEENABLEEXT = 162,
    CMD_SETDISCARDRECTANGLEMODEEXT = 163,
    CMD_SETEVENT = 164,
    CMD_SETEVENT2 = 165,
    CMD_SETEVENT2KHR = 166,
    CMD_SETEXCLUSIVESCISSORENABLENV = 167,
    CMD_SETEXCLUSIVESCISSORNV = 168,
    CMD_SETEXTRAPRIMITIVEOVERESTIMATIONSIZEEXT = 169,
    CMD_SETFRAGMENTSHADINGRATEENUMNV = 170,
    CMD_SETFRAGMENTSHADINGRATEKHR = 171,
    CMD_SETFRONTFACE = 172,
    CMD_SETFRONTFACEEXT = 173,
    CMD_SETLINERASTERIZATIONMODEEXT = 174,
    CMD_SETLINESTIPPLEEXT = 175,
    CMD_SETLINESTIPPLEENABLEEXT = 176,
    CMD_SETLINEWIDTH = 177,
    CMD_SETLOGICOPEXT = 178,
    CMD_SETLOGICOPENABLEEXT = 179,
    CMD_SETPATCHCONTROLPOINTSEXT = 180,
    CMD_SETPERFORMANCEMARKERINTEL = 181,
    CMD_SETPERFORMANCEOVERRIDEINTEL = 182,
    CMD_SETPERFORMANCESTREAMMARKERINTEL = 183,
    CMD_SETPOLYGONMODEEXT = 184,
    CMD_SETPRIMITIVERESTARTENABLE = 185,
    CMD_SETPRIMITIVERESTARTENABLEEXT = 186,
    CMD_SETPRIMITIVETOPOLOGY = 187,
    CMD_SETPRIMITIVETOPOLOGYEXT = 188,
    CMD_SETPROVOKINGVERTEXMODEEXT = 189,
    CMD_SETRASTERIZATIONSAMPLESEXT = 190,
    CMD_SETRASTERIZATIONSTREAMEXT = 191,
    CMD_SETRASTERIZERDISCARDENABLE = 192,
    CMD_SETRASTERIZERDISCARDENABLEEXT = 193,
    CMD_SETRAYTRACINGPIPELINESTACKSIZEKHR = 194,
    CMD_SETREPRESENTATIVEFRAGMENTTESTENABLENV = 195,
    CMD_SETSAMPLELOCATIONSEXT = 196,
    CMD_SETSAMPLELOCATIONSENABLEEXT = 197,
    CMD_SETSAMPLEMASKEXT = 198,
    CMD_SETSCISSOR = 199,
    CMD_SETSCISSORWITHCOUNT = 200,
    CMD_SETSCISSORWITHCOUNTEXT = 201,
    CMD_SETSHADINGRATEIMAGEENABLENV = 202,
    CMD_SETSTENCILCOMPAREMASK = 203,
    CMD_SETSTENCILOP = 204,
    CMD_SETSTENCILOPEXT = 205,
    CMD_SETSTENCILREFERENCE = 206,
    CMD_SETSTENCILTESTENABLE = 207,
    CMD_SETSTENCILTESTENABLEEXT = 208,
    CMD_SETSTENCILWRITEMASK = 209,
    CMD_SETTESSELLATIONDOMAINORIGINEXT = 210,
    CMD_SETVERTEXINPUTEXT = 211,
    CMD_SETVIEWPORT = 212,
    CMD_SETVIEWPORTSHADINGRATEPALETTENV = 213,
    CMD_SETVIEWPORTSWIZZLENV = 214,
    CMD_SETVIEWPORTWSCALINGENABLENV = 215,
    CMD_SETVIEWPORTWSCALINGNV = 216,
    CMD_SETVIEWPORTWITHCOUNT = 217,
    CMD_SETVIEWPORTWITHCOUNTEXT = 218,
    CMD_SUBPASSSHADINGHUAWEI = 219,
    CMD_TRACERAYSINDIRECT2KHR = 220,
    CMD_TRACERAYSINDIRECTKHR = 221,
    CMD_TRACERAYSKHR = 222,
    CMD_TRACERAYSNV = 223,
    CMD_UPDATEBUFFER = 224,
    CMD_WAITEVENTS = 225,
    CMD_WAITEVENTS2 = 226,
    CMD_WAITEVENTS2KHR = 227,
    CMD_WRITEACCELERATIONSTRUCTURESPROPERTIESKHR = 228,
    CMD_WRITEACCELERATIONSTRUCTURESPROPERTIESNV = 229,
    CMD_WRITEBUFFERMARKER2AMD = 230,
    CMD_WRITEBUFFERMARKERAMD = 231,
    CMD_WRITEMICROMAPSPROPERTIESEXT = 232,
    CMD_WRITETIMESTAMP = 233,
    CMD_WRITETIMESTAMP2 = 234,
    CMD_WRITETIMESTAMP2KHR = 235,
    CMD_RANGE_SIZE = 236
} CMD_TYPE;

static const std::array<const char *, CMD_RANGE_SIZE> kGeneratedCommandNameList = {{
    "Command_Undefined",
    "vkCmdBeginConditionalRenderingEXT",
    "vkCmdBeginDebugUtilsLabelEXT",
    "vkCmdBeginQuery",
    "vkCmdBeginQueryIndexedEXT",
    "vkCmdBeginRenderPass",
    "vkCmdBeginRenderPass2",
    "vkCmdBeginRenderPass2KHR",
    "vkCmdBeginRendering",
    "vkCmdBeginRenderingKHR",
    "vkCmdBeginTransformFeedbackEXT",
    "vkCmdBeginVideoCodingKHR",
    "vkCmdBindDescriptorBufferEmbeddedSamplersEXT",
    "vkCmdBindDescriptorBuffersEXT",
    "vkCmdBindDescriptorSets",
    "vkCmdBindIndexBuffer",
    "vkCmdBindInvocationMaskHUAWEI",
    "vkCmdBindPipeline",
    "vkCmdBindPipelineShaderGroupNV",
    "vkCmdBindShadersEXT",
    "vkCmdBindShadingRateImageNV",
    "vkCmdBindTransformFeedbackBuffersEXT",
    "vkCmdBindVertexBuffers",
    "vkCmdBindVertexBuffers2",
    "vkCmdBindVertexBuffers2EXT",
    "vkCmdBlitImage",
    "vkCmdBlitImage2",
    "vkCmdBlitImage2KHR",
    "vkCmdBuildAccelerationStructureNV",
    "vkCmdBuildAccelerationStructuresIndirectKHR",
    "vkCmdBuildAccelerationStructuresKHR",
    "vkCmdBuildMicromapsEXT",
    "vkCmdClearAttachments",
    "vkCmdClearColorImage",
    "vkCmdClearDepthStencilImage",
    "vkCmdControlVideoCodingKHR",
    "vkCmdCopyAccelerationStructureKHR",
    "vkCmdCopyAccelerationStructureNV",
    "vkCmdCopyAccelerationStructureToMemoryKHR",
    "vkCmdCopyBuffer",
    "vkCmdCopyBuffer2",
    "vkCmdCopyBuffer2KHR",
    "vkCmdCopyBufferToImage",
    "vkCmdCopyBufferToImage2",
    "vkCmdCopyBufferToImage2KHR",
    "vkCmdCopyImage",
    "vkCmdCopyImage2",
    "vkCmdCopyImage2KHR",
    "vkCmdCopyImageToBuffer",
    "vkCmdCopyImageToBuffer2",
    "vkCmdCopyImageToBuffer2KHR",
    "vkCmdCopyMemoryIndirectNV",
    "vkCmdCopyMemoryToAccelerationStructureKHR",
    "vkCmdCopyMemoryToImageIndirectNV",
    "vkCmdCopyMemoryToMicromapEXT",
    "vkCmdCopyMicromapEXT",
    "vkCmdCopyMicromapToMemoryEXT",
    "vkCmdCopyQueryPoolResults",
    "vkCmdCuLaunchKernelNVX",
    "vkCmdDebugMarkerBeginEXT",
    "vkCmdDebugMarkerEndEXT",
    "vkCmdDebugMarkerInsertEXT",
    "vkCmdDecodeVideoKHR",
    "vkCmdDecompressMemoryIndirectCountNV",
    "vkCmdDecompressMemoryNV",
    "vkCmdDispatch",
    "vkCmdDispatchBase",
    "vkCmdDispatchBaseKHR",
    "vkCmdDispatchIndirect",
    "vkCmdDraw",
    "vkCmdDrawClusterHUAWEI",
    "vkCmdDrawClusterIndirectHUAWEI",
    "vkCmdDrawIndexed",
    "vkCmdDrawIndexedIndirect",
    "vkCmdDrawIndexedIndirectCount",
    "vkCmdDrawIndexedIndirectCountAMD",
    "vkCmdDrawIndexedIndirectCountKHR",
    "vkCmdDrawIndirect",
    "vkCmdDrawIndirectByteCountEXT",
    "vkCmdDrawIndirectCount",
    "vkCmdDrawIndirectCountAMD",
    "vkCmdDrawIndirectCountKHR",
    "vkCmdDrawMeshTasksEXT",
    "vkCmdDrawMeshTasksIndirectCountEXT",
    "vkCmdDrawMeshTasksIndirectCountNV",
    "vkCmdDrawMeshTasksIndirectEXT",
    "vkCmdDrawMeshTasksIndirectNV",
    "vkCmdDrawMeshTasksNV",
    "vkCmdDrawMultiEXT",
    "vkCmdDrawMultiIndexedEXT",
    "vkCmdEncodeVideoKHR",
    "vkCmdEndConditionalRenderingEXT",
    "vkCmdEndDebugUtilsLabelEXT",
    "vkCmdEndQuery",
    "vkCmdEndQueryIndexedEXT",
    "vkCmdEndRenderPass",
    "vkCmdEndRenderPass2",
    "vkCmdEndRenderPass2KHR",
    "vkCmdEndRendering",
    "vkCmdEndRenderingKHR",
    "vkCmdEndTransformFeedbackEXT",
    "vkCmdEndVideoCodingKHR",
    "vkCmdExecuteCommands",
    "vkCmdExecuteGeneratedCommandsNV",
    "vkCmdFillBuffer",
    "vkCmdInsertDebugUtilsLabelEXT",
    "vkCmdNextSubpass",
    "vkCmdNextSubpass2",
    "vkCmdNextSubpass2KHR",
    "vkCmdOpticalFlowExecuteNV",
    "vkCmdPipelineBarrier",
    "vkCmdPipelineBarrier2",
    "vkCmdPipelineBarrier2KHR",
    "vkCmdPreprocessGeneratedCommandsNV",
    "vkCmdPushConstants",
    "vkCmdPushDescriptorSetKHR",
    "vkCmdPushDescriptorSetWithTemplateKHR",
    "vkCmdResetEvent",
    "vkCmdResetEvent2",
    "vkCmdResetEvent2KHR",
    "vkCmdResetQueryPool",
    "vkCmdResolveImage",
    "vkCmdResolveImage2",
    "vkCmdResolveImage2KHR",
    "vkCmdSetAlphaToCoverageEnableEXT",
    "vkCmdSetAlphaToOneEnableEXT",
    "vkCmdSetBlendConstants",
    "vkCmdSetCheckpointNV",
    "vkCmdSetCoarseSampleOrderNV",
    "vkCmdSetColorBlendAdvancedEXT",
    "vkCmdSetColorBlendEnableEXT",
    "vkCmdSetColorBlendEquationEXT",
    "vkCmdSetColorWriteEnableEXT",
    "vkCmdSetColorWriteMaskEXT",
    "vkCmdSetConservativeRasterizationModeEXT",
    "vkCmdSetCoverageModulationModeNV",
    "vkCmdSetCoverageModulationTableEnableNV",
    "vkCmdSetCoverageModulationTableNV",
    "vkCmdSetCoverageReductionModeNV",
    "vkCmdSetCoverageToColorEnableNV",
    "vkCmdSetCoverageToColorLocationNV",
    "vkCmdSetCullMode",
    "vkCmdSetCullModeEXT",
    "vkCmdSetDepthBias",
    "vkCmdSetDepthBiasEnable",
    "vkCmdSetDepthBiasEnableEXT",
    "vkCmdSetDepthBounds",
    "vkCmdSetDepthBoundsTestEnable",
    "vkCmdSetDepthBoundsTestEnableEXT",
    "vkCmdSetDepthClampEnableEXT",
    "vkCmdSetDepthClipEnableEXT",
    "vkCmdSetDepthClipNegativeOneToOneEXT",
    "vkCmdSetDepthCompareOp",
    "vkCmdSetDepthCompareOpEXT",
    "vkCmdSetDepthTestEnable",
    "vkCmdSetDepthTestEnableEXT",
    "vkCmdSetDepthWriteEnable",
    "vkCmdSetDepthWriteEnableEXT",
    "vkCmdSetDescriptorBufferOffsetsEXT",
    "vkCmdSetDeviceMask",
    "vkCmdSetDeviceMaskKHR",
    "vkCmdSetDiscardRectangleEXT",
    "vkCmdSetDiscardRectangleEnableEXT",
    "vkCmdSetDiscardRectangleModeEXT",
    "vkCmdSetEvent",
    "vkCmdSetEvent2",
    "vkCmdSetEvent2KHR",
    "vkCmdSetExclusiveScissorEnableNV",
    "vkCmdSetExclusiveScissorNV",
    "vkCmdSetExtraPrimitiveOverestimationSizeEXT",
    "vkCmdSetFragmentShadingRateEnumNV",
    "vkCmdSetFragmentShadingRateKHR",
    "vkCmdSetFrontFace",
    "vkCmdSetFrontFaceEXT",
    "vkCmdSetLineRasterizationModeEXT",
    "vkCmdSetLineStippleEXT",
    "vkCmdSetLineStippleEnableEXT",
    "vkCmdSetLineWidth",
    "vkCmdSetLogicOpEXT",
    "vkCmdSetLogicOpEnableEXT",
    "vkCmdSetPatchControlPointsEXT",
    "vkCmdSetPerformanceMarkerINTEL",
    "vkCmdSetPerformanceOverrideINTEL",
    "vkCmdSetPerformanceStreamMarkerINTEL",
    "vkCmdSetPolygonModeEXT",
    "vkCmdSetPrimitiveRestartEnable",
    "vkCmdSetPrimitiveRestartEnableEXT",
    "vkCmdSetPrimitiveTopology",
    "vkCmdSetPrimitiveTopologyEXT",
    "vkCmdSetProvokingVertexModeEXT",
    "vkCmdSetRasterizationSamplesEXT",
    "vkCmdSetRasterizationStreamEXT",
    "vkCmdSetRasterizerDiscardEnable",
    "vkCmdSetRasterizerDiscardEnableEXT",
    "vkCmdSetRayTracingPipelineStackSizeKHR",
    "vkCmdSetRepresentativeFragmentTestEnableNV",
    "vkCmdSetSampleLocationsEXT",
    "vkCmdSetSampleLocationsEnableEXT",
    "vkCmdSetSampleMaskEXT",
    "vkCmdSetScissor",
    "vkCmdSetScissorWithCount",
    "vkCmdSetScissorWithCountEXT",
    "vkCmdSetShadingRateImageEnableNV",
    "vkCmdSetStencilCompareMask",
    "vkCmdSetStencilOp",
    "vkCmdSetStencilOpEXT",
    "vkCmdSetStencilReference",
    "vkCmdSetStencilTestEnable",
    "vkCmdSetStencilTestEnableEXT",
    "vkCmdSetStencilWriteMask",
    "vkCmdSetTessellationDomainOriginEXT",
    "vkCmdSetVertexInputEXT",
    "vkCmdSetViewport",
    "vkCmdSetViewportShadingRatePaletteNV",
    "vkCmdSetViewportSwizzleNV",
    "vkCmdSetViewportWScalingEnableNV",
    "vkCmdSetViewportWScalingNV",
    "vkCmdSetViewportWithCount",
    "vkCmdSetViewportWithCountEXT",
    "vkCmdSubpassShadingHUAWEI",
    "vkCmdTraceRaysIndirect2KHR",
    "vkCmdTraceRaysIndirectKHR",
    "vkCmdTraceRaysKHR",
    "vkCmdTraceRaysNV",
    "vkCmdUpdateBuffer",
    "vkCmdWaitEvents",
    "vkCmdWaitEvents2",
    "vkCmdWaitEvents2KHR",
    "vkCmdWriteAccelerationStructuresPropertiesKHR",
    "vkCmdWriteAccelerationStructuresPropertiesNV",
    "vkCmdWriteBufferMarker2AMD",
    "vkCmdWriteBufferMarkerAMD",
    "vkCmdWriteMicromapsPropertiesEXT",
    "vkCmdWriteTimestamp",
    "vkCmdWriteTimestamp2",
    "vkCmdWriteTimestamp2KHR",
}};
