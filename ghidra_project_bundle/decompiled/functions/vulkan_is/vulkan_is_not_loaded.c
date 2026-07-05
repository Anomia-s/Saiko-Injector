/**
 * Function: vulkan_is_not_loaded
 * Address:  140464d40
 * Signature: undefined vulkan_is_not_loaded(void)
 * Body size: 94 bytes
 */


undefined1
vulkan_is_not_loaded(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  
  pcVar3 = (code *)(**(code **)(param_1 + 0x558))
                             (param_2,"vkGetPhysicalDeviceWin32PresentationSupportKHR");
  if (*(longlong *)(param_1 + 0x670) == 0) {
    pcVar4 = "Vulkan is not loaded";
  }
  else {
    if (pcVar3 != (code *)0x0) {
      iVar2 = (*pcVar3)(param_3,param_4);
      return iVar2 != 0;
    }
    pcVar4 = "VK_KHR_win32_surface extension is not enabled in the Vulkan instance.";
  }
  uVar1 = FUN_1400fbed0(pcVar4);
  return uVar1;
}

