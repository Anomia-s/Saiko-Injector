/**
 * Function: vulkan_conformance_uuu
 * Address:  1403daeb0
 * Signature: undefined vulkan_conformance_uuu(void)
 * Body size: 6400 bytes
 */


undefined8 * vulkan_conformance_uuu(undefined1 param_1,undefined1 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  void *_Dst;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_2f8 [32];
  code *local_2d8;
  ulonglong local_2d0;
  undefined1 local_2c8;
  undefined4 local_2b4;
  undefined4 local_2b0 [2];
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 *local_290;
  undefined4 local_288 [2];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined8 uStack_244;
  undefined1 local_234 [36];
  int local_210;
  int local_200;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  int local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_2f8;
  puVar4 = (undefined8 *)0x0;
  cVar1 = video_subsystem_has_not_been_initialized(0);
  if (cVar1 == '\0') goto LAB_1403dc778;
  _Dst = (void *)FUN_140160c40(0xc70);
  memset(_Dst,0,0xc70);
  *(undefined1 *)((longlong)_Dst + 0x57c) = param_1;
  *(undefined1 *)((longlong)_Dst + 0x57d) = param_2;
  *(undefined4 *)((longlong)_Dst + 0x580) = 2;
  cVar1 = sdl_vulkan_getvkgetinstanceprocaddr_s(_Dst);
  if (cVar1 == '\0') {
    FUN_140160cf0(_Dst);
    video_subsystem_has_not_been_initialized();
    if (*(char *)((longlong)_Dst + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Failed to initialize Vulkan!");
    }
    pcVar8 = "Failed to initialize Vulkan!";
LAB_1403dc771:
    FUN_1400fbed0(&DAT_141339891,pcVar8);
    puVar4 = (undefined8 *)0x0;
LAB_1403dc778:
    if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_2f8)) {
      return puVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_2f8);
  }
  FUN_1400fb890(9,"SDL_GPU Driver: Vulkan");
  FUN_1400fb890(9,"Vulkan Device: %s",(longlong)_Dst + 0x34);
  if (*(char *)((longlong)_Dst + 0x586) == '\0') {
    FUN_1400fb8f0(9,"KHR_driver_properties unsupported! Bother your vendor about this!");
  }
  else {
    FUN_1400fb890(9,"Vulkan Driver: %s %s",(longlong)_Dst + 0x36c,(longlong)_Dst + 0x46c);
    local_2d8 = (code *)CONCAT44(local_2d8._4_4_,(uint)*(byte *)((longlong)_Dst + 0x56f));
    FUN_1400fb890(9,"Vulkan Conformance: %u.%u.%u",*(undefined1 *)((longlong)_Dst + 0x56c),
                  *(undefined1 *)((longlong)_Dst + 0x56d));
  }
  local_2b4 = 0x3f800000;
  local_2b0[0] = 2;
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = *(undefined4 *)((longlong)_Dst + 0x7b0);
  local_298 = 1;
  local_290 = &local_2b4;
  (**(code **)((longlong)_Dst + 0x928))(*(undefined8 *)((longlong)_Dst + 8),local_234);
  local_118 = 0;
  local_158 = 0;
  uStack_c0 = 0;
  local_138 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_8c = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  uStack_110 = 0x100000000;
  uStack_150 = 0x100000001;
  local_c8 = 0x100000000;
  uStack_130 = 0x100000001;
  if (local_200 != 0) {
    local_128 = 0x100000000;
    *(undefined1 *)((longlong)_Dst + 0x58c) = 1;
  }
  if (local_210 != 0) {
    local_138 = 0x100000000;
    *(undefined1 *)((longlong)_Dst + 0x58d) = 1;
  }
  local_78[0] = 3;
  if (*(byte *)((longlong)_Dst + 0x588) == 0) {
    local_70 = (undefined4 *)0x0;
  }
  else {
    local_288[0] = 0x3b9d46b8;
    local_280 = 0;
    uStack_278 = 0;
    local_270 = 0x100000000;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    local_70 = local_288;
  }
  local_68 = 0x100000000;
  local_60 = local_2b0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (uint)*(byte *)((longlong)_Dst + 0x584) + (uint)*(byte *)((longlong)_Dst + 0x588) +
             (uint)*(byte *)((longlong)_Dst + 0x586) + (uint)*(byte *)((longlong)_Dst + 0x585) +
             (uint)*(byte *)((longlong)_Dst + 0x589) + (uint)*(byte *)((longlong)_Dst + 0x587);
  puVar4 = (undefined8 *)FUN_140160c40(local_48 * 8);
  bVar11 = *(char *)((longlong)_Dst + 0x584) == '\0';
  if (bVar11) {
    cVar1 = *(char *)((longlong)_Dst + 0x585);
  }
  else {
    *puVar4 = "VK_KHR_swapchain";
    cVar1 = *(char *)((longlong)_Dst + 0x585);
  }
  bVar2 = !bVar11;
  if (cVar1 != '\0') {
    bVar2 = !bVar11 + 1;
    puVar4[!bVar11] = "VK_KHR_maintenance1";
  }
  if (*(char *)((longlong)_Dst + 0x586) != '\0') {
    uVar10 = (ulonglong)bVar2;
    bVar2 = bVar2 + 1;
    puVar4[uVar10] = "VK_KHR_driver_properties";
  }
  if (*(char *)((longlong)_Dst + 0x587) != '\0') {
    uVar10 = (ulonglong)bVar2;
    bVar2 = bVar2 + 1;
    puVar4[uVar10] = "VK_EXT_vertex_attribute_divisor";
  }
  if (*(char *)((longlong)_Dst + 0x588) != '\0') {
    uVar10 = (ulonglong)bVar2;
    bVar2 = bVar2 + 1;
    puVar4[uVar10] = "VK_KHR_portability_subset";
  }
  if (*(char *)((longlong)_Dst + 0x589) != '\0') {
    puVar4[bVar2] = "VK_EXT_texture_compression_astc_hdr";
  }
  local_38 = &local_158;
  local_40 = puVar4;
  iVar3 = (**(code **)((longlong)_Dst + 0x908))
                    (*(undefined8 *)((longlong)_Dst + 8),local_78,0,(longlong)_Dst + 0x570);
  FUN_140160cf0(puVar4);
  if (iVar3 == 0) {
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkAllocateCommandBuffers");
    *(undefined8 *)((longlong)_Dst + 0x9a8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkAllocateDescriptorSets");
    *(undefined8 *)((longlong)_Dst + 0x9b0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkAllocateMemory");
    *(undefined8 *)((longlong)_Dst + 0x9b8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkBeginCommandBuffer");
    *(undefined8 *)((longlong)_Dst + 0x9c0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkBindBufferMemory");
    *(undefined8 *)((longlong)_Dst + 0x9c8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkBindImageMemory");
    *(undefined8 *)((longlong)_Dst + 0x9d0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdBeginRenderPass");
    *(undefined8 *)((longlong)_Dst + 0x9d8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdBindDescriptorSets");
    *(undefined8 *)((longlong)_Dst + 0x9e0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdBindIndexBuffer");
    *(undefined8 *)((longlong)_Dst + 0x9e8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdBindPipeline");
    *(undefined8 *)((longlong)_Dst + 0x9f0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdBindVertexBuffers");
    *(undefined8 *)((longlong)_Dst + 0x9f8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdBlitImage");
    *(undefined8 *)((longlong)_Dst + 0xa00) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdClearAttachments");
    *(undefined8 *)((longlong)_Dst + 0xa08) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdClearColorImage");
    *(undefined8 *)((longlong)_Dst + 0xa10) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdClearDepthStencilImage");
    *(undefined8 *)((longlong)_Dst + 0xa18) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdCopyBuffer");
    *(undefined8 *)((longlong)_Dst + 0xa20) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdCopyImage");
    *(undefined8 *)((longlong)_Dst + 0xa28) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdCopyBufferToImage");
    *(undefined8 *)((longlong)_Dst + 0xa30) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdCopyImageToBuffer");
    *(undefined8 *)((longlong)_Dst + 0xa38) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdDispatch");
    *(undefined8 *)((longlong)_Dst + 0xa40) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdDispatchIndirect");
    *(undefined8 *)((longlong)_Dst + 0xa48) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdDraw");
    *(undefined8 *)((longlong)_Dst + 0xa50) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdDrawIndexed");
    *(undefined8 *)((longlong)_Dst + 0xa58) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdDrawIndexedIndirect");
    *(undefined8 *)((longlong)_Dst + 0xa60) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdDrawIndirect");
    *(undefined8 *)((longlong)_Dst + 0xa68) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdEndRenderPass");
    *(undefined8 *)((longlong)_Dst + 0xa70) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdPipelineBarrier");
    *(undefined8 *)((longlong)_Dst + 0xa78) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdResolveImage");
    *(undefined8 *)((longlong)_Dst + 0xa80) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdSetBlendConstants");
    *(undefined8 *)((longlong)_Dst + 0xa88) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdSetDepthBias");
    *(undefined8 *)((longlong)_Dst + 0xa90) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdSetScissor");
    *(undefined8 *)((longlong)_Dst + 0xa98) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdSetStencilReference");
    *(undefined8 *)((longlong)_Dst + 0xaa0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCmdSetViewport");
    *(undefined8 *)((longlong)_Dst + 0xaa8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateBuffer");
    *(undefined8 *)((longlong)_Dst + 0xab0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateCommandPool");
    *(undefined8 *)((longlong)_Dst + 0xab8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateDescriptorPool");
    *(undefined8 *)((longlong)_Dst + 0xac0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateDescriptorSetLayout");
    *(undefined8 *)((longlong)_Dst + 0xac8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateFence");
    *(undefined8 *)((longlong)_Dst + 0xad0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateFramebuffer");
    *(undefined8 *)((longlong)_Dst + 0xad8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateComputePipelines");
    *(undefined8 *)((longlong)_Dst + 0xae0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateGraphicsPipelines");
    *(undefined8 *)((longlong)_Dst + 0xae8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateImage");
    *(undefined8 *)((longlong)_Dst + 0xaf0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateImageView");
    *(undefined8 *)((longlong)_Dst + 0xaf8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreatePipelineCache");
    *(undefined8 *)((longlong)_Dst + 0xb00) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreatePipelineLayout");
    *(undefined8 *)((longlong)_Dst + 0xb08) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateRenderPass");
    *(undefined8 *)((longlong)_Dst + 0xb10) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateSampler");
    *(undefined8 *)((longlong)_Dst + 0xb18) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateSemaphore");
    *(undefined8 *)((longlong)_Dst + 0xb20) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateShaderModule");
    *(undefined8 *)((longlong)_Dst + 0xb28) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyBuffer");
    *(undefined8 *)((longlong)_Dst + 0xb30) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyCommandPool");
    *(undefined8 *)((longlong)_Dst + 0xb38) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyDescriptorPool");
    *(undefined8 *)((longlong)_Dst + 0xb40) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyDescriptorSetLayout");
    *(undefined8 *)((longlong)_Dst + 0xb48) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyDevice");
    *(undefined8 *)((longlong)_Dst + 0xb50) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyFence");
    *(undefined8 *)((longlong)_Dst + 0xb58) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyFramebuffer");
    *(undefined8 *)((longlong)_Dst + 0xb60) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyImage");
    *(undefined8 *)((longlong)_Dst + 0xb68) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyImageView");
    *(undefined8 *)((longlong)_Dst + 0xb70) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyPipeline");
    *(undefined8 *)((longlong)_Dst + 0xb78) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyPipelineCache");
    *(undefined8 *)((longlong)_Dst + 0xb80) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyPipelineLayout");
    *(undefined8 *)((longlong)_Dst + 0xb88) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyRenderPass");
    *(undefined8 *)((longlong)_Dst + 0xb90) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroySampler");
    *(undefined8 *)((longlong)_Dst + 0xb98) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroySemaphore");
    *(undefined8 *)((longlong)_Dst + 0xba0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroyShaderModule");
    *(undefined8 *)((longlong)_Dst + 0xba8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDeviceWaitIdle");
    *(undefined8 *)((longlong)_Dst + 0xbb0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkEndCommandBuffer");
    *(undefined8 *)((longlong)_Dst + 3000) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkFreeCommandBuffers");
    *(undefined8 *)((longlong)_Dst + 0xbc0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkFreeMemory");
    *(undefined8 *)((longlong)_Dst + 0xbc8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkGetDeviceQueue");
    *(undefined8 *)((longlong)_Dst + 0xbd0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkGetPipelineCacheData");
    *(undefined8 *)((longlong)_Dst + 0xbd8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkGetFenceStatus");
    *(undefined8 *)((longlong)_Dst + 0xbe0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkGetBufferMemoryRequirements");
    *(undefined8 *)((longlong)_Dst + 0xbe8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkGetImageMemoryRequirements");
    *(undefined8 *)((longlong)_Dst + 0xbf0) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkMapMemory");
    *(undefined8 *)((longlong)_Dst + 0xbf8) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkQueueSubmit");
    *(undefined8 *)((longlong)_Dst + 0xc00) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkQueueWaitIdle");
    *(undefined8 *)((longlong)_Dst + 0xc08) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkResetCommandBuffer");
    *(undefined8 *)((longlong)_Dst + 0xc10) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkResetCommandPool");
    *(undefined8 *)((longlong)_Dst + 0xc18) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkResetDescriptorPool");
    *(undefined8 *)((longlong)_Dst + 0xc20) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkResetFences");
    *(undefined8 *)((longlong)_Dst + 0xc28) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkUnmapMemory");
    *(undefined8 *)((longlong)_Dst + 0xc30) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkUpdateDescriptorSets");
    *(undefined8 *)((longlong)_Dst + 0xc38) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkWaitForFences");
    *(undefined8 *)((longlong)_Dst + 0xc40) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkAcquireNextImageKHR");
    *(undefined8 *)((longlong)_Dst + 0xc48) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkCreateSwapchainKHR");
    *(undefined8 *)((longlong)_Dst + 0xc50) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkDestroySwapchainKHR");
    *(undefined8 *)((longlong)_Dst + 0xc58) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkQueuePresentKHR");
    *(undefined8 *)((longlong)_Dst + 0xc60) = uVar5;
    uVar5 = (**(code **)((longlong)_Dst + 0x900))
                      (*(undefined8 *)((longlong)_Dst + 0x570),"vkGetSwapchainImagesKHR");
    *(undefined8 *)((longlong)_Dst + 0xc68) = uVar5;
    lVar7 = 0;
    (**(code **)((longlong)_Dst + 0xbd0))
              (*(undefined8 *)((longlong)_Dst + 0x570),*(undefined4 *)((longlong)_Dst + 0x7b0),0,
               (longlong)_Dst + 0x7b8);
    puVar4 = (undefined8 *)FUN_140160c40(0x2a8);
    *puVar4 = FUN_1403dda80;
    puVar4[1] = incompatible_shader_format_for_vulkan;
    puVar4[2] = vulkan_creategraphicspipeline;
    puVar4[3] = vk_error_out_of_host_memory;
    puVar4[4] = vk_error_out_of_host_memory;
    puVar4[5] = sdlgputexturecreatename;
    puVar4[6] = FUN_1403e0d50;
    puVar4[7] = FUN_1403e0df0;
    puVar4[8] = FUN_1403e0ea0;
    puVar4[9] = FUN_1403e0fc0;
    puVar4[10] = FUN_1403e10e0;
    puVar4[0xb] = FUN_1403e1150;
    puVar4[0xc] = &LAB_1403e11c0;
    puVar4[0xd] = FUN_1403e11e0;
    puVar4[0xe] = FUN_1403e12d0;
    puVar4[0xf] = &LAB_1403e1350;
    puVar4[0x10] = &LAB_1403e1350;
    puVar4[0x11] = FUN_1403e1360;
    puVar4[0x12] = FUN_1403e13e0;
    puVar4[0x13] = FUN_1403e1460;
    puVar4[0x14] = vk_error_out_of_host_memory;
    puVar4[0x15] = FUN_1403e2230;
    puVar4[0x16] = &LAB_1403e2390;
    puVar4[0x17] = &LAB_1403e2410;
    puVar4[0x18] = &LAB_1403e2460;
    puVar4[0x19] = &LAB_1403e2490;
    puVar4[0x1a] = FUN_1403e24c0;
    puVar4[0x1b] = FUN_1403e2600;
    puVar4[0x1c] = FUN_1403e26d0;
    puVar4[0x1d] = FUN_1403e28a0;
    puVar4[0x1e] = FUN_1403e29a0;
    puVar4[0x1f] = FUN_1403e2aa0;
    puVar4[0x20] = FUN_1403e2c70;
    puVar4[0x21] = FUN_1403e2d70;
    puVar4[0x22] = FUN_1403e2e70;
    puVar4[0x23] = FUN_1403e2f50;
    puVar4[0x24] = FUN_1403e3030;
    puVar4[0x25] = FUN_1403e3080;
    puVar4[0x26] = FUN_1403e30d0;
    puVar4[0x27] = FUN_1403e31f0;
    puVar4[0x28] = FUN_1403e3310;
    puVar4[0x29] = buffer_has_no_default_usage_mode;
    puVar4[0x2a] = FUN_1403e37e0;
    puVar4[0x2b] = FUN_1403e38f0;
    puVar4[0x2c] = texture_has_no_default_usage_mode;
    puVar4[0x2d] = buffer_has_no_default_usage_mode;
    puVar4[0x2e] = FUN_1403e4250;
    puVar4[0x2f] = FUN_1403e4330;
    puVar4[0x30] = FUN_1403e4380;
    puVar4[0x31] = texture_has_no_default_usage_mode;
    puVar4[0x32] = FUN_1403e49e0;
    puVar4[0x33] = httplib::ClientImpl::vfunction4;
    puVar4[0x34] = httplib::ClientImpl::vfunction4;
    puVar4[0x35] = FUN_1403e4a30;
    puVar4[0x36] = buffer_has_no_default_usage_mode;
    puVar4[0x3a] = FUN_1403e4f40;
    puVar4[0x3b] = buffer_has_no_default_usage_mode;
    puVar4[0x37] = FUN_1403e5440;
    puVar4[0x38] = buffer_has_no_default_usage_mode;
    puVar4[0x39] = texture_has_no_default_usage_mode;
    puVar4[0x3c] = httplib::ClientImpl::vfunction4;
    puVar4[0x3d] = FUN_1403e6430;
    puVar4[0x3e] = window_has_no_vulkan_surface;
    puVar4[0x3f] = window_has_no_vulkan_surface;
    puVar4[0x40] = window_already_claimed;
    puVar4[0x41] = FUN_1403e6cd0;
    puVar4[0x42] = swapchain_composition_not_supported;
    puVar4[0x43] = FUN_1403e7080;
    puVar4[0x44] = cannot_get_swapchain_format_window_has_not_be;
    puVar4[0x45] = vk_error_out_of_host_memory;
    puVar4[0x46] = FUN_1403e7b80;
    puVar4[0x47] = cannot_wait_for_a_swapchain_from_an_unclaimed;
    puVar4[0x48] = FUN_1403e7c50;
    puVar4[0x49] = vk_error_out_of_host_memory;
    puVar4[0x4a] = FUN_1403e8d00;
    puVar4[0x4b] = vk_error_out_of_host_memory;
    puVar4[0x4c] = vk_error_out_of_host_memory;
    puVar4[0x4d] = vk_error_out_of_host_memory;
    puVar4[0x4e] = vkgetfencestatus_s;
    puVar4[0x4f] = FUN_1403e9870;
    puVar4[0x50] = FUN_1403e9910;
    puVar4[0x51] = &LAB_1403e99d0;
    puVar4[0x52] = _Dst;
    *(undefined8 *)((longlong)_Dst + 0x7a8) = 0x100000000;
    uVar5 = FUN_140160c40(8);
    *(undefined8 *)((longlong)_Dst + 0x7a0) = uVar5;
    uVar5 = initializesrwlock();
    *(undefined8 *)((longlong)_Dst + 0x8b0) = uVar5;
    uVar5 = initializesrwlock();
    *(undefined8 *)((longlong)_Dst + 0x8b8) = uVar5;
    uVar5 = initializesrwlock();
    *(undefined8 *)((longlong)_Dst + 0x8c0) = uVar5;
    uVar5 = initializesrwlock();
    *(undefined8 *)((longlong)_Dst + 0x8c8) = uVar5;
    uVar5 = initializesrwlock();
    *(undefined8 *)((longlong)_Dst + 0x8d0) = uVar5;
    uVar5 = initializesrwlock();
    *(undefined8 *)((longlong)_Dst + 0x8d8) = uVar5;
    uVar5 = initializesrwlock();
    *(undefined8 *)((longlong)_Dst + 0x8e0) = uVar5;
    *(undefined4 *)((longlong)_Dst + 0x7cc) = 0x10;
    *(undefined4 *)((longlong)_Dst + 0x7c8) = 0;
    uVar5 = FUN_140160c40(0x80);
    *(undefined8 *)((longlong)_Dst + 0x7c0) = uVar5;
    uVar5 = FUN_140160c40(0x500);
    *(undefined8 *)((longlong)_Dst + 0x590) = uVar5;
    lVar9 = 0;
    do {
      *(int *)(*(longlong *)((longlong)_Dst + 0x590) + lVar7) = (int)lVar9;
      *(undefined8 *)(*(longlong *)((longlong)_Dst + 0x590) + 8 + lVar7) = 0;
      *(undefined4 *)(*(longlong *)((longlong)_Dst + 0x590) + 0x10 + lVar7) = 0;
      uVar5 = FUN_140160c40(0x20);
      *(undefined8 *)(*(longlong *)((longlong)_Dst + 0x590) + 0x18 + lVar7) = uVar5;
      *(undefined4 *)(*(longlong *)((longlong)_Dst + 0x590) + 0x20 + lVar7) = 0;
      *(undefined4 *)(*(longlong *)((longlong)_Dst + 0x590) + 0x24 + lVar7) = 4;
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x28;
    } while (lVar9 != 0x20);
    *(undefined8 *)((longlong)_Dst + 0x820) = 0x2000000020;
    uVar5 = FUN_140160c40(0x100);
    *(undefined8 *)((longlong)_Dst + 0x818) = uVar5;
    if (*(int *)((longlong)_Dst + 0x820) != 0) {
      uVar10 = 0;
      do {
        plVar6 = (longlong *)FUN_140160c70(1,0x10);
        local_2d0 = 0;
        local_2d8 = (code *)((ulonglong)local_2d8 & 0xffffffffffffff00);
        lVar7 = vk_error_out_of_host_memory(_Dst,0x8000,0,1);
        *plVar6 = lVar7;
        plVar6[1] = 0;
        *(longlong **)(lVar7 + 0x38) = plVar6;
        *(longlong **)(*(longlong *)((longlong)_Dst + 0x818) + uVar10 * 8) = plVar6;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)((longlong)_Dst + 0x820));
    }
    *(undefined8 *)((longlong)_Dst + 0x830) = 0x800000000;
    uVar5 = FUN_140160c70(8,8);
    *(undefined8 *)((longlong)_Dst + 0x828) = uVar5;
    FUN_140106140((longlong)_Dst + 0x838,0);
    *(undefined4 *)((longlong)_Dst + 0x83c) = *(undefined4 *)((longlong)_Dst + 0x288);
    local_2d8 = FUN_1403e9a00;
    local_2c8 = 0;
    local_2d0 = local_2d0 & 0xffffffffffffff00;
    uVar5 = num_buckets_must_be_a_power_of_two(_Dst,0x40,FUN_140106170,&LAB_140095e50);
    *(undefined8 *)((longlong)_Dst + 0x7e8) = uVar5;
    local_2d8 = FUN_1403e9a30;
    local_2c8 = 0;
    local_2d0._0_1_ = 1;
    uVar5 = num_buckets_must_be_a_power_of_two(_Dst,0x40,&LAB_1403e9b40,&LAB_1403e9a70);
    *(undefined8 *)((longlong)_Dst + 0x7f0) = uVar5;
    local_2d8 = FUN_1403e9d10;
    local_2c8 = 0;
    local_2d0._0_1_ = 0;
    uVar5 = num_buckets_must_be_a_power_of_two(_Dst,0x40,&LAB_1403e9e20,&LAB_1403e9da0);
    *(undefined8 *)((longlong)_Dst + 0x7f8) = uVar5;
    local_2d8 = FUN_1403e9fa0;
    local_2c8 = 0;
    local_2d0._0_1_ = 1;
    uVar5 = num_buckets_must_be_a_power_of_two(_Dst,0x40,&LAB_1403ea000,FUN_1403e9fe0);
    *(undefined8 *)((longlong)_Dst + 0x800) = uVar5;
    local_2d8 = FUN_1403e9fa0;
    local_2c8 = 0;
    local_2d0._0_1_ = 1;
    uVar5 = num_buckets_must_be_a_power_of_two(_Dst,0x40,&LAB_1403ea080,FUN_1403ea060);
    *(undefined8 *)((longlong)_Dst + 0x808) = uVar5;
    local_2d8 = FUN_1403ea0d0;
    local_2c8 = 0;
    local_2d0 = CONCAT71(local_2d0._1_7_,1);
    uVar5 = num_buckets_must_be_a_power_of_two(_Dst,0x40,&LAB_1403ea140,FUN_1403ea120);
    *(undefined8 *)((longlong)_Dst + 0x810) = uVar5;
    uVar5 = initializesrwlock();
    *(undefined8 *)((longlong)_Dst + 2000) = uVar5;
    *(undefined8 *)((longlong)_Dst + 0x7e0) = 0x400000000;
    uVar5 = FUN_140160c40(0x20);
    *(undefined8 *)((longlong)_Dst + 0x7d8) = uVar5;
    *(undefined8 *)((longlong)_Dst + 0x848) = 0x1000000000;
    uVar5 = FUN_140160c40(0x80);
    *(undefined8 *)((longlong)_Dst + 0x840) = uVar5;
    *(undefined8 *)((longlong)_Dst + 0x858) = 0x1000000000;
    uVar5 = FUN_140160c40(0x80);
    *(undefined8 *)((longlong)_Dst + 0x850) = uVar5;
    *(undefined8 *)((longlong)_Dst + 0x868) = 0x1000000000;
    uVar5 = FUN_140160c40(0x80);
    *(undefined8 *)((longlong)_Dst + 0x860) = uVar5;
    *(undefined8 *)((longlong)_Dst + 0x878) = 0x1000000000;
    uVar5 = FUN_140160c40(0x80);
    *(undefined8 *)((longlong)_Dst + 0x870) = uVar5;
    *(undefined8 *)((longlong)_Dst + 0x888) = 0x1000000000;
    uVar5 = FUN_140160c40(0x80);
    *(undefined8 *)((longlong)_Dst + 0x880) = uVar5;
    *(undefined8 *)((longlong)_Dst + 0x898) = 0x1000000000;
    uVar5 = FUN_140160c40(0x80);
    *(undefined8 *)((longlong)_Dst + 0x890) = uVar5;
    *(undefined8 *)((longlong)_Dst + 0x8a8) = 0x1000000000;
    uVar5 = FUN_140160c40(0x80);
    *(undefined8 *)((longlong)_Dst + 0x8a0) = uVar5;
    *(undefined1 *)((longlong)_Dst + 0x8e8) = 0;
    *(undefined8 *)((longlong)_Dst + 0x8f8) = 0x400000000;
    uVar5 = FUN_140160c40(0x20);
    *(undefined8 *)((longlong)_Dst + 0x8f0) = uVar5;
    goto LAB_1403dc778;
  }
  if (*(char *)((longlong)_Dst + 0x57c) != '\x01') {
    if (iVar3 < -1000000000) {
      if (iVar3 < -0x3b9acdec) {
        if (iVar3 == -0x3b9eae18) {
          pcVar8 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        }
        else {
          if (iVar3 != -0x3b9bd788) goto switchD_1403dc648_caseD_fffffff5;
          pcVar8 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        }
      }
      else if (iVar3 == -0x3b9acdec) {
        pcVar8 = "VK_ERROR_OUT_OF_DATE_KHR";
      }
      else {
        if (iVar3 != -0x3b9aca01) goto switchD_1403dc648_caseD_fffffff5;
        pcVar8 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      }
    }
    else {
      switch(iVar3) {
      case -0xc:
        pcVar8 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case -0xb:
      case -5:
switchD_1403dc648_caseD_fffffff5:
        pcVar8 = "Unhandled VkResult!";
        break;
      case -10:
        pcVar8 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case -9:
        pcVar8 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case -8:
        pcVar8 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case -7:
        pcVar8 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case -6:
        pcVar8 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case -4:
        pcVar8 = "VK_ERROR_DEVICE_LOST";
        break;
      case -3:
        pcVar8 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case -2:
        pcVar8 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case -1:
        pcVar8 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (iVar3 == -1000000000) {
          pcVar8 = "VK_ERROR_SURFACE_LOST_KHR";
        }
        else {
          if (iVar3 != 0x3b9acdeb) goto switchD_1403dc648_caseD_fffffff5;
          pcVar8 = "VK_SUBOPTIMAL_KHR";
        }
      }
    }
    FUN_1400fbed0("%s %s","vkCreateDevice",pcVar8);
    FUN_140160cf0(_Dst);
    video_subsystem_has_not_been_initialized();
    if (*(char *)((longlong)_Dst + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Failed to create logical device!");
    }
    pcVar8 = "Failed to create logical device!";
    goto LAB_1403dc771;
  }
  if (iVar3 < -1000000000) {
    if (iVar3 < -0x3b9acdec) {
      if (iVar3 == -0x3b9eae18) {
        pcVar8 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        goto LAB_1403dc612;
      }
      if (iVar3 == -0x3b9bd788) {
        pcVar8 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        goto LAB_1403dc612;
      }
    }
    else {
      if (iVar3 == -0x3b9acdec) {
        pcVar8 = "VK_ERROR_OUT_OF_DATE_KHR";
        goto LAB_1403dc612;
      }
      if (iVar3 == -0x3b9aca01) {
        pcVar8 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
        goto LAB_1403dc612;
      }
    }
    goto switchD_1403db2fc_caseD_fffffff5;
  }
  switch(iVar3) {
  case -0xc:
    pcVar8 = "VK_ERROR_FRAGMENTED_POOL";
    break;
  case -10:
    pcVar8 = "VK_ERROR_TOO_MANY_OBJECTS";
    break;
  case -9:
    pcVar8 = "VK_ERROR_INCOMPATIBLE_DRIVER";
    break;
  case -8:
    pcVar8 = "VK_ERROR_FEATURE_NOT_PRESENT";
    break;
  case -7:
    pcVar8 = "VK_ERROR_EXTENSION_NOT_PRESENT";
    break;
  case -6:
    pcVar8 = "VK_ERROR_LAYER_NOT_PRESENT";
    break;
  case -4:
    pcVar8 = "VK_ERROR_DEVICE_LOST";
    break;
  case -3:
    pcVar8 = "VK_ERROR_INITIALIZATION_FAILED";
    break;
  case -2:
    pcVar8 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
    break;
  case -1:
    pcVar8 = "VK_ERROR_OUT_OF_HOST_MEMORY";
    break;
  default:
    if (iVar3 == -1000000000) {
      pcVar8 = "VK_ERROR_SURFACE_LOST_KHR";
      break;
    }
    if (iVar3 == 0x3b9acdeb) {
      pcVar8 = "VK_SUBOPTIMAL_KHR";
      break;
    }
  case -0xb:
  case -5:
switchD_1403db2fc_caseD_fffffff5:
    pcVar8 = "Unhandled VkResult!";
  }
LAB_1403dc612:
                    /* WARNING: Subroutine does not return */
  FUN_1400fb950(9,"%s %s","vkCreateDevice",pcVar8);
}

