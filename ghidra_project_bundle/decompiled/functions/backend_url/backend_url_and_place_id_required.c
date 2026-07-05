/**
 * Function: backend_url_and_place_id_required
 * Address:  1405b1040
 * Signature: undefined backend_url_and_place_id_required(void)
 * Body size: 3013 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 *
backend_url_and_place_id_required(undefined1 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  size_t sVar10;
  longlong lVar11;
  uint *******pppppppuVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *******pppppppuVar16;
  char *pcVar17;
  longlong lVar18;
  longlong lVar19;
  uint ******ppppppuVar20;
  undefined1 *puVar21;
  uint *******_Src;
  longlong *plVar22;
  void *pvVar23;
  uint *puVar24;
  longlong local_298;
  undefined4 local_290;
  undefined1 local_248 [8];
  undefined8 *local_240;
  longlong local_230;
  undefined8 uStack_228;
  longlong local_220;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  ulonglong uStack_1f0;
  uint *******local_1a0 [2];
  longlong local_190;
  ulonglong uStack_188;
  undefined8 local_168;
  longlong *local_160;
  char *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong uStack_140;
  uint local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint ******local_128;
  uint ******ppppppuStack_120;
  undefined8 local_100;
  undefined8 *local_f8 [2];
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  size_t local_98;
  ulonglong uStack_90;
  undefined2 local_88;
  undefined1 uStack_86;
  undefined4 uStack_85;
  undefined4 uStack_81;
  undefined4 uStack_7d;
  undefined1 uStack_79;
  undefined8 local_78;
  ulonglong local_70;
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
  plVar22 = (longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xf;
  *(undefined8 *)(param_1 + 0x50) = 0;
  local_68 = param_1;
  if ((*(longlong *)(param_2 + 0x10) == 0) || (*(longlong *)(param_2 + 0x40) < 1)) {
    FUN_1400069b0(plVar22,0x21,param_3,"backend_url and place_id required");
    return local_68;
  }
  *(longlong *)(param_1 + 0x50) = param_3[1] - *param_3;
  FUN_1405b0940(&local_208);
  puVar21 = local_68;
  plVar1 = (longlong *)(local_68 + 0x10);
  if (plVar1 == &local_208) {
    if (0xf < uStack_1f0) {
      lVar18 = CONCAT44(local_208._4_4_,(undefined4)local_208);
      uVar9 = uStack_1f0 + 1;
      lVar19 = lVar18;
      if (0xfff < uVar9) {
        lVar19 = *(longlong *)(lVar18 + -8);
        if (0x1f < (ulonglong)((lVar18 + -8) - lVar19)) goto LAB_1405b1be7;
        uVar9 = uStack_1f0 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar19,uVar9);
    }
  }
  else {
    uVar9 = *(ulonglong *)(local_68 + 0x28);
    if (0xf < uVar9) {
      lVar19 = *plVar1;
      uVar8 = uVar9 + 1;
      lVar18 = lVar19;
      if (0xfff < uVar8) {
        lVar18 = *(longlong *)(lVar19 + -8);
        if (0x1f < (ulonglong)((lVar19 + -8) - lVar18)) goto LAB_1405b1be7;
        uVar8 = uVar9 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar18,uVar8);
    }
    *(undefined8 *)(puVar21 + 0x20) = local_1f8;
    *(ulonglong *)(puVar21 + 0x28) = uStack_1f0;
    *(undefined4 *)plVar1 = (undefined4)local_208;
    *(undefined4 *)(puVar21 + 0x14) = local_208._4_4_;
    *(undefined4 *)(puVar21 + 0x18) = uStack_200;
    *(undefined4 *)(puVar21 + 0x1c) = uStack_1fc;
  }
  FUN_1401f6c40(local_f8,param_2);
  local_f8[0][0x3c] = 5;
  local_f8[0][0x3d] = 0;
  local_f8[0][0x3e] = 0x1e;
  local_f8[0][0x3f] = 0;
  local_f8[0][0x40] = 0x1e;
  local_f8[0][0x41] = 0;
  FUN_1405b1f50(local_248,param_2 + 0x20);
  FUN_1405b0ab0(&local_208,*param_3,param_3[1] - *param_3);
  unordered_map_set_too_long(local_248,&local_298,"Content-Digest");
  if (0xf < uStack_1f0) {
    lVar18 = CONCAT44(local_208._4_4_,(undefined4)local_208);
    uVar9 = uStack_1f0 + 1;
    lVar19 = lVar18;
    if (0xfff < uVar9) {
      lVar19 = *(longlong *)(lVar18 + -8);
      if (0x1f < (ulonglong)((lVar18 + -8) - lVar19)) goto LAB_1405b1be7;
      uVar9 = uStack_1f0 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar19,uVar9);
  }
  FUN_1400a3c00(&local_208,0x60,"/places/%lld/world",*(undefined8 *)(param_2 + 0x40));
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (char *)0x0;
  uStack_150 = 0;
  local_158 = (char *)FUN_140b65d30(0x20);
  local_148 = 0x18;
  uStack_140 = 0x1f;
  builtin_strncpy(local_158,"application/octet-stream",0x19);
  lVar19 = *param_3;
  lVar18 = param_3[1];
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  sVar10 = strlen((char *)&local_208);
  if ((longlong)sVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (sVar10 < 0x10) {
    uStack_90 = 0xf;
    local_98 = sVar10;
    memcpy(&local_a8,&local_208,sVar10);
    *(undefined1 *)((longlong)&local_a8 + sVar10) = 0;
  }
  else {
    uVar8 = sVar10 | 0xf;
    uVar9 = 0x16;
    if (0x16 < uVar8) {
      uVar9 = uVar8;
    }
    if (uVar8 < 0xfff) {
      pvVar23 = (void *)FUN_140b65d30(uVar9 + 1);
    }
    else {
      lVar11 = FUN_140b65d30(uVar9 + 0x28);
      pvVar23 = (void *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar23 - 8) = lVar11;
    }
    local_a8 = pvVar23;
    local_98 = sVar10;
    uStack_90 = uVar9;
    memcpy(pvVar23,&local_208,sVar10);
    *(undefined1 *)((longlong)pvVar23 + sVar10) = 0;
  }
  local_b0 = 0;
  local_100 = 0;
  local_168 = 0;
  local_78 = 3;
  local_70 = 0xf;
  uStack_85 = 0;
  uStack_81 = 0;
  uStack_7d = 0;
  uStack_79 = 0;
  local_88 = 0x5550;
  uStack_86 = 0x54;
  puVar14 = &local_e8;
  puVar13 = &local_138;
  FUN_1405b8d60(local_f8[0],&local_298,&local_88,&local_a8,local_248,lVar19,lVar18 - lVar19,
                local_1a0,puVar13,&local_158,puVar14);
  puVar21 = local_68;
  if (0xf < local_70) {
    lVar18 = CONCAT17((undefined1)uStack_81,CONCAT43(uStack_85,CONCAT12(uStack_86,local_88)));
    uVar9 = local_70 + 1;
    lVar19 = lVar18;
    if (0xfff < uVar9) {
      lVar19 = *(longlong *)(lVar18 + -8);
      if (0x1f < (ulonglong)((lVar18 + -8) - lVar19)) goto LAB_1405b1be7;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar19,uVar9);
  }
  if (0xf < uStack_90) {
    uVar9 = uStack_90 + 1;
    pvVar23 = local_a8;
    if (0xfff < uVar9) {
      pvVar23 = *(void **)((longlong)local_a8 + -8);
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pvVar23))) goto LAB_1405b1be7;
      uVar9 = uStack_90 + 0x28;
    }
    thunk_FUN_140b68ba8(pvVar23,uVar9);
  }
  if (0xf < uStack_140) {
    uVar9 = uStack_140 + 1;
    pcVar17 = local_158;
    if (0xfff < uVar9) {
      pcVar17 = *(char **)(local_158 + -8);
      if ((char *)0x1f < local_158 + (-8 - (longlong)pcVar17)) goto LAB_1405b1be7;
      uVar9 = uStack_140 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar17,uVar9);
  }
  if (local_298 == 0) {
    ssl_server_hostname_verification_failed(puVar14,local_290);
    puVar21 = local_68;
    if (uStack_d0 - local_d8 < 0x13) {
      puVar14 = (uint *)FUN_140008af0(&local_e8,0x13,local_d8,0,"connection failed: ",0x13);
      puVar21 = local_68;
    }
    else {
      puVar13 = puVar14;
      if (0xf < uStack_d0) {
        puVar13 = (uint *)CONCAT44(uStack_e4,local_e8);
      }
      puVar24 = (uint *)0x13;
      if ((" connection failed: " < (char *)((longlong)puVar13 + local_d8) &&
           puVar13 < (uint *)0x1413a1afb) &&
         (puVar24 = puVar13 + -0x504e86ba, puVar13 < (uint *)0x1413a1ae8 || puVar24 == (uint *)0x0))
      {
        puVar24 = (uint *)0x0;
      }
      sVar10 = local_d8 + 1;
      puVar15 = (uint *)CONCAT44(uStack_e4,local_e8);
      if (uStack_d0 < 0x10) {
        puVar15 = puVar14;
      }
      local_d8 = local_d8 + 0x13;
      memmove((char *)((longlong)puVar15 + 0x13),puVar13,sVar10);
      memcpy(puVar13,"connection failed: ",(size_t)puVar24);
      memcpy((char *)((longlong)puVar13 + (longlong)puVar24),
             (char *)((longlong)puVar24 + 0x1413a1afb),0x13 - (longlong)puVar24);
    }
    uVar7 = *puVar14;
    uVar3 = *(undefined8 *)(puVar14 + 2);
    uStack_134._3_1_ = (undefined1)uVar3;
    uStack_130 = (undefined4)((ulonglong)uVar3 >> 8);
    uStack_12c._0_3_ = (undefined3)((ulonglong)uVar3 >> 0x28);
    local_138 = (uint)*(undefined8 *)((longlong)puVar14 + 1);
    uStack_134 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar14 + 1) >> 0x20);
    uVar3 = *(undefined8 *)(puVar14 + 4);
    uVar4 = *(undefined8 *)(puVar14 + 6);
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[6] = 0xf;
    puVar14[7] = 0;
    *(char *)puVar14 = '\0';
    uVar9 = *(ulonglong *)(puVar21 + 0x48);
    if (0xf < uVar9) {
      lVar19 = *plVar22;
      uVar8 = uVar9 + 1;
      lVar18 = lVar19;
      if (0xfff < uVar8) {
        lVar18 = *(longlong *)(lVar19 + -8);
        if (0x1f < (ulonglong)((lVar19 + -8) - lVar18)) goto LAB_1405b1be7;
        uVar8 = uVar9 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar18,uVar8);
    }
    puVar21[0x30] = (char)uVar7;
    *(ulonglong *)(puVar21 + 0x31) = CONCAT44(uStack_134,local_138);
    *(ulonglong *)(puVar21 + 0x38) =
         CONCAT35((undefined3)uStack_12c,CONCAT41(uStack_130,uStack_134._3_1_));
    *(undefined8 *)(puVar21 + 0x40) = uVar3;
    *(undefined8 *)(puVar21 + 0x48) = uVar4;
    if (0xf < uStack_d0) {
      local_1a0[0] = (uint *******)CONCAT44(uStack_e4,local_e8);
      uStack_188 = uStack_d0;
joined_r0x0001405b1778:
      uVar9 = uStack_188 + 1;
      pppppppuVar12 = local_1a0[0];
      if (0xfff < uVar9) {
        pppppppuVar12 = (uint *******)local_1a0[0][-1];
        if ((char *)0x1f < (char *)((longlong)local_1a0[0] + (-8 - (longlong)pppppppuVar12)))
        goto LAB_1405b1be7;
        uVar9 = uStack_188 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar12,uVar9);
    }
  }
  else {
    iVar2 = *(int *)(local_298 + 0x20);
    *(int *)(puVar21 + 4) = iVar2;
    if (iVar2 - 300U < 0xffffff9c) {
      pppppppuVar12 = (uint *******)local_1a0;
      FUN_140007930(pppppppuVar12);
      if (uStack_188 - local_190 < 5) {
        pppppppuVar12 = (uint *******)FUN_140008af0(local_1a0,5,local_190,0,"HTTP ",5);
      }
      else {
        _Src = pppppppuVar12;
        if (0xf < uStack_188) {
          _Src = local_1a0[0];
        }
        pcVar17 = (char *)0x5;
        if ((" HTTP " < (char *)((longlong)_Src + local_190) && _Src < (uint *******)0x1413a11c0) &&
           (pcVar17 = (char *)((longlong)_Src + -0x1413a11bb),
           _Src < (uint *******)0x1413a11bb || pcVar17 == (char *)0x0)) {
          pcVar17 = (char *)0x0;
        }
        sVar10 = local_190 + 1;
        pppppppuVar16 = local_1a0[0];
        if (uStack_188 < 0x10) {
          pppppppuVar16 = pppppppuVar12;
        }
        local_190 = local_190 + 5;
        local_160 = plVar22;
        memmove((char *)((longlong)pppppppuVar16 + 5),_Src,sVar10);
        memcpy(_Src,"HTTP ",(size_t)pcVar17);
        memcpy((char *)((longlong)_Src + (longlong)pcVar17),pcVar17 + 0x1413a11c0,
               5 - (longlong)pcVar17);
        plVar22 = local_160;
      }
      local_128 = pppppppuVar12[2];
      ppppppuStack_120 = pppppppuVar12[3];
      local_138 = *(uint *)pppppppuVar12;
      uStack_134 = *(undefined4 *)((longlong)pppppppuVar12 + 4);
      uStack_130 = *(undefined4 *)(pppppppuVar12 + 1);
      uStack_12c = *(undefined4 *)((longlong)pppppppuVar12 + 0xc);
      pppppppuVar12[2] = (uint ******)0x0;
      pppppppuVar12[3] = (uint ******)0xf;
      *(char *)pppppppuVar12 = '\0';
      ppppppuVar20 = local_128;
      if ((ulonglong)((longlong)ppppppuStack_120 - (longlong)local_128) < 2) {
        puVar13 = (uint *)FUN_140006210(&local_138,2);
      }
      else {
        local_128 = (uint ******)((longlong)local_128 + 2);
        puVar24 = puVar13;
        if ((uint ******)0xf < ppppppuStack_120) {
          puVar24 = (uint *)CONCAT44(uStack_134,local_138);
        }
        *(undefined2 *)((longlong)puVar24 + (longlong)ppppppuVar20) = 0x203a;
        *(undefined1 *)((longlong)puVar24 + (longlong)ppppppuVar20 + 2) = 0;
      }
      local_e8 = *puVar13;
      uStack_e4 = puVar13[1];
      uStack_e0 = puVar13[2];
      uStack_dc = puVar13[3];
      local_d8 = *(longlong *)(puVar13 + 4);
      uStack_d0 = *(ulonglong *)(puVar13 + 6);
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[6] = 0xf;
      puVar13[7] = 0;
      *(undefined1 *)puVar13 = 0;
      puVar21 = local_68;
      uVar9 = *(ulonglong *)(local_298 + 0x98);
      if (*(ulonglong *)(local_298 + 0xa0) < 0x10) {
        pvVar23 = (void *)(local_298 + 0x88);
      }
      else {
        pvVar23 = *(void **)(local_298 + 0x88);
      }
      if (uStack_d0 - local_d8 < uVar9) {
        puVar14 = (uint *)FUN_140006210(&local_e8,uVar9,uVar9,pvVar23,uVar9);
        puVar21 = local_68;
      }
      else {
        lVar19 = local_d8 + uVar9;
        puVar13 = puVar14;
        if (0xf < uStack_d0) {
          puVar13 = (uint *)CONCAT44(uStack_e4,local_e8);
        }
        pcVar17 = (char *)(local_d8 + (longlong)puVar13);
        local_d8 = lVar19;
        memmove(pcVar17,pvVar23,uVar9);
        *(char *)((longlong)puVar13 + lVar19) = '\0';
      }
      uVar7 = *puVar14;
      uVar3 = *(undefined8 *)(puVar14 + 2);
      uStack_81 = (undefined4)uVar3;
      uStack_7d = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar4 = *(undefined8 *)((longlong)puVar14 + 1);
      local_88 = (undefined2)uVar4;
      uStack_86 = (undefined1)((ulonglong)uVar4 >> 0x10);
      uStack_85 = (undefined4)((ulonglong)uVar4 >> 0x18);
      uStack_81._1_3_ = (undefined3)((ulonglong)uVar3 >> 8);
      uStack_81._0_1_ = (undefined1)((ulonglong)uVar4 >> 0x38);
      uVar3 = *(undefined8 *)(puVar14 + 4);
      uVar4 = *(undefined8 *)(puVar14 + 6);
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0xf;
      puVar14[7] = 0;
      *(char *)puVar14 = '\0';
      uVar9 = *(ulonglong *)(puVar21 + 0x48);
      if (0xf < uVar9) {
        lVar19 = *plVar22;
        uVar8 = uVar9 + 1;
        lVar18 = lVar19;
        if (0xfff < uVar8) {
          lVar18 = *(longlong *)(lVar19 + -8);
          if (0x1f < (ulonglong)((lVar19 + -8) - lVar18)) goto LAB_1405b1be7;
          uVar8 = uVar9 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar18,uVar8);
      }
      puVar21[0x30] = (char)uVar7;
      *(ulonglong *)(puVar21 + 0x31) =
           CONCAT17((undefined1)uStack_81,CONCAT43(uStack_85,CONCAT12(uStack_86,local_88)));
      *(ulonglong *)(puVar21 + 0x38) = CONCAT44(uStack_7d,uStack_81);
      *(undefined8 *)(puVar21 + 0x40) = uVar3;
      *(undefined8 *)(puVar21 + 0x48) = uVar4;
      if (0xf < uStack_d0) {
        lVar18 = CONCAT44(uStack_e4,local_e8);
        uVar9 = uStack_d0 + 1;
        lVar19 = lVar18;
        if (0xfff < uVar9) {
          lVar19 = *(longlong *)(lVar18 + -8);
          if (0x1f < (ulonglong)((lVar18 + -8) - lVar19)) goto LAB_1405b1be7;
          uVar9 = uStack_d0 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar19,uVar9);
      }
      local_d8 = 0;
      uStack_d0 = 0xf;
      local_e8 = local_e8 & 0xffffff00;
      if ((uint ******)0xf < ppppppuStack_120) {
        lVar18 = CONCAT44(uStack_134,local_138);
        ppppppuVar20 = (uint ******)((longlong)ppppppuStack_120 + 1);
        lVar19 = lVar18;
        if ((uint ******)0xfff < ppppppuVar20) {
          lVar19 = *(longlong *)(lVar18 + -8);
          if (0x1f < (ulonglong)((lVar18 + -8) - lVar19)) goto LAB_1405b1be7;
          ppppppuVar20 = ppppppuStack_120 + 5;
        }
        thunk_FUN_140b68ba8(lVar19,ppppppuVar20);
      }
      local_128 = (uint ******)0x0;
      ppppppuStack_120 = (uint ******)0xf;
      local_138 = local_138 & 0xffffff00;
      if (0xf < uStack_188) goto joined_r0x0001405b1778;
    }
    else {
      *puVar21 = 1;
    }
  }
  FUN_1401c4a70(&local_298);
  if (local_230 != 0) {
    uVar9 = local_220 - local_230;
    lVar19 = local_230;
    if (0xfff < uVar9) {
      lVar19 = *(longlong *)(local_230 + -8);
      if (0x1f < (ulonglong)((local_230 + -8) - lVar19)) {
LAB_1405b1be7:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar9 = uVar9 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar19,uVar9);
    local_230 = 0;
    uStack_228 = 0;
    local_220 = 0;
  }
  *(undefined8 *)local_240[1] = 0;
  puVar6 = (undefined8 *)*local_240;
  while (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar6;
    FUN_140016fe0(puVar6 + 2);
    thunk_FUN_140b68ba8(puVar6,0x50);
    puVar6 = puVar5;
  }
  thunk_FUN_140b68ba8(local_240,0x50);
  if (local_f8[0] != (undefined8 *)0x0) {
    (**(code **)*local_f8[0])(local_f8[0],1);
  }
  return local_68;
}

