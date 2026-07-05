/**
 * Function: void_jph_softbodymotionproperties_applyvolume
 * Address:  140384500
 * Signature: undefined void_jph_softbodymotionproperties_applyvolume(void)
 * Body size: 1085 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void void_jph_softbodymotionproperties_applyvolume
               (longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  float *pfVar10;
  undefined1 (*pauVar11) [16];
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulonglong local_e8;
  undefined8 uStack_e0;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pfVar10 = *(float **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170
             );
  if (pfVar10 != (float *)0x0) {
    fVar6 = pfVar10[0x80008];
    if ((ulonglong)(uint)fVar6 < 0x10000) {
      pfVar10[0x80008] = (float)((int)fVar6 + 1);
      pauVar11 = (undefined1 (*) [16])(pfVar10 + (ulonglong)(uint)fVar6 * 8 + 8);
      uVar8 = rdtsc();
      pfVar10 = (float *)CONCAT44((int)((ulonglong)pfVar10 >> 0x20),(int)uVar8);
      local_e8 = uVar8 & 0xffffffff00000000 | (ulonglong)pfVar10;
      uStack_e0 = 0;
      goto joined_r0x00014038460a;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      pfVar10 = (float *)(*(code *)PTR_vfunction4_1414f67c8)();
    }
  }
  pauVar11 = (undefined1 (*) [16])0x0;
joined_r0x00014038460a:
  if (param_3 < param_4) {
    fVar6 = *(float *)(param_2 + 0x84);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x78);
    pfVar10 = (float *)(lVar7 + (ulonglong)param_4 * 0x18);
    pfVar12 = (float *)(lVar7 + (ulonglong)param_3 * 0x18 + 0x10);
    do {
      lVar7 = *(longlong *)(param_1 + 0x118);
      lVar17 = (ulonglong)(uint)pfVar12[-4] * 0x50;
      lVar14 = (ulonglong)(uint)pfVar12[-3] * 0x50;
      lVar15 = (ulonglong)(uint)pfVar12[-2] * 0x50;
      lVar16 = (ulonglong)(uint)pfVar12[-1] * 0x50;
      auVar20 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar17);
      auVar19 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar14);
      auVar21 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar15);
      auVar5 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar16);
      auVar9 = vsubps_avx(auVar19,auVar20);
      auVar33 = vsubps_avx(auVar21,auVar20);
      auVar22 = vsubps_avx(auVar5,auVar20);
      auVar18 = vshufps_avx(auVar33,auVar33,9);
      auVar41._0_4_ = auVar9._0_4_ * auVar18._0_4_;
      auVar41._4_4_ = auVar9._4_4_ * auVar18._4_4_;
      auVar41._8_4_ = auVar9._8_4_ * auVar18._8_4_;
      auVar41._12_4_ = auVar9._12_4_ * auVar18._12_4_;
      auVar23 = vshufps_avx(auVar9,auVar9,9);
      auVar43._0_4_ = auVar23._0_4_ * auVar33._0_4_;
      auVar43._4_4_ = auVar23._4_4_ * auVar33._4_4_;
      auVar43._8_4_ = auVar23._8_4_ * auVar33._8_4_;
      auVar43._12_4_ = auVar23._12_4_ * auVar33._12_4_;
      auVar41 = vsubps_avx(auVar41,auVar43);
      auVar42 = vsubps_avx(auVar5,auVar19);
      auVar24 = vsubps_avx(auVar21,auVar19);
      auVar29 = vshufps_avx(auVar24,auVar24,0xc9);
      auVar44._0_4_ = auVar29._0_4_ * auVar42._0_4_;
      auVar44._4_4_ = auVar29._4_4_ * auVar42._4_4_;
      auVar44._8_4_ = auVar29._8_4_ * auVar42._8_4_;
      auVar44._12_4_ = auVar29._12_4_ * auVar42._12_4_;
      auVar29 = vshufps_avx(auVar42,auVar42,0xc9);
      auVar42._0_4_ = auVar24._0_4_ * auVar29._0_4_;
      auVar42._4_4_ = auVar24._4_4_ * auVar29._4_4_;
      auVar42._8_4_ = auVar24._8_4_ * auVar29._8_4_;
      auVar42._12_4_ = auVar24._12_4_ * auVar29._12_4_;
      auVar42 = vsubps_avx(auVar44,auVar42);
      auVar29 = vshufps_avx(auVar22,auVar22,9);
      auVar27._0_4_ = auVar29._0_4_ * auVar33._0_4_;
      auVar27._4_4_ = auVar29._4_4_ * auVar33._4_4_;
      auVar27._8_4_ = auVar29._8_4_ * auVar33._8_4_;
      auVar27._12_4_ = auVar29._12_4_ * auVar33._12_4_;
      fVar26 = auVar22._0_4_;
      auVar33._0_4_ = fVar26 * auVar18._0_4_;
      fVar38 = auVar22._4_4_;
      auVar33._4_4_ = fVar38 * auVar18._4_4_;
      fVar39 = auVar22._8_4_;
      auVar33._8_4_ = fVar39 * auVar18._8_4_;
      fVar40 = auVar22._12_4_;
      auVar33._12_4_ = fVar40 * auVar18._12_4_;
      auVar33 = vsubps_avx(auVar27,auVar33);
      auVar28._0_4_ = auVar23._0_4_ * fVar26;
      auVar28._4_4_ = auVar23._4_4_ * fVar38;
      auVar28._8_4_ = auVar23._8_4_ * fVar39;
      auVar28._12_4_ = auVar23._12_4_ * fVar40;
      auVar18._0_4_ = auVar29._0_4_ * auVar9._0_4_;
      auVar18._4_4_ = auVar29._4_4_ * auVar9._4_4_;
      auVar18._8_4_ = auVar29._8_4_ * auVar9._8_4_;
      auVar18._12_4_ = auVar29._12_4_ * auVar9._12_4_;
      auVar9 = vsubps_avx(auVar28,auVar18);
      fVar1 = *(float *)(lVar7 + 0x4c + lVar17);
      fVar2 = *(float *)(lVar7 + 0x4c + lVar14);
      fVar3 = *(float *)(lVar7 + 0x4c + lVar15);
      auVar29._0_4_ = auVar42._0_4_ * auVar42._0_4_;
      auVar29._4_4_ = auVar42._4_4_ * auVar42._4_4_;
      auVar29._8_4_ = auVar42._8_4_ * auVar42._8_4_;
      auVar29._12_4_ = auVar42._12_4_ * auVar42._12_4_;
      auVar18 = vshufps_avx(auVar29,auVar29,0xc9);
      auVar24 = ZEXT816(0) << 0x20;
      auVar23 = vshufps_avx(auVar29,auVar24,0x4a);
      auVar30._0_4_ = auVar18._0_4_ + auVar23._0_4_;
      auVar30._4_4_ = auVar18._4_4_ + auVar23._4_4_;
      auVar30._8_4_ = auVar18._8_4_ + auVar23._8_4_;
      auVar30._12_4_ = auVar18._12_4_ + auVar23._12_4_;
      auVar18 = vshufpd_avx(auVar30,auVar30,1);
      auVar34._0_4_ = auVar33._0_4_ * auVar33._0_4_;
      auVar34._4_4_ = auVar33._4_4_ * auVar33._4_4_;
      auVar34._8_4_ = auVar33._8_4_ * auVar33._8_4_;
      auVar34._12_4_ = auVar33._12_4_ * auVar33._12_4_;
      auVar23 = vshufps_avx(auVar34,auVar34,0xc9);
      auVar29 = vshufps_avx(auVar34,auVar24,0x4a);
      auVar22._0_4_ = auVar23._0_4_ + auVar29._0_4_;
      auVar22._4_4_ = auVar23._4_4_ + auVar29._4_4_;
      auVar22._8_4_ = auVar23._8_4_ + auVar29._8_4_;
      auVar22._12_4_ = auVar23._12_4_ + auVar29._12_4_;
      auVar23 = vshufpd_avx(auVar22,auVar22,1);
      auVar29 = vfmadd231ss_fma(ZEXT416((uint)(fVar2 * (auVar22._0_4_ + auVar23._0_4_))),
                                ZEXT416((uint)fVar1),ZEXT416((uint)(auVar30._0_4_ + auVar18._0_4_)))
      ;
      auVar31._0_4_ = auVar9._0_4_ * auVar9._0_4_;
      auVar31._4_4_ = auVar9._4_4_ * auVar9._4_4_;
      auVar31._8_4_ = auVar9._8_4_ * auVar9._8_4_;
      auVar31._12_4_ = auVar9._12_4_ * auVar9._12_4_;
      auVar18 = vshufps_avx(auVar31,auVar31,0xc9);
      auVar23 = vshufps_avx(auVar31,auVar24,0x4a);
      auVar32._0_4_ = auVar18._0_4_ + auVar23._0_4_;
      auVar32._4_4_ = auVar18._4_4_ + auVar23._4_4_;
      auVar32._8_4_ = auVar18._8_4_ + auVar23._8_4_;
      auVar32._12_4_ = auVar18._12_4_ + auVar23._12_4_;
      auVar18 = vshufpd_avx(auVar32,auVar32,1);
      auVar29 = vfmadd213ss_fma(ZEXT416((uint)(auVar32._0_4_ + auVar18._0_4_)),ZEXT416((uint)fVar3),
                                auVar29);
      auVar23._0_4_ = auVar41._0_4_ * auVar41._0_4_;
      auVar23._4_4_ = auVar41._4_4_ * auVar41._4_4_;
      auVar23._8_4_ = auVar41._8_4_ * auVar41._8_4_;
      auVar23._12_4_ = auVar41._12_4_ * auVar41._12_4_;
      auVar18 = vshufps_avx(auVar23,auVar23,0xc9);
      auVar23 = vshufps_avx(auVar23,auVar24,0x4a);
      auVar24._0_4_ = auVar18._0_4_ + auVar23._0_4_;
      auVar24._4_4_ = auVar18._4_4_ + auVar23._4_4_;
      auVar24._8_4_ = auVar18._8_4_ + auVar23._8_4_;
      auVar24._12_4_ = auVar18._12_4_ + auVar23._12_4_;
      auVar18 = vshufpd_avx(auVar24,auVar24,1);
      fVar4 = *(float *)(lVar7 + 0x4c + lVar16);
      auVar18 = vfmadd213ss_fma(ZEXT416((uint)(auVar24._0_4_ + auVar18._0_4_)),ZEXT416((uint)fVar4),
                                auVar29);
      auVar18 = vfmadd231ss_fma(auVar18,ZEXT416((uint)(1.0 / (fVar6 * fVar6))),
                                ZEXT416((uint)pfVar12[1]));
      if (1e-12 <= auVar18._0_4_) {
        auVar29 = vshufps_avx(auVar41,auVar41,9);
        auVar9 = vshufps_avx(auVar9,auVar9,9);
        auVar33 = vshufps_avx(auVar33,auVar33,9);
        auVar22 = vshufps_avx(auVar42,auVar42,9);
        auVar35._0_4_ = fVar26 * auVar29._0_4_;
        auVar35._4_4_ = fVar38 * auVar29._4_4_;
        auVar35._8_4_ = fVar39 * auVar29._8_4_;
        auVar35._12_4_ = fVar40 * auVar29._12_4_;
        auVar23 = vinsertps_avx(auVar35,auVar35,0x4c);
        auVar36._0_4_ = auVar35._0_4_ + auVar23._0_4_;
        auVar36._4_4_ = auVar35._4_4_ + auVar23._4_4_;
        auVar36._8_4_ = auVar35._8_4_ + auVar23._8_4_;
        auVar36._12_4_ = auVar35._12_4_ + auVar23._12_4_;
        auVar23 = vshufpd_avx(auVar36,auVar36,1);
        auVar23 = vandps_avx(ZEXT416((uint)(auVar36._0_4_ + auVar23._0_4_)),_DAT_140de34a0);
        fVar26 = (auVar23._0_4_ - *pfVar12) / auVar18._0_4_;
        auVar18 = ZEXT416((uint)(fVar1 * fVar26));
        auVar18 = vshufps_avx(auVar18,auVar18,0);
        auVar37._0_4_ = auVar22._0_4_ * auVar18._0_4_;
        auVar37._4_4_ = auVar22._4_4_ * auVar18._4_4_;
        auVar37._8_4_ = auVar22._8_4_ * auVar18._8_4_;
        auVar37._12_4_ = auVar22._12_4_ * auVar18._12_4_;
        auVar20 = vsubps_avx(auVar20,auVar37);
        *(undefined1 (*) [16])(lVar17 + lVar7 + 0x10) = auVar20;
        auVar20 = ZEXT416((uint)(fVar2 * fVar26));
        auVar20 = vshufps_avx(auVar20,auVar20,0);
        auVar25._0_4_ = auVar20._0_4_ * auVar33._0_4_;
        auVar25._4_4_ = auVar20._4_4_ * auVar33._4_4_;
        auVar25._8_4_ = auVar20._8_4_ * auVar33._8_4_;
        auVar25._12_4_ = auVar20._12_4_ * auVar33._12_4_;
        auVar20 = vsubps_avx(auVar19,auVar25);
        *(undefined1 (*) [16])(lVar14 + lVar7 + 0x10) = auVar20;
        auVar20 = ZEXT416((uint)(fVar26 * fVar3));
        auVar20 = vshufps_avx(auVar20,auVar20,0);
        auVar19._0_4_ = auVar9._0_4_ * auVar20._0_4_;
        auVar19._4_4_ = auVar9._4_4_ * auVar20._4_4_;
        auVar19._8_4_ = auVar9._8_4_ * auVar20._8_4_;
        auVar19._12_4_ = auVar9._12_4_ * auVar20._12_4_;
        auVar20 = vsubps_avx(auVar21,auVar19);
        *(undefined1 (*) [16])(lVar15 + lVar7 + 0x10) = auVar20;
        auVar20 = ZEXT416((uint)(fVar4 * fVar26));
        auVar20 = vshufps_avx(auVar20,auVar20,0);
        auVar21._0_4_ = auVar29._0_4_ * auVar20._0_4_;
        auVar21._4_4_ = auVar29._4_4_ * auVar20._4_4_;
        auVar21._8_4_ = auVar29._8_4_ * auVar20._8_4_;
        auVar21._12_4_ = auVar29._12_4_ * auVar20._12_4_;
        auVar20 = vsubps_avx(auVar5,auVar21);
        *(undefined1 (*) [16])(lVar16 + lVar7 + 0x10) = auVar20;
      }
      pfVar13 = pfVar12 + 2;
      pfVar12 = pfVar12 + 6;
    } while (pfVar13 < pfVar10);
  }
  if (pauVar11 != (undefined1 (*) [16])0x0) {
    uVar8 = rdtsc();
    auVar20._8_8_ = uStack_e0;
    auVar20._0_8_ = local_e8;
    auVar19 = vpinsrq_avx(auVar20,uVar8 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)pfVar10 >> 0x20),(int)uVar8),1);
    auVar20 = vmovntdq_avx(SUB6416(ZEXT864(0x141395177),0));
    *pauVar11 = auVar20;
    auVar20 = vmovntdq_avx(auVar19);
    pauVar11[1] = auVar20;
  }
  return;
}

