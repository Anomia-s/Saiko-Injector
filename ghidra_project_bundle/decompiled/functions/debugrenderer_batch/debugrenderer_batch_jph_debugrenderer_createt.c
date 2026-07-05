/**
 * Function: debugrenderer_batch_jph_debugrenderer_createt
 * Address:  14037b2c0
 * Signature: undefined debugrenderer_batch_jph_debugrenderer_createt(void)
 * Body size: 3199 bytes
 */


undefined8
debugrenderer_batch_jph_debugrenderer_createt
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined1 (*param_5) [16])

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong *plVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar9;
  ulonglong *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_ZMM6 [64];
  undefined8 uVar14;
  undefined1 auVar15 [64];
  undefined8 uVar16;
  undefined1 auVar17 [64];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_418 [32];
  undefined4 *local_3f8;
  undefined1 *local_3f0;
  undefined4 *local_3e8;
  undefined8 *local_3e0;
  undefined4 *local_3d8;
  undefined8 *local_3d0;
  undefined1 *local_3c8;
  undefined4 local_3c0;
  undefined1 (*local_3b8) [16];
  longlong *local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_398 [16];
  longlong local_388;
  undefined1 local_378 [16];
  ulonglong *local_368;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  longlong local_310 [7];
  longlong *local_2d8;
  longlong local_2d0 [7];
  longlong *local_298;
  longlong local_290 [7];
  longlong *local_258;
  longlong local_250 [7];
  longlong *local_218;
  longlong local_210 [7];
  longlong *local_1d8;
  longlong local_1d0 [7];
  longlong *local_198;
  longlong local_190 [7];
  longlong *local_158;
  longlong local_150 [7];
  longlong *local_118;
  undefined1 local_110 [56];
  undefined8 local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [16];
  
  local_c8 = in_ZMM6._0_16_;
  local_d0 = DAT_1414ef3c0 ^ (ulonglong)auStack_418;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
      local_3b8 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar5 = rdtsc();
      in_ZMM6 = ZEXT864(uVar5 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)local_3b8 >> 0x20),(int)uVar5));
      goto LAB_14037b3d7;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_3b8 = (undefined1 (*) [16])0x0;
LAB_14037b3d7:
  local_398._0_12_ = ZEXT812(0);
  local_398._12_4_ = 0;
  local_368 = (ulonglong *)0x0;
  local_388 = 0;
  local_118 = (longlong *)0x0;
  puVar3 = (undefined8 *)param_3[7];
  local_378 = local_398;
  if (puVar3 != (undefined8 *)0x0) {
    local_118 = (longlong *)(**(code **)*puVar3)(puVar3,local_150);
  }
  uVar14 = 0x3e8000003e800000;
  local_3a0 = 0x3e8000003e800000;
  local_314 = 0xffffffff;
  local_318 = 0xffffffff;
  local_31c = 0xffffffff;
  local_d8 = 0;
  local_3a8 = param_2;
  if (local_118 != (longlong *)0x0) {
    local_d8 = (**(code **)*local_118)(local_118,local_110);
  }
  uVar22 = 0;
  uVar23 = 0x3f8000003f800000;
  local_338 = 0;
  uStack_330 = 0x3f8000003f800000;
  uVar18 = 0x3f80000000000000;
  uVar19 = 0;
  local_348 = ZEXT816(0x3f80000000000000);
  auVar15 = ZEXT464(0x3f800000);
  local_358 = auVar15._0_16_;
  local_3e8 = &local_318;
  local_3f0 = local_348;
  local_3f8 = &local_314;
  local_3e0 = &local_338;
  local_3d8 = &local_31c;
  local_3d0 = &local_3a0;
  local_3c8 = local_110;
  local_3c0 = param_4;
  FUN_14037a000(param_1,local_398,local_378,local_358);
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x20))(local_118,local_118 != local_150);
    local_118 = (longlong *)0x0;
  }
  local_158 = (longlong *)0x0;
  puVar3 = (undefined8 *)param_3[7];
  if (puVar3 != (undefined8 *)0x0) {
    local_158 = (longlong *)(**(code **)*puVar3)(puVar3,local_190);
  }
  uVar16 = 0x3f4000003e800000;
  local_3a0 = 0x3f4000003e800000;
  local_314 = 0xffffffff;
  local_318 = 0xffffffff;
  local_31c = 0xffffffff;
  local_d8 = 0;
  if (local_158 != (longlong *)0x0) {
    local_d8 = (**(code **)*local_158)(local_158,local_110);
  }
  auVar17 = ZEXT464(0xbf800000);
  local_348 = auVar17._0_16_;
  local_358._8_8_ = uVar19;
  local_358._0_8_ = uVar18;
  local_3e8 = &local_318;
  local_3f0 = local_348;
  local_3f8 = &local_314;
  local_3e0 = &local_338;
  local_3d8 = &local_31c;
  local_3d0 = &local_3a0;
  local_3c8 = local_110;
  local_3c0 = param_4;
  local_338 = uVar22;
  uStack_330 = uVar23;
  FUN_14037a000(param_1,local_398,local_378,local_358);
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x20))(local_158,local_158 != local_190);
    local_158 = (longlong *)0x0;
  }
  local_198 = (longlong *)0x0;
  puVar3 = (undefined8 *)param_3[7];
  if (puVar3 != (undefined8 *)0x0) {
    local_198 = (longlong *)(**(code **)*puVar3)(puVar3,local_1d0);
  }
  local_314 = 0xffffffff;
  local_318 = 0xffffffff;
  local_31c = 0xffffffff;
  local_d8 = 0;
  local_3a0 = uVar16;
  if (local_198 != (longlong *)0x0) {
    local_d8 = (**(code **)*local_198)(local_198,local_110);
  }
  local_348 = auVar15._0_16_;
  uVar20 = 0xbf80000000000000;
  uVar21 = 0;
  local_358 = ZEXT816(0xbf80000000000000);
  local_3e8 = &local_318;
  local_3f0 = local_348;
  local_3f8 = &local_314;
  local_3e0 = &local_338;
  local_3d8 = &local_31c;
  local_3d0 = &local_3a0;
  local_3c8 = local_110;
  local_3c0 = param_4;
  local_338 = uVar22;
  uStack_330 = uVar23;
  FUN_14037a000(param_1,local_398,local_378,local_358);
  if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x20))(local_198,local_198 != local_1d0);
    local_198 = (longlong *)0x0;
  }
  local_1d8 = (longlong *)0x0;
  puVar3 = (undefined8 *)param_3[7];
  if (puVar3 != (undefined8 *)0x0) {
    local_1d8 = (longlong *)(**(code **)*puVar3)(puVar3,local_210);
  }
  local_314 = 0xffffffff;
  local_318 = 0xffffffff;
  local_31c = 0xffffffff;
  local_d8 = 0;
  local_3a0 = uVar14;
  if (local_1d8 != (longlong *)0x0) {
    local_d8 = (**(code **)*local_1d8)(local_1d8,local_110);
  }
  local_348._8_8_ = uVar21;
  local_348._0_8_ = uVar20;
  local_358 = auVar17._0_16_;
  local_3e8 = &local_318;
  local_3f0 = local_348;
  local_3f8 = &local_314;
  local_3e0 = &local_338;
  local_3d8 = &local_31c;
  local_3d0 = &local_3a0;
  local_3c8 = local_110;
  local_3c0 = param_4;
  local_338 = uVar22;
  uStack_330 = uVar23;
  FUN_14037a000(param_1,local_398,local_378,local_358);
  if (local_1d8 != (longlong *)0x0) {
    (**(code **)(*local_1d8 + 0x20))(local_1d8,local_1d8 != local_210);
    local_1d8 = (longlong *)0x0;
  }
  local_218 = (longlong *)0x0;
  puVar3 = (undefined8 *)param_3[7];
  if (puVar3 != (undefined8 *)0x0) {
    local_218 = (longlong *)(**(code **)*puVar3)(puVar3,local_250);
  }
  local_314 = 0xffffffff;
  local_318 = 0xffffffff;
  local_31c = 0xffffffff;
  local_d8 = 0;
  local_3a0 = uVar16;
  if (local_218 != (longlong *)0x0) {
    local_d8 = (**(code **)*local_218)(local_218,local_110);
  }
  uVar22 = 0;
  uVar23 = 0xbf800000bf800000;
  local_338 = 0;
  uStack_330 = 0xbf800000bf800000;
  local_348 = auVar15._0_16_;
  local_358._8_8_ = uVar19;
  local_358._0_8_ = uVar18;
  local_3e8 = &local_318;
  local_3f0 = local_348;
  local_3f8 = &local_314;
  local_3e0 = &local_338;
  local_3d8 = &local_31c;
  local_3d0 = &local_3a0;
  local_3c8 = local_110;
  local_3c0 = param_4;
  FUN_14037a000(param_1,local_398,local_378,local_358);
  if (local_218 != (longlong *)0x0) {
    (**(code **)(*local_218 + 0x20))(local_218,local_218 != local_250);
    local_218 = (longlong *)0x0;
  }
  local_258 = (longlong *)0x0;
  puVar3 = (undefined8 *)param_3[7];
  if (puVar3 != (undefined8 *)0x0) {
    local_258 = (longlong *)(**(code **)*puVar3)(puVar3,local_290);
  }
  local_314 = 0xffffffff;
  local_318 = 0xffffffff;
  local_31c = 0xffffffff;
  local_d8 = 0;
  local_3a0 = uVar14;
  if (local_258 != (longlong *)0x0) {
    local_d8 = (**(code **)*local_258)(local_258,local_110);
  }
  local_348._8_8_ = uVar19;
  local_348._0_8_ = uVar18;
  local_358 = auVar17._0_16_;
  local_3e8 = &local_318;
  local_3f0 = local_348;
  local_3f8 = &local_314;
  local_3e0 = &local_338;
  local_3d8 = &local_31c;
  local_3d0 = &local_3a0;
  local_3c8 = local_110;
  local_3c0 = param_4;
  local_338 = uVar22;
  uStack_330 = uVar23;
  FUN_14037a000(param_1,local_398,local_378,local_358);
  if (local_258 != (longlong *)0x0) {
    (**(code **)(*local_258 + 0x20))(local_258,local_258 != local_290);
    local_258 = (longlong *)0x0;
  }
  local_298 = (longlong *)0x0;
  puVar3 = (undefined8 *)param_3[7];
  if (puVar3 != (undefined8 *)0x0) {
    local_298 = (longlong *)(**(code **)*puVar3)(puVar3,local_2d0);
  }
  auVar11 = auVar15._0_16_;
  local_314 = 0xffffffff;
  local_318 = 0xffffffff;
  local_31c = 0xffffffff;
  local_d8 = 0;
  local_3a0 = uVar14;
  if (local_298 != (longlong *)0x0) {
    local_d8 = (**(code **)*local_298)(local_298,local_110);
    auVar11 = auVar15._0_16_;
  }
  local_348._8_8_ = uVar21;
  local_348._0_8_ = uVar20;
  local_3e8 = &local_318;
  local_3f0 = local_348;
  local_3f8 = &local_314;
  local_3e0 = &local_338;
  local_3d8 = &local_31c;
  local_3d0 = &local_3a0;
  local_3c8 = local_110;
  local_3c0 = param_4;
  local_358 = auVar11;
  local_338 = uVar22;
  uStack_330 = uVar23;
  FUN_14037a000(param_1,local_398,local_378,local_358);
  if (local_298 != (longlong *)0x0) {
    (**(code **)(*local_298 + 0x20))(local_298,local_298 != local_2d0);
    local_298 = (longlong *)0x0;
  }
  local_2d8 = (longlong *)0x0;
  puVar3 = (undefined8 *)param_3[7];
  if (puVar3 != (undefined8 *)0x0) {
    local_2d8 = (longlong *)(**(code **)*puVar3)(puVar3,local_310);
  }
  auVar11 = auVar17._0_16_;
  local_314 = 0xffffffff;
  local_318 = 0xffffffff;
  local_31c = 0xffffffff;
  local_d8 = 0;
  local_3b0 = param_3;
  local_3a0 = uVar16;
  if (local_2d8 != (longlong *)0x0) {
    local_d8 = (**(code **)*local_2d8)(local_2d8,local_110);
    auVar11 = auVar17._0_16_;
  }
  local_358._8_8_ = uVar21;
  local_358._0_8_ = uVar20;
  local_3e8 = &local_318;
  local_3f0 = local_348;
  local_3f8 = &local_314;
  local_3e0 = &local_338;
  local_3d8 = &local_31c;
  local_3d0 = &local_3a0;
  local_3c8 = local_110;
  local_3c0 = param_4;
  local_348 = auVar11;
  local_338 = uVar22;
  uStack_330 = uVar23;
  FUN_14037a000(param_1,local_398,local_378,local_358);
  if (local_2d8 != (longlong *)0x0) {
    (**(code **)(*local_2d8 + 0x20))(local_2d8,local_2d8 != local_310);
    local_2d8 = (longlong *)0x0;
  }
  uVar14 = local_3a8;
  plVar8 = local_3b0;
  if (param_5 != (undefined1 (*) [16])0x0) {
    if (local_378._0_4_ < 1) {
      auVar12._8_4_ = 0x7f7fffff;
      auVar12._0_8_ = 0x7f7fffff7f7fffff;
      auVar12._12_4_ = 0x7f7fffff;
      auVar11._8_4_ = 0xff7fffff;
      auVar11._0_8_ = 0xff7fffffff7fffff;
      auVar11._12_4_ = 0xff7fffff;
    }
    else {
      auVar11._8_4_ = 0xff7fffff;
      auVar11._0_8_ = 0xff7fffffff7fffff;
      auVar11._12_4_ = 0xff7fffff;
      auVar12._8_4_ = 0x7f7fffff;
      auVar12._0_8_ = 0x7f7fffff7f7fffff;
      auVar12._12_4_ = 0x7f7fffff;
      puVar10 = local_368;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *puVar10;
        auVar13 = vshufps_avx(auVar13,ZEXT416((uint)puVar10[1]),4);
        auVar12 = vminps_avx(auVar12,auVar13);
        auVar11 = vmaxps_avx(auVar11,auVar13);
        puVar10 = (ulonglong *)((longlong)puVar10 + 0x24);
      } while (puVar10 < (ulonglong *)((longlong)local_368 + (longlong)local_378._0_4_ * 0x24));
    }
    *param_5 = auVar12;
    param_5[1] = auVar11;
  }
  local_3f8 = (undefined4 *)0;
  if (local_398._0_8_ != 0) {
    local_3f8 = (undefined4 *)local_388;
  }
  puVar10 = local_368;
  if (local_378._0_8_ == 0) {
    puVar10 = (ulonglong *)0x0;
  }
  local_3f0 = (undefined1 *)CONCAT44(local_3f0._4_4_,local_398._0_4_);
  (**(code **)(*param_1 + 0x18))(param_1,local_3a8,puVar10);
  uVar9 = extraout_var;
  if (local_388 != 0) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_398._8_8_;
    local_398 = auVar6 << 0x40;
    (*DAT_14151f538)();
    uVar9 = extraout_var_00;
  }
  auVar11 = in_ZMM6._0_16_;
  if (local_368 != (ulonglong *)0x0) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_378._8_8_;
    local_378 = auVar7 << 0x40;
    (*DAT_14151f538)();
    auVar11 = in_ZMM6._0_16_;
    uVar9 = extraout_var_01;
  }
  if (local_3b8 != (undefined1 (*) [16])0x0) {
    uVar5 = rdtsc();
    auVar12 = vpinsrq_avx(auVar11,uVar5 & 0xffffffff00000000 | CONCAT44(uVar9,(int)uVar5),1);
    auVar11 = vmovntdq_avx(SUB6416(ZEXT864(0x141398b72),0));
    *local_3b8 = auVar11;
    auVar11 = vmovntdq_avx(auVar12);
    local_3b8[1] = auVar11;
  }
  plVar4 = (longlong *)plVar8[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar8);
    plVar8[7] = 0;
  }
  if (DAT_1414ef3c0 != (local_d0 ^ (ulonglong)auStack_418)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_d0 ^ (ulonglong)auStack_418);
  }
  return uVar14;
}

