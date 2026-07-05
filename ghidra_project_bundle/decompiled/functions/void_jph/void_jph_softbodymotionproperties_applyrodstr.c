/**
 * Function: void_jph_softbodymotionproperties_applyrodstr
 * Address:  140384cc0
 * Signature: undefined void_jph_softbodymotionproperties_applyrodstr(void)
 * Body size: 869 bytes
 */


void void_jph_softbodymotionproperties_applyrodstr
               (longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  uint *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  uint *puVar15;
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
  undefined1 auVar26 [16];
  ulonglong local_d8;
  undefined8 uStack_d0;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar12 = *(uint **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (puVar12 != (uint *)0x0) {
    uVar5 = puVar12[0x80008];
    if ((ulonglong)uVar5 < 0x10000) {
      puVar12[0x80008] = uVar5 + 1;
      pauVar13 = (undefined1 (*) [16])(puVar12 + (ulonglong)uVar5 * 8 + 8);
      uVar6 = rdtsc();
      puVar12 = (uint *)CONCAT44((int)((ulonglong)puVar12 >> 0x20),(int)uVar6);
      local_d8 = uVar6 & 0xffffffff00000000 | (ulonglong)puVar12;
      uStack_d0 = 0;
      goto joined_r0x000140384dc4;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      puVar12 = (uint *)(*(code *)PTR_vfunction4_1414f67c8)();
    }
  }
  pauVar13 = (undefined1 (*) [16])0x0;
joined_r0x000140384dc4:
  if (param_3 < param_4) {
    fVar1 = *(float *)(param_2 + 0x84);
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0xd8);
    puVar12 = (uint *)((ulonglong)param_4 * 0x30 + lVar17);
    puVar15 = (uint *)((ulonglong)param_3 * 0x30 + lVar17);
    pauVar14 = (undefined1 (*) [16])((ulonglong)param_3 * 0x20 + *(longlong *)(param_1 + 0x130));
    do {
      lVar17 = *(longlong *)(param_1 + 0x118);
      fVar2 = *(float *)(lVar17 + 0x4c + (ulonglong)*puVar15 * 0x50);
      fVar3 = *(float *)(lVar17 + 0x4c + (ulonglong)puVar15[1] * 0x50);
      fVar4 = (float)puVar15[2];
      auVar22 = vfmadd213ss_fma(ZEXT416((uint)(fVar4 * fVar4)),
                                ZEXT416((uint)((float)puVar15[3] * 4.0)),
                                ZEXT416((uint)(fVar2 + fVar3)));
      auVar22 = vfmadd231ss_fma(auVar22,ZEXT416((uint)(1.0 / (fVar1 * fVar1))),ZEXT416(puVar15[4]));
      if (1e-12 <= auVar22._0_4_) {
        lVar16 = (ulonglong)*puVar15 * 0x50 + lVar17;
        lVar17 = (ulonglong)puVar15[1] * 0x50 + lVar17;
        auVar11 = *(undefined1 (*) [16])(lVar16 + 0x10);
        auVar19 = *(undefined1 (*) [16])(lVar17 + 0x10);
        auVar20 = *pauVar14;
        fVar7 = auVar20._0_4_;
        auVar26._0_4_ = fVar7 + fVar7;
        fVar8 = auVar20._4_4_;
        auVar26._4_4_ = fVar8 + fVar8;
        fVar9 = auVar20._8_4_;
        auVar26._8_4_ = fVar9 + fVar9;
        fVar10 = auVar20._12_4_;
        auVar26._12_4_ = fVar10 + fVar10;
        auVar23 = vshufps_avx(auVar26,auVar26,0xaa);
        auVar21 = vshufps_avx(auVar26,auVar26,0xff);
        auVar20 = vshufps_avx(auVar20,auVar20,0xb1);
        auVar25 = vsubps_avx(auVar19,auVar11);
        auVar24 = vshufps_avx(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),0);
        auVar18._0_4_ =
             auVar24._0_4_ * (auVar21._0_4_ * auVar20._0_4_ + fVar7 * auVar23._0_4_ + -0.0);
        auVar18._4_4_ =
             auVar24._4_4_ * (-(auVar21._4_4_ * auVar20._4_4_) + fVar8 * auVar23._4_4_ + -0.0);
        auVar18._8_4_ =
             auVar24._8_4_ * (auVar21._8_4_ * auVar20._8_4_ + fVar9 * auVar23._8_4_ + -1.0);
        auVar18._12_4_ =
             auVar24._12_4_ * (auVar21._12_4_ * auVar20._12_4_ + fVar10 * auVar23._12_4_ + -0.0);
        auVar23 = vsubps_avx(auVar25,auVar18);
        auVar22 = vshufps_avx(auVar22,auVar22,0);
        auVar22 = vdivps_avx(auVar23,auVar22);
        auVar23 = vshufps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),0);
        *(float *)(lVar16 + 0x10) = auVar11._0_4_ + auVar23._0_4_ * auVar22._0_4_;
        *(float *)(lVar16 + 0x14) = auVar11._4_4_ + auVar23._4_4_ * auVar22._4_4_;
        *(float *)(lVar16 + 0x18) = auVar11._8_4_ + auVar23._8_4_ * auVar22._8_4_;
        *(float *)(lVar16 + 0x1c) = auVar11._12_4_ + auVar23._12_4_ * auVar22._12_4_;
        auVar11 = vshufps_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3),0);
        auVar23._0_4_ = auVar11._0_4_ * auVar22._0_4_;
        auVar23._4_4_ = auVar11._4_4_ * auVar22._4_4_;
        auVar23._8_4_ = auVar11._8_4_ * auVar22._8_4_;
        auVar23._12_4_ = auVar11._12_4_ * auVar22._12_4_;
        auVar11 = vsubps_avx(auVar19,auVar23);
        *(undefined1 (*) [16])(lVar17 + 0x10) = auVar11;
        auVar21._0_8_ = auVar20._0_8_ ^ 0x80000000;
        auVar21._8_4_ = -auVar20._8_4_;
        auVar21._12_4_ = auVar20._12_4_;
        auVar11 = vshufps_avx(auVar22,auVar22,0x24);
        auVar19 = vshufps_avx(auVar22,auVar22,0x49);
        auVar22 = vshufps_avx(auVar22,auVar22,0x92);
        auVar20 = vshufps_avx(auVar21,auVar21,0x3f);
        auVar23 = vshufps_avx(auVar21,auVar21,0x52);
        auVar25._0_4_ = auVar23._0_4_ * auVar19._0_4_;
        auVar25._4_4_ = auVar23._4_4_ * auVar19._4_4_;
        auVar25._8_4_ = auVar23._8_4_ * auVar19._8_4_;
        auVar25._12_4_ = auVar23._12_4_ * auVar19._12_4_;
        auVar11 = vfmadd231ps_fma(auVar25,auVar11,auVar20);
        auVar24._0_12_ = auVar11._0_12_;
        auVar24._12_4_ = auVar11._12_4_ ^ 0x80000000;
        auVar11 = vshufps_avx(auVar21,auVar21,0x89);
        auVar19._0_4_ = auVar11._0_4_ * auVar22._0_4_;
        auVar19._4_4_ = auVar11._4_4_ * auVar22._4_4_;
        auVar19._8_4_ = auVar11._8_4_ * auVar22._8_4_;
        auVar19._12_4_ = auVar11._12_4_ * auVar22._12_4_;
        auVar11 = vsubps_avx(auVar24,auVar19);
        auVar22 = ZEXT416((uint)(((float)puVar15[3] + (float)puVar15[3]) * (float)puVar15[2]));
        auVar22 = vshufps_avx(auVar22,auVar22,0);
        auVar20._0_4_ = fVar7 + auVar22._0_4_ * auVar11._0_4_;
        auVar20._4_4_ = fVar8 + auVar22._4_4_ * auVar11._4_4_;
        auVar20._8_4_ = fVar9 + auVar22._8_4_ * auVar11._8_4_;
        auVar20._12_4_ = fVar10 + auVar22._12_4_ * auVar11._12_4_;
        auVar22 = vdpps_avx(auVar20,auVar20,0xff);
        auVar22 = vsqrtps_avx(auVar22);
        auVar22 = vdivps_avx(auVar20,auVar22);
        *pauVar14 = auVar22;
      }
      puVar15 = puVar15 + 0xc;
      pauVar14 = pauVar14 + 2;
    } while (puVar15 < puVar12);
  }
  if (pauVar13 != (undefined1 (*) [16])0x0) {
    uVar6 = rdtsc();
    auVar22._8_8_ = uStack_d0;
    auVar22._0_8_ = local_d8;
    auVar11 = vpinsrq_avx(auVar22,uVar6 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)puVar12 >> 0x20),(int)uVar6),1);
    auVar22 = vmovntdq_avx(SUB6416(ZEXT864(0x1413950a4),0));
    *pauVar13 = auVar22;
    auVar22 = vmovntdq_avx(auVar11);
    pauVar13[1] = auVar22;
  }
  return;
}

