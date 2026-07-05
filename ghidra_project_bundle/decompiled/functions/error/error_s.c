/**
 * Function: error_s
 * Address:  140371070
 * Signature: undefined error_s(void)
 * Body size: 653 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * error_s(longlong param_1,undefined8 *param_2)

{
  longlong *******ppppppplVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *******ppppppplVar15;
  undefined1 auStack_68 [32];
  longlong *******local_48 [3];
  ulonglong local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  *(undefined4 *)param_2 = 0;
  *(undefined1 (*) [32])(param_2 + 2) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_2 + 6) = ZEXT1232(ZEXT812(0));
  cVar3 = *(char *)(param_1 + 0x90);
  if (cVar3 == '\x02') {
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(param_1 + 0xb0);
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
    uVar9 = *(undefined8 *)(param_1 + 200);
    uVar10 = *(undefined8 *)(param_1 + 0xd0);
    uVar11 = *(undefined8 *)(param_1 + 0xd8);
    uVar12 = *(undefined8 *)(param_1 + 0xd8);
    uVar13 = *(undefined8 *)(param_1 + 0xe0);
    uVar14 = *(undefined8 *)(param_1 + 0xe8);
    param_2[6] = *(undefined8 *)(param_1 + 0xd0);
    param_2[7] = uVar12;
    param_2[8] = uVar13;
    param_2[9] = uVar14;
    param_2[4] = uVar8;
    param_2[5] = uVar9;
    param_2[6] = uVar10;
    param_2[7] = uVar11;
    *param_2 = uVar4;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    goto LAB_140371167;
  }
  if (cVar3 == '\x01') {
    ppppppplVar15 = *(longlong ********)(param_1 + 0xf8);
    if (ppppppplVar15 == (longlong *******)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))(*(longlong **)(param_1 + 0xf0),local_48)
      ;
      ppppppplVar15 = local_48[0];
      if (local_28 == '\x01') {
joined_r0x000140371231:
        if (local_48[0] != (longlong *******)0x0) {
          LOCK();
          ppppppplVar1 = local_48[0] + 1;
          *(int *)ppppppplVar1 = *(int *)ppppppplVar1 + -1;
          UNLOCK();
          if (*(int *)ppppppplVar1 == 0) {
            (*(code *)**local_48[0])(local_48[0],1);
          }
        }
      }
      else {
        ppppppplVar15 = (longlong *******)local_48;
        if (0xf < local_30) {
          ppppppplVar15 = local_48[0];
        }
        (*(code *)PTR_vfunction4_1414f67c8)("Error: %s",ppppppplVar15);
        if (local_28 == '\x02') {
          if (0xf < local_30) {
            (*DAT_14151f538)();
          }
        }
        else if (local_28 == '\x01') {
          ppppppplVar15 = (longlong *******)0x0;
          goto joined_r0x000140371231;
        }
        ppppppplVar15 = (longlong *******)0x0;
      }
    }
    (*(code *)(*ppppppplVar15)[7])(ppppppplVar15,param_2);
    FUN_1403d4670(param_2,*(undefined4 *)(param_1 + 0xa0));
  }
  else {
    if (cVar3 != '\0') goto LAB_140371167;
    ppppppplVar15 = *(longlong ********)(param_1 + 0xf8);
    if (ppppppplVar15 == (longlong *******)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))(*(longlong **)(param_1 + 0xf0),local_48)
      ;
      ppppppplVar15 = local_48[0];
      if (local_28 == '\x01') {
joined_r0x000140371290:
        if (local_48[0] != (longlong *******)0x0) {
          LOCK();
          ppppppplVar1 = local_48[0] + 1;
          *(int *)ppppppplVar1 = *(int *)ppppppplVar1 + -1;
          UNLOCK();
          if (*(int *)ppppppplVar1 == 0) {
            (*(code *)**local_48[0])(local_48[0],1);
          }
        }
      }
      else {
        ppppppplVar15 = (longlong *******)local_48;
        if (0xf < local_30) {
          ppppppplVar15 = local_48[0];
        }
        (*(code *)PTR_vfunction4_1414f67c8)("Error: %s",ppppppplVar15);
        if (local_28 == '\x02') {
          if (0xf < local_30) {
            (*DAT_14151f538)();
          }
        }
        else if (local_28 == '\x01') {
          ppppppplVar15 = (longlong *******)0x0;
          goto joined_r0x000140371290;
        }
        ppppppplVar15 = (longlong *******)0x0;
      }
    }
    (*(code *)(*ppppppplVar15)[7])(ppppppplVar15,param_2);
  }
  fVar2 = *(float *)(param_1 + 0x94);
  *(float *)(param_2 + 2) = fVar2 * *(float *)(param_2 + 2);
  *(float *)((longlong)param_2 + 0x14) = fVar2 * *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) = fVar2 * *(float *)(param_2 + 3);
  *(float *)((longlong)param_2 + 0x1c) = fVar2 * *(float *)((longlong)param_2 + 0x1c);
  *(float *)(param_2 + 4) = fVar2 * *(float *)(param_2 + 4);
  *(float *)((longlong)param_2 + 0x24) = fVar2 * *(float *)((longlong)param_2 + 0x24);
  *(float *)(param_2 + 5) = fVar2 * *(float *)(param_2 + 5);
  *(float *)((longlong)param_2 + 0x2c) = fVar2 * *(float *)((longlong)param_2 + 0x2c);
  *(float *)(param_2 + 6) = fVar2 * *(float *)(param_2 + 6);
  *(float *)((longlong)param_2 + 0x34) = fVar2 * *(float *)((longlong)param_2 + 0x34);
  *(float *)(param_2 + 7) = fVar2 * *(float *)(param_2 + 7);
  *(float *)((longlong)param_2 + 0x3c) = fVar2 * *(float *)((longlong)param_2 + 0x3c);
  *(float *)(param_2 + 8) = fVar2 * *(float *)(param_2 + 8);
  *(float *)((longlong)param_2 + 0x44) = fVar2 * *(float *)((longlong)param_2 + 0x44);
  *(float *)(param_2 + 9) = fVar2 * *(float *)(param_2 + 9);
  *(float *)((longlong)param_2 + 0x4c) = fVar2 * *(float *)((longlong)param_2 + 0x4c);
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3f800000;
LAB_140371167:
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_68);
  }
  return param_2;
}

