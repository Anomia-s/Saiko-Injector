/**
 * Function: void_jph_softbodymotionproperties_applycollis
 * Address:  1403853d0
 * Signature: undefined void_jph_softbodymotionproperties_applycollis(void)
 * Body size: 1671 bytes
 */


void void_jph_softbodymotionproperties_applycollis(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar56;
  float fVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar75 [64];
  ulonglong local_c8;
  undefined8 uStack_c0;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar20 != 0) {
    uVar7 = *(uint *)(lVar20 + 0x200020);
    if ((ulonglong)uVar7 < 0x10000) {
      *(uint *)(lVar20 + 0x200020) = uVar7 + 1;
      pauVar21 = (undefined1 (*) [16])((ulonglong)uVar7 * 0x20 + lVar20 + 0x20);
      uVar10 = rdtsc();
      local_c8 = uVar10 & 0xffffffff00000000 |
                 CONCAT44((int)((ulonglong)lVar20 >> 0x20),(int)uVar10);
      uStack_c0 = 0;
      fVar4 = *(float *)(param_2 + 0x84);
      lVar20 = *(longlong *)(param_1 + 0x108);
      goto joined_r0x0001403854f1;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)();
    }
  }
  pauVar21 = (undefined1 (*) [16])0x0;
  fVar4 = *(float *)(param_2 + 0x84);
  lVar20 = *(longlong *)(param_1 + 0x108);
joined_r0x0001403854f1:
  fVar74 = fVar4;
  if (lVar20 != 0) {
    auVar75 = ZEXT464((uint)fVar4);
    auVar24._0_4_ = *(float *)(param_2 + 0x60) * *(float *)(param_2 + 0x60);
    auVar24._4_4_ = *(float *)(param_2 + 100) * *(float *)(param_2 + 100);
    auVar24._8_4_ = *(float *)(param_2 + 0x68) * *(float *)(param_2 + 0x68);
    auVar24._12_4_ = *(float *)(param_2 + 0x6c) * *(float *)(param_2 + 0x6c);
    auVar25 = vinsertps_avx(auVar24,auVar24,0x4c);
    auVar39._0_4_ = auVar24._0_4_ + auVar25._0_4_;
    auVar39._4_4_ = auVar24._4_4_ + auVar25._4_4_;
    auVar39._8_4_ = auVar24._8_4_ + auVar25._8_4_;
    auVar39._12_4_ = auVar24._12_4_ + auVar25._12_4_;
    auVar25 = vshufpd_avx(auVar39,auVar39,1);
    auVar25 = ZEXT416((uint)(auVar39._0_4_ + auVar25._0_4_));
    auVar25 = vsqrtss_avx(auVar25,auVar25);
    fVar17 = fVar4 * auVar25._0_4_ * -2.0;
    fVar5 = *(float *)(param_1 + 0x1d0);
    lVar9 = *(longlong *)(param_1 + 0x118);
    auVar24 = ZEXT416((uint)fVar4);
    auVar25 = vshufps_avx(auVar24,auVar24,0);
    lVar22 = 0;
    do {
      if (0.0 < *(float *)(lVar9 + 0x4c + lVar22)) {
        auVar39 = *(undefined1 (*) [16])(lVar9 + 0x10 + lVar22);
        auVar37 = *(undefined1 (*) [16])(lVar9 + 0x20 + lVar22);
        auVar27 = vsubps_avx(auVar39,*(undefined1 (*) [16])(lVar9 + lVar22));
        auVar27 = vdivps_avx(auVar27,auVar25);
        *(undefined1 (*) [16])(lVar9 + 0x20 + lVar22) = auVar27;
        if (-1 < *(int *)(lVar9 + 0x40 + lVar22)) {
          pfVar3 = (float *)(lVar9 + 0x30 + lVar22);
          auVar27._0_4_ = auVar39._0_4_ * *pfVar3;
          auVar27._4_4_ = auVar39._4_4_ * pfVar3[1];
          auVar27._8_4_ = auVar39._8_4_ * pfVar3[2];
          auVar27._12_4_ = auVar39._12_4_ * pfVar3[3];
          auVar39 = vinsertps_avx(auVar27,auVar27,0x4c);
          auVar28._0_4_ = auVar27._0_4_ + auVar39._0_4_;
          auVar28._4_4_ = auVar27._4_4_ + auVar39._4_4_;
          auVar28._8_4_ = auVar27._8_4_ + auVar39._8_4_;
          auVar28._12_4_ = auVar27._12_4_ + auVar39._12_4_;
          auVar39 = vshufpd_avx(auVar28,auVar28,1);
          fVar74 = fVar5 - (auVar28._0_4_ + auVar39._0_4_ + *(float *)(lVar9 + 0x3c + lVar22));
          if (0.0 < fVar74) {
            *(undefined1 *)(lVar9 + 0x44 + lVar22) = 1;
            *(undefined1 *)(param_1 + 0x1d6) = 1;
            lVar8 = *(longlong *)(param_1 + 0x148);
            lVar23 = (longlong)*(int *)(lVar9 + 0x40 + lVar22) * 0x100;
            auVar39 = *(undefined1 (*) [16])(lVar9 + 0x30 + lVar22);
            auVar27 = vshufps_avx(ZEXT416((uint)fVar74),ZEXT416((uint)fVar74),0);
            fVar66 = auVar39._0_4_;
            fVar67 = auVar39._4_4_;
            fVar68 = auVar39._8_4_;
            fVar69 = auVar39._12_4_;
            pfVar3 = (float *)(lVar9 + 0x10 + lVar22);
            auVar29._0_4_ = fVar66 * auVar27._0_4_ + *pfVar3;
            auVar29._4_4_ = fVar67 * auVar27._4_4_ + pfVar3[1];
            auVar29._8_4_ = fVar68 * auVar27._8_4_ + pfVar3[2];
            auVar29._12_4_ = fVar69 * auVar27._12_4_ + pfVar3[3];
            lVar1 = lVar8 + lVar23;
            *(undefined1 (*) [16])(lVar9 + 0x10 + lVar22) = auVar29;
            if (*(char *)(lVar8 + 0x5c + lVar23) == '\x02') {
              auVar48 = vsubps_avx(auVar29,*(undefined1 (*) [16])(lVar1 + 0x30));
              fVar18 = *(float *)(lVar1 + 0x6c) * *(float *)(lVar9 + 0x4c + lVar22);
              auVar39 = vshufps_avx(auVar39,auVar39,0xc9);
              fVar70 = auVar48._0_4_;
              auVar30._0_4_ = fVar70 * auVar39._0_4_;
              fVar71 = auVar48._4_4_;
              auVar30._4_4_ = fVar71 * auVar39._4_4_;
              fVar72 = auVar48._8_4_;
              auVar30._8_4_ = fVar72 * auVar39._8_4_;
              fVar73 = auVar48._12_4_;
              auVar30._12_4_ = fVar73 * auVar39._12_4_;
              auVar27 = vshufps_avx(auVar48,auVar48,9);
              auVar43._0_4_ = fVar66 * auVar27._0_4_;
              auVar43._4_4_ = fVar67 * auVar27._4_4_;
              auVar43._8_4_ = fVar68 * auVar27._8_4_;
              auVar43._12_4_ = fVar69 * auVar27._12_4_;
              auVar47 = vsubps_avx(auVar30,auVar43);
              auVar39 = vshufps_avx(auVar47,auVar47,0x55);
              auVar28 = vshufps_avx(auVar47,auVar47,0xaa);
              auVar29 = vshufps_avx(auVar47,auVar47,0);
              auVar47 = vshufps_avx(auVar47,auVar47,0xc9);
              auVar31._0_4_ =
                   auVar47._0_4_ *
                   (auVar39._0_4_ * *(float *)(lVar1 + 0x80) +
                    auVar28._0_4_ * *(float *)(lVar1 + 0x90) +
                    auVar29._0_4_ * *(float *)(lVar1 + 0xa0) + *(float *)(lVar1 + 0xb0));
              auVar31._4_4_ =
                   auVar47._4_4_ *
                   (auVar39._4_4_ * *(float *)(lVar1 + 0x84) +
                    auVar28._4_4_ * *(float *)(lVar1 + 0x94) +
                    auVar29._4_4_ * *(float *)(lVar1 + 0xa4) + *(float *)(lVar1 + 0xb4));
              auVar31._8_4_ =
                   auVar47._8_4_ *
                   (auVar39._8_4_ * *(float *)(lVar1 + 0x88) +
                    auVar28._8_4_ * *(float *)(lVar1 + 0x98) +
                    auVar29._8_4_ * *(float *)(lVar1 + 0xa8) + *(float *)(lVar1 + 0xb8));
              auVar31._12_4_ =
                   auVar47._12_4_ *
                   (auVar39._12_4_ * *(float *)(lVar1 + 0x8c) +
                    auVar28._12_4_ * *(float *)(lVar1 + 0x9c) +
                    auVar29._12_4_ * *(float *)(lVar1 + 0xac) + *(float *)(lVar1 + 0xbc));
              auVar39 = vinsertps_avx(auVar31,auVar31,0x4c);
              auVar32._0_4_ = auVar31._0_4_ + auVar39._0_4_;
              auVar32._4_4_ = auVar31._4_4_ + auVar39._4_4_;
              auVar32._8_4_ = auVar31._8_4_ + auVar39._8_4_;
              auVar32._12_4_ = auVar31._12_4_ + auVar39._12_4_;
              auVar39 = vshufpd_avx(auVar32,auVar32,1);
              fVar11 = fVar18 + auVar32._0_4_ + auVar39._0_4_ + *(float *)(lVar1 + 0x60);
              if (0.0 < fVar11) {
                auVar28 = vshufps_avx(auVar48,auVar48,0xc9);
                auVar39 = *(undefined1 (*) [16])(lVar1 + 0xd0);
                auVar33._0_4_ = auVar39._0_4_ * auVar28._0_4_;
                auVar33._4_4_ = auVar39._4_4_ * auVar28._4_4_;
                auVar33._8_4_ = auVar39._8_4_ * auVar28._8_4_;
                auVar33._12_4_ = auVar39._12_4_ * auVar28._12_4_;
                auVar39 = vshufps_avx(auVar39,auVar39,0xc9);
                auVar44._0_4_ = fVar70 * auVar39._0_4_;
                auVar44._4_4_ = fVar71 * auVar39._4_4_;
                auVar44._8_4_ = fVar72 * auVar39._8_4_;
                auVar44._12_4_ = fVar73 * auVar39._12_4_;
                auVar39 = vsubps_avx(auVar33,auVar44);
                auVar39 = vshufps_avx(auVar39,auVar39,9);
                auVar34._0_4_ = auVar39._0_4_ + *(float *)(lVar1 + 0xc0);
                auVar34._4_4_ = auVar39._4_4_ + *(float *)(lVar1 + 0xc4);
                auVar34._8_4_ = auVar39._8_4_ + *(float *)(lVar1 + 200);
                auVar34._12_4_ = auVar39._12_4_ + *(float *)(lVar1 + 0xcc);
                auVar39 = *(undefined1 (*) [16])(lVar9 + 0x20 + lVar22);
                auVar47 = vsubps_avx(auVar39,auVar34);
                auVar53._0_4_ = fVar66 * auVar47._0_4_;
                auVar53._4_4_ = fVar67 * auVar47._4_4_;
                auVar53._8_4_ = fVar68 * auVar47._8_4_;
                auVar53._12_4_ = fVar69 * auVar47._12_4_;
                auVar28 = vblendps_avx(auVar53,ZEXT416(0) << 0x20,8);
                auVar29 = vinsertps_avx(auVar53,auVar53,0x4c);
                auVar54._0_4_ = auVar28._0_4_ + auVar29._0_4_;
                auVar54._4_4_ = auVar28._4_4_ + auVar29._4_4_;
                auVar54._8_4_ = auVar28._8_4_ + auVar29._8_4_;
                auVar54._12_4_ = auVar28._12_4_ + auVar29._12_4_;
                auVar28 = vshufps_avx(auVar54,auVar54,0);
                auVar29 = vshufps_avx(auVar54,auVar54,0xaa);
                auVar62._0_4_ = fVar66 * (auVar28._0_4_ + auVar29._0_4_);
                auVar62._4_4_ = fVar67 * (auVar28._4_4_ + auVar29._4_4_);
                auVar62._8_4_ = fVar68 * (auVar28._8_4_ + auVar29._8_4_);
                auVar62._12_4_ = fVar69 * (auVar28._12_4_ + auVar29._12_4_);
                auVar28 = vsubps_avx(auVar47,auVar62);
                fVar13 = auVar28._0_4_;
                auVar45._0_4_ = fVar13 * fVar13;
                fVar14 = auVar28._4_4_;
                auVar45._4_4_ = fVar14 * fVar14;
                fVar15 = auVar28._8_4_;
                auVar45._8_4_ = fVar15 * fVar15;
                fVar16 = auVar28._12_4_;
                auVar45._12_4_ = fVar16 * fVar16;
                auVar28 = vinsertps_avx(auVar45,auVar45,0x4c);
                auVar46._0_4_ = auVar45._0_4_ + auVar28._0_4_;
                auVar46._4_4_ = auVar45._4_4_ + auVar28._4_4_;
                auVar46._8_4_ = auVar45._8_4_ + auVar28._8_4_;
                auVar46._12_4_ = auVar45._12_4_ + auVar28._12_4_;
                auVar28 = vshufpd_avx(auVar46,auVar46,1);
                fVar12 = auVar46._0_4_ + auVar28._0_4_;
                fVar52 = 0.0;
                fVar56 = 0.0;
                fVar57 = 0.0;
                fVar58 = 0.0;
                if (0.0 < fVar12) {
                  auVar28 = vsqrtss_avx(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
                  auVar28 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                                       ZEXT416((uint)((fVar74 * *(float *)(lVar1 + 100)) /
                                                     (auVar28._0_4_ * fVar4))));
                  auVar28 = vshufps_avx(auVar28,auVar28,0);
                  fVar52 = fVar13 * auVar28._0_4_;
                  fVar56 = fVar14 * auVar28._4_4_;
                  fVar57 = fVar15 * auVar28._8_4_;
                  fVar58 = fVar16 * auVar28._12_4_;
                }
                auVar63._0_4_ = auVar62._0_4_ + fVar52;
                auVar63._4_4_ = auVar62._4_4_ + fVar56;
                auVar63._8_4_ = auVar62._8_4_ + fVar57;
                auVar63._12_4_ = auVar62._12_4_ + fVar58;
                auVar37 = vsubps_avx(auVar37,auVar34);
                auVar35._0_4_ = fVar66 * auVar37._0_4_;
                auVar35._4_4_ = fVar67 * auVar37._4_4_;
                auVar35._8_4_ = fVar68 * auVar37._8_4_;
                auVar35._12_4_ = fVar69 * auVar37._12_4_;
                auVar37 = vinsertps_avx(auVar35,auVar35,0x4c);
                auVar36._0_4_ = auVar35._0_4_ + auVar37._0_4_;
                auVar36._4_4_ = auVar35._4_4_ + auVar37._4_4_;
                auVar36._8_4_ = auVar35._8_4_ + auVar37._8_4_;
                auVar36._12_4_ = auVar35._12_4_ + auVar37._12_4_;
                auVar37 = vshufpd_avx(auVar36,auVar36,1);
                fVar74 = auVar36._0_4_ + auVar37._0_4_;
                if (fVar74 < fVar17) {
                  auVar37 = ZEXT416((uint)(fVar74 * *(float *)(lVar1 + 0x68)));
                  auVar37 = vshufps_avx(auVar37,auVar37,0);
                  auVar63._0_4_ = auVar63._0_4_ + fVar66 * auVar37._0_4_;
                  auVar63._4_4_ = auVar63._4_4_ + fVar67 * auVar37._4_4_;
                  auVar63._8_4_ = auVar63._8_4_ + fVar68 * auVar37._8_4_;
                  auVar63._12_4_ = auVar63._12_4_ + fVar69 * auVar37._12_4_;
                }
                auVar37 = vshufps_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),0);
                auVar37 = vdivps_avx(auVar63,auVar37);
                auVar28 = vshufps_avx(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),0);
                fVar66 = auVar37._0_4_;
                auVar41._0_4_ = auVar28._0_4_ * fVar66;
                fVar67 = auVar37._4_4_;
                auVar41._4_4_ = auVar28._4_4_ * fVar67;
                fVar68 = auVar37._8_4_;
                auVar41._8_4_ = auVar28._8_4_ * fVar68;
                fVar69 = auVar37._12_4_;
                auVar41._12_4_ = auVar28._12_4_ * fVar69;
                auVar39 = vsubps_avx(auVar39,auVar41);
                *(undefined1 (*) [16])(lVar9 + 0x20 + lVar22) = auVar39;
                fVar74 = *(float *)(lVar1 + 0x60);
                *(float *)(lVar1 + 0xc0) = fVar66 * fVar74 + *(float *)(lVar1 + 0xc0);
                *(float *)(lVar1 + 0xc4) = fVar67 * fVar74 + *(float *)(lVar1 + 0xc4);
                *(float *)(lVar1 + 200) = fVar68 * fVar74 + *(float *)(lVar1 + 200);
                *(float *)(lVar1 + 0xcc) = fVar69 * fVar74 + *(float *)(lVar1 + 0xcc);
                auVar39 = vshufps_avx(auVar37,auVar37,0xc9);
                auVar42._0_4_ = fVar70 * auVar39._0_4_;
                auVar42._4_4_ = fVar71 * auVar39._4_4_;
                auVar42._8_4_ = fVar72 * auVar39._8_4_;
                auVar42._12_4_ = fVar73 * auVar39._12_4_;
                auVar26._0_4_ = auVar27._0_4_ * fVar66;
                auVar26._4_4_ = auVar27._4_4_ * fVar67;
                auVar26._8_4_ = auVar27._8_4_ * fVar68;
                auVar26._12_4_ = auVar27._12_4_ * fVar69;
                auVar27 = vsubps_avx(auVar42,auVar26);
                auVar39 = vshufps_avx(auVar27,auVar27,0x55);
                auVar37 = vshufps_avx(auVar27,auVar27,0xaa);
                auVar27 = vshufps_avx(auVar27,auVar27,0);
                *(float *)(lVar1 + 0xd0) =
                     auVar39._0_4_ * *(float *)(lVar1 + 0x80) +
                     auVar37._0_4_ * *(float *)(lVar1 + 0x90) +
                     auVar27._0_4_ * *(float *)(lVar1 + 0xa0) + *(float *)(lVar1 + 0xb0) +
                     *(float *)(lVar1 + 0xd0);
                *(float *)(lVar1 + 0xd4) =
                     auVar39._4_4_ * *(float *)(lVar1 + 0x84) +
                     auVar37._4_4_ * *(float *)(lVar1 + 0x94) +
                     auVar27._4_4_ * *(float *)(lVar1 + 0xa4) + *(float *)(lVar1 + 0xb4) +
                     *(float *)(lVar1 + 0xd4);
                *(float *)(lVar1 + 0xd8) =
                     auVar39._8_4_ * *(float *)(lVar1 + 0x88) +
                     auVar37._8_4_ * *(float *)(lVar1 + 0x98) +
                     auVar27._8_4_ * *(float *)(lVar1 + 0xa8) + *(float *)(lVar1 + 0xb8) +
                     *(float *)(lVar1 + 0xd8);
                *(float *)(lVar1 + 0xdc) =
                     auVar39._12_4_ * *(float *)(lVar1 + 0x8c) +
                     auVar37._12_4_ * *(float *)(lVar1 + 0x9c) +
                     auVar27._12_4_ * *(float *)(lVar1 + 0xac) + *(float *)(lVar1 + 0xbc) +
                     *(float *)(lVar1 + 0xdc);
                *(undefined1 *)(lVar1 + 0x70) = 1;
                auVar75 = ZEXT1664(auVar24);
              }
            }
            else if (0.0 < *(float *)(lVar1 + 0x6c)) {
              auVar39 = *(undefined1 (*) [16])(lVar9 + 0x20 + lVar22);
              auVar47._0_4_ = fVar66 * auVar39._0_4_;
              auVar47._4_4_ = fVar67 * auVar39._4_4_;
              auVar47._8_4_ = fVar68 * auVar39._8_4_;
              auVar47._12_4_ = fVar69 * auVar39._12_4_;
              auVar55._0_12_ = ZEXT812(0);
              auVar55._12_4_ = 0;
              auVar27 = vblendps_avx(auVar47,auVar55,8);
              auVar28 = vinsertps_avx(auVar47,auVar47,0x4c);
              auVar48._0_4_ = auVar27._0_4_ + auVar28._0_4_;
              auVar48._4_4_ = auVar27._4_4_ + auVar28._4_4_;
              auVar48._8_4_ = auVar27._8_4_ + auVar28._8_4_;
              auVar48._12_4_ = auVar27._12_4_ + auVar28._12_4_;
              auVar27 = vshufps_avx(auVar48,auVar48,0);
              auVar28 = vshufps_avx(auVar48,auVar48,0xaa);
              auVar64._0_4_ = fVar66 * (auVar27._0_4_ + auVar28._0_4_);
              auVar64._4_4_ = fVar67 * (auVar27._4_4_ + auVar28._4_4_);
              auVar64._8_4_ = fVar68 * (auVar27._8_4_ + auVar28._8_4_);
              auVar64._12_4_ = fVar69 * (auVar27._12_4_ + auVar28._12_4_);
              auVar28 = vsubps_avx(auVar39,auVar64);
              fVar18 = auVar28._0_4_;
              auVar49._0_4_ = fVar18 * fVar18;
              fVar70 = auVar28._4_4_;
              auVar49._4_4_ = fVar70 * fVar70;
              fVar71 = auVar28._8_4_;
              auVar49._8_4_ = fVar71 * fVar71;
              fVar72 = auVar28._12_4_;
              auVar49._12_4_ = fVar72 * fVar72;
              auVar27 = vinsertps_avx(auVar49,auVar49,0x4c);
              auVar50._0_4_ = auVar49._0_4_ + auVar27._0_4_;
              auVar50._4_4_ = auVar49._4_4_ + auVar27._4_4_;
              auVar50._8_4_ = auVar49._8_4_ + auVar27._8_4_;
              auVar50._12_4_ = auVar49._12_4_ + auVar27._12_4_;
              auVar27 = vshufpd_avx(auVar50,auVar50,1);
              fVar11 = auVar50._0_4_ + auVar27._0_4_;
              if (0.0 < fVar11) {
                auVar27 = vsqrtss_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
                auVar27 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                                     ZEXT416((uint)((fVar74 * *(float *)(lVar1 + 100)) /
                                                   (auVar75._0_4_ * auVar27._0_4_))));
                auVar27 = vshufps_avx(auVar27,auVar27,0);
                auVar51._0_4_ = fVar18 * auVar27._0_4_;
                auVar51._4_4_ = fVar70 * auVar27._4_4_;
                auVar51._8_4_ = fVar71 * auVar27._8_4_;
                auVar51._12_4_ = fVar72 * auVar27._12_4_;
                auVar39 = vsubps_avx(auVar39,auVar51);
                auVar28 = vsubps_avx(auVar39,auVar64);
              }
              *(undefined1 (*) [16])(lVar9 + 0x20 + lVar22) = auVar28;
              auVar38._0_4_ = auVar37._0_4_ * fVar66;
              auVar38._4_4_ = auVar37._4_4_ * fVar67;
              auVar38._8_4_ = auVar37._8_4_ * fVar68;
              auVar38._12_4_ = auVar37._12_4_ * fVar69;
              auVar39 = vinsertps_avx(auVar38,auVar38,0x4c);
              auVar37._0_4_ = auVar38._0_4_ + auVar39._0_4_;
              auVar37._4_4_ = auVar38._4_4_ + auVar39._4_4_;
              auVar37._8_4_ = auVar38._8_4_ + auVar39._8_4_;
              auVar37._12_4_ = auVar38._12_4_ + auVar39._12_4_;
              auVar39 = vshufpd_avx(auVar37,auVar37,1);
              fVar74 = auVar37._0_4_ + auVar39._0_4_;
              if (fVar74 < fVar17) {
                auVar39 = ZEXT416((uint)(fVar74 * *(float *)(lVar1 + 0x68)));
                auVar39 = vshufps_avx(auVar39,auVar39,0);
                auVar40._0_4_ = fVar66 * auVar39._0_4_;
                auVar40._4_4_ = fVar67 * auVar39._4_4_;
                auVar40._8_4_ = fVar68 * auVar39._8_4_;
                auVar40._12_4_ = fVar69 * auVar39._12_4_;
                auVar39 = vsubps_avx(auVar28,auVar40);
                *(undefined1 (*) [16])(lVar9 + 0x20 + lVar22) = auVar39;
              }
            }
          }
        }
      }
      lVar22 = lVar22 + 0x50;
      fVar74 = auVar75._0_4_;
    } while (lVar20 * 0x50 != lVar22);
  }
  lVar20 = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x130);
    lVar20 = *(longlong *)(param_1 + 0x120) << 5;
    auVar25._0_4_ = 2.0 / fVar74;
    auVar25._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar25 = vshufps_avx(auVar25,auVar25,0);
    lVar22 = 0;
    do {
      puVar2 = (ulonglong *)(lVar9 + 0x10 + lVar22);
      auVar59._0_8_ = *puVar2 ^ 0x8000000080000000;
      auVar59._8_4_ = (uint)puVar2[1] ^ 0x80000000;
      auVar59._12_4_ = *(undefined4 *)((longlong)puVar2 + 0xc);
      auVar24 = *(undefined1 (*) [16])(lVar9 + lVar22);
      auVar39 = vshufps_avx(auVar24,auVar24,0x24);
      auVar37 = vshufps_avx(auVar24,auVar24,0x49);
      uVar6 = *(undefined4 *)(lVar9 + 0xc + lVar22);
      auVar65._4_4_ = uVar6;
      auVar65._0_4_ = uVar6;
      auVar65._8_4_ = uVar6;
      auVar65._12_4_ = uVar6;
      auVar27 = vshufps_avx(auVar59,auVar59,0x3f);
      auVar28 = vshufps_avx(auVar59,auVar59,0x52);
      auVar61._0_4_ = auVar28._0_4_ * auVar37._0_4_;
      auVar61._4_4_ = auVar28._4_4_ * auVar37._4_4_;
      auVar61._8_4_ = auVar28._8_4_ * auVar37._8_4_;
      auVar61._12_4_ = auVar28._12_4_ * auVar37._12_4_;
      auVar39 = vfmadd231ps_fma(auVar61,auVar39,auVar27);
      auVar60._0_12_ = auVar39._0_12_;
      auVar60._12_4_ = auVar39._12_4_ ^ 0x80000000;
      auVar39 = vshufps_avx(auVar59,auVar59,0x89);
      auVar24 = vshufps_avx(auVar24,auVar24,0x92);
      auVar24 = vfnmadd213ps_fma(auVar24,auVar39,auVar60);
      auVar24 = vfmadd231ps_fma(auVar24,auVar59,auVar65);
      pfVar3 = (float *)(lVar9 + 0x10 + lVar22);
      *pfVar3 = auVar25._0_4_ * auVar24._0_4_;
      pfVar3[1] = auVar25._4_4_ * auVar24._4_4_;
      pfVar3[2] = auVar25._8_4_ * auVar24._8_4_;
      pfVar3[3] = auVar25._12_4_ * auVar24._12_4_;
      lVar22 = lVar22 + 0x20;
    } while (lVar20 != lVar22);
  }
  auVar19._8_8_ = uStack_c0;
  auVar19._0_8_ = local_c8;
  if (pauVar21 != (undefined1 (*) [16])0x0) {
    uVar10 = rdtsc();
    auVar24 = vpinsrq_avx(auVar19,uVar10 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)lVar20 >> 0x20),(int)uVar10),1);
    auVar25 = vmovntdq_avx(SUB6416(ZEXT864(0x14139a508),0));
    *pauVar21 = auVar25;
    auVar25 = vmovntdq_avx(auVar24);
    pauVar21[1] = auVar25;
  }
  return;
}

