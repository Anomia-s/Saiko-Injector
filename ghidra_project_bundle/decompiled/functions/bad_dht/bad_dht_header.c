/**
 * Function: bad_dht_header
 * Address:  140496500
 * Signature: undefined bad_dht_header(void)
 * Body size: 3900 bytes
 */


bool bad_dht_header(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  sbyte sVar6;
  char cVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  char *pcVar17;
  char *pcVar18;
  int iVar19;
  byte bVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  char cVar25;
  ulonglong uVar26;
  char cVar27;
  byte bVar28;
  char cVar29;
  bool bVar30;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  uint local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  if ((int)param_2 < 0xdd) {
    if (param_2 == 0xc4) {
      uVar9 = FUN_14048fe40(*param_1);
      uVar23 = uVar9 - 2;
      if (2 < uVar9) {
        local_a0 = param_1 + 0x349;
        local_90 = param_1 + 1;
        local_98 = param_1 + 0x6d1;
        do {
          lVar24 = *param_1;
          pbVar13 = *(byte **)(lVar24 + 0xc0);
          if (pbVar13 < *(byte **)(lVar24 + 200)) {
            *(byte **)(lVar24 + 0xc0) = pbVar13 + 1;
            uVar9 = (uint)*pbVar13;
          }
          else if (*(int *)(lVar24 + 0x30) == 0) {
            uVar9 = 0;
          }
          else {
            pbVar13 = (byte *)(lVar24 + 0x38);
            iVar11 = (**(code **)(lVar24 + 0x10))(*(undefined8 *)(lVar24 + 0x28),pbVar13);
            *(int *)(lVar24 + 0xb8) =
                 *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
            if (iVar11 == 0) {
              *(undefined4 *)(lVar24 + 0x30) = 0;
              pbVar15 = (byte *)(lVar24 + 0x39);
              *(undefined1 *)(lVar24 + 0x38) = 0;
              uVar9 = 0;
            }
            else {
              pbVar15 = pbVar13 + iVar11;
              uVar9 = (uint)*pbVar13;
            }
            *(byte **)(lVar24 + 200) = pbVar15;
            *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
          }
          bVar20 = (byte)uVar9;
          if ((0x1f < bVar20) || (bVar28 = bVar20 & 0xf, 3 < bVar28)) {
LAB_140496c0d:
            lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            pcVar17 = "bad DHT header";
            goto LAB_140496ca5;
          }
          lVar24 = 0;
          uVar22 = 0;
          do {
            lVar14 = *param_1;
            pbVar13 = *(byte **)(lVar14 + 0xc0);
            if (pbVar13 < *(byte **)(lVar14 + 200)) {
              *(byte **)(lVar14 + 0xc0) = pbVar13 + 1;
              bVar4 = *pbVar13;
            }
            else if (*(int *)(lVar14 + 0x30) == 0) {
              bVar4 = 0;
            }
            else {
              pbVar13 = (byte *)(lVar14 + 0x38);
              iVar11 = (**(code **)(lVar14 + 0x10))(*(undefined8 *)(lVar14 + 0x28),pbVar13);
              *(int *)(lVar14 + 0xb8) =
                   *(int *)(lVar14 + 0xb8) + (*(int *)(lVar14 + 0xc0) - *(int *)(lVar14 + 0xd0));
              if (iVar11 == 0) {
                *(undefined4 *)(lVar14 + 0x30) = 0;
                pbVar15 = (byte *)(lVar14 + 0x39);
                *(undefined1 *)(lVar14 + 0x38) = 0;
                bVar4 = 0;
              }
              else {
                pbVar15 = pbVar13 + iVar11;
                bVar4 = *pbVar13;
              }
              *(byte **)(lVar14 + 200) = pbVar15;
              *(longlong *)(lVar14 + 0xc0) = lVar14 + 0x39;
            }
            local_88[lVar24] = (uint)bVar4;
            uVar22 = uVar22 + bVar4;
            lVar24 = lVar24 + 1;
          } while (lVar24 != 0x10);
          if (0x100 < uVar22) goto LAB_140496c0d;
          uVar12 = (ulonglong)bVar28;
          local_a8 = uVar23;
          if (bVar20 < 0x10) {
            iVar11 = bad_code_lengths(local_90 + uVar12 * 0xd2,local_88);
            lVar24 = 8;
          }
          else {
            iVar11 = bad_code_lengths(local_a0 + uVar12 * 0xd2,local_88);
            lVar24 = 0x1a48;
          }
          if (iVar11 == 0) goto LAB_140496cac;
          local_a4 = uVar9;
          if (uVar22 != 0) {
            uVar26 = 0;
            do {
              lVar14 = *param_1;
              puVar3 = *(undefined1 **)(lVar14 + 0xc0);
              if (puVar3 < *(undefined1 **)(lVar14 + 200)) {
                *(undefined1 **)(lVar14 + 0xc0) = puVar3 + 1;
                uVar5 = *puVar3;
              }
              else if (*(int *)(lVar14 + 0x30) == 0) {
                uVar5 = 0;
              }
              else {
                puVar3 = (undefined1 *)(lVar14 + 0x38);
                iVar11 = (**(code **)(lVar14 + 0x10))(*(undefined8 *)(lVar14 + 0x28),puVar3);
                *(int *)(lVar14 + 0xb8) =
                     *(int *)(lVar14 + 0xb8) + (*(int *)(lVar14 + 0xc0) - *(int *)(lVar14 + 0xd0));
                if (iVar11 == 0) {
                  *(undefined4 *)(lVar14 + 0x30) = 0;
                  puVar16 = (undefined1 *)(lVar14 + 0x39);
                  *(undefined1 *)(lVar14 + 0x38) = 0;
                  uVar5 = 0;
                }
                else {
                  puVar16 = puVar3 + iVar11;
                  uVar5 = *puVar3;
                }
                *(undefined1 **)(lVar14 + 200) = puVar16;
                *(longlong *)(lVar14 + 0xc0) = lVar14 + 0x39;
              }
              *(undefined1 *)((longlong)param_1 + uVar26 + uVar12 * 0x690 + lVar24 + 0x400) = uVar5;
              uVar26 = uVar26 + 1;
            } while (uVar22 != uVar26);
          }
          if (0xf < (byte)local_a4) {
            lVar24 = 0;
            do {
              uVar26 = (ulonglong)*(byte *)((longlong)local_a0 + lVar24 + uVar12 * 0x690);
              *(undefined2 *)((longlong)local_98 + lVar24 * 2 + (ulonglong)bVar28 * 0x400) = 0;
              if (uVar26 != 0xff) {
                bVar20 = *(byte *)((longlong)local_a0 + uVar26 + uVar12 * 0x690 + 0x400);
                if ((bVar20 & 0xf) != 0) {
                  bVar4 = *(byte *)((longlong)local_a0 + uVar26 + uVar12 * 0x690 + 0x500);
                  uVar2 = (bVar20 & 0xf) + (ushort)bVar4;
                  if (uVar2 < 10) {
                    uVar9 = (int)lVar24 << (bVar4 & 0x1f) & 0x1ff;
                    sVar6 = (sbyte)(bVar20 & 0xf);
                    uVar23 = -1 << sVar6 | 1;
                    if (0xff < uVar9) {
                      uVar23 = 0;
                    }
                    iVar11 = uVar23 + (uVar9 >> (9U - sVar6 & 0x1f));
                    if ((char)iVar11 == iVar11) {
                      *(ushort *)((longlong)local_98 + lVar24 * 2 + (ulonglong)bVar28 * 0x400) =
                           (short)iVar11 * 0x100 | bVar20 & 0xfff0 | uVar2;
                    }
                  }
                }
              }
              lVar24 = lVar24 + 1;
            } while (lVar24 != 0x200);
          }
          uVar23 = (local_a8 - 0x11) - uVar22;
        } while (0 < (int)uVar23);
      }
      bVar30 = uVar23 == 0;
      goto LAB_140496cae;
    }
    if (param_2 == 0xdb) {
      uVar9 = FUN_14048fe40(*param_1);
      iVar19 = uVar9 - 2;
      iVar11 = iVar19;
      if (2 < uVar9) {
        do {
          while( true ) {
            lVar24 = *param_1;
            pbVar13 = *(byte **)(lVar24 + 0xc0);
            if (pbVar13 < *(byte **)(lVar24 + 200)) break;
            if (*(int *)(lVar24 + 0x30) != 0) {
              pbVar13 = (byte *)(lVar24 + 0x38);
              iVar19 = (**(code **)(lVar24 + 0x10))
                                 (*(undefined8 *)(lVar24 + 0x28),pbVar13,
                                  *(undefined4 *)(lVar24 + 0x34));
              *(int *)(lVar24 + 0xb8) =
                   *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
              if (iVar19 == 0) {
                *(undefined4 *)(lVar24 + 0x30) = 0;
                pbVar15 = (byte *)(lVar24 + 0x39);
                *(undefined1 *)(lVar24 + 0x38) = 0;
              }
              else {
                pbVar15 = pbVar13 + iVar19;
              }
              *(byte **)(lVar24 + 200) = pbVar15;
              pbVar15 = (byte *)(lVar24 + 0x39);
              goto LAB_14049660b;
            }
            uVar9 = 0;
LAB_140496680:
            lVar24 = 0;
            do {
              lVar14 = *param_1;
              pbVar13 = *(byte **)(lVar14 + 0xc0);
              if (pbVar13 < *(byte **)(lVar14 + 200)) {
                *(byte **)(lVar14 + 0xc0) = pbVar13 + 1;
                bVar20 = *pbVar13;
              }
              else if (*(int *)(lVar14 + 0x30) == 0) {
                bVar20 = 0;
              }
              else {
                pbVar13 = (byte *)(lVar14 + 0x38);
                iVar19 = (**(code **)(lVar14 + 0x10))
                                   (*(undefined8 *)(lVar14 + 0x28),pbVar13,
                                    *(undefined4 *)(lVar14 + 0x34));
                *(int *)(lVar14 + 0xb8) =
                     *(int *)(lVar14 + 0xb8) + (*(int *)(lVar14 + 0xc0) - *(int *)(lVar14 + 0xd0));
                if (iVar19 == 0) {
                  *(undefined4 *)(lVar14 + 0x30) = 0;
                  pbVar15 = (byte *)(lVar14 + 0x39);
                  *(undefined1 *)(lVar14 + 0x38) = 0;
                  bVar20 = 0;
                }
                else {
                  pbVar15 = pbVar13 + iVar19;
                  bVar20 = *pbVar13;
                }
                *(byte **)(lVar14 + 200) = pbVar15;
                *(longlong *)(lVar14 + 0xc0) = lVar14 + 0x39;
              }
              *(ushort *)
               ((longlong)param_1 +
               (ulonglong)(byte)(&DAT_140e1a7d0)[lVar24] * 2 + (ulonglong)(uVar9 << 7) + 0x3488) =
                   (ushort)bVar20;
              lVar24 = lVar24 + 1;
            } while (lVar24 != 0x40);
            iVar19 = iVar11 + -0x41;
            bVar30 = iVar11 < 0x41;
            iVar11 = iVar19;
            if (iVar19 == 0 || bVar30) goto LAB_140496bba;
          }
          pbVar15 = pbVar13 + 1;
LAB_14049660b:
          *(byte **)(lVar24 + 0xc0) = pbVar15;
          bVar20 = *pbVar13;
          if ((bVar20 & 0xfffffff0) != 0x10 && 0xf < bVar20) {
            lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            pcVar17 = "bad DQT type";
            goto LAB_140496ca5;
          }
          uVar9 = bVar20 & 0xf;
          if (3 < uVar9) {
            lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            pcVar17 = "bad DQT table";
            goto LAB_140496ca5;
          }
          if (bVar20 < 0x10) goto LAB_140496680;
          lVar24 = 0;
          do {
            uVar8 = FUN_14048fe40(*param_1);
            *(undefined2 *)
             ((longlong)param_1 +
             (ulonglong)(byte)(&DAT_140e1a7d0)[lVar24] * 2 + (ulonglong)(uVar9 << 7) + 0x3488) =
                 uVar8;
            lVar24 = lVar24 + 1;
          } while (lVar24 != 0x40);
          iVar19 = iVar11 + -0x81;
          bVar30 = 0x80 < iVar11;
          iVar11 = iVar19;
        } while (iVar19 != 0 && bVar30);
      }
LAB_140496bba:
      bVar30 = iVar19 == 0;
      goto LAB_140496cae;
    }
LAB_140496764:
    if (param_2 != 0xfe && (param_2 & 0xf0) != 0xe0) {
      lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      pcVar17 = "unknown marker";
      goto LAB_140496ca5;
    }
    uVar9 = FUN_14048fe40(*param_1);
    if (1 < uVar9) {
      if (uVar9 < 7 || param_2 != 0xe0) {
        if (uVar9 < 0xe || param_2 != 0xee) {
          uVar23 = uVar9 - 2;
          goto LAB_140497426;
        }
        lVar24 = *param_1;
        pbVar13 = *(byte **)(lVar24 + 0xc0);
        if (pbVar13 < *(byte **)(lVar24 + 200)) {
          *(byte **)(lVar24 + 0xc0) = pbVar13 + 1;
          local_a8 = (uint)*pbVar13;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          local_a8 = 0;
        }
        else {
          pbVar13 = (byte *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pbVar13,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pbVar15 = (byte *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            local_a8 = 0;
          }
          else {
            pbVar15 = pbVar13 + iVar11;
            local_a8 = (uint)*pbVar13;
          }
          *(byte **)(lVar24 + 200) = pbVar15;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar21 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar21 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar21 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar21 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar27 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar27 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar27 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar27 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar29 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar29 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar29 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar29 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar25 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar25 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar25 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar25 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar7 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar7 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar7 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar7 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        uVar23 = uVar9 - 8;
        lVar24 = *param_1;
        if (((((cVar7 == '\0') && (cVar25 == 'e')) && (cVar29 == 'b')) &&
            ((cVar27 == 'o' && (cVar21 == 'd')))) && ((char)local_a8 == 'A')) {
          uVar12 = *(ulonglong *)(lVar24 + 0xc0);
          if (uVar12 < *(ulonglong *)(lVar24 + 200)) {
LAB_1404973c9:
            *(ulonglong *)(lVar24 + 0xc0) = uVar12 + 1;
          }
          else if (*(int *)(lVar24 + 0x30) != 0) {
            FUN_14048bcd0(lVar24);
            uVar12 = *(ulonglong *)(lVar24 + 0xc0);
            goto LAB_1404973c9;
          }
          FUN_14048fe40(*param_1);
          FUN_14048fe40(*param_1);
          lVar24 = *param_1;
          pbVar13 = *(byte **)(lVar24 + 0xc0);
          if (pbVar13 < *(byte **)(lVar24 + 200)) {
LAB_14049740f:
            *(byte **)(lVar24 + 0xc0) = pbVar13 + 1;
            uVar23 = (uint)*pbVar13;
          }
          else {
            if (*(int *)(lVar24 + 0x30) != 0) {
              FUN_14048bcd0(lVar24);
              pbVar13 = *(byte **)(lVar24 + 0xc0);
              goto LAB_14049740f;
            }
            uVar23 = 0;
          }
          *(uint *)((longlong)param_1 + 0x484c) = uVar23;
          uVar23 = uVar9 - 0xe;
          goto LAB_140497426;
        }
        if (*(longlong *)(lVar24 + 0x10) == 0) goto LAB_14049746d;
LAB_140497434:
        lVar14 = *(longlong *)(lVar24 + 0xc0);
        if ((int)*(undefined8 *)(lVar24 + 200) - (int)lVar14 < (int)uVar23) {
          *(undefined8 *)(lVar24 + 0xc0) = *(undefined8 *)(lVar24 + 200);
          (**(code **)(lVar24 + 0x18))(*(undefined8 *)(lVar24 + 0x28));
LAB_14049745d:
          bVar30 = true;
          goto LAB_140496cae;
        }
      }
      else {
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar21 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar21 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar21 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar21 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar27 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar27 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar27 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar27 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar29 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar29 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar29 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar29 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar25 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar25 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar25 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar25 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        lVar24 = *param_1;
        pcVar17 = *(char **)(lVar24 + 0xc0);
        if (pcVar17 < *(char **)(lVar24 + 200)) {
          *(char **)(lVar24 + 0xc0) = pcVar17 + 1;
          cVar7 = *pcVar17;
        }
        else if (*(int *)(lVar24 + 0x30) == 0) {
          cVar7 = '\0';
        }
        else {
          pcVar17 = (char *)(lVar24 + 0x38);
          iVar11 = (**(code **)(lVar24 + 0x10))
                             (*(undefined8 *)(lVar24 + 0x28),pcVar17,*(undefined4 *)(lVar24 + 0x34))
          ;
          *(int *)(lVar24 + 0xb8) =
               *(int *)(lVar24 + 0xb8) + (*(int *)(lVar24 + 0xc0) - *(int *)(lVar24 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(lVar24 + 0x30) = 0;
            pcVar18 = (char *)(lVar24 + 0x39);
            *(undefined1 *)(lVar24 + 0x38) = 0;
            cVar7 = '\0';
          }
          else {
            pcVar18 = pcVar17 + iVar11;
            cVar7 = *pcVar17;
          }
          *(char **)(lVar24 + 200) = pcVar18;
          *(longlong *)(lVar24 + 0xc0) = lVar24 + 0x39;
        }
        uVar23 = uVar9 - 7;
        if (((cVar7 == '\0') && (cVar25 == 'F')) &&
           ((cVar29 == 'I' && ((cVar27 == 'F' && (cVar21 == 'J')))))) {
          *(undefined4 *)(param_1 + 0x909) = 1;
        }
LAB_140497426:
        if (uVar23 == 0) goto LAB_14049745d;
        lVar24 = *param_1;
        if (*(longlong *)(lVar24 + 0x10) != 0) goto LAB_140497434;
LAB_14049746d:
        lVar14 = *(longlong *)(lVar24 + 0xc0);
      }
      *(ulonglong *)(lVar24 + 0xc0) = (ulonglong)uVar23 + lVar14;
      bVar30 = true;
      goto LAB_140496cae;
    }
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x220
             );
    if (param_2 == 0xfe) {
      *puVar1 = "bad COM len";
    }
    else {
      *puVar1 = "bad APP len";
    }
  }
  else {
    if (param_2 == 0xdd) {
      iVar11 = FUN_14048fe40(*param_1);
      if (iVar11 == 4) {
        uVar10 = FUN_14048fe40(*param_1);
        *(undefined4 *)(param_1 + 0x90d) = uVar10;
        bVar30 = true;
        goto LAB_140496cae;
      }
      lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      pcVar17 = "bad DRI len";
    }
    else {
      if (param_2 != 0xff) goto LAB_140496764;
      lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      pcVar17 = "expected marker";
    }
LAB_140496ca5:
    *(char **)(lVar24 + 0x220) = pcVar17;
  }
LAB_140496cac:
  bVar30 = false;
LAB_140496cae:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
    return bVar30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}

