/**
 * Function: window_has_no_vulkan_surface
 * Address:  1403e69c0
 * Signature: undefined window_has_no_vulkan_surface(void)
 * Body size: 350 bytes
 */


ulonglong window_has_no_vulkan_surface(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [56];
  undefined8 local_38;
  longlong local_28;
  uint local_20;
  ulonglong local_18;
  
  uVar5 = param_3 & 0xffffffff;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  uVar2 = video_subsystem_has_not_been_initialized(param_2);
  lVar3 = FUN_14014ff10(uVar2,"SDL_GPUVulkanWindowPropertyData",0);
  if (lVar3 == 0) {
    if (*(char *)(param_1 + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Must claim window before querying present mode support!");
    }
    pcVar4 = "Must claim window before querying present mode support!";
LAB_1403e6acc:
    FUN_1400fbed0(&DAT_141339891,pcVar4);
  }
  else {
    if (*(longlong *)(lVar3 + 0x20) == 0) {
      if (*(char *)(param_1 + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(9,&DAT_141339891,"Window has no Vulkan surface");
      }
      pcVar4 = "Window has no Vulkan surface";
      goto LAB_1403e6acc;
    }
    cVar1 = this_surface_does_not_support_presenting
                      (param_1,*(undefined8 *)(param_1 + 8),*(longlong *)(lVar3 + 0x20),local_70);
    if (cVar1 != '\0') {
      if ((ulonglong)local_20 == 0) {
        uVar5 = 0;
      }
      else {
        lVar3 = 0;
        do {
          bVar6 = *(int *)(local_28 + lVar3 * 4) ==
                  *(int *)(&DAT_140e0cb20 + (longlong)(int)param_3 * 4);
          uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar6);
          if (bVar6) break;
          bVar6 = (ulonglong)local_20 - 1 != lVar3;
          lVar3 = lVar3 + 1;
        } while (bVar6);
      }
      FUN_140160cf0(local_38);
      FUN_140160cf0(local_28);
      goto LAB_1403e6ad3;
    }
  }
  uVar5 = 0;
LAB_1403e6ad3:
  if (DAT_1414ef3c0 != (local_18 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_18 ^ (ulonglong)auStack_98);
  }
  return uVar5;
}

