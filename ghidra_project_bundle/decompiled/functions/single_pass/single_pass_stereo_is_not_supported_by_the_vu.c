/**
 * Function: single_pass_stereo_is_not_supported_by_the_vu
 * Address:  140703ee0
 * Signature: longlong * __thiscall single_pass_stereo_is_not_supported_by_the_vu(void * this, longlong * param_1, char * param_2, undefined8 * param_3)
 * Body size: 4339 bytes
 */


/* WARNING: Type propagation algorithm not settling */

longlong * __thiscall
single_pass_stereo_is_not_supported_by_the_vu
          (void *this,longlong *param_1,char *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  GraphicsPipeline *pGVar9;
  char cVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  void *pvVar16;
  longlong lVar17;
  GraphicsPipeline *pGVar18;
  void *pvVar19;
  ulonglong uVar20;
  uint uVar21;
  void *_Dst;
  char *pcVar22;
  undefined4 local_540 [8];
  undefined4 local_520 [2];
  undefined8 local_518;
  undefined8 uStack_510;
  undefined4 local_508;
  undefined4 local_504;
  undefined8 *local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e8 [2];
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8 [2];
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  uint local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  uint local_494;
  char *local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 local_45c;
  undefined8 local_458;
  undefined4 local_450 [2];
  undefined8 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined4 local_430 [2];
  undefined8 local_428;
  char *local_420;
  undefined8 local_418;
  undefined4 local_410 [2];
  undefined8 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  uint local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0 [2];
  undefined8 local_3d8;
  longlong lStack_3d0;
  undefined4 local_3c8 [2];
  undefined8 local_3c0;
  undefined4 uStack_3b8;
  int iStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  longlong local_3a0;
  undefined4 local_398 [2];
  undefined8 local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_378 [2];
  undefined4 *local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  uint local_354;
  uint local_350;
  float local_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_338 [2];
  undefined8 local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined8 *local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined4 local_308;
  int iStack_304;
  ulonglong uStack_300;
  undefined4 *local_2f8;
  undefined4 *local_2f0;
  undefined4 *local_2e8;
  undefined4 *local_2e0;
  undefined4 *local_2d8;
  undefined4 *local_2d0;
  undefined4 *local_2c8;
  undefined4 *local_2c0;
  undefined4 *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_280 [2];
  undefined4 *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  ulonglong local_248;
  ulonglong auStack_240 [29];
  undefined8 local_158;
  longlong local_150;
  longlong local_148;
  void *local_140;
  undefined8 local_138;
  undefined4 local_130 [4];
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  void *local_b8;
  longlong lStack_b0;
  void *local_a8;
  undefined4 *local_a0;
  ulonglong local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  GraphicsPipeline *local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (param_2[0xc4] == '\x01') {
    uStack_250 = 0;
    local_258 = (char *)FUN_140b65d30(0x40);
    local_248 = 0x39;
    auStack_240[0] = 0x3f;
    builtin_strncpy(local_258,"Single-pass stereo is not supported by the Vulkan backend",0x3a);
    FUN_140533460((longlong)this + 0x90,&local_258);
    if (0xf < auStack_240[0]) {
      uVar14 = auStack_240[0] + 1;
      pcVar22 = local_258;
      if (0xfff < uVar14) {
        pcVar22 = *(char **)(local_258 + -8);
        if ((char *)0x1f < local_258 + (-8 - (longlong)pcVar22)) goto LAB_140704fab;
        uVar14 = auStack_240[0] + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar22,uVar14);
    }
    *param_1 = 0;
    return param_1;
  }
  local_150 = *(longlong *)(param_2 + 8);
  local_78 = (GraphicsPipeline *)FUN_140b65d30(0x1e0);
  lVar17 = (longlong)this + 0x90;
  local_140 = this;
  nvrhi::vulkan::GraphicsPipeline::GraphicsPipeline(local_78,lVar17);
  pGVar9 = local_78;
  FUN_140705260(&(local_78->GraphicsPipeline_data).offset_0x8,param_2);
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar11 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar12 = *(undefined4 *)(param_3 + 3);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)((longlong)&(pGVar9->GraphicsPipeline_data).offset_0x129 + 7) =
       *(undefined4 *)(param_3 + 2);
  *(undefined4 *)&(pGVar9->GraphicsPipeline_data).offset_0x134 = uVar11;
  *(undefined4 *)((longlong)&(pGVar9->GraphicsPipeline_data).offset_0x134 + 4) = uVar12;
  *(undefined4 *)&(pGVar9->GraphicsPipeline_data).field_0x13c = uVar5;
  *(undefined8 *)&(pGVar9->GraphicsPipeline_data).field_0x120 = uVar6;
  *(undefined8 *)((longlong)&(pGVar9->GraphicsPipeline_data).offset_0x121 + 7) = uVar7;
  lVar4 = *(longlong *)(param_2 + 0x10);
  local_a0 = *(undefined4 **)(param_2 + 0x18);
  if (lVar4 == 0) {
    pcVar22 = (char *)0x0;
    uVar14 = 0;
    local_258 = (char *)0x0;
  }
  else if (*(longlong *)(lVar4 + 0x98) == *(longlong *)(lVar4 + 0xa0)) {
    local_258 = (char *)0x1;
    pcVar22 = (char *)0x0;
    uVar14 = 0;
  }
  else {
    pcVar22 = (char *)(*(longlong *)(lVar4 + 0xa0) - *(longlong *)(lVar4 + 0x98) >> 3);
    uVar14 = 1;
    local_258 = (char *)0x1;
  }
  local_118 = *(longlong *)(param_2 + 0x20);
  if (local_a0 != (undefined4 *)0x0) {
    local_258 = (char *)((longlong)local_258 + 1);
    if (*(longlong *)(local_a0 + 0x26) != *(longlong *)(local_a0 + 0x28)) {
      uVar14 = uVar14 + 1;
      pcVar22 = pcVar22 + (*(longlong *)(local_a0 + 0x28) - *(longlong *)(local_a0 + 0x26) >> 3);
    }
  }
  local_110 = *(longlong *)(param_2 + 0x28);
  if (local_118 != 0) {
    local_258 = (char *)((longlong)local_258 + 1);
    if (*(longlong *)(local_118 + 0x98) != *(longlong *)(local_118 + 0xa0)) {
      uVar14 = uVar14 + 1;
      pcVar22 = pcVar22 + (*(longlong *)(local_118 + 0xa0) - *(longlong *)(local_118 + 0x98) >> 3);
    }
  }
  local_108 = *(longlong *)(param_2 + 0x30);
  if (local_110 != 0) {
    local_258 = (char *)((longlong)local_258 + 1);
    if (*(longlong *)(local_110 + 0x98) != *(longlong *)(local_110 + 0xa0)) {
      uVar14 = uVar14 + 1;
      pcVar22 = pcVar22 + (*(longlong *)(local_110 + 0xa0) - *(longlong *)(local_110 + 0x98) >> 3);
    }
  }
  if (local_108 != 0) {
    local_258 = (char *)((longlong)local_258 + 1);
    if (*(longlong *)(local_108 + 0x98) != *(longlong *)(local_108 + 0xa0)) {
      uVar14 = uVar14 + 1;
      pcVar22 = pcVar22 + (*(longlong *)(local_108 + 0xa0) - *(longlong *)(local_108 + 0x98) >> 3);
    }
  }
  local_98 = 0;
  puStack_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_b8 = (void *)0x0;
  lStack_b0 = 0;
  local_a8 = (void *)0x0;
  local_148 = lVar17;
  local_100 = param_1;
  if (local_258 == (char *)0x0) {
    if (uVar14 != 0) goto LAB_140704228;
  }
  else {
    FUN_140707210(&local_98,&local_258);
    if ((ulonglong)(local_e8 - local_f8 >> 5) < uVar14) {
LAB_140704228:
      local_258 = (char *)uVar14;
      FUN_140707320(&local_f8,&local_258);
    }
  }
  local_258 = pcVar22;
  if ((char *)(local_c8 - local_d8 >> 4) < pcVar22) {
    if ((ulonglong)pcVar22 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      vector_too_long();
    }
    FUN_14005ec90(&local_d8,&local_258);
  }
  lVar17 = lStack_b0;
  pvVar19 = local_b8;
  if ((char *)((longlong)local_a8 - (longlong)local_b8 >> 2) < pcVar22) {
    if ((ulonglong)pcVar22 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      vector_too_long();
    }
    if (pcVar22 < (char *)0x400) {
      _Dst = (void *)FUN_140b65d30((longlong)pcVar22 * 4);
    }
    else {
      if ((char *)0x3ffffffffffffff6 < pcVar22) {
                    /* WARNING: Subroutine does not return */
        std::bad_array_new_length::bad_array_new_length();
      }
      lVar15 = FUN_140b65d30((longlong)pcVar22 * 4 + 0x27);
      _Dst = (void *)(lVar15 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar15;
    }
    memmove(_Dst,local_b8,lStack_b0 - (longlong)local_b8);
    if (local_b8 != (void *)0x0) {
      uVar14 = (longlong)local_a8 - (longlong)local_b8;
      pvVar16 = local_b8;
      if (0xfff < uVar14) {
        pvVar16 = *(void **)((longlong)local_b8 + -8);
        if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar16))) goto LAB_140704fab;
        uVar14 = uVar14 + 0x27;
      }
      thunk_FUN_140b68ba8(pvVar16,uVar14);
    }
    lStack_b0 = (lVar17 - (longlong)pvVar19) + (longlong)_Dst;
    local_a8 = (void *)((longlong)_Dst + (longlong)pcVar22 * 4);
    local_b8 = _Dst;
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_140703d20(&local_258,lVar4,&local_f8,&local_d8,&local_b8);
    if (puStack_90 == local_88) {
      FUN_140707420(&local_98,puStack_90,&local_258);
    }
    else {
      puStack_90[4] = auStack_240[1];
      puStack_90[5] = auStack_240[2];
      puStack_90[2] = local_248;
      puStack_90[3] = auStack_240[0];
      *puStack_90 = local_258;
      puStack_90[1] = uStack_250;
      puStack_90 = puStack_90 + 6;
    }
    puVar1 = &(local_78->GraphicsPipeline_data).offset_0x140;
    *(byte *)puVar1 = *(byte *)puVar1 | 1;
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_140703d20(&local_258,local_a0,&local_f8,&local_d8,&local_b8);
    if (puStack_90 == local_88) {
      FUN_140707420(&local_98,puStack_90,&local_258);
    }
    else {
      puStack_90[4] = auStack_240[1];
      puStack_90[5] = auStack_240[2];
      puStack_90[2] = local_248;
      puStack_90[3] = auStack_240[0];
      *puStack_90 = local_258;
      puStack_90[1] = uStack_250;
      puStack_90 = puStack_90 + 6;
    }
    puVar1 = &(local_78->GraphicsPipeline_data).offset_0x140;
    *(byte *)puVar1 = *(byte *)puVar1 | 2;
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_140703d20(&local_258,local_118,&local_f8,&local_d8,&local_b8);
    if (puStack_90 == local_88) {
      FUN_140707420(&local_98,puStack_90,&local_258);
    }
    else {
      puStack_90[4] = auStack_240[1];
      puStack_90[5] = auStack_240[2];
      puStack_90[2] = local_248;
      puStack_90[3] = auStack_240[0];
      *puStack_90 = local_258;
      puStack_90[1] = uStack_250;
      puStack_90 = puStack_90 + 6;
    }
    puVar1 = &(local_78->GraphicsPipeline_data).offset_0x140;
    *(byte *)puVar1 = *(byte *)puVar1 | 4;
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_140703d20(&local_258,local_110,&local_f8,&local_d8,&local_b8);
    if (puStack_90 == local_88) {
      FUN_140707420(&local_98,puStack_90,&local_258);
    }
    else {
      puStack_90[4] = auStack_240[1];
      puStack_90[5] = auStack_240[2];
      puStack_90[2] = local_248;
      puStack_90[3] = auStack_240[0];
      *puStack_90 = local_258;
      puStack_90[1] = uStack_250;
      puStack_90 = puStack_90 + 6;
    }
    puVar1 = &(local_78->GraphicsPipeline_data).offset_0x140;
    *(byte *)puVar1 = *(byte *)puVar1 | 8;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_140703d20(&local_258,local_108,&local_f8,&local_d8,&local_b8);
    if (puStack_90 == local_88) {
      FUN_140707420(&local_98,puStack_90,&local_258);
    }
    else {
      puStack_90[4] = auStack_240[1];
      puStack_90[5] = auStack_240[2];
      puStack_90[2] = local_248;
      puStack_90[3] = auStack_240[0];
      *puStack_90 = local_258;
      puStack_90[1] = uStack_250;
      puStack_90 = puStack_90 + 6;
    }
    puVar1 = &(local_78->GraphicsPipeline_data).offset_0x140;
    *(byte *)puVar1 = *(byte *)puVar1 | 0x10;
  }
  local_3c8[0] = 0x13;
  local_3a0 = 0;
  local_3c0 = 0;
  uStack_3b8 = 0;
  iStack_3b4 = 0;
  local_3b0 = 0;
  uStack_3ac = 0;
  local_3a8 = 0;
  if (local_150 != 0) {
    lVar17 = *(longlong *)(local_150 + 0x28);
    iStack_3b4 = (int)((ulonglong)(*(longlong *)(local_150 + 0x30) - lVar17) >> 2) * -0x55555555;
    local_3b0 = (undefined4)lVar17;
    uStack_3ac = (undefined4)((ulonglong)lVar17 >> 0x20);
    local_3a0 = *(longlong *)(local_150 + 0x40);
    local_3a8 = (undefined4)((ulonglong)(*(longlong *)(local_150 + 0x48) - local_3a0) >> 4);
  }
  local_384 = FUN_1406f2450(*param_2);
  local_398[0] = 0x14;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_4e8[0] = 0x16;
  local_4e0 = 0;
  local_4d8 = 0x100000000;
  local_4d0 = 0;
  local_4c8 = 1;
  local_4c0 = 0;
  uVar11 = FUN_1406f2470(param_2[0x8c]);
  local_358 = FUN_1406f2480(param_2[0x8d]);
  local_354 = (byte)param_2[0x8e] ^ 1;
  local_34c = (float)*(int *)(param_2 + 0x94);
  local_378[0] = 0x17;
  local_370 = (undefined4 *)0x0;
  uStack_368 = 0;
  local_360 = 0;
  local_350 = (uint)(*(int *)(param_2 + 0x94) != 0);
  local_348 = *(undefined8 *)(param_2 + 0x98);
  local_340 = 0x3f800000;
  local_450[0] = 0x3b9c5489;
  local_448 = 0;
  local_440 = 0x100000000;
  local_438 = 0;
  if (param_2[0xa2] == '\x01') {
    local_370 = local_450;
  }
  local_3fc = *(undefined4 *)((longlong)param_3 + 0x14);
  local_410[0] = 0x18;
  local_408 = 0;
  local_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3e8 = (uint)(byte)param_2[0x78];
  local_3e4 = 0;
  local_a0 = (undefined4 *)CONCAT44(local_a0._4_4_,(uint)(byte)param_2[0x79]);
  bVar2 = param_2[0x7a];
  local_35c = uVar11;
  uVar12 = FUN_1406f24a0(param_2[0x7b]);
  bVar3 = param_2[0x7c];
  FUN_1406f24d0(&local_258,param_2 + 0x79,param_2 + 0x81);
  uVar14 = local_248;
  uVar6 = uStack_250;
  pcVar22 = local_258;
  uVar11 = (undefined4)auStack_240[0];
  FUN_1406f24d0(&local_318,param_2 + 0x79,param_2 + 0x85);
  local_4b8[0] = 0x19;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a4 = local_a0._0_4_;
  local_4a0 = (uint)bVar2;
  local_498 = 0;
  local_494 = (uint)bVar3;
  local_490 = pcVar22;
  uStack_488 = uVar6;
  local_480 = uVar14;
  local_478 = uVar11;
  local_474 = local_318;
  uStack_470 = uStack_314;
  uStack_46c = (undefined4)uStack_310;
  uStack_468 = uStack_310._4_4_;
  local_45c = (undefined4)uStack_300;
  local_458 = 0;
  local_49c = uVar12;
  uVar11 = FUN_1406f26c0(param_2[0xca]);
  uVar12 = FUN_1406f26c0(param_2[0xcb]);
  FUN_1406f2690(&local_258,param_2[0xc9]);
  local_418 = CONCAT44(uVar12,uVar11);
  local_430[0] = 0x3b9e3cd1;
  local_428 = 0;
  local_420 = local_258;
  iVar13 = FUN_14071bfb0(&(local_78->GraphicsPipeline_data).offset_0x1b8,
                         &(local_78->GraphicsPipeline_data).offset_0x148,
                         &(local_78->GraphicsPipeline_data).field_0x1c8,
                         &(local_78->GraphicsPipeline_data).offset_0x190,local_148,param_2 + 0xd0);
  if (iVar13 == 0) {
    local_a0 = local_130;
    local_158 = param_3[1];
    auStack_240[0x1b] = 0;
    auStack_240[0x1c] = 0;
    auStack_240[0x19] = 0;
    auStack_240[0x1a] = 0;
    auStack_240[0x17] = 0;
    auStack_240[0x18] = 0;
    auStack_240[0x15] = 0;
    auStack_240[0x16] = 0;
    auStack_240[0x13] = 0;
    auStack_240[0x14] = 0;
    auStack_240[0x11] = 0;
    auStack_240[0x12] = 0;
    auStack_240[0xf] = 0;
    auStack_240[0x10] = 0;
    auStack_240[0xd] = 0;
    auStack_240[0xe] = 0;
    auStack_240[0xb] = 0;
    auStack_240[0xc] = 0;
    auStack_240[9] = 0;
    auStack_240[10] = 0;
    auStack_240[7] = 0;
    auStack_240[8] = 0;
    auStack_240[5] = 0;
    auStack_240[6] = 0;
    auStack_240[3] = 0;
    auStack_240[4] = 0;
    auStack_240[1] = 0;
    auStack_240[2] = 0;
    local_248 = 0;
    auStack_240[0] = 0;
    local_258 = (char *)0x0;
    uStack_250 = 0;
    uVar21 = 0;
    if ((int)local_158 != 0) {
      do {
        uVar14 = (ulonglong)uVar21;
        FUN_1406f25a0(&local_318,param_2 + 0x38 + uVar14 * 8);
        auStack_240[uVar14 * 4 + -1] = CONCAT44(iStack_304,local_308);
        auStack_240[uVar14 * 4] = uStack_300;
        *(undefined4 *)(&local_258 + uVar14 * 4) = local_318;
        *(undefined4 *)((longlong)&local_258 + uVar14 * 0x20 + 4) = uStack_314;
        *(undefined4 *)(&uStack_250 + uVar14 * 4) = (undefined4)uStack_310;
        *(undefined4 *)((longlong)&uStack_250 + uVar14 * 0x20 + 4) = uStack_310._4_4_;
        uVar21 = uVar21 + 1;
      } while (uVar21 < (uint)param_3[1]);
    }
    local_4f8 = 0;
    uStack_4f0 = 0;
    local_520[0] = 0x1a;
    local_518 = 0;
    uStack_510 = 0;
    local_508 = 0;
    local_504 = (undefined4)local_158;
    local_500 = &local_258;
    cVar10 = FUN_1406dfc80(param_2 + 0x38);
    (local_78->GraphicsPipeline_data).field_0x1cc = cVar10;
    local_138 = 0x100000000;
    local_120 = 2;
    lVar17 = 2;
    if (cVar10 == '\0') {
      if (*(char *)((longlong)&(local_78->GraphicsPipeline_data).offset_0x81 + 7) == '\x01')
      goto LAB_140704f7b;
LAB_140704b87:
      cVar10 = *(char *)((longlong)&(local_78->GraphicsPipeline_data).offset_0xcc + 4);
    }
    else {
      local_130[0] = 4;
      local_120 = 3;
      lVar17 = 3;
      local_a0 = local_130 + 1;
      if (*(char *)((longlong)&(local_78->GraphicsPipeline_data).offset_0x81 + 7) != '\x01')
      goto LAB_140704b87;
LAB_140704f7b:
      *local_a0 = 8;
      lVar17 = lVar17 + 1;
      cVar10 = *(char *)((longlong)&(local_78->GraphicsPipeline_data).offset_0xcc + 4);
      local_120 = lVar17;
    }
    if (cVar10 == '\x01') {
      *(undefined4 *)((longlong)&local_138 + lVar17 * 4) = 0x3b9e3cd0;
      lVar17 = local_120 + 1;
      local_120 = lVar17;
    }
    local_338[0] = 0x1b;
    local_330 = 0;
    local_328 = 0;
    local_324 = (undefined4)lVar17;
    local_320 = &local_138;
    uVar14 = 0;
    if (param_3[1] != 0) {
      do {
        uVar11 = FUN_1406f1fe0(*(undefined1 *)((longlong)param_3 + uVar14));
        local_540[uVar14] = uVar11;
        uVar14 = uVar14 + 1;
      } while (uVar14 < (ulonglong)param_3[1]);
    }
    lVar17 = FUN_1406e0030(*(undefined1 *)(param_3 + 2));
    local_25c = FUN_1406f1fe0(*(undefined1 *)(param_3 + 2));
    pGVar9 = local_78;
    plVar8 = local_100;
    local_260 = local_25c;
    if ((*(byte *)(lVar17 + 0x13) & 0x10) == 0) {
      local_260 = 0;
    }
    local_26c = *(undefined4 *)(param_3 + 1);
    if ((*(byte *)(lVar17 + 0x13) & 0x20) == 0) {
      local_25c = 0;
    }
    local_280[0] = 0x3b9b75e2;
    local_278 = (undefined4 *)0x0;
    local_270 = 0;
    local_268 = local_540;
    iStack_304 = (int)((longlong)puStack_90 - local_98 >> 4) * -0x55555555;
    local_2b0 = (local_78->GraphicsPipeline_data).offset_0x1b8;
    local_318 = 0x1c;
    uStack_310 = local_280;
    local_308 = 0;
    uStack_300 = local_98;
    local_2f8 = local_3c8;
    local_2f0 = local_398;
    local_2e8 = (undefined4 *)0x0;
    local_2e0 = local_4e8;
    local_2d8 = local_378;
    local_2d0 = local_410;
    local_2c8 = local_4b8;
    local_2c0 = local_520;
    local_2b8 = local_338;
    local_2a8 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_290 = 0xffffffff;
    if (*(char *)((longlong)&(local_78->GraphicsPipeline_data).offset_0xcc + 4) == '\x01') {
      local_278 = local_430;
    }
    local_3e0[0] = 0x15;
    local_3d8 = 0;
    lStack_3d0 = 0;
    if (*param_2 == '\b') {
      lStack_3d0 = (ulonglong)*(uint *)(param_2 + 4) << 0x20;
      local_2e8 = local_3e0;
    }
    iVar13 = (*DAT_1416b6f28)(*(undefined8 *)((longlong)local_140 + 0xa0),
                              *(undefined8 *)((longlong)local_140 + 0xb0),1,&local_318,
                              *(undefined8 *)((longlong)local_140 + 0xa8),
                              &(local_78->GraphicsPipeline_data).offset_0x1c0);
    pGVar18 = (GraphicsPipeline *)0x0;
    if (iVar13 == 0) {
      pGVar18 = pGVar9;
    }
    *plVar8 = (longlong)pGVar18;
  }
  else {
    *local_100 = 0;
    plVar8 = local_100;
  }
  if (local_b8 != (void *)0x0) {
    uVar14 = (longlong)local_a8 - (longlong)local_b8;
    pvVar19 = local_b8;
    if (0xfff < uVar14) {
      pvVar19 = *(void **)((longlong)local_b8 + -8);
      if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar19))) goto LAB_140704fab;
      uVar14 = uVar14 + 0x27;
    }
    thunk_FUN_140b68ba8(pvVar19,uVar14);
  }
  if (local_d8 != 0) {
    uVar14 = local_c8 - local_d8;
    lVar17 = local_d8;
    if (0xfff < uVar14) {
      lVar17 = *(longlong *)(local_d8 + -8);
      if (0x1f < (ulonglong)((local_d8 + -8) - lVar17)) goto LAB_140704fab;
      uVar14 = uVar14 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar17,uVar14);
  }
  if (local_f8 != 0) {
    uVar14 = local_e8 - local_f8;
    lVar17 = local_f8;
    if (0xfff < uVar14) {
      lVar17 = *(longlong *)(local_f8 + -8);
      if (0x1f < (ulonglong)((local_f8 + -8) - lVar17)) goto LAB_140704fab;
      uVar14 = uVar14 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar17,uVar14);
  }
  if (local_98 != 0) {
    uVar20 = (longlong)local_88 - local_98;
    uVar14 = local_98;
    if (0xfff < uVar20) {
      uVar14 = *(ulonglong *)(local_98 - 8);
      if (0x1f < (local_98 - 8) - uVar14) {
LAB_140704fab:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar20 = uVar20 + 0x27;
    }
    thunk_FUN_140b68ba8(uVar14,uVar20);
  }
  return plVar8;
}

