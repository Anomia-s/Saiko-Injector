/**
 * Function: void_jph_narrowphasequery_castshapeconst_rsha
 * Address:  1400c7680
 * Signature: undefined void_jph_narrowphasequery_castshapeconst_rsha(void)
 * Body size: 581 bytes
 */


void void_jph_narrowphasequery_castshapeconst_rsha
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
               longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined4 extraout_var;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar7 [64];
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_1b8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar6 = in_ZMM6._0_16_;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
      pauVar5 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar3 = rdtsc();
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar3 & 0xffffffff00000000 |
                     CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar3);
      goto LAB_1400c7784;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
      auVar6 = in_ZMM6._0_16_;
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
LAB_1400c7784:
  local_80 = *param_1;
  local_98 = *param_4;
  uStack_90 = param_4[1];
  local_150 = *(undefined4 *)(param_5 + 8);
  local_148 = *(undefined8 *)(param_5 + 0x10);
  local_158 = &PTR_FUN_140de3f60;
  local_138 = *param_2;
  uStack_130 = param_2[1];
  uStack_128 = param_2[2];
  uStack_120 = param_2[3];
  local_118 = param_2[4];
  uStack_110 = param_2[5];
  uStack_108 = param_2[6];
  uStack_100 = param_2[7];
  local_f8 = param_2[8];
  uStack_f0 = param_2[9];
  uStack_e8 = param_2[10];
  uStack_e0 = param_2[0xb];
  local_d8 = param_2[0xc];
  uStack_d0 = param_2[0xd];
  uStack_c8 = param_2[0xe];
  uStack_c0 = param_2[0xf];
  uStack_b8 = param_2[0x10];
  uStack_b0 = param_2[0x11];
  local_88 = param_5;
  local_78 = param_8;
  local_70 = param_9;
  local_188 = param_2[0xe];
  uStack_180 = param_2[0xf];
  uStack_178 = param_2[0x10];
  uStack_170 = param_2[0x11];
  local_168 = param_2[0xc];
  uStack_160 = param_2[0xd];
  local_198 = param_7;
  auVar7 = ZEXT1664(auVar6);
  local_a8 = param_3;
  (**(code **)(*(longlong *)param_1[1] + 0x30))
            ((longlong *)param_1[1],&local_188,&local_158,param_6);
  if (pauVar5 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar4 = vpinsrq_avx(auVar7._0_16_,
                         uVar3 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar3),1);
    auVar6 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c5e3),0));
    *pauVar5 = auVar6;
    auVar6 = vmovntdq_avx(auVar4);
    pauVar5[1] = auVar6;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_1b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_1b8);
}

