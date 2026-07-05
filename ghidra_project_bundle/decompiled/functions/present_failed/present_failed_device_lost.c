/**
 * Function: present_failed_device_lost
 * Address:  140433a10
 * Signature: undefined present_failed_device_lost(void)
 * Body size: 1614 bytes
 */


ulonglong present_failed_device_lost(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 unaff_RSI;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined1 auStack_e4 [12];
  undefined4 local_d8;
  undefined1 auStack_d4 [12];
  undefined4 local_c8;
  undefined1 auStack_c4 [12];
  undefined1 local_b8 [16];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(param_1 + 0x2c0);
  if (*(longlong *)(lVar3 + 0x660) == 0) {
    uVar8 = FUN_1400fbed0("Device lost and couldn\'t be recovered");
    if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_138)) {
      return uVar8;
    }
    goto LAB_140434052;
  }
  lVar10 = *(longlong *)(lVar3 + 0x698);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar3 + 0x2848) = 0;
    *(undefined1 *)(lVar3 + 0x2908) = 1;
    lVar4 = *(longlong *)(lVar3 + 0x2888);
    uVar9 = (ulonglong)*(uint *)(lVar3 + 0x28a8);
    uVar7 = *(undefined8 *)(*(longlong *)(lVar3 + 0x2878) + uVar9 * 8);
    if (*(longlong *)(lVar3 + 0x710) != 0) {
      (*DAT_1416f14e8)();
      *(undefined8 *)(lVar3 + 0x710) = 0;
      lVar10 = *(longlong *)(lVar3 + 0x698);
    }
    uStack_90 = 0;
    local_98 = 0x2d;
    local_88 = 0x18000000100;
    auStack_80._4_8_ = 0xffffffff3b9acdea;
    auStack_80._0_4_ = *(undefined4 *)(lVar4 + uVar9 * 4);
    uStack_74 = 0xffffffff;
    local_68 = 1;
    uStack_60 = 1;
    local_58 = 1;
    local_f0 = &local_98;
    local_f8 = 1;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = local_118 & 0xffffffff00000000;
    uStack_70 = uVar7;
    (*DAT_1416f14f0)(lVar10,0x400,0x400,0);
    *(undefined4 *)(lVar4 + uVar9 * 4) = 0x3b9acdea;
    (*DAT_1416f14f8)(*(undefined8 *)(lVar3 + 0x698));
    iVar6 = (*DAT_1416f1578)(*(undefined8 *)(lVar3 + 0x660),1,
                             (ulonglong)*(uint *)(lVar3 + 0x690) * 8 + *(longlong *)(lVar3 + 0x6a0))
    ;
    if (iVar6 == 0) {
      local_68 = lVar3 + 0x698;
      local_9c = 0x10000;
      uStack_90 = 0;
      local_88 = 0;
      _auStack_80 = ZEXT816(0);
      local_98 = 4;
      uVar2 = *(uint *)(lVar3 + 0x28c0);
      lVar10 = *(longlong *)(lVar3 + 0x28a0);
      if ((ulonglong)uVar2 == 0) {
        if (lVar10 != 0) {
          local_88 = 1;
          stack0xffffffffffffff88 = &local_9c;
          auStack_80._0_8_ = lVar3 + 0x28a0;
        }
      }
      else {
        local_88 = (ulonglong)((lVar10 != 0) + uVar2);
        if (lVar10 != 0) {
          *(longlong *)(*(longlong *)(lVar3 + 0x28b8) + (ulonglong)uVar2 * 8) = lVar10;
          *(undefined4 *)(*(longlong *)(lVar3 + 0x28b0) + (ulonglong)*(uint *)(lVar3 + 0x28c0) * 4)
               = 0x10000;
        }
        auVar1 = *(undefined1 (*) [16])(lVar3 + 0x28b0);
        auStack_80._0_8_ = auVar1._8_8_;
        auStack_80._8_4_ = auVar1._0_4_;
        uStack_74 = auVar1._4_4_;
        *(undefined4 *)(lVar3 + 0x28c0) = 0;
      }
      uStack_70 = 1;
      uVar2 = *(uint *)(lVar3 + 0x28d0);
      if ((ulonglong)uVar2 == 0) {
        uStack_60 = 1;
        uVar9 = (ulonglong)*(uint *)(lVar3 + 0x690);
        local_58 = uVar9 * 8 + *(longlong *)(lVar3 + 0x2898);
      }
      else {
        uStack_60 = (ulonglong)(uVar2 + 1);
        *(undefined8 *)(*(longlong *)(lVar3 + 0x28c8) + (ulonglong)uVar2 * 8) =
             *(undefined8 *)
              (*(longlong *)(lVar3 + 0x2898) + (ulonglong)*(uint *)(lVar3 + 0x690) * 8);
        local_58 = *(longlong *)(lVar3 + 0x28c8);
        *(undefined4 *)(lVar3 + 0x28d0) = 0;
        uVar9 = (ulonglong)*(uint *)(lVar3 + 0x690);
      }
      iVar6 = (*DAT_1416f1500)(*(undefined8 *)(lVar3 + 0x650),1,&local_98,
                               *(undefined8 *)(*(longlong *)(lVar3 + 0x6a0) + uVar9 * 8));
      if (iVar6 == 0) {
        *(undefined8 *)(lVar3 + 0x698) = 0;
        *(undefined8 *)(lVar3 + 0x28a0) = 0;
        auStack_e4 = SUB1612((undefined1  [16])0x0,4);
        local_e8 = 0x3b9acde9;
        auStack_d4 = SUB1612((undefined1  [16])0x0,4);
        local_d8 = 1;
        auStack_d4._4_8_ = (ulonglong)*(uint *)(lVar3 + 0x690) * 8 + *(longlong *)(lVar3 + 0x2898);
        auStack_c4 = SUB1612((undefined1  [16])0x0,4);
        local_c8 = 1;
        auStack_c4._4_8_ = lVar3 + 0x678;
        local_b8._8_8_ = 0;
        local_b8._0_8_ = lVar3 + 0x28a8;
        iVar6 = (*DAT_1416f1580)(*(undefined8 *)(lVar3 + 0x658));
        if (iVar6 < 0) {
          if ((iVar6 == -0x3b9acdec) || (iVar6 == -1000000000)) {
LAB_140433f30:
            uVar9 = (ulonglong)(*(int *)(lVar3 + 0x690) + 1) % (ulonglong)*(uint *)(lVar3 + 0x2874);
            *(int *)(lVar3 + 0x690) = (int)uVar9;
            local_118 = 0xffffffffffffffff;
            iVar6 = (*DAT_1416f1588)(*(undefined8 *)(lVar3 + 0x660),1,
                                     uVar9 * 8 + *(longlong *)(lVar3 + 0x6a0),1);
            if (iVar6 == 0) {
              sdl_render_vulkan_debug(param_1);
              goto LAB_140433c32;
            }
            if (iVar6 == -4) goto LAB_140433f84;
            cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
            if (cVar5 != '\0') {
              uVar7 = vk_error_invalid_opaque_capture_address(iVar6);
                    /* WARNING: Subroutine does not return */
              FUN_1400fb950(6,"%s: %s","vkWaitForFences()",uVar7);
            }
            uVar7 = vk_error_invalid_opaque_capture_address(iVar6);
            pcVar11 = "vkWaitForFences()";
            goto LAB_140433c28;
          }
        }
        else if ((iVar6 == 0) || (iVar6 == 0x3b9acdeb)) goto LAB_140433f30;
        cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
        if (cVar5 != '\0') {
          uVar7 = vk_error_invalid_opaque_capture_address(iVar6);
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(6,"%s: %s","vkQueuePresentKHR()",uVar7);
        }
        uVar7 = vk_error_invalid_opaque_capture_address(iVar6);
        pcVar11 = "vkQueuePresentKHR()";
        goto LAB_140433c28;
      }
      if (iVar6 != -4) {
        cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
        if (cVar5 != '\0') {
          uVar7 = vk_error_invalid_opaque_capture_address(iVar6);
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(6,"%s: %s","vkQueueSubmit()",uVar7);
        }
        uVar7 = vk_error_invalid_opaque_capture_address(iVar6);
        pcVar11 = "vkQueueSubmit()";
        goto LAB_140433c28;
      }
LAB_140433f84:
      cVar5 = renderer_couldnt_recover_from_device_lost_s(param_1);
      if (cVar5 != '\0') {
        FUN_1400fbed0("Present failed, device lost");
      }
    }
    else {
      cVar5 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
      if (cVar5 != '\0') {
        uVar7 = vk_error_invalid_opaque_capture_address(iVar6);
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(6,"%s: %s","vkResetFences()",uVar7);
      }
      uVar7 = vk_error_invalid_opaque_capture_address(iVar6);
      pcVar11 = "vkResetFences()";
LAB_140433c28:
      FUN_1400fbed0("%s: %s",pcVar11,uVar7);
    }
    uVar8 = 0;
  }
LAB_140433c32:
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_138)) {
    return uVar8 & 0xffffffff;
  }
LAB_140434052:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_138);
}

