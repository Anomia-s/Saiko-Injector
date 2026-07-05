/**
 * Function: sdl_render_vulkan_debug
 * Address:  14043c570
 * Signature: undefined sdl_render_vulkan_debug(void)
 * Body size: 208 bytes
 */


undefined8 sdl_render_vulkan_debug(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_18 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_38 = 9;
  iVar2 = (*DAT_1416f16f8)(0,&local_38,0,&local_18);
  uVar3 = local_18;
  if (iVar2 != 0) {
    cVar1 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
    if (cVar1 != '\0') {
      uVar3 = vk_error_invalid_opaque_capture_address(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(6,"%s: %s","vkCreateSemaphore()",uVar3);
    }
    uVar3 = vk_error_invalid_opaque_capture_address(iVar2);
    FUN_1400fbed0("%s: %s","vkCreateSemaphore()",uVar3);
    uVar3 = 0;
  }
  if (DAT_1414ef3c0 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_10 ^ (ulonglong)auStack_58);
  }
  return uVar3;
}

