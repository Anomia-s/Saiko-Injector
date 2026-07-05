/**
 * Function: unsupported_data_layout
 * Address:  140489890
 * Signature: undefined unsupported_data_layout(void)
 * Body size: 3074 bytes
 */


float * unsupported_data_layout
                  (longlong param_1,uint *param_2,uint *param_3,undefined4 *param_4,uint param_5)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  void *_Memory;
  byte *pbVar10;
  float *pfVar11;
  byte bVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  uint *puVar16;
  byte *pbVar17;
  uint *_Src;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  byte bVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_518 [32];
  float *local_4f8;
  ulonglong local_4f0;
  byte *local_4e8;
  void *local_4e0;
  ulonglong local_4d8;
  float *local_4d0;
  ulonglong local_4c8;
  longlong local_4c0;
  uint local_4b4;
  longlong local_4b0;
  size_t local_4a8;
  longlong local_4a0;
  ulonglong local_498;
  ulonglong local_490;
  char *local_488;
  byte local_480;
  byte local_47f;
  byte local_47e;
  byte local_47d;
  undefined4 local_47c;
  char local_478;
  char cStack_477;
  char cStack_476;
  char cStack_475;
  char cStack_474;
  char cStack_473;
  char cStack_472;
  char cStack_471;
  char cStack_470;
  char cStack_46f;
  char cStack_46e;
  char cStack_46d;
  char cStack_46c;
  char cStack_46b;
  char cStack_46a;
  char cStack_469;
  char cStack_468;
  char cStack_467;
  char cStack_466;
  char cStack_465;
  char cStack_464;
  char cStack_463;
  char cStack_462;
  ulonglong local_70;
  
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_518;
  FUN_140499600(param_1,&local_478);
  if ((CONCAT17(cStack_46e,
                CONCAT16(cStack_46f,
                         CONCAT15(cStack_470,
                                  CONCAT14(cStack_471,
                                           CONCAT13(cStack_472,
                                                    CONCAT12(cStack_473,
                                                             CONCAT11(cStack_474,cStack_475)))))))
       == 0x45434e41494441 &&
       CONCAT17(cStack_471,
                CONCAT16(cStack_472,
                         CONCAT15(cStack_473,
                                  CONCAT14(cStack_474,
                                           CONCAT13(cStack_475,
                                                    CONCAT12(cStack_476,
                                                             CONCAT11(cStack_477,local_478))))))) ==
       0x4e41494441523f23) ||
     (CONCAT13(cStack_472,CONCAT12(cStack_473,CONCAT11(cStack_474,cStack_475))) == 0x454247 &&
      CONCAT13(cStack_475,CONCAT12(cStack_476,CONCAT11(cStack_477,local_478))) == 0x47523f23)) {
    FUN_140499600(param_1,&local_478);
    if (local_478 != '\0') {
      bVar3 = false;
      do {
        auVar29[0] = -(cStack_471 == '3');
        auVar29[1] = -(cStack_470 == '2');
        auVar29[2] = -(cStack_46f == '-');
        auVar29[3] = -(cStack_46e == 'b');
        auVar29[4] = -(cStack_46d == 'i');
        auVar29[5] = -(cStack_46c == 't');
        auVar29[6] = -(cStack_46b == '_');
        auVar29[7] = -(cStack_46a == 'r');
        auVar29[8] = -(cStack_469 == 'l');
        auVar29[9] = -(cStack_468 == 'e');
        auVar29[10] = -(cStack_467 == '_');
        auVar29[0xb] = -(cStack_466 == 'r');
        auVar29[0xc] = -(cStack_465 == 'g');
        auVar29[0xd] = -(cStack_464 == 'b');
        auVar29[0xe] = -(cStack_463 == 'e');
        auVar29[0xf] = -(cStack_462 == '\0');
        auVar30[0] = -(local_478 == 'F');
        auVar30[1] = -(cStack_477 == 'O');
        auVar30[2] = -(cStack_476 == 'R');
        auVar30[3] = -(cStack_475 == 'M');
        auVar30[4] = -(cStack_474 == 'A');
        auVar30[5] = -(cStack_473 == 'T');
        auVar30[6] = -(cStack_472 == '=');
        auVar30[7] = -(cStack_471 == '3');
        auVar30[8] = -(cStack_470 == '2');
        auVar30[9] = -(cStack_46f == '-');
        auVar30[10] = -(cStack_46e == 'b');
        auVar30[0xb] = -(cStack_46d == 'i');
        auVar30[0xc] = -(cStack_46c == 't');
        auVar30[0xd] = -(cStack_46b == '_');
        auVar30[0xe] = -(cStack_46a == 'r');
        auVar30[0xf] = -(cStack_469 == 'l');
        auVar30 = auVar30 & auVar29;
        if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) {
          bVar3 = true;
        }
        FUN_140499600(param_1,&local_478);
      } while (local_478 != '\0');
      if (bVar3) {
        FUN_140499600(param_1,&local_478);
        if (cStack_476 == ' ' && CONCAT11(cStack_477,local_478) == 0x592d) {
          local_488 = &cStack_475;
          uVar5 = strtol(local_488,&local_488,10);
          pcVar13 = local_488 + 2;
          do {
            pcVar14 = pcVar13;
            pcVar13 = pcVar14 + 1;
          } while (pcVar14[-2] == ' ');
          if (((pcVar14[-2] == '+') && (pcVar14[-1] == 'X')) && (*pcVar14 == ' ')) {
            local_488 = pcVar13;
            uVar6 = strtol(pcVar13,(char **)0x0,10);
            if (((int)uVar5 < 0x1000001) && (uVar20 = (ulonglong)uVar6, (int)uVar6 < 0x1000001)) {
              *param_2 = uVar6;
              *param_3 = uVar5;
              if (param_4 != (undefined4 *)0x0) {
                *param_4 = 3;
              }
              uVar19 = 3;
              if (param_5 != 0) {
                uVar19 = (ulonglong)param_5;
              }
              iVar7 = FUN_1404991d0(uVar6,uVar5,uVar19,4);
              if (iVar7 != 0) {
                local_4f0 = uVar19;
                pfVar9 = (float *)FUN_140499250(uVar20,uVar5,uVar19,4);
                if (pfVar9 != (float *)0x0) {
                  iVar7 = 0;
                  local_4f8 = pfVar9;
                  local_4d8 = uVar20;
                  if (uVar6 - 0x8000 < 0xffff8008) goto LAB_14048a2b3;
                  if (0 < (int)uVar5) {
                    pbVar1 = (byte *)(param_1 + 0x38);
                    local_4e8 = (byte *)(param_1 + 0x39);
                    local_4c8 = (ulonglong)uVar6;
                    local_498 = (ulonglong)uVar5;
                    local_4a0 = (longlong)(int)local_4f0 * local_4c8 * 4;
                    local_4c0 = (longlong)(int)local_4f0 << 2;
                    uVar19 = 0;
                    _Memory = (void *)0x0;
                    uVar20 = (ulonglong)(uVar6 * 4);
                    local_4d0 = pfVar9;
                    local_4b4 = uVar5;
                    do {
                      pbVar10 = *(byte **)(param_1 + 0xc0);
                      pbVar15 = *(byte **)(param_1 + 200);
                      local_490 = uVar19;
                      if (pbVar10 < pbVar15) {
                        *(byte **)(param_1 + 0xc0) = pbVar10 + 1;
                        bVar12 = *pbVar10;
                        pbVar10 = pbVar10 + 1;
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        bVar12 = 0;
                      }
                      else {
                        FUN_14048bcd0(param_1);
                        pbVar17 = *(byte **)(param_1 + 0xc0);
                        pbVar15 = *(byte **)(param_1 + 200);
                        pbVar10 = pbVar17 + 1;
                        *(byte **)(param_1 + 0xc0) = pbVar10;
                        bVar12 = *pbVar17;
                      }
                      if (pbVar10 < pbVar15) {
                        *(byte **)(param_1 + 0xc0) = pbVar10 + 1;
                        bVar21 = *pbVar10;
                        pbVar10 = pbVar10 + 1;
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        bVar21 = 0;
                      }
                      else {
                        FUN_14048bcd0(param_1);
                        pbVar17 = *(byte **)(param_1 + 0xc0);
                        pbVar15 = *(byte **)(param_1 + 200);
                        pbVar10 = pbVar17 + 1;
                        *(byte **)(param_1 + 0xc0) = pbVar10;
                        bVar21 = *pbVar17;
                      }
                      if (pbVar15 <= pbVar10) {
                        if (*(int *)(param_1 + 0x30) != 0) {
                          FUN_14048bcd0(param_1);
                          pbVar10 = *(byte **)(param_1 + 0xc0);
                          goto LAB_140489c55;
                        }
                        bVar25 = 0;
                        bVar4 = 0;
                        if (bVar12 == 2) goto LAB_140489c70;
LAB_14048a1ba:
                        local_47e = bVar4;
                        local_480 = bVar12;
                        local_47f = bVar21;
                        if (pbVar10 < *(byte **)(param_1 + 200)) {
LAB_14048a1f3:
                          *(byte **)(param_1 + 0xc0) = pbVar10 + 1;
                          local_47d = *pbVar10;
                        }
                        else {
                          if (*(int *)(param_1 + 0x30) != 0) {
                            FUN_14048bcd0(param_1);
                            pbVar10 = *(byte **)(param_1 + 0xc0);
                            goto LAB_14048a1f3;
                          }
                          local_47d = 0;
                        }
                        pfVar9 = local_4f8;
                        FUN_140499890(local_4f8,&local_480,local_4f0);
                        free(_Memory);
                        iVar7 = 0;
                        iVar8 = 1;
                        uVar5 = local_4b4;
                        goto LAB_14048a2c7;
                      }
LAB_140489c55:
                      pbVar15 = pbVar10 + 1;
                      *(byte **)(param_1 + 0xc0) = pbVar15;
                      bVar25 = *pbVar10;
                      pbVar10 = pbVar15;
                      bVar4 = bVar25;
                      if (bVar12 != 2) goto LAB_14048a1ba;
LAB_140489c70:
                      uVar19 = local_4d8;
                      bVar4 = bVar25;
                      if ((bVar21 != 2) || ((char)bVar25 < '\0')) goto LAB_14048a1ba;
                      if (pbVar10 < *(byte **)(param_1 + 200)) {
LAB_140489caf:
                        *(byte **)(param_1 + 0xc0) = pbVar10 + 1;
                        uVar5 = (uint)*pbVar10;
                      }
                      else {
                        if (*(int *)(param_1 + 0x30) != 0) {
                          FUN_14048bcd0(param_1);
                          pbVar10 = *(byte **)(param_1 + 0xc0);
                          goto LAB_140489caf;
                        }
                        uVar5 = 0;
                      }
                      if (((uint)bVar25 << 8 | uVar5) != (uint)uVar19) {
                        free(local_4f8);
                        free(_Memory);
                        lVar22 = *(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                        pcVar13 = "invalid decoded scanline length";
                        goto LAB_14048a124;
                      }
                      if ((_Memory == (void *)0x0) &&
                         (_Memory = malloc(uVar20), _Memory == (void *)0x0)) {
                        free(local_4f8);
                        goto LAB_14048a27a;
                      }
                      local_4b0 = 0;
                      pfVar9 = local_4f8;
                      local_4e0 = _Memory;
                      local_4a8 = uVar20;
                      do {
                        uVar24 = 0;
                        uVar20 = uVar19 & 0xffffffff;
                        do {
                          pbVar10 = *(byte **)(param_1 + 0xc0);
                          pbVar15 = *(byte **)(param_1 + 200);
                          if (pbVar15 <= pbVar10) {
                            if (*(int *)(param_1 + 0x30) != 0) {
                              iVar7 = (**(code **)(param_1 + 0x10))
                                                (*(undefined8 *)(param_1 + 0x28),pbVar1,
                                                 *(undefined4 *)(param_1 + 0x34));
                              *(int *)(param_1 + 0xb8) =
                                   *(int *)(param_1 + 0xb8) +
                                   (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                              if (iVar7 == 0) {
                                *(undefined4 *)(param_1 + 0x30) = 0;
                                *(undefined1 *)(param_1 + 0x38) = 0;
                                pbVar15 = local_4e8;
                              }
                              else {
                                pbVar15 = pbVar1 + iVar7;
                              }
                              *(byte **)(param_1 + 200) = pbVar15;
                              pfVar9 = local_4f8;
                              pbVar17 = local_4e8;
                              pbVar10 = pbVar1;
                              goto LAB_140489d93;
                            }
LAB_14048a188:
                            free(pfVar9);
                            free(local_4e0);
                            lVar22 = *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8);
                            pcVar13 = "corrupt";
                            goto LAB_14048a124;
                          }
                          pbVar17 = pbVar10 + 1;
LAB_140489d93:
                          *(byte **)(param_1 + 0xc0) = pbVar17;
                          bVar12 = *pbVar10;
                          uVar5 = (uint)bVar12;
                          iVar7 = (int)uVar24;
                          if (bVar12 < 0x81) {
                            if ((bVar12 == 0) || ((uint)uVar20 < uVar5)) goto LAB_14048a188;
                            lVar22 = 0;
                            do {
                              pbVar10 = *(byte **)(param_1 + 0xc0);
                              if (pbVar10 < *(byte **)(param_1 + 200)) {
                                *(byte **)(param_1 + 0xc0) = pbVar10 + 1;
                                bVar12 = *pbVar10;
                              }
                              else if (*(int *)(param_1 + 0x30) == 0) {
                                bVar12 = 0;
                              }
                              else {
                                iVar8 = (**(code **)(param_1 + 0x10))
                                                  (*(undefined8 *)(param_1 + 0x28),pbVar1,
                                                   *(undefined4 *)(param_1 + 0x34));
                                *(int *)(param_1 + 0xb8) =
                                     *(int *)(param_1 + 0xb8) +
                                     (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                                if (iVar8 == 0) {
                                  *(undefined4 *)(param_1 + 0x30) = 0;
                                  *(undefined1 *)(param_1 + 0x38) = 0;
                                  bVar12 = 0;
                                  pbVar10 = local_4e8;
                                }
                                else {
                                  bVar12 = *pbVar1;
                                  pbVar10 = pbVar1 + iVar8;
                                }
                                *(byte **)(param_1 + 200) = pbVar10;
                                *(byte **)(param_1 + 0xc0) = local_4e8;
                                pfVar9 = local_4f8;
                              }
                              *(byte *)((longlong)_Memory + lVar22 * 4 + (longlong)iVar7 * 4) =
                                   bVar12;
                              lVar22 = lVar22 + 1;
                            } while (uVar5 != (uint)lVar22);
                            uVar24 = (ulonglong)(iVar7 + (uint)lVar22);
                            uVar19 = local_4d8;
                          }
                          else {
                            if (pbVar17 < pbVar15) {
                              *(byte **)(param_1 + 0xc0) = pbVar17 + 1;
                              bVar21 = *pbVar17;
                            }
                            else if (*(int *)(param_1 + 0x30) == 0) {
                              bVar21 = 0;
                            }
                            else {
                              iVar8 = (**(code **)(param_1 + 0x10))
                                                (*(undefined8 *)(param_1 + 0x28),pbVar1,
                                                 *(undefined4 *)(param_1 + 0x34));
                              *(int *)(param_1 + 0xb8) =
                                   *(int *)(param_1 + 0xb8) +
                                   (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                              if (iVar8 == 0) {
                                *(undefined4 *)(param_1 + 0x30) = 0;
                                *(undefined1 *)(param_1 + 0x38) = 0;
                                bVar21 = 0;
                                pbVar10 = local_4e8;
                              }
                              else {
                                bVar21 = *pbVar1;
                                pbVar10 = pbVar1 + iVar8;
                              }
                              *(byte **)(param_1 + 200) = pbVar10;
                              *(byte **)(param_1 + 0xc0) = local_4e8;
                              pfVar9 = local_4f8;
                            }
                            if ((uint)uVar20 < (uVar5 & 0x7f)) goto LAB_14048a188;
                            bVar25 = (byte)(uVar5 & 0x7f);
                            if (bVar25 != 0) {
                              uVar24 = (ulonglong)iVar7;
                              if (3 < bVar25) {
                                uVar6 = uVar5 & 0x7c;
                                do {
                                  *(byte *)((longlong)_Memory + uVar24 * 4) = bVar21;
                                  *(byte *)((longlong)_Memory + uVar24 * 4 + 4) = bVar21;
                                  *(byte *)((longlong)_Memory + uVar24 * 4 + 8) = bVar21;
                                  *(byte *)((longlong)_Memory + uVar24 * 4 + 0xc) = bVar21;
                                  uVar24 = uVar24 + 4;
                                  uVar6 = uVar6 - 4;
                                } while (uVar6 != 0);
                              }
                              uVar5 = uVar5 & 3;
                              if ((bVar12 & 3) != 0) {
                                do {
                                  *(byte *)((longlong)_Memory + uVar24 * 4) = bVar21;
                                  uVar24 = uVar24 + 1;
                                  uVar5 = uVar5 - 1;
                                } while (uVar5 != 0);
                              }
                            }
                          }
                          uVar5 = (int)uVar19 - (int)uVar24;
                          uVar20 = (ulonglong)uVar5;
                        } while (uVar5 != 0 && (int)uVar24 <= (int)uVar19);
                        local_4b0 = local_4b0 + 1;
                        _Memory = (void *)((longlong)_Memory + 1);
                      } while (local_4b0 != 4);
                      uVar24 = 0;
                      pfVar9 = local_4d0;
                      lVar22 = local_4c0;
                      uVar20 = local_4f0;
                      uVar19 = local_4c8;
                      _Memory = local_4e0;
                      do {
                        bVar12 = *(byte *)((longlong)_Memory + uVar24 * 4 + 3);
                        if (bVar12 == 0) {
                          switch((int)uVar20) {
                          case 2:
                            pfVar9[1] = 1.0;
                          case 1:
                            *pfVar9 = 0.0;
                            lVar22 = local_4c0;
                            uVar20 = local_4f0;
                            uVar19 = local_4c8;
                            _Memory = local_4e0;
                            break;
                          case 4:
                            pfVar9[3] = 1.0;
                          case 3:
                            pfVar9[2] = 0.0;
                            pfVar9[0] = 0.0;
                            pfVar9[1] = 0.0;
                            lVar22 = local_4c0;
                            uVar20 = local_4f0;
                            uVar19 = local_4c8;
                            _Memory = local_4e0;
                          }
                        }
                        else {
                          dVar28 = ldexp(1.0,bVar12 - 0x88);
                          fVar26 = (float)dVar28;
                          uVar5 = (uint)*(byte *)((longlong)_Memory + uVar24 * 4);
                          if ((int)local_4f0 < 3) {
                            *pfVar9 = (fVar26 * (float)((uint)*(byte *)((longlong)_Memory +
                                                                       uVar24 * 4 + 2) +
                                                       *(byte *)((longlong)_Memory + uVar24 * 4 + 1)
                                                       + uVar5)) / 3.0;
                          }
                          else {
                            *pfVar9 = (float)uVar5 * fVar26;
                            pfVar9[1] = (float)*(byte *)((longlong)_Memory + uVar24 * 4 + 1) *
                                        fVar26;
                            pfVar9[2] = (float)*(byte *)((longlong)_Memory + uVar24 * 4 + 2) *
                                        fVar26;
                          }
                          uVar20 = local_4f0;
                          if (param_5 == 4) {
                            pfVar9[3] = 1.0;
                          }
                          else if (param_5 == 2) {
                            pfVar9[1] = 1.0;
                          }
                        }
                        uVar24 = uVar24 + 1;
                        pfVar9 = (float *)((longlong)pfVar9 + lVar22);
                      } while (uVar19 != uVar24);
                      uVar19 = local_490 + 1;
                      local_4d0 = (float *)((longlong)local_4d0 + local_4a0);
                      uVar20 = local_4a8;
                    } while (uVar19 != local_498);
                    free(_Memory);
                    pfVar9 = local_4f8;
                  }
                  goto LAB_14048a12d;
                }
LAB_14048a27a:
                lVar22 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                pcVar13 = "outofmem";
                goto LAB_14048a124;
              }
            }
            lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            pcVar13 = "too large";
            goto LAB_14048a124;
          }
        }
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pcVar13 = "unsupported data layout";
        goto LAB_14048a124;
      }
    }
    lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar13 = "unsupported format";
  }
  else {
    lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar13 = "not HDR";
  }
LAB_14048a124:
  *(char **)(lVar22 + 0x220) = pcVar13;
  pfVar9 = (float *)0x0;
LAB_14048a12d:
  if (DAT_1414ef3c0 != (local_70 ^ (ulonglong)auStack_518)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_70 ^ (ulonglong)auStack_518);
  }
  return pfVar9;
LAB_14048a2c7:
  pcVar2 = *(code **)(param_1 + 0x10);
  if (pcVar2 == (code *)0x0) {
    _Src = *(uint **)(param_1 + 0xc0);
    puVar16 = *(uint **)(param_1 + 200);
LAB_14048a33e:
    if (_Src + 1 <= puVar16) {
      local_47c = *_Src;
      *(uint **)(param_1 + 0xc0) = _Src + 1;
    }
  }
  else {
    _Src = *(uint **)(param_1 + 0xc0);
    puVar16 = *(uint **)(param_1 + 200);
    iVar18 = (int)puVar16 - (int)_Src;
    if (3 < iVar18) goto LAB_14048a33e;
    memcpy(&local_47c,_Src,(longlong)iVar18);
    (*pcVar2)(*(undefined8 *)(param_1 + 0x28),(longlong)&local_47c + (longlong)iVar18,4 - iVar18);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
    pfVar9 = local_4f8;
  }
  uVar20 = local_4d8;
  iVar23 = (int)local_4f0;
  iVar18 = (int)local_4d8 * iVar23 * iVar7;
  lVar22 = (longlong)(iVar8 * iVar23);
  if (local_47c._3_1_ == 0) {
    pfVar11 = pfVar9;
    switch(iVar23) {
    case 2:
      pfVar9[(longlong)iVar18 + lVar22 + 1] = 1.0;
    case 1:
      pfVar9[iVar18 + lVar22] = 0.0;
    default:
switchD_14048a3ef_default:
      iVar8 = iVar8 + 1;
      pfVar9 = pfVar11;
      break;
    case 4:
      pfVar9[(longlong)iVar18 + lVar22 + 3] = 1.0;
    case 3:
      pfVar9[(longlong)iVar18 + lVar22 + 2] = 0.0;
      (pfVar9 + iVar18 + lVar22)[0] = 0.0;
      (pfVar9 + iVar18 + lVar22)[1] = 0.0;
      iVar8 = iVar8 + 1;
    }
  }
  else {
    dVar28 = ldexp(1.0,local_47c._3_1_ - 0x88);
    fVar26 = (float)dVar28;
    if ((int)local_4f0 < 3) {
      fVar27 = (fVar26 * (float)((local_47c >> 0x10 & 0xff) +
                                (local_47c >> 8 & 0xff) + (local_47c & 0xff))) / 3.0;
    }
    else {
      fVar27 = (float)(local_47c & 0xff) * fVar26;
      *(ulonglong *)(pfVar9 + (longlong)iVar18 + lVar22 + 1) =
           CONCAT44(fVar26 * (float)(local_47c >> 0x10 & 0xff),
                    fVar26 * (float)(local_47c._1_2_ & 0xff));
    }
    pfVar9[iVar18 + lVar22] = fVar27;
    if (param_5 != 4) {
      pfVar11 = local_4f8;
      if (param_5 == 2) {
        pfVar9[(longlong)iVar18 + lVar22 + 1] = 1.0;
      }
      goto switchD_14048a3ef_default;
    }
    pfVar9[(longlong)iVar18 + lVar22 + 3] = 1.0;
    iVar8 = iVar8 + 1;
    pfVar9 = local_4f8;
  }
  while ((int)uVar20 <= iVar8) {
    iVar7 = iVar7 + 1;
LAB_14048a2b3:
    iVar8 = 0;
    if ((int)uVar5 <= iVar7) goto LAB_14048a12d;
  }
  goto LAB_14048a2c7;
}

