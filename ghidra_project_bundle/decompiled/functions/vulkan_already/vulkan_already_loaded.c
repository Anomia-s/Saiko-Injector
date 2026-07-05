/**
 * Function: vulkan_already_loaded
 * Address:  140654f10
 * Signature: undefined vulkan_already_loaded(void)
 * Body size: 524 bytes
 */


ulonglong vulkan_already_loaded(longlong param_1,char *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  local_4c = 0;
  if (*(longlong *)(param_1 + 0x670) != 0) {
    pcVar5 = "Vulkan already loaded";
LAB_140654f48:
    uVar2 = FUN_1400fbed0(pcVar5);
    if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_78)) {
      return uVar2;
    }
    goto LAB_140655114;
  }
  if ((param_2 == (char *)0x0) &&
     (param_2 = (char *)FUN_140110550("SDL_VULKAN_LIBRARY"), *(longlong *)(param_1 + 0x670) != 0)) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar5 = "vulkan-1.dll";
    if (param_2 != (char *)0x0) {
      pcVar5 = param_2;
    }
    lVar3 = parameter_s_is_invalid(pcVar5);
    *(longlong *)(param_1 + 0x670) = lVar3;
    if (lVar3 == 0) {
      pcVar5 = "Failed to load Vulkan Portability library";
      goto LAB_140654f48;
    }
  }
  FUN_1400fcb10(param_1 + 0x56c,pcVar5,0x100);
  pcVar4 = (code *)failed_loading_s(*(undefined8 *)(param_1 + 0x670),"vkGetInstanceProcAddr");
  if (pcVar4 == (code *)0x0) {
    pcVar5 = "Failed to load vkGetInstanceProcAddr from Vulkan Portability library";
LAB_1406550cf:
    FUN_1400fbed0(pcVar5);
LAB_1406550d4:
    FUN_140165790(*(undefined8 *)(param_1 + 0x670));
    *(undefined8 *)(param_1 + 0x670) = 0;
    uVar2 = 0;
  }
  else {
    *(code **)(param_1 + 0x558) = pcVar4;
    lVar3 = (*pcVar4)(0,"vkEnumerateInstanceExtensionProperties");
    *(longlong *)(param_1 + 0x560) = lVar3;
    if ((lVar3 == 0) || (lVar3 = vk_error_incompatible_driver(lVar3,&local_4c), lVar3 == 0))
    goto LAB_1406550d4;
    if (local_4c == 0) {
      FUN_140160cf0(lVar3);
LAB_1406550c8:
      pcVar5 = "Installed Vulkan doesn\'t implement the VK_KHR_surface extension";
      goto LAB_1406550cf;
    }
    uVar2 = 0;
    bVar7 = false;
    bVar6 = false;
    lVar8 = lVar3;
    do {
      iVar1 = FUN_1400fd200("VK_KHR_surface",lVar8);
      if (iVar1 == 0) {
        bVar6 = true;
      }
      else {
        iVar1 = FUN_1400fd200("VK_EXT_headless_surface",lVar8);
        bVar7 = (bool)(bVar7 | iVar1 == 0);
      }
      uVar2 = uVar2 + 1;
      lVar8 = lVar8 + 0x104;
    } while (uVar2 < local_4c);
    FUN_140160cf0(lVar3);
    if (!bVar6) goto LAB_1406550c8;
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (!bVar7) {
      FUN_1400fb540("Installed Vulkan doesn\'t implement the VK_EXT_headless_surface extension");
    }
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar2 & 0xffffffff;
  }
LAB_140655114:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_78);
}

