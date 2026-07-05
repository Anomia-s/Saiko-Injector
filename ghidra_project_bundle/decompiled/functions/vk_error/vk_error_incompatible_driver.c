/**
 * Function: vk_error_incompatible_driver
 * Address:  140635da0
 * Signature: undefined vk_error_incompatible_driver(void)
 * Body size: 270 bytes
 */


longlong vk_error_incompatible_driver(code *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_24 = 0;
  iVar1 = (*param_1)(0,&local_24,0);
  if (iVar1 == 0) {
    lVar2 = FUN_140160c70(local_24 + (uint)(local_24 == 0),0x104);
    if (lVar2 != 0) {
      iVar1 = (*param_1)(0,&local_24,lVar2);
      if (iVar1 == 0) {
        *param_2 = local_24;
      }
      else {
        uVar3 = vk_error_invalid_opaque_capture_address(iVar1);
        FUN_1400fbed0("Getting Vulkan extensions failed: vkEnumerateInstanceExtensionProperties returned %s(%d)"
                      ,uVar3,iVar1);
        FUN_140160cf0(lVar2);
        lVar2 = 0;
      }
      goto LAB_140635e7a;
    }
  }
  else {
    if (iVar1 == -9) {
      local_38 = 0xfffffff7;
      FUN_1400fbed0("You probably don\'t have a working Vulkan driver installed. %s %s %s(%d)",
                    "Getting Vulkan extensions failed:",
                    "vkEnumerateInstanceExtensionProperties returned","VK_ERROR_INCOMPATIBLE_DRIVER"
                   );
      lVar2 = 0;
      goto LAB_140635e7a;
    }
    uVar3 = vk_error_invalid_opaque_capture_address(iVar1);
    FUN_1400fbed0("Getting Vulkan extensions failed: vkEnumerateInstanceExtensionProperties returned %s(%d)"
                  ,uVar3,iVar1);
  }
  lVar2 = 0;
LAB_140635e7a:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_58);
}

