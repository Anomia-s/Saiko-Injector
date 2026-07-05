/**
 * Function: unable_to_create_required_pipeline_state
 * Address:  140437db0
 * Signature: undefined unable_to_create_required_pipeline_state(void)
 * Body size: 3936 bytes
 */


void unable_to_create_required_pipeline_state
               (longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5,
               float *param_6,uint param_7,float *param_8,undefined8 param_9,longlong *param_10)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int *piVar15;
  int *piVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  float fVar19;
  longlong lVar20;
  int *piVar21;
  longlong *plVar22;
  uint uVar23;
  float *pfVar24;
  undefined4 *puVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  bool bVar30;
  undefined1 auStack_3f8 [32];
  float *local_3d8;
  float *local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  undefined4 local_39c;
  undefined8 local_398;
  uint local_390;
  undefined4 local_38c;
  undefined4 uStack_388;
  undefined8 uStack_384;
  undefined4 local_37c;
  float local_378;
  float fStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 *local_338;
  undefined8 *puStack_330;
  float *local_328;
  undefined8 *puStack_320;
  undefined8 *local_318;
  longlong lStack_310;
  undefined8 local_308;
  ulonglong uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 *puStack_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  float local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float local_f4;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_3f8;
  lVar3 = *(longlong *)(param_1 + 0x2c0);
  iVar13 = *(int *)(param_2 + 0x2c);
  iVar2 = *(int *)(lVar3 + 0x2860);
  local_3b8 = param_2;
  FUN_1404372e0(lVar3);
  if (*(longlong *)(lVar3 + 0x710) == 0) {
    lVar20 = *(longlong *)(lVar3 + 0x28d8);
    bVar30 = lVar20 == 0;
    puVar25 = (undefined4 *)(lVar20 + 0x74);
    puVar1 = (undefined4 *)(lVar20 + 0x78);
    if (bVar30) {
      puVar25 = (undefined4 *)(lVar3 + 0x2868);
      puVar1 = (undefined4 *)(lVar3 + 0x286c);
    }
    uVar18 = *puVar25;
    uVar29 = *puVar1;
    puVar28 = (undefined8 *)(lVar3 + 0x700);
    if (!bVar30) {
      puVar28 = (undefined8 *)(lVar20 + 0x28);
    }
    uVar14 = *puVar28;
    *(undefined8 *)(lVar3 + 0x710) = uVar14;
    if (bVar30) {
      plVar22 = (longlong *)
                ((ulonglong)*(uint *)(lVar3 + 0x28a8) * 8 + *(longlong *)(lVar3 + 0x6f8));
    }
    else {
      plVar22 = (longlong *)(lVar20 + 0x38);
    }
    uStack_360 = (float *)*plVar22;
    fStack_374 = 0.0;
    uStack_370 = 0;
    uStack_36c = 0;
    local_358 = (undefined8 *)0x0;
    local_348 = 0;
    uStack_340 = (undefined8 *)0x0;
    local_378 = 6.02558e-44;
    local_368 = (undefined4)uVar14;
    uStack_364 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uStack_350 = (undefined8 *)CONCAT44(uVar29,uVar18);
    (*DAT_1416f1518)(*(undefined8 *)(lVar3 + 0x698),&local_378,0);
  }
  if (*param_10 != 0) {
    local_378 = 0.0;
    fStack_374 = 0.0;
    local_3d8 = &local_378;
    (*DAT_1416f1510)(*(undefined8 *)(lVar3 + 0x698),0,1,param_10);
  }
  piVar15 = *(int **)(lVar3 + 0x2848);
  if (((((piVar15 == (int *)0x0) || (*piVar15 != param_3)) || (piVar15[9] != iVar13)) ||
      ((piVar15[10] != param_7 || (piVar15[0xb] != iVar2)))) ||
     ((*(longlong *)(piVar15 + 0xc) != param_4 || (*(longlong *)(piVar15 + 0xe) != param_5)))) {
    *(undefined8 *)(lVar3 + 0x2848) = 0;
    lVar20 = (longlong)*(int *)(lVar3 + 0x2838);
    if (0 < lVar20) {
      piVar15 = *(int **)(lVar3 + 0x2840);
      do {
        if (((*piVar15 == param_3) && (piVar15[9] == iVar13)) &&
           ((piVar15[10] == param_7 &&
            (((piVar15[0xb] == iVar2 && (*(longlong *)(piVar15 + 0xc) == param_4)) &&
             (*(longlong *)(piVar15 + 0xe) == param_5)))))) goto LAB_140438669;
        piVar15 = piVar15 + 0x12;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    lVar20 = *(longlong *)(param_1 + 0x2c0);
    local_1a0 = 0;
    uStack_1d0 = 0;
    uStack_1f0 = 0;
    uStack_210 = 0;
    uStack_220 = 0;
    uStack_230 = 0;
    uStack_240 = 0;
    uStack_15c = 0;
    local_188 = 0;
    uStack_190 = 0;
    uStack_250 = 0;
    uStack_260 = 0;
    uStack_270 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    fStack_2e4 = 0.0;
    fStack_2e0 = 0.0;
    fStack_2dc = 0.0;
    local_288 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_118 = 0;
    fStack_374 = 0.0;
    uStack_370 = 0;
    uStack_36c = 0;
    local_348 = 0;
    lStack_310 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_368 = 0;
    local_378 = 3.92364e-44;
    local_358 = &local_1d8;
    uStack_350 = &local_1f8;
    uStack_340 = &local_248;
    local_338 = &local_198;
    puStack_330 = &local_278;
    local_328 = &local_2e8;
    puStack_320 = &local_148;
    local_318 = &local_218;
    local_e0 = 0;
    uStack_f8 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_108 = 2.52234e-44;
    local_f0 = *(undefined8 *)(lVar20 + 0x718 + (longlong)param_3 * 8);
    local_f4 = 1.4013e-45;
    pcStack_e8 = "main";
    local_d0 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0x12;
    uStack_c0 = *(undefined8 *)(lVar20 + 0x730 + (longlong)param_3 * 8);
    local_c8 = 0x1000000000;
    local_b8 = "main";
    uStack_364 = 2;
    uStack_360 = &local_108;
    local_1d8 = 0x13;
    local_1b8 = 3;
    local_1b0 = &local_98;
    local_1c8 = 0x100000000;
    puStack_1c0 = &local_a4;
    local_98 = 0;
    uStack_90 = 0x67;
    local_88 = 1;
    uStack_80 = 0x800000067;
    local_78 = 2;
    uStack_74 = 0;
    uStack_70 = 0x6d;
    uStack_6c = 0x10;
    local_a4 = 0x2000000000;
    local_9c = 0;
    local_1f8 = 0x14;
    local_1e8 = (ulonglong)param_7 << 0x20;
    uStack_1e0 = 0;
    local_248 = 0x16;
    local_228 = 1;
    local_238 = 0x100000000;
    local_218 = 0x1b;
    local_150 = 0x100000000;
    local_208 = 0x200000000;
    local_200 = &local_150;
    local_198 = 0x17;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    local_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0x3f800000;
    local_278 = 0x18;
    local_37c = 0xffffffff;
    local_258 = &local_37c;
    local_268 = 0x100000000;
    local_2e8 = 3.50325e-44;
    uStack_388 = 0;
    uStack_384 = 0;
    local_398 = 0;
    local_390 = 0;
    local_38c = 0;
    local_148 = 0x1a;
    uStack_130 = 0x100000000;
    local_128 = &local_39c;
    local_39c = 1;
    local_3b0 = param_1;
    local_3a8 = param_4;
    iVar12 = FUN_140125230(iVar13);
    uVar29 = 0x7fffffff;
    uVar18 = 0x7fffffff;
    if (iVar12 - 1U < 10) {
      uVar18 = *(undefined4 *)(&DAT_140e15afc + (ulonglong)(iVar12 - 1U) * 4);
    }
    local_398 = CONCAT44(local_398._4_4_,uVar18);
    iVar12 = FUN_1401252e0(iVar13);
    if (iVar12 - 1U < 10) {
      uVar29 = *(undefined4 *)(&DAT_140e15afc + (ulonglong)(iVar12 - 1U) * 4);
    }
    local_38c = uVar29;
    iVar12 = FUN_1401252b0(iVar13);
    local_390 = iVar12 - 1;
    uVar18 = 0x7fffffff;
    if (4 < local_390) {
      local_390 = 0x7fffffff;
    }
    iVar12 = FUN_140125270(iVar13);
    uVar29 = 0x7fffffff;
    if (iVar12 - 1U < 10) {
      uVar29 = *(undefined4 *)(&DAT_140e15afc + (ulonglong)(iVar12 - 1U) * 4);
    }
    local_398 = CONCAT44(uVar29,(undefined4)local_398);
    iVar12 = FUN_140125320(iVar13);
    if (iVar12 - 1U < 10) {
      uVar18 = *(undefined4 *)(&DAT_140e15afc + (ulonglong)(iVar12 - 1U) * 4);
    }
    uStack_388 = uVar18;
    iVar12 = FUN_140125370(iVar13);
    uVar23 = 0x7fffffff;
    if (iVar12 - 1U < 5) {
      uVar23 = iVar12 - 1U;
    }
    uStack_384 = CONCAT44(0xf,uVar23);
    local_308 = *(undefined8 *)(lVar20 + 0x710);
    uStack_300 = uStack_300 & 0xffffffff00000000;
    lStack_310 = local_3a8;
    local_3d0 = (float *)&local_1a0;
    local_3d8 = (float *)0x0;
    iVar12 = (*DAT_1416f1538)(*(undefined8 *)(lVar20 + 0x660),0,1,&local_378);
    if (iVar12 == 0) {
      lVar26 = FUN_140160cc0(*(undefined8 *)(lVar20 + 0x2840),
                             (longlong)*(int *)(lVar20 + 0x2838) * 0x48 + 0x48);
      if (lVar26 != 0) {
        *(int *)(lVar26 + (longlong)*(int *)(lVar20 + 0x2838) * 0x48) = param_3;
        *(int *)(lVar26 + 0x24 + (longlong)*(int *)(lVar20 + 0x2838) * 0x48) = iVar13;
        *(uint *)(lVar26 + 0x28 + (longlong)*(int *)(lVar20 + 0x2838) * 0x48) = param_7;
        *(int *)(lVar26 + 0x2c + (longlong)*(int *)(lVar20 + 0x2838) * 0x48) = iVar2;
        *(undefined8 *)(lVar26 + 0x40 + (longlong)*(int *)(lVar20 + 0x2838) * 0x48) = local_1a0;
        *(longlong *)(lVar26 + 0x38 + (longlong)*(int *)(lVar20 + 0x2838) * 0x48) = param_5;
        *(longlong *)(lVar26 + 0x30 + (longlong)*(int *)(lVar20 + 0x2838) * 0x48) = lStack_310;
        *(longlong *)(lVar20 + 0x2840) = lVar26;
        iVar13 = *(int *)(lVar20 + 0x2838);
        *(int *)(lVar20 + 0x2838) = iVar13 + 1;
        piVar15 = (int *)(lVar26 + (longlong)iVar13 * 0x48);
        param_1 = local_3b0;
LAB_140438669:
        *(int **)(lVar3 + 0x2848) = piVar15;
        (*DAT_1416f1520)(*(undefined8 *)(lVar3 + 0x698),0,*(undefined8 *)(piVar15 + 0x10));
        bVar9 = true;
        bVar30 = true;
        cVar10 = *(char *)(lVar3 + 0x2908);
        goto joined_r0x00014043868c;
      }
    }
    else {
      cVar10 = FUN_1401106d0("SDL_RENDER_VULKAN_DEBUG",0);
      if (cVar10 != '\0') {
        uVar14 = vk_error_invalid_opaque_capture_address(iVar12);
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(6,"%s: %s","vkCreateGraphicsPipelines()",uVar14);
      }
      uVar14 = vk_error_invalid_opaque_capture_address(iVar12);
      FUN_1400fbed0("%s: %s","vkCreateGraphicsPipelines()",uVar14);
    }
    *(undefined8 *)(lVar3 + 0x2848) = 0;
    FUN_1400fbed0("Unable to create required pipeline state");
    goto LAB_140438564;
  }
  bVar9 = false;
  bVar30 = false;
  cVar10 = *(char *)(lVar3 + 0x2908);
joined_r0x00014043868c:
  if (cVar10 == '\x01') {
    lVar20 = *(longlong *)(param_1 + 0x2c0);
    iVar13 = 1;
    if (*(longlong *)(lVar20 + 0x28d8) == 0) {
      iVar13 = *(int *)(lVar20 + 0x2870);
    }
    bVar30 = bVar9;
    if ((*(int *)(lVar20 + 0x28fc) != 0) && (*(int *)(lVar20 + 0x2900) != 0)) {
      if (iVar13 == 2) {
        FUN_140635080(&local_378,0xbfc90fdb);
      }
      else if (iVar13 == 4) {
        FUN_140635080(&local_378,0x40490fdb);
      }
      else if (iVar13 == 8) {
        FUN_140635080(&local_378,0x3fc90fdb);
      }
      else {
        FUN_140634f10();
      }
      piVar15 = (int *)(lVar20 + 0x2900);
      local_108 = 2.0 / (float)*(int *)(lVar20 + 0x28fc);
      local_f4 = -2.0 / (float)*(int *)(lVar20 + 0x2900);
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      pcStack_e8 = (char *)0x0;
      local_e0 = 0x3f800000;
      uStack_d8 = 0x3f800000bf800000;
      local_d0 = 0x3f80000000000000;
      local_168 = (undefined4)local_348;
      uStack_164 = local_348._4_4_;
      uStack_160 = (undefined4)uStack_340;
      uStack_15c = uStack_340._4_4_;
      local_178 = (undefined4)local_358;
      uStack_174 = local_358._4_4_;
      uStack_170 = (undefined4)uStack_350;
      uStack_16c = uStack_350._4_4_;
      local_188 = local_368;
      uStack_184 = uStack_364;
      uStack_180 = (undefined4)uStack_360;
      uStack_17c = uStack_360._4_4_;
      local_198 = CONCAT44(fStack_374,local_378);
      uStack_190 = CONCAT44(uStack_36c,uStack_370);
      FUN_140634f50(&local_2e8,&local_108,&local_198);
      *(undefined4 *)(lVar20 + 0x27c8) = (undefined4)local_2b8;
      *(undefined4 *)(lVar20 + 0x27cc) = local_2b8._4_4_;
      *(undefined4 *)(lVar20 + 0x27d0) = (undefined4)uStack_2b0;
      *(undefined4 *)(lVar20 + 0x27d4) = uStack_2b0._4_4_;
      *(undefined4 *)(lVar20 + 0x27b8) = (undefined4)local_2c8;
      *(undefined4 *)(lVar20 + 0x27bc) = local_2c8._4_4_;
      *(undefined4 *)(lVar20 + 0x27c0) = (undefined4)uStack_2c0;
      *(undefined4 *)(lVar20 + 0x27c4) = uStack_2c0._4_4_;
      *(undefined8 *)(lVar20 + 0x27a8) = local_2d8;
      *(undefined8 *)(lVar20 + 0x27b0) = uStack_2d0;
      *(ulonglong *)(lVar20 + 0x2798) = CONCAT44(fStack_2e4,local_2e8);
      *(ulonglong *)(lVar20 + 0x27a0) = CONCAT44(fStack_2dc,fStack_2e0);
      if ((iVar13 == 8) || (iVar13 == 2)) {
        iVar13 = *(int *)(lVar20 + 0x28f8);
        piVar16 = (int *)(lVar20 + 0x28f4);
        piVar21 = piVar15;
        piVar15 = (int *)(lVar20 + 0x28fc);
      }
      else {
        iVar13 = *(int *)(lVar20 + 0x28f4);
        piVar16 = (int *)(lVar20 + 0x28f8);
        piVar21 = (int *)(lVar20 + 0x28fc);
      }
      local_2e8 = (float)iVar13;
      fStack_2e4 = (float)*piVar16;
      fStack_2e0 = (float)*piVar21;
      fStack_2dc = (float)*piVar15;
      local_2d8 = 0x3f80000000000000;
      (*DAT_1416f1540)(*(undefined8 *)(lVar20 + 0x698),0,1,&local_2e8);
      *(undefined1 *)(lVar20 + 0x2908) = 0;
      bVar30 = true;
    }
  }
  if (*(char *)(lVar3 + 0x28e0) == '\x01') {
    lVar20 = *(longlong *)(param_1 + 0x2c0);
    iVar13 = 1;
    if (*(longlong *)(lVar20 + 0x28d8) == 0) {
      iVar13 = *(int *)(lVar20 + 0x2870);
      fVar19 = *(float *)(lVar20 + 0x28f4);
      if (*(char *)(lVar20 + 0x28e1) == '\x01') goto LAB_140438908;
LAB_14043893d:
      fStack_374 = *(float *)(lVar20 + 0x28f8);
      lVar26 = 0x2900;
      lVar27 = 0x28fc;
    }
    else {
      fVar19 = *(float *)(lVar20 + 0x28f4);
      if (*(char *)(lVar20 + 0x28e1) != '\x01') goto LAB_14043893d;
LAB_140438908:
      fVar19 = (float)((int)fVar19 + *(int *)(lVar20 + 0x28e4));
      fStack_374 = (float)(*(int *)(lVar20 + 0x28e8) + *(int *)(lVar20 + 0x28f8));
      lVar26 = 0x28f0;
      lVar27 = 0x28ec;
    }
    if ((iVar13 == 8) ||
       (local_378 = fVar19, uStack_370 = *(undefined4 *)(lVar20 + lVar27),
       uStack_36c = *(undefined4 *)(lVar20 + lVar26), iVar13 == 2)) {
      local_378 = fStack_374;
      fStack_374 = fVar19;
      uStack_370 = *(undefined4 *)(lVar20 + lVar26);
      uStack_36c = *(undefined4 *)(lVar20 + lVar27);
    }
    (*DAT_1416f1548)(*(undefined8 *)(lVar20 + 0x698),0,1,&local_378);
    *(undefined1 *)(lVar20 + 0x28e0) = 0;
  }
  if ((bVar30) ||
     (iVar13 = FUN_1400fc560(lVar3 + 0x2758,(undefined4 *)(lVar3 + 0x290c),0x40), iVar13 != 0)) {
    local_3d0 = (float *)(lVar3 + 0x2758);
    *(undefined4 *)(lVar3 + 0x2788) = *(undefined4 *)(lVar3 + 0x293c);
    *(undefined4 *)(lVar3 + 0x278c) = *(undefined4 *)(lVar3 + 0x2940);
    *(undefined4 *)(lVar3 + 0x2790) = *(undefined4 *)(lVar3 + 0x2944);
    *(undefined4 *)(lVar3 + 0x2794) = *(undefined4 *)(lVar3 + 0x2948);
    *(undefined4 *)(lVar3 + 0x2778) = *(undefined4 *)(lVar3 + 0x292c);
    *(undefined4 *)(lVar3 + 0x277c) = *(undefined4 *)(lVar3 + 0x2930);
    *(undefined4 *)(lVar3 + 0x2780) = *(undefined4 *)(lVar3 + 0x2934);
    *(undefined4 *)(lVar3 + 0x2784) = *(undefined4 *)(lVar3 + 0x2938);
    *(undefined4 *)(lVar3 + 0x2768) = *(undefined4 *)(lVar3 + 0x291c);
    *(undefined4 *)(lVar3 + 0x276c) = *(undefined4 *)(lVar3 + 0x2920);
    *(undefined4 *)(lVar3 + 0x2770) = *(undefined4 *)(lVar3 + 0x2924);
    *(undefined4 *)(lVar3 + 0x2774) = *(undefined4 *)(lVar3 + 0x2928);
    *(undefined4 *)(lVar3 + 0x2758) = *(undefined4 *)(lVar3 + 0x290c);
    *(undefined4 *)(lVar3 + 0x275c) = *(undefined4 *)(lVar3 + 0x2910);
    *(undefined4 *)(lVar3 + 0x2760) = *(undefined4 *)(lVar3 + 0x2914);
    *(undefined4 *)(lVar3 + 0x2764) = *(undefined4 *)(lVar3 + 0x2918);
    local_3d8 = (float *)CONCAT44(local_3d8._4_4_,0x80);
    (*DAT_1416f1528)(*(undefined8 *)(lVar3 + 0x698),
                     *(undefined8 *)(*(longlong *)(lVar3 + 0x2848) + 0x30),1,0);
  }
  if (param_6 == (float *)0x0) {
    uStack_364 = 0;
    uStack_360 = (float *)0x0;
    fStack_374 = 0.0;
    uStack_370 = 0;
    uStack_36c = 0;
    local_368 = 0;
    bVar11 = FUN_140118890(param_1);
    local_378 = (float)bVar11;
    uStack_370 = *(undefined4 *)(local_3b8 + 0x18);
    param_6 = &local_378;
  }
  uVar14 = *(undefined8 *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x27e8) + (ulonglong)*(uint *)(lVar3 + 0x690) * 8)
             + 8 + (ulonglong)*(uint *)(lVar3 + 0x27f8) * 0x20);
  uVar23 = *(uint *)(lVar3 + 0x27fc);
  if (bVar30) {
LAB_140438b01:
    if (uVar23 == 0xffffffff) {
      *(undefined4 *)(lVar3 + 0x27fc) = 0;
LAB_140438c17:
      pfVar24 = (float *)0x0;
    }
    else {
      iVar13 = uVar23 + (-*(int *)(lVar3 + 0x298) & *(int *)(lVar3 + 0x298) + 0x1fU);
      *(int *)(lVar3 + 0x27fc) = iVar13;
      if (0xffff < iVar13) {
        uVar23 = *(int *)(lVar3 + 0x27f8) + 1;
        uVar17 = (ulonglong)*(uint *)(lVar3 + 0x690);
        if (*(uint *)(*(longlong *)(lVar3 + 0x27f0) + uVar17 * 4) <= uVar23) {
          iVar13 = sdl_render_vulkan_debug(lVar3,0x10000,0x10,&local_2e8);
          if (iVar13 != 0) goto LAB_140438564;
          piVar15 = (int *)(*(longlong *)(lVar3 + 0x27f0) + (ulonglong)*(uint *)(lVar3 + 0x690) * 4)
          ;
          *piVar15 = *piVar15 + 1;
          lVar20 = FUN_140160cc0(*(undefined8 *)
                                  (*(longlong *)(lVar3 + 0x27e8) +
                                  (ulonglong)*(uint *)(lVar3 + 0x690) * 8),
                                 (ulonglong)
                                 *(uint *)(*(longlong *)(lVar3 + 0x27f0) +
                                          (ulonglong)*(uint *)(lVar3 + 0x690) * 4) << 5);
          lVar26 = (ulonglong)
                   (*(int *)(*(longlong *)(lVar3 + 0x27f0) + (ulonglong)*(uint *)(lVar3 + 0x690) * 4
                            ) - 1) * 0x20;
          puVar28 = (undefined8 *)(lVar20 + lVar26);
          *puVar28 = CONCAT44(fStack_2e4,local_2e8);
          puVar28[1] = CONCAT44(fStack_2dc,fStack_2e0);
          puVar28 = (undefined8 *)(lVar20 + 0x10 + lVar26);
          *puVar28 = local_2d8;
          puVar28[1] = uStack_2d0;
          *(longlong *)(*(longlong *)(lVar3 + 0x27e8) + (ulonglong)*(uint *)(lVar3 + 0x690) * 8) =
               lVar20;
          uVar17 = (ulonglong)*(uint *)(lVar3 + 0x690);
        }
        *(uint *)(lVar3 + 0x27f8) = uVar23;
        *(undefined4 *)(lVar3 + 0x27fc) = 0;
        uVar14 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(lVar3 + 0x27e8) + uVar17 * 8) + 8 +
                  (ulonglong)uVar23 * 0x20);
        goto LAB_140438c17;
      }
      pfVar24 = (float *)(longlong)iVar13;
    }
    lVar20 = *(longlong *)(lVar3 + 0x2848);
    uVar6 = *(undefined8 *)param_6;
    uVar7 = *(undefined8 *)(param_6 + 2);
    uVar8 = *(undefined8 *)(param_6 + 6);
    *(undefined8 *)(lVar20 + 0x14) = *(undefined8 *)(param_6 + 4);
    *(undefined8 *)(lVar20 + 0x1c) = uVar8;
    *(undefined8 *)(lVar20 + 4) = uVar6;
    *(undefined8 *)(lVar20 + 0xc) = uVar7;
    lVar20 = *(longlong *)
              (*(longlong *)
                (*(longlong *)(lVar3 + 0x27e8) + (ulonglong)*(uint *)(lVar3 + 0x690) * 8) + 0x18 +
              (ulonglong)*(uint *)(lVar3 + 0x27f8) * 0x20);
    lVar26 = *(longlong *)(lVar3 + 0x2848);
    uVar18 = *(undefined4 *)(lVar26 + 4);
    uVar29 = *(undefined4 *)(lVar26 + 8);
    uVar4 = *(undefined4 *)(lVar26 + 0xc);
    uVar5 = *(undefined4 *)(lVar26 + 0x10);
    uVar6 = *(undefined8 *)(lVar26 + 0x1c);
    puVar28 = (undefined8 *)(lVar20 + 0x10 + (longlong)pfVar24);
    *puVar28 = *(undefined8 *)(lVar26 + 0x14);
    puVar28[1] = uVar6;
    puVar1 = (undefined4 *)(lVar20 + (longlong)pfVar24);
    *puVar1 = uVar18;
    puVar1[1] = uVar29;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
  }
  else {
    pfVar24 = (float *)0x0;
    if (0 < (int)uVar23) {
      pfVar24 = (float *)(ulonglong)uVar23;
    }
    iVar13 = FUN_1400fc560(param_6,*(longlong *)(lVar3 + 0x2848) + 4,0x20);
    if (iVar13 != 0) {
      uVar23 = *(uint *)(lVar3 + 0x27fc);
      goto LAB_140438b01;
    }
  }
  local_3d0 = param_8;
  local_3d8 = pfVar24;
  lVar20 = unable_to_allocate_descriptor_set(param_1,param_5,param_9,uVar14);
  local_2e8 = (float)lVar20;
  fStack_2e4 = (float)((ulonglong)lVar20 >> 0x20);
  if (lVar20 != 0) {
    local_3d0 = &local_2e8;
    local_3c0 = 0;
    local_3c8 = 0;
    local_3d8 = (float *)CONCAT44(local_3d8._4_4_,1);
    (*DAT_1416f1530)(*(undefined8 *)(lVar3 + 0x698),0,
                     *(undefined8 *)(*(longlong *)(lVar3 + 0x2848) + 0x30),0);
  }
LAB_140438564:
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_3f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_3f8);
  }
  return;
}

