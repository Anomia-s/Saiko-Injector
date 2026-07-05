/**
 * Function: void_jph_softbodymotionproperties_applydihedr
 * Address:  140383e90
 * Signature: undefined void_jph_softbodymotionproperties_applydihedr(void)
 * Body size: 1634 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void void_jph_softbodymotionproperties_applydihedr
               (longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint *puVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auVar23 [16];
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
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar58 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [64];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [64];
  undefined1 auVar76 [64];
  undefined1 (*local_168) [16];
  ulonglong local_138;
  undefined8 uStack_130;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar16 = *(uint **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (puVar16 != (uint *)0x0) {
    uVar2 = puVar16[0x80008];
    if ((ulonglong)uVar2 < 0x10000) {
      puVar16[0x80008] = uVar2 + 1;
      local_168 = (undefined1 (*) [16])(puVar16 + (ulonglong)uVar2 * 8 + 8);
      uVar7 = rdtsc();
      puVar16 = (uint *)CONCAT44((int)((ulonglong)local_168 >> 0x20),(int)uVar7);
      local_138 = uVar7 & 0xffffffff00000000 | (ulonglong)puVar16;
      uStack_130 = 0;
      goto joined_r0x000140383fb6;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      puVar16 = (uint *)(*(code *)PTR_vfunction4_1414f67c8)
                                  ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_168 = (undefined1 (*) [16])0x0;
joined_r0x000140383fb6:
  if (param_3 < param_4) {
    fVar1 = *(float *)(param_2 + 0x84);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x60);
    puVar18 = (uint *)(lVar6 + (ulonglong)param_3 * 0x18 + 0x14);
    do {
      uVar2 = puVar18[-5];
      uVar3 = puVar18[-4];
      lVar21 = *(longlong *)(param_1 + 0x118);
      auVar32 = *(undefined1 (*) [16])(lVar21 + 0x10 + (ulonglong)uVar2 * 0x50);
      auVar74 = ZEXT1664(auVar32);
      auVar30 = *(undefined1 (*) [16])(lVar21 + 0x10 + (ulonglong)uVar3 * 0x50);
      auVar55 = ZEXT1664(auVar30);
      auVar25 = vsubps_avx(auVar30,auVar32);
      auVar58 = ZEXT1664(auVar25);
      auVar23._0_4_ = auVar25._0_4_ * auVar25._0_4_;
      auVar23._4_4_ = auVar25._4_4_ * auVar25._4_4_;
      auVar23._8_4_ = auVar25._8_4_ * auVar25._8_4_;
      auVar23._12_4_ = auVar25._12_4_ * auVar25._12_4_;
      auVar25 = vinsertps_avx(auVar23,auVar23,0x4c);
      auVar24._0_4_ = auVar23._0_4_ + auVar25._0_4_;
      auVar24._4_4_ = auVar23._4_4_ + auVar25._4_4_;
      auVar24._8_4_ = auVar23._8_4_ + auVar25._8_4_;
      auVar24._12_4_ = auVar23._12_4_ + auVar25._12_4_;
      auVar25 = vshufpd_avx(auVar24,auVar24,1);
      auVar25 = ZEXT416((uint)(auVar24._0_4_ + auVar25._0_4_));
      auVar25 = vsqrtss_avx(auVar25,auVar25);
      auVar56 = ZEXT1664(auVar25);
      if (1e-06 <= auVar25._0_4_) {
        uVar4 = puVar18[-3];
        uVar5 = puVar18[-2];
        auVar25 = *(undefined1 (*) [16])(lVar21 + 0x10 + (ulonglong)uVar4 * 0x50);
        auVar23 = *(undefined1 (*) [16])(lVar21 + 0x10 + (ulonglong)uVar5 * 0x50);
        auVar24 = vsubps_avx(auVar25,auVar30);
        auVar62 = ZEXT1664(auVar24);
        auVar27 = vsubps_avx(auVar23,auVar30);
        auVar75 = ZEXT1664(auVar27);
        auVar26 = vsubps_avx(auVar25,auVar32);
        auVar30 = vshufps_avx(auVar24,auVar24,0xc9);
        auVar33._0_4_ = auVar26._0_4_ * auVar30._0_4_;
        auVar33._4_4_ = auVar26._4_4_ * auVar30._4_4_;
        auVar33._8_4_ = auVar26._8_4_ * auVar30._8_4_;
        auVar33._12_4_ = auVar26._12_4_ * auVar30._12_4_;
        auVar30 = vshufps_avx(auVar26,auVar26,0xc9);
        auVar26._0_4_ = auVar24._0_4_ * auVar30._0_4_;
        auVar26._4_4_ = auVar24._4_4_ * auVar30._4_4_;
        auVar26._8_4_ = auVar24._8_4_ * auVar30._8_4_;
        auVar26._12_4_ = auVar24._12_4_ * auVar30._12_4_;
        auVar30 = vsubps_avx(auVar33,auVar26);
        auVar73 = ZEXT1664(auVar30);
        auVar24 = vsubps_avx(auVar23,auVar32);
        auVar32 = vshufps_avx(auVar24,auVar24,0xc9);
        auVar34._0_4_ = auVar27._0_4_ * auVar32._0_4_;
        auVar34._4_4_ = auVar27._4_4_ * auVar32._4_4_;
        auVar34._8_4_ = auVar27._8_4_ * auVar32._8_4_;
        auVar34._12_4_ = auVar27._12_4_ * auVar32._12_4_;
        auVar32 = vshufps_avx(auVar27,auVar27,0xc9);
        auVar27._0_4_ = auVar24._0_4_ * auVar32._0_4_;
        auVar27._4_4_ = auVar24._4_4_ * auVar32._4_4_;
        auVar27._8_4_ = auVar24._8_4_ * auVar32._8_4_;
        auVar27._12_4_ = auVar24._12_4_ * auVar32._12_4_;
        auVar24 = vsubps_avx(auVar34,auVar27);
        auVar76 = ZEXT1664(auVar24);
        auVar28._0_4_ = auVar30._0_4_ * auVar30._0_4_;
        auVar28._4_4_ = auVar30._4_4_ * auVar30._4_4_;
        auVar28._8_4_ = auVar30._8_4_ * auVar30._8_4_;
        auVar28._12_4_ = auVar30._12_4_ * auVar30._12_4_;
        auVar32 = vshufps_avx(auVar28,auVar28,0xc9);
        auVar27 = ZEXT816(0) << 0x20;
        auVar32 = vblendps_avx(auVar32,auVar27,8);
        auVar30 = vshufps_avx(auVar28,auVar27,0x4a);
        auVar29._0_4_ = auVar32._0_4_ + auVar30._0_4_;
        auVar29._4_4_ = auVar32._4_4_ + auVar30._4_4_;
        auVar29._8_4_ = auVar32._8_4_ + auVar30._8_4_;
        auVar29._12_4_ = auVar32._12_4_ + auVar30._12_4_;
        auVar32 = vshufpd_avx(auVar29,auVar29,1);
        auVar49._0_4_ = auVar29._0_4_ + auVar32._0_4_;
        auVar49._4_4_ = auVar29._4_4_ + auVar32._4_4_;
        auVar49._8_4_ = auVar29._8_4_ + auVar32._8_4_;
        auVar49._12_4_ = auVar29._12_4_ + auVar32._12_4_;
        auVar30._0_4_ = auVar24._0_4_ * auVar24._0_4_;
        auVar30._4_4_ = auVar24._4_4_ * auVar24._4_4_;
        auVar30._8_4_ = auVar24._8_4_ * auVar24._8_4_;
        auVar30._12_4_ = auVar24._12_4_ * auVar24._12_4_;
        auVar32 = vshufps_avx(auVar30,auVar30,0xc9);
        auVar32 = vblendps_avx(auVar32,auVar27,8);
        auVar30 = vshufps_avx(auVar30,auVar27,0x4a);
        auVar31._0_4_ = auVar32._0_4_ + auVar30._0_4_;
        auVar31._4_4_ = auVar32._4_4_ + auVar30._4_4_;
        auVar31._8_4_ = auVar32._8_4_ + auVar30._8_4_;
        auVar31._12_4_ = auVar32._12_4_ + auVar30._12_4_;
        auVar32 = vshufpd_avx(auVar31,auVar31,1);
        auVar41._0_4_ = auVar31._0_4_ + auVar32._0_4_;
        auVar41._4_4_ = auVar31._4_4_ + auVar32._4_4_;
        auVar41._8_4_ = auVar31._8_4_ + auVar32._8_4_;
        auVar41._12_4_ = auVar31._12_4_ + auVar32._12_4_;
        fVar22 = auVar49._0_4_ * auVar41._0_4_;
        if (1e-24 <= fVar22) {
          if (fVar22 < 0.0) {
            fVar22 = sqrtf(fVar22);
          }
          else {
            auVar32 = vsqrtss_avx(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
            fVar22 = auVar32._0_4_;
          }
          auVar27 = auVar55._0_16_;
          auVar34 = auVar74._0_16_;
          auVar29 = auVar62._0_16_;
          auVar26 = auVar56._0_16_;
          auVar40 = auVar75._0_16_;
          auVar28 = auVar58._0_16_;
          auVar33 = auVar73._0_16_;
          auVar30 = vshufps_avx(auVar33,auVar33,9);
          auVar38 = auVar76._0_16_;
          auVar24 = vshufps_avx(auVar38,auVar38,9);
          auVar35._0_4_ = auVar30._0_4_ * auVar24._0_4_;
          auVar35._4_4_ = auVar30._4_4_ * auVar24._4_4_;
          auVar35._8_4_ = auVar30._8_4_ * auVar24._8_4_;
          auVar35._12_4_ = auVar30._12_4_ * auVar24._12_4_;
          auVar32 = vinsertps_avx(auVar35,auVar35,0x4c);
          auVar36._0_4_ = auVar35._0_4_ + auVar32._0_4_;
          auVar36._4_4_ = auVar35._4_4_ + auVar32._4_4_;
          auVar36._8_4_ = auVar35._8_4_ + auVar32._8_4_;
          auVar36._12_4_ = auVar35._12_4_ + auVar32._12_4_;
          auVar32 = vshufpd_avx(auVar36,auVar36,1);
          auVar31 = ZEXT416((uint)((auVar36._0_4_ + auVar32._0_4_) / fVar22));
          auVar72 = ZEXT1664(auVar31);
          auVar32 = vandps_avx(auVar31,_DAT_140de34a0);
          auVar32 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar32);
          auVar69 = ZEXT1664(auVar32);
          fVar22 = 1.0 - auVar32._0_4_;
          if (fVar22 < 0.0) {
            fVar22 = sqrtf(fVar22);
            auVar27 = auVar55._0_16_;
            auVar34 = auVar74._0_16_;
            auVar29 = auVar62._0_16_;
            auVar38 = auVar76._0_16_;
            auVar26 = auVar56._0_16_;
            auVar40 = auVar75._0_16_;
            auVar31 = auVar72._0_16_;
            auVar32 = auVar69._0_16_;
            auVar28 = auVar58._0_16_;
            auVar33 = auVar73._0_16_;
          }
          else {
            auVar35 = vsqrtss_avx(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
            fVar22 = auVar35._0_4_;
          }
          auVar37._0_4_ = auVar38._0_4_ * auVar30._0_4_;
          auVar37._4_4_ = auVar38._4_4_ * auVar30._4_4_;
          auVar37._8_4_ = auVar38._8_4_ * auVar30._8_4_;
          auVar37._12_4_ = auVar38._12_4_ * auVar30._12_4_;
          auVar42._0_4_ = auVar33._0_4_ * auVar24._0_4_;
          auVar42._4_4_ = auVar33._4_4_ * auVar24._4_4_;
          auVar42._8_4_ = auVar33._8_4_ * auVar24._8_4_;
          auVar42._12_4_ = auVar33._12_4_ * auVar24._12_4_;
          auVar33 = vsubps_avx(auVar37,auVar42);
          auVar33 = vshufps_avx(auVar33,auVar33,0xd2);
          fVar57 = auVar28._0_4_;
          auVar38._0_4_ = fVar57 * auVar33._0_4_;
          fVar59 = auVar28._4_4_;
          auVar38._4_4_ = fVar59 * auVar33._4_4_;
          fVar60 = auVar28._8_4_;
          auVar38._8_4_ = fVar60 * auVar33._8_4_;
          fVar61 = auVar28._12_4_;
          auVar38._12_4_ = fVar61 * auVar33._12_4_;
          auVar28 = vinsertps_avx(auVar38,auVar38,0x4c);
          auVar39._0_4_ = auVar38._0_4_ + auVar28._0_4_;
          auVar39._4_4_ = auVar38._4_4_ + auVar28._4_4_;
          auVar39._8_4_ = auVar38._8_4_ + auVar28._8_4_;
          auVar39._12_4_ = auVar38._12_4_ + auVar28._12_4_;
          auVar28 = vshufpd_avx(auVar39,auVar39,1);
          auVar50._0_12_ = ZEXT812(0);
          auVar50._12_4_ = 0;
          auVar28 = vcmpss_avx(ZEXT416((uint)(auVar39._0_4_ + auVar28._0_4_)),auVar50,1);
          auVar43._8_4_ = 0x3f800000;
          auVar43._0_8_ = 0x3f8000003f800000;
          auVar43._12_4_ = 0x3f800000;
          auVar28 = vblendvps_avx(auVar43,_DAT_140de46e0,auVar28);
          auVar32 = vfmadd132ss_fma(auVar32,SUB6416(ZEXT464(0x3fc90fdb),0),ZEXT416(0xbe339a7c));
          fVar22 = auVar32._0_4_ * fVar22;
          auVar32 = vcmpss_avx(auVar31,auVar50,1);
          auVar32 = vblendvps_avx(ZEXT416((uint)fVar22),ZEXT416((uint)(3.1415927 - fVar22)),auVar32)
          ;
          auVar32 = vfmsub213ss_fma(auVar32,auVar28,ZEXT416(*puVar18));
          fVar22 = auVar32._0_4_;
          if (fVar22 <= 3.1415927) {
            if (fVar22 < -3.1415927) {
              fVar22 = fVar22 + 6.2831855;
            }
          }
          else {
            fVar22 = fVar22 + -6.2831855;
          }
          lVar20 = (ulonglong)uVar2 * 0x50 + lVar21;
          lVar19 = (ulonglong)uVar3 * 0x50 + lVar21;
          lVar17 = (ulonglong)uVar4 * 0x50 + lVar21;
          lVar21 = (ulonglong)uVar5 * 0x50 + lVar21;
          auVar32 = vshufps_avx(auVar49,auVar49,0);
          auVar30 = vdivps_avx(auVar30,auVar32);
          auVar32 = vshufps_avx(auVar41,auVar41,0);
          auVar24 = vdivps_avx(auVar24,auVar32);
          auVar44._0_4_ = fVar57 * auVar29._0_4_;
          auVar44._4_4_ = fVar59 * auVar29._4_4_;
          auVar44._8_4_ = fVar60 * auVar29._8_4_;
          auVar44._12_4_ = fVar61 * auVar29._12_4_;
          auVar33 = ZEXT816(0) << 0x40;
          auVar32 = vblendps_avx(auVar44,auVar33,8);
          auVar28 = vinsertps_avx(auVar44,auVar44,0x4c);
          auVar45._0_4_ = auVar32._0_4_ + auVar28._0_4_;
          auVar45._4_4_ = auVar32._4_4_ + auVar28._4_4_;
          auVar45._8_4_ = auVar32._8_4_ + auVar28._8_4_;
          auVar45._12_4_ = auVar32._12_4_ + auVar28._12_4_;
          auVar29 = vshufps_avx(auVar45,auVar45,0);
          auVar31 = vshufps_avx(auVar45,auVar45,0xaa);
          auVar51._0_4_ = fVar57 * auVar40._0_4_;
          auVar51._4_4_ = fVar59 * auVar40._4_4_;
          auVar51._8_4_ = fVar60 * auVar40._8_4_;
          auVar51._12_4_ = fVar61 * auVar40._12_4_;
          auVar32 = vblendps_avx(auVar51,auVar33,8);
          auVar28 = vinsertps_avx(auVar51,auVar51,0x4c);
          auVar52._0_4_ = auVar32._0_4_ + auVar28._0_4_;
          auVar52._4_4_ = auVar32._4_4_ + auVar28._4_4_;
          auVar52._8_4_ = auVar32._8_4_ + auVar28._8_4_;
          auVar52._12_4_ = auVar32._12_4_ + auVar28._12_4_;
          auVar32 = vshufps_avx(auVar52,auVar52,0);
          auVar28 = vshufps_avx(auVar52,auVar52,0xaa);
          auVar46._0_4_ =
               (auVar29._0_4_ + auVar31._0_4_) * auVar30._0_4_ +
               (auVar32._0_4_ + auVar28._0_4_) * auVar24._0_4_;
          auVar46._4_4_ =
               (auVar29._4_4_ + auVar31._4_4_) * auVar30._4_4_ +
               (auVar32._4_4_ + auVar28._4_4_) * auVar24._4_4_;
          auVar46._8_4_ =
               (auVar29._8_4_ + auVar31._8_4_) * auVar30._8_4_ +
               (auVar32._8_4_ + auVar28._8_4_) * auVar24._8_4_;
          auVar46._12_4_ =
               (auVar29._12_4_ + auVar31._12_4_) * auVar30._12_4_ +
               (auVar32._12_4_ + auVar28._12_4_) * auVar24._12_4_;
          auVar26 = vshufps_avx(auVar26,auVar26,0);
          auVar32 = vdivps_avx(auVar46,auVar26);
          auVar47._0_4_ = auVar26._0_4_ * auVar30._0_4_;
          auVar47._4_4_ = auVar26._4_4_ * auVar30._4_4_;
          auVar47._8_4_ = auVar26._8_4_ * auVar30._8_4_;
          auVar47._12_4_ = auVar26._12_4_ * auVar30._12_4_;
          auVar40._0_4_ = auVar26._0_4_ * auVar24._0_4_;
          auVar40._4_4_ = auVar26._4_4_ * auVar24._4_4_;
          auVar40._8_4_ = auVar26._8_4_ * auVar24._8_4_;
          auVar40._12_4_ = auVar26._12_4_ * auVar24._12_4_;
          auVar30 = vsubps_avx(auVar33,auVar32);
          auVar30 = vsubps_avx(auVar30,auVar47);
          auVar24 = vsubps_avx(auVar30,auVar40);
          fVar57 = *(float *)(lVar20 + 0x4c);
          fVar59 = *(float *)(lVar19 + 0x4c);
          fVar60 = *(float *)(lVar17 + 0x4c);
          fVar61 = *(float *)(lVar21 + 0x4c);
          fVar8 = auVar32._0_4_;
          auVar63._0_4_ = fVar8 * fVar8;
          fVar10 = auVar32._4_4_;
          auVar63._4_4_ = fVar10 * fVar10;
          fVar12 = auVar32._8_4_;
          auVar63._8_4_ = fVar12 * fVar12;
          fVar14 = auVar32._12_4_;
          auVar63._12_4_ = fVar14 * fVar14;
          auVar32 = vinsertps_avx(auVar63,auVar63,0x4c);
          auVar64._0_4_ = auVar63._0_4_ + auVar32._0_4_;
          auVar64._4_4_ = auVar63._4_4_ + auVar32._4_4_;
          auVar64._8_4_ = auVar63._8_4_ + auVar32._8_4_;
          auVar64._12_4_ = auVar63._12_4_ + auVar32._12_4_;
          auVar30 = vshufpd_avx(auVar64,auVar64,1);
          fVar9 = auVar24._0_4_;
          auVar70._0_4_ = fVar9 * fVar9;
          fVar11 = auVar24._4_4_;
          auVar70._4_4_ = fVar11 * fVar11;
          fVar13 = auVar24._8_4_;
          auVar70._8_4_ = fVar13 * fVar13;
          fVar15 = auVar24._12_4_;
          auVar70._12_4_ = fVar15 * fVar15;
          auVar32 = vinsertps_avx(auVar70,auVar70,0x4c);
          auVar71._0_4_ = auVar70._0_4_ + auVar32._0_4_;
          auVar71._4_4_ = auVar70._4_4_ + auVar32._4_4_;
          auVar71._8_4_ = auVar70._8_4_ + auVar32._8_4_;
          auVar71._12_4_ = auVar70._12_4_ + auVar32._12_4_;
          auVar32 = vshufpd_avx(auVar71,auVar71,1);
          auVar30 = vfmadd231ss_fma(ZEXT416((uint)((auVar71._0_4_ + auVar32._0_4_) * fVar59)),
                                    ZEXT416((uint)fVar57),
                                    ZEXT416((uint)(auVar64._0_4_ + auVar30._0_4_)));
          auVar65._0_4_ = auVar47._0_4_ * auVar47._0_4_;
          auVar65._4_4_ = auVar47._4_4_ * auVar47._4_4_;
          auVar65._8_4_ = auVar47._8_4_ * auVar47._8_4_;
          auVar65._12_4_ = auVar47._12_4_ * auVar47._12_4_;
          auVar32 = vinsertps_avx(auVar65,auVar65,0x4c);
          auVar66._0_4_ = auVar65._0_4_ + auVar32._0_4_;
          auVar66._4_4_ = auVar65._4_4_ + auVar32._4_4_;
          auVar66._8_4_ = auVar65._8_4_ + auVar32._8_4_;
          auVar66._12_4_ = auVar65._12_4_ + auVar32._12_4_;
          auVar32 = vshufpd_avx(auVar66,auVar66,1);
          auVar30 = vfmadd213ss_fma(ZEXT416((uint)(auVar66._0_4_ + auVar32._0_4_)),
                                    ZEXT416((uint)fVar60),auVar30);
          auVar67._0_4_ = auVar40._0_4_ * auVar40._0_4_;
          auVar67._4_4_ = auVar40._4_4_ * auVar40._4_4_;
          auVar67._8_4_ = auVar40._8_4_ * auVar40._8_4_;
          auVar67._12_4_ = auVar40._12_4_ * auVar40._12_4_;
          auVar32 = vinsertps_avx(auVar67,auVar67,0x4c);
          auVar68._0_4_ = auVar67._0_4_ + auVar32._0_4_;
          auVar68._4_4_ = auVar67._4_4_ + auVar32._4_4_;
          auVar68._8_4_ = auVar67._8_4_ + auVar32._8_4_;
          auVar68._12_4_ = auVar67._12_4_ + auVar32._12_4_;
          auVar32 = vshufpd_avx(auVar68,auVar68,1);
          auVar32 = vfmadd213ss_fma(ZEXT416((uint)(auVar68._0_4_ + auVar32._0_4_)),
                                    ZEXT416((uint)fVar61),auVar30);
          auVar32 = vfmadd231ss_fma(auVar32,ZEXT416((uint)(1.0 / (fVar1 * fVar1))),
                                    ZEXT416(puVar18[-1]));
          if (1e-12 <= auVar32._0_4_) {
            fVar22 = fVar22 / auVar32._0_4_;
            auVar32 = ZEXT416((uint)(fVar57 * fVar22));
            auVar32 = vshufps_avx(auVar32,auVar32,0);
            auVar53._0_4_ = auVar32._0_4_ * fVar8;
            auVar53._4_4_ = auVar32._4_4_ * fVar10;
            auVar53._8_4_ = auVar32._8_4_ * fVar12;
            auVar53._12_4_ = auVar32._12_4_ * fVar14;
            auVar32 = vsubps_avx(auVar34,auVar53);
            *(undefined1 (*) [16])(lVar20 + 0x10) = auVar32;
            auVar32 = ZEXT416((uint)(fVar59 * fVar22));
            auVar32 = vshufps_avx(auVar32,auVar32,0);
            auVar54._0_4_ = fVar9 * auVar32._0_4_;
            auVar54._4_4_ = fVar11 * auVar32._4_4_;
            auVar54._8_4_ = fVar13 * auVar32._8_4_;
            auVar54._12_4_ = fVar15 * auVar32._12_4_;
            auVar32 = vsubps_avx(auVar27,auVar54);
            *(undefined1 (*) [16])(lVar19 + 0x10) = auVar32;
            auVar32 = ZEXT416((uint)(fVar60 * fVar22));
            auVar32 = vshufps_avx(auVar32,auVar32,0);
            auVar48._0_4_ = auVar47._0_4_ * auVar32._0_4_;
            auVar48._4_4_ = auVar47._4_4_ * auVar32._4_4_;
            auVar48._8_4_ = auVar47._8_4_ * auVar32._8_4_;
            auVar48._12_4_ = auVar47._12_4_ * auVar32._12_4_;
            auVar32 = vsubps_avx(auVar25,auVar48);
            *(undefined1 (*) [16])(lVar17 + 0x10) = auVar32;
            auVar32 = ZEXT416((uint)(fVar61 * fVar22));
            auVar32 = vshufps_avx(auVar32,auVar32,0);
            auVar25._0_4_ = auVar40._0_4_ * auVar32._0_4_;
            auVar25._4_4_ = auVar40._4_4_ * auVar32._4_4_;
            auVar25._8_4_ = auVar40._8_4_ * auVar32._8_4_;
            auVar25._12_4_ = auVar40._12_4_ * auVar32._12_4_;
            auVar32 = vsubps_avx(auVar23,auVar25);
            *(undefined1 (*) [16])(lVar21 + 0x10) = auVar32;
          }
        }
      }
      puVar16 = puVar18 + 1;
      puVar18 = puVar18 + 6;
    } while (puVar16 < (uint *)(lVar6 + (ulonglong)param_4 * 0x18));
  }
  if (local_168 != (undefined1 (*) [16])0x0) {
    uVar7 = rdtsc();
    auVar32._8_8_ = uStack_130;
    auVar32._0_8_ = local_138;
    auVar30 = vpinsrq_avx(auVar32,uVar7 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)puVar16 >> 0x20),(int)uVar7),1);
    auVar32 = vmovntdq_avx(SUB6416(ZEXT864(0x141395241),0));
    *local_168 = auVar32;
    auVar32 = vmovntdq_avx(auVar30);
    local_168[1] = auVar32;
  }
  return;
}

