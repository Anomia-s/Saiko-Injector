/**
 * Function: void_jph_debugrenderer_drawwireunitspherermat
 * Address:  140379850
 * Signature: undefined void_jph_debugrenderer_drawwireunitspherermat(void)
 * Body size: 1051 bytes
 */


void void_jph_debugrenderer_drawwireunitspherermat
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined4 extraout_var;
  undefined1 (*pauVar6) [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined8 *local_230;
  undefined4 local_228;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  undefined1 local_88 [16];
  
  local_88 = in_ZMM6._0_16_;
  local_90 = DAT_1414ef3c0 ^ (ulonglong)auStack_258;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar2 + 1;
      pauVar6 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      goto LAB_140379945;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_140379945:
  uVar13 = 0;
  uVar14 = 0x3f8000003f800000;
  local_a8 = 0;
  uStack_a0 = 0x3f8000003f800000;
  uVar9 = 0x3f80000000000000;
  uVar10 = 0;
  local_b8 = 0x3f80000000000000;
  uStack_b0 = 0;
  auVar7 = ZEXT464(0x3f800000);
  local_c8 = auVar7._0_16_;
  local_230 = &local_a8;
  local_238 = &local_b8;
  local_228 = param_4;
  FUN_140379c70(param_1,param_2,param_3,local_c8);
  auVar8 = ZEXT464(0xbf800000);
  local_f8 = auVar8._0_16_;
  local_230 = &local_d8;
  local_238 = &local_e8;
  local_228 = param_4;
  local_e8 = uVar9;
  uStack_e0 = uVar10;
  local_d8 = uVar13;
  uStack_d0 = uVar14;
  FUN_140379c70(param_1,param_2,param_3,local_f8);
  uVar11 = 0xbf80000000000000;
  uVar12 = 0;
  local_118 = 0xbf80000000000000;
  uStack_110 = 0;
  local_128 = auVar7._0_16_;
  local_230 = &local_108;
  local_238 = &local_118;
  local_228 = param_4;
  local_108 = uVar13;
  uStack_100 = uVar14;
  FUN_140379c70(param_1,param_2,param_3,local_128);
  local_158 = auVar8._0_16_;
  local_230 = &local_138;
  local_238 = &local_148;
  local_228 = param_4;
  local_148 = uVar11;
  uStack_140 = uVar12;
  local_138 = uVar13;
  uStack_130 = uVar14;
  FUN_140379c70(param_1,param_2,param_3,local_158);
  uVar13 = 0;
  uVar14 = 0xbf800000bf800000;
  local_168 = 0;
  uStack_160 = 0xbf800000bf800000;
  local_188 = auVar7._0_16_;
  local_230 = &local_168;
  local_238 = &local_178;
  local_228 = param_4;
  local_178 = uVar9;
  uStack_170 = uVar10;
  FUN_140379c70(param_1,param_2,param_3,local_188);
  local_1b8 = auVar8._0_16_;
  local_230 = &local_198;
  local_238 = &local_1a8;
  local_228 = param_4;
  local_1a8 = uVar9;
  uStack_1a0 = uVar10;
  local_198 = uVar13;
  uStack_190 = uVar14;
  FUN_140379c70(param_1,param_2,param_3,local_1b8);
  local_1e8 = auVar7._0_16_;
  local_230 = &local_1c8;
  local_238 = &local_1d8;
  local_228 = param_4;
  local_1d8 = uVar11;
  uStack_1d0 = uVar12;
  local_1c8 = uVar13;
  uStack_1c0 = uVar14;
  FUN_140379c70(param_1,param_2,param_3,local_1e8);
  local_218 = auVar8._0_16_;
  local_230 = &local_1f8;
  local_238 = &local_208;
  local_228 = param_4;
  local_208 = uVar11;
  uStack_200 = uVar12;
  local_1f8 = uVar13;
  uStack_1f0 = uVar14;
  FUN_140379c70(param_1,param_2,param_3,local_218);
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x141395829),0));
    *pauVar6 = auVar1;
    auVar1 = vmovntdq_avx(auVar5);
    pauVar6[1] = auVar1;
  }
  if (DAT_1414ef3c0 == (local_90 ^ (ulonglong)auStack_258)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_90 ^ (ulonglong)auStack_258);
}

