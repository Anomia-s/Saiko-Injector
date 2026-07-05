/**
 * Function: static_void_jph_compoundshape_scastcompoundvs
 * Address:  1402dd9c0
 * Signature: undefined static_void_jph_compoundshape_scastcompoundvs(void)
 * Body size: 1797 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_compoundshape_scastcompoundvs
               (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
               longlong *param_5,undefined8 param_6,undefined8 *param_7,longlong *param_8,
               longlong param_9)

{
  float *pfVar1;
  longlong *plVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  char cVar13;
  longlong lVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  float fVar35;
  float fVar41;
  float fVar42;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  longlong lVar46;
  undefined1 auVar47 [16];
  longlong lVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [64];
  undefined8 uVar57;
  undefined8 uVar59;
  undefined1 auVar58 [64];
  undefined1 auStack_298 [32];
  longlong *local_278;
  undefined8 local_270;
  uint *local_268;
  longlong *local_260;
  longlong local_258;
  undefined1 (*local_248) [16];
  undefined8 local_240;
  ulonglong local_238;
  ulonglong local_230;
  longlong local_228;
  undefined8 *local_220;
  ulonglong local_218;
  undefined8 uStack_210;
  uint local_200;
  int local_1fc;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8 [2];
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_298;
  local_240 = param_2;
  local_220 = param_4;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar14 != 0) {
    uVar18 = *(uint *)(lVar14 + 0x200020);
    if ((ulonglong)uVar18 < 0x10000) {
      *(uint *)(lVar14 + 0x200020) = uVar18 + 1;
      local_248 = (undefined1 (*) [16])(lVar14 + (ulonglong)uVar18 * 0x20 + 0x20);
      uVar3 = rdtsc();
      local_218 = uVar3 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)local_248 >> 0x20),(int)uVar3);
      uStack_210 = 0;
      goto LAB_1402ddaf6;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_248 = (undefined1 (*) [16])0x0;
LAB_1402ddaf6:
  local_228 = *param_1;
  uVar18 = (uint)*(undefined8 *)(local_228 + 0x50);
  lVar14 = local_228;
  if (0 < (int)uVar18) {
    uVar16 = 0x20 - LZCOUNT(uVar18 - 1);
    local_230 = (ulonglong)uVar16;
    local_238 = (ulonglong)~(uint)(-1L << ((byte)uVar16 & 0x3f));
    lVar19 = 0x24;
    lVar17 = 0;
    auVar50 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
    auVar51 = ZEXT1264(ZEXT812(0));
    auVar52 = ZEXT464(0xff7fffff);
    auVar56 = ZEXT464(0x3f800000);
    do {
      uVar57 = *param_7;
      bVar15 = (byte)((ulonglong)uVar57 >> 0x20);
      lVar14 = *(longlong *)(local_228 + 0x60);
      local_200 = (int)lVar17 << (bVar15 & 0x1f) |
                  ~((int)local_238 << (bVar15 & 0x1f)) & (uint)uVar57;
      local_1fc = (int)((ulonglong)uVar57 >> 0x20) + (int)local_230;
      auVar28 = _DAT_140de0210;
      if (*(char *)(lVar14 + lVar19) == '\0') {
        auVar28 = *(undefined1 (*) [16])(lVar14 + -0x10 + lVar19);
        auVar26._0_4_ = auVar28._0_4_ * auVar28._0_4_;
        auVar26._4_4_ = auVar28._4_4_ * auVar28._4_4_;
        auVar26._8_4_ = auVar28._8_4_ * auVar28._8_4_;
        auVar26._12_4_ = auVar28._12_4_ * auVar28._12_4_;
        auVar40 = vinsertps_avx(auVar26,auVar26,0x4c);
        auVar27._0_4_ = auVar26._0_4_ + auVar40._0_4_;
        auVar27._4_4_ = auVar26._4_4_ + auVar40._4_4_;
        auVar27._8_4_ = auVar26._8_4_ + auVar40._8_4_;
        auVar27._12_4_ = auVar26._12_4_ + auVar40._12_4_;
        auVar40 = vshufpd_avx(auVar27,auVar27,1);
        auVar40 = vmaxss_avx(ZEXT816(0) << 0x20,
                             ZEXT416((uint)(auVar56._0_4_ - (auVar27._0_4_ + auVar40._0_4_))));
        auVar40 = vsqrtss_avx(auVar40,auVar40);
        auVar28 = vinsertps_avx(auVar28,auVar40,0x30);
      }
      auVar40 = *(undefined1 (*) [16])(param_1 + 2);
      auVar58 = ZEXT1664(auVar40);
      pfVar1 = (float *)(lVar14 + -0x1c + lVar19);
      auVar21._0_4_ = auVar40._0_4_ * *pfVar1;
      auVar21._4_4_ = auVar40._4_4_ * pfVar1[1];
      auVar21._8_4_ = auVar40._8_4_ * pfVar1[2];
      auVar21._12_4_ = auVar40._12_4_ * pfVar1[3];
      fVar35 = auVar28._0_4_;
      auVar36._0_4_ = fVar35 + fVar35;
      fVar41 = auVar28._4_4_;
      auVar36._4_4_ = fVar41 + fVar41;
      fVar42 = auVar28._8_4_;
      auVar36._8_4_ = fVar42 + fVar42;
      fVar43 = auVar28._12_4_;
      auVar36._12_4_ = fVar43 + fVar43;
      auVar26 = vshufps_avx(auVar36,auVar36,0xc9);
      auVar27 = vshufps_avx(auVar28,auVar28,0xd2);
      auVar22 = vshufps_avx(auVar36,auVar36,0xd2);
      auVar28 = vshufps_avx(auVar28,auVar28,0xff);
      auVar44._0_4_ = auVar22._0_4_ * auVar27._0_4_;
      auVar44._4_4_ = auVar22._4_4_ * auVar27._4_4_;
      auVar44._8_4_ = auVar22._8_4_ * auVar27._8_4_;
      auVar44._12_4_ = auVar22._12_4_ * auVar27._12_4_;
      auVar53._0_4_ = fVar35 * auVar36._0_4_;
      auVar53._4_4_ = fVar41 * auVar36._4_4_;
      auVar53._8_4_ = fVar42 * auVar36._8_4_;
      auVar53._12_4_ = fVar43 * auVar36._12_4_;
      auVar37 = vshufps_avx(auVar53,auVar53,0xc9);
      auVar37 = vsubps_avx(auVar50._0_16_,auVar37);
      auVar44 = vsubps_avx(auVar37,auVar44);
      auVar54._0_4_ = auVar28._0_4_ * auVar26._0_4_ + auVar36._0_4_ * auVar27._0_4_;
      auVar54._4_4_ = auVar28._4_4_ * auVar26._4_4_ + auVar36._4_4_ * auVar27._4_4_;
      auVar54._8_4_ = auVar28._8_4_ * auVar26._8_4_ + auVar36._8_4_ * auVar27._8_4_;
      auVar54._12_4_ = auVar28._12_4_ * auVar26._12_4_ + auVar36._12_4_ * auVar27._12_4_;
      auVar37._0_4_ = auVar22._0_4_ * auVar28._0_4_;
      auVar37._4_4_ = auVar22._4_4_ * auVar28._4_4_;
      auVar37._8_4_ = auVar22._8_4_ * auVar28._8_4_;
      auVar37._12_4_ = auVar22._12_4_ * auVar28._12_4_;
      auVar28._0_4_ = fVar35 * auVar26._0_4_;
      auVar28._4_4_ = fVar41 * auVar26._4_4_;
      auVar28._8_4_ = fVar42 * auVar26._8_4_;
      auVar28._12_4_ = fVar43 * auVar26._12_4_;
      auVar36 = vsubps_avx(auVar28,auVar37);
      fVar4 = *(float *)(param_1 + 4);
      fVar5 = *(float *)((longlong)param_1 + 0x24);
      fVar6 = *(float *)(param_1 + 5);
      fVar7 = *(float *)((longlong)param_1 + 0x2c);
      fVar8 = *(float *)(param_1 + 6);
      fVar9 = *(float *)((longlong)param_1 + 0x34);
      fVar10 = *(float *)(param_1 + 7);
      fVar11 = *(float *)((longlong)param_1 + 0x3c);
      auVar28 = *(undefined1 (*) [16])(param_1 + 8);
      auVar26 = *(undefined1 (*) [16])(param_1 + 10);
      auVar27 = vshufps_avx(auVar44,auVar44,0);
      auVar22 = vshufps_avx(auVar54,auVar54,0x55);
      auVar37 = vshufps_avx(auVar36,auVar36,0xaa);
      fVar35 = auVar28._0_4_;
      fVar41 = auVar28._4_4_;
      fVar42 = auVar28._8_4_;
      fVar43 = auVar28._12_4_;
      local_118 = auVar51._0_4_ * auVar26._0_4_;
      fStack_114 = auVar51._4_4_ * auVar26._4_4_;
      fStack_110 = auVar51._8_4_ * auVar26._8_4_;
      fStack_10c = auVar51._12_4_ * auVar26._12_4_;
      local_138 = auVar27._0_4_ * fVar4 + auVar22._0_4_ * fVar8 + auVar37._0_4_ * fVar35 + local_118
      ;
      fStack_134 = auVar27._4_4_ * fVar5 + auVar22._4_4_ * fVar9 + auVar37._4_4_ * fVar41 +
                   fStack_114;
      fStack_130 = auVar27._8_4_ * fVar6 + auVar22._8_4_ * fVar10 + auVar37._8_4_ * fVar42 +
                   fStack_110;
      fStack_12c = auVar27._12_4_ * fVar7 + auVar22._12_4_ * fVar11 + auVar37._12_4_ * fVar43 +
                   fStack_10c;
      auVar28 = vshufps_avx(auVar36,auVar36,0);
      auVar27 = vshufps_avx(auVar44,auVar44,0x55);
      auVar22 = vshufps_avx(auVar54,auVar54,0xaa);
      fStack_128 = local_118 +
                   auVar22._0_4_ * fVar35 + auVar28._0_4_ * fVar4 + auVar27._0_4_ * fVar8;
      fStack_124 = fStack_114 +
                   auVar22._4_4_ * fVar41 + auVar28._4_4_ * fVar5 + auVar27._4_4_ * fVar9;
      fStack_120 = fStack_110 +
                   auVar22._8_4_ * fVar42 + auVar28._8_4_ * fVar6 + auVar27._8_4_ * fVar10;
      fStack_11c = fStack_10c +
                   auVar22._12_4_ * fVar43 + auVar28._12_4_ * fVar7 + auVar27._12_4_ * fVar11;
      auVar28 = vshufps_avx(auVar54,auVar54,0);
      auVar27 = vshufps_avx(auVar36,auVar36,0x55);
      auVar22 = vshufps_avx(auVar44,auVar44,0xaa);
      local_118 = local_118 + fVar4 * auVar28._0_4_ + auVar27._0_4_ * fVar8 + auVar22._0_4_ * fVar35
      ;
      fStack_114 = fStack_114 +
                   fVar5 * auVar28._4_4_ + auVar27._4_4_ * fVar9 + auVar22._4_4_ * fVar41;
      fStack_110 = fStack_110 +
                   fVar6 * auVar28._8_4_ + auVar27._8_4_ * fVar10 + auVar22._8_4_ * fVar42;
      fStack_10c = fStack_10c +
                   fVar7 * auVar28._12_4_ + auVar27._12_4_ * fVar11 + auVar22._12_4_ * fVar43;
      auVar28 = vshufps_avx(auVar21,auVar21,0);
      auVar27 = vshufps_avx(auVar21,auVar21,0x55);
      auVar22 = vshufps_avx(auVar21,auVar21,0xaa);
      auStack_108._0_4_ =
           fVar4 * auVar28._0_4_ + auVar27._0_4_ * fVar8 + auVar22._0_4_ * fVar35 + auVar26._0_4_;
      auStack_108._4_4_ =
           fVar5 * auVar28._4_4_ + auVar27._4_4_ * fVar9 + auVar22._4_4_ * fVar41 + auVar26._4_4_;
      auStack_108._8_4_ =
           fVar6 * auVar28._8_4_ + auVar27._8_4_ * fVar10 + auVar22._8_4_ * fVar42 + auVar26._8_4_;
      auStack_108._12_4_ =
           fVar7 * auVar28._12_4_ + auVar27._12_4_ * fVar11 + auVar22._12_4_ * fVar43 +
           auVar26._12_4_;
      if (*(char *)(lVar14 + lVar19) == '\0') {
        auVar28 = vshufps_avx(auVar40,auVar40,9);
        auVar28 = vsubps_avx(auVar40,auVar28);
        auVar22._0_4_ = auVar28._0_4_ * auVar28._0_4_;
        auVar22._4_4_ = auVar28._4_4_ * auVar28._4_4_;
        auVar22._8_4_ = auVar28._8_4_ * auVar28._8_4_;
        auVar22._12_4_ = auVar28._12_4_ * auVar28._12_4_;
        auVar28 = vinsertps_avx(auVar22,auVar22,0x4c);
        auVar23._0_4_ = auVar22._0_4_ + auVar28._0_4_;
        auVar23._4_4_ = auVar22._4_4_ + auVar28._4_4_;
        auVar23._8_4_ = auVar22._8_4_ + auVar28._8_4_;
        auVar23._12_4_ = auVar22._12_4_ + auVar28._12_4_;
        auVar28 = vshufpd_avx(auVar23,auVar23,1);
        if (1e-08 < auVar23._0_4_ + auVar28._0_4_) {
          auVar28 = *(undefined1 (*) [16])(lVar14 + -0x10 + lVar19);
          auVar29._0_4_ = auVar28._0_4_ * auVar28._0_4_;
          auVar29._4_4_ = auVar28._4_4_ * auVar28._4_4_;
          auVar29._8_4_ = auVar28._8_4_ * auVar28._8_4_;
          auVar29._12_4_ = auVar28._12_4_ * auVar28._12_4_;
          auVar26 = vinsertps_avx(auVar29,auVar29,0x4c);
          auVar30._0_4_ = auVar29._0_4_ + auVar26._0_4_;
          auVar30._4_4_ = auVar29._4_4_ + auVar26._4_4_;
          auVar30._8_4_ = auVar29._8_4_ + auVar26._8_4_;
          auVar30._12_4_ = auVar29._12_4_ + auVar26._12_4_;
          auVar26 = vshufpd_avx(auVar30,auVar30,1);
          auVar26 = vmaxss_avx(ZEXT816(0) << 0x20,
                               ZEXT416((uint)(auVar56._0_4_ - (auVar30._0_4_ + auVar26._0_4_))));
          auVar22 = vsqrtss_avx(auVar26,auVar26);
          auVar28 = vinsertps_avx(auVar28,auVar22,0x30);
          fVar35 = auVar28._0_4_;
          auVar38._0_4_ = fVar35 + fVar35;
          fVar41 = auVar28._4_4_;
          auVar38._4_4_ = fVar41 + fVar41;
          fVar42 = auVar28._8_4_;
          auVar38._8_4_ = fVar42 + fVar42;
          fVar43 = auVar28._12_4_;
          auVar38._12_4_ = fVar43 + fVar43;
          auVar26 = vshufps_avx(auVar38,auVar38,0xc9);
          auVar28 = vshufps_avx(auVar28,auVar28,0xd2);
          auVar27 = vshufps_avx(auVar38,auVar38,0xd2);
          auVar22 = vshufps_avx(auVar22,auVar22,0);
          auVar47._0_4_ = auVar28._0_4_ * auVar27._0_4_;
          auVar47._4_4_ = auVar28._4_4_ * auVar27._4_4_;
          auVar47._8_4_ = auVar28._8_4_ * auVar27._8_4_;
          auVar47._12_4_ = auVar28._12_4_ * auVar27._12_4_;
          auVar49._0_4_ = fVar35 * auVar38._0_4_;
          auVar49._4_4_ = fVar41 * auVar38._4_4_;
          auVar49._8_4_ = fVar42 * auVar38._8_4_;
          auVar49._12_4_ = fVar43 * auVar38._12_4_;
          auVar37 = vshufps_avx(auVar49,auVar49,0xc9);
          auVar37 = vsubps_avx(auVar50._0_16_,auVar37);
          auVar36 = vsubps_avx(auVar37,auVar47);
          auVar39._0_4_ = auVar38._0_4_ * auVar28._0_4_ + auVar22._0_4_ * auVar26._0_4_;
          auVar39._4_4_ = auVar38._4_4_ * auVar28._4_4_ + auVar22._4_4_ * auVar26._4_4_;
          auVar39._8_4_ = auVar38._8_4_ * auVar28._8_4_ + auVar22._8_4_ * auVar26._8_4_;
          auVar39._12_4_ = auVar38._12_4_ * auVar28._12_4_ + auVar22._12_4_ * auVar26._12_4_;
          auVar31._0_4_ = auVar22._0_4_ * auVar27._0_4_;
          auVar31._4_4_ = auVar22._4_4_ * auVar27._4_4_;
          auVar31._8_4_ = auVar22._8_4_ * auVar27._8_4_;
          auVar31._12_4_ = auVar22._12_4_ * auVar27._12_4_;
          auVar24._0_4_ = fVar35 * auVar26._0_4_;
          auVar24._4_4_ = fVar41 * auVar26._4_4_;
          auVar24._8_4_ = fVar42 * auVar26._8_4_;
          auVar24._12_4_ = fVar43 * auVar26._12_4_;
          auVar21 = vsubps_avx(auVar24,auVar31);
          auVar28 = vblendps_avx(auVar21,auVar51._0_16_,8);
          auVar26 = vblendps_avx(auVar36,auVar39,2);
          auVar28 = vblendps_avx(auVar28,auVar26,3);
          auVar37 = vinsertps_avx(auVar21,auVar36,0x58);
          auVar27 = vblendps_avx(auVar37,auVar39,4);
          auVar44 = vinsertps_avx(auVar21,auVar39,8);
          auVar22 = vblendps_avx(auVar44,auVar36,4);
          auVar40 = vinsertps_avx(auVar40,auVar56._0_16_,0x30);
          fVar35 = auVar40._0_4_;
          auVar55._0_4_ = fVar35 * auVar22._0_4_;
          fVar41 = auVar40._4_4_;
          auVar55._4_4_ = fVar41 * auVar22._4_4_;
          fVar42 = auVar40._8_4_;
          auVar55._8_4_ = fVar42 * auVar22._8_4_;
          fVar43 = auVar40._12_4_;
          auVar55._12_4_ = fVar43 * auVar22._12_4_;
          auVar45._0_4_ = fVar35 * auVar27._0_4_;
          auVar45._4_4_ = fVar41 * auVar27._4_4_;
          auVar45._8_4_ = fVar42 * auVar27._8_4_;
          auVar45._12_4_ = fVar43 * auVar27._12_4_;
          auVar32._0_4_ = fVar35 * auVar28._0_4_;
          auVar32._4_4_ = fVar41 * auVar28._4_4_;
          auVar32._8_4_ = fVar42 * auVar28._8_4_;
          auVar32._12_4_ = fVar43 * auVar28._12_4_;
          auVar28 = vmovlhps_avx(auVar26,auVar37);
          auVar22 = vunpckhpd_avx(auVar21,auVar39);
          auVar27 = vunpckhpd_avx(auVar36,auVar51._0_16_);
          auVar40._8_8_ = 0;
          auVar40._0_8_ = auVar44._0_8_;
          auVar26 = vshufps_avx(auVar28,auVar40,0x88);
          auVar40 = vshufps_avx(auVar28,auVar40,0xdd);
          auVar27 = vshufps_avx(auVar22,auVar27,0x88);
          auVar28 = vmovshdup_avx(auVar32);
          fVar35 = auVar40._0_4_;
          fVar41 = auVar40._4_4_;
          fVar42 = auVar40._8_4_;
          fVar43 = auVar40._12_4_;
          auVar40 = vshufpd_avx(auVar32,auVar32,1);
          auVar25._0_4_ =
               auVar22._0_4_ * auVar40._0_4_ +
               auVar32._0_4_ * auVar36._0_4_ + fVar35 * auVar28._0_4_;
          auVar25._4_4_ =
               auVar22._4_4_ * auVar40._4_4_ +
               auVar32._4_4_ * auVar36._4_4_ + fVar41 * auVar28._4_4_;
          auVar25._8_4_ =
               auVar22._8_4_ * auVar40._8_4_ +
               auVar32._8_4_ * auVar36._8_4_ + fVar42 * auVar28._8_4_;
          auVar25._12_4_ =
               auVar22._12_4_ * auVar40._12_4_ +
               auVar32._12_4_ * auVar36._12_4_ + fVar43 * auVar28._12_4_;
          auVar28 = vmovsldup_avx(auVar45);
          auVar40 = vshufps_avx(auVar45,auVar45,0xaa);
          auVar33._0_4_ =
               auVar27._0_4_ * auVar40._0_4_ +
               auVar26._0_4_ * auVar28._0_4_ + auVar45._0_4_ * fVar35;
          auVar33._4_4_ =
               auVar27._4_4_ * auVar40._4_4_ +
               auVar26._4_4_ * auVar28._4_4_ + auVar45._4_4_ * fVar41;
          auVar33._8_4_ =
               auVar27._8_4_ * auVar40._8_4_ +
               auVar26._8_4_ * auVar28._8_4_ + auVar45._8_4_ * fVar42;
          auVar33._12_4_ =
               auVar27._12_4_ * auVar40._12_4_ +
               auVar26._12_4_ * auVar28._12_4_ + auVar45._12_4_ * fVar43;
          auVar28 = vblendps_avx(auVar25,auVar33,2);
          auVar40 = vshufps_avx(auVar55,auVar55,0x55);
          auVar34._0_4_ =
               auVar55._0_4_ * auVar27._0_4_ +
               auVar26._0_4_ * auVar55._0_4_ + fVar35 * auVar40._0_4_;
          auVar34._4_4_ =
               auVar55._4_4_ * auVar27._4_4_ +
               auVar26._4_4_ * auVar55._4_4_ + fVar41 * auVar40._4_4_;
          auVar34._8_4_ =
               auVar55._8_4_ * auVar27._8_4_ +
               auVar26._8_4_ * auVar55._0_4_ + fVar42 * auVar40._8_4_;
          auVar34._12_4_ =
               auVar55._12_4_ * auVar27._12_4_ +
               auVar26._12_4_ * auVar55._4_4_ + fVar43 * auVar40._12_4_;
          auVar28 = vshufps_avx(auVar28,auVar34,0xa4);
          auVar58 = ZEXT1664(auVar28);
        }
      }
      lVar46 = param_1[0xc];
      lVar48 = param_1[0xd];
      plVar2 = *(longlong **)(lVar14 + -0x24 + lVar19);
      local_1f8 = auVar58._0_16_;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_1e8,&local_138,local_1f8);
      local_1b8 = auVar58._0_16_;
      local_1a8 = CONCAT44(fStack_134,local_138);
      uStack_1a0 = CONCAT44(fStack_12c,fStack_130);
      uStack_198 = CONCAT44(fStack_124,fStack_128);
      uStack_190 = CONCAT44(fStack_11c,fStack_120);
      local_188 = CONCAT44(fStack_114,local_118);
      uStack_180 = CONCAT44(fStack_10c,fStack_110);
      uStack_178 = auStack_108._0_8_;
      uStack_170 = auStack_108._8_8_;
      local_158 = local_1e8;
      uStack_150 = uStack_1e0;
      uStack_148 = uStack_1d8;
      uStack_140 = uStack_1d0;
      uVar57 = *local_220;
      uVar59 = local_220[1];
      local_278 = param_8;
      auVar50 = ZEXT1664(auVar50._0_16_);
      auVar51 = ZEXT1664(auVar51._0_16_);
      auVar52 = ZEXT1664(auVar52._0_16_);
      auVar56 = ZEXT1664(auVar56._0_16_);
      local_1c8[0] = plVar2;
      local_168 = lVar46;
      lStack_160 = lVar48;
      cVar13 = (**(code **)(*param_5 + 8))(param_5,plVar2,&local_200,param_3);
      if (cVar13 != '\0') {
        local_258 = param_9;
        local_260 = param_8;
        local_268 = &local_200;
        local_270 = param_6;
        local_278 = param_5;
        local_1e8 = uVar57;
        uStack_1e0 = uVar59;
        (*(code *)(&DAT_1416bd1d0)
                  [(ulonglong)*(byte *)((longlong)local_1c8[0] + 0x19) * 0x22 +
                   (ulonglong)*(byte *)(param_3 + 0x19)])(local_1c8,local_240,param_3,&local_1e8);
      }
      lVar14 = param_9;
      if (*(float *)(param_9 + 8) <= auVar52._0_4_) break;
      lVar19 = lVar19 + 0x28;
      bVar20 = (ulonglong)(uVar18 & 0x7fffffff) - 1 != lVar17;
      lVar17 = lVar17 + 1;
    } while (bVar20);
  }
  if (local_248 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar12._8_8_ = uStack_210;
    auVar12._0_8_ = local_218;
    auVar40 = vpinsrq_avx(auVar12,uVar3 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)lVar14 >> 0x20),(int)uVar3),1);
    auVar28 = vmovntdq_avx(SUB6416(ZEXT864(0x14139ab4f),0));
    *local_248 = auVar28;
    auVar28 = vmovntdq_avx(auVar40);
    local_248[1] = auVar28;
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_298)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_298);
}

