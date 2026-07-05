/**
 * Function: virtual_float_jph_pathconstraintpathhermite_g
 * Address:  140367ca0
 * Signature: undefined virtual_float_jph_pathconstraintpathhermite_g(void)
 * Body size: 3057 bytes
 */


undefined8
virtual_float_jph_pathconstraintpathhermite_g(longlong param_1,undefined1 (*param_2) [16])

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar37;
  float fVar38;
  undefined1 auVar28 [16];
  float fVar39;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  uint uVar40;
  float fVar41;
  float fVar55;
  float fVar56;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar57;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  float fVar59;
  undefined1 auVar60 [64];
  undefined1 auVar61 [12];
  undefined1 in_ZMM5 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auVar79 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar91;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar89;
  float fVar90;
  undefined1 auVar88 [64];
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 uVar78;
  undefined1 auVar80 [64];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar61 = in_ZMM5._4_12_;
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar40 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar40 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar40 + 1;
      pauVar21 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar40 * 0x20 + 0x20);
      uVar17 = rdtsc();
      local_d8 = uVar17 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar17)
      ;
      uStack_d0 = 0;
      goto LAB_140367da6;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
      auVar61 = in_ZMM5._4_12_;
    }
  }
  pauVar21 = (undefined1 (*) [16])0x0;
LAB_140367da6:
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar40 = uVar2 - 1;
  auVar79._0_4_ = (float)(int)uVar40;
  auVar79._4_12_ = auVar61;
  uVar78 = auVar79._0_8_;
  auVar80 = ZEXT1664(auVar79);
  uVar5 = uVar40;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar5 = uVar2;
  }
  uVar17 = (ulonglong)uVar5;
  if (0 < (int)uVar5) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    auVar79 = *param_2;
    auVar42 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + (longlong)(int)uVar40 * 0x30),auVar79);
    auVar28._0_4_ = auVar42._0_4_ * auVar42._0_4_;
    auVar28._4_4_ = auVar42._4_4_ * auVar42._4_4_;
    auVar28._8_4_ = auVar42._8_4_ * auVar42._8_4_;
    auVar28._12_4_ = auVar42._12_4_ * auVar42._12_4_;
    auVar42 = vinsertps_avx(auVar28,auVar28,0x4c);
    auVar31._0_4_ = auVar28._0_4_ + auVar42._0_4_;
    auVar31._4_4_ = auVar28._4_4_ + auVar42._4_4_;
    auVar31._8_4_ = auVar28._8_4_ + auVar42._8_4_;
    auVar31._12_4_ = auVar28._12_4_ + auVar42._12_4_;
    auVar42 = vshufpd_avx(auVar31,auVar31,1);
    auVar60 = ZEXT464((uint)(auVar31._0_4_ + auVar42._0_4_));
    uVar19 = 0;
    auVar88 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
    do {
      auVar23._0_4_ = (float)(int)uVar19;
      auVar23._4_8_ = SUB128(ZEXT812(0),4);
      auVar23._12_4_ = 0;
      lVar20 = uVar19 * 0x30;
      uVar19 = uVar19 + 1;
      uVar17 = ((longlong)((ulonglong)(uint)((int)uVar19 >> 0x1f) << 0x20 | uVar19 & 0xffffffff) %
                (longlong)(int)uVar2 & 0xffffffffU) * 0x30;
      pfVar1 = (float *)(lVar3 + 0x10 + lVar20);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      auVar42 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + lVar20),auVar79);
      pfVar1 = (float *)(lVar3 + 0x10 + uVar17);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      auVar31 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + uVar17),auVar79);
      fVar37 = auVar42._0_4_;
      auVar33._0_4_ = fVar37 * fVar37;
      fVar38 = auVar42._4_4_;
      auVar33._4_4_ = fVar38 * fVar38;
      fVar39 = auVar42._8_4_;
      auVar33._8_4_ = fVar39 * fVar39;
      fVar4 = auVar42._12_4_;
      auVar33._12_4_ = fVar4 * fVar4;
      auVar42 = vinsertps_avx(auVar33,auVar33,0x4c);
      auVar32._0_4_ = auVar33._0_4_ + auVar42._0_4_;
      auVar32._4_4_ = auVar33._4_4_ + auVar42._4_4_;
      auVar32._8_4_ = auVar33._8_4_ + auVar42._8_4_;
      auVar32._12_4_ = auVar33._12_4_ + auVar42._12_4_;
      auVar42 = vshufpd_avx(auVar32,auVar32,1);
      auVar33 = ZEXT416((uint)(auVar32._0_4_ + auVar42._0_4_));
      auVar42 = vcmpss_avx(auVar33,auVar60._0_16_,1);
      auVar28 = vblendvps_avx(auVar80._0_16_,auVar23,auVar42);
      auVar42 = vminss_avx(auVar33,auVar60._0_16_);
      fVar58 = auVar42._0_4_;
      auVar34._0_4_ = fVar6 * fVar37;
      auVar34._4_4_ = fVar7 * fVar38;
      auVar34._8_4_ = fVar8 * fVar39;
      auVar34._12_4_ = fVar9 * fVar4;
      auVar42 = vinsertps_avx(auVar34,auVar34,0x4c);
      auVar35._0_4_ = auVar34._0_4_ + auVar42._0_4_;
      auVar35._4_4_ = auVar34._4_4_ + auVar42._4_4_;
      auVar35._8_4_ = auVar34._8_4_ + auVar42._8_4_;
      auVar35._12_4_ = auVar34._12_4_ + auVar42._12_4_;
      auVar42 = vshufpd_avx(auVar35,auVar35,1);
      fVar26 = auVar35._0_4_ + auVar42._0_4_;
      auVar33 = auVar88._0_16_;
      auVar42 = vandps_avx(auVar33,ZEXT416((uint)fVar26));
      fVar77 = 0.0;
      fVar81 = auVar31._0_4_;
      fVar82 = auVar31._4_4_;
      fVar83 = auVar31._8_4_;
      fVar84 = auVar31._12_4_;
      if (auVar42._0_4_ < 1e-06) {
LAB_140367e30:
        fVar26 = fVar77 * fVar77;
        fVar59 = fVar77 * fVar26;
        auVar33 = vfmadd213ss_fma(SUB6416(ZEXT464(0xc0000000),0),ZEXT416((uint)fVar59),
                                  ZEXT416((uint)(fVar26 * 3.0)));
        auVar42 = vfmsub231ss_fma(ZEXT416((uint)(fVar26 * 3.0)),ZEXT416((uint)fVar59),
                                  ZEXT416(0x40000000));
        auVar31 = vfmadd213ss_fma(SUB6416(ZEXT464(0xc0000000),0),ZEXT416((uint)fVar26),
                                  ZEXT416((uint)fVar59));
        auVar42 = ZEXT416((uint)(auVar42._0_4_ + 1.0));
        auVar42 = vshufps_avx(auVar42,auVar42,0);
        auVar31 = ZEXT416((uint)(fVar77 + auVar31._0_4_));
        auVar31 = vshufps_avx(auVar31,auVar31,0);
        auVar33 = vshufps_avx(auVar33,auVar33,0);
        auVar32 = vshufps_avx(ZEXT416((uint)(fVar59 - fVar26)),ZEXT416((uint)(fVar59 - fVar26)),0);
        fVar26 = fVar10 * auVar32._0_4_ +
                 fVar81 * auVar33._0_4_ + fVar37 * auVar42._0_4_ + fVar6 * auVar31._0_4_;
        fVar37 = fVar11 * auVar32._4_4_ +
                 fVar82 * auVar33._4_4_ + fVar38 * auVar42._4_4_ + fVar7 * auVar31._4_4_;
        fVar38 = fVar12 * auVar32._8_4_ +
                 fVar83 * auVar33._8_4_ + fVar39 * auVar42._8_4_ + fVar8 * auVar31._8_4_;
        fVar39 = fVar13 * auVar32._12_4_ +
                 fVar84 * auVar33._12_4_ + fVar4 * auVar42._12_4_ + fVar9 * auVar31._12_4_;
        auVar29._0_4_ = fVar26 * fVar26;
        auVar29._4_4_ = fVar37 * fVar37;
        auVar29._8_4_ = fVar38 * fVar38;
        auVar29._12_4_ = fVar39 * fVar39;
        auVar42 = vinsertps_avx(auVar29,auVar29,0x4c);
        auVar30._0_4_ = auVar29._0_4_ + auVar42._0_4_;
        auVar30._4_4_ = auVar29._4_4_ + auVar42._4_4_;
        auVar30._8_4_ = auVar29._8_4_ + auVar42._8_4_;
        auVar30._12_4_ = auVar29._12_4_ + auVar42._12_4_;
        auVar42 = vshufpd_avx(auVar30,auVar30,1);
        auVar31 = ZEXT416((uint)(auVar30._0_4_ + auVar42._0_4_));
        auVar42 = vcmpss_avx(auVar31,ZEXT416((uint)fVar58),1);
        auVar42 = vblendvps_avx(auVar28,ZEXT416((uint)(fVar77 + auVar23._0_4_)),auVar42);
        auVar80 = ZEXT1664(auVar42);
        auVar42 = vminss_avx(auVar31,ZEXT416((uint)fVar58));
        auVar60 = ZEXT1664(auVar42);
      }
      else {
        auVar43._0_4_ = fVar10 * fVar81;
        auVar43._4_4_ = fVar11 * fVar82;
        auVar43._8_4_ = fVar12 * fVar83;
        auVar43._12_4_ = fVar13 * fVar84;
        auVar42 = vinsertps_avx(auVar43,auVar43,0x4c);
        auVar44._0_4_ = auVar43._0_4_ + auVar42._0_4_;
        auVar44._4_4_ = auVar43._4_4_ + auVar42._4_4_;
        auVar44._8_4_ = auVar43._8_4_ + auVar42._8_4_;
        auVar44._12_4_ = auVar43._12_4_ + auVar42._12_4_;
        auVar42 = vshufpd_avx(auVar44,auVar44,1);
        auVar31 = ZEXT416((uint)(auVar44._0_4_ + auVar42._0_4_));
        auVar42 = vandps_avx(auVar33,auVar31);
        fVar77 = 1.0;
        if (auVar42._0_4_ < 1e-06) goto LAB_140367e30;
        fVar77 = 0.0;
        auVar42 = vcmpss_avx(ZEXT416((uint)fVar26),ZEXT816(0),1);
        auVar31 = vcmpss_avx(auVar31,ZEXT816(0),5);
        uVar40 = auVar31._0_4_ ^ auVar42._0_4_;
        uVar18 = (undefined4)(uVar17 >> 0x20);
        uVar17 = CONCAT44(uVar18,uVar40);
        fVar59 = 1.0;
        if ((uVar40 & 1) == 0) {
          auVar45._0_4_ =
               (fVar10 * -0.25 + fVar81 * 1.5 + fVar37 * -1.5 + fVar6 * -0.25) *
               (fVar10 * -0.125 + fVar81 * 0.5 + fVar37 * 0.5 + fVar6 * 0.125);
          auVar45._4_4_ =
               (fVar11 * -0.25 + fVar82 * 1.5 + fVar38 * -1.5 + fVar7 * -0.25) *
               (fVar11 * -0.125 + fVar82 * 0.5 + fVar38 * 0.5 + fVar7 * 0.125);
          auVar45._8_4_ =
               (fVar12 * -0.25 + fVar83 * 1.5 + fVar39 * -1.5 + fVar8 * -0.25) *
               (fVar12 * -0.125 + fVar83 * 0.5 + fVar39 * 0.5 + fVar8 * 0.125);
          auVar45._12_4_ =
               (fVar13 * -0.25 + fVar84 * 0.0 + fVar4 * 0.0 + fVar9 * -0.25) *
               (fVar13 * 0.0 + fVar84 * 0.5 + fVar4 * 0.5 + fVar9 * 0.0);
          auVar42 = vinsertps_avx(auVar45,auVar45,0x4c);
          auVar46._0_4_ = auVar45._0_4_ + auVar42._0_4_;
          auVar46._4_4_ = auVar45._4_4_ + auVar42._4_4_;
          auVar46._8_4_ = auVar45._8_4_ + auVar42._8_4_;
          auVar46._12_4_ = auVar45._12_4_ + auVar42._12_4_;
          auVar42 = vshufpd_avx(auVar46,auVar46,1);
          auVar31 = ZEXT416((uint)(auVar46._0_4_ + auVar42._0_4_));
          auVar42 = vandps_avx(auVar33,auVar31);
          fVar77 = 0.5;
          if (auVar42._0_4_ < 1e-06) goto LAB_140367e30;
          auVar42 = vcmpss_avx(auVar31,ZEXT816(0) << 0x20,5);
          auVar31 = vcmpss_avx(ZEXT416((uint)fVar26),ZEXT816(0) << 0x20,1);
          uVar40 = auVar31._0_4_ ^ auVar42._0_4_;
          uVar17 = CONCAT44(uVar18,uVar40);
          fVar77 = 0.75;
          bVar22 = (uVar40 & 1) == 0;
          if (bVar22) {
            fVar77 = 0.25;
            if (bVar22) goto LAB_1403684af;
LAB_1403682f9:
            auVar42 = SUB6416(ZEXT464(0x3f100000),0);
            auVar33 = SUB6416(ZEXT464(0x3ed80000),0);
          }
          else {
            if (!bVar22) goto LAB_1403682f9;
LAB_1403684af:
            auVar42 = SUB6416(ZEXT464(0x3d800000),0);
            auVar33 = SUB6416(ZEXT464(0x3ed80000),0);
          }
          if (bVar22) {
            auVar33 = SUB6416(ZEXT464(0x3c800000),0);
          }
          auVar35 = ZEXT416((uint)(auVar42._0_4_ * 3.0));
          auVar34 = vfmsub231ss_fma(auVar35,auVar33,ZEXT416(0x40000000));
          auVar32 = vfmadd213ss_fma(SUB6416(ZEXT464(0xc0000000),0),auVar42,auVar33);
          auVar33 = vfmadd213ss_fma(auVar33,SUB6416(ZEXT464(0xc0000000),0),auVar35);
          auVar35 = SUB6416(ZEXT464(0xbe100000),0);
          if (bVar22) {
            auVar35 = SUB6416(ZEXT464(0xbd400000),0);
          }
          auVar43 = vfmadd231ss_fma(ZEXT416((uint)(fVar77 * -4.0)),auVar42,
                                    SUB6416(ZEXT464(0x40400000),0));
          auVar44 = vfmadd231ss_fma(ZEXT416((uint)(fVar77 * -2.0)),SUB6416(ZEXT464(0x40400000),0),
                                    auVar42);
          auVar42 = ZEXT416((uint)(auVar34._0_4_ + 1.0));
          auVar42 = vshufps_avx(auVar42,auVar42,0);
          auVar32 = ZEXT416((uint)(fVar77 + auVar32._0_4_));
          auVar32 = vshufps_avx(auVar32,auVar32,0);
          auVar33 = vshufps_avx(auVar33,auVar33,0);
          fVar59 = 1.0;
          auVar34 = vshufps_avx(auVar35,auVar35,0);
          auVar35 = ZEXT416((uint)(auVar43._0_4_ + 1.0));
          auVar35 = vshufps_avx(auVar35,auVar35,0);
          auVar43 = vshufps_avx(auVar44,auVar44,0);
          auVar47._0_4_ =
               (fVar10 * auVar43._0_4_ + fVar81 * 1.125 + fVar37 * -1.125 + fVar6 * auVar35._0_4_) *
               (fVar10 * auVar34._0_4_ +
               fVar81 * auVar33._0_4_ + fVar6 * auVar32._0_4_ + fVar37 * auVar42._0_4_);
          auVar47._4_4_ =
               (fVar11 * auVar43._4_4_ + fVar82 * 1.125 + fVar38 * -1.125 + fVar7 * auVar35._4_4_) *
               (fVar11 * auVar34._4_4_ +
               fVar82 * auVar33._4_4_ + fVar7 * auVar32._4_4_ + fVar38 * auVar42._4_4_);
          auVar47._8_4_ =
               (fVar12 * auVar43._8_4_ + fVar83 * 1.125 + fVar39 * -1.125 + fVar8 * auVar35._8_4_) *
               (fVar12 * auVar34._8_4_ +
               fVar83 * auVar33._8_4_ + fVar8 * auVar32._8_4_ + fVar39 * auVar42._8_4_);
          auVar47._12_4_ =
               (fVar13 * auVar43._12_4_ + fVar84 * 0.0 + fVar4 * 0.0 + fVar9 * auVar35._12_4_) *
               (fVar13 * auVar34._12_4_ +
               fVar84 * auVar33._12_4_ + fVar9 * auVar32._12_4_ + fVar4 * auVar42._12_4_);
          auVar42 = vinsertps_avx(auVar47,auVar47,0x4c);
          auVar48._0_4_ = auVar47._0_4_ + auVar42._0_4_;
          auVar48._4_4_ = auVar47._4_4_ + auVar42._4_4_;
          auVar48._8_4_ = auVar47._8_4_ + auVar42._8_4_;
          auVar48._12_4_ = auVar47._12_4_ + auVar42._12_4_;
          auVar42 = vshufpd_avx(auVar48,auVar48,1);
          auVar86._8_4_ = 0x7fffffff;
          auVar86._0_8_ = 0x7fffffff7fffffff;
          auVar86._12_4_ = 0x7fffffff;
          auVar88 = ZEXT1664(auVar86);
          auVar33 = ZEXT416((uint)(auVar48._0_4_ + auVar42._0_4_));
          auVar42 = vandps_avx(auVar86,auVar33);
          if (1e-06 <= auVar42._0_4_) {
            bVar22 = (uVar40 & 1) == 0;
            if (bVar22) {
              fVar59 = 0.5;
            }
            fVar41 = 0.5;
            if (bVar22) {
              fVar41 = 0.0;
            }
            auVar42 = vcmpss_avx(auVar33,ZEXT816(0) << 0x20,5);
            auVar33 = vcmpss_avx(ZEXT416((uint)fVar26),ZEXT816(0) << 0x20,1);
            uVar40 = auVar33._0_4_ ^ auVar42._0_4_;
            uVar17 = CONCAT44(uVar18,uVar40);
            fVar27 = fVar77;
            if ((uVar40 & 1) == 0) {
              fVar27 = fVar41;
              fVar59 = fVar77;
            }
            fVar77 = (fVar27 + fVar59) * 0.5;
            fVar41 = fVar77 * fVar77;
            fVar55 = fVar77 * fVar41;
            auVar32 = vfmadd213ss_fma(SUB6416(ZEXT464(0xc0000000),0),ZEXT416((uint)fVar55),
                                      ZEXT416((uint)(fVar41 * 3.0)));
            auVar42 = vfmsub231ss_fma(ZEXT416((uint)(fVar41 * 3.0)),ZEXT416((uint)fVar55),
                                      ZEXT416(0x40000000));
            auVar34 = ZEXT416((uint)fVar41);
            auVar33 = vfmadd213ss_fma(SUB6416(ZEXT464(0xc0000000),0),auVar34,ZEXT416((uint)fVar55));
            auVar42 = ZEXT416((uint)(auVar42._0_4_ + 1.0));
            auVar42 = vshufps_avx(auVar42,auVar42,0);
            auVar33 = ZEXT416((uint)(fVar77 + auVar33._0_4_));
            auVar33 = vshufps_avx(auVar33,auVar33,0);
            auVar43 = vfmadd231ss_fma(ZEXT416((uint)(fVar77 * -4.0)),auVar34,
                                      SUB6416(ZEXT464(0x40400000),0));
            auVar32 = vshufps_avx(auVar32,auVar32,0);
            auVar44 = vfmadd231ss_fma(ZEXT416((uint)(fVar77 * -2.0)),SUB6416(ZEXT464(0x40400000),0),
                                      auVar34);
            auVar34 = vshufps_avx(ZEXT416((uint)(fVar55 - fVar41)),ZEXT416((uint)(fVar55 - fVar41)),
                                  0);
            auVar35 = ZEXT416((uint)((fVar41 - fVar77) * 6.0));
            auVar35 = vshufps_avx(auVar35,auVar35,0);
            auVar43 = ZEXT416((uint)(auVar43._0_4_ + 1.0));
            auVar43 = vshufps_avx(auVar43,auVar43,0);
            auVar67._0_4_ = fVar6 * auVar43._0_4_ + fVar37 * auVar35._0_4_;
            auVar67._4_4_ = fVar7 * auVar43._4_4_ + fVar38 * auVar35._4_4_;
            auVar67._8_4_ = fVar8 * auVar43._8_4_ + fVar39 * auVar35._8_4_;
            auVar67._12_4_ = fVar9 * auVar43._12_4_ + fVar4 * auVar35._12_4_;
            auVar49._0_4_ = fVar81 * auVar35._0_4_;
            auVar49._4_4_ = fVar82 * auVar35._4_4_;
            auVar49._8_4_ = fVar83 * auVar35._8_4_;
            auVar49._12_4_ = fVar84 * auVar35._12_4_;
            auVar43 = vsubps_avx(auVar67,auVar49);
            auVar35 = vshufps_avx(auVar44,auVar44,0);
            auVar50._0_4_ =
                 (fVar10 * auVar35._0_4_ + auVar43._0_4_) *
                 (fVar10 * auVar34._0_4_ +
                 fVar81 * auVar32._0_4_ + fVar6 * auVar33._0_4_ + fVar37 * auVar42._0_4_);
            auVar50._4_4_ =
                 (fVar11 * auVar35._4_4_ + auVar43._4_4_) *
                 (fVar11 * auVar34._4_4_ +
                 fVar82 * auVar32._4_4_ + fVar7 * auVar33._4_4_ + fVar38 * auVar42._4_4_);
            auVar50._8_4_ =
                 (fVar12 * auVar35._8_4_ + auVar43._8_4_) *
                 (fVar12 * auVar34._8_4_ +
                 fVar83 * auVar32._8_4_ + fVar8 * auVar33._8_4_ + fVar39 * auVar42._8_4_);
            auVar50._12_4_ =
                 (fVar13 * auVar35._12_4_ + auVar43._12_4_) *
                 (fVar13 * auVar34._12_4_ +
                 fVar84 * auVar32._12_4_ + fVar9 * auVar33._12_4_ + fVar4 * auVar42._12_4_);
            auVar42 = vinsertps_avx(auVar50,auVar50,0x4c);
            auVar51._0_4_ = auVar50._0_4_ + auVar42._0_4_;
            auVar51._4_4_ = auVar50._4_4_ + auVar42._4_4_;
            auVar51._8_4_ = auVar50._8_4_ + auVar42._8_4_;
            auVar51._12_4_ = auVar50._12_4_ + auVar42._12_4_;
            auVar42 = vshufpd_avx(auVar51,auVar51,1);
            auVar87._8_4_ = 0x7fffffff;
            auVar87._0_8_ = 0x7fffffff7fffffff;
            auVar87._12_4_ = 0x7fffffff;
            auVar88 = ZEXT1664(auVar87);
            auVar33 = ZEXT416((uint)(auVar51._0_4_ + auVar42._0_4_));
            auVar42 = vandps_avx(auVar87,auVar33);
            if (1e-06 <= auVar42._0_4_) {
              auVar42 = vcmpss_avx(auVar33,ZEXT816(0),5);
              uVar40 = auVar42._0_4_ ^ auVar31._0_4_;
              uVar17 = CONCAT44(uVar18,uVar40);
              fVar41 = fVar77;
              if ((uVar40 & 1) == 0) {
                fVar41 = fVar27;
                fVar59 = fVar77;
              }
              fVar77 = (fVar41 + fVar59) * 0.5;
              fVar27 = fVar77 * fVar77;
              fVar55 = fVar77 * fVar27;
              auVar33 = vfmadd213ss_fma(SUB6416(ZEXT464(0xc0000000),0),ZEXT416((uint)fVar55),
                                        ZEXT416((uint)(fVar27 * 3.0)));
              auVar42 = vfmsub231ss_fma(ZEXT416((uint)(fVar27 * 3.0)),ZEXT416((uint)fVar55),
                                        ZEXT416(0x40000000));
              auVar32 = ZEXT416((uint)fVar27);
              auVar31 = vfmadd213ss_fma(SUB6416(ZEXT464(0xc0000000),0),auVar32,ZEXT416((uint)fVar55)
                                       );
              auVar42 = ZEXT416((uint)(auVar42._0_4_ + 1.0));
              auVar42 = vshufps_avx(auVar42,auVar42,0);
              auVar31 = ZEXT416((uint)(fVar77 + auVar31._0_4_));
              auVar31 = vshufps_avx(auVar31,auVar31,0);
              auVar35 = vfmadd231ss_fma(ZEXT416((uint)(fVar77 * -4.0)),auVar32,
                                        SUB6416(ZEXT464(0x40400000),0));
              auVar33 = vshufps_avx(auVar33,auVar33,0);
              auVar43 = vfmadd231ss_fma(ZEXT416((uint)(fVar77 * -2.0)),
                                        SUB6416(ZEXT464(0x40400000),0),auVar32);
              auVar32 = vshufps_avx(ZEXT416((uint)(fVar55 - fVar27)),
                                    ZEXT416((uint)(fVar55 - fVar27)),0);
              auVar34 = ZEXT416((uint)((fVar27 - fVar77) * 6.0));
              auVar34 = vshufps_avx(auVar34,auVar34,0);
              auVar35 = ZEXT416((uint)(auVar35._0_4_ + 1.0));
              auVar35 = vshufps_avx(auVar35,auVar35,0);
              auVar68._0_4_ = fVar6 * auVar35._0_4_ + fVar37 * auVar34._0_4_;
              auVar68._4_4_ = fVar7 * auVar35._4_4_ + fVar38 * auVar34._4_4_;
              auVar68._8_4_ = fVar8 * auVar35._8_4_ + fVar39 * auVar34._8_4_;
              auVar68._12_4_ = fVar9 * auVar35._12_4_ + fVar4 * auVar34._12_4_;
              auVar52._0_4_ = fVar81 * auVar34._0_4_;
              auVar52._4_4_ = fVar82 * auVar34._4_4_;
              auVar52._8_4_ = fVar83 * auVar34._8_4_;
              auVar52._12_4_ = fVar84 * auVar34._12_4_;
              auVar35 = vsubps_avx(auVar68,auVar52);
              auVar34 = vshufps_avx(auVar43,auVar43,0);
              auVar53._0_4_ =
                   (fVar10 * auVar34._0_4_ + auVar35._0_4_) *
                   (fVar10 * auVar32._0_4_ +
                   fVar81 * auVar33._0_4_ + fVar6 * auVar31._0_4_ + fVar37 * auVar42._0_4_);
              auVar53._4_4_ =
                   (fVar11 * auVar34._4_4_ + auVar35._4_4_) *
                   (fVar11 * auVar32._4_4_ +
                   fVar82 * auVar33._4_4_ + fVar7 * auVar31._4_4_ + fVar38 * auVar42._4_4_);
              auVar53._8_4_ =
                   (fVar12 * auVar34._8_4_ + auVar35._8_4_) *
                   (fVar12 * auVar32._8_4_ +
                   fVar83 * auVar33._8_4_ + fVar8 * auVar31._8_4_ + fVar39 * auVar42._8_4_);
              auVar53._12_4_ =
                   (fVar13 * auVar34._12_4_ + auVar35._12_4_) *
                   (fVar13 * auVar32._12_4_ +
                   fVar84 * auVar33._12_4_ + fVar9 * auVar31._12_4_ + fVar4 * auVar42._12_4_);
              auVar42 = vinsertps_avx(auVar53,auVar53,0x4c);
              auVar54._0_4_ = auVar53._0_4_ + auVar42._0_4_;
              auVar54._4_4_ = auVar53._4_4_ + auVar42._4_4_;
              auVar54._8_4_ = auVar53._8_4_ + auVar42._8_4_;
              auVar54._12_4_ = auVar53._12_4_ + auVar42._12_4_;
              auVar42 = vshufpd_avx(auVar54,auVar54,1);
              fVar27 = auVar54._0_4_ + auVar42._0_4_;
              auVar42._8_4_ = 0x7fffffff;
              auVar42._0_8_ = 0x7fffffff7fffffff;
              auVar42._12_4_ = 0x7fffffff;
              auVar88 = ZEXT1664(auVar42);
              auVar42 = vandps_avx(auVar42,ZEXT416((uint)fVar27));
              if (1e-06 <= auVar42._0_4_) {
                uVar17 = CONCAT71((int7)(uVar17 >> 8),fVar26 < 0.0);
                fVar55 = fVar77;
                if (fVar26 < 0.0 == 0.0 <= fVar27) {
                  fVar55 = fVar41;
                  fVar59 = fVar77;
                }
                fVar77 = fVar55;
                if ((fVar77 == fVar59) && (!NAN(fVar77) && !NAN(fVar59))) goto LAB_140367e30;
                goto LAB_140367fd2;
              }
            }
          }
          fVar59 = fVar77;
          if (!NAN(fVar77) && !NAN(fVar77)) goto LAB_140367e30;
        }
LAB_140367fd2:
        auVar36 = ZEXT464((uint)((fVar77 + fVar59) * 0.5));
        iVar16 = 9;
LAB_140368010:
        fVar27 = auVar36._0_4_;
        fVar26 = fVar27 * fVar27;
        fVar41 = fVar27 * fVar26;
        auVar43 = SUB6416(ZEXT464(0xc0000000),0);
        auVar33 = vfmadd213ss_fma(auVar43,ZEXT416((uint)fVar41),ZEXT416((uint)(fVar26 * 3.0)));
        auVar42 = vfmsub231ss_fma(ZEXT416((uint)(fVar26 * 3.0)),ZEXT416((uint)fVar41),
                                  ZEXT416(0x40000000));
        auVar32 = ZEXT416((uint)fVar26);
        auVar31 = vfmadd213ss_fma(auVar43,auVar32,ZEXT416((uint)fVar41));
        auVar42 = ZEXT416((uint)(auVar42._0_4_ + 1.0));
        auVar42 = vshufps_avx(auVar42,auVar42,0);
        auVar31 = ZEXT416((uint)(auVar31._0_4_ + fVar27));
        auVar31 = vshufps_avx(auVar31,auVar31,0);
        auVar34 = vfmadd231ss_fma(ZEXT416((uint)(fVar27 * -4.0)),auVar32,
                                  SUB6416(ZEXT464(0x40400000),0));
        auVar33 = vshufps_avx(auVar33,auVar33,0);
        auVar35 = vfmadd231ss_fma(ZEXT416((uint)(fVar27 * -2.0)),SUB6416(ZEXT464(0x40400000),0),
                                  auVar32);
        auVar32 = vshufps_avx(ZEXT416((uint)(fVar41 - fVar26)),ZEXT416((uint)(fVar41 - fVar26)),0);
        fVar41 = fVar81 * auVar33._0_4_ + fVar6 * auVar31._0_4_ + auVar42._0_4_ * fVar37 +
                 fVar10 * auVar32._0_4_;
        fVar55 = fVar82 * auVar33._4_4_ + fVar7 * auVar31._4_4_ + auVar42._4_4_ * fVar38 +
                 fVar11 * auVar32._4_4_;
        fVar56 = fVar83 * auVar33._8_4_ + fVar8 * auVar31._8_4_ + auVar42._8_4_ * fVar39 +
                 fVar12 * auVar32._8_4_;
        fVar57 = fVar84 * auVar33._12_4_ + fVar9 * auVar31._12_4_ + auVar42._12_4_ * fVar4 +
                 fVar13 * auVar32._12_4_;
        auVar42 = ZEXT416((uint)((fVar26 - fVar27) * 6.0));
        auVar42 = vshufps_avx(auVar42,auVar42,0);
        auVar31 = ZEXT416((uint)(auVar34._0_4_ + 1.0));
        auVar31 = vshufps_avx(auVar31,auVar31,0);
        auVar69._0_4_ = fVar6 * auVar31._0_4_ + fVar37 * auVar42._0_4_;
        auVar69._4_4_ = fVar7 * auVar31._4_4_ + fVar38 * auVar42._4_4_;
        auVar69._8_4_ = fVar8 * auVar31._8_4_ + fVar39 * auVar42._8_4_;
        auVar69._12_4_ = fVar9 * auVar31._12_4_ + fVar4 * auVar42._12_4_;
        auVar62._0_4_ = fVar81 * auVar42._0_4_;
        auVar62._4_4_ = fVar82 * auVar42._4_4_;
        auVar62._8_4_ = fVar83 * auVar42._8_4_;
        auVar62._12_4_ = fVar84 * auVar42._12_4_;
        auVar31 = vsubps_avx(auVar69,auVar62);
        auVar42 = vshufps_avx(auVar35,auVar35,0);
        fVar85 = fVar10 * auVar42._0_4_ + auVar31._0_4_;
        fVar89 = fVar11 * auVar42._4_4_ + auVar31._4_4_;
        fVar90 = fVar12 * auVar42._8_4_ + auVar31._8_4_;
        fVar91 = fVar13 * auVar42._12_4_ + auVar31._12_4_;
        auVar33 = auVar36._0_16_;
        auVar42 = vfmadd213ss_fma(SUB6416(ZEXT464(0x41400000),0),auVar33,ZEXT416(0xc0c00000));
        auVar31 = vfmadd213ss_fma(SUB6416(ZEXT464(0x40c00000),0),auVar33,
                                  SUB6416(ZEXT464(0xc0800000),0));
        auVar42 = vshufps_avx(auVar42,auVar42,0);
        auVar31 = vshufps_avx(auVar31,auVar31,0);
        auVar70._0_4_ = fVar37 * auVar42._0_4_ + fVar6 * auVar31._0_4_;
        auVar70._4_4_ = fVar38 * auVar42._4_4_ + fVar7 * auVar31._4_4_;
        auVar70._8_4_ = fVar39 * auVar42._8_4_ + fVar8 * auVar31._8_4_;
        auVar70._12_4_ = fVar4 * auVar42._12_4_ + fVar9 * auVar31._12_4_;
        auVar31 = vfmadd213ss_fma(SUB6416(ZEXT464(0x40c00000),0),auVar33,auVar43);
        auVar63._0_4_ = fVar81 * auVar42._0_4_;
        auVar63._4_4_ = fVar82 * auVar42._4_4_;
        auVar63._8_4_ = fVar83 * auVar42._8_4_;
        auVar63._12_4_ = fVar84 * auVar42._12_4_;
        auVar33 = vsubps_avx(auVar70,auVar63);
        auVar31 = vshufps_avx(auVar31,auVar31,0);
        auVar71._0_4_ = fVar85 * fVar85;
        auVar71._4_4_ = fVar89 * fVar89;
        auVar71._8_4_ = fVar90 * fVar90;
        auVar71._12_4_ = fVar91 * fVar91;
        auVar42 = vinsertps_avx(auVar71,auVar71,0x4c);
        auVar72._0_4_ = auVar42._0_4_ + auVar71._0_4_;
        auVar72._4_4_ = auVar42._4_4_ + auVar71._4_4_;
        auVar72._8_4_ = auVar42._8_4_ + auVar71._8_4_;
        auVar72._12_4_ = auVar42._12_4_ + auVar71._12_4_;
        auVar64._0_4_ = (fVar10 * auVar31._0_4_ + auVar33._0_4_) * fVar41;
        auVar64._4_4_ = (fVar11 * auVar31._4_4_ + auVar33._4_4_) * fVar55;
        auVar64._8_4_ = (fVar12 * auVar31._8_4_ + auVar33._8_4_) * fVar56;
        auVar64._12_4_ = (fVar13 * auVar31._12_4_ + auVar33._12_4_) * fVar57;
        auVar42 = vinsertps_avx(auVar64,auVar64,0x4c);
        auVar65._0_4_ = auVar42._0_4_ + auVar64._0_4_;
        auVar65._4_4_ = auVar42._4_4_ + auVar64._4_4_;
        auVar65._8_4_ = auVar42._8_4_ + auVar64._8_4_;
        auVar65._12_4_ = auVar42._12_4_ + auVar64._12_4_;
        auVar42 = vshufpd_avx(auVar65,auVar65,1);
        auVar31 = vshufpd_avx(auVar72,auVar72,1);
        fVar26 = auVar31._0_4_ + auVar72._0_4_ + auVar42._0_4_ + auVar65._0_4_;
        if ((fVar26 == 0.0) && (!NAN(fVar26))) {
LAB_140368467:
          auVar88 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
          if (0.0 <= fVar27) goto LAB_1403684dd;
          goto LAB_14036847a;
        }
        auVar73._0_4_ = fVar85 * fVar41;
        auVar73._4_4_ = fVar89 * fVar55;
        auVar73._8_4_ = fVar90 * fVar56;
        auVar73._12_4_ = fVar91 * fVar57;
        auVar42 = vinsertps_avx(auVar73,auVar73,0x4c);
        auVar74._0_4_ = auVar42._0_4_ + auVar73._0_4_;
        auVar74._4_4_ = auVar42._4_4_ + auVar73._4_4_;
        auVar74._8_4_ = auVar42._8_4_ + auVar73._8_4_;
        auVar74._12_4_ = auVar42._12_4_ + auVar73._12_4_;
        auVar42 = vshufpd_avx(auVar74,auVar74,1);
        auVar75._0_4_ = -(auVar42._0_4_ + auVar74._0_4_);
        auVar75._4_4_ = 0x80000000;
        auVar75._8_4_ = 0x80000000;
        auVar75._12_4_ = 0x80000000;
        auVar66._0_4_ = auVar75._0_4_ / fVar26;
        auVar66._4_12_ = auVar75._4_12_;
        auVar15._4_4_ = 0x80000000;
        auVar15._0_4_ = -(fVar59 - fVar77);
        auVar15._8_4_ = 0x80000000;
        auVar15._12_4_ = 0x80000000;
        auVar42 = vmaxss_avx(auVar15,auVar66);
        auVar42 = vminss_avx(ZEXT416((uint)(fVar59 - fVar77)),auVar42);
        fVar26 = auVar42._0_4_;
        if ((fVar27 <= fVar59) || (fVar26 <= 0.0)) {
          if ((fVar27 < fVar77) && (fVar26 < 0.0)) goto LAB_140368467;
          auVar36 = ZEXT464((uint)(fVar26 + fVar27));
          auVar76._8_4_ = 0x7fffffff;
          auVar76._0_8_ = 0x7fffffff7fffffff;
          auVar76._12_4_ = 0x7fffffff;
          auVar42 = vandps_avx(auVar42,auVar76);
          auVar88 = ZEXT1664(auVar76);
          bVar22 = iVar16 == 0;
          iVar16 = iVar16 + -1;
          if ((auVar42._0_4_ < 0.0001) || (bVar22)) goto LAB_1403684d3;
          goto LAB_140368010;
        }
        auVar88 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
LAB_1403684d3:
        if (auVar36._0_4_ < 0.0) {
LAB_14036847a:
          uVar17 = 0;
          auVar80 = ZEXT1664(auVar28);
          auVar60 = ZEXT464((uint)fVar58);
        }
        else {
LAB_1403684dd:
          uVar17 = 0;
          auVar80 = ZEXT1664(auVar28);
          auVar60 = ZEXT464((uint)fVar58);
          if (auVar36._0_4_ <= 1.0) {
            auVar24._0_4_ = fVar41 * fVar41;
            auVar24._4_4_ = fVar55 * fVar55;
            auVar24._8_4_ = fVar56 * fVar56;
            auVar24._12_4_ = fVar57 * fVar57;
            auVar42 = vinsertps_avx(auVar24,auVar24,0x4c);
            auVar25._0_4_ = auVar24._0_4_ + auVar42._0_4_;
            auVar25._4_4_ = auVar24._4_4_ + auVar42._4_4_;
            auVar25._8_4_ = auVar24._8_4_ + auVar42._8_4_;
            auVar25._12_4_ = auVar24._12_4_ + auVar42._12_4_;
            auVar42 = vshufpd_avx(auVar25,auVar25,1);
            fVar26 = auVar25._0_4_ + auVar42._0_4_;
            if (fVar26 < fVar58) {
              auVar80 = ZEXT464((uint)(auVar36._0_4_ + auVar23._0_4_));
              auVar60 = ZEXT464((uint)fVar26);
            }
          }
        }
      }
      uVar78 = auVar80._0_8_;
    } while (uVar19 != uVar5);
  }
  if (pauVar21 != (undefined1 (*) [16])0x0) {
    uVar19 = rdtsc();
    auVar14._8_8_ = uStack_d0;
    auVar14._0_8_ = local_d8;
    auVar42 = vpinsrq_avx(auVar14,uVar19 & 0xffffffff00000000 |
                                  CONCAT44((int)(uVar17 >> 0x20),(int)uVar19),1);
    auVar79 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b65a),0));
    *pauVar21 = auVar79;
    auVar79 = vmovntdq_avx(auVar42);
    pauVar21[1] = auVar79;
  }
  return uVar78;
}

