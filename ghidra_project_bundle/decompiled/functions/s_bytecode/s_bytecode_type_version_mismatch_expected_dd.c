/**
 * Function: s_bytecode_type_version_mismatch_expected_dd
 * Address:  140475b30
 * Signature: undefined s_bytecode_type_version_mismatch_expected_dd(void)
 * Body size: 4432 bytes
 */


void s_bytecode_type_version_mismatch_expected_dd(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  byte *pbVar12;
  void *_Dst;
  byte bVar13;
  byte bVar14;
  longlong lVar15;
  char cVar16;
  char *pcVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  byte *pbVar30;
  byte *pbVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  byte *pbVar36;
  byte bVar37;
  int iVar38;
  longlong lVar39;
  undefined1 auStack_1e8 [32];
  byte *local_1c8;
  uint local_1c0;
  byte local_1b1;
  longlong *local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 local_188;
  byte *local_180;
  byte *local_178;
  ulonglong local_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1e8;
  pcVar17 = (char *)param_2[6];
  pbVar36 = (byte *)param_2[7];
  bVar37 = *pbVar36;
  uVar28 = (ulonglong)bVar37;
  if (bVar37 == 0) {
    lVar34 = param_2[8];
    sVar8 = strlen(pcVar17);
    uVar9 = FUN_1406b8d30(&local_148,0x100,pcVar17,sVar8);
    local_1c8 = pbVar36 + 1;
    iVar38 = (int)lVar34 + -1;
    pcVar17 = "%s%.*s";
  }
  else {
    if (0xfb < (byte)(bVar37 - 7)) {
      local_160 = uVar28;
      if (bVar37 < 4) {
        lVar34 = 1;
        uVar28 = 0;
      }
      else {
        bVar37 = pbVar36[1];
        uVar28 = (ulonglong)bVar37;
        lVar34 = 2;
        if ((byte)(bVar37 - 4) < 0xfd) {
          sVar8 = strlen(pcVar17);
          uVar9 = FUN_1406b8d30(&local_148,0x100,pcVar17,sVar8);
          local_1c0 = (uint)bVar37;
          local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,3);
          uVar24 = 1;
          FUN_140474310(param_1,"%s: bytecode type version mismatch (expected [%d..%d], got %d)",
                        uVar9,1);
          goto LAB_140476c96;
        }
      }
      if ((int)param_2[9] == 0) {
        puVar10 = (undefined8 *)(param_1 + 0x58);
      }
      else {
        puVar10 = (undefined8 *)FUN_140472e80(param_1);
      }
      local_188 = *puVar10;
      local_198 = uVar28;
      sVar8 = strlen(pcVar17);
      local_168 = FUN_1406c0530(param_1,pcVar17,sVar8);
      bVar37 = 0;
      uVar25 = 0;
      do {
        pbVar12 = pbVar36 + lVar34;
        lVar34 = lVar34 + 1;
        uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
        bVar37 = bVar37 + 7;
      } while ((char)*pbVar12 < '\0');
      uVar28 = (ulonglong)uVar25;
      *param_2 = param_1;
      lVar11 = FUN_1406c1640(param_1,uVar28 * 8,0);
      param_2[1] = lVar11;
      param_2[2] = uVar28;
      if (uVar25 != 0) {
        uVar27 = 0;
        do {
          bVar37 = 0;
          uVar25 = 0;
          lVar11 = lVar34;
          do {
            pbVar12 = pbVar36 + lVar11;
            lVar11 = lVar11 + 1;
            uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
            bVar37 = bVar37 + 7;
          } while ((char)*pbVar12 < '\0');
          uVar18 = (ulonglong)uVar25;
          uVar9 = FUN_1406c0530(param_1,pbVar36 + lVar11,uVar18);
          *(undefined8 *)(param_2[1] + uVar27 * 8) = uVar9;
          lVar34 = uVar18 + lVar11;
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar28);
        lVar34 = uVar18 + lVar11;
      }
      bVar37 = (byte)local_198;
      if (bVar37 == 3) {
        local_138 = 0x7070707;
        uStack_134 = 0x7070707;
        uStack_130 = 0x7070707;
        uStack_12c = 0x7070707;
        local_148 = 0x7070707;
        uStack_144 = 0x7070707;
        uStack_140 = 0x7070707;
        uStack_13c = 0x7070707;
        pbVar12 = pbVar36 + lVar34;
        lVar34 = lVar34 + 1;
        bVar14 = *pbVar12;
        while (bVar14 != 0) {
          bVar13 = 0;
          uVar25 = 0;
          lVar34 = lVar34 + 1;
          do {
            lVar11 = lVar34;
            uVar25 = uVar25 | (pbVar36[lVar11 + -1] & 0x7f) << (bVar13 & 0x1f);
            bVar13 = bVar13 + 7;
            lVar34 = lVar11 + 1;
          } while ((char)pbVar36[lVar11 + -1] < '\0');
          if (uVar25 == 0) {
            lVar19 = 0;
          }
          else {
            lVar19 = *(longlong *)(param_2[1] + (ulonglong)(uVar25 - 1) * 8);
          }
          if ((bVar14 < 0x21) &&
             (pcVar4 = *(code **)(*(longlong *)(param_1 + 0x18) + 0x558), pcVar4 != (code *)0x0)) {
            uVar7 = (*pcVar4)(param_1,lVar19 + 0x18,*(undefined4 *)(lVar19 + 0x14));
            *(undefined1 *)((longlong)&local_148 + ((ulonglong)bVar14 + 0xffffffff & 0xffffffff)) =
                 uVar7;
          }
          bVar14 = pbVar36[lVar11];
        }
      }
      bVar14 = 0;
      uVar28 = 0;
      do {
        pbVar12 = pbVar36 + lVar34;
        lVar34 = lVar34 + 1;
        uVar25 = (uint)uVar28 | (*pbVar12 & 0x7f) << (bVar14 & 0x1f);
        uVar28 = (ulonglong)uVar25;
        bVar14 = bVar14 + 7;
      } while ((char)*pbVar12 < '\0');
      param_2[3] = param_1;
      lVar11 = FUN_1406c1640(param_1,uVar28 * 8,0);
      param_2[4] = lVar11;
      param_2[5] = uVar28;
      local_170 = uVar28;
      if (uVar25 != 0) {
        local_1b1 = bVar37 & 0xfe;
        local_180 = pbVar36 + 4;
        local_178 = pbVar36 + 2;
        uVar28 = 0;
        local_1b0 = param_2;
        local_1a0 = param_1;
        do {
          lVar11 = FUN_1406c07e0();
          *(undefined8 *)(lVar11 + 0x58) = local_168;
          *(int *)(lVar11 + 0xa8) = (int)uVar28;
          *(byte *)(lVar11 + 6) = pbVar36[lVar34];
          *(byte *)(lVar11 + 4) = pbVar36[lVar34 + 1];
          *(byte *)(lVar11 + 3) = pbVar36[lVar34 + 2];
          *(byte *)(lVar11 + 5) = pbVar36[lVar34 + 3];
          local_190 = uVar28;
          if ((byte)local_160 < 4) {
            lVar19 = lVar34 + 4;
          }
          else {
            lVar19 = lVar34 + 5;
            *(byte *)(lVar11 + 7) = pbVar36[lVar34 + 4];
            if ((char)local_198 == '\x01') {
              bVar37 = 0;
              uVar25 = 0;
              do {
                pbVar12 = pbVar36 + lVar19;
                lVar19 = lVar19 + 1;
                uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
                bVar37 = bVar37 + 7;
              } while ((char)*pbVar12 < '\0');
              if (uVar25 == 0) {
                uVar28 = 0;
              }
              else {
                iVar38 = (0x7f < uVar25) + 3 + uVar25;
                pbVar12 = (byte *)FUN_1406c1640(param_1,iVar38,*(undefined1 *)(lVar11 + 2));
                *(byte **)(lVar11 + 0x70) = pbVar12;
                *(int *)(lVar11 + 0xac) = iVar38;
                if (uVar25 < 0x80) {
                  *pbVar12 = (byte)uVar25;
                  lVar34 = 2;
                  lVar15 = 1;
                }
                else {
                  *pbVar12 = (byte)uVar25 | 0x80;
                  *(char *)(*(longlong *)(lVar11 + 0x70) + 1) = (char)(uVar25 >> 7);
                  lVar34 = 3;
                  lVar15 = 2;
                }
                *(undefined1 *)(*(longlong *)(lVar11 + 0x70) + lVar15) = 0;
                *(undefined1 *)(*(longlong *)(lVar11 + 0x70) + lVar34) = 0;
                uVar28 = (ulonglong)uVar25;
                memcpy((void *)((ulonglong)((0x7f < uVar25) + 3) + *(longlong *)(lVar11 + 0x70)),
                       pbVar36 + lVar19,uVar28);
              }
              lVar19 = uVar28 + lVar19;
            }
            else if (local_1b1 == 2) {
              bVar37 = 0;
              uVar25 = 0;
              do {
                pbVar12 = pbVar36 + lVar19;
                lVar19 = lVar19 + 1;
                uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
                bVar37 = bVar37 + 7;
              } while ((char)*pbVar12 < '\0');
              if (uVar25 != 0) {
                uVar28 = (ulonglong)uVar25;
                _Dst = (void *)FUN_1406c1640(param_1,uVar28,*(undefined1 *)(lVar11 + 2));
                *(void **)(lVar11 + 0x70) = _Dst;
                *(uint *)(lVar11 + 0xac) = uVar25;
                memcpy(_Dst,pbVar36 + lVar19,uVar28);
                lVar19 = uVar28 + lVar19;
                if ((char)local_198 == '\x03') {
                  lVar35 = *(longlong *)(lVar11 + 0x70);
                  lVar34 = lVar35 + 1;
                  lVar15 = 0;
                  bVar37 = 0;
                  local_1a8 = 0;
                  lVar21 = 4;
                  lVar32 = lVar35;
                  do {
                    lVar29 = lVar21;
                    pbVar12 = (byte *)(lVar35 + lVar15);
                    bVar14 = bVar37 & 0x1f;
                    lVar15 = lVar15 + 1;
                    uVar25 = (uint)local_1a8 | (*pbVar12 & 0x7f) << bVar14;
                    local_1a8 = (ulonglong)uVar25;
                    bVar37 = bVar37 + 7;
                    lVar34 = lVar34 + 1;
                    lVar32 = lVar32 + 1;
                    lVar21 = lVar29 + 1;
                  } while ((char)*pbVar12 < '\0');
                  bVar37 = 0;
                  uVar22 = 0 << bVar14;
                  lVar21 = 2;
                  do {
                    lVar39 = lVar29;
                    lVar20 = lVar21;
                    pbVar12 = (byte *)(lVar35 + lVar15);
                    lVar15 = lVar15 + 1;
                    uVar22 = uVar22 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
                    bVar37 = bVar37 + 7;
                    lVar21 = lVar20 + 1;
                    lVar29 = lVar39 + 1;
                  } while ((char)*pbVar12 < '\0');
                  bVar37 = 0;
                  uVar33 = 0;
                  do {
                    lVar21 = lVar20;
                    pbVar12 = (byte *)(lVar35 + lVar15);
                    lVar15 = lVar15 + 1;
                    uVar33 = uVar33 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
                    bVar37 = bVar37 + 7;
                    lVar39 = lVar39 + 1;
                    lVar20 = lVar21 + 1;
                  } while ((char)*pbVar12 < '\0');
                  if (uVar25 != 0) {
                    if (2 < uVar25) {
                      uVar28 = 2;
                      if (uVar25 != 3) {
                        lVar39 = lVar39 + lVar35;
                        do {
                          uVar26 = *(byte *)(lVar39 + -2 + uVar28) - 0x40;
                          if (uVar26 < 0x20) {
                            *(undefined1 *)(lVar39 + -2 + uVar28) =
                                 *(undefined1 *)((longlong)&local_148 + (ulonglong)uVar26);
                            bVar37 = *(byte *)(lVar39 + -1 + uVar28);
                          }
                          else {
                            bVar37 = *(byte *)(lVar39 + -1 + uVar28);
                          }
                          if (bVar37 - 0x40 < 0x20) {
                            *(undefined1 *)(lVar39 + -1 + uVar28) =
                                 *(undefined1 *)((longlong)&local_148 + (ulonglong)(bVar37 - 0x40));
                          }
                          uVar28 = uVar28 + 2;
                        } while ((uVar25 & 0xfffffffe) != uVar28);
                      }
                      if ((uVar25 & 1) != 0) {
                        uVar25 = *(byte *)(lVar15 + uVar28 + lVar35) - 0x40;
                        if (uVar25 < 0x20) {
                          *(undefined1 *)(uVar28 + lVar35 + lVar15) =
                               *(undefined1 *)((longlong)&local_148 + (ulonglong)uVar25);
                        }
                      }
                    }
                    lVar15 = lVar15 + local_1a8;
                  }
                  if (uVar22 != 0) {
                    if (uVar22 == 1) {
                      uVar28 = 0;
                    }
                    else {
                      uVar28 = 0;
                      do {
                        uVar25 = *(byte *)(lVar32 + local_1a8 + lVar21) - 0x40;
                        if (uVar25 < 0x20) {
                          *(undefined1 *)(lVar32 + local_1a8 + lVar21) =
                               *(undefined1 *)((longlong)&local_148 + (ulonglong)uVar25);
                        }
                        uVar25 = *(byte *)(lVar34 + local_1a8 + lVar21) - 0x40;
                        if (uVar25 < 0x20) {
                          *(undefined1 *)(lVar34 + local_1a8 + lVar21) =
                               *(undefined1 *)((longlong)&local_148 + (ulonglong)uVar25);
                        }
                        uVar28 = uVar28 + 2;
                        lVar21 = lVar21 + 2;
                      } while ((uVar22 & 0xfffffffe) != uVar28);
                    }
                    if ((uVar22 & 1) != 0) {
                      uVar25 = *(byte *)(lVar35 + lVar15 + uVar28) - 0x40;
                      if (uVar25 < 0x20) {
                        *(undefined1 *)(lVar35 + lVar15 + uVar28) =
                             *(undefined1 *)((longlong)&local_148 + (ulonglong)uVar25);
                      }
                    }
                    lVar15 = lVar15 + (ulonglong)uVar22;
                  }
                  param_2 = local_1b0;
                  param_1 = local_1a0;
                  if (uVar33 != 0) {
                    uVar25 = 0;
                    do {
                      uVar22 = (int)*(char *)(lVar35 + lVar15) - 0x40;
                      if (uVar22 < 0x20) {
                        *(undefined1 *)(lVar35 + lVar15) =
                             *(undefined1 *)((longlong)&local_148 + (ulonglong)uVar22);
                      }
                      lVar15 = lVar15 + 2;
                      do {
                        pcVar17 = (char *)(lVar35 + lVar15);
                        lVar15 = lVar15 + 1;
                      } while (*pcVar17 < '\0');
                      do {
                        pcVar17 = (char *)(lVar35 + lVar15);
                        lVar15 = lVar15 + 1;
                      } while (*pcVar17 < '\0');
                      uVar25 = uVar25 + 1;
                    } while (uVar25 != uVar33);
                  }
                }
              }
            }
          }
          bVar37 = 0;
          uVar25 = 0;
          do {
            pbVar12 = pbVar36 + lVar19;
            lVar19 = lVar19 + 1;
            uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
            bVar37 = bVar37 + 7;
          } while ((char)*pbVar12 < '\0');
          if ((int)uVar25 < 0) goto LAB_140476cc4;
          uVar9 = FUN_1406c1640(param_1,(ulonglong)uVar25 << 2,*(undefined1 *)(lVar11 + 2));
          *(undefined8 *)(lVar11 + 0x10) = uVar9;
          *(uint *)(lVar11 + 0x88) = uVar25;
          if (uVar25 != 0) {
            lVar34 = 0;
            do {
              pbVar12 = pbVar36 + lVar19;
              lVar19 = lVar19 + 4;
              *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + lVar34 * 4) = *(undefined4 *)pbVar12;
              lVar34 = lVar34 + 1;
            } while (lVar34 < *(int *)(lVar11 + 0x88));
            uVar9 = *(undefined8 *)(lVar11 + 0x10);
          }
          *(undefined8 *)(lVar11 + 0x20) = uVar9;
          bVar37 = 0;
          uVar28 = 0;
          do {
            pbVar12 = pbVar36 + lVar19;
            lVar19 = lVar19 + 1;
            uVar25 = (uint)uVar28 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
            uVar28 = (ulonglong)uVar25;
            bVar37 = bVar37 + 7;
          } while ((char)*pbVar12 < '\0');
          if ((int)uVar25 < 0) goto LAB_140476cc4;
          uVar9 = FUN_1406c1640(param_1,uVar28 << 4,*(undefined1 *)(lVar11 + 2));
          *(undefined8 *)(lVar11 + 8) = uVar9;
          *(uint *)(lVar11 + 0x98) = uVar25;
          if (uVar25 != 0) {
            lVar34 = 0xc;
            lVar15 = 0;
            do {
              *(undefined4 *)(*(longlong *)(lVar11 + 8) + lVar34) = 0;
              lVar15 = lVar15 + 1;
              lVar34 = lVar34 + 0x10;
            } while (lVar15 < *(int *)(lVar11 + 0x98));
            if (0 < *(int *)(lVar11 + 0x98)) {
              lVar34 = 0;
              do {
                lVar15 = lVar19 + 1;
                switch(pbVar36[lVar19]) {
                case 1:
                  lVar15 = *(longlong *)(lVar11 + 8);
                  *(uint *)(lVar15 + lVar34 * 0x10) = (uint)pbVar36[lVar19 + 1];
                  *(undefined4 *)(lVar15 + 0xc + lVar34 * 0x10) = 1;
                  lVar15 = lVar19 + 2;
                  break;
                case 2:
                  lVar15 = *(longlong *)(lVar11 + 8);
                  *(undefined8 *)(lVar15 + lVar34 * 0x10) = *(undefined8 *)(pbVar36 + lVar19 + 1);
                  *(undefined4 *)(lVar15 + 0xc + lVar34 * 0x10) = 3;
                  lVar15 = lVar19 + 9;
                  break;
                case 3:
                  bVar37 = 0;
                  uVar25 = 0;
                  do {
                    pbVar12 = pbVar36 + lVar15;
                    lVar15 = lVar15 + 1;
                    uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
                    bVar37 = bVar37 + 7;
                  } while ((char)*pbVar12 < '\0');
                  if (uVar25 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = *(undefined8 *)(param_2[1] + (ulonglong)(uVar25 - 1) * 8);
                  }
                  lVar19 = *(longlong *)(lVar11 + 8);
                  *(undefined8 *)(lVar19 + lVar34 * 0x10) = uVar9;
                  *(undefined4 *)(lVar19 + 0xc + lVar34 * 0x10) = 5;
                  break;
                case 4:
                  local_150 = *(undefined4 *)(pbVar36 + lVar19 + 1);
                  local_158 = *(undefined8 *)(lVar11 + 8);
                  if (*(char *)(*(longlong *)(param_1 + 0x58) + 5) == '\0') {
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc) = 0;
                    lVar15 = *(longlong *)(param_1 + 8) + 0x10;
                    *(longlong *)(param_1 + 8) = lVar15;
                  }
                  else {
                    FUN_1404731e0(param_1);
                    local_1c8 = (byte *)0x0;
                    iVar38 = FUN_1406b9e50(param_1,FUN_140476d80,&local_158,
                                           *(longlong *)(param_1 + 8) -
                                           *(longlong *)(param_1 + 0x30));
                    lVar15 = *(longlong *)(param_1 + 8);
                    if (iVar38 != 0) {
                      *(undefined4 *)(lVar15 + -4) = 0;
                      lVar15 = *(longlong *)(param_1 + 8);
                    }
                  }
                  uVar24 = *(undefined4 *)(lVar15 + -0xc);
                  uVar5 = *(undefined4 *)(lVar15 + -8);
                  uVar6 = *(undefined4 *)(lVar15 + -4);
                  puVar1 = (undefined4 *)(*(longlong *)(lVar11 + 8) + lVar34 * 0x10);
                  *puVar1 = *(undefined4 *)(lVar15 + -0x10);
                  puVar1[1] = uVar24;
                  puVar1[2] = uVar5;
                  puVar1[3] = uVar6;
                  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -0x10;
                  lVar15 = lVar19 + 5;
                  break;
                case 5:
                  bVar37 = 0;
                  uVar25 = 0;
                  do {
                    pbVar12 = pbVar36 + lVar15;
                    bVar14 = bVar37 & 0x1f;
                    lVar15 = lVar15 + 1;
                    uVar25 = uVar25 | (*pbVar12 & 0x7f) << bVar14;
                    bVar37 = bVar37 + 7;
                  } while ((char)*pbVar12 < '\0');
                  uVar9 = FUN_1406bee20(param_1,0 << bVar14,uVar25);
                  if (0 < (int)uVar25) {
                    uVar22 = 0;
                    do {
                      bVar37 = 0;
                      uVar33 = 0;
                      do {
                        pbVar12 = pbVar36 + lVar15;
                        lVar15 = lVar15 + 1;
                        uVar33 = uVar33 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
                        bVar37 = bVar37 + 7;
                      } while ((char)*pbVar12 < '\0');
                      puVar10 = (undefined8 *)
                                table_index_is_nil(param_1,uVar9,
                                                   (longlong)(int)uVar33 * 0x10 +
                                                   *(longlong *)(lVar11 + 8));
                      *puVar10 = 0;
                      *(undefined4 *)((longlong)puVar10 + 0xc) = 3;
                      uVar22 = uVar22 + 1;
                    } while (uVar22 != uVar25);
                  }
                  lVar19 = *(longlong *)(lVar11 + 8);
                  *(undefined8 *)(lVar19 + lVar34 * 0x10) = uVar9;
                  *(undefined4 *)(lVar19 + 0xc + lVar34 * 0x10) = 6;
                  param_2 = local_1b0;
                  break;
                case 6:
                  bVar37 = 0;
                  uVar25 = 0;
                  do {
                    pbVar12 = pbVar36 + lVar15;
                    lVar15 = lVar15 + 1;
                    uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
                    bVar37 = bVar37 + 7;
                  } while ((char)*pbVar12 < '\0');
                  lVar35 = FUN_1406c0850(param_1,*(undefined1 *)
                                                  (*(longlong *)(param_2[4] + (ulonglong)uVar25 * 8)
                                                  + 3),local_188);
                  *(bool *)(lVar35 + 6) = *(char *)(lVar35 + 4) != '\0';
                  lVar19 = *(longlong *)(lVar11 + 8);
                  *(longlong *)(lVar19 + lVar34 * 0x10) = lVar35;
                  *(undefined4 *)(lVar19 + 0xc + lVar34 * 0x10) = 7;
                  break;
                case 7:
                  uVar24 = *(undefined4 *)(pbVar36 + lVar19 + 9);
                  lVar15 = *(longlong *)(lVar11 + 8);
                  lVar35 = lVar34 * 0x10;
                  *(undefined8 *)(lVar15 + lVar35) = *(undefined8 *)(pbVar36 + lVar19 + 1);
                  *(undefined4 *)(lVar15 + 8 + lVar35) = uVar24;
                  *(undefined4 *)(lVar15 + 0xc + lVar35) = 4;
                  lVar15 = lVar19 + 0x11;
                }
                lVar19 = lVar15;
                lVar34 = lVar34 + 1;
              } while (lVar34 < *(int *)(lVar11 + 0x98));
            }
          }
          bVar37 = 0;
          uVar28 = 0;
          do {
            pbVar12 = pbVar36 + lVar19;
            lVar19 = lVar19 + 1;
            uVar25 = (uint)uVar28 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
            uVar28 = (ulonglong)uVar25;
            bVar37 = bVar37 + 7;
          } while ((char)*pbVar12 < '\0');
          if ((int)uVar25 < 0) goto LAB_140476cc4;
          uVar9 = FUN_1406c1640(param_1,uVar28 << 3,*(undefined1 *)(lVar11 + 2));
          *(undefined8 *)(lVar11 + 0x18) = uVar9;
          *(uint *)(lVar11 + 0x8c) = uVar25;
          if (uVar25 != 0) {
            lVar34 = 0;
            do {
              bVar37 = 0;
              uVar25 = 0;
              do {
                pbVar12 = pbVar36 + lVar19;
                lVar19 = lVar19 + 1;
                uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
                bVar37 = bVar37 + 7;
              } while ((char)*pbVar12 < '\0');
              *(undefined8 *)(*(longlong *)(lVar11 + 0x18) + lVar34 * 8) =
                   *(undefined8 *)(param_2[4] + (ulonglong)uVar25 * 8);
              lVar34 = lVar34 + 1;
            } while (lVar34 < *(int *)(lVar11 + 0x8c));
          }
          bVar37 = 0;
          uVar25 = 0;
          lVar34 = lVar19 + 2;
          lVar15 = lVar19 + 3;
          do {
            lVar35 = lVar15;
            lVar21 = lVar34;
            pbVar12 = pbVar36 + lVar19;
            lVar19 = lVar19 + 1;
            uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
            bVar37 = bVar37 + 7;
            lVar34 = lVar21 + 1;
            lVar15 = lVar35 + 1;
          } while ((char)*pbVar12 < '\0');
          *(uint *)(lVar11 + 0xa4) = uVar25;
          bVar37 = 0;
          uVar25 = 0;
          do {
            lVar34 = lVar21;
            uVar25 = uVar25 | (pbVar36[lVar34 + -1] & 0x7f) << (bVar37 & 0x1f);
            bVar37 = bVar37 + 7;
            lVar21 = lVar34 + 1;
            lVar35 = lVar35 + 1;
          } while ((char)pbVar36[lVar34 + -1] < '\0');
          if (uVar25 == 0) {
            *(undefined8 *)(lVar11 + 0x60) = 0;
            bVar37 = pbVar36[lVar34];
          }
          else {
            *(undefined8 *)(lVar11 + 0x60) =
                 *(undefined8 *)(param_2[1] + (ulonglong)(uVar25 - 1) * 8);
            bVar37 = pbVar36[lVar34];
          }
          if (bVar37 != 0) {
            bVar37 = pbVar36[lVar21];
            *(uint *)(lVar11 + 0xa0) = (uint)bVar37;
            iVar23 = *(int *)(lVar11 + 0x88) + -1 >> (bVar37 & 0x1f);
            uVar28 = (longlong)*(int *)(lVar11 + 0x88) + 3U & 0xfffffffffffffffc;
            iVar38 = (int)uVar28 + iVar23 * 4 + 4;
            lVar19 = FUN_1406c1640(param_1,(longlong)iVar38,*(undefined1 *)(lVar11 + 2));
            *(longlong *)(lVar11 + 0x38) = lVar19;
            *(int *)(lVar11 + 0x9c) = iVar38;
            *(ulonglong *)(lVar11 + 0x40) = uVar28 + lVar19;
            if (*(int *)(lVar11 + 0x88) < 1) {
              lVar35 = lVar34 + 2;
            }
            else {
              lVar34 = 0;
              cVar16 = '\0';
              do {
                cVar16 = cVar16 + pbVar36[lVar34 + lVar35];
                *(char *)(*(longlong *)(lVar11 + 0x38) + lVar34) = cVar16;
                lVar34 = lVar34 + 1;
              } while (lVar34 < *(int *)(lVar11 + 0x88));
              lVar35 = lVar35 + lVar34;
            }
            lVar21 = lVar35;
            param_2 = local_1b0;
            if (-1 < iVar23) {
              if (iVar23 == 0) {
                uVar28 = 0;
                iVar38 = 0;
              }
              else {
                uVar28 = 0;
                iVar38 = 0;
                do {
                  iVar3 = *(int *)(local_180 + uVar28 * 4 + lVar35 + -4);
                  *(int *)(*(longlong *)(lVar11 + 0x40) + uVar28 * 4) = iVar38 + iVar3;
                  lVar21 = lVar21 + 8;
                  iVar38 = iVar38 + iVar3 + *(int *)(local_180 + uVar28 * 4 + lVar35);
                  *(int *)(*(longlong *)(lVar11 + 0x40) + 4 + uVar28 * 4) = iVar38;
                  uVar28 = uVar28 + 2;
                } while ((iVar23 + 1U & 0x7ffffffe) != uVar28);
                lVar35 = lVar21;
                if ((iVar23 + 1U & 1) == 0) goto LAB_140476820;
              }
              *(int *)(*(longlong *)(lVar11 + 0x40) + uVar28 * 4) =
                   iVar38 + *(int *)(pbVar36 + lVar35);
              lVar21 = lVar35 + 4;
            }
          }
LAB_140476820:
          pbVar12 = local_178;
          lVar34 = lVar21 + 1;
          if (pbVar36[lVar21] != 0) {
            bVar37 = 0;
            uVar25 = 0;
            do {
              pbVar2 = pbVar36 + lVar34;
              lVar34 = lVar34 + 1;
              uVar25 = uVar25 | (*pbVar2 & 0x7f) << (bVar37 & 0x1f);
              bVar37 = bVar37 + 7;
            } while ((char)*pbVar2 < '\0');
            if ((int)uVar25 < 0) {
LAB_140476cc4:
                    /* WARNING: Subroutine does not return */
              memory_allocation_error_block_too_big(param_1);
            }
            uVar9 = FUN_1406c1640(param_1,(ulonglong)uVar25 * 0x18);
            param_1 = local_1a0;
            *(undefined8 *)(lVar11 + 0x48) = uVar9;
            *(uint *)(lVar11 + 0x90) = uVar25;
            if (uVar25 != 0) {
              lVar15 = 0;
              lVar19 = lVar34;
              do {
                bVar37 = 0;
                uVar25 = 0;
                pbVar2 = pbVar12 + lVar19;
                lVar34 = lVar19 + 3;
                do {
                  lVar35 = lVar34;
                  pbVar30 = pbVar2;
                  pbVar31 = pbVar36 + lVar19;
                  lVar19 = lVar19 + 1;
                  uVar25 = uVar25 | (*pbVar31 & 0x7f) << (bVar37 & 0x1f);
                  bVar37 = bVar37 + 7;
                  pbVar2 = pbVar30 + 1;
                  lVar34 = lVar35 + 1;
                } while ((char)*pbVar31 < '\0');
                if (uVar25 == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = *(undefined8 *)(param_2[1] + (ulonglong)(uVar25 - 1) * 8);
                }
                *(undefined8 *)(*(longlong *)(lVar11 + 0x48) + lVar15 * 0x18) = uVar9;
                bVar37 = 0;
                uVar25 = 0;
                do {
                  pbVar31 = pbVar30;
                  lVar34 = lVar35;
                  pbVar2 = pbVar36 + lVar19;
                  lVar19 = lVar19 + 1;
                  uVar25 = uVar25 | (*pbVar2 & 0x7f) << (bVar37 & 0x1f);
                  bVar37 = bVar37 + 7;
                  lVar35 = lVar34 + 1;
                  pbVar30 = pbVar31 + 1;
                } while ((char)*pbVar2 < '\0');
                *(uint *)(*(longlong *)(lVar11 + 0x48) + 8 + lVar15 * 0x18) = uVar25;
                bVar37 = 0;
                uVar25 = 0;
                do {
                  bVar14 = *pbVar31;
                  uVar25 = uVar25 | (bVar14 & 0x7f) << (bVar37 & 0x1f);
                  bVar37 = bVar37 + 7;
                  lVar34 = lVar34 + 1;
                  pbVar31 = pbVar31 + 1;
                } while ((char)bVar14 < '\0');
                *(uint *)(*(longlong *)(lVar11 + 0x48) + 0xc + lVar15 * 0x18) = uVar25;
                *(byte *)(*(longlong *)(lVar11 + 0x48) + 0x10 + lVar15 * 0x18) = *pbVar31;
                lVar15 = lVar15 + 1;
                lVar19 = lVar34;
              } while (lVar15 < *(int *)(lVar11 + 0x90));
            }
            bVar37 = 0;
            uVar25 = 0;
            do {
              pbVar12 = pbVar36 + lVar34;
              lVar34 = lVar34 + 1;
              uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
              bVar37 = bVar37 + 7;
            } while ((char)*pbVar12 < '\0');
            if ((int)uVar25 < 0) goto LAB_140476cc4;
            uVar9 = FUN_1406c1640(local_1a0,(ulonglong)uVar25 << 3,*(undefined1 *)(lVar11 + 2));
            *(undefined8 *)(lVar11 + 0x50) = uVar9;
            *(uint *)(lVar11 + 0x94) = uVar25;
            if (uVar25 != 0) {
              lVar19 = 0;
              do {
                bVar37 = 0;
                uVar25 = 0;
                do {
                  pbVar12 = pbVar36 + lVar34;
                  lVar34 = lVar34 + 1;
                  uVar25 = uVar25 | (*pbVar12 & 0x7f) << (bVar37 & 0x1f);
                  bVar37 = bVar37 + 7;
                } while ((char)*pbVar12 < '\0');
                if (uVar25 == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = *(undefined8 *)(param_2[1] + (ulonglong)(uVar25 - 1) * 8);
                }
                *(undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar19 * 8) = uVar9;
                lVar19 = lVar19 + 1;
              } while (lVar19 < *(int *)(lVar11 + 0x94));
            }
          }
          *(longlong *)(param_2[4] + local_190 * 8) = lVar11;
          uVar28 = local_190 + 1;
        } while (uVar28 != local_170);
      }
      pbVar36 = pbVar36 + lVar34;
      uVar25 = 0;
      bVar37 = 0;
      do {
        bVar14 = *pbVar36;
        uVar25 = uVar25 | (bVar14 & 0x7f) << (bVar37 & 0x1f);
        bVar37 = bVar37 + 7;
        pbVar36 = pbVar36 + 1;
      } while ((char)bVar14 < '\0');
      uVar9 = *(undefined8 *)(param_2[4] + (ulonglong)uVar25 * 8);
      if ((*(byte *)(param_1 + 1) & 4) != 0) {
        FUN_1406bb030(param_1,param_1,param_1 + 0x68);
      }
      uVar24 = 0;
      uVar9 = FUN_1406c0850(param_1,0,local_188,uVar9);
      puVar10 = *(undefined8 **)(param_1 + 8);
      *puVar10 = uVar9;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 7;
      lVar34 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(param_1 + 0x28) - lVar34 < 0x11) {
        FUN_1406b9200(param_1,1);
        lVar34 = *(longlong *)(param_1 + 8);
      }
      *(longlong *)(param_1 + 8) = lVar34 + 0x10;
      goto LAB_140476c96;
    }
    sVar8 = strlen(pcVar17);
    uVar9 = FUN_1406b8d30(&local_148,0x100,pcVar17,sVar8);
    local_1c8 = (byte *)CONCAT44(local_1c8._4_4_,6);
    pcVar17 = "%s: bytecode version mismatch (expected [%d..%d], got %d)";
    iVar38 = 3;
    local_1c0 = (uint)bVar37;
  }
  FUN_140474310(param_1,pcVar17,uVar9,iVar38);
  uVar24 = 1;
LAB_140476c96:
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar24;
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_1e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_1e8);
}

