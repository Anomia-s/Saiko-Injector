/**
 * Function: virtual_void_jph_pathconstraintpathhermite_ge
 * Address:  1403688a0
 * Signature: undefined virtual_void_jph_pathconstraintpathhermite_ge(void)
 * Body size: 938 bytes
 */


void virtual_void_jph_pathconstraintpathhermite_ge
               (longlong param_1,undefined8 param_2,float *param_3,undefined1 (*param_4) [16],
               undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lVar25;
  int iVar26;
  undefined1 (*pauVar27) [16];
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  
  auVar29 = in_ZMM0._0_16_;
  auVar48 = ZEXT1664(in_ZMM1._0_16_);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar30._0_8_ = __dyn_tls_on_demand_init();
    auVar30._8_56_ = extraout_var;
    auVar29 = auVar30._0_16_;
  }
  auVar38 = auVar48._0_16_;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar5 + 0x200020);
    if ((ulonglong)uVar3 < 0x10000) {
      *(uint *)(lVar5 + 0x200020) = uVar3 + 1;
      pauVar27 = (undefined1 (*) [16])(lVar5 + (ulonglong)uVar3 * 0x20 + 0x20);
      uVar6 = rdtsc();
      auVar29._8_8_ = 0;
      auVar29._0_8_ =
           uVar6 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar6);
      goto LAB_140368995;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      auVar31._0_8_ =
           (*(code *)PTR_vfunction4_1414f67c8)
                     ("ProfileMeasurement: Too many samples, some data will be lost!");
      auVar38 = auVar48._0_16_;
      auVar31._8_56_ = extraout_var_00;
      auVar29 = auVar31._0_16_;
    }
  }
  pauVar27 = (undefined1 (*) [16])0x0;
LAB_140368995:
  iVar4 = *(int *)(param_1 + 0x10);
  auVar46 = vroundss_avx(auVar38,auVar38,0xb);
  iVar26 = (int)auVar46._0_4_;
  auVar33._0_4_ = (int)auVar46._0_4_;
  auVar33._4_4_ = (int)auVar46._4_4_;
  auVar33._8_4_ = (int)auVar46._8_4_;
  auVar33._12_4_ = (int)auVar46._12_4_;
  auVar46 = vcvtdq2ps_avx(auVar33);
  auVar38 = ZEXT416((uint)(auVar38._0_4_ - auVar46._0_4_));
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (iVar26 < 0) {
      iVar26 = iVar26 + (1 - iVar26 / iVar4) * iVar4;
    }
    iVar26 = iVar26 % iVar4;
  }
  else if (iVar26 < 0) {
    auVar38 = ZEXT816(0);
    iVar26 = 0;
  }
  else if (iVar4 + -1 <= iVar26) {
    iVar26 = iVar4 + -2;
    auVar38 = SUB6416(ZEXT464(0x3f800000),0);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar28 = (longlong)iVar26 * 0x30;
  lVar25 = (longlong)((iVar26 + 1) % iVar4) * 0x30;
  pfVar1 = (float *)(lVar5 + lVar25);
  fVar9 = *pfVar1;
  fVar10 = pfVar1[1];
  fVar11 = pfVar1[2];
  fVar12 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 0x10 + lVar25);
  fVar13 = *pfVar1;
  fVar14 = pfVar1[1];
  fVar15 = pfVar1[2];
  fVar16 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + lVar28);
  fVar17 = *pfVar1;
  fVar18 = pfVar1[1];
  fVar19 = pfVar1[2];
  fVar20 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 0x10 + lVar28);
  fVar21 = *pfVar1;
  fVar22 = pfVar1[1];
  fVar23 = pfVar1[2];
  fVar24 = pfVar1[3];
  fVar32 = auVar38._0_4_;
  fVar7 = fVar32 * fVar32;
  fVar8 = fVar7 * fVar32;
  auVar46 = vfmsub213ss_fma(SUB6416(ZEXT464(0x40000000),0),ZEXT416((uint)fVar8),
                            ZEXT416((uint)(fVar7 * 3.0)));
  auVar34 = vfmadd231ss_fma(ZEXT416((uint)(fVar7 * 3.0)),ZEXT416((uint)fVar8),
                            SUB6416(ZEXT464(0xc0000000),0));
  auVar35 = ZEXT416((uint)fVar7);
  auVar33 = vfmadd213ss_fma(SUB6416(ZEXT464(0xc0000000),0),auVar35,ZEXT416((uint)fVar8));
  auVar36 = vfmadd231ss_fma(ZEXT416((uint)(fVar32 * -4.0)),auVar35,SUB6416(ZEXT464(0x40400000),0));
  auVar37 = vfmadd231ss_fma(ZEXT416((uint)(fVar32 * -2.0)),auVar35,SUB6416(ZEXT464(0x40400000),0));
  auVar46 = ZEXT416((uint)(auVar46._0_4_ + 1.0));
  auVar46 = vshufps_avx(auVar46,auVar46,0);
  auVar33 = ZEXT416((uint)(auVar33._0_4_ + fVar32));
  auVar33 = vshufps_avx(auVar33,auVar33,0);
  auVar34 = vshufps_avx(auVar34,auVar34,0);
  auVar35 = vshufps_avx(ZEXT416((uint)(fVar8 - fVar7)),ZEXT416((uint)(fVar8 - fVar7)),0);
  *param_3 = auVar35._0_4_ * fVar13 +
             auVar46._0_4_ * fVar17 + auVar33._0_4_ * fVar21 + fVar9 * auVar34._0_4_;
  param_3[1] = auVar35._4_4_ * fVar14 +
               auVar46._4_4_ * fVar18 + auVar33._4_4_ * fVar22 + fVar10 * auVar34._4_4_;
  param_3[2] = auVar35._8_4_ * fVar15 +
               auVar46._8_4_ * fVar19 + auVar33._8_4_ * fVar23 + fVar11 * auVar34._8_4_;
  param_3[3] = auVar35._12_4_ * fVar16 +
               auVar46._12_4_ * fVar20 + auVar33._12_4_ * fVar24 + fVar12 * auVar34._12_4_;
  auVar46 = ZEXT416((uint)((fVar7 - fVar32) * 6.0));
  auVar46 = vshufps_avx(auVar46,auVar46,0);
  auVar33 = ZEXT416((uint)(auVar36._0_4_ + 1.0));
  auVar33 = vshufps_avx(auVar33,auVar33,0);
  auVar47._0_4_ = auVar33._0_4_ * fVar21 + auVar46._0_4_ * fVar17;
  auVar47._4_4_ = auVar33._4_4_ * fVar22 + auVar46._4_4_ * fVar18;
  auVar47._8_4_ = auVar33._8_4_ * fVar23 + auVar46._8_4_ * fVar19;
  auVar47._12_4_ = auVar33._12_4_ * fVar24 + auVar46._12_4_ * fVar20;
  auVar43._0_4_ = fVar9 * auVar46._0_4_;
  auVar43._4_4_ = fVar10 * auVar46._4_4_;
  auVar43._8_4_ = fVar11 * auVar46._8_4_;
  auVar43._12_4_ = fVar12 * auVar46._12_4_;
  auVar33 = vsubps_avx(auVar47,auVar43);
  auVar46 = vshufps_avx(auVar37,auVar37,0);
  auVar42._0_4_ = fVar13 * auVar46._0_4_ + auVar33._0_4_;
  auVar42._4_4_ = fVar14 * auVar46._4_4_ + auVar33._4_4_;
  auVar42._8_4_ = fVar15 * auVar46._8_4_ + auVar33._8_4_;
  auVar42._12_4_ = fVar16 * auVar46._12_4_ + auVar33._12_4_;
  auVar44._0_4_ = auVar42._0_4_ * auVar42._0_4_;
  auVar44._4_4_ = auVar42._4_4_ * auVar42._4_4_;
  auVar44._8_4_ = auVar42._8_4_ * auVar42._8_4_;
  auVar44._12_4_ = auVar42._12_4_ * auVar42._12_4_;
  auVar46 = vinsertps_avx(auVar44,auVar44,0x4c);
  auVar45._0_4_ = auVar44._0_4_ + auVar46._0_4_;
  auVar45._4_4_ = auVar44._4_4_ + auVar46._4_4_;
  auVar45._8_4_ = auVar44._8_4_ + auVar46._8_4_;
  auVar45._12_4_ = auVar44._12_4_ + auVar46._12_4_;
  auVar46 = vshufpd_avx(auVar45,auVar45,1);
  auVar46 = ZEXT416((uint)(auVar45._0_4_ + auVar46._0_4_));
  auVar46 = vsqrtss_avx(auVar46,auVar46);
  auVar46 = vshufps_avx(auVar46,auVar46,0);
  auVar46 = vdivps_avx(auVar42,auVar46);
  *param_4 = auVar46;
  auVar33 = vshufps_avx(ZEXT416((uint)(1.0 - fVar32)),ZEXT416((uint)(1.0 - fVar32)),0);
  pfVar1 = (float *)(lVar5 + 0x20 + lVar28);
  auVar38 = vshufps_avx(auVar38,auVar38,0);
  pfVar2 = (float *)(lVar5 + 0x20 + lVar25);
  auVar34._0_4_ = auVar33._0_4_ * *pfVar1 + auVar38._0_4_ * *pfVar2;
  auVar34._4_4_ = auVar33._4_4_ * pfVar1[1] + auVar38._4_4_ * pfVar2[1];
  auVar34._8_4_ = auVar33._8_4_ * pfVar1[2] + auVar38._8_4_ * pfVar2[2];
  auVar34._12_4_ = auVar33._12_4_ * pfVar1[3] + auVar38._12_4_ * pfVar2[3];
  auVar38 = vshufps_avx(auVar46,auVar46,0xc9);
  auVar40._0_4_ = auVar34._0_4_ * auVar38._0_4_;
  auVar40._4_4_ = auVar34._4_4_ * auVar38._4_4_;
  auVar40._8_4_ = auVar34._8_4_ * auVar38._8_4_;
  auVar40._12_4_ = auVar34._12_4_ * auVar38._12_4_;
  auVar38 = vshufps_avx(auVar34,auVar34,0xc9);
  auVar35._0_4_ = auVar38._0_4_ * auVar46._0_4_;
  auVar35._4_4_ = auVar38._4_4_ * auVar46._4_4_;
  auVar35._8_4_ = auVar38._8_4_ * auVar46._8_4_;
  auVar35._12_4_ = auVar38._12_4_ * auVar46._12_4_;
  auVar38 = vsubps_avx(auVar40,auVar35);
  auVar46 = vshufps_avx(auVar38,auVar38,9);
  auVar36._0_4_ = auVar38._0_4_ * auVar38._0_4_;
  auVar36._4_4_ = auVar38._4_4_ * auVar38._4_4_;
  auVar36._8_4_ = auVar38._8_4_ * auVar38._8_4_;
  auVar36._12_4_ = auVar38._12_4_ * auVar38._12_4_;
  auVar38 = vshufps_avx(auVar36,auVar36,0xc9);
  auVar33 = vshufps_avx(auVar36,ZEXT816(0) << 0x20,0x4a);
  auVar37._0_4_ = auVar38._0_4_ + auVar33._0_4_;
  auVar37._4_4_ = auVar38._4_4_ + auVar33._4_4_;
  auVar37._8_4_ = auVar38._8_4_ + auVar33._8_4_;
  auVar37._12_4_ = auVar38._12_4_ + auVar33._12_4_;
  auVar38 = vshufpd_avx(auVar37,auVar37,1);
  auVar38 = ZEXT416((uint)(auVar37._0_4_ + auVar38._0_4_));
  auVar38 = vsqrtss_avx(auVar38,auVar38);
  auVar38 = vshufps_avx(auVar38,auVar38,0);
  auVar46 = vdivps_avx(auVar46,auVar38);
  *param_6 = auVar46;
  auVar33 = vshufps_avx(auVar46,auVar46,0xc9);
  auVar38 = *param_4;
  auVar41._0_4_ = auVar38._0_4_ * auVar33._0_4_;
  auVar41._4_4_ = auVar38._4_4_ * auVar33._4_4_;
  auVar41._8_4_ = auVar38._8_4_ * auVar33._8_4_;
  auVar41._12_4_ = auVar38._12_4_ * auVar33._12_4_;
  auVar38 = vshufps_avx(auVar38,auVar38,0xc9);
  auVar39._0_4_ = auVar38._0_4_ * auVar46._0_4_;
  auVar39._4_4_ = auVar38._4_4_ * auVar46._4_4_;
  auVar39._8_4_ = auVar38._8_4_ * auVar46._8_4_;
  auVar39._12_4_ = auVar38._12_4_ * auVar46._12_4_;
  auVar38 = vsubps_avx(auVar41,auVar39);
  auVar38 = vshufps_avx(auVar38,auVar38,9);
  *param_5 = auVar38;
  if (pauVar27 != (undefined1 (*) [16])0x0) {
    uVar6 = rdtsc();
    auVar38 = vpinsrq_avx(auVar29,uVar6 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)lVar25 >> 0x20),(int)uVar6),1);
    auVar29 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c6c1),0));
    *pauVar27 = auVar29;
    auVar29 = vmovntdq_avx(auVar38);
    pauVar27[1] = auVar29;
  }
  return;
}

