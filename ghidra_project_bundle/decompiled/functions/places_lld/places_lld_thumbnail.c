/**
 * Function: places_lld_thumbnail
 * Address:  1405b4c50
 * Signature: undefined places_lld_thumbnail(void)
 * Body size: 2744 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * places_lld_thumbnail(undefined1 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  size_t sVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *******pppppppuVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *******pppppppuVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  uint ******ppppppuVar19;
  uint *puVar20;
  uint *******_Src;
  longlong *plVar21;
  void *pvVar22;
  undefined1 *puVar23;
  char local_298 [104];
  longlong local_230;
  undefined4 local_228;
  undefined1 local_1e0 [8];
  undefined8 *local_1d8;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  uint *******local_1a0 [2];
  longlong local_190;
  ulonglong uStack_188;
  undefined8 local_168;
  longlong *local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  ulonglong local_140;
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
  plVar21 = (longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xf;
  *(undefined8 *)(param_1 + 0x50) = 0;
  local_68 = param_1;
  if ((*(longlong *)(param_2 + 0x10) == 0) || (*(longlong *)(param_2 + 0x40) < 1)) {
    FUN_1400069b0(plVar21,0x21,param_3,"backend_url and place_id required");
    return local_68;
  }
  *(longlong *)(param_1 + 0x50) = param_3[1] - *param_3;
  FUN_1401f6c40(local_f8,param_2);
  local_f8[0][0x3c] = 10;
  local_f8[0][0x3d] = 0;
  local_f8[0][0x3e] = 0x1e;
  local_f8[0][0x3f] = 0;
  local_f8[0][0x40] = 0x1e;
  local_f8[0][0x41] = 0;
  FUN_1405b1f50(local_1e0,param_2 + 0x20);
  unordered_map_set_too_long(local_1e0,local_298,"Content-Type","image/png");
  FUN_1400a3c00(local_298,0x60,"/places/%lld/thumbnail",*(undefined8 *)(param_2 + 0x40));
  local_148 = 9;
  local_140 = 0xf;
  local_158 = 0x6e702f6567616d69;
  local_150 = 0x67;
  lVar18 = *param_3;
  lVar17 = param_3[1];
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  sVar7 = strlen(local_298);
  if ((longlong)sVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (sVar7 < 0x10) {
    uStack_90 = 0xf;
    local_98 = sVar7;
    memcpy(&local_a8,local_298,sVar7);
    *(undefined1 *)((longlong)&local_a8 + sVar7) = 0;
  }
  else {
    uVar13 = sVar7 | 0xf;
    uVar9 = 0x16;
    if (0x16 < uVar13) {
      uVar9 = uVar13;
    }
    if (uVar13 < 0xfff) {
      pvVar22 = (void *)FUN_140b65d30(uVar9 + 1);
    }
    else {
      lVar8 = FUN_140b65d30(uVar9 + 0x28);
      pvVar22 = (void *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar22 - 8) = lVar8;
    }
    local_a8 = pvVar22;
    local_98 = sVar7;
    uStack_90 = uVar9;
    memcpy(pvVar22,local_298,sVar7);
    *(undefined1 *)((longlong)pvVar22 + sVar7) = 0;
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
  puVar12 = &local_e8;
  puVar11 = &local_138;
  FUN_1405b8d60(local_f8[0],&local_230,&local_88,&local_a8,local_1e0,lVar18,lVar17 - lVar18,
                local_1a0,puVar11,&local_158,puVar12);
  puVar23 = local_68;
  if (0xf < local_70) {
    lVar17 = CONCAT17((undefined1)uStack_81,CONCAT43(uStack_85,CONCAT12(uStack_86,local_88)));
    uVar9 = local_70 + 1;
    lVar18 = lVar17;
    if (0xfff < uVar9) {
      lVar18 = *(longlong *)(lVar17 + -8);
      if (0x1f < (ulonglong)((lVar17 + -8) - lVar18)) goto LAB_1405b56ea;
      uVar9 = local_70 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar18,uVar9);
  }
  if (0xf < uStack_90) {
    uVar9 = uStack_90 + 1;
    pvVar22 = local_a8;
    if (0xfff < uVar9) {
      pvVar22 = *(void **)((longlong)local_a8 + -8);
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pvVar22))) goto LAB_1405b56ea;
      uVar9 = uStack_90 + 0x28;
    }
    thunk_FUN_140b68ba8(pvVar22,uVar9);
  }
  if (0xf < local_140) {
    uVar9 = local_140 + 1;
    lVar18 = local_158;
    if (0xfff < uVar9) {
      lVar18 = *(longlong *)(local_158 + -8);
      if (0x1f < (ulonglong)((local_158 + -8) - lVar18)) goto LAB_1405b56ea;
      uVar9 = local_140 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar18,uVar9);
  }
  if (local_230 == 0) {
    ssl_server_hostname_verification_failed(puVar12,local_228);
    if (uStack_d0 - local_d8 < 0x13) {
      puVar12 = (uint *)FUN_140008af0(&local_e8,0x13,local_d8,0,"connection failed: ",0x13);
    }
    else {
      puVar11 = puVar12;
      if (0xf < uStack_d0) {
        puVar11 = (uint *)CONCAT44(uStack_e4,local_e8);
      }
      puVar20 = (uint *)0x13;
      if ((" connection failed: " < (char *)((longlong)puVar11 + local_d8) &&
           puVar11 < (uint *)0x1413a1afb) &&
         (puVar20 = puVar11 + -0x504e86ba, puVar11 < (uint *)0x1413a1ae8 || puVar20 == (uint *)0x0))
      {
        puVar20 = (uint *)0x0;
      }
      sVar7 = local_d8 + 1;
      puVar14 = (uint *)CONCAT44(uStack_e4,local_e8);
      if (uStack_d0 < 0x10) {
        puVar14 = puVar12;
      }
      local_d8 = local_d8 + 0x13;
      memmove((char *)((longlong)puVar14 + 0x13),puVar11,sVar7);
      memcpy(puVar11,"connection failed: ",(size_t)puVar20);
      memcpy((char *)((longlong)puVar11 + (longlong)puVar20),
             (char *)((longlong)puVar20 + 0x1413a1afb),0x13 - (longlong)puVar20);
    }
    uVar6 = *puVar12;
    uVar2 = *(undefined8 *)(puVar12 + 2);
    uStack_134._3_1_ = (undefined1)uVar2;
    uStack_130 = (undefined4)((ulonglong)uVar2 >> 8);
    uStack_12c._0_3_ = (undefined3)((ulonglong)uVar2 >> 0x28);
    local_138 = (uint)*(undefined8 *)((longlong)puVar12 + 1);
    uStack_134 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar12 + 1) >> 0x20);
    uVar2 = *(undefined8 *)(puVar12 + 4);
    uVar3 = *(undefined8 *)(puVar12 + 6);
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0xf;
    puVar12[7] = 0;
    *(char *)puVar12 = '\0';
    puVar23 = local_68;
    uVar9 = *(ulonglong *)(local_68 + 0x48);
    if (0xf < uVar9) {
      lVar18 = *plVar21;
      uVar13 = uVar9 + 1;
      lVar17 = lVar18;
      if (0xfff < uVar13) {
        lVar17 = *(longlong *)(lVar18 + -8);
        if (0x1f < (ulonglong)((lVar18 + -8) - lVar17)) goto LAB_1405b56ea;
        uVar13 = uVar9 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar17,uVar13);
    }
    puVar23[0x30] = (char)uVar6;
    *(ulonglong *)(puVar23 + 0x31) = CONCAT44(uStack_134,local_138);
    *(ulonglong *)(puVar23 + 0x38) =
         CONCAT35((undefined3)uStack_12c,CONCAT41(uStack_130,uStack_134._3_1_));
    *(undefined8 *)(puVar23 + 0x40) = uVar2;
    *(undefined8 *)(puVar23 + 0x48) = uVar3;
    if (0xf < uStack_d0) {
      local_1a0[0] = (uint *******)CONCAT44(uStack_e4,local_e8);
      uStack_188 = uStack_d0;
joined_r0x0001405b5267:
      uVar9 = uStack_188 + 1;
      pppppppuVar10 = local_1a0[0];
      if (0xfff < uVar9) {
        pppppppuVar10 = (uint *******)local_1a0[0][-1];
        if ((char *)0x1f < (char *)((longlong)local_1a0[0] + (-8 - (longlong)pppppppuVar10)))
        goto LAB_1405b56ea;
        uVar9 = uStack_188 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar10,uVar9);
    }
  }
  else {
    iVar1 = *(int *)(local_230 + 0x20);
    *(int *)(puVar23 + 4) = iVar1;
    if (iVar1 - 300U < 0xffffff9c) {
      pppppppuVar10 = (uint *******)local_1a0;
      FUN_140007930(pppppppuVar10);
      if (uStack_188 - local_190 < 5) {
        pppppppuVar10 = (uint *******)FUN_140008af0(local_1a0,5,local_190,0,"HTTP ",5);
      }
      else {
        _Src = pppppppuVar10;
        if (0xf < uStack_188) {
          _Src = local_1a0[0];
        }
        pcVar16 = (char *)0x5;
        if ((" HTTP " < (char *)((longlong)_Src + local_190) && _Src < (uint *******)0x1413a11c0) &&
           (pcVar16 = (char *)((longlong)_Src + -0x1413a11bb),
           _Src < (uint *******)0x1413a11bb || pcVar16 == (char *)0x0)) {
          pcVar16 = (char *)0x0;
        }
        sVar7 = local_190 + 1;
        pppppppuVar15 = local_1a0[0];
        if (uStack_188 < 0x10) {
          pppppppuVar15 = pppppppuVar10;
        }
        local_190 = local_190 + 5;
        local_160 = plVar21;
        memmove((char *)((longlong)pppppppuVar15 + 5),_Src,sVar7);
        memcpy(_Src,"HTTP ",(size_t)pcVar16);
        memcpy((char *)((longlong)_Src + (longlong)pcVar16),pcVar16 + 0x1413a11c0,
               5 - (longlong)pcVar16);
        plVar21 = local_160;
      }
      local_128 = pppppppuVar10[2];
      ppppppuStack_120 = pppppppuVar10[3];
      local_138 = *(uint *)pppppppuVar10;
      uStack_134 = *(undefined4 *)((longlong)pppppppuVar10 + 4);
      uStack_130 = *(undefined4 *)(pppppppuVar10 + 1);
      uStack_12c = *(undefined4 *)((longlong)pppppppuVar10 + 0xc);
      pppppppuVar10[2] = (uint ******)0x0;
      pppppppuVar10[3] = (uint ******)0xf;
      *(char *)pppppppuVar10 = '\0';
      ppppppuVar19 = local_128;
      if ((ulonglong)((longlong)ppppppuStack_120 - (longlong)local_128) < 2) {
        puVar11 = (uint *)FUN_140006210(&local_138,2);
      }
      else {
        local_128 = (uint ******)((longlong)local_128 + 2);
        puVar20 = puVar11;
        if ((uint ******)0xf < ppppppuStack_120) {
          puVar20 = (uint *)CONCAT44(uStack_134,local_138);
        }
        *(undefined2 *)((longlong)puVar20 + (longlong)ppppppuVar19) = 0x203a;
        *(undefined1 *)((longlong)puVar20 + (longlong)ppppppuVar19 + 2) = 0;
      }
      local_e8 = *puVar11;
      uStack_e4 = puVar11[1];
      uStack_e0 = puVar11[2];
      uStack_dc = puVar11[3];
      local_d8 = *(longlong *)(puVar11 + 4);
      uStack_d0 = *(ulonglong *)(puVar11 + 6);
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0xf;
      puVar11[7] = 0;
      *(undefined1 *)puVar11 = 0;
      puVar23 = local_68;
      uVar9 = *(ulonglong *)(local_230 + 0x98);
      if (*(ulonglong *)(local_230 + 0xa0) < 0x10) {
        pvVar22 = (void *)(local_230 + 0x88);
      }
      else {
        pvVar22 = *(void **)(local_230 + 0x88);
      }
      if (uStack_d0 - local_d8 < uVar9) {
        puVar12 = (uint *)FUN_140006210(&local_e8,uVar9,uVar9,pvVar22,uVar9);
        puVar23 = local_68;
      }
      else {
        lVar18 = local_d8 + uVar9;
        puVar11 = puVar12;
        if (0xf < uStack_d0) {
          puVar11 = (uint *)CONCAT44(uStack_e4,local_e8);
        }
        pcVar16 = (char *)(local_d8 + (longlong)puVar11);
        local_d8 = lVar18;
        memmove(pcVar16,pvVar22,uVar9);
        *(char *)((longlong)puVar11 + lVar18) = '\0';
      }
      uVar6 = *puVar12;
      uVar2 = *(undefined8 *)(puVar12 + 2);
      uStack_81 = (undefined4)uVar2;
      uStack_7d = (undefined4)((ulonglong)uVar2 >> 0x20);
      uVar3 = *(undefined8 *)((longlong)puVar12 + 1);
      local_88 = (undefined2)uVar3;
      uStack_86 = (undefined1)((ulonglong)uVar3 >> 0x10);
      uStack_85 = (undefined4)((ulonglong)uVar3 >> 0x18);
      uStack_81._1_3_ = (undefined3)((ulonglong)uVar2 >> 8);
      uStack_81._0_1_ = (undefined1)((ulonglong)uVar3 >> 0x38);
      uVar2 = *(undefined8 *)(puVar12 + 4);
      uVar3 = *(undefined8 *)(puVar12 + 6);
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0xf;
      puVar12[7] = 0;
      *(char *)puVar12 = '\0';
      uVar9 = *(ulonglong *)(puVar23 + 0x48);
      if (0xf < uVar9) {
        lVar18 = *plVar21;
        uVar13 = uVar9 + 1;
        lVar17 = lVar18;
        if (0xfff < uVar13) {
          lVar17 = *(longlong *)(lVar18 + -8);
          if (0x1f < (ulonglong)((lVar18 + -8) - lVar17)) goto LAB_1405b56ea;
          uVar13 = uVar9 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar17,uVar13);
      }
      puVar23[0x30] = (char)uVar6;
      *(ulonglong *)(puVar23 + 0x31) =
           CONCAT17((undefined1)uStack_81,CONCAT43(uStack_85,CONCAT12(uStack_86,local_88)));
      *(ulonglong *)(puVar23 + 0x38) = CONCAT44(uStack_7d,uStack_81);
      *(undefined8 *)(puVar23 + 0x40) = uVar2;
      *(undefined8 *)(puVar23 + 0x48) = uVar3;
      if (0xf < uStack_d0) {
        lVar17 = CONCAT44(uStack_e4,local_e8);
        uVar9 = uStack_d0 + 1;
        lVar18 = lVar17;
        if (0xfff < uVar9) {
          lVar18 = *(longlong *)(lVar17 + -8);
          if (0x1f < (ulonglong)((lVar17 + -8) - lVar18)) goto LAB_1405b56ea;
          uVar9 = uStack_d0 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar18,uVar9);
      }
      local_d8 = 0;
      uStack_d0 = 0xf;
      local_e8 = local_e8 & 0xffffff00;
      if ((uint ******)0xf < ppppppuStack_120) {
        lVar17 = CONCAT44(uStack_134,local_138);
        ppppppuVar19 = (uint ******)((longlong)ppppppuStack_120 + 1);
        lVar18 = lVar17;
        if ((uint ******)0xfff < ppppppuVar19) {
          lVar18 = *(longlong *)(lVar17 + -8);
          if (0x1f < (ulonglong)((lVar17 + -8) - lVar18)) goto LAB_1405b56ea;
          ppppppuVar19 = ppppppuStack_120 + 5;
        }
        thunk_FUN_140b68ba8(lVar18,ppppppuVar19);
      }
      local_128 = (uint ******)0x0;
      ppppppuStack_120 = (uint ******)0xf;
      local_138 = local_138 & 0xffffff00;
      if (0xf < uStack_188) goto joined_r0x0001405b5267;
    }
    else {
      *puVar23 = 1;
    }
  }
  FUN_1401c4a70(&local_230);
  if (local_1c8 != 0) {
    uVar9 = local_1b8 - local_1c8;
    lVar18 = local_1c8;
    if (0xfff < uVar9) {
      lVar18 = *(longlong *)(local_1c8 + -8);
      if (0x1f < (ulonglong)((local_1c8 + -8) - lVar18)) {
LAB_1405b56ea:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar9 = uVar9 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar18,uVar9);
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
  }
  *(undefined8 *)local_1d8[1] = 0;
  puVar5 = (undefined8 *)*local_1d8;
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    FUN_140016fe0(puVar5 + 2);
    thunk_FUN_140b68ba8(puVar5,0x50);
    puVar5 = puVar4;
  }
  thunk_FUN_140b68ba8(local_1d8,0x50);
  if (local_f8[0] != (undefined8 *)0x0) {
    (**(code **)*local_f8[0])(local_f8[0],1);
  }
  return local_68;
}

