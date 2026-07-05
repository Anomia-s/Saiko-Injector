/**
 * Function: void_jph_debugrenderer_drawmarkerrvec3arg_col
 * Address:  140378eb0
 * Signature: undefined void_jph_debugrenderer_drawmarkerrvec3arg_col(void)
 * Body size: 519 bytes
 */


void void_jph_debugrenderer_drawmarkerrvec3arg_col
               (longlong *param_1,undefined1 (*param_2) [16],undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined4 extraout_var;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar9 [64];
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_70;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM7._0_16_;
  auVar8 = ZEXT1664(in_XMM3);
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar7 = auVar8._0_16_;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
      pauVar5 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar3 = rdtsc();
      in_ZMM7 = ZEXT864(uVar3 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar3));
      goto LAB_140378f93;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
      auVar7 = auVar8._0_16_;
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
LAB_140378f93:
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auVar4 = vshufps_avx(auVar6,auVar7,4);
  auVar8 = ZEXT1664(auVar4);
  auVar4 = vblendps_avx(auVar6,auVar7,1);
  auVar9 = ZEXT1664(auVar4);
  auVar4 = vinsertps_avx(auVar6,auVar7,0x1d);
  auVar7 = *param_2;
  local_88._0_4_ = auVar4._0_4_ + auVar7._0_4_;
  local_88._4_4_ = auVar4._4_4_ + auVar7._4_4_;
  local_88._8_4_ = auVar4._8_4_ + auVar7._8_4_;
  local_88._12_4_ = auVar4._12_4_ + auVar7._12_4_;
  local_98 = vsubps_avx(auVar7,auVar4);
  (**(code **)(*param_1 + 8))(param_1,local_98,local_88,param_3);
  auVar7 = *param_2;
  local_a8._0_4_ = auVar9._0_4_ + auVar7._0_4_;
  local_a8._4_4_ = auVar9._4_4_ + auVar7._4_4_;
  local_a8._8_4_ = auVar9._8_4_ + auVar7._8_4_;
  local_a8._12_4_ = auVar9._12_4_ + auVar7._12_4_;
  local_b8 = vsubps_avx(auVar7,auVar9._0_16_);
  (**(code **)(*param_1 + 8))(param_1,local_b8,local_a8,param_3);
  auVar7 = *param_2;
  local_c8._0_4_ = auVar8._0_4_ + auVar7._0_4_;
  local_c8._4_4_ = auVar8._4_4_ + auVar7._4_4_;
  local_c8._8_4_ = auVar8._8_4_ + auVar7._8_4_;
  local_c8._12_4_ = auVar8._12_4_ + auVar7._12_4_;
  local_d8 = vsubps_avx(auVar7,auVar8._0_16_);
  (**(code **)(*param_1 + 8))(param_1,local_d8,local_c8,param_3);
  if (pauVar5 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar4 = vpinsrq_avx(in_ZMM7._0_16_,
                         uVar3 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar3),1);
    auVar7 = vmovntdq_avx(SUB6416(ZEXT864(0x141395b79),0));
    *pauVar5 = auVar7;
    auVar7 = vmovntdq_avx(auVar4);
    pauVar5[1] = auVar7;
  }
  if (DAT_1414ef3c0 == (local_70 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_70 ^ (ulonglong)auStack_f8);
}

