/**
 * Function: vkcreateheadlesssurfaceext_failed_s
 * Address:  140655220
 * Signature: undefined vkcreateheadlesssurfaceext_failed_s(void)
 * Body size: 220 bytes
 */


undefined8
vkcreateheadlesssurfaceext_failed_s
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  *param_5 = 0;
  if (*(longlong *)(param_1 + 0x670) == 0) {
    pcVar4 = "Vulkan is not loaded";
  }
  else {
    pcVar2 = (code *)(**(code **)(param_1 + 0x558))(param_3,"vkCreateHeadlessSurfaceEXT");
    if (pcVar2 != (code *)0x0) {
      uStack_30 = 0;
      local_38 = 0x3b9eb200;
      local_28 = 0;
      iVar1 = (*pcVar2)(param_3,&local_38,param_4,param_5);
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = vk_error_invalid_opaque_capture_address(iVar1);
        uVar3 = FUN_1400fbed0("vkCreateHeadlessSurfaceEXT failed: %s",uVar3);
      }
      goto LAB_1406552cf;
    }
    pcVar4 = "VK_EXT_headless_surface extension is not enabled in the Vulkan instance.";
  }
  uVar3 = FUN_1400fbed0(pcVar4);
LAB_1406552cf:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_58);
}

