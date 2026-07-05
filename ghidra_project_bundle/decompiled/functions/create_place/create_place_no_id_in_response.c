/**
 * Function: create_place_no_id_in_response
 * Address:  1405b2e90
 * Signature: undefined create_place_no_id_in_response(void)
 * Body size: 6115 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 *
create_place_no_id_in_response
          (undefined1 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
          longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  size_t sVar12;
  char ******ppppppcVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  uint *puVar20;
  uint *puVar21;
  undefined1 *puVar22;
  uint *puVar23;
  char *******pppppppcVar24;
  void *pvVar25;
  int *piVar26;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  ulonglong uStack_290;
  longlong local_248;
  undefined8 *puStack_240;
  undefined8 local_238;
  ulonglong local_230;
  undefined8 uStack_228;
  longlong local_220;
  undefined7 local_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  longlong local_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  longlong local_1e0;
  undefined8 local_1d0;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  longlong local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_190;
  undefined8 *local_178 [2];
  uint local_168;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_15c;
  longlong local_158;
  ulonglong uStack_150;
  undefined8 local_130;
  longlong *local_128;
  int *local_120;
  uint local_118;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  ulonglong uStack_100;
  undefined8 local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  size_t local_c8;
  ulonglong uStack_c0;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined4 uStack_b5;
  undefined4 uStack_b1;
  undefined4 uStack_ad;
  undefined1 uStack_a9;
  undefined8 local_a8;
  ulonglong uStack_a0;
  char *******local_98;
  undefined8 uStack_90;
  size_t local_88;
  ulonglong uStack_80;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xf;
  local_70 = (longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xf;
  *(undefined8 *)(param_1 + 0x50) = 0;
  local_68 = param_1;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    FUN_1400069b0(local_70,0x14,param_3,"backend_url required");
    return local_68;
  }
  *(longlong *)(param_1 + 0x50) = param_5[1] - *param_5;
  FUN_1405b0940(&local_2a8);
  local_128 = (longlong *)(local_68 + 0x10);
  if (local_128 == &local_2a8) {
    if (0xf < uStack_290) {
      lVar17 = CONCAT44(local_2a8._4_4_,(undefined4)local_2a8);
      uVar14 = uStack_290 + 1;
      lVar16 = lVar17;
      if (0xfff < uVar14) {
        lVar16 = *(longlong *)(lVar17 + -8);
        if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
        uVar14 = uStack_290 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar16,uVar14);
    }
  }
  else {
    uVar14 = *(ulonglong *)(local_68 + 0x28);
    if (0xf < uVar14) {
      lVar16 = *local_128;
      uVar8 = uVar14 + 1;
      lVar17 = lVar16;
      if (0xfff < uVar8) {
        lVar17 = *(longlong *)(lVar16 + -8);
        if (0x1f < (ulonglong)((lVar16 + -8) - lVar17)) goto LAB_1405b4650;
        uVar8 = uVar14 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar17,uVar8);
    }
    local_128[2] = local_298;
    local_128[3] = uStack_290;
    *(undefined4 *)local_128 = (undefined4)local_2a8;
    *(undefined4 *)((longlong)local_128 + 4) = local_2a8._4_4_;
    *(undefined4 *)(local_128 + 1) = uStack_2a0;
    *(undefined4 *)((longlong)local_128 + 0xc) = uStack_29c;
  }
  FUN_1401f6c40(local_178,param_2);
  local_178[0][0x3c] = 10;
  local_178[0][0x3d] = 0;
  local_178[0][0x3e] = 0x1e;
  local_178[0][0x3f] = 0;
  local_178[0][0x40] = 0x1e;
  local_178[0][0x41] = 0;
  uVar9 = cJSON_CreateObject();
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  cJSON_AddStringToObject(uVar9,"title",param_3);
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  cJSON_AddStringToObject(uVar9,"description",param_4);
  pcVar10 = (char *)cJSON_PrintUnformatted(uVar9);
  cJSON_Delete(uVar9);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b1._0_1_ = 0;
  uStack_b1._1_3_ = 0;
  uStack_ad = 0;
  uStack_a9 = 0;
  pcVar11 = (char *)FUN_140b65d30(0x20);
  local_b8 = SUB82(pcVar11,0);
  uStack_b6 = (undefined1)((ulonglong)pcVar11 >> 0x10);
  uStack_b5 = (undefined4)((ulonglong)pcVar11 >> 0x18);
  uStack_b1._0_1_ = (undefined1)((ulonglong)pcVar11 >> 0x38);
  local_a8 = 0x10;
  uStack_a0 = 0x1f;
  builtin_strncpy(pcVar11,"application/json",0x11);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (char *******)0x0;
  uStack_90 = 0;
  sVar12 = strlen(pcVar10);
  if ((longlong)sVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (sVar12 < 0x10) {
    uStack_80 = 0xf;
    local_88 = sVar12;
    memcpy(&local_98,pcVar10,sVar12);
    *(undefined1 *)((longlong)&local_98 + sVar12) = 0;
  }
  else {
    uVar8 = sVar12 | 0xf;
    uVar14 = 0x16;
    if (0x16 < uVar8) {
      uVar14 = uVar8;
    }
    if (uVar8 < 0xfff) {
      pppppppcVar24 = (char *******)FUN_140b65d30(uVar14 + 1);
    }
    else {
      ppppppcVar13 = (char ******)FUN_140b65d30(uVar14 + 0x28);
      pppppppcVar24 = (char *******)((longlong)ppppppcVar13 + 0x27U & 0xffffffffffffffe0);
      pppppppcVar24[-1] = ppppppcVar13;
    }
    local_98 = pppppppcVar24;
    local_88 = sVar12;
    uStack_80 = uVar14;
    memcpy(pppppppcVar24,pcVar10,sVar12);
    *(char *)((longlong)pppppppcVar24 + sVar12) = '\0';
  }
  FUN_1405b1f50(&local_208,param_2 + 0x20);
  local_c8 = 10;
  uStack_c0 = 0xf;
  local_d8 = (void *)0x63616c702f656d2f;
  uStack_d0 = 0x7365;
  local_190 = 0;
  local_e0 = 0;
  local_130 = 0;
  pppppppcVar24 = local_98;
  if (uStack_80 < 0x10) {
    pppppppcVar24 = (char *******)&local_98;
  }
  puStack_240 = (undefined8 *)0x0;
  local_238 = 4;
  local_230 = 0xf;
  local_248 = 0x54534f50;
  puVar18 = &local_1c8;
  puVar15 = &local_168;
  FUN_1405b8d60(local_178[0],&local_2a8,&local_248,&local_d8,&local_208,pppppppcVar24,local_88,
                puVar15,&local_118,&local_b8,puVar18);
  if (0xf < local_230) {
    uVar14 = local_230 + 1;
    lVar16 = local_248;
    if (0xfff < uVar14) {
      lVar16 = *(longlong *)(local_248 + -8);
      if (0x1f < (ulonglong)((local_248 + -8) - lVar16)) goto LAB_1405b4650;
      uVar14 = local_230 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar16,uVar14);
  }
  if (0xf < uStack_c0) {
    uVar14 = uStack_c0 + 1;
    pvVar25 = local_d8;
    if (0xfff < uVar14) {
      pvVar25 = *(void **)((longlong)local_d8 + -8);
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pvVar25))) goto LAB_1405b4650;
      uVar14 = uStack_c0 + 0x28;
    }
    thunk_FUN_140b68ba8(pvVar25,uVar14);
  }
  if (uStack_1f0 != 0) {
    uVar8 = local_1e0 - uStack_1f0;
    uVar14 = uStack_1f0;
    if (0xfff < uVar8) {
      uVar14 = *(ulonglong *)(uStack_1f0 - 8);
      if (0x1f < (uStack_1f0 - 8) - uVar14) goto LAB_1405b4650;
      uVar8 = uVar8 + 0x27;
    }
    thunk_FUN_140b68ba8(uVar14,uVar8);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
  }
  *(undefined8 *)((undefined8 *)CONCAT17(uStack_1f9,uStack_200))[1] = 0;
  puVar5 = *(undefined8 **)CONCAT17(uStack_1f9,uStack_200);
  while (puVar5 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar5;
    FUN_140016fe0(puVar5 + 2);
    thunk_FUN_140b68ba8(puVar5,0x50);
    puVar5 = puVar1;
  }
  thunk_FUN_140b68ba8(CONCAT17(uStack_1f9,uStack_200),0x50);
  puVar22 = local_68;
  if (0xf < uStack_80) {
    uVar14 = uStack_80 + 1;
    pppppppcVar24 = local_98;
    if (0xfff < uVar14) {
      pppppppcVar24 = (char *******)local_98[-1];
      if ((char *)0x1f < (char *)((longlong)local_98 + (-8 - (longlong)pppppppcVar24)))
      goto LAB_1405b4650;
      uVar14 = uStack_80 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppcVar24,uVar14);
  }
  if (0xf < uStack_a0) {
    lVar17 = CONCAT17((undefined1)uStack_b1,CONCAT43(uStack_b5,CONCAT12(uStack_b6,local_b8)));
    uVar14 = uStack_a0 + 1;
    lVar16 = lVar17;
    if (0xfff < uVar14) {
      lVar16 = *(longlong *)(lVar17 + -8);
      if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
      uVar14 = uStack_a0 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar16,uVar14);
  }
  cJSON_free(pcVar10);
  lVar16 = CONCAT44(local_2a8._4_4_,(undefined4)local_2a8);
  if (lVar16 == 0) {
    puVar18 = &local_1c8;
    ssl_server_hostname_verification_failed(puVar18,uStack_2a0);
    puVar22 = local_68;
    if (uStack_1b0 - local_1b8 < 0x21) {
      puVar18 = (uint *)FUN_140008af0(&local_1c8,0x21,local_1b8,0,
                                      "create place: connection failed: ",0x21);
      puVar22 = local_68;
    }
    else {
      puVar15 = puVar18;
      if (0xf < uStack_1b0) {
        puVar15 = (uint *)CONCAT44(uStack_1c4,local_1c8);
      }
      puVar20 = (uint *)0x21;
      if (("" < (char *)((longlong)puVar15 + local_1b8) && puVar15 < (uint *)0x1413a1ad9) &&
         (puVar20 = puVar15 + -0x504e86ae,
         puVar15 < "create place: connection failed: " || puVar20 == (uint *)0x0)) {
        puVar20 = (uint *)0x0;
      }
      sVar12 = local_1b8 + 1;
      puVar21 = (uint *)CONCAT44(uStack_1c4,local_1c8);
      if (uStack_1b0 < 0x10) {
        puVar21 = puVar18;
      }
      local_1b8 = local_1b8 + 0x21;
      memmove((char *)((longlong)puVar21 + 0x21),puVar15,sVar12);
      memcpy(puVar15,"create place: connection failed: ",(size_t)puVar20);
      memcpy((char *)((longlong)puVar15 + (longlong)puVar20),
             (char *)((longlong)puVar20 + 0x1413a1ad9),0x21 - (longlong)puVar20);
    }
    uVar6 = *puVar18;
    uVar9 = *(undefined8 *)(puVar18 + 2);
    uStack_114._3_1_ = (undefined1)uVar9;
    uStack_110 = (uint)((ulonglong)uVar9 >> 8);
    uStack_10c._0_3_ = (undefined3)((ulonglong)uVar9 >> 0x28);
    local_118 = (uint)*(undefined8 *)((longlong)puVar18 + 1);
    uStack_114 = (uint)((ulonglong)*(undefined8 *)((longlong)puVar18 + 1) >> 0x20);
    uVar9 = *(undefined8 *)(puVar18 + 4);
    uVar2 = *(undefined8 *)(puVar18 + 6);
    puVar18[4] = 0;
    puVar18[5] = 0;
    puVar18[6] = 0xf;
    puVar18[7] = 0;
    *(char *)puVar18 = '\0';
    uVar14 = *(ulonglong *)(puVar22 + 0x48);
    if (0xf < uVar14) {
      lVar16 = *local_70;
      uVar8 = uVar14 + 1;
      lVar17 = lVar16;
      if (0xfff < uVar8) {
        lVar17 = *(longlong *)(lVar16 + -8);
        if (0x1f < (ulonglong)((lVar16 + -8) - lVar17)) goto LAB_1405b4650;
        uVar8 = uVar14 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar17,uVar8);
    }
    puVar22[0x30] = (char)uVar6;
    *(ulonglong *)(puVar22 + 0x31) = CONCAT44(uStack_114,local_118);
    *(ulonglong *)(puVar22 + 0x38) =
         CONCAT35((undefined3)uStack_10c,CONCAT41(uStack_110,uStack_114._3_1_));
    *(undefined8 *)(puVar22 + 0x40) = uVar9;
    *(undefined8 *)(puVar22 + 0x48) = uVar2;
    if (0xf < uStack_1b0) {
      lVar17 = CONCAT44(uStack_1c4,local_1c8);
      uVar14 = uStack_1b0 + 1;
      lVar16 = lVar17;
      if (0xfff < uVar14) {
        lVar16 = *(longlong *)(lVar17 + -8);
        if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
        uVar14 = uStack_1b0 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar16,uVar14);
    }
LAB_1405b3af4:
    FUN_1401c4a70(&local_2a8);
    bVar3 = true;
  }
  else {
    piVar26 = (int *)(puVar22 + 4);
    if (*(int *)(lVar16 + 0x20) - 300U < 0xffffff9c) {
      puVar15 = &local_168;
      FUN_140007930(puVar15);
      if (uStack_150 - local_158 < 0x13) {
        puVar15 = (uint *)FUN_140008af0(&local_168,0x13,local_158,0,"create place: HTTP ",0x13);
      }
      else {
        puVar20 = puVar15;
        if (0xf < uStack_150) {
          puVar20 = (uint *)CONCAT44(uStack_164,local_168);
        }
        pcVar10 = (char *)0x13;
        if (("" < (char *)((longlong)puVar20 + local_158) && puVar20 < (uint *)0x1413a11ac) &&
           (pcVar10 = (char *)((longlong)puVar20 + -0x1413a1199),
           puVar20 < "create place: HTTP " || pcVar10 == (char *)0x0)) {
          pcVar10 = (char *)0x0;
        }
        sVar12 = local_158 + 1;
        puVar21 = (uint *)CONCAT44(uStack_164,local_168);
        if (uStack_150 < 0x10) {
          puVar21 = puVar15;
        }
        local_158 = local_158 + 0x13;
        local_120 = piVar26;
        memmove((char *)((longlong)puVar21 + 0x13),puVar20,sVar12);
        memcpy(puVar20,"create place: HTTP ",(size_t)pcVar10);
        memcpy((char *)((longlong)puVar20 + (longlong)pcVar10),pcVar10 + 0x1413a11ac,
               0x13 - (longlong)pcVar10);
        piVar26 = local_120;
      }
      local_108 = *(longlong *)(puVar15 + 4);
      uStack_100 = *(ulonglong *)(puVar15 + 6);
      local_118 = *puVar15;
      uStack_114 = puVar15[1];
      uStack_110 = puVar15[2];
      uStack_10c = puVar15[3];
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0xf;
      puVar15[7] = 0;
      *(char *)puVar15 = '\0';
      lVar17 = local_108;
      if (uStack_100 - local_108 < 2) {
        puVar15 = (uint *)FUN_140006210(&local_118,2);
      }
      else {
        local_108 = local_108 + 2;
        puVar15 = &local_118;
        puVar20 = puVar15;
        if (0xf < uStack_100) {
          puVar20 = (uint *)CONCAT44(uStack_114,local_118);
        }
        *(undefined2 *)((longlong)puVar20 + lVar17) = 0x203a;
        *(undefined1 *)((longlong)puVar20 + lVar17 + 2) = 0;
      }
      local_1c8 = *puVar15;
      uStack_1c4 = puVar15[1];
      puVar20 = *(uint **)puVar15;
      uStack_1c0 = puVar15[2];
      uStack_1bc = puVar15[3];
      local_1b8 = *(longlong *)(puVar15 + 4);
      uStack_1b0 = *(ulonglong *)(puVar15 + 6);
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0xf;
      puVar15[7] = 0;
      *(undefined1 *)puVar15 = 0;
      uVar14 = *(ulonglong *)(lVar16 + 0x98);
      if (*(ulonglong *)(lVar16 + 0xa0) < 0x10) {
        pvVar25 = (void *)(lVar16 + 0x88);
      }
      else {
        pvVar25 = *(void **)(lVar16 + 0x88);
      }
      if (uStack_1b0 - local_1b8 < uVar14) {
        puVar18 = (uint *)FUN_140006210(&local_1c8,uVar14,uVar14,pvVar25,uVar14);
      }
      else {
        lVar16 = local_1b8 + uVar14;
        puVar15 = puVar18;
        if (0xf < uStack_1b0) {
          puVar15 = puVar20;
        }
        puVar22 = (undefined1 *)(local_1b8 + (longlong)puVar15);
        local_1b8 = lVar16;
        memmove(puVar22,pvVar25,uVar14);
        *(undefined1 *)((longlong)puVar15 + lVar16) = 0;
      }
      uVar6 = *puVar18;
      uStack_201 = (undefined1)*(undefined8 *)(puVar18 + 2);
      uStack_200 = (undefined7)((ulonglong)*(undefined8 *)(puVar18 + 2) >> 8);
      local_208 = (undefined7)*(undefined8 *)((longlong)puVar18 + 1);
      uStack_201 = (undefined1)((ulonglong)*(undefined8 *)((longlong)puVar18 + 1) >> 0x38);
      uVar9 = *(undefined8 *)(puVar18 + 4);
      uVar2 = *(undefined8 *)(puVar18 + 6);
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0xf;
      puVar18[7] = 0;
      *(undefined1 *)puVar18 = 0;
      puVar22 = local_68;
      uVar14 = *(ulonglong *)(local_68 + 0x48);
      if (0xf < uVar14) {
        lVar16 = *local_70;
        uVar8 = uVar14 + 1;
        lVar17 = lVar16;
        if (0xfff < uVar8) {
          lVar17 = *(longlong *)(lVar16 + -8);
          if (0x1f < (ulonglong)((lVar16 + -8) - lVar17)) goto LAB_1405b4650;
          uVar8 = uVar14 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar17,uVar8);
      }
      puVar22[0x30] = (char)uVar6;
      *(ulonglong *)(puVar22 + 0x31) = CONCAT17(uStack_201,local_208);
      *(ulonglong *)(puVar22 + 0x38) = CONCAT71(uStack_200,uStack_201);
      *(undefined8 *)(puVar22 + 0x40) = uVar9;
      *(undefined8 *)(puVar22 + 0x48) = uVar2;
      if (0xf < uStack_1b0) {
        lVar17 = CONCAT44(uStack_1c4,local_1c8);
        uVar14 = uStack_1b0 + 1;
        lVar16 = lVar17;
        if (0xfff < uVar14) {
          lVar16 = *(longlong *)(lVar17 + -8);
          if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
          uVar14 = uStack_1b0 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar16,uVar14);
      }
      local_1b8 = 0;
      uStack_1b0 = 0xf;
      local_1c8 = local_1c8 & 0xffffff00;
      if (0xf < uStack_100) {
        lVar17 = CONCAT44(uStack_114,local_118);
        uVar14 = uStack_100 + 1;
        lVar16 = lVar17;
        if (0xfff < uVar14) {
          lVar16 = *(longlong *)(lVar17 + -8);
          if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
          uVar14 = uStack_100 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar16,uVar14);
      }
      local_108 = 0;
      uStack_100 = 0xf;
      local_118 = local_118 & 0xffffff00;
      if (0xf < uStack_150) {
        lVar17 = CONCAT44(uStack_164,local_168);
        uVar14 = uStack_150 + 1;
        lVar16 = lVar17;
        if (0xfff < uVar14) {
          lVar16 = *(longlong *)(lVar17 + -8);
          if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
          uVar14 = uStack_150 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar16,uVar14);
      }
      *piVar26 = *(int *)(CONCAT44(local_2a8._4_4_,(undefined4)local_2a8) + 0x20);
      goto LAB_1405b3af4;
    }
    if (*(ulonglong *)(lVar16 + 0xa0) < 0x10) {
      lVar16 = cJSON_Parse(lVar16 + 0x88);
    }
    else {
      lVar16 = cJSON_Parse(*(undefined8 *)(lVar16 + 0x88));
    }
    if (lVar16 != 0) {
      lVar17 = cJSON_GetObjectItem(lVar16,"id");
      if ((lVar17 == 0) || (iVar7 = cJSON_IsNumber(lVar17), iVar7 == 0)) {
        lVar17 = 0;
      }
      else {
        lVar17 = (longlong)*(double *)(lVar17 + 0x30);
      }
      puVar22 = local_68;
      *(longlong *)(local_68 + 8) = lVar17;
      cJSON_Delete(lVar16);
    }
    if (*(longlong *)(puVar22 + 8) < 1) {
      if (*(ulonglong *)(puVar22 + 0x48) < 0x1f) {
        FUN_1400069b0(local_70,0x1f);
      }
      else {
        *(undefined8 *)(puVar22 + 0x40) = 0x1f;
        builtin_strncpy(*(char **)(puVar22 + 0x30),"create place: no id in response",0x20);
      }
      goto LAB_1405b3af4;
    }
    FUN_1401c4a70(&local_2a8);
    FUN_1405b1f50(&local_248,param_2 + 0x20);
    FUN_1405b0ab0(&local_2a8,*param_5,param_5[1] - *param_5);
    unordered_map_set_too_long(&local_248,&local_1c8,"Content-Digest");
    puVar22 = local_68;
    if (0xf < uStack_290) {
      lVar17 = CONCAT44(local_2a8._4_4_,(undefined4)local_2a8);
      uVar14 = uStack_290 + 1;
      lVar16 = lVar17;
      if (0xfff < uVar14) {
        lVar16 = *(longlong *)(lVar17 + -8);
        if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
        uVar14 = uStack_290 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar16,uVar14);
    }
    FUN_1400a3c00(&local_2a8,0x60,"/places/%lld/world",*(undefined8 *)(puVar22 + 8));
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (char *******)0x0;
    uStack_90 = 0;
    local_98 = (char *******)FUN_140b65d30(0x20);
    local_88 = 0x18;
    uStack_80 = 0x1f;
    *local_98 = (char ******)0x746163696c707061;
    local_98[1] = (char ******)0x6574636f2f6e6f69;
    local_98[2] = (char ******)0x6d61657274732d74;
    *(char *)(local_98 + 3) = '\0';
    lVar16 = *param_5;
    lVar17 = param_5[1];
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    sVar12 = strlen((char *)&local_2a8);
    if ((longlong)sVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    puVar18 = &local_118;
    if (sVar12 < 0x10) {
      uStack_c0 = 0xf;
      local_c8 = sVar12;
      memcpy(&local_d8,&local_2a8,sVar12);
      *(undefined1 *)((longlong)&local_d8 + sVar12) = 0;
    }
    else {
      uVar8 = sVar12 | 0xf;
      uVar14 = 0x16;
      if (0x16 < uVar8) {
        uVar14 = uVar8;
      }
      if (uVar8 < 0xfff) {
        local_120 = piVar26;
        pvVar25 = (void *)FUN_140b65d30(uVar14 + 1);
      }
      else {
        local_120 = piVar26;
        lVar19 = FUN_140b65d30(uVar14 + 0x28);
        pvVar25 = (void *)(lVar19 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)pvVar25 - 8) = lVar19;
      }
      local_d8 = pvVar25;
      local_c8 = sVar12;
      uStack_c0 = uVar14;
      memcpy(pvVar25,&local_2a8,sVar12);
      *(undefined1 *)((longlong)pvVar25 + sVar12) = 0;
      piVar26 = local_120;
    }
    local_e0 = 0;
    local_130 = 0;
    local_1d0 = 0;
    local_a8 = 3;
    uStack_a0 = 0xf;
    uStack_b5 = 0;
    uStack_b1 = 0;
    uStack_ad = 0;
    uStack_a9 = 0;
    local_b8 = 0x5550;
    uStack_b6 = 0x54;
    FUN_1405b8d60(local_178[0],&local_1c8,&local_b8,&local_d8,&local_248,lVar16,lVar17 - lVar16,
                  &local_208,puVar15,&local_98,puVar18);
    if (0xf < uStack_a0) {
      lVar17 = CONCAT17((undefined1)uStack_b1,CONCAT43(uStack_b5,CONCAT12(uStack_b6,local_b8)));
      uVar14 = uStack_a0 + 1;
      lVar16 = lVar17;
      if (0xfff < uVar14) {
        lVar16 = *(longlong *)(lVar17 + -8);
        if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
        uVar14 = uStack_a0 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar16,uVar14);
    }
    if (0xf < uStack_c0) {
      uVar14 = uStack_c0 + 1;
      pvVar25 = local_d8;
      if (0xfff < uVar14) {
        pvVar25 = *(void **)((longlong)local_d8 + -8);
        if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pvVar25))) goto LAB_1405b4650;
        uVar14 = uStack_c0 + 0x28;
      }
      thunk_FUN_140b68ba8(pvVar25,uVar14);
    }
    if (0xf < uStack_80) {
      uVar14 = uStack_80 + 1;
      pppppppcVar24 = local_98;
      if (0xfff < uVar14) {
        pppppppcVar24 = (char *******)local_98[-1];
        if ((char *)0x1f < (char *)((longlong)local_98 + (-8 - (longlong)pppppppcVar24)))
        goto LAB_1405b4650;
        uVar14 = uStack_80 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppcVar24,uVar14);
    }
    lVar16 = CONCAT44(uStack_1c4,local_1c8);
    if (lVar16 == 0) {
      ssl_server_hostname_verification_failed(puVar18,uStack_1c0);
      if (uStack_100 - local_108 < 0x21) {
        puVar18 = (uint *)FUN_140008af0(&local_118,0x21,local_108,0,
                                        "upload world: connection failed: ",0x21);
      }
      else {
        puVar15 = puVar18;
        if (0xf < uStack_100) {
          puVar15 = (uint *)CONCAT44(uStack_114,local_118);
        }
        pcVar10 = (char *)0x21;
        if (("" < (char *)((longlong)puVar15 + local_108) && puVar15 < (uint *)0x1413a1afb) &&
           (pcVar10 = (char *)((longlong)puVar15 + -0x1413a1ada),
           puVar15 < "upload world: connection failed: " || pcVar10 == (char *)0x0)) {
          pcVar10 = (char *)0x0;
        }
        sVar12 = local_108 + 1;
        puVar20 = (uint *)CONCAT44(uStack_114,local_118);
        if (uStack_100 < 0x10) {
          puVar20 = puVar18;
        }
        local_108 = local_108 + 0x21;
        memmove((char *)((longlong)puVar20 + 0x21),puVar15,sVar12);
        memcpy(puVar15,"upload world: connection failed: ",(size_t)pcVar10);
        memcpy((char *)((longlong)puVar15 + (longlong)pcVar10),pcVar10 + 0x1413a1afb,
               0x21 - (longlong)pcVar10);
      }
      uVar6 = *puVar18;
      uVar9 = *(undefined8 *)(puVar18 + 2);
      uStack_164._3_1_ = (undefined1)uVar9;
      uStack_160 = (uint)((ulonglong)uVar9 >> 8);
      uStack_15c._0_3_ = (undefined3)((ulonglong)uVar9 >> 0x28);
      local_168 = (uint)*(undefined8 *)((longlong)puVar18 + 1);
      uStack_164 = (uint)((ulonglong)*(undefined8 *)((longlong)puVar18 + 1) >> 0x20);
      uVar9 = *(undefined8 *)(puVar18 + 4);
      uVar2 = *(undefined8 *)(puVar18 + 6);
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0xf;
      puVar18[7] = 0;
      *(char *)puVar18 = '\0';
      puVar22 = local_68;
      uVar14 = *(ulonglong *)(local_68 + 0x48);
      if (0xf < uVar14) {
        lVar16 = *local_70;
        uVar8 = uVar14 + 1;
        lVar17 = lVar16;
        if (0xfff < uVar8) {
          lVar17 = *(longlong *)(lVar16 + -8);
          if (0x1f < (ulonglong)((lVar16 + -8) - lVar17)) goto LAB_1405b4650;
          uVar8 = uVar14 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar17,uVar8);
      }
      puVar22[0x30] = (char)uVar6;
      *(ulonglong *)(puVar22 + 0x31) = CONCAT44(uStack_164,local_168);
      *(ulonglong *)(puVar22 + 0x38) =
           CONCAT35((undefined3)uStack_15c,CONCAT41(uStack_160,uStack_164._3_1_));
      *(undefined8 *)(puVar22 + 0x40) = uVar9;
      *(undefined8 *)(puVar22 + 0x48) = uVar2;
      if (0xf < uStack_100) {
        lVar16 = CONCAT44(uStack_114,local_118);
        uVar14 = uStack_100;
joined_r0x0001405b41f6:
        uVar8 = uVar14 + 1;
        lVar17 = lVar16;
        if (0xfff < uVar8) {
          lVar17 = *(longlong *)(lVar16 + -8);
          if (0x1f < (ulonglong)((lVar16 + -8) - lVar17)) goto LAB_1405b4650;
          uVar8 = uVar14 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar17,uVar8);
      }
LAB_1405b4578:
      bVar3 = true;
      bVar4 = false;
    }
    else {
      iVar7 = *(int *)(lVar16 + 0x20);
      *piVar26 = iVar7;
      if (iVar7 - 300U < 0xffffff9c) {
        puVar20 = (uint *)&local_208;
        FUN_140007930(puVar20);
        if (uStack_1f0 - local_1f8 < 0x13) {
          puVar20 = (uint *)FUN_140008af0(&local_208,0x13,local_1f8,0,"upload world: HTTP ",0x13);
        }
        else {
          puVar21 = puVar20;
          if (0xf < uStack_1f0) {
            puVar21 = (uint *)CONCAT17(uStack_201,local_208);
          }
          pcVar10 = (char *)0x13;
          if (("" < (char *)((longlong)puVar21 + local_1f8) && puVar21 < (uint *)0x1413a11c0) &&
             (pcVar10 = (char *)((longlong)puVar21 + -0x1413a11ad),
             puVar21 < "upload world: HTTP " || pcVar10 == (char *)0x0)) {
            pcVar10 = (char *)0x0;
          }
          sVar12 = local_1f8 + 1;
          puVar23 = (uint *)CONCAT17(uStack_201,local_208);
          if (uStack_1f0 < 0x10) {
            puVar23 = puVar20;
          }
          local_1f8 = local_1f8 + 0x13;
          memmove((char *)((longlong)puVar23 + 0x13),puVar21,sVar12);
          memcpy(puVar21,"upload world: HTTP ",(size_t)pcVar10);
          memcpy((char *)((longlong)puVar21 + (longlong)pcVar10),pcVar10 + 0x1413a11c0,
                 0x13 - (longlong)pcVar10);
        }
        local_158 = *(longlong *)(puVar20 + 4);
        uStack_150 = *(ulonglong *)(puVar20 + 6);
        local_168 = *puVar20;
        uStack_164 = puVar20[1];
        uStack_160 = puVar20[2];
        uStack_15c = puVar20[3];
        puVar20[4] = 0;
        puVar20[5] = 0;
        puVar20[6] = 0xf;
        puVar20[7] = 0;
        *(char *)puVar20 = '\0';
        lVar17 = local_158;
        if (uStack_150 - local_158 < 2) {
          puVar15 = (uint *)FUN_140006210(&local_168,2);
        }
        else {
          local_158 = local_158 + 2;
          puVar20 = puVar15;
          if (0xf < uStack_150) {
            puVar20 = (uint *)CONCAT44(uStack_164,local_168);
          }
          *(undefined2 *)((longlong)puVar20 + lVar17) = 0x203a;
          *(undefined1 *)((longlong)puVar20 + lVar17 + 2) = 0;
        }
        local_118 = *puVar15;
        uStack_114 = puVar15[1];
        uStack_110 = puVar15[2];
        uStack_10c = puVar15[3];
        local_108 = *(longlong *)(puVar15 + 4);
        uStack_100 = *(ulonglong *)(puVar15 + 6);
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[6] = 0xf;
        puVar15[7] = 0;
        *(undefined1 *)puVar15 = 0;
        uVar14 = *(ulonglong *)(lVar16 + 0x98);
        if (*(ulonglong *)(lVar16 + 0xa0) < 0x10) {
          pvVar25 = (void *)(lVar16 + 0x88);
        }
        else {
          pvVar25 = *(void **)(lVar16 + 0x88);
        }
        if (uStack_100 - local_108 < uVar14) {
          puVar18 = (uint *)FUN_140006210(&local_118,uVar14,uVar14,pvVar25,uVar14);
        }
        else {
          lVar16 = local_108 + uVar14;
          puVar15 = puVar18;
          if (0xf < uStack_100) {
            puVar15 = (uint *)CONCAT44(uStack_114,local_118);
          }
          pcVar10 = (char *)(local_108 + (longlong)puVar15);
          local_108 = lVar16;
          memmove(pcVar10,pvVar25,uVar14);
          *(char *)((longlong)puVar15 + lVar16) = '\0';
        }
        uVar6 = *puVar18;
        uVar9 = *(undefined8 *)(puVar18 + 2);
        uStack_b1 = (undefined4)uVar9;
        uStack_ad = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar2 = *(undefined8 *)((longlong)puVar18 + 1);
        local_b8 = (undefined2)uVar2;
        uStack_b6 = (undefined1)((ulonglong)uVar2 >> 0x10);
        uStack_b5 = (undefined4)((ulonglong)uVar2 >> 0x18);
        uStack_b1._1_3_ = (undefined3)((ulonglong)uVar9 >> 8);
        uStack_b1._0_1_ = (undefined1)((ulonglong)uVar2 >> 0x38);
        uVar9 = *(undefined8 *)(puVar18 + 4);
        uVar2 = *(undefined8 *)(puVar18 + 6);
        puVar18[4] = 0;
        puVar18[5] = 0;
        puVar18[6] = 0xf;
        puVar18[7] = 0;
        *(char *)puVar18 = '\0';
        puVar22 = local_68;
        uVar14 = *(ulonglong *)(local_68 + 0x48);
        if (0xf < uVar14) {
          lVar16 = *local_70;
          uVar8 = uVar14 + 1;
          lVar17 = lVar16;
          if (0xfff < uVar8) {
            lVar17 = *(longlong *)(lVar16 + -8);
            if (0x1f < (ulonglong)((lVar16 + -8) - lVar17)) goto LAB_1405b4650;
            uVar8 = uVar14 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar17,uVar8);
        }
        puVar22[0x30] = (char)uVar6;
        *(ulonglong *)(puVar22 + 0x31) =
             CONCAT17((undefined1)uStack_b1,CONCAT43(uStack_b5,CONCAT12(uStack_b6,local_b8)));
        *(ulonglong *)(puVar22 + 0x38) = CONCAT44(uStack_ad,uStack_b1);
        *(undefined8 *)(puVar22 + 0x40) = uVar9;
        *(undefined8 *)(puVar22 + 0x48) = uVar2;
        if (0xf < uStack_100) {
          lVar17 = CONCAT44(uStack_114,local_118);
          uVar14 = uStack_100 + 1;
          lVar16 = lVar17;
          if (0xfff < uVar14) {
            lVar16 = *(longlong *)(lVar17 + -8);
            if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
            uVar14 = uStack_100 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar16,uVar14);
        }
        local_108 = 0;
        uStack_100 = 0xf;
        local_118 = local_118 & 0xffffff00;
        if (0xf < uStack_150) {
          lVar17 = CONCAT44(uStack_164,local_168);
          uVar14 = uStack_150 + 1;
          lVar16 = lVar17;
          if (0xfff < uVar14) {
            lVar16 = *(longlong *)(lVar17 + -8);
            if (0x1f < (ulonglong)((lVar17 + -8) - lVar16)) goto LAB_1405b4650;
            uVar14 = uStack_150 + 0x28;
          }
          thunk_FUN_140b68ba8(lVar16,uVar14);
        }
        local_158 = 0;
        uStack_150 = 0xf;
        local_168 = local_168 & 0xffffff00;
        if (0xf < uStack_1f0) {
          lVar16 = CONCAT17(uStack_201,local_208);
          uVar14 = uStack_1f0;
          goto joined_r0x0001405b41f6;
        }
        goto LAB_1405b4578;
      }
      bVar4 = true;
      bVar3 = false;
    }
    FUN_1401c4a70(&local_1c8);
    if (local_230 != 0) {
      uVar8 = local_220 - local_230;
      uVar14 = local_230;
      if (0xfff < uVar8) {
        uVar14 = *(ulonglong *)(local_230 - 8);
        if (0x1f < (local_230 - 8) - uVar14) goto LAB_1405b4650;
        uVar8 = uVar8 + 0x27;
      }
      thunk_FUN_140b68ba8(uVar14,uVar8);
      local_230 = 0;
      uStack_228 = 0;
      local_220 = 0;
    }
    *(undefined8 *)puStack_240[1] = 0;
    puVar5 = (undefined8 *)*puStack_240;
    while (puVar5 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar5;
      FUN_140016fe0(puVar5 + 2);
      thunk_FUN_140b68ba8(puVar5,0x50);
      puVar5 = puVar1;
    }
    thunk_FUN_140b68ba8(puStack_240,0x50);
    if (bVar4) {
      *local_68 = 1;
      if (local_178[0] == (undefined8 *)0x0) {
        return local_68;
      }
      (**(code **)*local_178[0])(local_178[0],1);
      return local_68;
    }
  }
  if (local_178[0] != (undefined8 *)0x0) {
    (**(code **)*local_178[0])(local_178[0],1);
  }
  puVar22 = local_68;
  if (!bVar3) {
    uVar14 = *(ulonglong *)(local_68 + 0x48);
    if (0xf < uVar14) {
      lVar16 = *local_70;
      uVar8 = uVar14 + 1;
      lVar17 = lVar16;
      if (0xfff < uVar8) {
        lVar17 = *(longlong *)(lVar16 + -8);
        if (0x1f < (ulonglong)((lVar16 + -8) - lVar17)) goto LAB_1405b4650;
        uVar8 = uVar14 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar17,uVar8);
    }
    *(undefined8 *)(puVar22 + 0x40) = 0;
    *(undefined8 *)(puVar22 + 0x48) = 0xf;
    puVar22[0x30] = 0;
    uVar14 = *(ulonglong *)(puVar22 + 0x28);
    if (0xf < uVar14) {
      lVar16 = *local_128;
      uVar8 = uVar14 + 1;
      lVar17 = lVar16;
      if (0xfff < uVar8) {
        lVar17 = *(longlong *)(lVar16 + -8);
        if (0x1f < (ulonglong)((lVar16 + -8) - lVar17)) {
LAB_1405b4650:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar8 = uVar14 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar17,uVar8);
    }
    *(undefined8 *)(puVar22 + 0x20) = 0;
    *(undefined8 *)(puVar22 + 0x28) = 0xf;
    puVar22[0x10] = 0;
  }
  return local_68;
}

