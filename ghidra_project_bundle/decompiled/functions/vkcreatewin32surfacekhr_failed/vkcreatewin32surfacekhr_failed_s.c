/**
 * Function: vkcreatewin32surfacekhr_failed_s
 * Address:  140464c30
 * Signature: undefined vkcreatewin32surfacekhr_failed_s(void)
 * Body size: 231 bytes
 */


undefined8
vkcreatewin32surfacekhr_failed_s
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x180);
  pcVar3 = (code *)(**(code **)(param_1 + 0x558))(param_3,"vkCreateWin32SurfaceKHR");
  if (*(longlong *)(param_1 + 0x670) == 0) {
    pcVar5 = "Vulkan is not loaded";
  }
  else {
    if (pcVar3 != (code *)0x0) {
      local_50[0] = 0x3b9aed28;
      local_48 = 0;
      local_40 = 0;
      local_38 = *(undefined8 *)(lVar1 + 0x28);
      local_30 = *(undefined8 *)(lVar1 + 8);
      iVar2 = (*pcVar3)(param_3,local_50,param_4,param_5);
      if (iVar2 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = vk_error_invalid_opaque_capture_address(iVar2);
        uVar4 = FUN_1400fbed0("vkCreateWin32SurfaceKHR failed: %s",uVar4);
      }
      goto LAB_140464ce8;
    }
    pcVar5 = "VK_KHR_win32_surface extension is not enabled in the Vulkan instance.";
  }
  uVar4 = FUN_1400fbed0(pcVar5);
LAB_140464ce8:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_78)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_78);
}

