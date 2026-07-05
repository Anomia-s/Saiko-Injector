/**
 * Function: couldnt_get_device_button_capabilities
 * Address:  140445080
 * Signature: undefined couldnt_get_device_button_capabilities(void)
 * Body size: 1724 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong couldnt_get_device_button_capabilities(longlong param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  code *pcVar9;
  code *pcVar10;
  size_t sVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined7 uVar18;
  longlong lVar19;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [46];
  ushort local_52;
  ushort local_50 [8];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  lVar12 = DAT_1416f17a8;
  if (param_2 != 0 && DAT_1416f17a8 != 0) {
    do {
      param_2 = param_2 + -1;
      lVar12 = *(longlong *)(lVar12 + 0x58);
      if (lVar12 == 0) break;
    } while (param_2 != 0);
  }
  pcVar8 = (char *)FUN_140160c70(1,0x70);
  if (pcVar8 == (char *)0x0) {
    uVar14 = 0;
    goto LAB_1404453f4;
  }
  *(char **)(param_1 + 0x140) = pcVar8;
  FUN_140106160(lVar12,1);
  *(longlong *)(pcVar8 + 0x68) = lVar12;
  *(longlong *)(lVar12 + 0x48) = param_1;
  if (*(char *)(lVar12 + 0x2e) == '\x01') {
    DAT_1416f1870 = 0;
    cVar4 = FUN_1401106d0("SDL_JOYSTICK_RAWINPUT_CORRELATE_XINPUT",1);
    pcVar8[0x50] = cVar4;
    if ((cVar4 != '\0') &&
       ((cVar4 = xinputgetbatteryinformation(), cVar4 == '\0' || (DAT_1416fdea0 == 0)))) {
      pcVar8[0x50] = '\0';
    }
    pcVar8[0x55] = -1;
    cVar4 = FUN_1401106d0("SDL_JOYSTICK_WGI",1);
    if (cVar4 != '\0') {
      _DAT_1416f1830 = _DAT_1416f1830 + 1;
      if ((DAT_1416f182c == '\0') && (iVar5 = roinitialize(), -1 < iVar5)) {
        _DAT_1416f182c = 0x101;
        pcVar9 = (code *)FUN_1403d7780("WindowsCreateStringReference");
        pcVar10 = (code *)FUN_1403d7780("RoGetActivationFactory");
        if (pcVar10 != (code *)0x0 && pcVar9 != (code *)0x0) {
          sVar11 = wcslen(L"Windows.Gaming.Input.Gamepad");
          iVar5 = (*pcVar9)(L"Windows.Gaming.Input.Gamepad",sVar11 & 0xffffffff,local_80,&local_88);
          if (-1 < iVar5) {
            (*pcVar10)(local_88,&DAT_140e15e24,&DAT_1416f1838);
          }
          if (DAT_1416f1838 != (longlong *)0x0) {
            DAT_1416f182e = 1;
            iVar5 = (**(code **)(*DAT_1416f1838 + 0x30))
                              (DAT_1416f1838,&PTR_PTR_1415039a0,&DAT_1416f1840);
            if (iVar5 < 0) {
              FUN_1400fbed0("add_GamepadAdded() failed: 0x%lx",iVar5);
            }
            iVar5 = (**(code **)(*DAT_1416f1838 + 0x40))
                              (DAT_1416f1838,&PTR_PTR_1415039d0,&DAT_1416f1848);
            if (iVar5 < 0) {
              FUN_1400fbed0("add_GamepadRemoved() failed: 0x%lx",iVar5);
            }
          }
        }
      }
    }
  }
  *pcVar8 = *(char *)(lVar12 + 0x2e);
  pcVar8[1] = *(char *)(lVar12 + 0x2f);
  pcVar8[0x40] = '\0';
  pcVar8[0x41] = '\0';
  pcVar8[0x42] = '\0';
  pcVar8[0x43] = '\0';
  pcVar8[0x44] = -0x78;
  pcVar8[0x45] = '\0';
  pcVar8[0x46] = '\0';
  pcVar8[0x47] = '\0';
  *(undefined8 *)(pcVar8 + 8) = *(undefined8 *)(lVar12 + 0x38);
  uVar6 = (*DAT_1416f2258)(0);
  *(uint *)(pcVar8 + 0x10) = uVar6;
  lVar12 = FUN_140160c40((ulonglong)uVar6 << 3);
  *(longlong *)(pcVar8 + 0x18) = lVar12;
  if (lVar12 == 0) {
    FUN_1404469a0(param_1);
    uVar14 = 0;
    goto LAB_1404453f4;
  }
  iVar5 = (*DAT_1416f2240)(*(undefined8 *)(pcVar8 + 8),local_80);
  if (iVar5 == 0x110000) {
    lVar12 = FUN_140160c40((ulonglong)local_52 * 0x48);
    iVar5 = (*DAT_1416f2248)(0,lVar12,&local_52,*(undefined8 *)(pcVar8 + 8));
    if (iVar5 == 0x110000) {
      lVar13 = FUN_140160c40((ulonglong)local_50[0] * 0x48);
      iVar5 = (*DAT_1416f2250)(0,lVar13,local_50,*(undefined8 *)(pcVar8 + 8));
      if (iVar5 == 0x110000) {
        FUN_140170b10(lVar13,local_50[0],0x48,&LAB_140446c90);
        if (local_52 != 0) {
          lVar16 = 0;
          do {
            if (*(short *)(lVar12 + lVar16) == 9) {
              if (*(char *)(lVar12 + 0xc + lVar16) == '\0') {
                iVar5 = 1;
              }
              else {
                iVar5 = ((uint)*(ushort *)(lVar12 + 0x46 + lVar16) -
                        (uint)*(ushort *)(lVar12 + 0x44 + lVar16)) + 1;
              }
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + iVar5;
            }
            lVar16 = lVar16 + 0x48;
          } while ((ulonglong)local_52 * 0x48 != lVar16);
        }
        if (*(int *)(param_1 + 0x70) < 1) {
LAB_140445525:
          if ((*pcVar8 == '\x01') && (*(int *)(param_1 + 0x70) == 10)) {
            pcVar8[0x38] = '\x01';
            *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          }
          FUN_140160cf0();
          if (local_50[0] != 0) {
            lVar12 = 0;
            do {
              if ((*(char *)(lVar13 + 0xc + lVar12) == '\0') &&
                 ((sVar3 = *(short *)(lVar13 + 0x38 + lVar12), pcVar8[0x39] != '\x01' ||
                  (sVar3 != 0x32)))) {
                if (sVar3 == 0x39) {
                  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
                }
                else if ((sVar3 != 0x32) || (*pcVar8 == '\0')) {
                  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
                }
              }
              lVar12 = lVar12 + 0x48;
            } while ((ulonglong)local_50[0] * 0x48 != lVar12);
          }
          if (*(int *)(param_1 + 0x40) < 1) {
LAB_14044561d:
            if (pcVar8[0x39] == '\x01') {
              *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 2;
            }
            if (0 < *(int *)(param_1 + 0x60)) {
              lVar12 = FUN_140160c40();
              *(longlong *)(pcVar8 + 0x30) = lVar12;
              if (lVar12 == 0) goto LAB_140445712;
              if (local_50[0] != 0) {
                puVar15 = (undefined2 *)(lVar13 + 0x44);
                uVar14 = 0;
                iVar5 = 0;
                do {
                  if ((*(char *)(puVar15 + -0x1c) == '\0') && (puVar15[-6] == 0x39)) {
                    lVar12 = (longlong)iVar5;
                    iVar5 = iVar5 + 1;
                    *(undefined2 *)(*(longlong *)(pcVar8 + 0x30) + lVar12 * 2) = *puVar15;
                  }
                  uVar14 = uVar14 + 1;
                  puVar15 = puVar15 + 0x24;
                } while (uVar14 < local_50[0]);
              }
            }
            FUN_140160cf0(lVar13);
            uVar18 = (undefined7)((ulonglong)lVar13 >> 8);
            uVar14 = CONCAT71(uVar18,1);
            if (*pcVar8 == '\x01') {
              uVar7 = parameter_s_is_invalid(param_1);
              uVar14 = CONCAT71(uVar18,1);
              FUN_14014fd20(uVar7,"SDL.joystick.cap.rumble",1);
              if (*pcVar8 == '\x01') {
                uVar7 = parameter_s_is_invalid(param_1);
                uVar14 = CONCAT71(uVar18,1);
                FUN_14014fd20(uVar7,"SDL.joystick.cap.rumble",1);
                if (pcVar8[1] == '\x01') {
                  uVar7 = parameter_s_is_invalid(param_1);
                  uVar14 = CONCAT71(uVar18,1);
                  FUN_14014fd20(uVar7,"SDL.joystick.cap.trigger_rumble",1);
                }
              }
            }
            goto LAB_1404453f4;
          }
          lVar12 = FUN_140160c40();
          *(longlong *)(pcVar8 + 0x28) = lVar12;
          if (lVar12 != 0) {
            if (local_50[0] != 0) {
              puVar15 = (undefined2 *)(lVar13 + 0x44);
              uVar14 = 0;
              iVar5 = 0;
              do {
                if ((*(char *)(puVar15 + -0x1c) == '\0') && (puVar15[-6] != 0x39)) {
                  if ((puVar15[-6] == 0x32) && (*pcVar8 != '\0')) {
                    pcVar8[0x39] = '\x01';
                    *(undefined2 *)(pcVar8 + 0x3a) = *puVar15;
                  }
                  else {
                    lVar12 = (longlong)iVar5;
                    iVar5 = iVar5 + 1;
                    *(undefined2 *)(*(longlong *)(pcVar8 + 0x28) + lVar12 * 2) = *puVar15;
                  }
                }
                uVar14 = uVar14 + 1;
                puVar15 = puVar15 + 0x24;
              } while (uVar14 < local_50[0]);
            }
            goto LAB_14044561d;
          }
LAB_140445712:
          FUN_1404469a0(param_1);
          lVar12 = lVar13;
        }
        else {
          lVar16 = FUN_140160c40();
          *(longlong *)(pcVar8 + 0x20) = lVar16;
          if (lVar16 != 0) {
            if (local_52 != 0) {
              uVar14 = 0;
              uVar17 = 0;
              do {
                if (*(short *)(lVar12 + uVar14 * 0x48) == 9) {
                  lVar16 = lVar12 + uVar14 * 0x48;
                  iVar5 = (int)uVar17;
                  if (*(char *)(lVar16 + 0xc) == '\0') {
                    uVar17 = (ulonglong)(iVar5 + 1);
                    *(undefined2 *)(*(longlong *)(pcVar8 + 0x20) + (longlong)iVar5 * 2) =
                         *(undefined2 *)(lVar16 + 0x44);
                  }
                  else {
                    uVar1 = *(ushort *)(lVar16 + 0x46);
                    uVar2 = *(ushort *)(lVar16 + 0x44);
                    if (uVar2 <= uVar1) {
                      uVar17 = (ulonglong)iVar5;
                      uVar6 = ((uint)uVar1 - (uint)uVar2) + 1;
                      if (uVar1 == uVar2) {
                        lVar19 = 0;
                      }
                      else {
                        lVar19 = 0;
                        do {
                          *(short *)(*(longlong *)(pcVar8 + 0x20) + uVar17 * 2 + lVar19 * 2) =
                               (short)*(undefined4 *)(lVar16 + 0x44) + (short)lVar19;
                          *(short *)(*(longlong *)(pcVar8 + 0x20) + uVar17 * 2 + 2 + lVar19 * 2) =
                               (short)lVar19 + (short)*(undefined4 *)(lVar16 + 0x44) + 1;
                          lVar19 = lVar19 + 2;
                        } while ((uVar6 & 0xfffffffe) != (uint)lVar19);
                        uVar17 = uVar17 + lVar19;
                      }
                      if ((uVar6 & 1) != 0) {
                        *(short *)(*(longlong *)(pcVar8 + 0x20) + uVar17 * 2) =
                             (short)lVar19 + *(short *)(lVar16 + 0x44);
                        uVar17 = uVar17 + 1;
                      }
                    }
                  }
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < local_52);
            }
            goto LAB_140445525;
          }
          FUN_1404469a0(param_1);
          FUN_140160cf0(lVar13);
        }
        FUN_140160cf0(lVar12);
        uVar14 = 0;
        goto LAB_1404453f4;
      }
      FUN_1404469a0(param_1);
      FUN_140160cf0(lVar12);
      pcVar8 = "Couldn\'t get device value capabilities";
    }
    else {
      FUN_1404469a0(param_1);
      pcVar8 = "Couldn\'t get device button capabilities";
    }
  }
  else {
    FUN_1404469a0(param_1);
    pcVar8 = "Couldn\'t get device capabilities";
  }
  uVar6 = FUN_1400fbed0(pcVar8);
  uVar14 = (ulonglong)uVar6;
LAB_1404453f4:
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_a8);
  }
  return uVar14 & 0xffffffff;
}

