/**
 * Function: void_jph_softbodymotionproperties_applyrodben
 * Address:  140385030
 * Signature: undefined void_jph_softbodymotionproperties_applyrodben(void)
 * Body size: 905 bytes
 */


void void_jph_softbodymotionproperties_applyrodben
               (longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulonglong local_d8;
  undefined8 uStack_d0;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar12 = *(ulonglong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (uVar12 != 0) {
    uVar6 = *(uint *)(uVar12 + 0x200020);
    if ((ulonglong)uVar6 < 0x10000) {
      *(uint *)(uVar12 + 0x200020) = uVar6 + 1;
      pauVar13 = (undefined1 (*) [16])((ulonglong)uVar6 * 0x20 + uVar12 + 0x20);
      uVar9 = rdtsc();
      uVar12 = CONCAT44((int)(uVar12 >> 0x20),(int)uVar9);
      local_d8 = uVar9 & 0xffffffff00000000 | uVar12;
      uStack_d0 = 0;
      goto joined_r0x000140385134;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar12 = (*(code *)PTR_vfunction4_1414f67c8)();
    }
  }
  pauVar13 = (undefined1 (*) [16])0x0;
joined_r0x000140385134:
  if (param_3 < param_4) {
    fVar1 = *(float *)(param_2 + 0x84);
    uVar12 = *(ulonglong *)(param_1 + 0x100);
    lVar7 = *(longlong *)(uVar12 + 0xf0);
    auVar22._0_12_ = ZEXT812(0);
    auVar22._12_4_ = 0;
    pauVar14 = (undefined1 (*) [16])(lVar7 + (ulonglong)param_3 * 0x20 + 0x10);
    do {
      fVar2 = *(float *)(*(longlong *)(uVar12 + 0xd8) + 0xc +
                        (ulonglong)*(uint *)pauVar14[-1] * 0x30);
      fVar3 = *(float *)(*(longlong *)(uVar12 + 0xd8) + 0xc +
                        (ulonglong)*(uint *)(pauVar14[-1] + 4) * 0x30);
      auVar10 = vfmadd231ss_fma(ZEXT416((uint)(fVar3 + fVar2)),
                                ZEXT416((uint)(1.0 / (fVar1 * fVar1))),
                                ZEXT416(*(uint *)(pauVar14[-1] + 8)));
      if (1e-12 <= auVar10._0_4_) {
        lVar8 = *(longlong *)(param_1 + 0x130);
        lVar16 = (ulonglong)*(uint *)(pauVar14[-1] + 4) * 0x20;
        lVar17 = (ulonglong)*(uint *)pauVar14[-1] * 0x20;
        auVar4 = *(undefined1 (*) [16])(lVar8 + lVar17);
        auVar5 = *(undefined1 (*) [16])(lVar8 + lVar16);
        auVar27._0_8_ = auVar4._0_8_ ^ 0x8000000080000000;
        fVar24 = auVar4._8_4_;
        auVar27._8_4_ = -fVar24;
        fVar25 = auVar4._12_4_;
        auVar27._12_4_ = fVar25;
        auVar11 = vshufps_avx(auVar27,auVar27,0x24);
        auVar21 = vshufps_avx(auVar27,auVar27,0x49);
        auVar29 = vshufps_avx(auVar27,auVar27,0xff);
        auVar19 = vshufps_avx(auVar5,auVar5,0x3f);
        auVar20 = vshufps_avx(auVar5,auVar5,0x52);
        auVar18._0_4_ = auVar21._0_4_ * auVar20._0_4_;
        auVar18._4_4_ = auVar21._4_4_ * auVar20._4_4_;
        auVar18._8_4_ = auVar21._8_4_ * auVar20._8_4_;
        auVar18._12_4_ = auVar21._12_4_ * auVar20._12_4_;
        auVar21 = vfmadd231ps_fma(auVar18,auVar11,auVar19);
        auVar11 = vshufps_avx(auVar5,auVar5,0x89);
        auVar19._0_12_ = auVar21._0_12_;
        auVar19._12_4_ = auVar21._12_4_ ^ 0x80000000;
        auVar21 = vshufps_avx(auVar27,auVar27,0x92);
        auVar11 = vfnmadd213ps_fma(auVar21,auVar11,auVar19);
        auVar21 = vfmadd231ps_fma(auVar11,auVar5,auVar29);
        auVar11 = *pauVar14;
        auVar29 = vsubps_avx(auVar21,auVar11);
        auVar20._0_4_ = auVar21._0_4_ + auVar11._0_4_;
        auVar20._4_4_ = auVar21._4_4_ + auVar11._4_4_;
        auVar20._8_4_ = auVar21._8_4_ + auVar11._8_4_;
        auVar20._12_4_ = auVar21._12_4_ + auVar11._12_4_;
        auVar11 = vdpps_avx(auVar29,auVar29,0xff);
        auVar21 = vdpps_avx(auVar20,auVar20,0xff);
        auVar11 = vcmpps_avx(auVar21,auVar11,1);
        auVar11 = vblendvps_avx(auVar29,auVar20,auVar11);
        auVar10 = vshufps_avx(auVar10,auVar10,0);
        auVar11 = vdivps_avx(auVar11,auVar10);
        auVar10 = vblendps_avx(auVar11,auVar22,8);
        auVar21 = vshufps_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3),0);
        auVar26._0_4_ = auVar21._0_4_ * auVar4._0_4_;
        auVar26._4_4_ = auVar21._4_4_ * auVar4._4_4_;
        auVar26._8_4_ = auVar21._8_4_ * fVar24;
        auVar26._12_4_ = auVar21._12_4_ * fVar25;
        auVar29 = vshufps_avx(auVar26,auVar26,0x24);
        auVar19 = vshufps_avx(auVar26,auVar26,0x49);
        auVar20 = vshufps_avx(auVar26,auVar26,0xff);
        auVar21 = vinsertps_avx(auVar11,auVar11,0x37);
        auVar18 = vshufps_avx(auVar11,auVar11,0x52);
        auVar11 = vshufps_avx(auVar11,auVar11,0x89);
        auVar30._0_4_ = auVar19._0_4_ * auVar18._0_4_;
        auVar30._4_4_ = auVar19._4_4_ * auVar18._4_4_;
        auVar30._8_4_ = auVar19._8_4_ * auVar18._8_4_;
        auVar30._12_4_ = auVar19._12_4_ * auVar18._12_4_;
        auVar29 = vfmadd231ps_fma(auVar30,auVar21,auVar29);
        auVar28._0_12_ = auVar29._0_12_;
        auVar28._12_4_ = auVar29._12_4_ ^ 0x80000000;
        auVar29 = vshufps_avx(auVar26,auVar26,0x92);
        auVar26 = vfnmadd213ps_fma(auVar29,auVar11,auVar28);
        auVar29 = vshufps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),0);
        auVar23._0_4_ = auVar29._0_4_ * auVar5._0_4_;
        auVar23._4_4_ = auVar29._4_4_ * auVar5._4_4_;
        auVar23._8_4_ = auVar29._8_4_ * auVar5._8_4_;
        auVar23._12_4_ = auVar29._12_4_ * auVar5._12_4_;
        auVar29 = vshufps_avx(auVar23,auVar23,0x24);
        auVar19 = vshufps_avx(auVar23,auVar23,0x49);
        auVar31._0_4_ = auVar19._0_4_ * auVar18._0_4_;
        auVar31._4_4_ = auVar19._4_4_ * auVar18._4_4_;
        auVar31._8_4_ = auVar19._8_4_ * auVar18._8_4_;
        auVar31._12_4_ = auVar19._12_4_ * auVar18._12_4_;
        auVar19 = vshufps_avx(auVar23,auVar23,0xff);
        auVar21 = vfmadd231ps_fma(auVar31,auVar21,auVar29);
        auVar29._0_12_ = auVar21._0_12_;
        auVar29._12_4_ = auVar21._12_4_ ^ 0x80000000;
        auVar21 = vshufps_avx(auVar23,auVar23,0x92);
        auVar11 = vfnmadd213ps_fma(auVar21,auVar11,auVar29);
        auVar11 = vfmadd231ps_fma(auVar11,auVar10,auVar19);
        auVar21._0_4_ = auVar4._0_4_ + auVar11._0_4_;
        auVar21._4_4_ = auVar4._4_4_ + auVar11._4_4_;
        auVar21._8_4_ = fVar24 + auVar11._8_4_;
        auVar21._12_4_ = fVar25 + auVar11._12_4_;
        auVar4 = vdpps_avx(auVar21,auVar21,0xff);
        auVar10 = vfmadd231ps_fma(auVar26,auVar10,auVar20);
        auVar5 = vsubps_avx(auVar5,auVar10);
        auVar10 = vsqrtps_avx(auVar4);
        auVar10 = vdivps_avx(auVar21,auVar10);
        auVar4 = vdpps_avx(auVar5,auVar5,0xff);
        *(undefined1 (*) [16])(lVar8 + lVar17) = auVar10;
        auVar10 = vsqrtps_avx(auVar4);
        auVar10 = vdivps_avx(auVar5,auVar10);
        *(undefined1 (*) [16])(lVar8 + lVar16) = auVar10;
      }
      pauVar15 = pauVar14 + 1;
      pauVar14 = pauVar14 + 2;
    } while (pauVar15 < (undefined1 (*) [16])((ulonglong)param_4 * 0x20 + lVar7));
  }
  if (pauVar13 != (undefined1 (*) [16])0x0) {
    uVar9 = rdtsc();
    auVar10._8_8_ = uStack_d0;
    auVar10._0_8_ = local_d8;
    auVar10 = vpinsrq_avx(auVar10,uVar9 & 0xffffffff00000000 |
                                  CONCAT44((int)(uVar12 >> 0x20),(int)uVar9),1);
    auVar22 = vmovntdq_avx(SUB6416(ZEXT864(0x141395038),0));
    *pauVar13 = auVar22;
    auVar22 = vmovntdq_avx(auVar10);
    pauVar13[1] = auVar22;
  }
  return;
}

