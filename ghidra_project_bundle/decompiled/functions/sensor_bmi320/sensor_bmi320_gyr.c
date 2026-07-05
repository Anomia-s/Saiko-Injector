/**
 * Function: sensor_bmi320_gyr
 * Address:  140127980
 * Signature: undefined sensor_bmi320_gyr(void)
 * Body size: 2029 bytes
 */


int * sensor_bmi320_gyr(int param_1)

{
  size_t _Size;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  void *_Dst;
  int *piVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_d8 [36];
  undefined4 local_b4;
  longlong local_b0;
  undefined4 local_a8;
  ushort local_a4;
  short local_a2;
  ushort local_a0;
  short local_9e;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  longlong lStack_80;
  ulonglong local_78;
  longlong lStack_70;
  undefined8 local_68;
  void *pvStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  FUN_140106160(&DAT_14152564c,1);
  FUN_1401552a0(DAT_141525650);
  FUN_140106160(&DAT_14152564c,0xffffffff);
  DAT_141525658 = DAT_141525658 + 1;
  cVar2 = joystick_u_not_found(param_1,&local_b0,&local_b4);
  piVar7 = DAT_141525660;
  if (cVar2 != '\0') {
    for (; piVar7 != (int *)0x0; piVar7 = *(int **)(piVar7 + 0x54)) {
      if (param_1 == *piVar7) {
        piVar7[0x53] = piVar7[0x53] + 1;
        goto LAB_140127c59;
      }
    }
    piVar7 = (int *)FUN_140160c70(1,0x158);
    if (piVar7 != (int *)0x0) {
      FUN_1403d8ef0(piVar7,4);
      *(longlong *)(piVar7 + 0x4e) = local_b0;
      *piVar7 = param_1;
      *(undefined1 *)(piVar7 + 0x36) = 1;
      uVar8 = sdl_timer_resolution();
      *(undefined8 *)(piVar7 + 0x34) = uVar8;
      piVar7[0x39] = -1;
      cVar2 = (**(code **)(local_b0 + 0x58))(piVar7,local_b4);
      if (cVar2 == '\0') {
        FUN_1403d8ef0(piVar7,4,0);
        FUN_140160cf0(piVar7);
      }
      else {
        lVar9 = (**(code **)(local_b0 + 0x20))(local_b4);
        if (lVar9 != 0) {
          uVar8 = FUN_1400fcda0(lVar9);
          *(undefined8 *)(piVar7 + 2) = uVar8;
        }
        lVar9 = (**(code **)(local_b0 + 0x28))(local_b4);
        if (lVar9 != 0) {
          uVar8 = FUN_1400fcda0(lVar9);
          *(undefined8 *)(piVar7 + 4) = uVar8;
        }
        (**(code **)(local_b0 + 0x48))(&local_98,local_b4);
        piVar7[8] = (int)local_98;
        piVar7[9] = local_98._4_4_;
        piVar7[10] = (int)uStack_90;
        piVar7[0xb] = uStack_90._4_4_;
        if (0 < (longlong)piVar7[0x10]) {
          uVar8 = FUN_140160c70((longlong)piVar7[0x10],10);
          *(undefined8 *)(piVar7 + 0x12) = uVar8;
        }
        if (0 < (longlong)piVar7[0x14]) {
          uVar8 = FUN_140160c70((longlong)piVar7[0x14],8);
          *(undefined8 *)(piVar7 + 0x16) = uVar8;
        }
        if (0 < (longlong)piVar7[0x18]) {
          uVar8 = FUN_140160c70((longlong)piVar7[0x18],1);
          *(undefined8 *)(piVar7 + 0x1a) = uVar8;
        }
        if (0 < (longlong)piVar7[0x1c]) {
          uVar8 = FUN_140160c70((longlong)piVar7[0x1c],1);
          *(undefined8 *)(piVar7 + 0x1e) = uVar8;
        }
        if (((((piVar7[0x10] < 1) || (*(longlong *)(piVar7 + 0x12) != 0)) &&
             ((piVar7[0x14] < 1 || (*(longlong *)(piVar7 + 0x16) != 0)))) &&
            ((piVar7[0x18] < 1 || (*(longlong *)(piVar7 + 0x1a) != 0)))) &&
           ((piVar7[0x1c] < 1 || (*(longlong *)(piVar7 + 0x1e) != 0)))) {
          if (piVar7[0x10] == 2) {
LAB_140127b6b:
            lVar9 = 6;
            lVar13 = 0;
            do {
              *(undefined1 *)(*(longlong *)(piVar7 + 0x12) + lVar9) = 1;
              lVar13 = lVar13 + 1;
              lVar9 = lVar9 + 10;
            } while (lVar13 < piVar7[0x10]);
          }
          else {
            uVar5 = parameter_s_is_invalid(piVar7);
            iVar4 = parameter_s_is_invalid(piVar7);
            uVar5 = uVar5 & 0xffff | iVar4 << 0x10;
            if (0 < (longlong)DAT_1414f8c58) {
              lVar9 = 0;
              do {
                if (uVar5 == *(uint *)(DAT_1414f8c60 + lVar9 * 4)) goto LAB_140127b98;
                lVar9 = lVar9 + 1;
              } while (DAT_1414f8c58 != lVar9);
            }
            if (0 < (longlong)DAT_1414f8c40) {
              lVar9 = 0;
              do {
                if (uVar5 == *(uint *)(DAT_1414f8c48 + lVar9 * 4)) {
                  if (0 < piVar7[0x10]) goto LAB_140127b6b;
                  break;
                }
                lVar9 = lVar9 + 1;
              } while (DAT_1414f8c40 != lVar9);
            }
          }
LAB_140127b98:
          cVar2 = FUN_14043fb20();
          if ((cVar2 != '\0') &&
             (cVar2 = joystick_u_not_found(param_1,&local_98,&local_a8), cVar2 != '\0')) {
            uVar3 = (**(code **)(local_98 + 0x30))(local_a8);
            puVar10 = (undefined8 *)FUN_14043fb40(uVar3);
            if (puVar10 != (undefined8 *)0x0) {
              *(undefined8 *)(piVar7 + 0xe) = *puVar10;
            }
          }
          cVar2 = FUN_14010ca40(*piVar7);
          if ((cVar2 == '\0') || (0 < piVar7[0x24])) goto LAB_140127fd3;
          pcVar11 = (char *)FUN_140110550("SDL_GAMECONTROLLER_SENSOR_FUSION");
          if ((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) {
LAB_140127f98:
            if ((*(char **)(piVar7 + 2) != (char *)0x0) &&
               ((pcVar11 = strstr(*(char **)(piVar7 + 2),"Backbone One"), pcVar11 != (char *)0x0 ||
                (pcVar11 = strstr(*(char **)(piVar7 + 2),"Kishi"), pcVar11 != (char *)0x0)))) {
LAB_140127fc7:
              uVar14 = 0;
              goto LAB_140127fc9;
            }
            parameter_s_is_invalid(&local_98,piVar7);
            if (((ushort)local_98 < 0x20 || (ushort)local_98 == 0xff) &&
               ((((local_98._6_2_ == 0 && (uStack_90._2_2_ == 0)) && (local_98._4_2_ == 0x45e)) &&
                (((short)uStack_90 == 0x28e && (cVar2 = FUN_14015af80(0x8000), cVar2 != '\0')))))) {
              piVar12 = (int *)FUN_140151b60(0);
              if (piVar12 != (int *)0x0) {
                iVar4 = *piVar12;
                if (iVar4 != 0) {
                  bVar17 = false;
                  bVar18 = false;
                  piVar16 = piVar12;
                  do {
                    piVar16 = piVar16 + 1;
                    bVar1 = !bVar17;
                    bVar17 = true;
                    if (bVar1) {
                      iVar6 = sensor_u_not_found(iVar4);
                      if ((iVar6 == 1) && (lVar9 = sensor_u_not_found(iVar4), lVar9 != 0)) {
                        iVar6 = FUN_1400fd200(lVar9,"Sensor BMI320 Acc");
                        bVar17 = iVar6 == 0;
                      }
                      else {
                        bVar17 = false;
                      }
                    }
                    bVar1 = !bVar18;
                    bVar18 = true;
                    if (bVar1) {
                      iVar6 = sensor_u_not_found(iVar4);
                      if ((iVar6 == 2) && (lVar9 = sensor_u_not_found(iVar4), lVar9 != 0)) {
                        iVar4 = FUN_1400fd200(lVar9,"Sensor BMI320 Gyr");
                        bVar18 = iVar4 == 0;
                      }
                      else {
                        bVar18 = false;
                      }
                    }
                    iVar4 = *piVar16;
                  } while (iVar4 != 0);
                  FUN_140160cf0(piVar12);
                  FUN_14015b5e0(0x8000);
                  if ((bVar17) && (bVar18)) {
                    uVar14 = CONCAT71((int7)((ulonglong)piVar12 >> 8),1);
                    goto LAB_140127fc9;
                  }
                  goto LAB_140127fd3;
                }
                FUN_140160cf0(piVar12);
              }
              FUN_14015b5e0(0x8000);
            }
          }
          else {
            if ((*pcVar11 == '@') || (iVar4 = strncmp(pcVar11,"0x",2), iVar4 == 0)) {
              local_68 = 0;
              pvStack_60 = (void *)0x0;
              local_78 = 0;
              lStack_70 = 0;
              local_88 = (void *)0x0;
              lStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_58 = 0;
              parameter_s_is_invalid(&local_a8,piVar7);
              uVar15 = 0;
              uVar5 = 0;
              if ((ushort)local_a8 < 0x20 || (ushort)local_a8 == 0xff) {
                uVar15 = (uint)local_a0;
                uVar5 = (uint)local_a4 << 0x10;
                if (local_9e != 0 || local_a2 != 0) {
                  uVar5 = 0;
                  uVar15 = 0;
                }
              }
              uStack_90 = uStack_90 & 0xffffffff00000000;
              local_78 = local_78 & 0xffffffff00000000;
              iVar4 = (int)local_68;
              if (0 < (longlong)(int)local_68) {
                _Size = (longlong)(int)local_68 * 4;
                _Dst = (void *)FUN_140160c40(_Size);
                if (_Dst != (void *)0x0) {
                  memcpy(_Dst,pvStack_60,_Size);
                  uStack_90 = CONCAT44(iVar4,iVar4);
                  local_88 = _Dst;
                }
              }
              FUN_14012ef40(pcVar11,&uStack_90,(longlong)&uStack_90 + 4,&local_88);
              if (0 < (longlong)(int)local_78) {
                lVar9 = 0;
                do {
                  if ((uVar5 | uVar15) == *(uint *)(lStack_70 + lVar9 * 4)) goto LAB_140127f38;
                  lVar9 = lVar9 + 1;
                } while ((int)local_78 != lVar9);
              }
              if ((longlong)(int)uStack_90 < 1) {
LAB_140127f38:
                bVar17 = false;
              }
              else {
                lVar9 = 0;
                do {
                  bVar17 = (uVar5 | uVar15) == *(uint *)((longlong)local_88 + lVar9 * 4);
                  if (bVar17) break;
                  bVar18 = (longlong)(int)uStack_90 + -1 != lVar9;
                  lVar9 = lVar9 + 1;
                } while (bVar18);
              }
              if (local_98 != 0) {
                FUN_1401108b0(local_98,FUN_14012f0a0,&local_98);
              }
              if (lStack_80 != 0) {
                FUN_1401108b0(lStack_80,FUN_14012f170,&local_98);
              }
              if (local_88 != (void *)0x0) {
                FUN_140160cf0();
                uStack_90 = 0;
                local_88 = (void *)0x0;
              }
              if (lStack_70 != 0) {
                FUN_140160cf0();
              }
              if (!bVar17) goto LAB_140127f98;
              goto LAB_140127fc7;
            }
            uVar14 = 0;
            cVar2 = FUN_140110690(pcVar11,0);
            if (cVar2 == '\0') goto LAB_140127fd3;
LAB_140127fc9:
            FUN_140128440(piVar7,uVar14 & 0xffffffff);
          }
LAB_140127fd3:
          piVar7[0x53] = piVar7[0x53] + 1;
          *(int **)(piVar7 + 0x54) = DAT_141525660;
          DAT_141525660 = piVar7;
          (**(code **)(local_b0 + 0x88))(piVar7);
LAB_140127c59:
          DAT_141525658 = DAT_141525658 + -1;
          if ((DAT_141525658 == 0 && (DAT_141525648 & 1) == 0) &&
             (iVar4 = FUN_140106170(&DAT_14152564c), uVar8 = DAT_141525650, iVar4 == 0)) {
            FUN_1401552a0(DAT_141525650);
            FUN_1401552c0(DAT_141525650);
            DAT_141525650 = 0;
            FUN_1401552c0(uVar8);
            FUN_140155290(uVar8);
          }
          else {
            FUN_1401552c0(DAT_141525650);
          }
          goto LAB_140127cf1;
        }
        parameter_s_is_invalid(piVar7);
      }
    }
  }
  DAT_141525658 = DAT_141525658 + -1;
  if ((DAT_141525658 == 0 && (DAT_141525648 & 1) == 0) &&
     (iVar4 = FUN_140106170(&DAT_14152564c), uVar8 = DAT_141525650, iVar4 == 0)) {
    FUN_1401552a0(DAT_141525650);
    FUN_1401552c0(DAT_141525650);
    DAT_141525650 = 0;
    FUN_1401552c0(uVar8);
    FUN_140155290(uVar8);
  }
  else {
    FUN_1401552c0(DAT_141525650);
  }
  piVar7 = (int *)0x0;
LAB_140127cf1:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_d8)) {
    return piVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_d8);
}

