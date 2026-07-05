/**
 * Function: bad_component_count
 * Address:  1404974a0
 * Signature: undefined bad_component_count(void)
 * Body size: 2004 bytes
 */


undefined8 bad_component_count(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *pcVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint *puVar19;
  int *piVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  
  piVar4 = (int *)*param_1;
  uVar6 = FUN_14048fe40(piVar4);
  if (uVar6 < 0xb) {
LAB_1404974ca:
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar13 = "bad SOF len";
    goto LAB_14049768c;
  }
  pcVar13 = *(char **)(piVar4 + 0x30);
  if (pcVar13 < *(char **)(piVar4 + 0x32)) {
    *(char **)(piVar4 + 0x30) = pcVar13 + 1;
    cVar3 = *pcVar13;
joined_r0x000140497571:
    if (cVar3 == '\b') {
      iVar7 = FUN_14048fe40(piVar4);
      piVar4[1] = iVar7;
      if (iVar7 == 0) {
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pcVar13 = "no header height";
        goto LAB_14049768c;
      }
      iVar7 = FUN_14048fe40(piVar4);
      *piVar4 = iVar7;
      if (iVar7 == 0) {
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pcVar13 = "0 width";
        goto LAB_14049768c;
      }
      if ((uint)piVar4[1] < 0x1000001) {
        pbVar9 = *(byte **)(piVar4 + 0x30);
        if (pbVar9 < *(byte **)(piVar4 + 0x32)) {
LAB_140497639:
          *(byte **)(piVar4 + 0x30) = pbVar9 + 1;
          bVar5 = *pbVar9;
          if ((bVar5 < 5) && ((0x1aU >> (bVar5 & 0x1f) & 1) != 0)) {
            uVar16 = (uint)bVar5;
            piVar4[2] = uVar16;
            if ((byte)(bVar5 - 1) < 3) {
              uVar24 = 0;
            }
            else {
              puVar21 = param_1 + 0x901;
              uVar24 = 0;
              do {
                puVar21[-0x27] = 0;
                puVar21[-0x24] = 0;
                puVar21[-0x1b] = 0;
                puVar21[-0x18] = 0;
                puVar21[-0xf] = 0;
                puVar21[-0xc] = 0;
                puVar21[-3] = 0;
                *puVar21 = 0;
                uVar24 = uVar24 + 4;
                puVar21 = puVar21 + 0x30;
              } while ((uVar16 & 0x7c) != uVar24);
            }
            if ((bVar5 & 3) != 0) {
              lVar18 = 0;
              do {
                *(undefined8 *)((longlong)param_1 + lVar18 + uVar24 * 0x60 + 0x46d0) = 0;
                *(undefined8 *)((longlong)param_1 + lVar18 + uVar24 * 0x60 + 0x46e8) = 0;
                lVar18 = lVar18 + 0x60;
              } while ((ulonglong)((uVar16 & 3) << 5) * 3 != lVar18);
            }
            if (uVar6 != piVar4[2] * 3 + 8U) goto LAB_1404974ca;
            *(undefined4 *)(param_1 + 0x90a) = 0;
            uVar24 = (ulonglong)(uint)piVar4[2];
            if (0 < piVar4[2]) {
              pbVar9 = (byte *)(piVar4 + 0xe);
              pbVar1 = (byte *)((longlong)piVar4 + 0x39);
              puVar19 = (uint *)((longlong)param_1 + 0x46ac);
              lVar18 = 0;
              do {
                pbVar10 = *(byte **)(piVar4 + 0x30);
                if (pbVar10 < *(byte **)(piVar4 + 0x32)) {
                  *(byte **)(piVar4 + 0x30) = pbVar10 + 1;
                  bVar5 = *pbVar10;
                }
                else if (piVar4[0xc] == 0) {
                  bVar5 = 0;
                }
                else {
                  iVar7 = (**(code **)(piVar4 + 4))(*(undefined8 *)(piVar4 + 10),pbVar9,piVar4[0xd])
                  ;
                  piVar4[0x2e] = piVar4[0x2e] + (piVar4[0x30] - piVar4[0x34]);
                  if (iVar7 == 0) {
                    piVar4[0xc] = 0;
                    *(undefined1 *)(piVar4 + 0xe) = 0;
                    bVar5 = 0;
                    pbVar10 = pbVar1;
                  }
                  else {
                    bVar5 = *pbVar9;
                    pbVar10 = pbVar9 + iVar7;
                  }
                  *(byte **)(piVar4 + 0x32) = pbVar10;
                  *(byte **)(piVar4 + 0x30) = pbVar1;
                }
                puVar19[-3] = (uint)bVar5;
                if ((piVar4[2] == 3) && (bVar5 == (&DAT_140e1a81f)[lVar18])) {
                  *(int *)(param_1 + 0x90a) = *(int *)(param_1 + 0x90a) + 1;
                }
                pbVar10 = *(byte **)(piVar4 + 0x30);
                if (pbVar10 < *(byte **)(piVar4 + 0x32)) {
                  pbVar14 = pbVar10 + 1;
                }
                else {
                  if (piVar4[0xc] == 0) {
                    puVar19[-2] = 0;
                    goto LAB_1404979d5;
                  }
                  iVar7 = (**(code **)(piVar4 + 4))(*(undefined8 *)(piVar4 + 10),pbVar9,piVar4[0xd])
                  ;
                  piVar4[0x2e] = piVar4[0x2e] + (piVar4[0x30] - piVar4[0x34]);
                  if (iVar7 == 0) {
                    piVar4[0xc] = 0;
                    *(undefined1 *)(piVar4 + 0xe) = 0;
                    pbVar10 = pbVar1;
                  }
                  else {
                    pbVar10 = pbVar9 + iVar7;
                  }
                  *(byte **)(piVar4 + 0x32) = pbVar10;
                  pbVar10 = pbVar9;
                  pbVar14 = pbVar1;
                }
                *(byte **)(piVar4 + 0x30) = pbVar14;
                bVar5 = *pbVar10;
                puVar19[-2] = (uint)(bVar5 >> 4);
                if ((byte)(bVar5 + 0xb0) < 0xc0) goto LAB_1404979d5;
                puVar19[-1] = bVar5 & 0xf;
                if ((bVar5 & 0xf) - 5 < 0xfffffffc) goto LAB_140497c16;
                pbVar10 = *(byte **)(piVar4 + 0x30);
                if (pbVar10 < *(byte **)(piVar4 + 0x32)) {
                  pbVar14 = pbVar10 + 1;
LAB_140497932:
                  *(byte **)(piVar4 + 0x30) = pbVar14;
                  bVar5 = *pbVar10;
                  *puVar19 = (uint)bVar5;
                  if (3 < bVar5) {
                    lVar18 = *(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    pcVar13 = "bad TQ";
                    goto LAB_14049768c;
                  }
                }
                else {
                  if (piVar4[0xc] != 0) {
                    iVar7 = (**(code **)(piVar4 + 4))
                                      (*(undefined8 *)(piVar4 + 10),pbVar9,piVar4[0xd]);
                    piVar4[0x2e] = piVar4[0x2e] + (piVar4[0x30] - piVar4[0x34]);
                    if (iVar7 == 0) {
                      piVar4[0xc] = 0;
                      *(undefined1 *)(piVar4 + 0xe) = 0;
                      pbVar10 = pbVar1;
                    }
                    else {
                      pbVar10 = pbVar9 + iVar7;
                    }
                    *(byte **)(piVar4 + 0x32) = pbVar10;
                    pbVar10 = pbVar9;
                    pbVar14 = pbVar1;
                    goto LAB_140497932;
                  }
                  *puVar19 = 0;
                }
                lVar18 = lVar18 + 1;
                uVar24 = (ulonglong)piVar4[2];
                puVar19 = puVar19 + 0x18;
              } while (lVar18 < (longlong)uVar24);
            }
            if (param_2 != 0) {
              return 1;
            }
            uVar6 = (uint)uVar24;
            iVar7 = FUN_1404924a0(*piVar4,piVar4[1],uVar24 & 0xffffffff,0);
            if (iVar7 != 0) {
              uVar17 = 1;
              uVar16 = 1;
              if (0 < (int)uVar6) {
                uVar15 = uVar24 & 0xffffffff;
                if (uVar6 == 1) {
                  uVar17 = 1;
                  uVar11 = 0;
                  uVar16 = 1;
                }
                else {
                  puVar19 = (uint *)(param_1 + 0x8e1);
                  uVar17 = 1;
                  uVar11 = 0;
                  uVar16 = 1;
                  do {
                    if ((int)uVar16 < (int)puVar19[-0x19]) {
                      uVar16 = puVar19[-0x19];
                    }
                    if ((int)uVar17 < (int)puVar19[-0x18]) {
                      uVar17 = puVar19[-0x18];
                    }
                    if ((int)uVar16 < (int)puVar19[-1]) {
                      uVar16 = puVar19[-1];
                    }
                    if ((int)uVar17 < (int)*puVar19) {
                      uVar17 = *puVar19;
                    }
                    uVar11 = uVar11 + 2;
                    puVar19 = puVar19 + 0x30;
                  } while ((uVar6 & 0x7ffffffe) != uVar11);
                }
                if ((uVar24 & 1) != 0) {
                  uVar6 = *(uint *)((longlong)param_1 + uVar11 * 0x60 + 0x46a4);
                  if ((int)uVar16 < (int)uVar6) {
                    uVar16 = uVar6;
                  }
                  if ((int)uVar17 < (int)*(uint *)(param_1 + uVar11 * 0xc + 0x8d5)) {
                    uVar17 = *(uint *)(param_1 + uVar11 * 0xc + 0x8d5);
                  }
                }
                piVar20 = (int *)(param_1 + 0x8d5);
                do {
                  if ((int)uVar16 % piVar20[-1] != 0) goto LAB_1404979d5;
                  if ((int)uVar17 % *piVar20 != 0) goto LAB_140497c16;
                  piVar20 = piVar20 + 0x18;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              *(uint *)(param_1 + 0x8d1) = uVar16;
              *(uint *)((longlong)param_1 + 0x468c) = uVar17;
              *(uint *)(param_1 + 0x8d3) = uVar16 * 8;
              *(uint *)((longlong)param_1 + 0x469c) = uVar17 * 8;
              uVar6 = ((*piVar4 + uVar16 * 8) - 1) / (uVar16 * 8);
              *(uint *)(param_1 + 0x8d2) = uVar6;
              uVar8 = ((piVar4[1] + uVar17 * 8) - 1) / (uVar17 * 8);
              *(uint *)((longlong)param_1 + 0x4694) = uVar8;
              if (0 < piVar4[2]) {
                piVar20 = (int *)((longlong)param_1 + 0x46fc);
                lVar18 = 0;
                do {
                  piVar20[-0x10] = (*piVar4 * piVar20[-0x16] + (uVar16 - 1)) / uVar16;
                  piVar20[-0xf] = (piVar4[1] * piVar20[-0x15] + (uVar17 - 1)) / uVar17;
                  iVar23 = piVar20[-0x16] * uVar6;
                  iVar7 = iVar23 * 8;
                  piVar20[-0xe] = iVar7;
                  iVar22 = piVar20[-0x15] * uVar8;
                  iVar2 = iVar22 * 8;
                  piVar20[-0xd] = iVar2;
                  lVar12 = FUN_140492510(iVar7,iVar2,0xf);
                  piVar20[-7] = 0;
                  piVar20[-6] = 0;
                  piVar20[-5] = 0;
                  piVar20[-4] = 0;
                  piVar20[-3] = 0;
                  piVar20[-2] = 0;
                  *(longlong *)(piVar20 + -9) = lVar12;
                  if (lVar12 == 0) {
LAB_140497c3f:
                    *(char **)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x220) = "outofmem";
                    FUN_140497e60(param_1,(int)lVar18 + 1);
                    return 0;
                  }
                  *(ulonglong *)(piVar20 + -0xb) = lVar12 + 0xfU & 0xfffffffffffffff0;
                  if (*(int *)(param_1 + 0x906) != 0) {
                    piVar20[-1] = iVar23;
                    *piVar20 = iVar22;
                    lVar12 = FUN_140492440(iVar7,iVar2,2,0xf);
                    *(longlong *)(piVar20 + -7) = lVar12;
                    if (lVar12 == 0) goto LAB_140497c3f;
                    *(ulonglong *)(piVar20 + -3) = lVar12 + 0xfU & 0xfffffffffffffff0;
                  }
                  lVar18 = lVar18 + 1;
                  piVar20 = piVar20 + 0x18;
                } while (lVar18 < piVar4[2]);
              }
              return 1;
            }
            goto LAB_14049759b;
          }
        }
        else if (piVar4[0xc] != 0) {
          FUN_14048bcd0(piVar4);
          pbVar9 = *(byte **)(piVar4 + 0x30);
          goto LAB_140497639;
        }
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pcVar13 = "bad component count";
      }
      else {
LAB_14049759b:
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pcVar13 = "too large";
      }
      goto LAB_14049768c;
    }
  }
  else if (piVar4[0xc] != 0) {
    piVar20 = piVar4 + 0xe;
    iVar7 = (**(code **)(piVar4 + 4))(*(undefined8 *)(piVar4 + 10),piVar20,piVar4[0xd]);
    piVar4[0x2e] = piVar4[0x2e] + (piVar4[0x30] - piVar4[0x34]);
    if (iVar7 == 0) {
      piVar4[0xc] = 0;
      pcVar13 = (char *)((longlong)piVar4 + 0x39);
      *(undefined1 *)(piVar4 + 0xe) = 0;
    }
    else {
      pcVar13 = (char *)((longlong)iVar7 + (longlong)piVar20);
    }
    *(char **)(piVar4 + 0x32) = pcVar13;
    *(longlong *)(piVar4 + 0x30) = (longlong)piVar4 + 0x39;
    cVar3 = (char)*piVar20;
    goto joined_r0x000140497571;
  }
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar13 = "only 8-bit";
  goto LAB_14049768c;
LAB_1404979d5:
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar13 = "bad H";
  goto LAB_14049768c;
LAB_140497c16:
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar13 = "bad V";
LAB_14049768c:
  *(char **)(lVar18 + 0x220) = pcVar13;
  return 0;
}

