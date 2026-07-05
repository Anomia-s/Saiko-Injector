/**
 * Function: output_buffer_limit
 * Address:  1404809a0
 * Signature: undefined output_buffer_limit(void)
 * Body size: 4718 bytes
 */


undefined8
output_buffer_limit(ulonglong *param_1,undefined1 *param_2,int param_3,undefined4 param_4,
                   int param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined1 uVar24;
  char *pcVar25;
  uint *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  undefined8 uVar30;
  undefined1 *puVar31;
  uint uVar32;
  ulonglong *puVar33;
  ulonglong uVar34;
  undefined1 local_a68 [32];
  longlong local_a48;
  ulonglong *local_a40;
  byte local_a38 [31];
  byte abStack_a19 [469];
  undefined4 local_844;
  ushort auStack_432 [27];
  int aiStack_3fc [11];
  ushort auStack_3ce [7];
  byte abStack_3c0 [288];
  ushort auStack_2a0 [288];
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)local_a68;
  param_1[5] = (ulonglong)param_2;
  param_1[4] = (ulonglong)param_2;
  param_1[6] = (ulonglong)(param_2 + param_3);
  *(undefined4 *)(param_1 + 7) = param_4;
  if (param_5 == 0) {
LAB_140480a6c:
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    lVar19 = (longlong)param_1 + 0x3c;
    puVar33 = param_1 + 0x104;
    uVar20 = 0;
    iVar8 = 0;
    local_a48 = lVar19;
    local_a40 = puVar33;
LAB_140481a24:
    do {
      iVar12 = iVar8;
      bVar5 = (byte)iVar12 & 0x1f;
      if ((uint)uVar20 >> bVar5 != 0) {
        *param_1 = param_1[1];
        goto LAB_140481a7b;
      }
      pbVar11 = (byte *)*param_1;
      uVar7 = 0 >> bVar5;
      if (pbVar11 < (byte *)param_1[1]) {
        *param_1 = (ulonglong)(pbVar11 + 1);
        uVar7 = (uint)*pbVar11;
      }
      uVar7 = (uint)uVar20 | uVar7 << ((byte)iVar12 & 0x1f);
      uVar20 = (ulonglong)uVar7;
      *(uint *)(param_1 + 3) = uVar7;
      *(int *)(param_1 + 2) = iVar12 + 8;
      iVar8 = iVar12 + 8;
    } while (iVar12 < 0x11);
    iVar8 = iVar12 + 7;
    uVar32 = uVar7 >> 3;
    *(uint *)(param_1 + 3) = uVar32;
    uVar15 = iVar12 + 5;
    *(uint *)(param_1 + 2) = uVar15;
    uVar30 = 0;
    switch(uVar7 >> 1 & 3) {
    case 0:
switchD_140481a79_caseD_0:
      puVar26 = &switchD_140481a79::switchdataD_140e1bf4c;
      uVar7 = uVar15 & 7;
      if (uVar7 != 0) {
        if (iVar8 < 2) {
          do {
            bVar5 = (byte)uVar15 & 0x1f;
            if (uVar32 >> bVar5 != 0) {
              *param_1 = param_1[1];
              break;
            }
            puVar26 = (uint *)*param_1;
            uVar17 = 0 >> bVar5;
            if (puVar26 < (uint *)param_1[1]) {
              *param_1 = (ulonglong)((longlong)puVar26 + 1);
              uVar17 = (uint)(byte)*puVar26;
            }
            uVar32 = uVar32 | uVar17 << ((byte)uVar15 & 0x1f);
            *(uint *)(param_1 + 3) = uVar32;
            uVar17 = uVar15 + 8;
            *(uint *)(param_1 + 2) = uVar17;
            bVar2 = (int)uVar15 < 0x11;
            uVar15 = uVar17;
          } while (bVar2);
        }
        uVar32 = uVar32 >> (sbyte)uVar7;
        *(uint *)(param_1 + 3) = uVar32;
        uVar15 = uVar15 - uVar7;
        *(uint *)(param_1 + 2) = uVar15;
      }
      if ((int)uVar15 < 1) {
        if (-1 < (int)uVar15) {
          uVar21 = 0;
LAB_140481859:
          puVar31 = (undefined1 *)*param_1;
          puVar1 = (undefined1 *)param_1[1];
          iVar8 = (int)uVar21;
          if ((uVar21 & 1) != 0) {
            if (puVar31 < puVar1) {
              *param_1 = (ulonglong)(puVar31 + 1);
              uVar24 = *puVar31;
              puVar31 = puVar31 + 1;
            }
            else {
              uVar24 = 0;
            }
            *(undefined1 *)((longlong)&local_844 + uVar21) = uVar24;
            uVar21 = uVar21 + 1;
          }
          if (iVar8 != 3) {
            do {
              while (puVar1 <= puVar31) {
                *(undefined1 *)((longlong)&local_844 + uVar21) = 0;
                puVar16 = puVar31;
                if (puVar1 <= puVar31) goto LAB_1404818ef;
LAB_1404818a0:
                *param_1 = (ulonglong)(puVar31 + 1);
                *(undefined1 *)((longlong)&local_844 + uVar21 + 1) = *puVar31;
                uVar21 = uVar21 + 2;
                puVar31 = puVar31 + 1;
                if (uVar21 == 4) goto LAB_140481903;
              }
              puVar16 = puVar31 + 1;
              *param_1 = (ulonglong)puVar16;
              *(undefined1 *)((longlong)&local_844 + uVar21) = *puVar31;
              puVar31 = puVar16;
              if (puVar16 < puVar1) goto LAB_1404818a0;
LAB_1404818ef:
              *(undefined1 *)((longlong)&local_844 + uVar21 + 1) = 0;
              uVar21 = uVar21 + 2;
              puVar31 = puVar16;
            } while (uVar21 != 4);
          }
          goto LAB_140481903;
        }
LAB_140481c6f:
        pcVar25 = "zlib corrupt";
      }
      else {
        uVar7 = (uVar15 - 1 >> 3) + 1;
        uVar21 = (ulonglong)uVar7;
        if (uVar15 < 0x19) {
          uVar34 = 0;
          if ((uVar7 & 3) == 0) goto LAB_140481834;
LAB_1404817d6:
          puVar26 = (uint *)(uVar34 - 1);
          lVar28 = -(ulonglong)(uVar7 & 3);
          do {
            *(byte *)((longlong)puVar26 + (longlong)&local_844 + 1) = (byte)uVar32;
            uVar32 = uVar32 >> 8;
            puVar26 = (uint *)((longlong)puVar26 + 1);
            lVar28 = lVar28 + 1;
          } while (lVar28 != 0);
        }
        else {
          uVar34 = 0;
          do {
            uVar27 = uVar34;
            *(uint *)((longlong)&local_844 + uVar27) = uVar32;
            uVar34 = uVar27 + 4;
            uVar32 = 0;
          } while ((uVar7 & 0xfffffffc) != uVar34);
          puVar26 = (uint *)(uVar27 + 3);
          uVar32 = 0;
          if ((uVar7 & 3) != 0) goto LAB_1404817d6;
LAB_140481834:
          uVar32 = 0;
        }
        iVar8 = uVar15 - (uVar15 - 1 & 0xfffffff8);
        *(uint *)(param_1 + 3) = uVar32;
        *(int *)(param_1 + 2) = iVar8 + -8;
        if (iVar8 != 8) goto LAB_140481c6f;
        if (puVar26 < (uint *)0x3) goto LAB_140481859;
LAB_140481903:
        if ((local_844._2_2_ ^ (ushort)local_844) != 0xffff) goto LAB_140481c6f;
        pvVar10 = (void *)*param_1;
        uVar21 = (ulonglong)(ushort)local_844;
        if (param_1[1] < (longlong)pvVar10 + uVar21) {
          pcVar25 = "read past buffer";
        }
        else {
          if (param_2 + uVar21 <= (undefined1 *)param_1[6]) {
LAB_1404819ae:
            memcpy(param_2,pvVar10,uVar21);
            *param_1 = *param_1 + uVar21;
            param_2 = (undefined1 *)(uVar21 + param_1[4]);
            param_1[4] = (ulonglong)param_2;
LAB_1404819c7:
            if ((uVar20 & 1) != 0) {
              uVar30 = 1;
              break;
            }
            iVar12 = (int)param_1[2];
            uVar20 = (ulonglong)(uint)param_1[3];
            iVar8 = iVar12;
            if (iVar12 < 1) goto LAB_140481a24;
LAB_140481a7b:
            uVar21 = uVar20 >> 1;
            uVar7 = (uint)uVar21;
            *(uint *)(param_1 + 3) = uVar7;
            iVar8 = iVar12 + -1;
            *(int *)(param_1 + 2) = iVar8;
            if (iVar12 < 3) {
              do {
                uVar7 = (uint)uVar21;
                bVar5 = (byte)iVar8 & 0x1f;
                if (uVar7 >> bVar5 != 0) {
                  *param_1 = param_1[1];
                  uVar32 = uVar7 >> 2;
                  *(uint *)(param_1 + 3) = uVar32;
                  uVar15 = iVar8 - 2;
                  *(uint *)(param_1 + 2) = uVar15;
                  uVar30 = 0;
                  switch(uVar7 & 3) {
                  case 0:
                    goto switchD_140481a79_caseD_0;
                  case 1:
                    goto switchD_140481a79_caseD_1;
                  case 2:
                    goto switchD_140481a79_caseD_2;
                  }
                  goto switchD_140481a79_caseD_3;
                }
                pbVar11 = (byte *)*param_1;
                uVar15 = 0 >> bVar5;
                if (pbVar11 < (byte *)param_1[1]) {
                  *param_1 = (ulonglong)(pbVar11 + 1);
                  uVar15 = (uint)*pbVar11;
                }
                uVar7 = uVar7 | uVar15 << ((byte)iVar8 & 0x1f);
                uVar21 = (ulonglong)uVar7;
                *(uint *)(param_1 + 3) = uVar7;
                iVar12 = iVar8 + 8;
                *(int *)(param_1 + 2) = iVar12;
                bVar2 = iVar8 < 0x11;
                iVar8 = iVar12;
              } while (bVar2);
            }
            uVar32 = uVar7 >> 2;
            *(uint *)(param_1 + 3) = uVar32;
            uVar15 = iVar8 - 2;
            *(uint *)(param_1 + 2) = uVar15;
            uVar30 = 0;
            switch(uVar7 & 3) {
            case 0:
              goto switchD_140481a79_caseD_0;
            case 1:
switchD_140481a79_caseD_1:
              iVar8 = FUN_140499990(lVar19,&DAT_140e1a8c0,0x120);
              uVar30 = 0;
              if ((iVar8 == 0) || (iVar8 = FUN_140499990(puVar33,&DAT_140e1a9e0,0x20), iVar8 == 0))
              goto switchD_140481a79_caseD_3;
              break;
            case 2:
switchD_140481a79_caseD_2:
              if (iVar8 < 7) {
                do {
                  bVar5 = (byte)uVar15 & 0x1f;
                  if (uVar32 >> bVar5 != 0) {
                    *param_1 = param_1[1];
                    break;
                  }
                  pbVar11 = (byte *)*param_1;
                  uVar7 = 0 >> bVar5;
                  if (pbVar11 < (byte *)param_1[1]) {
                    *param_1 = (ulonglong)(pbVar11 + 1);
                    uVar7 = (uint)*pbVar11;
                  }
                  uVar32 = uVar32 | uVar7 << ((byte)uVar15 & 0x1f);
                  *(uint *)(param_1 + 3) = uVar32;
                  uVar7 = uVar15 + 8;
                  *(uint *)(param_1 + 2) = uVar7;
                  bVar2 = (int)uVar15 < 0x11;
                  uVar15 = uVar7;
                } while (bVar2);
              }
              uVar7 = uVar32 >> 5;
              *(uint *)(param_1 + 3) = uVar7;
              iVar8 = uVar15 - 5;
              *(int *)(param_1 + 2) = iVar8;
              if ((int)uVar15 < 10) {
                do {
                  bVar5 = (byte)iVar8 & 0x1f;
                  if (uVar7 >> bVar5 != 0) {
                    *param_1 = param_1[1];
                    break;
                  }
                  pbVar11 = (byte *)*param_1;
                  uVar15 = 0 >> bVar5;
                  if (pbVar11 < (byte *)param_1[1]) {
                    *param_1 = (ulonglong)(pbVar11 + 1);
                    uVar15 = (uint)*pbVar11;
                  }
                  uVar7 = uVar7 | uVar15 << ((byte)iVar8 & 0x1f);
                  *(uint *)(param_1 + 3) = uVar7;
                  iVar12 = iVar8 + 8;
                  *(int *)(param_1 + 2) = iVar12;
                  bVar2 = iVar8 < 0x11;
                  iVar8 = iVar12;
                } while (bVar2);
              }
              uVar15 = uVar7 >> 5;
              *(uint *)(param_1 + 3) = uVar15;
              iVar12 = iVar8 + -5;
              *(int *)(param_1 + 2) = iVar12;
              if (iVar8 < 9) {
                do {
                  bVar5 = (byte)iVar12 & 0x1f;
                  if (uVar15 >> bVar5 != 0) {
                    *param_1 = param_1[1];
                    break;
                  }
                  pbVar11 = (byte *)*param_1;
                  uVar17 = 0 >> bVar5;
                  if (pbVar11 < (byte *)param_1[1]) {
                    *param_1 = (ulonglong)(pbVar11 + 1);
                    uVar17 = (uint)*pbVar11;
                  }
                  uVar15 = uVar15 | uVar17 << ((byte)iVar12 & 0x1f);
                  *(uint *)(param_1 + 3) = uVar15;
                  iVar8 = iVar12 + 8;
                  *(int *)(param_1 + 2) = iVar8;
                  bVar2 = iVar12 < 0x11;
                  iVar12 = iVar8;
                } while (bVar2);
              }
              uVar32 = (uVar32 & 0x1f) + 0x101;
              iVar8 = (uVar7 & 0x1f) + 1;
              uVar7 = uVar15 >> 4;
              *(uint *)(param_1 + 3) = uVar7;
              iVar12 = iVar12 + -4;
              *(int *)(param_1 + 2) = iVar12;
              local_a38[0] = 0;
              local_a38[1] = 0;
              local_a38[2] = 0;
              local_a38[3] = 0;
              local_a38[4] = 0;
              local_a38[5] = 0;
              local_a38[6] = 0;
              local_a38[7] = 0;
              local_a38[8] = 0;
              local_a38[9] = 0;
              local_a38[10] = 0;
              local_a38[0xb] = 0;
              local_a38[0xc] = 0;
              local_a38[0xd] = 0;
              local_a38[0xe] = 0;
              local_a38[0xf] = 0;
              local_a38[0x10] = 0;
              local_a38[0x11] = 0;
              local_a38[0x12] = 0;
              uVar21 = 0;
              do {
                uVar17 = uVar7;
                if (iVar12 < 3) {
                  do {
                    bVar5 = (byte)iVar12 & 0x1f;
                    if (uVar7 >> bVar5 != 0) {
                      *param_1 = param_1[1];
                      uVar17 = uVar7;
                      break;
                    }
                    pbVar11 = (byte *)*param_1;
                    uVar17 = 0 >> bVar5;
                    if (pbVar11 < (byte *)param_1[1]) {
                      *param_1 = (ulonglong)(pbVar11 + 1);
                      uVar17 = (uint)*pbVar11;
                    }
                    uVar7 = uVar7 | uVar17 << ((byte)iVar12 & 0x1f);
                    *(uint *)(param_1 + 3) = uVar7;
                    iVar14 = iVar12 + 8;
                    *(int *)(param_1 + 2) = iVar14;
                    bVar2 = iVar12 < 0x11;
                    uVar17 = uVar7;
                    iVar12 = iVar14;
                  } while (bVar2);
                }
                uVar7 = uVar17 >> 3;
                *(uint *)(param_1 + 3) = uVar7;
                iVar12 = iVar12 + -3;
                *(int *)(param_1 + 2) = iVar12;
                local_a38[(byte)(&DAT_140e1aa00)[uVar21]] = (byte)uVar17 & 7;
                uVar21 = uVar21 + 1;
              } while (uVar21 != (uVar15 & 0xf) + 4);
              iVar12 = FUN_140499990(&local_844,local_a38,0x13);
              if (iVar12 == 0) goto LAB_140481c2a;
              iVar12 = iVar8 + uVar32;
              iVar14 = (int)param_1[2];
              iVar18 = 0;
LAB_1404813cf:
              do {
                if (iVar14 < 0x10) {
                  pbVar11 = (byte *)param_1[1];
                  if ((byte *)*param_1 < pbVar11) {
                    uVar7 = (uint)param_1[3];
                    pbVar23 = (byte *)*param_1;
                    do {
                      bVar5 = (byte)iVar14 & 0x1f;
                      if (uVar7 >> bVar5 != 0) {
                        *param_1 = (ulonglong)pbVar11;
                        break;
                      }
                      uVar15 = 0 >> bVar5;
                      pbVar22 = pbVar23;
                      if (pbVar23 < pbVar11) {
                        pbVar22 = pbVar23 + 1;
                        *param_1 = (ulonglong)pbVar22;
                        uVar15 = (uint)*pbVar23;
                      }
                      uVar7 = uVar7 | uVar15 << ((byte)iVar14 & 0x1f);
                      *(uint *)(param_1 + 3) = uVar7;
                      iVar13 = iVar14 + 8;
                      *(int *)(param_1 + 2) = iVar13;
                      bVar2 = iVar14 < 0x11;
                      pbVar23 = pbVar22;
                      iVar14 = iVar13;
                    } while (bVar2);
                  }
                  else {
                    if (*(int *)((longlong)param_1 + 0x14) != 0) goto LAB_140481bb1;
                    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
                    iVar14 = iVar14 + 0x10;
                    *(int *)(param_1 + 2) = iVar14;
                  }
                }
                uVar7 = (uint)param_1[3];
                uVar6 = *(ushort *)((longlong)&local_844 + (ulonglong)(uVar7 & 0x1ff) * 2);
                if (uVar6 == 0) {
                  uVar6 = (ushort)uVar7 << 8 | (ushort)uVar7 >> 8;
                  uVar15 = (uVar6 & 0xf0f0) >> 4 | (uVar6 & 0xf0f) << 4;
                  uVar15 = (uVar15 >> 2 & 0x3333) + (uVar15 & 0x3333) * 4;
                  uVar15 = (uVar15 >> 1 & 0x5555) + (uVar15 & 0x5555) * 2;
                  lVar19 = 0;
                  do {
                    lVar28 = lVar19;
                    lVar19 = lVar28 + 1;
                  } while (aiStack_3fc[lVar28] <= (int)uVar15);
                  if (((0xf < lVar28 + 10U) ||
                      (lVar29 = (ulonglong)auStack_3ce[lVar19] +
                                ((ulonglong)(uVar15 >> (7U - (char)lVar19 & 0x1f)) -
                                (ulonglong)auStack_432[lVar19]), 0x11f < (int)lVar29)) ||
                     ((ulonglong)abStack_3c0[lVar29] - 9 != lVar19)) goto LAB_140481bb1;
                  uVar7 = uVar7 >> ((byte)(lVar28 + 10U) & 0x1f);
                  *(uint *)(param_1 + 3) = uVar7;
                  iVar14 = (iVar14 - (int)lVar19) + -9;
                  *(int *)(param_1 + 2) = iVar14;
                  uVar6 = auStack_2a0[lVar29];
                }
                else {
                  uVar7 = uVar7 >> ((byte)(uVar6 >> 9) & 0x1f);
                  *(uint *)(param_1 + 3) = uVar7;
                  iVar14 = iVar14 - (uint)(uVar6 >> 9);
                  *(int *)(param_1 + 2) = iVar14;
                  uVar6 = uVar6 & 0x1ff;
                }
                if (0x12 < uVar6) goto LAB_140481bb1;
                if (uVar6 < 0x10) {
                  iVar13 = iVar18 + 1;
                  abStack_a19[(longlong)iVar18 + 1] = (byte)uVar6;
                  iVar18 = iVar13;
                  if (iVar12 <= iVar13) break;
                  goto LAB_1404813cf;
                }
                if (uVar6 == 0x11) {
                  if (iVar14 < 3) {
                    do {
                      bVar5 = (byte)iVar14 & 0x1f;
                      if (uVar7 >> bVar5 != 0) {
                        *param_1 = param_1[1];
                        break;
                      }
                      pbVar11 = (byte *)*param_1;
                      uVar15 = 0 >> bVar5;
                      if (pbVar11 < (byte *)param_1[1]) {
                        *param_1 = (ulonglong)(pbVar11 + 1);
                        uVar15 = (uint)*pbVar11;
                      }
                      uVar7 = uVar7 | uVar15 << ((byte)iVar14 & 0x1f);
                      *(uint *)(param_1 + 3) = uVar7;
                      iVar13 = iVar14 + 8;
                      *(int *)(param_1 + 2) = iVar13;
                      bVar2 = iVar14 < 0x11;
                      iVar14 = iVar13;
                    } while (bVar2);
                  }
                  *(uint *)(param_1 + 3) = uVar7 >> 3;
                  iVar14 = iVar14 + -3;
                  *(int *)(param_1 + 2) = iVar14;
                  uVar7 = (uVar7 & 7) + 3;
LAB_140481729:
                  uVar15 = 0;
                }
                else {
                  if (uVar6 != 0x10) {
                    if (iVar14 < 7) {
                      do {
                        bVar5 = (byte)iVar14 & 0x1f;
                        if (uVar7 >> bVar5 != 0) {
                          *param_1 = param_1[1];
                          break;
                        }
                        pbVar11 = (byte *)*param_1;
                        uVar15 = 0 >> bVar5;
                        if (pbVar11 < (byte *)param_1[1]) {
                          *param_1 = (ulonglong)(pbVar11 + 1);
                          uVar15 = (uint)*pbVar11;
                        }
                        uVar7 = uVar7 | uVar15 << ((byte)iVar14 & 0x1f);
                        *(uint *)(param_1 + 3) = uVar7;
                        iVar13 = iVar14 + 8;
                        *(int *)(param_1 + 2) = iVar13;
                        bVar2 = iVar14 < 0x11;
                        iVar14 = iVar13;
                      } while (bVar2);
                    }
                    *(uint *)(param_1 + 3) = uVar7 >> 7;
                    iVar14 = iVar14 + -7;
                    *(int *)(param_1 + 2) = iVar14;
                    uVar7 = (uVar7 & 0x7f) + 0xb;
                    goto LAB_140481729;
                  }
                  if (iVar14 < 2) {
                    do {
                      bVar5 = (byte)iVar14 & 0x1f;
                      if (uVar7 >> bVar5 != 0) {
                        *param_1 = param_1[1];
                        break;
                      }
                      pbVar11 = (byte *)*param_1;
                      uVar15 = 0 >> bVar5;
                      if (pbVar11 < (byte *)param_1[1]) {
                        *param_1 = (ulonglong)(pbVar11 + 1);
                        uVar15 = (uint)*pbVar11;
                      }
                      uVar7 = uVar7 | uVar15 << ((byte)iVar14 & 0x1f);
                      *(uint *)(param_1 + 3) = uVar7;
                      iVar13 = iVar14 + 8;
                      *(int *)(param_1 + 2) = iVar13;
                      bVar2 = iVar14 < 0x11;
                      iVar14 = iVar13;
                    } while (bVar2);
                  }
                  *(uint *)(param_1 + 3) = uVar7 >> 2;
                  iVar14 = iVar14 + -2;
                  *(int *)(param_1 + 2) = iVar14;
                  if (iVar18 == 0) goto LAB_140481bb1;
                  uVar7 = (uVar7 & 3) + 3;
                  uVar15 = (uint)abStack_a19[iVar18];
                }
                if (iVar12 - iVar18 < (int)uVar7) goto LAB_140481bb1;
                memset(abStack_a19 + (longlong)iVar18 + 1,uVar15,(ulonglong)uVar7);
                iVar13 = iVar18 + uVar7;
                iVar18 = iVar13;
              } while (iVar13 < iVar12);
              if (iVar13 != iVar12) {
LAB_140481bb1:
                *(char **)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x220) = "bad codelengths";
                goto LAB_140481c2a;
              }
              iVar12 = FUN_140499990(local_a48,abStack_a19 + 1,uVar32);
              puVar33 = local_a40;
              if ((iVar12 == 0) ||
                 (iVar8 = FUN_140499990(local_a40,abStack_a19 + (ulonglong)uVar32 + 1,iVar8),
                 iVar8 == 0)) goto LAB_140481c2a;
              break;
            case 3:
              goto switchD_140481a79_caseD_3;
            }
            param_2 = (undefined1 *)param_1[4];
LAB_140480ad7:
            iVar8 = (int)param_1[2];
            if (iVar8 < 0x10) {
              pbVar11 = (byte *)param_1[1];
              if ((byte *)*param_1 < pbVar11) {
                uVar7 = (uint)param_1[3];
                pbVar23 = (byte *)*param_1;
                do {
                  bVar5 = (byte)iVar8 & 0x1f;
                  if (uVar7 >> bVar5 != 0) {
                    *param_1 = (ulonglong)pbVar11;
                    break;
                  }
                  uVar15 = 0 >> bVar5;
                  pbVar22 = pbVar23;
                  if (pbVar23 < pbVar11) {
                    pbVar22 = pbVar23 + 1;
                    *param_1 = (ulonglong)pbVar22;
                    uVar15 = (uint)*pbVar23;
                  }
                  uVar7 = uVar7 | uVar15 << ((byte)iVar8 & 0x1f);
                  *(uint *)(param_1 + 3) = uVar7;
                  iVar12 = iVar8 + 8;
                  *(int *)(param_1 + 2) = iVar12;
                  bVar2 = iVar8 < 0x11;
                  pbVar23 = pbVar22;
                  iVar8 = iVar12;
                } while (bVar2);
                goto LAB_140480b62;
              }
              if (*(int *)((longlong)param_1 + 0x14) == 0) {
                *(undefined4 *)((longlong)param_1 + 0x14) = 1;
                iVar8 = iVar8 + 0x10;
                *(int *)(param_1 + 2) = iVar8;
                goto LAB_140480b62;
              }
            }
            else {
LAB_140480b62:
              uVar7 = (uint)param_1[3];
              uVar6 = *(ushort *)((longlong)param_1 + (ulonglong)(uVar7 & 0x1ff) * 2 + 0x3c);
              if (uVar6 == 0) {
                uVar6 = (ushort)uVar7 << 8 | (ushort)uVar7 >> 8;
                uVar15 = (uVar6 & 0xf0f0) >> 4 | (uVar6 & 0xf0f) << 4;
                uVar15 = (uVar15 >> 2 & 0x3333) + (uVar15 & 0x3333) * 4;
                uVar15 = (uVar15 >> 1 & 0x5555) + (uVar15 & 0x5555) * 2;
                lVar19 = 0;
                do {
                  lVar28 = lVar19;
                  lVar19 = lVar28 + 1;
                } while (*(int *)((longlong)param_1 + lVar28 * 4 + 0x484) <= (int)uVar15);
                if (((0xf < lVar28 + 10U) ||
                    (lVar29 = (ulonglong)*(ushort *)((longlong)param_1 + lVar19 * 2 + 0x4b2) +
                              ((ulonglong)(uVar15 >> (7U - (char)lVar19 & 0x1f)) -
                              (ulonglong)*(ushort *)((longlong)param_1 + lVar19 * 2 + 0x44e)),
                    0x11f < (int)lVar29)) ||
                   ((ulonglong)*(byte *)((longlong)param_1 + lVar29 + 0x4c0) - 9 != lVar19))
                goto LAB_140481bdd;
                uVar7 = uVar7 >> ((byte)(lVar28 + 10U) & 0x1f);
                *(uint *)(param_1 + 3) = uVar7;
                iVar8 = (iVar8 - (int)lVar19) + -9;
                *(int *)(param_1 + 2) = iVar8;
                uVar15 = (uint)*(ushort *)((longlong)param_1 + lVar29 * 2 + 0x5e0);
              }
              else {
                uVar7 = uVar7 >> ((byte)(uVar6 >> 9) & 0x1f);
                *(uint *)(param_1 + 3) = uVar7;
                iVar8 = iVar8 - (uint)(uVar6 >> 9);
                *(int *)(param_1 + 2) = iVar8;
                uVar15 = uVar6 & 0x1ff;
              }
              if (uVar15 < 0x100) {
                if ((undefined1 *)param_1[6] <= param_2) {
                  param_1[4] = (ulonglong)param_2;
                  if ((int)param_1[7] == 0) goto LAB_140481c63;
                  pvVar10 = (void *)param_1[5];
                  uVar7 = (uint)((longlong)param_2 - (longlong)pvVar10);
                  if (uVar7 == 0xffffffff) goto LAB_140481bd4;
                  for (uVar32 = (int)(undefined1 *)param_1[6] - (int)pvVar10; uVar32 <= uVar7;
                      uVar32 = uVar32 * 2) {
                    if ((int)uVar32 < 0) goto LAB_140481bd4;
                  }
                  pvVar9 = realloc(pvVar10,(ulonglong)uVar32);
                  if (pvVar9 == (void *)0x0) goto LAB_140481bd4;
                  param_1[5] = (ulonglong)pvVar9;
                  param_2 = (undefined1 *)
                            (((longlong)param_2 - (longlong)pvVar10 & 0xffffffffU) +
                            (longlong)pvVar9);
                  param_1[4] = (ulonglong)param_2;
                  param_1[6] = (ulonglong)uVar32 + (longlong)pvVar9;
                }
                *param_2 = (char)uVar15;
                param_2 = param_2 + 1;
                goto LAB_140480ad7;
              }
              if (uVar15 == 0x100) goto LAB_1404819e1;
              if (0x11d < uVar15) goto LAB_140481bdd;
              uVar21 = (ulonglong)(uVar15 - 0x101);
              uVar15 = *(uint *)(&DAT_140e1aa20 + uVar21 * 4);
              if (0xffffffffffffffeb < uVar21 - 0x1c) {
                iVar12 = *(int *)(&DAT_140e1aaa0 + uVar21 * 4);
                if (iVar8 < iVar12) {
                  do {
                    bVar5 = (byte)iVar8 & 0x1f;
                    if (uVar7 >> bVar5 != 0) {
                      *param_1 = param_1[1];
                      break;
                    }
                    pbVar11 = (byte *)*param_1;
                    uVar32 = 0 >> bVar5;
                    if (pbVar11 < (byte *)param_1[1]) {
                      *param_1 = (ulonglong)(pbVar11 + 1);
                      uVar32 = (uint)*pbVar11;
                    }
                    uVar7 = uVar7 | uVar32 << ((byte)iVar8 & 0x1f);
                    *(uint *)(param_1 + 3) = uVar7;
                    iVar14 = iVar8 + 8;
                    *(int *)(param_1 + 2) = iVar14;
                    bVar2 = iVar8 < 0x11;
                    iVar8 = iVar14;
                  } while (bVar2);
                }
                uVar32 = ~(-1 << ((byte)iVar12 & 0x1f)) & uVar7;
                uVar7 = uVar7 >> ((byte)iVar12 & 0x1f);
                *(uint *)(param_1 + 3) = uVar7;
                iVar8 = iVar8 - iVar12;
                *(int *)(param_1 + 2) = iVar8;
                uVar15 = uVar15 + uVar32;
              }
              uVar21 = (ulonglong)uVar15;
              if (iVar8 < 0x10) {
                pbVar11 = (byte *)param_1[1];
                pbVar23 = (byte *)*param_1;
                if ((byte *)*param_1 < pbVar11) {
                  do {
                    bVar5 = (byte)iVar8 & 0x1f;
                    if (uVar7 >> bVar5 != 0) {
                      *param_1 = (ulonglong)pbVar11;
                      break;
                    }
                    uVar32 = 0 >> bVar5;
                    pbVar22 = pbVar23;
                    if (pbVar23 < pbVar11) {
                      pbVar22 = pbVar23 + 1;
                      *param_1 = (ulonglong)pbVar22;
                      uVar32 = (uint)*pbVar23;
                    }
                    uVar7 = uVar7 | uVar32 << ((byte)iVar8 & 0x1f);
                    *(uint *)(param_1 + 3) = uVar7;
                    iVar12 = iVar8 + 8;
                    *(int *)(param_1 + 2) = iVar12;
                    bVar2 = iVar8 < 0x11;
                    pbVar23 = pbVar22;
                    iVar8 = iVar12;
                  } while (bVar2);
                }
                else {
                  if (*(int *)((longlong)param_1 + 0x14) != 0) goto LAB_140481bdd;
                  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
                  iVar8 = iVar8 + 0x10;
                  *(int *)(param_1 + 2) = iVar8;
                }
              }
              uVar6 = *(ushort *)((longlong)puVar33 + (ulonglong)(uVar7 & 0x1ff) * 2);
              if (uVar6 == 0) {
                uVar6 = (ushort)uVar7 << 8 | (ushort)uVar7 >> 8;
                uVar32 = uVar6 >> 4 & 0xf0f | (uVar6 & 0xf0f) << 4;
                uVar32 = (uVar32 >> 2 & 0x3333) + (uVar32 & 0x3333) * 4;
                uVar32 = (uVar32 >> 1 & 0x5555) + (uVar32 & 0x5555) * 2;
                lVar19 = 0;
                do {
                  lVar28 = lVar19;
                  lVar19 = lVar28 + 1;
                } while (*(int *)((longlong)param_1 + lVar28 * 4 + 0xc68) <= (int)uVar32);
                if (((0xf < lVar28 + 10U) ||
                    (lVar29 = (ulonglong)*(ushort *)((longlong)param_1 + lVar19 * 2 + 0xc96) +
                              ((ulonglong)(uVar32 >> (7U - (char)lVar19 & 0x1f)) -
                              (ulonglong)*(ushort *)((longlong)param_1 + lVar19 * 2 + 0xc32)),
                    0x11f < (int)lVar29)) ||
                   ((ulonglong)*(byte *)((longlong)param_1 + lVar29 + 0xca4) - 9 != lVar19))
                goto LAB_140481bdd;
                uVar7 = uVar7 >> ((byte)(lVar28 + 10U) & 0x1f);
                *(uint *)(param_1 + 3) = uVar7;
                iVar8 = (iVar8 - (int)lVar19) + -9;
                *(int *)(param_1 + 2) = iVar8;
                uVar32 = (uint)*(ushort *)((longlong)param_1 + lVar29 * 2 + 0xdc4);
              }
              else {
                uVar7 = uVar7 >> ((byte)(uVar6 >> 9) & 0x1f);
                *(uint *)(param_1 + 3) = uVar7;
                iVar8 = iVar8 - (uint)(uVar6 >> 9);
                *(int *)(param_1 + 2) = iVar8;
                uVar32 = uVar6 & 0x1ff;
              }
              if (uVar32 < 0x1e) {
                uVar17 = *(uint *)(&DAT_140e1ab20 + (ulonglong)uVar32 * 4);
                if (3 < uVar32) {
                  iVar12 = *(int *)(&DAT_140e1aba0 + (ulonglong)uVar32 * 4);
                  if (iVar8 < iVar12) {
                    do {
                      bVar5 = (byte)iVar8 & 0x1f;
                      if (uVar7 >> bVar5 != 0) {
                        *param_1 = param_1[1];
                        break;
                      }
                      pbVar11 = (byte *)*param_1;
                      uVar32 = 0 >> bVar5;
                      if (pbVar11 < (byte *)param_1[1]) {
                        *param_1 = (ulonglong)(pbVar11 + 1);
                        uVar32 = (uint)*pbVar11;
                      }
                      uVar7 = uVar7 | uVar32 << ((byte)iVar8 & 0x1f);
                      *(uint *)(param_1 + 3) = uVar7;
                      iVar14 = iVar8 + 8;
                      *(int *)(param_1 + 2) = iVar14;
                      bVar2 = iVar8 < 0x11;
                      iVar8 = iVar14;
                    } while (bVar2);
                  }
                  *(uint *)(param_1 + 3) = uVar7 >> ((byte)iVar12 & 0x1f);
                  *(int *)(param_1 + 2) = iVar8 - iVar12;
                  uVar17 = uVar17 + (~(-1 << ((byte)iVar12 & 0x1f)) & uVar7);
                }
                pvVar10 = (void *)param_1[5];
                uVar34 = (longlong)param_2 - (longlong)pvVar10;
                lVar19 = (longlong)(int)uVar17;
                if ((longlong)uVar34 < lVar19) {
                  pcVar25 = "bad dist";
                  goto LAB_140481be4;
                }
                puVar31 = param_2;
                if ((longlong)(param_1[6] - (longlong)param_2) < (longlong)(int)uVar15) {
                  param_1[4] = (ulonglong)param_2;
                  if ((int)param_1[7] == 0) goto LAB_140481c63;
                  if (CARRY4((uint)uVar34,uVar15)) goto LAB_140481bd4;
                  for (uVar7 = (int)param_1[6] - (int)pvVar10; uVar7 < (uint)uVar34 + uVar15;
                      uVar7 = uVar7 * 2) {
                    if ((int)uVar7 < 0) goto LAB_140481bd4;
                  }
                  pvVar10 = realloc(pvVar10,(ulonglong)uVar7);
                  if (pvVar10 == (void *)0x0) goto LAB_140481bd4;
                  param_1[5] = (ulonglong)pvVar10;
                  puVar31 = (undefined1 *)((uVar34 & 0xffffffff) + (longlong)pvVar10);
                  param_1[4] = (ulonglong)puVar31;
                  param_1[6] = (ulonglong)uVar7 + (longlong)pvVar10;
                }
                puVar33 = local_a40;
                pbVar11 = puVar31 + -lVar19;
                param_2 = puVar31;
                if (uVar17 == 1) {
                  if (uVar15 != 0) {
                    memset(puVar31,(uint)*pbVar11,uVar21);
                    param_2 = puVar31 + (ulonglong)(uVar15 - 1) + 1;
                  }
                }
                else if (uVar15 != 0) {
                  if ((0x1f < uVar15) && (0x1f < uVar17)) {
                    uVar7 = uVar15 & 0xffffffe0;
                    uVar34 = (ulonglong)uVar7;
                    param_2 = puVar31 + uVar34;
                    pbVar11 = pbVar11 + uVar34;
                    uVar21 = (ulonglong)(uVar15 - uVar7);
                    uVar27 = 0;
                    do {
                      uVar30 = *(undefined8 *)((longlong)(puVar31 + uVar27 + -lVar19) + 8);
                      uVar3 = *(undefined8 *)(puVar31 + uVar27 + -lVar19 + 0x10);
                      uVar4 = *(undefined8 *)((longlong)(puVar31 + uVar27 + -lVar19 + 0x10) + 8);
                      *(undefined8 *)(puVar31 + uVar27) =
                           *(undefined8 *)(puVar31 + uVar27 + -lVar19);
                      *(undefined8 *)((longlong)(puVar31 + uVar27) + 8) = uVar30;
                      *(undefined8 *)(puVar31 + uVar27 + 0x10) = uVar3;
                      *(undefined8 *)((longlong)(puVar31 + uVar27 + 0x10) + 8) = uVar4;
                      uVar27 = uVar27 + 0x20;
                    } while (uVar34 != uVar27);
                    if (uVar7 == uVar15) goto LAB_140480ad7;
                  }
                  uVar15 = (uint)uVar21;
                  uVar7 = uVar15;
                  if ((uVar21 & 7) != 0) {
                    lVar19 = 0;
                    do {
                      param_2[lVar19] = pbVar11[lVar19];
                      lVar19 = lVar19 + 1;
                    } while ((uVar15 & 7) != (uint)lVar19);
                    param_2 = param_2 + lVar19;
                    pbVar11 = pbVar11 + lVar19;
                    uVar7 = uVar15 - (uint)lVar19;
                  }
                  if (6 < uVar15 - 1) {
                    lVar19 = 0;
                    do {
                      param_2[lVar19] = pbVar11[lVar19];
                      param_2[lVar19 + 1] = pbVar11[lVar19 + 1];
                      param_2[lVar19 + 2] = pbVar11[lVar19 + 2];
                      param_2[lVar19 + 3] = pbVar11[lVar19 + 3];
                      param_2[lVar19 + 4] = pbVar11[lVar19 + 4];
                      param_2[lVar19 + 5] = pbVar11[lVar19 + 5];
                      param_2[lVar19 + 6] = pbVar11[lVar19 + 6];
                      param_2[lVar19 + 7] = pbVar11[lVar19 + 7];
                      lVar19 = lVar19 + 8;
                    } while (uVar7 != (uint)lVar19);
                    param_2 = param_2 + lVar19;
                  }
                }
                goto LAB_140480ad7;
              }
            }
LAB_140481bdd:
            pcVar25 = "bad huffman code";
            goto LAB_140481be4;
          }
          if ((int)param_1[7] == 0) {
LAB_140481c63:
            pcVar25 = "output buffer limit";
          }
          else {
            pvVar10 = (void *)param_1[5];
            uVar7 = (uint)((longlong)param_2 - (longlong)pvVar10);
            if (!CARRY4((uint)(ushort)local_844,uVar7)) {
              for (uVar15 = (int)(undefined1 *)param_1[6] - (int)pvVar10;
                  uVar15 < (ushort)local_844 + uVar7; uVar15 = uVar15 * 2) {
                if ((int)uVar15 < 0) goto LAB_140481bd4;
              }
              pvVar9 = realloc(pvVar10,(ulonglong)uVar15);
              if (pvVar9 != (void *)0x0) {
                param_1[5] = (ulonglong)pvVar9;
                param_2 = (undefined1 *)
                          (((longlong)param_2 - (longlong)pvVar10 & 0xffffffffU) + (longlong)pvVar9)
                ;
                param_1[4] = (ulonglong)param_2;
                param_1[6] = (ulonglong)uVar15 + (longlong)pvVar9;
                pvVar10 = (void *)*param_1;
                goto LAB_1404819ae;
              }
            }
LAB_140481bd4:
            pcVar25 = "outofmem";
          }
        }
      }
LAB_140481be4:
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x220) = pcVar25;
      goto LAB_140481c2a;
    case 1:
      goto switchD_140481a79_caseD_1;
    case 2:
      goto switchD_140481a79_caseD_2;
    }
  }
  else {
    pbVar11 = (byte *)*param_1;
    pbVar23 = (byte *)param_1[1];
    uVar6 = 0;
    if (pbVar11 < pbVar23) {
      pbVar22 = pbVar11 + 1;
      *param_1 = (ulonglong)pbVar22;
      bVar5 = *pbVar11;
    }
    else {
      bVar5 = 0;
      pbVar22 = pbVar11;
    }
    if (pbVar22 < pbVar23) {
      *param_1 = (ulonglong)(pbVar22 + 1);
      uVar6 = (ushort)*pbVar22;
      pbVar22 = pbVar22 + 1;
    }
    pcVar25 = "bad zlib header";
    if ((pbVar22 < pbVar23) && ((ushort)(((ushort)bVar5 << 8 | uVar6) * 0x7bdf) < 0x843)) {
      if ((uVar6 & 0x20) == 0) {
        if ((bVar5 & 0xf) == 8) goto LAB_140480a6c;
        pcVar25 = "bad compression";
      }
      else {
        pcVar25 = "no preset dict";
      }
    }
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x220) = pcVar25;
LAB_140481c2a:
    uVar30 = 0;
  }
switchD_140481a79_caseD_3:
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)local_a68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)local_a68);
  }
  return uVar30;
LAB_1404819e1:
  param_1[4] = (ulonglong)param_2;
  lVar19 = local_a48;
  if ((*(int *)((longlong)param_1 + 0x14) != 0) && (iVar8 < 0x10)) {
    pcVar25 = "unexpected end";
    goto LAB_140481be4;
  }
  goto LAB_1404819c7;
}

