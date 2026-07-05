/**
 * Function: failed_to_create_descriptor_heap
 * Address:  1403fefc0
 * Signature: undefined failed_to_create_descriptor_heap(void)
 * Body size: 3764 bytes
 */


longlong failed_to_create_descriptor_heap(longlong param_1,int *param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  DWORD dwMessageId;
  undefined4 uVar13;
  DWORD DVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined1 auStackY_588 [32];
  undefined4 local_4f0 [2];
  undefined8 local_4e8;
  ulonglong local_4e0;
  int local_4d8;
  undefined2 local_4d4;
  undefined2 local_4d2;
  undefined4 local_4d0;
  undefined4 local_4cc;
  int local_4c8;
  undefined4 local_4c4;
  uint local_4c0;
  undefined4 local_4b4;
  undefined1 local_4b0 [16];
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_494;
  undefined4 local_48c;
  longlong *local_488;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  uint local_468;
  undefined4 local_464;
  uint local_460;
  uint local_45c;
  longlong local_458;
  ulonglong local_450;
  ulonglong local_448;
  ulonglong local_60;
  ulonglong uVar27;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStackY_588;
  uVar3 = param_2[2];
  lVar15 = FUN_140160c70(1,0x50);
  if (lVar15 == 0) {
    lVar15 = 0;
    goto LAB_1403ffe65;
  }
  uVar23 = param_2[5];
  uVar11 = uVar23;
  if (*param_2 == 2) {
    uVar11 = 1;
  }
  uVar26 = param_2[2];
  if (*param_2 != 2) {
    uVar23 = 1;
  }
  iVar4 = param_2[7];
  uVar13 = *(undefined4 *)(&DAT_140e14b80 + (longlong)param_2[1] * 4);
  bVar30 = (uVar26 & 2) != 0;
  if (bVar30) {
    local_478 = FUN_140150270(param_2[8],"SDL.gpu.texture.create.d3d12.clear.r",0);
    local_474 = FUN_140150270(param_2[8],"SDL.gpu.texture.create.d3d12.clear.g",0);
    local_470 = FUN_140150270(param_2[8],"SDL.gpu.texture.create.d3d12.clear.b",0);
    local_46c = FUN_140150270(param_2[8],"SDL.gpu.texture.create.d3d12.clear.a",0);
    uVar26 = param_2[2];
  }
  uVar24 = (uint)bVar30;
  if ((uVar26 & 4) != 0) {
    uVar24 = uVar24 | 2;
    local_478 = FUN_140150270(param_2[8],"SDL.gpu.texture.create.d3d12.clear.depth",0);
    uVar10 = FUN_140150150(param_2[8],"SDL.gpu.texture.create.d3d12.clear.stencil",0);
    local_474 = CONCAT31(local_474._1_3_,uVar10);
    uVar13 = *(undefined4 *)(&DAT_140e149d0 + (longlong)param_2[1] * 4);
  }
  local_4c0 = uVar24 + 4;
  if ((uVar3 & 0x60) == 0) {
    local_4c0 = uVar24;
  }
  local_4b4 = 1;
  local_4b0 = (undefined1  [16])0x0;
  if (*param_2 == 2) {
    local_4f0[0] = 4;
    uVar26 = param_2[3];
    local_4d8 = param_2[4];
    local_4d4 = (undefined2)param_2[5];
    local_4c8 = 0;
    local_4cc = 1;
  }
  else {
    local_4f0[0] = 3;
    uVar26 = param_2[3];
    local_4d8 = param_2[4];
    local_4d4 = (undefined2)param_2[5];
    local_4cc = *(undefined4 *)(&DAT_140e14860 + (longlong)param_2[7] * 4);
    local_4c8 = -(uint)(0 < iVar4);
  }
  local_4e0 = (ulonglong)uVar26;
  local_4e8 = 0x10000;
  local_4d2 = (undefined2)param_2[6];
  local_4c4 = 0;
  uVar26 = param_2[2];
  local_4d0 = uVar13;
  if (((((uVar26 & 9) == 0) && ((uVar26 & 2) == 0)) && ((uVar26 & 4) == 0)) &&
     (((uVar26 & 0x10) == 0 && ((uVar26 & 0x60) == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,"Texture has no default usage mode!");
  }
  local_47c = uVar13;
  iVar12 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xd8))
                     (*(longlong **)(param_1 + 0x50),&local_4b4,0,local_4f0);
  if (iVar12 < 0) {
    s_error_code_s_0x08lx(param_1,"Failed to create texture!",iVar12);
    goto LAB_1403ffe08;
  }
  *(undefined8 *)(lVar15 + 0x20) = local_4a0;
  if ((*(byte *)(param_2 + 2) & 0x19) == 0) goto LAB_1403ff472;
  FUN_1403feeb0(param_1,0,lVar15 + 0x28);
  local_468 = *(uint *)(&DAT_140e14b80 + (longlong)param_2[1] * 4);
  local_460 = 0x1688;
  switch(*param_2) {
  case 1:
    local_464 = 5;
    local_458 = (ulonglong)(uint)param_2[6] << 0x20;
    local_450 = (ulonglong)uVar11 << 0x20;
    local_448 = 0;
    break;
  case 2:
    local_464 = 8;
    goto LAB_1403ff401;
  case 3:
    local_464 = 9;
LAB_1403ff401:
    local_458 = (ulonglong)(uint)param_2[6] << 0x20;
    local_450 = local_450 & 0xffffffff00000000;
    break;
  case 4:
    local_464 = 10;
    local_458 = (ulonglong)(uint)param_2[6] << 0x20;
    local_450 = (ulonglong)((uint)param_2[5] / 6) << 0x20;
    local_448 = local_448 & 0xffffffff00000000;
    break;
  default:
    local_464 = 4;
    local_458 = (ulonglong)(uint)param_2[6] << 0x20;
    local_450 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x90))
            (*(longlong **)(param_1 + 0x50),local_4a0,&local_468,*(undefined8 *)(lVar15 + 0x38));
LAB_1403ff472:
  FUN_140106140(lVar15 + 0x48,0);
  iVar12 = param_2[6];
  *(uint *)(lVar15 + 0x18) = iVar12 * uVar11;
  lVar16 = FUN_140160c70(iVar12 * uVar11,0x60);
  *(longlong *)(lVar15 + 0x10) = lVar16;
  if (lVar16 == 0) {
LAB_1403ffe08:
    FUN_1403ffeb0(lVar15);
    lVar15 = 0;
  }
  else {
    if ((uVar11 != 0) && (uVar26 = param_2[6], uVar26 != 0)) {
      uVar24 = 0;
      do {
        uVar9 = 0;
        if (uVar26 != 0) {
          uVar28 = 0;
          do {
            uVar26 = uVar26 * uVar24 + uVar28;
            uVar27 = (ulonglong)uVar26;
            lVar16 = uVar27 * 0x60;
            *(longlong *)(*(longlong *)(lVar15 + 0x10) + lVar16) = lVar15;
            *(uint *)(*(longlong *)(lVar15 + 0x10) + 8 + lVar16) = uVar24;
            *(uint *)(*(longlong *)(lVar15 + 0x10) + 0xc + lVar16) = uVar28;
            *(uint *)(*(longlong *)(lVar15 + 0x10) + 0x10 + lVar16) = uVar23;
            *(uint *)(*(longlong *)(lVar15 + 0x10) + 0x14 + lVar16) = uVar26;
            *(undefined8 *)(*(longlong *)(lVar15 + 0x10) + 0x18 + lVar16) = 0;
            *(undefined8 *)(*(longlong *)(lVar15 + 0x10) + 0x28 + lVar16) = 0;
            *(undefined8 *)(*(longlong *)(lVar15 + 0x10) + 0x48 + lVar16) = 0;
            if ((*(byte *)(param_2 + 2) & 2) != 0) {
              uVar17 = FUN_140160c70((ulonglong)uVar23,0x20);
              lVar16 = uVar27 * 0x60;
              *(undefined8 *)(*(longlong *)(lVar15 + 0x10) + 0x18 + lVar16) = uVar17;
              if (uVar23 != 0) {
                uVar29 = 0;
                do {
                  puVar25 = (undefined8 *)
                            (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x18 + lVar16) +
                            uVar29 * 0x20);
                  puVar5 = *(uint **)(param_1 + 0x148);
                  FUN_1401552a0(*(undefined8 *)(puVar5 + 8));
                  uVar26 = puVar5[5];
                  if (uVar26 == 0) {
                    uVar13 = *(undefined4 *)(**(longlong **)(puVar5 + 2) + 8);
                    puVar19 = (undefined8 *)FUN_140160c70(1,0x30);
                    if (puVar19 != (undefined8 *)0x0) {
                      *(undefined4 *)((longlong)puVar19 + 0x2c) = 0;
                      local_494 = 0x400;
                      local_48c = 0;
                      local_498 = uVar13;
                      dwMessageId = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x70))
                                              (*(longlong **)(param_1 + 0x50),&local_498,
                                               &DAT_140e14804,&local_488);
                      if (-1 < (int)dwMessageId) {
                        *puVar19 = local_488;
                        *(undefined4 *)(puVar19 + 1) = uVar13;
                        *(undefined4 *)(puVar19 + 4) = 0x400;
                        *(undefined1 *)(puVar19 + 5) = 1;
                        uVar13 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))
                                           (*(longlong **)(param_1 + 0x50),uVar13);
                        *(undefined4 *)((longlong)puVar19 + 0x24) = uVar13;
                        (**(code **)(*local_488 + 0x48))(local_488,puVar19 + 2);
                        uVar26 = *puVar5;
                        *puVar5 = uVar26 + 1;
                        lVar18 = FUN_140160cc0(*(undefined8 *)(puVar5 + 2),
                                               (ulonglong)(uVar26 + 1) << 3);
                        *(longlong *)(puVar5 + 2) = lVar18;
                        *(undefined8 **)(lVar18 + (ulonglong)(*puVar5 - 1) * 8) = puVar19;
                        uVar26 = (int)*(undefined8 *)(puVar5 + 4) + 0x400;
                        *(ulonglong *)(puVar5 + 4) =
                             CONCAT44((int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20) + 0x400,
                                      uVar26);
                        uVar17 = FUN_140160cc0(*(undefined8 *)(puVar5 + 6),(ulonglong)uVar26 << 5);
                        *(undefined8 *)(puVar5 + 6) = uVar17;
                        lVar18 = 0;
                        lVar21 = 0;
                        do {
                          *(uint **)(*(longlong *)(puVar5 + 6) + lVar18) = puVar5;
                          *(undefined8 **)(*(longlong *)(puVar5 + 6) + 8 + lVar18) = puVar19;
                          *(int *)(*(longlong *)(puVar5 + 6) + 0x18 + lVar18) = (int)lVar21;
                          *(ulonglong *)(*(longlong *)(puVar5 + 6) + 0x10 + lVar18) =
                               (ulonglong)(uint)(*(int *)((longlong)puVar19 + 0x24) * (int)lVar21) +
                               puVar19[2];
                          lVar21 = lVar21 + 1;
                          lVar18 = lVar18 + 0x20;
                        } while (lVar21 != 0x400);
                        uVar26 = puVar5[5];
                        goto LAB_1403ff6de;
                      }
                      if (dwMessageId == 0x887a0005) {
                        if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
                          dwMessageId = 0x887a0005;
                        }
                        else {
                          dwMessageId = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x128))();
                        }
                      }
                      DVar14 = FormatMessageA(0x1200,(LPCVOID)0x0,dwMessageId,0,(LPSTR)&local_468,
                                              0x400,(va_list *)0x0);
                      if (DVar14 == 0) {
                        if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
                          FUN_1400fb950(9,"%s! Error Code: (0x%08lX)",
                                        "Failed to create descriptor heap!",dwMessageId);
                        }
                        FUN_1400fbed0("%s! Error Code: (0x%08lX)",
                                      "Failed to create descriptor heap!",dwMessageId);
                        plVar6 = (longlong *)*puVar19;
                      }
                      else {
                        uVar20 = (ulonglong)DVar14;
                        if (0x3ff < DVar14) {
                          uVar20 = 0x400;
                        }
                        uVar20 = uVar20 + 1;
                        do {
                          if (uVar20 == 1) {
                            local_468 = local_468 & 0xffffff00;
                            cVar2 = *(char *)(param_1 + 0x78);
                            goto joined_r0x0001403ff9a3;
                          }
                          uVar1 = uVar20 - 1;
                          lVar18 = uVar20 + 2;
                          uVar20 = uVar1;
                        } while (*(char *)((longlong)&local_46c + lVar18) < '!');
                        *(undefined1 *)((longlong)&local_468 + (uVar1 & 0xffffffff)) = 0;
                        cVar2 = *(char *)(param_1 + 0x78);
joined_r0x0001403ff9a3:
                        if (cVar2 == '\x01') {
                    /* WARNING: Subroutine does not return */
                          FUN_1400fb950(9,"%s! Error Code: %s (0x%08lX)",
                                        "Failed to create descriptor heap!",&local_468);
                        }
                        FUN_1400fbed0("%s! Error Code: %s (0x%08lX)",
                                      "Failed to create descriptor heap!",&local_468,dwMessageId);
                        plVar6 = (longlong *)*puVar19;
                      }
                      if (plVar6 != (longlong *)0x0) {
                        (**(code **)(*plVar6 + 0x10))();
                      }
                      FUN_140160cf0(puVar19);
                    }
                  }
                  else {
LAB_1403ff6de:
                    lVar18 = (ulonglong)(uVar26 - 1) * 0x20;
                    puVar19 = (undefined8 *)(*(longlong *)(puVar5 + 6) + lVar18);
                    uVar17 = *puVar19;
                    uVar7 = puVar19[1];
                    puVar19 = (undefined8 *)(*(longlong *)(puVar5 + 6) + 0x10 + lVar18);
                    uVar8 = puVar19[1];
                    puVar25[2] = *puVar19;
                    puVar25[3] = uVar8;
                    *puVar25 = uVar17;
                    puVar25[1] = uVar7;
                    puVar5[5] = puVar5[5] - 1;
                  }
                  FUN_1401552c0(*(undefined8 *)(puVar5 + 8));
                  local_468 = *(uint *)(&DAT_140e14b80 + (longlong)param_2[1] * 4);
                  iVar12 = *param_2;
                  if (iVar12 - 3U < 2) {
LAB_1403ff650:
                    local_464 = 5;
                    local_458 = 1;
                    local_460 = uVar28;
                    local_45c = uVar24;
                  }
                  else if (iVar12 == 2) {
                    local_464 = 8;
                    local_45c = (uint)uVar29;
                    local_458 = CONCAT44(local_458._4_4_,1);
                    local_460 = uVar28;
                  }
                  else {
                    if (iVar12 == 1) goto LAB_1403ff650;
                    if (iVar4 < 1) {
                      local_464 = 4;
                      local_45c = 0;
                      local_460 = uVar28;
                    }
                    else {
                      local_464 = 6;
                    }
                  }
                  (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa0))
                            (*(longlong **)(param_1 + 0x50),*(undefined8 *)(lVar15 + 0x20),
                             &local_468,
                             *(undefined8 *)
                              (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x18 + lVar16) + 0x10 +
                              uVar29 * 0x20));
                  uVar29 = uVar29 + 1;
                } while (uVar29 != uVar23);
              }
            }
            if ((*(byte *)(param_2 + 2) & 4) != 0) {
              lVar16 = *(longlong *)(lVar15 + 0x10);
              puVar5 = *(uint **)(param_1 + 0x150);
              FUN_1401552a0(*(undefined8 *)(puVar5 + 8));
              uVar26 = puVar5[5];
              if (uVar26 == 0) {
                lVar18 = failed_to_create_descriptor_heap
                                   (param_1,*(undefined4 *)(**(longlong **)(puVar5 + 2) + 8),0x400,1
                                   );
                if (lVar18 != 0) {
                  uVar26 = *puVar5;
                  *puVar5 = uVar26 + 1;
                  lVar21 = FUN_140160cc0(*(undefined8 *)(puVar5 + 2),(ulonglong)(uVar26 + 1) << 3);
                  *(longlong *)(puVar5 + 2) = lVar21;
                  *(longlong *)(lVar21 + (ulonglong)(*puVar5 - 1) * 8) = lVar18;
                  uVar26 = (int)*(undefined8 *)(puVar5 + 4) + 0x400;
                  *(ulonglong *)(puVar5 + 4) =
                       CONCAT44((int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20) + 0x400,uVar26
                               );
                  uVar17 = FUN_140160cc0(*(undefined8 *)(puVar5 + 6),(ulonglong)uVar26 << 5);
                  *(undefined8 *)(puVar5 + 6) = uVar17;
                  lVar21 = 0;
                  lVar22 = 0;
                  do {
                    *(uint **)(*(longlong *)(puVar5 + 6) + lVar21) = puVar5;
                    *(longlong *)(*(longlong *)(puVar5 + 6) + 8 + lVar21) = lVar18;
                    *(int *)(*(longlong *)(puVar5 + 6) + 0x18 + lVar21) = (int)lVar22;
                    *(ulonglong *)(*(longlong *)(puVar5 + 6) + 0x10 + lVar21) =
                         (ulonglong)(uint)(*(int *)(lVar18 + 0x24) * (int)lVar22) +
                         *(longlong *)(lVar18 + 0x10);
                    lVar22 = lVar22 + 1;
                    lVar21 = lVar21 + 0x20;
                  } while (lVar22 != 0x400);
                  uVar26 = puVar5[5];
                  goto LAB_1403ffbc0;
                }
              }
              else {
LAB_1403ffbc0:
                lVar16 = lVar16 + uVar27 * 0x60;
                lVar18 = (ulonglong)(uVar26 - 1) * 0x20;
                puVar25 = (undefined8 *)(*(longlong *)(puVar5 + 6) + lVar18);
                uVar17 = *puVar25;
                uVar7 = puVar25[1];
                puVar25 = (undefined8 *)(*(longlong *)(puVar5 + 6) + 0x10 + lVar18);
                uVar8 = puVar25[1];
                *(undefined8 *)(lVar16 + 0x50) = *puVar25;
                *(undefined8 *)(lVar16 + 0x58) = uVar8;
                *(undefined8 *)(lVar16 + 0x40) = uVar17;
                *(undefined8 *)(lVar16 + 0x48) = uVar7;
                puVar5[5] = puVar5[5] - 1;
              }
              FUN_1401552c0(*(undefined8 *)(puVar5 + 8));
              local_468 = *(uint *)(&DAT_140e149d0 + (longlong)param_2[1] * 4);
              local_460 = 0;
              if (iVar4 < 1) {
                local_464 = 3;
                local_45c = uVar28;
              }
              else {
                local_464 = 5;
              }
              (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa8))
                        (*(longlong **)(param_1 + 0x50),*(undefined8 *)(lVar15 + 0x20),&local_468,
                         *(undefined8 *)(*(longlong *)(lVar15 + 0x10) + 0x50 + uVar27 * 0x60));
            }
            if ((uVar3 & 0x60) != 0) {
              lVar16 = *(longlong *)(lVar15 + 0x10);
              puVar5 = *(uint **)(param_1 + 0x138);
              FUN_1401552a0(*(undefined8 *)(puVar5 + 8));
              uVar26 = puVar5[5];
              if (uVar26 == 0) {
                lVar18 = failed_to_create_descriptor_heap
                                   (param_1,*(undefined4 *)(**(longlong **)(puVar5 + 2) + 8),0x400,1
                                   );
                if (lVar18 != 0) {
                  uVar26 = *puVar5;
                  *puVar5 = uVar26 + 1;
                  lVar21 = FUN_140160cc0(*(undefined8 *)(puVar5 + 2),(ulonglong)(uVar26 + 1) << 3);
                  *(longlong *)(puVar5 + 2) = lVar21;
                  *(longlong *)(lVar21 + (ulonglong)(*puVar5 - 1) * 8) = lVar18;
                  uVar26 = (int)*(undefined8 *)(puVar5 + 4) + 0x400;
                  *(ulonglong *)(puVar5 + 4) =
                       CONCAT44((int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20) + 0x400,uVar26
                               );
                  uVar17 = FUN_140160cc0(*(undefined8 *)(puVar5 + 6),(ulonglong)uVar26 << 5);
                  *(undefined8 *)(puVar5 + 6) = uVar17;
                  lVar21 = 0;
                  lVar22 = 0;
                  do {
                    *(uint **)(*(longlong *)(puVar5 + 6) + lVar21) = puVar5;
                    *(longlong *)(*(longlong *)(puVar5 + 6) + 8 + lVar21) = lVar18;
                    *(int *)(*(longlong *)(puVar5 + 6) + 0x18 + lVar21) = (int)lVar22;
                    *(ulonglong *)(*(longlong *)(puVar5 + 6) + 0x10 + lVar21) =
                         (ulonglong)(uint)(*(int *)(lVar18 + 0x24) * (int)lVar22) +
                         *(longlong *)(lVar18 + 0x10);
                    lVar22 = lVar22 + 1;
                    lVar21 = lVar21 + 0x20;
                  } while (lVar22 != 0x400);
                  uVar26 = puVar5[5];
                  goto LAB_1403ffd50;
                }
              }
              else {
LAB_1403ffd50:
                lVar16 = lVar16 + uVar27 * 0x60;
                lVar18 = (ulonglong)(uVar26 - 1) * 0x20;
                puVar25 = (undefined8 *)(*(longlong *)(puVar5 + 6) + lVar18);
                uVar17 = *puVar25;
                uVar7 = puVar25[1];
                puVar25 = (undefined8 *)(*(longlong *)(puVar5 + 6) + 0x10 + lVar18);
                uVar8 = puVar25[1];
                *(undefined8 *)(lVar16 + 0x30) = *puVar25;
                *(undefined8 *)(lVar16 + 0x38) = uVar8;
                *(undefined8 *)(lVar16 + 0x20) = uVar17;
                *(undefined8 *)(lVar16 + 0x28) = uVar7;
                puVar5[5] = puVar5[5] - 1;
              }
              FUN_1401552c0(*(undefined8 *)(puVar5 + 8));
              local_468 = *(uint *)(&DAT_140e14b80 + (longlong)param_2[1] * 4);
              iVar12 = *param_2;
              if (iVar12 - 3U < 2) {
LAB_1403ff520:
                local_464 = 5;
                local_458 = CONCAT44(local_458._4_4_,1);
                local_45c = uVar24;
              }
              else if (iVar12 == 2) {
                local_464 = 8;
                local_45c = 0;
                local_458 = CONCAT44(local_458._4_4_,uVar23);
              }
              else {
                if (iVar12 == 1) goto LAB_1403ff520;
                local_464 = 4;
                local_45c = 0;
              }
              local_460 = uVar28;
              (**(code **)(**(longlong **)(param_1 + 0x50) + 0x98))
                        (*(longlong **)(param_1 + 0x50),*(undefined8 *)(lVar15 + 0x20),0,&local_468)
              ;
            }
            uVar28 = uVar28 + 1;
            uVar26 = param_2[6];
            uVar9 = uVar26;
          } while (uVar28 < uVar26);
        }
        uVar26 = uVar9;
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar11);
    }
    if ((param_3 != 0) && (*(char *)(param_1 + 0x78) != '\0')) {
      plVar6 = *(longlong **)(lVar15 + 0x20);
      lVar16 = FUN_1400fc570(param_3);
      uVar17 = FUN_14017b9c0("UTF-16LE","UTF-8",param_3,lVar16 + 1);
      (**(code **)(*plVar6 + 0x30))(plVar6,uVar17);
      FUN_140160cf0(uVar17);
    }
  }
LAB_1403ffe65:
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStackY_588)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStackY_588);
  }
  return lVar15;
}

