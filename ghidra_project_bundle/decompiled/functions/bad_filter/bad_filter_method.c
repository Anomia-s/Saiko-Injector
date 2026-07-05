/**
 * Function: bad_filter_method
 * Address:  14048bd30
 * Signature: undefined bad_filter_method(void)
 * Body size: 6711 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bad_filter_method(undefined8 *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  longlong *plVar6;
  byte bVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  void *pvVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  byte *pbVar19;
  char *pcVar20;
  uint7 uVar23;
  int *piVar21;
  byte *pbVar22;
  void *_Src;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  size_t _Size;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 auStack_1578 [32];
  uint local_1558;
  uint local_1550;
  int local_1548;
  uint local_1540;
  uint local_152c;
  undefined8 local_1528;
  uint local_151c;
  ulonglong local_1518;
  ulonglong local_1510;
  uint local_1508;
  int local_1504;
  size_t local_1500;
  uint local_14f4;
  uint local_14f0;
  int local_14ec;
  longlong *local_14e8;
  ulonglong local_14e0;
  undefined8 local_14d8;
  int local_14cc;
  uint local_14c8;
  uint local_14c4;
  void *local_14c0;
  ulonglong local_14b8;
  longlong local_14b0;
  longlong local_14a8;
  longlong local_14a0;
  ulonglong local_1498;
  int local_148c;
  int local_1488;
  int local_1484;
  longlong local_1480;
  longlong local_1478;
  longlong local_1470;
  undefined2 local_1462 [3];
  undefined2 local_145c;
  undefined1 local_145a;
  byte abStack_1458 [1032];
  longlong local_1050;
  longlong local_1048;
  int local_1030;
  void *local_1028;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1578;
  local_145a = 0;
  local_145c = 0;
  puVar5 = (uint *)*param_1;
  puVar1 = puVar5 + 0xe;
  puVar2 = (uint *)((longlong)puVar5 + 0x39);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar18 = *(uint **)(puVar5 + 0x30);
  puVar16 = *(uint **)(puVar5 + 0x32);
  if (puVar18 < puVar16) {
    puVar17 = (uint *)((longlong)puVar18 + 1);
    *(uint **)(puVar5 + 0x30) = puVar17;
    bVar7 = (byte)*puVar18;
joined_r0x00014048be17:
    if (bVar7 == 0x89) {
      if (puVar17 < puVar16) {
        puVar18 = (uint *)((longlong)puVar17 + 1);
        *(uint **)(puVar5 + 0x30) = puVar18;
        bVar7 = (byte)*puVar17;
      }
      else {
        if (puVar5[0xc] == 0) goto LAB_14048c1f4;
        iVar10 = (**(code **)(puVar5 + 4))(*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
        puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
        if (iVar10 == 0) {
          puVar5[0xc] = 0;
          *(undefined1 *)(puVar5 + 0xe) = 0;
          bVar7 = 0;
          puVar16 = puVar2;
        }
        else {
          bVar7 = (byte)*puVar1;
          puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
        }
        *(uint **)(puVar5 + 0x32) = puVar16;
        *(uint **)(puVar5 + 0x30) = puVar2;
        puVar18 = puVar2;
      }
      if (bVar7 == 0x50) {
        if (puVar18 < puVar16) {
          puVar17 = (uint *)((longlong)puVar18 + 1);
          *(uint **)(puVar5 + 0x30) = puVar17;
          bVar7 = (byte)*puVar18;
        }
        else {
          if (puVar5[0xc] == 0) goto LAB_14048c1f4;
          iVar10 = (**(code **)(puVar5 + 4))(*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
          puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
          if (iVar10 == 0) {
            puVar5[0xc] = 0;
            *(undefined1 *)(puVar5 + 0xe) = 0;
            bVar7 = 0;
            puVar16 = puVar2;
          }
          else {
            bVar7 = (byte)*puVar1;
            puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
          }
          *(uint **)(puVar5 + 0x32) = puVar16;
          *(uint **)(puVar5 + 0x30) = puVar2;
          puVar17 = puVar2;
        }
        if (bVar7 == 0x4e) {
          if (puVar17 < puVar16) {
            puVar18 = (uint *)((longlong)puVar17 + 1);
            *(uint **)(puVar5 + 0x30) = puVar18;
            bVar7 = (byte)*puVar17;
          }
          else {
            if (puVar5[0xc] == 0) goto LAB_14048c1f4;
            iVar10 = (**(code **)(puVar5 + 4))(*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
            puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
            if (iVar10 == 0) {
              puVar5[0xc] = 0;
              *(undefined1 *)(puVar5 + 0xe) = 0;
              bVar7 = 0;
              puVar16 = puVar2;
            }
            else {
              bVar7 = (byte)*puVar1;
              puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
            }
            *(uint **)(puVar5 + 0x32) = puVar16;
            *(uint **)(puVar5 + 0x30) = puVar2;
            puVar18 = puVar2;
          }
          if (bVar7 == 0x47) {
            if (puVar18 < puVar16) {
              *(uint **)(puVar5 + 0x30) = (uint *)((longlong)puVar18 + 1);
              bVar7 = (byte)*puVar18;
              puVar18 = (uint *)((longlong)puVar18 + 1);
            }
            else {
              if (puVar5[0xc] == 0) goto LAB_14048c1f4;
              iVar10 = (**(code **)(puVar5 + 4))(*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
              puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
              if (iVar10 == 0) {
                puVar5[0xc] = 0;
                *(undefined1 *)(puVar5 + 0xe) = 0;
                bVar7 = 0;
                puVar16 = puVar2;
              }
              else {
                bVar7 = (byte)*puVar1;
                puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
              }
              *(uint **)(puVar5 + 0x32) = puVar16;
              *(uint **)(puVar5 + 0x30) = puVar2;
              puVar18 = puVar2;
            }
            if (bVar7 == 0xd) {
              if (puVar18 < puVar16) {
                *(uint **)(puVar5 + 0x30) = (uint *)((longlong)puVar18 + 1);
                bVar7 = (byte)*puVar18;
                puVar18 = (uint *)((longlong)puVar18 + 1);
              }
              else {
                if (puVar5[0xc] == 0) goto LAB_14048c1f4;
                iVar10 = (**(code **)(puVar5 + 4))(*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
                puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
                if (iVar10 == 0) {
                  puVar5[0xc] = 0;
                  *(undefined1 *)(puVar5 + 0xe) = 0;
                  bVar7 = 0;
                  puVar16 = puVar2;
                }
                else {
                  bVar7 = (byte)*puVar1;
                  puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
                }
                *(uint **)(puVar5 + 0x32) = puVar16;
                *(uint **)(puVar5 + 0x30) = puVar2;
                puVar18 = puVar2;
              }
              if (bVar7 == 10) {
                if (puVar18 < puVar16) {
                  *(uint **)(puVar5 + 0x30) = (uint *)((longlong)puVar18 + 1);
                  bVar7 = (byte)*puVar18;
                  puVar18 = (uint *)((longlong)puVar18 + 1);
                }
                else {
                  if (puVar5[0xc] == 0) goto LAB_14048c1f4;
                  iVar10 = (**(code **)(puVar5 + 4))
                                     (*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
                  puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
                  if (iVar10 == 0) {
                    puVar5[0xc] = 0;
                    *(undefined1 *)(puVar5 + 0xe) = 0;
                    bVar7 = 0;
                    puVar16 = puVar2;
                  }
                  else {
                    bVar7 = (byte)*puVar1;
                    puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
                  }
                  *(uint **)(puVar5 + 0x32) = puVar16;
                  *(uint **)(puVar5 + 0x30) = puVar2;
                  puVar18 = puVar2;
                }
                if (bVar7 == 0x1a) {
                  if (puVar18 < puVar16) {
                    *(byte **)(puVar5 + 0x30) = (byte *)((longlong)puVar18 + 1);
                    bVar7 = (byte)*puVar18;
                  }
                  else {
                    if (puVar5[0xc] == 0) goto LAB_14048c1f4;
                    iVar10 = (**(code **)(puVar5 + 4))
                                       (*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
                    puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
                    if (iVar10 == 0) {
                      puVar5[0xc] = 0;
                      *(undefined1 *)(puVar5 + 0xe) = 0;
                      bVar7 = 0;
                      puVar18 = puVar2;
                    }
                    else {
                      bVar7 = (byte)*puVar1;
                      puVar18 = (uint *)((longlong)iVar10 + (longlong)puVar1);
                    }
                    *(uint **)(puVar5 + 0x32) = puVar18;
                    *(uint **)(puVar5 + 0x30) = puVar2;
                  }
                  if (bVar7 == 10) {
                    uVar14 = 1;
                    if (param_2 == 1) goto LAB_14048c217;
                    local_14e8 = param_1 + 1;
                    local_1528 = CONCAT44(local_1528._4_4_,1);
                    local_14b8 = 0;
                    local_14f0 = 0;
                    local_14ec = 0;
                    local_14e0 = 0;
                    local_1500 = 0;
                    local_1518 = 0;
                    local_14d8 = 0;
                    local_152c = 0;
LAB_14048c25e:
                    iVar10 = FUN_14048fe40(puVar5);
                    iVar10 = iVar10 * 0x10000;
                    local_14b0 = FUN_14048fe40(puVar5);
                    local_1510 = (ulonglong)(uint)((int)local_14b0 + iVar10);
                    iVar11 = FUN_14048fe40(puVar5);
                    local_1498 = CONCAT44(local_1498._4_4_,iVar11);
                    uVar12 = FUN_14048fe40(puVar5);
                    plVar6 = local_14e8;
                    uVar29 = iVar11 << 0x10 | uVar12;
                    uVar13 = (uint)local_1510;
                    if ((int)uVar29 < 0x49484452) {
                      if (uVar29 == 0x43674249) {
                        local_14ec = 1;
                        if (uVar13 == 0) goto LAB_14048c24e;
                        if (iVar10 < 0) {
LAB_14048c977:
                          *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(puVar5 + 0x32);
                          goto LAB_14048c24e;
                        }
                        if (*(longlong *)(puVar5 + 4) == 0) {
                          lVar28 = *(longlong *)(puVar5 + 0x30);
                        }
                        else {
                          lVar28 = *(longlong *)(puVar5 + 0x30);
                          uVar14 = *(undefined8 *)(puVar5 + 0x32);
                          iVar10 = (int)uVar14 - (int)lVar28;
joined_r0x00014048c76a:
                          if (iVar10 < (int)uVar13) {
                            *(undefined8 *)(puVar5 + 0x30) = uVar14;
                            (**(code **)(puVar5 + 6))(*(undefined8 *)(puVar5 + 10));
                            goto LAB_14048c24e;
                          }
                        }
LAB_14048caa2:
                        *(ulonglong *)(puVar5 + 0x30) = (local_1510 & 0xffffffff) + lVar28;
                        goto LAB_14048c24e;
                      }
                      if (uVar29 == 0x49444154) {
                        if ((int)local_1528 == 0) {
                          if (((char)local_152c != '\0') && ((uint)local_14e0 == 0)) {
                            lVar28 = *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8);
                            pcVar20 = "no PLTE";
                            goto LAB_14048c20e;
                          }
                          if (param_2 != 2) {
                            if (uVar13 < 0x40000001) {
                              uVar12 = uVar13 + (int)local_1518;
                              uVar14 = 0;
                              if ((int)local_1518 <= (int)uVar12) {
                                if ((uint)local_1500 < uVar12) {
                                  uVar27 = 0x1000;
                                  if (0x1000 < uVar13) {
                                    uVar27 = local_1510 & 0xffffffff;
                                  }
                                  if ((uint)local_1500 != 0) {
                                    uVar27 = local_1500 & 0xffffffff;
                                  }
                                  do {
                                    local_1500 = uVar27;
                                    uVar27 = (ulonglong)((uint)local_1500 * 2);
                                  } while ((uint)local_1500 < uVar12);
                                  pvVar15 = realloc((void *)*local_14e8,local_1500);
                                  if (pvVar15 == (void *)0x0) goto LAB_14048d57b;
                                  *plVar6 = (longlong)pvVar15;
                                }
                                else {
                                  pvVar15 = (void *)*local_14e8;
                                }
                                uVar27 = local_1510;
                                pvVar15 = (void *)((local_1518 & 0xffffffff) + (longlong)pvVar15);
                                iVar10 = (int)local_1510;
                                if (*(longlong *)(puVar5 + 4) == 0) {
                                  _Src = *(void **)(puVar5 + 0x30);
                                  uVar25 = *(ulonglong *)(puVar5 + 0x32);
LAB_14048c93b:
                                  uVar27 = uVar27 & 0xffffffff;
                                  if ((longlong)_Src + uVar27 <= uVar25) {
                                    memcpy(pvVar15,_Src,uVar27);
                                    *(ulonglong *)(puVar5 + 0x30) =
                                         *(longlong *)(puVar5 + 0x30) + uVar27;
                                    local_1528 = local_1528 & 0xffffffff00000000;
                                    local_1518 = (ulonglong)uVar12;
                                    goto LAB_14048c24e;
                                  }
                                }
                                else {
                                  _Src = *(void **)(puVar5 + 0x30);
                                  uVar25 = *(ulonglong *)(puVar5 + 0x32);
                                  iVar11 = (int)uVar25 - (int)_Src;
                                  iVar26 = iVar10 - iVar11;
                                  local_1510 = CONCAT44(local_1510._4_4_,iVar26);
                                  if (iVar26 == 0 || iVar10 < iVar11) goto LAB_14048c93b;
                                  local_1528 = (ulonglong)iVar11;
                                  memcpy(pvVar15,_Src,local_1528);
                                  iVar10 = (int)local_1510;
                                  iVar11 = (**(code **)(puVar5 + 4))
                                                     (*(undefined8 *)(puVar5 + 10),
                                                      (longlong)pvVar15 + local_1528,
                                                      local_1510 & 0xffffffff);
                                  local_1528 = local_1528 & 0xffffffff00000000;
                                  *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(puVar5 + 0x32);
                                  local_1518 = (ulonglong)uVar12;
                                  if (iVar11 == iVar10) goto LAB_14048c24e;
                                }
                                uVar14 = 0;
                                *(char **)(*(longlong *)
                                            ((longlong)ThreadLocalStoragePointer +
                                            (ulonglong)_tls_index * 8) + 0x220) = "outofdata";
                              }
                              goto LAB_14048c217;
                            }
                            lVar28 = *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8);
                            pcVar20 = "IDAT size limit";
                            goto LAB_14048c20e;
                          }
                          if ((char)local_152c != '\0') {
                            puVar5[2] = local_152c & 0xff;
                          }
                          uVar14 = 1;
                          goto LAB_14048c217;
                        }
                      }
                      else {
                        if (uVar29 != 0x49454e44) goto LAB_14048c77e;
                        if ((int)local_1528 == 0) {
                          uVar14 = 1;
                          if (param_2 != 0) goto LAB_14048c217;
                          lVar28 = *local_14e8;
                          if (lVar28 == 0) {
                            lVar28 = *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8);
                            pcVar20 = "no IDAT";
                            goto LAB_14048c20e;
                          }
                          iVar10 = puVar5[2] * puVar5[1] *
                                   (*(int *)(param_1 + 4) * *puVar5 + 7 >> 3) + puVar5[1];
                          pvVar15 = malloc((longlong)iVar10);
                          if (pvVar15 != (void *)0x0) {
                            local_1048 = (int)local_1518 + lVar28;
                            local_1558 = (uint)(local_14ec == 0);
                            local_1050 = lVar28;
                            iVar10 = output_buffer_limit(&local_1050,pvVar15,iVar10,1);
                            if (iVar10 != 0) {
                              local_1504 = local_1030;
                              param_1[2] = local_1028;
                              if (local_1028 == (void *)0x0) goto LAB_14048c215;
                              local_1504 = local_1030 - (int)local_1028;
                              free((void *)param_1[1]);
                              param_1[1] = 0;
                              uVar13 = puVar5[2] + 1;
                              uVar12 = puVar5[2];
                              if ((char)local_14d8 != '\0') {
                                uVar12 = uVar13;
                              }
                              local_14c8 = uVar12;
                              if (param_3 != 3) {
                                local_14c8 = uVar13;
                              }
                              if ((char)local_152c != '\0') {
                                local_14c8 = uVar12;
                              }
                              if (param_3 != uVar13) {
                                local_14c8 = uVar12;
                              }
                              puVar5[3] = local_14c8;
                              local_14cc = *(int *)(param_1 + 4);
                              local_151c = local_14c8 << (local_14cc == 0x10);
                              local_14a8 = param_1[2];
                              uVar13 = *(uint *)*param_1;
                              uVar12 = ((uint *)*param_1)[1];
                              if ((int)local_14b8 == 0) {
                                local_1540 = local_14f0;
                                local_1558 = uVar13;
                                local_1550 = uVar12;
                                local_1548 = local_14cc;
                                iVar10 = not_enough_pixels(param_1,local_14a8,local_1504,local_14c8)
                                ;
                                if (iVar10 == 0) goto LAB_14048c215;
                                if ((char)local_14d8 == '\0') goto LAB_14048d4b4;
                                goto LAB_14048d47b;
                              }
                              if ((((int)(uVar13 | uVar12) < 0) ||
                                  ((((uVar12 != 0 &&
                                     ((int)(((ulonglong)(uint)(0 << (local_14cc == 0x10)) << 0x20 |
                                            0x7fffffff) / (ulonglong)uVar12) < (int)uVar13)) ||
                                    (uVar13 = uVar13 * uVar12, (int)(uVar13 | local_151c) < 0)) ||
                                   ((local_151c != 0 &&
                                    ((int)(0x7fffffff / (ulonglong)local_151c) < (int)uVar13))))))
                                 || (local_14c0 = malloc((longlong)(int)(uVar13 * local_151c)),
                                    local_14c0 == (void *)0x0)) goto LAB_14048d57b;
                              _Size = (size_t)(int)local_151c;
                              local_1470 = _Size * 2;
                              local_14a0 = 0;
                              goto LAB_14048d161;
                            }
                            free(local_1028);
                          }
                          param_1[2] = 0;
                          goto LAB_14048c215;
                        }
                      }
LAB_14048ccd1:
                      lVar28 = *(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                      pcVar20 = "first not IHDR";
                      goto LAB_14048c20e;
                    }
                    if (uVar29 != 0x49484452) {
                      uVar24 = (uint)local_14b0;
                      if (uVar29 == 0x504c5445) {
                        if ((int)local_1528 != 0) goto LAB_14048ccd1;
                        if (uVar13 < 0x301) {
                          uVar12 = uVar24 * 0xaaab >> 0x11;
                          if (uVar12 * 3 == uVar13) {
                            local_14e0 = (ulonglong)uVar12;
                            if (2 < uVar24) {
                              local_1528 = (ulonglong)local_1528._4_4_ << 0x20;
                              puVar18 = *(uint **)(puVar5 + 0x30);
                              puVar16 = *(uint **)(puVar5 + 0x32);
                              uVar27 = 0;
                              do {
                                if (puVar18 < puVar16) {
                                  *(uint **)(puVar5 + 0x30) = (uint *)((longlong)puVar18 + 1);
                                  bVar7 = (byte)*puVar18;
                                  puVar17 = (uint *)((longlong)puVar18 + 1);
                                }
                                else if (puVar5[0xc] == 0) {
                                  bVar7 = 0;
                                  puVar17 = puVar18;
                                }
                                else {
                                  iVar10 = (**(code **)(puVar5 + 4))
                                                     (*(undefined8 *)(puVar5 + 10),puVar1,
                                                      puVar5[0xd]);
                                  puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
                                  if (iVar10 == 0) {
                                    puVar5[0xc] = 0;
                                    *(undefined1 *)(puVar5 + 0xe) = 0;
                                    bVar7 = 0;
                                    puVar16 = puVar2;
                                  }
                                  else {
                                    bVar7 = (byte)*puVar1;
                                    puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
                                  }
                                  *(uint **)(puVar5 + 0x32) = puVar16;
                                  *(uint **)(puVar5 + 0x30) = puVar2;
                                  puVar17 = puVar2;
                                }
                                abStack_1458[uVar27 * 4] = bVar7;
                                if (puVar17 < puVar16) {
                                  *(uint **)(puVar5 + 0x30) = (uint *)((longlong)puVar17 + 1);
                                  bVar7 = (byte)*puVar17;
                                  puVar17 = (uint *)((longlong)puVar17 + 1);
                                }
                                else if (puVar5[0xc] == 0) {
                                  bVar7 = 0;
                                }
                                else {
                                  iVar10 = (**(code **)(puVar5 + 4))
                                                     (*(undefined8 *)(puVar5 + 10),puVar1,
                                                      puVar5[0xd]);
                                  puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
                                  if (iVar10 == 0) {
                                    puVar5[0xc] = 0;
                                    *(undefined1 *)(puVar5 + 0xe) = 0;
                                    bVar7 = 0;
                                    puVar16 = puVar2;
                                  }
                                  else {
                                    bVar7 = (byte)*puVar1;
                                    puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
                                  }
                                  *(uint **)(puVar5 + 0x32) = puVar16;
                                  *(uint **)(puVar5 + 0x30) = puVar2;
                                  puVar17 = puVar2;
                                }
                                abStack_1458[uVar27 * 4 + 1] = bVar7;
                                if (puVar17 < puVar16) {
                                  puVar18 = (uint *)((longlong)puVar17 + 1);
                                  *(uint **)(puVar5 + 0x30) = puVar18;
                                  bVar7 = (byte)*puVar17;
                                }
                                else if (puVar5[0xc] == 0) {
                                  bVar7 = 0;
                                  puVar18 = puVar17;
                                }
                                else {
                                  iVar10 = (**(code **)(puVar5 + 4))
                                                     (*(undefined8 *)(puVar5 + 10),puVar1,
                                                      puVar5[0xd]);
                                  puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
                                  if (iVar10 == 0) {
                                    puVar5[0xc] = 0;
                                    *(undefined1 *)(puVar5 + 0xe) = 0;
                                    bVar7 = 0;
                                    puVar16 = puVar2;
                                  }
                                  else {
                                    bVar7 = (byte)*puVar1;
                                    puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
                                  }
                                  *(uint **)(puVar5 + 0x32) = puVar16;
                                  *(uint **)(puVar5 + 0x30) = puVar2;
                                  puVar18 = puVar2;
                                }
                                abStack_1458[uVar27 * 4 + 2] = bVar7;
                                abStack_1458[uVar27 * 4 + 3] = 0xff;
                                uVar27 = uVar27 + 1;
                              } while (uVar12 != uVar27);
                              goto LAB_14048c24e;
                            }
                            goto LAB_14048c246;
                          }
                        }
                        lVar28 = *(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                        pcVar20 = "invalid PLTE";
                        goto LAB_14048c20e;
                      }
                      if (uVar29 == 0x74524e53) {
                        if ((int)local_1528 != 0) goto LAB_14048ccd1;
                        if (*local_14e8 != 0) {
                          lVar28 = *(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    );
                          pcVar20 = "tRNS after IDAT";
                          goto LAB_14048c20e;
                        }
                        if ((char)local_152c == '\0') {
                          uVar12 = puVar5[2];
                          if ((uVar12 & 1) == 0) {
                            lVar28 = *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8);
                            pcVar20 = "tRNS with alpha";
                            goto LAB_14048c20e;
                          }
                          if (uVar12 * 2 != uVar13) {
LAB_14048cddb:
                            lVar28 = *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8);
                            pcVar20 = "bad tRNS len";
                            goto LAB_14048c20e;
                          }
                          if (param_2 == 2) {
                            puVar5[2] = uVar12 + 1;
                            uVar14 = 1;
                            goto LAB_14048c217;
                          }
                          uVar23 = (uint7)(uint3)(uVar12 * 2 >> 8);
                          if (*(int *)(param_1 + 4) == 0x10) {
                            local_14d8 = CONCAT71(uVar23,1);
                            if (0 < (int)uVar12) {
                              uVar27 = 0;
                              do {
                                uVar9 = FUN_14048fe40(puVar5);
                                local_1462[uVar27] = uVar9;
                                if ((longlong)(int)puVar5[2] <= (longlong)(uVar27 + 1)) break;
                                bVar31 = uVar27 < 2;
                                uVar27 = uVar27 + 1;
                              } while (bVar31);
                            }
                          }
                          else {
                            local_14d8 = CONCAT71(uVar23,1);
                            if (0 < (int)uVar12) {
                              uVar27 = 0;
                              do {
                                cVar8 = FUN_14048fe40(puVar5);
                                *(char *)((longlong)&local_145c + uVar27) =
                                     (&DAT_140e1a6c8)[*(int *)(param_1 + 4)] * cVar8;
                                if ((longlong)(int)puVar5[2] <= (longlong)(uVar27 + 1)) break;
                                bVar31 = uVar27 < 2;
                                uVar27 = uVar27 + 1;
                              } while (bVar31);
                            }
                          }
                          local_1528 = local_1528 & 0xffffffff00000000;
                          local_152c = 0;
                        }
                        else {
                          if (param_2 == 2) {
                            puVar5[2] = 4;
                            uVar14 = 1;
                            goto LAB_14048c217;
                          }
                          if ((uint)local_14e0 == 0) {
                            lVar28 = *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8);
                            pcVar20 = "tRNS before PLTE";
                            goto LAB_14048c20e;
                          }
                          if ((uint)local_14e0 < uVar13) goto LAB_14048cddb;
                          local_152c = (uint)CONCAT71((int7)((ulonglong)local_14e8 >> 8),4);
                          if (uVar13 == 0) goto LAB_14048c246;
                          local_1528 = (ulonglong)local_1528._4_4_ << 0x20;
                          puVar18 = *(uint **)(puVar5 + 0x32);
                          uVar27 = 0;
                          puVar16 = *(uint **)(puVar5 + 0x30);
                          do {
                            if (puVar16 < puVar18) {
                              puVar17 = (uint *)((longlong)puVar16 + 1);
                              *(uint **)(puVar5 + 0x30) = puVar17;
                              bVar7 = (byte)*puVar16;
                            }
                            else if (puVar5[0xc] == 0) {
                              bVar7 = 0;
                              puVar17 = puVar16;
                            }
                            else {
                              iVar11 = (**(code **)(puVar5 + 4))
                                                 (*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
                              puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
                              if (iVar11 == 0) {
                                puVar5[0xc] = 0;
                                *(undefined1 *)(puVar5 + 0xe) = 0;
                                bVar7 = 0;
                                puVar18 = puVar2;
                              }
                              else {
                                bVar7 = (byte)*puVar1;
                                puVar18 = (uint *)((longlong)iVar11 + (longlong)puVar1);
                              }
                              *(uint **)(puVar5 + 0x32) = puVar18;
                              *(uint **)(puVar5 + 0x30) = puVar2;
                              puVar17 = puVar2;
                            }
                            abStack_1458[uVar27 * 4 + 3] = bVar7;
                            uVar27 = uVar27 + 1;
                            puVar16 = puVar17;
                          } while (uVar24 + iVar10 != uVar27);
                        }
                      }
                      else {
LAB_14048c77e:
                        if ((int)local_1528 != 0) goto LAB_14048ccd1;
                        if ((local_1498 & 0x2000) == 0) {
                          s__XXXX_PNG_chunk_not_known_141503f0f[1] = (char)(local_1498 >> 8);
                          pcVar20 = s__XXXX_PNG_chunk_not_known_141503f0f + 1;
                          s__XXXX_PNG_chunk_not_known_141503f0f[2] = (char)local_1498;
                          s__XXXX_PNG_chunk_not_known_141503f0f[3] = (char)(uVar12 >> 8);
                          s__XXXX_PNG_chunk_not_known_141503f0f[4] = (char)uVar12;
                          lVar28 = *(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    );
                          goto LAB_14048c20e;
                        }
                        if (uVar13 != 0) {
                          if (iVar10 < 0) {
                            local_1528 = (ulonglong)local_1528._4_4_ << 0x20;
                            goto LAB_14048c977;
                          }
                          local_1528 = (ulonglong)local_1528._4_4_ << 0x20;
                          if (*(longlong *)(puVar5 + 4) != 0) {
                            lVar28 = *(longlong *)(puVar5 + 0x30);
                            uVar14 = *(undefined8 *)(puVar5 + 0x32);
                            iVar10 = (int)uVar14 - (int)lVar28;
                            goto joined_r0x00014048c76a;
                          }
                          lVar28 = *(longlong *)(puVar5 + 0x30);
                          goto LAB_14048caa2;
                        }
LAB_14048c246:
                        local_1528 = local_1528 & 0xffffffff00000000;
                      }
LAB_14048c24e:
                      FUN_14048fe40(puVar5);
                      FUN_14048fe40(puVar5);
                      goto LAB_14048c25e;
                    }
                    if ((int)local_1528 == 0) {
                      lVar28 = *(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                      pcVar20 = "multiple IHDR";
                      goto LAB_14048c20e;
                    }
                    if (uVar13 != 0xd) {
                      lVar28 = *(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                      pcVar20 = "bad IHDR len";
                      goto LAB_14048c20e;
                    }
                    iVar10 = FUN_14048fe40(puVar5);
                    uVar13 = FUN_14048fe40(puVar5);
                    *puVar5 = uVar13 | iVar10 << 0x10;
                    iVar10 = FUN_14048fe40(puVar5);
                    uVar13 = FUN_14048fe40(puVar5);
                    uVar13 = uVar13 | iVar10 << 0x10;
                    puVar5[1] = uVar13;
                    if ((uVar13 < 0x1000001) && (*puVar5 < 0x1000001)) {
                      puVar18 = *(uint **)(puVar5 + 0x30);
                      if (puVar18 < *(uint **)(puVar5 + 0x32)) {
                        puVar16 = (uint *)((longlong)puVar18 + 1);
LAB_14048c9a5:
                        *(uint **)(puVar5 + 0x30) = puVar16;
                        bVar7 = (byte)*puVar18;
                        *(uint *)(param_1 + 4) = (uint)bVar7;
                        if ((bVar7 < 0x11) && ((0x10116U >> (bVar7 & 0x1f) & 1) != 0)) {
                          puVar18 = *(uint **)(puVar5 + 0x30);
                          puVar16 = *(uint **)(puVar5 + 0x32);
                          if (puVar16 <= puVar18) {
                            if (puVar5[0xc] != 0) {
                              iVar10 = (**(code **)(puVar5 + 4))
                                                 (*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
                              puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
                              if (iVar10 == 0) {
                                puVar5[0xc] = 0;
                                *(undefined1 *)(puVar5 + 0xe) = 0;
                                puVar16 = puVar2;
                              }
                              else {
                                puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
                              }
                              *(uint **)(puVar5 + 0x32) = puVar16;
                              puVar17 = puVar2;
                              puVar18 = puVar1;
                              goto LAB_14048cacc;
                            }
                            bVar7 = 0;
                            uVar13 = 0;
                            goto LAB_14048cb0f;
                          }
                          puVar17 = (uint *)((longlong)puVar18 + 1);
LAB_14048cacc:
                          *(uint **)(puVar5 + 0x30) = puVar17;
                          bVar7 = (byte)*puVar18;
                          uVar13 = (uint)bVar7;
                          if (6 < uVar13) {
LAB_14048ccaa:
                            lVar28 = *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8);
                            pcVar20 = "bad ctype";
                            goto LAB_14048c20e;
                          }
                          if (bVar7 == 3) {
                            if (*(int *)(param_1 + 4) == 0x10) goto LAB_14048ccaa;
                            uVar13 = 3;
                            bVar7 = 3;
                            local_152c = (uint)CONCAT71((int7)((ulonglong)puVar18 >> 8),3);
                            puVar18 = puVar17;
                          }
                          else {
                            puVar18 = puVar17;
                            if ((bVar7 & 1) != 0) goto LAB_14048ccaa;
                          }
LAB_14048cb0f:
                          if (puVar18 < puVar16) {
LAB_14048cb29:
                            puVar17 = (uint *)((longlong)puVar18 + 1);
                            *(uint **)(puVar5 + 0x30) = puVar17;
                            if ((byte)*puVar18 != 0) {
                              lVar28 = *(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8);
                              pcVar20 = "bad comp method";
                              goto LAB_14048c20e;
                            }
                            puVar16 = *(uint **)(puVar5 + 0x32);
                          }
                          else {
                            puVar17 = puVar18;
                            if (puVar5[0xc] != 0) {
                              FUN_14048bcd0(puVar5);
                              puVar18 = *(uint **)(puVar5 + 0x30);
                              goto LAB_14048cb29;
                            }
                          }
                          if (puVar17 < puVar16) {
LAB_14048cb60:
                            puVar18 = (uint *)((longlong)puVar17 + 1);
                            *(uint **)(puVar5 + 0x30) = puVar18;
                            if ((byte)*puVar17 != 0) {
                              lVar28 = *(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8);
                              pcVar20 = "bad filter method";
                              goto LAB_14048c20e;
                            }
                            puVar16 = *(uint **)(puVar5 + 0x32);
                          }
                          else {
                            puVar18 = puVar17;
                            if (puVar5[0xc] != 0) {
                              FUN_14048bcd0(puVar5);
                              puVar17 = *(uint **)(puVar5 + 0x30);
                              goto LAB_14048cb60;
                            }
                          }
                          if (puVar18 < puVar16) {
LAB_14048cb9b:
                            *(byte **)(puVar5 + 0x30) = (byte *)((longlong)puVar18 + 1);
                            if (1 < (byte)*puVar18) {
                              lVar28 = *(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8);
                              pcVar20 = "bad interlace method";
                              goto LAB_14048c20e;
                            }
                            uVar12 = *puVar5;
                            uVar25 = (ulonglong)(byte)*puVar18;
                            uVar27 = local_14b8;
                          }
                          else {
                            if (puVar5[0xc] != 0) {
                              FUN_14048bcd0(puVar5);
                              puVar18 = *(uint **)(puVar5 + 0x30);
                              goto LAB_14048cb9b;
                            }
                            uVar12 = *puVar5;
                            uVar25 = 0;
                            uVar27 = local_14b8;
                          }
                          local_14b8 = uVar25;
                          if ((uVar12 == 0) || (puVar5[1] == 0)) {
                            lVar28 = *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8);
                            pcVar20 = "0-pixel image";
                            local_14b8 = uVar27;
                            goto LAB_14048c20e;
                          }
                          if ((char)local_152c == '\0') {
                            uVar29 = (3 < bVar7) + 1 + (uVar13 & 2);
                            puVar5[2] = uVar29;
                            uVar12 = (uint)((0x40000000 / (ulonglong)uVar12) / (ulonglong)uVar29);
                            local_152c = 0;
                          }
                          else {
                            puVar5[2] = 1;
                            uVar12 = (uint)(0x40000000 / (ulonglong)uVar12 >> 2);
                          }
                          local_1528 = local_1528 & 0xffffffff00000000;
                          local_14f0 = uVar13;
                          if (puVar5[1] <= uVar12) goto LAB_14048c24e;
                          goto LAB_14048cc6c;
                        }
                      }
                      else {
                        if (puVar5[0xc] != 0) {
                          iVar10 = (**(code **)(puVar5 + 4))
                                             (*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
                          puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
                          if (iVar10 == 0) {
                            puVar5[0xc] = 0;
                            *(undefined1 *)(puVar5 + 0xe) = 0;
                            puVar18 = puVar2;
                          }
                          else {
                            puVar18 = (uint *)((longlong)iVar10 + (longlong)puVar1);
                          }
                          *(uint **)(puVar5 + 0x32) = puVar18;
                          puVar18 = puVar1;
                          puVar16 = puVar2;
                          goto LAB_14048c9a5;
                        }
                        *(undefined4 *)(param_1 + 4) = 0;
                      }
                      lVar28 = *(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                      pcVar20 = "1/2/4/8/16-bit only";
                      goto LAB_14048c20e;
                    }
LAB_14048cc6c:
                    lVar28 = *(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    pcVar20 = "too large";
                    goto LAB_14048c20e;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (puVar5[0xc] != 0) {
    iVar10 = (**(code **)(puVar5 + 4))(*(undefined8 *)(puVar5 + 10),puVar1,puVar5[0xd]);
    puVar5[0x2e] = puVar5[0x2e] + (puVar5[0x30] - puVar5[0x34]);
    if (iVar10 == 0) {
      puVar5[0xc] = 0;
      *(undefined1 *)(puVar5 + 0xe) = 0;
      bVar7 = 0;
      puVar16 = puVar2;
    }
    else {
      bVar7 = (byte)*puVar1;
      puVar16 = (uint *)((longlong)iVar10 + (longlong)puVar1);
    }
    *(uint **)(puVar5 + 0x32) = puVar16;
    *(uint **)(puVar5 + 0x30) = puVar2;
    puVar17 = puVar2;
    goto joined_r0x00014048be17;
  }
LAB_14048c1f4:
  lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar20 = "bad png sig";
  goto LAB_14048c20e;
LAB_14048d161:
  do {
    piVar21 = (int *)*param_1;
    local_1478 = (longlong)(int)*(uint *)(&DAT_140e1a6e0 + local_14a0 * 4);
    uVar13 = *(uint *)(&DAT_140e1a720 + local_14a0 * 4);
    local_1480 = (longlong)(int)uVar13;
    uVar24 = ~*(uint *)(&DAT_140e1a6e0 + local_14a0 * 4) + *piVar21 + uVar13;
    uVar12 = uVar24 / uVar13;
    local_1500 = CONCAT44(local_1500._4_4_,uVar12);
    local_14c4 = *(uint *)(&DAT_140e1a700 + local_14a0 * 4);
    local_14f4 = *(uint *)(&DAT_140e1a740 + local_14a0 * 4);
    uVar29 = ~local_14c4 + piVar21[1] + local_14f4;
    local_1508 = uVar29 / local_14f4;
    if ((uVar13 <= uVar24) && (local_14f4 <= uVar29)) {
      local_148c = uVar12 * local_14cc * piVar21[2];
      local_1540 = local_14f0;
      local_1548 = local_14cc;
      local_1558 = uVar12;
      local_1550 = local_1508;
      iVar10 = not_enough_pixels(param_1,local_14a8,local_1504,local_14c8);
      if (iVar10 == 0) {
        free(local_14c0);
        goto LAB_14048c215;
      }
      pvVar15 = (void *)param_1[3];
      if ((0 < (int)(uint)local_1500) && (0 < (int)local_1508)) {
        local_14e0 = local_1500 & 0xffffffff;
        local_14b8 = (ulonglong)local_1508;
        local_1488 = *(int *)*param_1;
        local_14e8 = (longlong *)CONCAT44(local_14e8._4_4_,local_151c * local_14c4 * local_1488);
        local_1484 = local_151c * local_14f4 * local_1488;
        local_1488 = local_1488 * local_151c;
        local_1510 = (ulonglong)((uint)local_1500 & 0x7ffffffe);
        local_1528 = (local_1480 + local_1478) * _Size;
        local_14b0 = local_1470 * local_1480;
        local_1498 = _Size * local_1478;
        local_1518 = 0;
        do {
          lVar28 = local_1518 * local_14e0;
          if ((uint)local_1500 == 1) {
            uVar27 = 0;
          }
          else {
            lVar30 = ((ulonglong)local_14e8 & 0xffffffff) + (longlong)local_14c0;
            uVar27 = 0;
            do {
              memcpy((void *)(lVar30 + local_1498),
                     (void *)((uVar27 + lVar28) * _Size + (longlong)pvVar15),_Size);
              memcpy((void *)(lVar30 + local_1528),
                     (void *)((uVar27 + lVar28 + 1) * _Size + (longlong)pvVar15),_Size);
              uVar27 = uVar27 + 2;
              lVar30 = lVar30 + local_14b0;
            } while (local_1510 != uVar27);
          }
          if ((local_14e0 & 1) != 0) {
            memcpy((void *)((longlong)local_14c0 +
                           (uVar27 * local_1480 + local_1478) * _Size +
                           (ulonglong)((local_14f4 * (int)local_1518 + local_14c4) * local_1488)),
                   (void *)((lVar28 + uVar27) * _Size + (longlong)pvVar15),_Size);
          }
          local_1518 = local_1518 + 1;
          local_14e8 = (longlong *)CONCAT44(local_14e8._4_4_,(int)local_14e8 + local_1484);
        } while (local_1518 < local_14b8);
      }
      uVar13 = ((local_148c + 7 >> 3) + 1) * local_1508;
      free(pvVar15);
      local_14a8 = local_14a8 + (ulonglong)uVar13;
      local_1504 = local_1504 - uVar13;
    }
    local_14a0 = local_14a0 + 1;
  } while (local_14a0 != 7);
  param_1[3] = local_14c0;
  if ((char)local_14d8 != '\0') {
LAB_14048d47b:
    local_1558 = puVar5[3];
    uVar3 = *(undefined4 *)*param_1;
    uVar4 = ((undefined4 *)*param_1)[1];
    if (*(int *)(param_1 + 4) == 0x10) {
      FUN_140490020(uVar3,uVar4,param_1[3],local_1462);
    }
    else {
      FUN_140490120(uVar3,uVar4,param_1[3],&local_145c);
    }
  }
LAB_14048d4b4:
  if (local_14ec != 0) {
    lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    piVar21 = &DAT_1416f2538;
    if (*(int *)(lVar28 + 0x23c) != 0) {
      piVar21 = (int *)(lVar28 + 0x238);
    }
    if ((*piVar21 != 0) && (2 < (int)puVar5[3])) {
      FUN_140490210(*param_1);
    }
  }
  if ((char)local_152c == '\0') {
    if ((char)local_14d8 != '\0') {
      puVar5[2] = puVar5[2] + 1;
    }
LAB_14048d73b:
    free((void *)param_1[2]);
    param_1[2] = 0;
    FUN_14048fe40(puVar5);
    FUN_14048fe40(puVar5);
    uVar14 = 1;
    goto LAB_14048c217;
  }
  puVar5[2] = local_152c & 0xff;
  uVar13 = local_152c & 0xff;
  if (2 < param_3) {
    uVar13 = param_3;
  }
  puVar5[3] = uVar13;
  uVar12 = ((int *)*param_1)[1] * *(int *)*param_1;
  if ((-1 < (int)uVar12) && (uVar12 <= (uint)(0x7fffffff / (ulonglong)uVar13))) {
    pvVar15 = (void *)param_1[3];
    pbVar19 = malloc((ulonglong)(uVar12 * uVar13));
    if (pbVar19 != (byte *)0x0) {
      if (uVar13 == 3) {
        if (uVar12 != 0) {
          pbVar22 = pbVar19;
          if (uVar12 == 1) {
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            do {
              uVar25 = (ulonglong)*(byte *)((longlong)pvVar15 + uVar27);
              *pbVar22 = abStack_1458[uVar25 * 4];
              pbVar22[1] = abStack_1458[uVar25 * 4 + 1];
              pbVar22[2] = abStack_1458[uVar25 * 4 + 2];
              uVar25 = (ulonglong)*(byte *)((longlong)pvVar15 + uVar27 + 1);
              pbVar22[3] = abStack_1458[uVar25 * 4];
              pbVar22[4] = abStack_1458[uVar25 * 4 + 1];
              pbVar22[5] = abStack_1458[uVar25 * 4 + 2];
              pbVar22 = pbVar22 + 6;
              uVar27 = uVar27 + 2;
            } while ((uVar12 & 0x7ffffffe) != uVar27);
          }
          if ((uVar12 & 1) != 0) {
            uVar27 = (ulonglong)*(byte *)((longlong)pvVar15 + uVar27);
            *pbVar22 = abStack_1458[uVar27 * 4];
            pbVar22[1] = abStack_1458[uVar27 * 4 + 1];
            pbVar22[2] = abStack_1458[uVar27 * 4 + 2];
          }
        }
      }
      else if (uVar12 != 0) {
        pbVar22 = pbVar19;
        if (uVar12 < 4) {
          uVar27 = 0;
        }
        else {
          uVar27 = 0;
          do {
            *(undefined4 *)pbVar22 =
                 *(undefined4 *)
                  (abStack_1458 + (ulonglong)*(byte *)((longlong)pvVar15 + uVar27) * 4);
            *(undefined4 *)(pbVar22 + 4) =
                 *(undefined4 *)
                  (abStack_1458 + (ulonglong)*(byte *)((longlong)pvVar15 + uVar27 + 1) * 4);
            *(undefined4 *)(pbVar22 + 8) =
                 *(undefined4 *)
                  (abStack_1458 + (ulonglong)*(byte *)((longlong)pvVar15 + uVar27 + 2) * 4);
            *(undefined4 *)(pbVar22 + 0xc) =
                 *(undefined4 *)
                  (abStack_1458 + (ulonglong)*(byte *)((longlong)pvVar15 + uVar27 + 3) * 4);
            pbVar22 = pbVar22 + 0x10;
            uVar27 = uVar27 + 4;
          } while ((uVar12 & 0x7ffffffc) != uVar27);
        }
        if ((ulonglong)(uVar12 & 3) != 0) {
          uVar25 = 0;
          do {
            *(undefined4 *)(pbVar22 + uVar25 * 4) =
                 *(undefined4 *)
                  (abStack_1458 + (ulonglong)*(byte *)((longlong)pvVar15 + uVar25 + uVar27) * 4);
            uVar25 = uVar25 + 1;
          } while ((uVar12 & 3) != uVar25);
        }
      }
      free(pvVar15);
      param_1[3] = pbVar19;
      goto LAB_14048d73b;
    }
  }
LAB_14048d57b:
  lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar20 = "outofmem";
LAB_14048c20e:
  *(char **)(lVar28 + 0x220) = pcVar20;
LAB_14048c215:
  uVar14 = 0;
LAB_14048c217:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_1578)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_1578);
  }
  return uVar14;
}

