/**
 * Function: vkgetdeviceimagesparsememoryrequirements
 * Address:  140225f30
 * Signature: undefined vkgetdeviceimagesparsememoryrequirements(void)
 * Body size: 13934 bytes
 */


void vkgetdeviceimagesparsememoryrequirements(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)(**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceProcAddr");
  *(code **)(param_1 + 0x50) = pcVar1;
  uVar2 = (*pcVar1)(param_2,"vkDestroyDevice");
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceQueue");
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueSubmit");
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueWaitIdle");
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDeviceWaitIdle");
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkAllocateMemory");
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkFreeMemory");
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkMapMemory");
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUnmapMemory");
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkFlushMappedMemoryRanges");
  *(undefined8 *)(param_1 + 200) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkInvalidateMappedMemoryRanges");
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceMemoryCommitment");
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindBufferMemory");
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindImageMemory");
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetBufferMemoryRequirements");
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageMemoryRequirements");
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageSparseMemoryRequirements");
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueBindSparse");
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateFence");
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyFence");
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkResetFences");
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetFenceStatus");
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkWaitForFences");
  *(undefined8 *)(param_1 + 0x138) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateSemaphore");
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroySemaphore");
  *(undefined8 *)(param_1 + 0x148) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateEvent");
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyEvent");
  *(undefined8 *)(param_1 + 0x158) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetEventStatus");
  *(undefined8 *)(param_1 + 0x160) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetEvent");
  *(undefined8 *)(param_1 + 0x168) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkResetEvent");
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateQueryPool");
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyQueryPool");
  *(undefined8 *)(param_1 + 0x180) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetQueryPoolResults");
  *(undefined8 *)(param_1 + 0x188) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateBuffer");
  *(undefined8 *)(param_1 + 400) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyBuffer");
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateBufferView");
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyBufferView");
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateImage");
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyImage");
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageSubresourceLayout");
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateImageView");
  *(undefined8 *)(param_1 + 0x1c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyImageView");
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateShaderModule");
  *(undefined8 *)(param_1 + 0x1d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyShaderModule");
  *(undefined8 *)(param_1 + 0x1e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreatePipelineCache");
  *(undefined8 *)(param_1 + 0x1e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyPipelineCache");
  *(undefined8 *)(param_1 + 0x1f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPipelineCacheData");
  *(undefined8 *)(param_1 + 0x1f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkMergePipelineCaches");
  *(undefined8 *)(param_1 + 0x200) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateGraphicsPipelines");
  *(undefined8 *)(param_1 + 0x208) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateComputePipelines");
  *(undefined8 *)(param_1 + 0x210) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyPipeline");
  *(undefined8 *)(param_1 + 0x218) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreatePipelineLayout");
  *(undefined8 *)(param_1 + 0x220) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyPipelineLayout");
  *(undefined8 *)(param_1 + 0x228) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateSampler");
  *(undefined8 *)(param_1 + 0x230) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroySampler");
  *(undefined8 *)(param_1 + 0x238) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateDescriptorSetLayout");
  *(undefined8 *)(param_1 + 0x240) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyDescriptorSetLayout");
  *(undefined8 *)(param_1 + 0x248) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateDescriptorPool");
  *(undefined8 *)(param_1 + 0x250) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyDescriptorPool");
  *(undefined8 *)(param_1 + 600) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkResetDescriptorPool");
  *(undefined8 *)(param_1 + 0x260) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkAllocateDescriptorSets");
  *(undefined8 *)(param_1 + 0x268) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkFreeDescriptorSets");
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUpdateDescriptorSets");
  *(undefined8 *)(param_1 + 0x278) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateFramebuffer");
  *(undefined8 *)(param_1 + 0x280) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyFramebuffer");
  *(undefined8 *)(param_1 + 0x288) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateRenderPass");
  *(undefined8 *)(param_1 + 0x290) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyRenderPass");
  *(undefined8 *)(param_1 + 0x298) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetRenderAreaGranularity");
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateCommandPool");
  *(undefined8 *)(param_1 + 0x2a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyCommandPool");
  *(undefined8 *)(param_1 + 0x2b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkResetCommandPool");
  *(undefined8 *)(param_1 + 0x2b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkAllocateCommandBuffers");
  *(undefined8 *)(param_1 + 0x2c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkFreeCommandBuffers");
  *(undefined8 *)(param_1 + 0x2c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBeginCommandBuffer");
  *(undefined8 *)(param_1 + 0x2d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkEndCommandBuffer");
  *(undefined8 *)(param_1 + 0x2d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkResetCommandBuffer");
  *(undefined8 *)(param_1 + 0x2e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindPipeline");
  *(undefined8 *)(param_1 + 0x2e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetViewport");
  *(undefined8 *)(param_1 + 0x2f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetScissor");
  *(undefined8 *)(param_1 + 0x2f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetLineWidth");
  *(undefined8 *)(param_1 + 0x300) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthBias");
  *(undefined8 *)(param_1 + 0x308) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetBlendConstants");
  *(undefined8 *)(param_1 + 0x310) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthBounds");
  *(undefined8 *)(param_1 + 0x318) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetStencilCompareMask");
  *(undefined8 *)(param_1 + 800) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetStencilWriteMask");
  *(undefined8 *)(param_1 + 0x328) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetStencilReference");
  *(undefined8 *)(param_1 + 0x330) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindDescriptorSets");
  *(undefined8 *)(param_1 + 0x338) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindIndexBuffer");
  *(undefined8 *)(param_1 + 0x340) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindVertexBuffers");
  *(undefined8 *)(param_1 + 0x348) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDraw");
  *(undefined8 *)(param_1 + 0x350) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndexed");
  *(undefined8 *)(param_1 + 0x358) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndirect");
  *(undefined8 *)(param_1 + 0x360) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndexedIndirect");
  *(undefined8 *)(param_1 + 0x368) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDispatch");
  *(undefined8 *)(param_1 + 0x370) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDispatchIndirect");
  *(undefined8 *)(param_1 + 0x378) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyBuffer");
  *(undefined8 *)(param_1 + 0x380) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyImage");
  *(undefined8 *)(param_1 + 0x388) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBlitImage");
  *(undefined8 *)(param_1 + 0x390) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyBufferToImage");
  *(undefined8 *)(param_1 + 0x398) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyImageToBuffer");
  *(undefined8 *)(param_1 + 0x3a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdUpdateBuffer");
  *(undefined8 *)(param_1 + 0x3a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdFillBuffer");
  *(undefined8 *)(param_1 + 0x3b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdClearColorImage");
  *(undefined8 *)(param_1 + 0x3b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdClearDepthStencilImage");
  *(undefined8 *)(param_1 + 0x3c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdClearAttachments");
  *(undefined8 *)(param_1 + 0x3c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdResolveImage");
  *(undefined8 *)(param_1 + 0x3d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetEvent");
  *(undefined8 *)(param_1 + 0x3d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdResetEvent");
  *(undefined8 *)(param_1 + 0x3e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWaitEvents");
  *(undefined8 *)(param_1 + 1000) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPipelineBarrier");
  *(undefined8 *)(param_1 + 0x3f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginQuery");
  *(undefined8 *)(param_1 + 0x3f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndQuery");
  *(undefined8 *)(param_1 + 0x400) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdResetQueryPool");
  *(undefined8 *)(param_1 + 0x408) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWriteTimestamp");
  *(undefined8 *)(param_1 + 0x410) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyQueryPoolResults");
  *(undefined8 *)(param_1 + 0x418) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushConstants");
  *(undefined8 *)(param_1 + 0x420) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginRenderPass");
  *(undefined8 *)(param_1 + 0x428) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdNextSubpass");
  *(undefined8 *)(param_1 + 0x430) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndRenderPass");
  *(undefined8 *)(param_1 + 0x438) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdExecuteCommands");
  *(undefined8 *)(param_1 + 0x440) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindBufferMemory2");
  *(undefined8 *)(param_1 + 0x450) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindImageMemory2");
  *(undefined8 *)(param_1 + 0x458) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceGroupPeerMemoryFeatures");
  *(undefined8 *)(param_1 + 0x460) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDeviceMask");
  *(undefined8 *)(param_1 + 0x468) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDispatchBase");
  *(undefined8 *)(param_1 + 0x470) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageMemoryRequirements2");
  *(undefined8 *)(param_1 + 0x480) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetBufferMemoryRequirements2");
  *(undefined8 *)(param_1 + 0x488) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageSparseMemoryRequirements2");
  *(undefined8 *)(param_1 + 0x490) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkTrimCommandPool");
  *(undefined8 *)(param_1 + 0x4d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceQueue2");
  *(undefined8 *)(param_1 + 0x4d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateSamplerYcbcrConversion");
  *(undefined8 *)(param_1 + 0x4e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroySamplerYcbcrConversion");
  *(undefined8 *)(param_1 + 0x4e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateDescriptorUpdateTemplate");
  *(undefined8 *)(param_1 + 0x4f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyDescriptorUpdateTemplate");
  *(undefined8 *)(param_1 + 0x4f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUpdateDescriptorSetWithTemplate");
  *(undefined8 *)(param_1 + 0x500) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDescriptorSetLayoutSupport");
  *(undefined8 *)(param_1 + 0x520) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndirectCount");
  *(undefined8 *)(param_1 + 0x528) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndexedIndirectCount");
  *(undefined8 *)(param_1 + 0x530) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateRenderPass2");
  *(undefined8 *)(param_1 + 0x538) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginRenderPass2");
  *(undefined8 *)(param_1 + 0x540) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdNextSubpass2");
  *(undefined8 *)(param_1 + 0x548) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndRenderPass2");
  *(undefined8 *)(param_1 + 0x550) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkResetQueryPool");
  *(undefined8 *)(param_1 + 0x558) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetSemaphoreCounterValue");
  *(undefined8 *)(param_1 + 0x560) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkWaitSemaphores");
  *(undefined8 *)(param_1 + 0x568) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSignalSemaphore");
  *(undefined8 *)(param_1 + 0x570) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetBufferDeviceAddress");
  *(undefined8 *)(param_1 + 0x578) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetBufferOpaqueCaptureAddress");
  *(undefined8 *)(param_1 + 0x580) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceMemoryOpaqueCaptureAddress");
  *(undefined8 *)(param_1 + 0x588) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreatePrivateDataSlot");
  *(undefined8 *)(param_1 + 0x598) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyPrivateDataSlot");
  *(undefined8 *)(param_1 + 0x5a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetPrivateData");
  *(undefined8 *)(param_1 + 0x5a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPrivateData");
  *(undefined8 *)(param_1 + 0x5b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetEvent2");
  *(undefined8 *)(param_1 + 0x5b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdResetEvent2");
  *(undefined8 *)(param_1 + 0x5c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWaitEvents2");
  *(undefined8 *)(param_1 + 0x5c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPipelineBarrier2");
  *(undefined8 *)(param_1 + 0x5d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWriteTimestamp2");
  *(undefined8 *)(param_1 + 0x5d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueSubmit2");
  *(undefined8 *)(param_1 + 0x5e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyBuffer2");
  *(undefined8 *)(param_1 + 0x5e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyImage2");
  *(undefined8 *)(param_1 + 0x5f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyBufferToImage2");
  *(undefined8 *)(param_1 + 0x5f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyImageToBuffer2");
  *(undefined8 *)(param_1 + 0x600) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBlitImage2");
  *(undefined8 *)(param_1 + 0x608) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdResolveImage2");
  *(undefined8 *)(param_1 + 0x610) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginRendering");
  *(undefined8 *)(param_1 + 0x618) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndRendering");
  *(undefined8 *)(param_1 + 0x620) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCullMode");
  *(undefined8 *)(param_1 + 0x628) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetFrontFace");
  *(undefined8 *)(param_1 + 0x630) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetPrimitiveTopology");
  *(undefined8 *)(param_1 + 0x638) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetViewportWithCount");
  *(undefined8 *)(param_1 + 0x640) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetScissorWithCount");
  *(undefined8 *)(param_1 + 0x648) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindVertexBuffers2");
  *(undefined8 *)(param_1 + 0x650) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthTestEnable");
  *(undefined8 *)(param_1 + 0x658) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthWriteEnable");
  *(undefined8 *)(param_1 + 0x660) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthCompareOp");
  *(undefined8 *)(param_1 + 0x668) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthBoundsTestEnable");
  *(undefined8 *)(param_1 + 0x670) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetStencilTestEnable");
  *(undefined8 *)(param_1 + 0x678) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetStencilOp");
  *(undefined8 *)(param_1 + 0x680) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRasterizerDiscardEnable");
  *(undefined8 *)(param_1 + 0x688) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthBiasEnable");
  *(undefined8 *)(param_1 + 0x690) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetPrimitiveRestartEnable");
  *(undefined8 *)(param_1 + 0x698) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceBufferMemoryRequirements");
  *(undefined8 *)(param_1 + 0x6a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceImageMemoryRequirements");
  *(undefined8 *)(param_1 + 0x6a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceImageSparseMemoryRequirements");
  *(undefined8 *)(param_1 + 0x6b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetLineStipple");
  *(undefined8 *)(param_1 + 0x6b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkMapMemory2");
  *(undefined8 *)(param_1 + 0x6c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUnmapMemory2");
  *(undefined8 *)(param_1 + 0x6c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindIndexBuffer2");
  *(undefined8 *)(param_1 + 0x6d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetRenderingAreaGranularity");
  *(undefined8 *)(param_1 + 0x6d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceImageSubresourceLayout");
  *(undefined8 *)(param_1 + 0x6e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageSubresourceLayout2");
  *(undefined8 *)(param_1 + 0x6e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushDescriptorSet");
  *(undefined8 *)(param_1 + 0x6f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushDescriptorSetWithTemplate");
  *(undefined8 *)(param_1 + 0x6f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRenderingAttachmentLocations");
  *(undefined8 *)(param_1 + 0x700) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRenderingInputAttachmentIndices");
  *(undefined8 *)(param_1 + 0x708) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindDescriptorSets2");
  *(undefined8 *)(param_1 + 0x710) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushConstants2");
  *(undefined8 *)(param_1 + 0x718) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushDescriptorSet2");
  *(undefined8 *)(param_1 + 0x720) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushDescriptorSetWithTemplate2");
  *(undefined8 *)(param_1 + 0x728) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyMemoryToImage");
  *(undefined8 *)(param_1 + 0x730) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyImageToMemory");
  *(undefined8 *)(param_1 + 0x738) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyImageToImage");
  *(undefined8 *)(param_1 + 0x740) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkTransitionImageLayout");
  *(undefined8 *)(param_1 + 0x748) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateSwapchainKHR");
  *(undefined8 *)(param_1 + 0x778) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroySwapchainKHR");
  *(undefined8 *)(param_1 + 0x780) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetSwapchainImagesKHR");
  *(undefined8 *)(param_1 + 0x788) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkAcquireNextImageKHR");
  *(undefined8 *)(param_1 + 0x790) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueuePresentKHR");
  *(undefined8 *)(param_1 + 0x798) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceGroupPresentCapabilitiesKHR");
  *(undefined8 *)(param_1 + 0x7a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceGroupSurfacePresentModesKHR");
  *(undefined8 *)(param_1 + 0x7a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkAcquireNextImage2KHR");
  *(undefined8 *)(param_1 + 0x7b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateSharedSwapchainsKHR");
  *(undefined8 *)(param_1 + 0x7f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDebugMarkerSetObjectTagEXT");
  *(undefined8 *)(param_1 + 0x860) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDebugMarkerSetObjectNameEXT");
  *(undefined8 *)(param_1 + 0x868) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDebugMarkerBeginEXT");
  *(undefined8 *)(param_1 + 0x870) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDebugMarkerEndEXT");
  *(undefined8 *)(param_1 + 0x878) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDebugMarkerInsertEXT");
  *(undefined8 *)(param_1 + 0x880) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateVideoSessionKHR");
  *(undefined8 *)(param_1 + 0x898) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyVideoSessionKHR");
  *(undefined8 *)(param_1 + 0x8a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetVideoSessionMemoryRequirementsKHR");
  *(undefined8 *)(param_1 + 0x8a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindVideoSessionMemoryKHR");
  *(undefined8 *)(param_1 + 0x8b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateVideoSessionParametersKHR");
  *(undefined8 *)(param_1 + 0x8b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUpdateVideoSessionParametersKHR");
  *(undefined8 *)(param_1 + 0x8c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyVideoSessionParametersKHR");
  *(undefined8 *)(param_1 + 0x8c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginVideoCodingKHR");
  *(undefined8 *)(param_1 + 0x8d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndVideoCodingKHR");
  *(undefined8 *)(param_1 + 0x8d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdControlVideoCodingKHR");
  *(undefined8 *)(param_1 + 0x8e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDecodeVideoKHR");
  *(undefined8 *)(param_1 + 0x8e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindTransformFeedbackBuffersEXT");
  *(undefined8 *)(param_1 + 0x8f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginTransformFeedbackEXT");
  *(undefined8 *)(param_1 + 0x8f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndTransformFeedbackEXT");
  *(undefined8 *)(param_1 + 0x900) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginQueryIndexedEXT");
  *(undefined8 *)(param_1 + 0x908) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndQueryIndexedEXT");
  *(undefined8 *)(param_1 + 0x910) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndirectByteCountEXT");
  *(undefined8 *)(param_1 + 0x918) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateCuModuleNVX");
  *(undefined8 *)(param_1 + 0x920) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateCuFunctionNVX");
  *(undefined8 *)(param_1 + 0x928) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyCuModuleNVX");
  *(undefined8 *)(param_1 + 0x930) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyCuFunctionNVX");
  *(undefined8 *)(param_1 + 0x938) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCuLaunchKernelNVX");
  *(undefined8 *)(param_1 + 0x940) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageViewHandleNVX");
  *(undefined8 *)(param_1 + 0x948) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageViewHandle64NVX");
  *(undefined8 *)(param_1 + 0x950) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageViewAddressNVX");
  *(undefined8 *)(param_1 + 0x958) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndirectCountAMD");
  *(undefined8 *)(param_1 + 0x960) = uVar2;
  if (*(longlong *)(param_1 + 0x528) == 0) {
    *(undefined8 *)(param_1 + 0x528) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndexedIndirectCountAMD");
  *(undefined8 *)(param_1 + 0x968) = uVar2;
  if (*(longlong *)(param_1 + 0x530) == 0) {
    *(undefined8 *)(param_1 + 0x530) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetShaderInfoAMD");
  *(undefined8 *)(param_1 + 0x970) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginRenderingKHR");
  *(undefined8 *)(param_1 + 0x978) = uVar2;
  if (*(longlong *)(param_1 + 0x618) == 0) {
    *(undefined8 *)(param_1 + 0x618) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndRenderingKHR");
  *(undefined8 *)(param_1 + 0x980) = uVar2;
  if (*(longlong *)(param_1 + 0x620) == 0) {
    *(undefined8 *)(param_1 + 0x620) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetMemoryWin32HandleNV");
  *(undefined8 *)(param_1 + 0x998) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceGroupPeerMemoryFeaturesKHR");
  *(undefined8 *)(param_1 + 0x9d8) = uVar2;
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined8 *)(param_1 + 0x460) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDeviceMaskKHR");
  *(undefined8 *)(param_1 + 0x9e0) = uVar2;
  if (*(longlong *)(param_1 + 0x468) == 0) {
    *(undefined8 *)(param_1 + 0x468) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDispatchBaseKHR");
  *(undefined8 *)(param_1 + 0x9e8) = uVar2;
  if (*(longlong *)(param_1 + 0x470) == 0) {
    *(undefined8 *)(param_1 + 0x470) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkTrimCommandPoolKHR");
  *(undefined8 *)(param_1 + 0x9f8) = uVar2;
  if (*(longlong *)(param_1 + 0x4d0) == 0) {
    *(undefined8 *)(param_1 + 0x4d0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetMemoryWin32HandleKHR");
  *(undefined8 *)(param_1 + 0xa10) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetMemoryWin32HandlePropertiesKHR");
  *(undefined8 *)(param_1 + 0xa18) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetMemoryFdKHR");
  *(undefined8 *)(param_1 + 0xa20) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetMemoryFdPropertiesKHR");
  *(undefined8 *)(param_1 + 0xa28) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkImportSemaphoreWin32HandleKHR");
  *(undefined8 *)(param_1 + 0xa38) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetSemaphoreWin32HandleKHR");
  *(undefined8 *)(param_1 + 0xa40) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkImportSemaphoreFdKHR");
  *(undefined8 *)(param_1 + 0xa48) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetSemaphoreFdKHR");
  *(undefined8 *)(param_1 + 0xa50) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushDescriptorSetKHR");
  *(undefined8 *)(param_1 + 0xa58) = uVar2;
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
    *(undefined8 *)(param_1 + 0x6f0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushDescriptorSetWithTemplateKHR");
  *(undefined8 *)(param_1 + 0xa60) = uVar2;
  if (*(longlong *)(param_1 + 0x6f8) == 0) {
    *(undefined8 *)(param_1 + 0x6f8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginConditionalRenderingEXT");
  *(undefined8 *)(param_1 + 0xa68) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndConditionalRenderingEXT");
  *(undefined8 *)(param_1 + 0xa70) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateDescriptorUpdateTemplateKHR");
  *(undefined8 *)(param_1 + 0xa78) = uVar2;
  if (*(longlong *)(param_1 + 0x4f0) == 0) {
    *(undefined8 *)(param_1 + 0x4f0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyDescriptorUpdateTemplateKHR");
  *(undefined8 *)(param_1 + 0xa80) = uVar2;
  if (*(longlong *)(param_1 + 0x4f8) == 0) {
    *(undefined8 *)(param_1 + 0x4f8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUpdateDescriptorSetWithTemplateKHR");
  *(undefined8 *)(param_1 + 0xa88) = uVar2;
  if (*(longlong *)(param_1 + 0x500) == 0) {
    *(undefined8 *)(param_1 + 0x500) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetViewportWScalingNV");
  *(undefined8 *)(param_1 + 0xa90) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDisplayPowerControlEXT");
  *(undefined8 *)(param_1 + 0xab8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkRegisterDeviceEventEXT");
  *(undefined8 *)(param_1 + 0xac0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkRegisterDisplayEventEXT");
  *(undefined8 *)(param_1 + 0xac8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetSwapchainCounterEXT");
  *(undefined8 *)(param_1 + 0xad0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetRefreshCycleDurationGOOGLE");
  *(undefined8 *)(param_1 + 0xad8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPastPresentationTimingGOOGLE");
  *(undefined8 *)(param_1 + 0xae0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDiscardRectangleEXT");
  *(undefined8 *)(param_1 + 0xae8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDiscardRectangleEnableEXT");
  *(undefined8 *)(param_1 + 0xaf0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDiscardRectangleModeEXT");
  *(undefined8 *)(param_1 + 0xaf8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetHdrMetadataEXT");
  *(undefined8 *)(param_1 + 0xb00) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateRenderPass2KHR");
  *(undefined8 *)(param_1 + 0xb08) = uVar2;
  if (*(longlong *)(param_1 + 0x538) == 0) {
    *(undefined8 *)(param_1 + 0x538) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginRenderPass2KHR");
  *(undefined8 *)(param_1 + 0xb10) = uVar2;
  if (*(longlong *)(param_1 + 0x540) == 0) {
    *(undefined8 *)(param_1 + 0x540) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdNextSubpass2KHR");
  *(undefined8 *)(param_1 + 0xb18) = uVar2;
  if (*(longlong *)(param_1 + 0x548) == 0) {
    *(undefined8 *)(param_1 + 0x548) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndRenderPass2KHR");
  *(undefined8 *)(param_1 + 0xb20) = uVar2;
  if (*(longlong *)(param_1 + 0x550) == 0) {
    *(undefined8 *)(param_1 + 0x550) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetSwapchainStatusKHR");
  *(undefined8 *)(param_1 + 0xb28) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkImportFenceWin32HandleKHR");
  *(undefined8 *)(param_1 + 0xb38) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetFenceWin32HandleKHR");
  *(undefined8 *)(param_1 + 0xb40) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkImportFenceFdKHR");
  *(undefined8 *)(param_1 + 0xb48) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetFenceFdKHR");
  *(undefined8 *)(param_1 + 0xb50) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkAcquireProfilingLockKHR");
  *(undefined8 *)(param_1 + 0xb68) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkReleaseProfilingLockKHR");
  *(undefined8 *)(param_1 + 0xb70) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetDebugUtilsObjectNameEXT");
  *(undefined8 *)(param_1 + 3000) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetDebugUtilsObjectTagEXT");
  *(undefined8 *)(param_1 + 0xbc0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueBeginDebugUtilsLabelEXT");
  *(undefined8 *)(param_1 + 0xbc8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueEndDebugUtilsLabelEXT");
  *(undefined8 *)(param_1 + 0xbd0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueInsertDebugUtilsLabelEXT");
  *(undefined8 *)(param_1 + 0xbd8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginDebugUtilsLabelEXT");
  *(undefined8 *)(param_1 + 0xbe0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndDebugUtilsLabelEXT");
  *(undefined8 *)(param_1 + 0xbe8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdInsertDebugUtilsLabelEXT");
  *(undefined8 *)(param_1 + 0xbf0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetSampleLocationsEXT");
  *(undefined8 *)(param_1 + 0xc58) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageMemoryRequirements2KHR");
  *(undefined8 *)(param_1 + 0xc68) = uVar2;
  if (*(longlong *)(param_1 + 0x480) == 0) {
    *(undefined8 *)(param_1 + 0x480) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetBufferMemoryRequirements2KHR");
  *(undefined8 *)(param_1 + 0xc70) = uVar2;
  if (*(longlong *)(param_1 + 0x488) == 0) {
    *(undefined8 *)(param_1 + 0x488) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageSparseMemoryRequirements2KHR");
  *(undefined8 *)(param_1 + 0xc78) = uVar2;
  if (*(longlong *)(param_1 + 0x490) == 0) {
    *(undefined8 *)(param_1 + 0x490) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateAccelerationStructureKHR");
  *(undefined8 *)(param_1 + 0xc80) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyAccelerationStructureKHR");
  *(undefined8 *)(param_1 + 0xc88) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBuildAccelerationStructuresKHR");
  *(undefined8 *)(param_1 + 0xc90) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBuildAccelerationStructuresIndirectKHR");
  *(undefined8 *)(param_1 + 0xc98) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBuildAccelerationStructuresKHR");
  *(undefined8 *)(param_1 + 0xca0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyAccelerationStructureKHR");
  *(undefined8 *)(param_1 + 0xca8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyAccelerationStructureToMemoryKHR");
  *(undefined8 *)(param_1 + 0xcb0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyMemoryToAccelerationStructureKHR");
  *(undefined8 *)(param_1 + 0xcb8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkWriteAccelerationStructuresPropertiesKHR");
  *(undefined8 *)(param_1 + 0xcc0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyAccelerationStructureKHR");
  *(undefined8 *)(param_1 + 0xcc8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyAccelerationStructureToMemoryKHR");
  *(undefined8 *)(param_1 + 0xcd0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyMemoryToAccelerationStructureKHR");
  *(undefined8 *)(param_1 + 0xcd8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetAccelerationStructureDeviceAddressKHR");
  *(undefined8 *)(param_1 + 0xce0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWriteAccelerationStructuresPropertiesKHR");
  *(undefined8 *)(param_1 + 0xce8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceAccelerationStructureCompatibilityKHR");
  *(undefined8 *)(param_1 + 0xcf0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetAccelerationStructureBuildSizesKHR");
  *(undefined8 *)(param_1 + 0xcf8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdTraceRaysKHR");
  *(undefined8 *)(param_1 + 0xd00) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateRayTracingPipelinesKHR");
  *(undefined8 *)(param_1 + 0xd08) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetRayTracingShaderGroupHandlesKHR");
  *(undefined8 *)(param_1 + 0xd10) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetRayTracingCaptureReplayShaderGroupHandlesKHR")
  ;
  *(undefined8 *)(param_1 + 0xd18) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdTraceRaysIndirectKHR");
  *(undefined8 *)(param_1 + 0xd20) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetRayTracingShaderGroupStackSizeKHR");
  *(undefined8 *)(param_1 + 0xd28) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRayTracingPipelineStackSizeKHR");
  *(undefined8 *)(param_1 + 0xd30) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateSamplerYcbcrConversionKHR");
  *(undefined8 *)(param_1 + 0xd38) = uVar2;
  if (*(longlong *)(param_1 + 0x4e0) == 0) {
    *(undefined8 *)(param_1 + 0x4e0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroySamplerYcbcrConversionKHR");
  *(undefined8 *)(param_1 + 0xd40) = uVar2;
  if (*(longlong *)(param_1 + 0x4e8) == 0) {
    *(undefined8 *)(param_1 + 0x4e8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindBufferMemory2KHR");
  *(undefined8 *)(param_1 + 0xd48) = uVar2;
  if (*(longlong *)(param_1 + 0x450) == 0) {
    *(undefined8 *)(param_1 + 0x450) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindImageMemory2KHR");
  *(undefined8 *)(param_1 + 0xd50) = uVar2;
  if (*(longlong *)(param_1 + 0x458) == 0) {
    *(undefined8 *)(param_1 + 0x458) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageDrmFormatModifierPropertiesEXT");
  *(undefined8 *)(param_1 + 0xd58) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateValidationCacheEXT");
  *(undefined8 *)(param_1 + 0xd60) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyValidationCacheEXT");
  *(undefined8 *)(param_1 + 0xd68) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkMergeValidationCachesEXT");
  *(undefined8 *)(param_1 + 0xd70) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetValidationCacheDataEXT");
  *(undefined8 *)(param_1 + 0xd78) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindShadingRateImageNV");
  *(undefined8 *)(param_1 + 0xd80) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetViewportShadingRatePaletteNV");
  *(undefined8 *)(param_1 + 0xd88) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCoarseSampleOrderNV");
  *(undefined8 *)(param_1 + 0xd90) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateAccelerationStructureNV");
  *(undefined8 *)(param_1 + 0xd98) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyAccelerationStructureNV");
  *(undefined8 *)(param_1 + 0xda0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetAccelerationStructureMemoryRequirementsNV");
  *(undefined8 *)(param_1 + 0xda8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindAccelerationStructureMemoryNV");
  *(undefined8 *)(param_1 + 0xdb0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBuildAccelerationStructureNV");
  *(undefined8 *)(param_1 + 0xdb8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyAccelerationStructureNV");
  *(undefined8 *)(param_1 + 0xdc0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdTraceRaysNV");
  *(undefined8 *)(param_1 + 0xdc8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateRayTracingPipelinesNV");
  *(undefined8 *)(param_1 + 0xdd0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetRayTracingShaderGroupHandlesNV");
  *(undefined8 *)(param_1 + 0xdd8) = uVar2;
  if (*(longlong *)(param_1 + 0xd10) == 0) {
    *(undefined8 *)(param_1 + 0xd10) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetAccelerationStructureHandleNV");
  *(undefined8 *)(param_1 + 0xde0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWriteAccelerationStructuresPropertiesNV");
  *(undefined8 *)(param_1 + 0xde8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCompileDeferredNV");
  *(undefined8 *)(param_1 + 0xdf0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDescriptorSetLayoutSupportKHR");
  *(undefined8 *)(param_1 + 0xdf8) = uVar2;
  if (*(longlong *)(param_1 + 0x520) == 0) {
    *(undefined8 *)(param_1 + 0x520) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndirectCountKHR");
  *(undefined8 *)(param_1 + 0xe00) = uVar2;
  if (*(longlong *)(param_1 + 0x528) == 0) {
    *(undefined8 *)(param_1 + 0x528) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawIndexedIndirectCountKHR");
  *(undefined8 *)(param_1 + 0xe08) = uVar2;
  if (*(longlong *)(param_1 + 0x530) == 0) {
    *(undefined8 *)(param_1 + 0x530) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetMemoryHostPointerPropertiesEXT");
  *(undefined8 *)(param_1 + 0xe10) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWriteBufferMarkerAMD");
  *(undefined8 *)(param_1 + 0xe18) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWriteBufferMarker2AMD");
  *(undefined8 *)(param_1 + 0xe20) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetCalibratedTimestampsEXT");
  *(undefined8 *)(param_1 + 0xe30) = uVar2;
  if (*(longlong *)(param_1 + 0x16d0) == 0) {
    *(undefined8 *)(param_1 + 0x16d0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawMeshTasksNV");
  *(undefined8 *)(param_1 + 0xe38) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawMeshTasksIndirectNV");
  *(undefined8 *)(param_1 + 0xe40) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawMeshTasksIndirectCountNV");
  *(undefined8 *)(param_1 + 0xe48) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetExclusiveScissorEnableNV");
  *(undefined8 *)(param_1 + 0xe50) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetExclusiveScissorNV");
  *(undefined8 *)(param_1 + 0xe58) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCheckpointNV");
  *(undefined8 *)(param_1 + 0xe60) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetQueueCheckpointDataNV");
  *(undefined8 *)(param_1 + 0xe68) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetQueueCheckpointData2NV");
  *(undefined8 *)(param_1 + 0xe70) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetSemaphoreCounterValueKHR");
  *(undefined8 *)(param_1 + 0xe78) = uVar2;
  if (*(longlong *)(param_1 + 0x560) == 0) {
    *(undefined8 *)(param_1 + 0x560) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkWaitSemaphoresKHR");
  *(undefined8 *)(param_1 + 0xe80) = uVar2;
  if (*(longlong *)(param_1 + 0x568) == 0) {
    *(undefined8 *)(param_1 + 0x568) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSignalSemaphoreKHR");
  *(undefined8 *)(param_1 + 0xe88) = uVar2;
  if (*(longlong *)(param_1 + 0x570) == 0) {
    *(undefined8 *)(param_1 + 0x570) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkInitializePerformanceApiINTEL");
  *(undefined8 *)(param_1 + 0xe90) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUninitializePerformanceApiINTEL");
  *(undefined8 *)(param_1 + 0xe98) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetPerformanceMarkerINTEL");
  *(undefined8 *)(param_1 + 0xea0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetPerformanceStreamMarkerINTEL");
  *(undefined8 *)(param_1 + 0xea8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetPerformanceOverrideINTEL");
  *(undefined8 *)(param_1 + 0xeb0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkAcquirePerformanceConfigurationINTEL");
  *(undefined8 *)(param_1 + 0xeb8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkReleasePerformanceConfigurationINTEL");
  *(undefined8 *)(param_1 + 0xec0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueSetPerformanceConfigurationINTEL");
  *(undefined8 *)(param_1 + 0xec8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPerformanceParameterINTEL");
  *(undefined8 *)(param_1 + 0xed0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetLocalDimmingAMD");
  *(undefined8 *)(param_1 + 0xed8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetFragmentShadingRateKHR");
  *(undefined8 *)(param_1 + 0xef8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRenderingAttachmentLocationsKHR");
  *(undefined8 *)(param_1 + 0xf00) = uVar2;
  if (*(longlong *)(param_1 + 0x700) == 0) {
    *(undefined8 *)(param_1 + 0x700) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRenderingInputAttachmentIndicesKHR");
  *(undefined8 *)(param_1 + 0xf08) = uVar2;
  if (*(longlong *)(param_1 + 0x708) == 0) {
    *(undefined8 *)(param_1 + 0x708) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetBufferDeviceAddressEXT");
  *(undefined8 *)(param_1 + 0xf10) = uVar2;
  if (*(longlong *)(param_1 + 0x578) == 0) {
    *(undefined8 *)(param_1 + 0x578) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkWaitForPresentKHR");
  *(undefined8 *)(param_1 + 0xf20) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkAcquireFullScreenExclusiveModeEXT");
  *(undefined8 *)(param_1 + 0xf40) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkReleaseFullScreenExclusiveModeEXT");
  *(undefined8 *)(param_1 + 0xf48) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceGroupSurfacePresentModes2EXT");
  *(undefined8 *)(param_1 + 0xf50) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetBufferDeviceAddressKHR");
  *(undefined8 *)(param_1 + 0xf60) = uVar2;
  if (*(longlong *)(param_1 + 0x578) == 0) {
    *(undefined8 *)(param_1 + 0x578) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetBufferOpaqueCaptureAddressKHR");
  *(undefined8 *)(param_1 + 0xf68) = uVar2;
  if (*(longlong *)(param_1 + 0x580) == 0) {
    *(undefined8 *)(param_1 + 0x580) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceMemoryOpaqueCaptureAddressKHR");
  *(undefined8 *)(param_1 + 0xf70) = uVar2;
  if (*(longlong *)(param_1 + 0x588) == 0) {
    *(undefined8 *)(param_1 + 0x588) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetLineStippleEXT");
  *(undefined8 *)(param_1 + 0xf78) = uVar2;
  if (*(longlong *)(param_1 + 0x6b8) == 0) {
    *(undefined8 *)(param_1 + 0x6b8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkResetQueryPoolEXT");
  *(undefined8 *)(param_1 + 0xf80) = uVar2;
  if (*(longlong *)(param_1 + 0x558) == 0) {
    *(undefined8 *)(param_1 + 0x558) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCullModeEXT");
  *(undefined8 *)(param_1 + 0xf88) = uVar2;
  if (*(longlong *)(param_1 + 0x628) == 0) {
    *(undefined8 *)(param_1 + 0x628) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetFrontFaceEXT");
  *(undefined8 *)(param_1 + 0xf90) = uVar2;
  if (*(longlong *)(param_1 + 0x630) == 0) {
    *(undefined8 *)(param_1 + 0x630) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetPrimitiveTopologyEXT");
  *(undefined8 *)(param_1 + 0xf98) = uVar2;
  if (*(longlong *)(param_1 + 0x638) == 0) {
    *(undefined8 *)(param_1 + 0x638) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetViewportWithCountEXT");
  *(undefined8 *)(param_1 + 4000) = uVar2;
  if (*(longlong *)(param_1 + 0x640) == 0) {
    *(undefined8 *)(param_1 + 0x640) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetScissorWithCountEXT");
  *(undefined8 *)(param_1 + 0xfa8) = uVar2;
  if (*(longlong *)(param_1 + 0x648) == 0) {
    *(undefined8 *)(param_1 + 0x648) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindVertexBuffers2EXT");
  *(undefined8 *)(param_1 + 0xfb0) = uVar2;
  if (*(longlong *)(param_1 + 0x650) == 0) {
    *(undefined8 *)(param_1 + 0x650) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthTestEnableEXT");
  *(undefined8 *)(param_1 + 0xfb8) = uVar2;
  if (*(longlong *)(param_1 + 0x658) == 0) {
    *(undefined8 *)(param_1 + 0x658) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthWriteEnableEXT");
  *(undefined8 *)(param_1 + 0xfc0) = uVar2;
  if (*(longlong *)(param_1 + 0x660) == 0) {
    *(undefined8 *)(param_1 + 0x660) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthCompareOpEXT");
  *(undefined8 *)(param_1 + 0xfc8) = uVar2;
  if (*(longlong *)(param_1 + 0x668) == 0) {
    *(undefined8 *)(param_1 + 0x668) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthBoundsTestEnableEXT");
  *(undefined8 *)(param_1 + 0xfd0) = uVar2;
  if (*(longlong *)(param_1 + 0x670) == 0) {
    *(undefined8 *)(param_1 + 0x670) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetStencilTestEnableEXT");
  *(undefined8 *)(param_1 + 0xfd8) = uVar2;
  if (*(longlong *)(param_1 + 0x678) == 0) {
    *(undefined8 *)(param_1 + 0x678) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetStencilOpEXT");
  *(undefined8 *)(param_1 + 0xfe0) = uVar2;
  if (*(longlong *)(param_1 + 0x680) == 0) {
    *(undefined8 *)(param_1 + 0x680) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateDeferredOperationKHR");
  *(undefined8 *)(param_1 + 0xfe8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyDeferredOperationKHR");
  *(undefined8 *)(param_1 + 0xff0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeferredOperationMaxConcurrencyKHR");
  *(undefined8 *)(param_1 + 0xff8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeferredOperationResultKHR");
  *(undefined8 *)(param_1 + 0x1000) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDeferredOperationJoinKHR");
  *(undefined8 *)(param_1 + 0x1008) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPipelineExecutablePropertiesKHR");
  *(undefined8 *)(param_1 + 0x1010) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPipelineExecutableStatisticsKHR");
  *(undefined8 *)(param_1 + 0x1018) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPipelineExecutableInternalRepresentationsKHR")
  ;
  *(undefined8 *)(param_1 + 0x1020) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyMemoryToImageEXT");
  *(undefined8 *)(param_1 + 0x1028) = uVar2;
  if (*(longlong *)(param_1 + 0x730) == 0) {
    *(undefined8 *)(param_1 + 0x730) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyImageToMemoryEXT");
  *(undefined8 *)(param_1 + 0x1030) = uVar2;
  if (*(longlong *)(param_1 + 0x738) == 0) {
    *(undefined8 *)(param_1 + 0x738) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyImageToImageEXT");
  *(undefined8 *)(param_1 + 0x1038) = uVar2;
  if (*(longlong *)(param_1 + 0x740) == 0) {
    *(undefined8 *)(param_1 + 0x740) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkTransitionImageLayoutEXT");
  *(undefined8 *)(param_1 + 0x1040) = uVar2;
  if (*(longlong *)(param_1 + 0x748) == 0) {
    *(undefined8 *)(param_1 + 0x748) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageSubresourceLayout2EXT");
  *(undefined8 *)(param_1 + 0x1048) = uVar2;
  if (*(longlong *)(param_1 + 0x6e8) == 0) {
    *(undefined8 *)(param_1 + 0x6e8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkMapMemory2KHR");
  *(undefined8 *)(param_1 + 0x1050) = uVar2;
  if (*(longlong *)(param_1 + 0x6c0) == 0) {
    *(undefined8 *)(param_1 + 0x6c0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUnmapMemory2KHR");
  *(undefined8 *)(param_1 + 0x1058) = uVar2;
  if (*(longlong *)(param_1 + 0x6c8) == 0) {
    *(undefined8 *)(param_1 + 0x6c8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkReleaseSwapchainImagesEXT");
  *(undefined8 *)(param_1 + 0x1060) = uVar2;
  if (*(longlong *)(param_1 + 0x1608) == 0) {
    *(undefined8 *)(param_1 + 0x1608) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetGeneratedCommandsMemoryRequirementsNV");
  *(undefined8 *)(param_1 + 0x1068) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPreprocessGeneratedCommandsNV");
  *(undefined8 *)(param_1 + 0x1070) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdExecuteGeneratedCommandsNV");
  *(undefined8 *)(param_1 + 0x1078) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindPipelineShaderGroupNV");
  *(undefined8 *)(param_1 + 0x1080) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateIndirectCommandsLayoutNV");
  *(undefined8 *)(param_1 + 0x1088) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyIndirectCommandsLayoutNV");
  *(undefined8 *)(param_1 + 0x1090) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthBias2EXT");
  *(undefined8 *)(param_1 + 0x1098) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreatePrivateDataSlotEXT");
  *(undefined8 *)(param_1 + 0x10b0) = uVar2;
  if (*(longlong *)(param_1 + 0x598) == 0) {
    *(undefined8 *)(param_1 + 0x598) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyPrivateDataSlotEXT");
  *(undefined8 *)(param_1 + 0x10b8) = uVar2;
  if (*(longlong *)(param_1 + 0x5a0) == 0) {
    *(undefined8 *)(param_1 + 0x5a0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetPrivateDataEXT");
  *(undefined8 *)(param_1 + 0x10c0) = uVar2;
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    *(undefined8 *)(param_1 + 0x5a8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPrivateDataEXT");
  *(undefined8 *)(param_1 + 0x10c8) = uVar2;
  if (*(longlong *)(param_1 + 0x5b0) == 0) {
    *(undefined8 *)(param_1 + 0x5b0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetEncodedVideoSessionParametersKHR");
  *(undefined8 *)(param_1 + 0x10d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEncodeVideoKHR");
  *(undefined8 *)(param_1 + 0x10e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDispatchTileQCOM");
  *(undefined8 *)(param_1 + 0x1118) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBeginPerTileExecutionQCOM");
  *(undefined8 *)(param_1 + 0x1120) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndPerTileExecutionQCOM");
  *(undefined8 *)(param_1 + 0x1128) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetEvent2KHR");
  *(undefined8 *)(param_1 + 0x1138) = uVar2;
  if (*(longlong *)(param_1 + 0x5b8) == 0) {
    *(undefined8 *)(param_1 + 0x5b8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdResetEvent2KHR");
  *(undefined8 *)(param_1 + 0x1140) = uVar2;
  if (*(longlong *)(param_1 + 0x5c0) == 0) {
    *(undefined8 *)(param_1 + 0x5c0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWaitEvents2KHR");
  *(undefined8 *)(param_1 + 0x1148) = uVar2;
  if (*(longlong *)(param_1 + 0x5c8) == 0) {
    *(undefined8 *)(param_1 + 0x5c8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPipelineBarrier2KHR");
  *(undefined8 *)(param_1 + 0x1150) = uVar2;
  if (*(longlong *)(param_1 + 0x5d0) == 0) {
    *(undefined8 *)(param_1 + 0x5d0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWriteTimestamp2KHR");
  *(undefined8 *)(param_1 + 0x1158) = uVar2;
  if (*(longlong *)(param_1 + 0x5d8) == 0) {
    *(undefined8 *)(param_1 + 0x5d8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueSubmit2KHR");
  *(undefined8 *)(param_1 + 0x1160) = uVar2;
  if (*(longlong *)(param_1 + 0x5e0) == 0) {
    *(undefined8 *)(param_1 + 0x5e0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDescriptorSetLayoutSizeEXT");
  *(undefined8 *)(param_1 + 0x1168) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDescriptorSetLayoutBindingOffsetEXT");
  *(undefined8 *)(param_1 + 0x1170) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDescriptorEXT");
  *(undefined8 *)(param_1 + 0x1178) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindDescriptorBuffersEXT");
  *(undefined8 *)(param_1 + 0x1180) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDescriptorBufferOffsetsEXT");
  *(undefined8 *)(param_1 + 0x1188) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
  *(undefined8 *)(param_1 + 0x1190) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetBufferOpaqueCaptureDescriptorDataEXT");
  *(undefined8 *)(param_1 + 0x1198) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageOpaqueCaptureDescriptorDataEXT");
  *(undefined8 *)(param_1 + 0x11a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageViewOpaqueCaptureDescriptorDataEXT");
  *(undefined8 *)(param_1 + 0x11a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetSamplerOpaqueCaptureDescriptorDataEXT");
  *(undefined8 *)(param_1 + 0x11b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))
                    (param_2,"vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
  *(undefined8 *)(param_1 + 0x11b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetFragmentShadingRateEnumNV");
  *(undefined8 *)(param_1 + 0x11c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawMeshTasksEXT");
  *(undefined8 *)(param_1 + 0x11c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawMeshTasksIndirectEXT");
  *(undefined8 *)(param_1 + 0x11d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawMeshTasksIndirectCountEXT");
  *(undefined8 *)(param_1 + 0x11d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyBuffer2KHR");
  *(undefined8 *)(param_1 + 0x11e0) = uVar2;
  if (*(longlong *)(param_1 + 0x5e8) == 0) {
    *(undefined8 *)(param_1 + 0x5e8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyImage2KHR");
  *(undefined8 *)(param_1 + 0x11e8) = uVar2;
  if (*(longlong *)(param_1 + 0x5f0) == 0) {
    *(undefined8 *)(param_1 + 0x5f0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyBufferToImage2KHR");
  *(undefined8 *)(param_1 + 0x11f0) = uVar2;
  if (*(longlong *)(param_1 + 0x5f8) == 0) {
    *(undefined8 *)(param_1 + 0x5f8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyImageToBuffer2KHR");
  *(undefined8 *)(param_1 + 0x11f8) = uVar2;
  if (*(longlong *)(param_1 + 0x600) == 0) {
    *(undefined8 *)(param_1 + 0x600) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBlitImage2KHR");
  *(undefined8 *)(param_1 + 0x1200) = uVar2;
  if (*(longlong *)(param_1 + 0x608) == 0) {
    *(undefined8 *)(param_1 + 0x608) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdResolveImage2KHR");
  *(undefined8 *)(param_1 + 0x1208) = uVar2;
  if (*(longlong *)(param_1 + 0x610) == 0) {
    *(undefined8 *)(param_1 + 0x610) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceFaultInfoEXT");
  *(undefined8 *)(param_1 + 0x1210) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetVertexInputEXT");
  *(undefined8 *)(param_1 + 0x1238) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
  *(undefined8 *)(param_1 + 0x1288) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSubpassShadingHUAWEI");
  *(undefined8 *)(param_1 + 0x1290) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindInvocationMaskHUAWEI");
  *(undefined8 *)(param_1 + 0x1298) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetMemoryRemoteAddressNV");
  *(undefined8 *)(param_1 + 0x12a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPipelinePropertiesEXT");
  *(undefined8 *)(param_1 + 0x12a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetPatchControlPointsEXT");
  *(undefined8 *)(param_1 + 0x12b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRasterizerDiscardEnableEXT");
  *(undefined8 *)(param_1 + 0x12b8) = uVar2;
  if (*(longlong *)(param_1 + 0x688) == 0) {
    *(undefined8 *)(param_1 + 0x688) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthBiasEnableEXT");
  *(undefined8 *)(param_1 + 0x12c0) = uVar2;
  if (*(longlong *)(param_1 + 0x690) == 0) {
    *(undefined8 *)(param_1 + 0x690) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetLogicOpEXT");
  *(undefined8 *)(param_1 + 0x12c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetPrimitiveRestartEnableEXT");
  *(undefined8 *)(param_1 + 0x12d0) = uVar2;
  if (*(longlong *)(param_1 + 0x698) == 0) {
    *(undefined8 *)(param_1 + 0x698) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetColorWriteEnableEXT");
  *(undefined8 *)(param_1 + 0x12e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdTraceRaysIndirect2KHR");
  *(undefined8 *)(param_1 + 0x12f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawMultiEXT");
  *(undefined8 *)(param_1 + 0x12f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawMultiIndexedEXT");
  *(undefined8 *)(param_1 + 0x1300) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateMicromapEXT");
  *(undefined8 *)(param_1 + 0x1308) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyMicromapEXT");
  *(undefined8 *)(param_1 + 0x1310) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBuildMicromapsEXT");
  *(undefined8 *)(param_1 + 0x1318) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBuildMicromapsEXT");
  *(undefined8 *)(param_1 + 0x1320) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyMicromapEXT");
  *(undefined8 *)(param_1 + 0x1328) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyMicromapToMemoryEXT");
  *(undefined8 *)(param_1 + 0x1330) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCopyMemoryToMicromapEXT");
  *(undefined8 *)(param_1 + 0x1338) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkWriteMicromapsPropertiesEXT");
  *(undefined8 *)(param_1 + 0x1340) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyMicromapEXT");
  *(undefined8 *)(param_1 + 0x1348) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyMicromapToMemoryEXT");
  *(undefined8 *)(param_1 + 0x1350) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyMemoryToMicromapEXT");
  *(undefined8 *)(param_1 + 0x1358) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdWriteMicromapsPropertiesEXT");
  *(undefined8 *)(param_1 + 0x1360) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceMicromapCompatibilityEXT");
  *(undefined8 *)(param_1 + 0x1368) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetMicromapBuildSizesEXT");
  *(undefined8 *)(param_1 + 0x1370) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawClusterHUAWEI");
  *(undefined8 *)(param_1 + 0x1378) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDrawClusterIndirectHUAWEI");
  *(undefined8 *)(param_1 + 0x1380) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetDeviceMemoryPriorityEXT");
  *(undefined8 *)(param_1 + 5000) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceBufferMemoryRequirementsKHR");
  *(undefined8 *)(param_1 + 0x1390) = uVar2;
  if (*(longlong *)(param_1 + 0x6a0) == 0) {
    *(undefined8 *)(param_1 + 0x6a0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceImageMemoryRequirementsKHR");
  *(undefined8 *)(param_1 + 0x1398) = uVar2;
  if (*(longlong *)(param_1 + 0x6a8) == 0) {
    *(undefined8 *)(param_1 + 0x6a8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceImageSparseMemoryRequirementsKHR");
  *(undefined8 *)(param_1 + 0x13a0) = uVar2;
  if (*(longlong *)(param_1 + 0x6b0) == 0) {
    *(undefined8 *)(param_1 + 0x6b0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDescriptorSetLayoutHostMappingInfoVALVE");
  *(undefined8 *)(param_1 + 0x13a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDescriptorSetHostMappingVALVE");
  *(undefined8 *)(param_1 + 0x13b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyMemoryIndirectNV");
  *(undefined8 *)(param_1 + 0x13b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyMemoryToImageIndirectNV");
  *(undefined8 *)(param_1 + 0x13c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDecompressMemoryNV");
  *(undefined8 *)(param_1 + 0x13c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDecompressMemoryIndirectCountNV");
  *(undefined8 *)(param_1 + 0x13d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPipelineIndirectMemoryRequirementsNV");
  *(undefined8 *)(param_1 + 0x13d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdUpdatePipelineIndirectBufferNV");
  *(undefined8 *)(param_1 + 0x13e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPipelineIndirectDeviceAddressNV");
  *(undefined8 *)(param_1 + 0x13e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthClampEnableEXT");
  *(undefined8 *)(param_1 + 0x13f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetPolygonModeEXT");
  *(undefined8 *)(param_1 + 0x13f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRasterizationSamplesEXT");
  *(undefined8 *)(param_1 + 0x1400) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetSampleMaskEXT");
  *(undefined8 *)(param_1 + 0x1408) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetAlphaToCoverageEnableEXT");
  *(undefined8 *)(param_1 + 0x1410) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetAlphaToOneEnableEXT");
  *(undefined8 *)(param_1 + 0x1418) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetLogicOpEnableEXT");
  *(undefined8 *)(param_1 + 0x1420) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetColorBlendEnableEXT");
  *(undefined8 *)(param_1 + 0x1428) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetColorBlendEquationEXT");
  *(undefined8 *)(param_1 + 0x1430) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetColorWriteMaskEXT");
  *(undefined8 *)(param_1 + 0x1438) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetTessellationDomainOriginEXT");
  *(undefined8 *)(param_1 + 0x1440) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRasterizationStreamEXT");
  *(undefined8 *)(param_1 + 0x1448) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetConservativeRasterizationModeEXT");
  *(undefined8 *)(param_1 + 0x1450) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetExtraPrimitiveOverestimationSizeEXT");
  *(undefined8 *)(param_1 + 0x1458) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthClipEnableEXT");
  *(undefined8 *)(param_1 + 0x1460) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetSampleLocationsEnableEXT");
  *(undefined8 *)(param_1 + 0x1468) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetColorBlendAdvancedEXT");
  *(undefined8 *)(param_1 + 0x1470) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetProvokingVertexModeEXT");
  *(undefined8 *)(param_1 + 0x1478) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetLineRasterizationModeEXT");
  *(undefined8 *)(param_1 + 0x1480) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetLineStippleEnableEXT");
  *(undefined8 *)(param_1 + 0x1488) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthClipNegativeOneToOneEXT");
  *(undefined8 *)(param_1 + 0x1490) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetViewportWScalingEnableNV");
  *(undefined8 *)(param_1 + 0x1498) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetViewportSwizzleNV");
  *(undefined8 *)(param_1 + 0x14a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCoverageToColorEnableNV");
  *(undefined8 *)(param_1 + 0x14a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCoverageToColorLocationNV");
  *(undefined8 *)(param_1 + 0x14b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCoverageModulationModeNV");
  *(undefined8 *)(param_1 + 0x14b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCoverageModulationTableEnableNV");
  *(undefined8 *)(param_1 + 0x14c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCoverageModulationTableNV");
  *(undefined8 *)(param_1 + 0x14c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetShadingRateImageEnableNV");
  *(undefined8 *)(param_1 + 0x14d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetRepresentativeFragmentTestEnableNV");
  *(undefined8 *)(param_1 + 0x14d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetCoverageReductionModeNV");
  *(undefined8 *)(param_1 + 0x14e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateTensorARM");
  *(undefined8 *)(param_1 + 0x14e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyTensorARM");
  *(undefined8 *)(param_1 + 0x14f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateTensorViewARM");
  *(undefined8 *)(param_1 + 0x14f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyTensorViewARM");
  *(undefined8 *)(param_1 + 0x1500) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetTensorMemoryRequirementsARM");
  *(undefined8 *)(param_1 + 0x1508) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindTensorMemoryARM");
  *(undefined8 *)(param_1 + 0x1510) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceTensorMemoryRequirementsARM");
  *(undefined8 *)(param_1 + 0x1518) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyTensorARM");
  *(undefined8 *)(param_1 + 0x1520) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetTensorOpaqueCaptureDescriptorDataARM");
  *(undefined8 *)(param_1 + 0x1530) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetTensorViewOpaqueCaptureDescriptorDataARM");
  *(undefined8 *)(param_1 + 0x1538) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetShaderModuleIdentifierEXT");
  *(undefined8 *)(param_1 + 0x1540) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetShaderModuleCreateInfoIdentifierEXT");
  *(undefined8 *)(param_1 + 0x1548) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateOpticalFlowSessionNV");
  *(undefined8 *)(param_1 + 0x1558) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyOpticalFlowSessionNV");
  *(undefined8 *)(param_1 + 0x1560) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindOpticalFlowSessionImageNV");
  *(undefined8 *)(param_1 + 0x1568) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdOpticalFlowExecuteNV");
  *(undefined8 *)(param_1 + 0x1570) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindIndexBuffer2KHR");
  *(undefined8 *)(param_1 + 0x1578) = uVar2;
  if (*(longlong *)(param_1 + 0x6d0) == 0) {
    *(undefined8 *)(param_1 + 0x6d0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetRenderingAreaGranularityKHR");
  *(undefined8 *)(param_1 + 0x1580) = uVar2;
  if (*(longlong *)(param_1 + 0x6d8) == 0) {
    *(undefined8 *)(param_1 + 0x6d8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDeviceImageSubresourceLayoutKHR");
  *(undefined8 *)(param_1 + 0x1588) = uVar2;
  if (*(longlong *)(param_1 + 0x6e0) == 0) {
    *(undefined8 *)(param_1 + 0x6e0) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetImageSubresourceLayout2KHR");
  *(undefined8 *)(param_1 + 0x1590) = uVar2;
  if (*(longlong *)(param_1 + 0x6e8) == 0) {
    *(undefined8 *)(param_1 + 0x6e8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkAntiLagUpdateAMD");
  *(undefined8 *)(param_1 + 0x1598) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkWaitForPresent2KHR");
  *(undefined8 *)(param_1 + 0x15a0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateShadersEXT");
  *(undefined8 *)(param_1 + 0x15a8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyShaderEXT");
  *(undefined8 *)(param_1 + 0x15b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetShaderBinaryDataEXT");
  *(undefined8 *)(param_1 + 0x15b8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindShadersEXT");
  *(undefined8 *)(param_1 + 0x15c0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDepthClampRangeEXT");
  *(undefined8 *)(param_1 + 0x15c8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreatePipelineBinariesKHR");
  *(undefined8 *)(param_1 + 0x15d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyPipelineBinaryKHR");
  *(undefined8 *)(param_1 + 0x15d8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPipelineKeyKHR");
  *(undefined8 *)(param_1 + 0x15e0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetPipelineBinaryDataKHR");
  *(undefined8 *)(param_1 + 0x15e8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkReleaseCapturedPipelineDataKHR");
  *(undefined8 *)(param_1 + 0x15f0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetFramebufferTilePropertiesQCOM");
  *(undefined8 *)(param_1 + 0x15f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDynamicRenderingTilePropertiesQCOM");
  *(undefined8 *)(param_1 + 0x1600) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkReleaseSwapchainImagesKHR");
  *(undefined8 *)(param_1 + 0x1608) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkConvertCooperativeVectorMatrixNV");
  *(undefined8 *)(param_1 + 0x1618) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdConvertCooperativeVectorMatrixNV");
  *(undefined8 *)(param_1 + 0x1620) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetLatencySleepModeNV");
  *(undefined8 *)(param_1 + 0x1628) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkLatencySleepNV");
  *(undefined8 *)(param_1 + 0x1630) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkSetLatencyMarkerNV");
  *(undefined8 *)(param_1 + 0x1638) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetLatencyTimingsNV");
  *(undefined8 *)(param_1 + 0x1640) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkQueueNotifyOutOfBandNV");
  *(undefined8 *)(param_1 + 0x1648) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateDataGraphPipelinesARM");
  *(undefined8 *)(param_1 + 0x1658) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateDataGraphPipelineSessionARM");
  *(undefined8 *)(param_1 + 0x1660) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))
                    (param_2,"vkGetDataGraphPipelineSessionBindPointRequirementsARM");
  *(undefined8 *)(param_1 + 0x1668) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))
                    (param_2,"vkGetDataGraphPipelineSessionMemoryRequirementsARM");
  *(undefined8 *)(param_1 + 0x1670) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkBindDataGraphPipelineSessionMemoryARM");
  *(undefined8 *)(param_1 + 0x1678) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyDataGraphPipelineSessionARM");
  *(undefined8 *)(param_1 + 0x1680) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdDispatchDataGraphARM");
  *(undefined8 *)(param_1 + 0x1688) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDataGraphPipelineAvailablePropertiesARM");
  *(undefined8 *)(param_1 + 0x1690) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetDataGraphPipelinePropertiesARM");
  *(undefined8 *)(param_1 + 0x1698) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetAttachmentFeedbackLoopEnableEXT");
  *(undefined8 *)(param_1 + 0x16b0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetLineStippleKHR");
  *(undefined8 *)(param_1 + 0x16c0) = uVar2;
  if (*(longlong *)(param_1 + 0x6b8) == 0) {
    *(undefined8 *)(param_1 + 0x6b8) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetCalibratedTimestampsKHR");
  *(undefined8 *)(param_1 + 0x16d0) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindDescriptorSets2KHR");
  *(undefined8 *)(param_1 + 0x16d8) = uVar2;
  if (*(longlong *)(param_1 + 0x710) == 0) {
    *(undefined8 *)(param_1 + 0x710) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushConstants2KHR");
  *(undefined8 *)(param_1 + 0x16e0) = uVar2;
  if (*(longlong *)(param_1 + 0x718) == 0) {
    *(undefined8 *)(param_1 + 0x718) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushDescriptorSet2KHR");
  *(undefined8 *)(param_1 + 0x16e8) = uVar2;
  if (*(longlong *)(param_1 + 0x720) == 0) {
    *(undefined8 *)(param_1 + 0x720) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPushDescriptorSetWithTemplate2KHR");
  *(undefined8 *)(param_1 + 0x16f0) = uVar2;
  if (*(longlong *)(param_1 + 0x728) == 0) {
    *(undefined8 *)(param_1 + 0x728) = uVar2;
  }
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdSetDescriptorBufferOffsets2EXT");
  *(undefined8 *)(param_1 + 0x16f8) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
  *(undefined8 *)(param_1 + 0x1700) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBindTileMemoryQCOM");
  *(undefined8 *)(param_1 + 0x1708) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyMemoryIndirectKHR");
  *(undefined8 *)(param_1 + 0x1710) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdCopyMemoryToImageIndirectKHR");
  *(undefined8 *)(param_1 + 0x1718) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateExternalComputeQueueNV");
  *(undefined8 *)(param_1 + 0x1720) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyExternalComputeQueueNV");
  *(undefined8 *)(param_1 + 0x1728) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetExternalComputeQueueDataNV");
  *(undefined8 *)(param_1 + 0x1730) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetClusterAccelerationStructureBuildSizesNV");
  *(undefined8 *)(param_1 + 0x1738) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBuildClusterAccelerationStructureIndirectNV");
  *(undefined8 *)(param_1 + 0x1740) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))
                    (param_2,"vkGetPartitionedAccelerationStructuresBuildSizesNV");
  *(undefined8 *)(param_1 + 0x1748) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdBuildPartitionedAccelerationStructuresNV");
  *(undefined8 *)(param_1 + 0x1750) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkGetGeneratedCommandsMemoryRequirementsEXT");
  *(undefined8 *)(param_1 + 0x1758) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdPreprocessGeneratedCommandsEXT");
  *(undefined8 *)(param_1 + 0x1760) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdExecuteGeneratedCommandsEXT");
  *(undefined8 *)(param_1 + 0x1768) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateIndirectCommandsLayoutEXT");
  *(undefined8 *)(param_1 + 6000) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyIndirectCommandsLayoutEXT");
  *(undefined8 *)(param_1 + 0x1778) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCreateIndirectExecutionSetEXT");
  *(undefined8 *)(param_1 + 0x1780) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkDestroyIndirectExecutionSetEXT");
  *(undefined8 *)(param_1 + 0x1788) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUpdateIndirectExecutionSetPipelineEXT");
  *(undefined8 *)(param_1 + 0x1790) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkUpdateIndirectExecutionSetShaderEXT");
  *(undefined8 *)(param_1 + 0x1798) = uVar2;
  uVar2 = (**(code **)(param_1 + 0x50))(param_2,"vkCmdEndRendering2EXT");
  *(undefined8 *)(param_1 + 0x17c0) = uVar2;
  return;
}

