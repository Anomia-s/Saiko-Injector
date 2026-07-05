/**
 * Function: could_not_parse_egl_version_string_s
 * Address:  1404572d0
 * Signature: undefined could_not_parse_egl_version_string_s(void)
 * Body size: 625 bytes
 */


undefined8 could_not_parse_egl_version_string_s(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [36];
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_74 = 0;
  if (*(int *)(param_1 + 0x408) < 1) {
    pcVar3 = "SDL_EGL_LoadLibraryOnly() has not been called or has failed.";
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x688) + 0xd8);
    if (pcVar1 == (code *)0x0) {
      pcVar3 = 
      "eglQueryDevicesEXT is missing (EXT_device_enumeration not supported by the drivers?)";
    }
    else if (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0xe8) == 0) {
      pcVar3 = 
      "eglGetPlatformDisplayEXT is missing (EXT_platform_base not supported by the drivers?)";
    }
    else {
      iVar2 = (*pcVar1)(8,local_68,&local_74);
      if (iVar2 == 1) {
        pcVar3 = (char *)FUN_140110550("SDL_HINT_EGL_DEVICE");
        if (pcVar3 == (char *)0x0) {
          if (0 < local_74) {
            lVar6 = 0;
            do {
              lVar5 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0xe8))(0x313f,local_68[lVar6],0)
              ;
              if (lVar5 != 0) {
                iVar2 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x48))(lVar5,0);
                if (iVar2 == 1) {
                  *(longlong *)(*(longlong *)(param_1 + 0x688) + 0x10) = lVar5;
                  goto LAB_14045745b;
                }
                (**(code **)(*(longlong *)(param_1 + 0x688) + 0x50))(lVar5);
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < local_74);
          }
          pcVar3 = "Could not find a valid EGL device to initialize";
        }
        else {
          iVar2 = atoi(pcVar3);
          if (iVar2 < local_74) {
            uVar4 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0xe8))(0x313f,local_68[iVar2],0);
            *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x10) = uVar4;
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x688) + 0x10);
            if (lVar6 == 0) {
              pcVar3 = "eglGetPlatformDisplayEXT() failed.";
            }
            else {
              iVar2 = (**(code **)(*(longlong *)(param_1 + 0x688) + 0x48))(lVar6,0,0);
              if (iVar2 == 1) {
LAB_14045745b:
                pcVar1 = *(code **)(*(longlong *)(param_1 + 0x688) + 0xa8);
                if (pcVar1 != (code *)0x0) {
                  lVar6 = (*pcVar1)(*(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x10),0x3054);
                  if (lVar6 != 0) {
                    local_6c = 0;
                    local_70 = 0;
                    iVar2 = FUN_1400fd340(lVar6,"%d.%d",&local_6c,&local_70);
                    if (iVar2 == 2) {
                      *(undefined4 *)(*(longlong *)(param_1 + 0x688) + 0x28) = local_6c;
                      *(undefined4 *)(*(longlong *)(param_1 + 0x688) + 0x2c) = local_70;
                    }
                    else {
                      FUN_1400fb8f0(5,"Could not parse EGL version string: %s",lVar6);
                    }
                  }
                }
                lVar6 = *(longlong *)(param_1 + 0x688);
                *(undefined1 *)(lVar6 + 0x34) = 1;
                uVar4 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
                goto LAB_1404574f3;
              }
              pcVar3 = "Could not initialize EGL";
            }
          }
          else {
            pcVar3 = "Invalid EGL device is requested.";
          }
        }
      }
      else {
        pcVar3 = "eglQueryDevicesEXT() failed";
      }
    }
  }
  uVar4 = FUN_1400fbed0(pcVar3);
LAB_1404574f3:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_98)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_98);
}

