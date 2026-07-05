/**
 * Function: void_jph_debugrenderer_drawcoordinatesystemrm
 * Address:  140379370
 * Signature: undefined void_jph_debugrenderer_drawcoordinatesystemrm(void)
 * Body size: 594 bytes
 */


void void_jph_debugrenderer_drawcoordinatesystemrm(undefined8 param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined4 extraout_var;
  undefined1 (*pauVar5) [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 in_ZMM7 [64];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  float local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_60;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM7._0_16_;
  auVar7 = ZEXT1664(in_XMM2);
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar6 = auVar7._0_16_;
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
      goto LAB_14037944d;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
      auVar6 = auVar7._0_16_;
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
LAB_14037944d:
  fVar8 = auVar6._0_4_ * 0.1;
  auVar6 = vshufps_avx(auVar6,auVar6,0);
  auVar7 = ZEXT1664(auVar6);
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  local_88 = *(undefined1 (*) [16])(param_2 + 0xc);
  local_78._0_4_ = local_88._0_4_ + auVar6._0_4_ * *param_2 + param_2[4] * 0.0 + param_2[8] * 0.0;
  local_78._4_4_ = local_88._4_4_ + auVar6._4_4_ * param_2[1] + param_2[5] * 0.0 + param_2[9] * 0.0;
  local_78._8_4_ = local_88._8_4_ + auVar6._8_4_ * param_2[2] + param_2[6] * 0.0 + param_2[10] * 0.0
  ;
  local_78._12_4_ =
       local_88._12_4_ + auVar6._12_4_ * param_2[3] + param_2[7] * 0.0 + param_2[0xb] * 0.0;
  local_d8 = fVar8;
  void_jph_debugrenderer_drawarrowrvec3arg_rvec(param_1,local_88,local_78,0xff0000ff);
  local_a8 = *(undefined1 (*) [16])(param_2 + 0xc);
  local_98._0_4_ =
       local_a8._0_4_ + fVar9 * *param_2 + auVar7._0_4_ * param_2[4] + fVar9 * param_2[8];
  local_98._4_4_ =
       local_a8._4_4_ + fVar10 * param_2[1] + auVar7._4_4_ * param_2[5] + fVar10 * param_2[9];
  local_98._8_4_ =
       local_a8._8_4_ + fVar11 * param_2[2] + auVar7._8_4_ * param_2[6] + fVar11 * param_2[10];
  local_98._12_4_ =
       local_a8._12_4_ + fVar12 * param_2[3] + auVar7._12_4_ * param_2[7] + fVar12 * param_2[0xb];
  local_d8 = fVar8;
  void_jph_debugrenderer_drawarrowrvec3arg_rvec(param_1,local_a8,local_98,0xff00ff00);
  local_c8 = *(undefined1 (*) [16])(param_2 + 0xc);
  local_b8._0_4_ =
       local_c8._0_4_ + fVar9 * *param_2 + fVar9 * param_2[4] + auVar7._0_4_ * param_2[8];
  local_b8._4_4_ =
       local_c8._4_4_ + fVar10 * param_2[1] + fVar10 * param_2[5] + auVar7._4_4_ * param_2[9];
  local_b8._8_4_ =
       local_c8._8_4_ + fVar11 * param_2[2] + fVar11 * param_2[6] + auVar7._8_4_ * param_2[10];
  local_b8._12_4_ =
       local_c8._12_4_ + fVar12 * param_2[3] + fVar12 * param_2[7] + auVar7._12_4_ * param_2[0xb];
  local_d8 = fVar8;
  void_jph_debugrenderer_drawarrowrvec3arg_rvec(param_1,local_c8,local_b8,0xffff0000);
  if (pauVar5 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar4 = vpinsrq_avx(in_ZMM7._0_16_,
                         uVar3 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar3),1);
    auVar6 = vmovntdq_avx(SUB6416(ZEXT864(0x141395c00),0));
    *pauVar5 = auVar6;
    auVar6 = vmovntdq_avx(auVar4);
    pauVar5[1] = auVar6;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_f8);
}

