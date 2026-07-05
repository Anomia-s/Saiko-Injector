/**
 * Function: no_viable_physical_devices_found
 * Address:  14043a100
 * Signature: undefined no_viable_physical_devices_found(void)
 * Body size: 1501 bytes
 */


int no_viable_physical_devices_found(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  byte *local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  local_4c = 0;
  iVar2 = (*DAT_1416f1678)(*(undefined8 *)(param_1 + 8),&local_4c,0);
  if (iVar2 == 0) {
    if ((ulonglong)local_4c == 0) {
      cVar1 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(6,&DAT_141339891,"vkEnumeratePhysicalDevices(): no physical devices");
      }
      pcVar7 = "vkEnumeratePhysicalDevices(): no physical devices";
    }
    else {
      lVar5 = FUN_140160c40((ulonglong)local_4c << 3);
      iVar2 = (*DAT_1416f1678)(*(undefined8 *)(param_1 + 8),&local_4c,lVar5);
      if (iVar2 != 0) {
        FUN_140160cf0(lVar5);
        goto LAB_14043a147;
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (local_4c == 0) {
        pbVar6 = (byte *)0x0;
        local_88 = 0;
      }
      else {
        local_78 = 0;
        local_60 = param_1 + 0x368;
        local_68 = param_1 + 0x570;
        uVar8 = 0;
        local_88 = 0;
        local_70 = 0;
        pbVar6 = (byte *)0x0;
        do {
          local_50 = 0;
          local_54 = 0;
          uVar4 = *(undefined8 *)(lVar5 + uVar8 * 8);
          (*DAT_1416f1688)(uVar4,(uint *)(param_1 + 0x30));
          if (0x3fffff < *(uint *)(param_1 + 0x30)) {
            (*DAT_1416f1630)(uVar4,local_60);
            (*DAT_1416f1638)(uVar4,local_68);
            (*DAT_1416f1690)(uVar4,&local_50,0);
            if (local_50 != 0) {
              if ((uint)local_70 < local_50) {
                FUN_140160cf0(pbVar6);
                local_70 = (ulonglong)local_50;
                pbVar6 = (byte *)FUN_140160c40(local_70 * 0x18);
                if (pbVar6 == (byte *)0x0) {
                  FUN_140160cf0(lVar5);
                  FUN_140160cf0(local_88);
                  iVar2 = -0xd;
                  goto LAB_14043a19b;
                }
              }
              (*DAT_1416f1690)(uVar4,&local_50);
              *(uint *)(param_1 + 0x66c) = local_50;
              *(uint *)(param_1 + 0x670) = local_50;
              local_80 = pbVar6;
              if (local_50 == 0) {
                uVar3 = 0;
              }
              else {
                uVar10 = 0;
                uVar3 = local_50;
                do {
                  local_58 = 0;
                  if (*(int *)(pbVar6 + 4) != 0) {
                    if ((*pbVar6 & 1) != 0) {
                      *(int *)(param_1 + 0x66c) = (int)uVar10;
                    }
                    iVar2 = (*DAT_1416f16b0)(uVar4,uVar10 & 0xffffffff,
                                             *(undefined8 *)(param_1 + 0x18),&local_58);
                    if (iVar2 != 0) {
                      FUN_140160cf0(lVar5);
                      FUN_140160cf0(local_80);
                      FUN_140160cf0(local_88);
                      cVar1 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
                      if (cVar1 != '\0') {
                        uVar4 = vk_error_invalid_opaque_capture_address(iVar2);
                    /* WARNING: Subroutine does not return */
                        FUN_1400fb950(6,"%s: %s","vkGetPhysicalDeviceSurfaceSupportKHR()",uVar4);
                      }
                      uVar4 = vk_error_invalid_opaque_capture_address(iVar2);
                      pcVar7 = "vkGetPhysicalDeviceSurfaceSupportKHR()";
                      goto LAB_14043a5a9;
                    }
                    uVar3 = local_50;
                    if ((local_58 != 0) &&
                       (*(int *)(param_1 + 0x670) = (int)uVar10, (*pbVar6 & 1) != 0)) break;
                  }
                  uVar10 = uVar10 + 1;
                  pbVar6 = pbVar6 + 0x18;
                } while (uVar10 < uVar3);
              }
              pbVar6 = local_80;
              if ((*(uint *)(param_1 + 0x66c) != uVar3) && (*(uint *)(param_1 + 0x670) != uVar3)) {
                iVar2 = (*DAT_1416f1670)(uVar4,0,&local_54,0);
                if (iVar2 != 0) {
                  FUN_140160cf0(lVar5);
                  FUN_140160cf0(pbVar6);
                  FUN_140160cf0(local_88);
                  cVar1 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
                  if (cVar1 != '\0') {
                    uVar4 = vk_error_invalid_opaque_capture_address(iVar2);
                    /* WARNING: Subroutine does not return */
                    FUN_1400fb950(6,"%s: %s","vkEnumerateDeviceExtensionProperties()",uVar4);
                  }
                  uVar4 = vk_error_invalid_opaque_capture_address(iVar2);
                  pcVar7 = "vkEnumerateDeviceExtensionProperties()";
LAB_14043a5a9:
                  FUN_1400fbed0("%s: %s",pcVar7,uVar4);
                  iVar2 = -0xd;
                  goto LAB_14043a19b;
                }
                if (local_54 != 0) {
                  if ((uint)local_78 < local_54) {
                    FUN_140160cf0(local_88);
                    local_78 = (ulonglong)local_54;
                    local_88 = FUN_140160c40(local_78 * 0x104);
                    if (local_88 == 0) {
                      FUN_140160cf0(lVar5);
                      FUN_140160cf0(pbVar6);
                      iVar2 = -0xd;
                      goto LAB_14043a19b;
                    }
                  }
                  iVar2 = (*DAT_1416f1670)(uVar4,0);
                  if (iVar2 != 0) {
                    FUN_140160cf0(lVar5);
                    FUN_140160cf0(pbVar6);
                    FUN_140160cf0(local_88);
                    cVar1 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
                    if (cVar1 != '\0') {
                      uVar4 = vk_error_invalid_opaque_capture_address(iVar2);
                    /* WARNING: Subroutine does not return */
                      FUN_1400fb950(6,"%s: %s","vkEnumerateDeviceExtensionProperties()",uVar4);
                    }
                    uVar4 = vk_error_invalid_opaque_capture_address(iVar2);
                    pcVar7 = "vkEnumerateDeviceExtensionProperties()";
                    goto LAB_14043a193;
                  }
                  if (local_54 != 0) {
                    uVar10 = 0;
                    lVar9 = local_88;
                    do {
                      iVar2 = FUN_1400fd200(lVar9,"VK_KHR_swapchain");
                      if (iVar2 == 0) {
                        *(undefined8 *)(param_1 + 0x28) = uVar4;
                        goto LAB_14043a4d8;
                      }
                      uVar10 = uVar10 + 1;
                      lVar9 = lVar9 + 0x104;
                    } while (uVar10 < local_54);
                  }
                }
              }
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_4c);
      }
LAB_14043a4d8:
      FUN_140160cf0(lVar5);
      FUN_140160cf0(pbVar6);
      FUN_140160cf0(local_88);
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x28) != 0) goto LAB_14043a19b;
      cVar1 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(6,&DAT_141339891,"No viable physical devices found");
      }
      pcVar7 = "No viable physical devices found";
    }
    FUN_1400fbed0(&DAT_141339891,pcVar7);
    iVar2 = -0xd;
  }
  else {
LAB_14043a147:
    cVar1 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
    if (cVar1 != '\0') {
      uVar4 = vk_error_invalid_opaque_capture_address(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(6,"%s: %s","vkEnumeratePhysicalDevices()",uVar4);
    }
    uVar4 = vk_error_invalid_opaque_capture_address(iVar2);
    pcVar7 = "vkEnumeratePhysicalDevices()";
LAB_14043a193:
    FUN_1400fbed0("%s: %s",pcVar7,uVar4);
  }
LAB_14043a19b:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
  }
  return iVar2;
}

