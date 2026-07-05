/**
 * Function: virtual_void_jph_staticcompoundshape_castrayc
 * Address:  1402e8720
 * Signature: undefined virtual_void_jph_staticcompoundshape_castrayc(void)
 * Body size: 2196 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void virtual_void_jph_staticcompoundshape_castrayc
               (longlong param_1,float *param_2,undefined2 *param_3,undefined8 *param_4,
               longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
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
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  byte bVar24;
  undefined1 auVar25 [16];
  char cVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  float *pfVar31;
  uint uVar32;
  longlong lVar33;
  undefined1 (*pauVar34) [16];
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
  undefined1 in_ZMM6 [64];
  undefined1 auVar51 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [64];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar61 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_668 [32];
  longlong local_648;
  longlong *local_640;
  ulonglong local_638;
  undefined8 uStack_630;
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  uint local_550;
  int local_54c;
  undefined1 local_548 [8];
  float fStack_540;
  undefined1 local_538 [16];
  float *local_528;
  longlong local_520;
  undefined8 local_518;
  int local_510;
  undefined2 local_50c;
  undefined1 local_50a;
  longlong *local_508;
  float local_4fc;
  undefined1 auStack_4f8 [512];
  uint local_2f8 [130];
  ulonglong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  undefined1 auVar56 [64];
  undefined1 auVar63 [64];
  
  local_58 = in_ZMM15._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_668;
  cVar26 = (**(code **)(*param_6 + 0x10))(param_6,param_1,param_4);
  if (cVar26 != '\0') {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170
             );
    if (lVar5 == 0) {
      pauVar34 = (undefined1 (*) [16])0x0;
    }
    else {
      uVar32 = *(uint *)(lVar5 + 0x200020);
      if ((ulonglong)uVar32 < 0x10000) {
        *(uint *)(lVar5 + 0x200020) = uVar32 + 1;
        pauVar34 = (undefined1 (*) [16])(lVar5 + (ulonglong)uVar32 * 0x20 + 0x20);
        uVar28 = rdtsc();
        local_638 = uVar28 & 0xffffffff00000000 |
                    CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar28);
        uStack_630 = 0;
      }
      else {
        if (DAT_14151fc10 == '\0') {
          DAT_14151fc10 = '\x01';
          (*(code *)PTR_vfunction4_1414f67c8)
                    ("ProfileMeasurement: Too many samples, some data will be lost!");
        }
        pauVar34 = (undefined1 (*) [16])0x0;
      }
    }
    local_520 = param_5;
    local_518 = *param_4;
    local_510 = 0x20 - LZCOUNT(*(int *)(param_1 + 0x50) + -1);
    local_50c = *param_3;
    local_50a = *(undefined1 *)(param_3 + 1);
    local_508 = param_6;
    auVar36 = *(undefined1 (*) [16])(param_2 + 4);
    auVar62._0_12_ = ZEXT812(0);
    auVar62._12_4_ = 0;
    auVar63 = ZEXT1664(auVar62);
    auVar55 = vsubps_avx(auVar62,auVar36);
    auVar55 = vmaxps_avx(auVar55,auVar36);
    local_538 = vcmpps_avx(auVar55,_DAT_140de3630,2);
    auVar55._8_4_ = 0x3f800000;
    auVar55._0_8_ = 0x3f8000003f800000;
    auVar55._12_4_ = 0x3f800000;
    auVar56 = ZEXT1664(auVar55);
    auVar36 = vdivps_avx(auVar55,auVar36);
    _local_548 = vblendvps_avx(auVar36,auVar55,local_538);
    local_2f8[0] = 0;
    auVar54 = ZEXT1264(ZEXT812(0));
    auVar58 = ZEXT1664(_DAT_140e081e0);
    uVar30 = 0;
    uVar28 = 0;
    local_528 = param_2;
    do {
      if ((int)(uint)uVar30 < 0) {
        uVar32 = (uint)uVar30 & 0x7fffffff;
        uVar30 = (ulonglong)uVar32;
        lVar5 = *(longlong *)(param_1 + 0x60);
        puVar1 = (undefined8 *)(lVar5 + uVar30 * 0x28);
        bVar24 = (byte)((ulonglong)local_518 >> 0x20);
        local_550 = uVar32 << (bVar24 & 0x1f) |
                    ~(~(uint)(-1L << ((byte)local_510 & 0x3f)) << (bVar24 & 0x1f)) & (uint)local_518
        ;
        local_54c = local_510 + (int)((ulonglong)local_518 >> 0x20);
        auVar36 = auVar58._0_16_;
        if (*(char *)(lVar5 + 0x24 + uVar30 * 0x28) == '\0') {
          auVar36 = *(undefined1 (*) [16])((longlong)puVar1 + 0x14);
          auVar40._0_4_ = auVar36._0_4_ * auVar36._0_4_;
          auVar40._4_4_ = auVar36._4_4_ * auVar36._4_4_;
          auVar40._8_4_ = auVar36._8_4_ * auVar36._8_4_;
          auVar40._12_4_ = auVar36._12_4_ * auVar36._12_4_;
          auVar55 = vinsertps_avx(auVar40,auVar40,0x4c);
          auVar41._0_4_ = auVar40._0_4_ + auVar55._0_4_;
          auVar41._4_4_ = auVar40._4_4_ + auVar55._4_4_;
          auVar41._8_4_ = auVar40._8_4_ + auVar55._8_4_;
          auVar41._12_4_ = auVar40._12_4_ + auVar55._12_4_;
          auVar55 = vshufpd_avx(auVar41,auVar41,1);
          auVar55 = vmaxss_avx(auVar54._0_16_,ZEXT416((uint)(1.0 - (auVar41._0_4_ + auVar55._0_4_)))
                              );
          auVar55 = vsqrtss_avx(auVar55,auVar55);
          auVar55 = vinsertps_avx(auVar36,auVar55,0x30);
          auVar36._0_8_ = auVar55._0_8_ ^ 0x8000000080000000;
          auVar36._8_4_ = auVar55._8_4_ ^ 0x80000000;
          auVar36._12_4_ = auVar55._12_4_;
        }
        auVar55 = *(undefined1 (*) [16])(lVar5 + 8 + uVar30 * 0x28);
        fVar2 = auVar36._0_4_;
        auVar45._0_4_ = fVar2 + fVar2;
        fVar3 = auVar36._4_4_;
        auVar45._4_4_ = fVar3 + fVar3;
        fVar4 = auVar36._8_4_;
        auVar45._8_4_ = fVar4 + fVar4;
        fVar7 = auVar36._12_4_;
        auVar45._12_4_ = fVar7 + fVar7;
        auVar62 = vshufps_avx(auVar45,auVar45,0xc9);
        auVar40 = vshufps_avx(auVar36,auVar36,0xd2);
        auVar41 = vshufps_avx(auVar45,auVar45,0xd2);
        auVar36 = vshufps_avx(auVar36,auVar36,0xff);
        auVar51._0_4_ = auVar40._0_4_ * auVar41._0_4_;
        auVar51._4_4_ = auVar40._4_4_ * auVar41._4_4_;
        auVar51._8_4_ = auVar40._8_4_ * auVar41._8_4_;
        auVar51._12_4_ = auVar40._12_4_ * auVar41._12_4_;
        auVar53._0_4_ = fVar2 * auVar45._0_4_;
        auVar53._4_4_ = fVar3 * auVar45._4_4_;
        auVar53._8_4_ = fVar4 * auVar45._8_4_;
        auVar53._12_4_ = fVar7 * auVar45._12_4_;
        auVar38 = vshufps_avx(auVar53,auVar53,0xc9);
        auVar38 = vsubps_avx(auVar56._0_16_,auVar38);
        auVar38 = vsubps_avx(auVar38,auVar51);
        auVar46._0_4_ = auVar36._0_4_ * auVar62._0_4_ + auVar45._0_4_ * auVar40._0_4_;
        auVar46._4_4_ = auVar36._4_4_ * auVar62._4_4_ + auVar45._4_4_ * auVar40._4_4_;
        auVar46._8_4_ = auVar36._8_4_ * auVar62._8_4_ + auVar45._8_4_ * auVar40._8_4_;
        auVar46._12_4_ = auVar36._12_4_ * auVar62._12_4_ + auVar45._12_4_ * auVar40._12_4_;
        auVar49._0_4_ = auVar36._0_4_ * auVar41._0_4_;
        auVar49._4_4_ = auVar36._4_4_ * auVar41._4_4_;
        auVar49._8_4_ = auVar36._8_4_ * auVar41._8_4_;
        auVar49._12_4_ = auVar36._12_4_ * auVar41._12_4_;
        auVar37._0_4_ = fVar2 * auVar62._0_4_;
        auVar37._4_4_ = fVar3 * auVar62._4_4_;
        auVar37._8_4_ = fVar4 * auVar62._8_4_;
        auVar37._12_4_ = fVar7 * auVar62._12_4_;
        auVar40 = vsubps_avx(auVar37,auVar49);
        auVar37 = auVar63._0_16_;
        auVar36 = vblendps_avx(auVar40,auVar37,8);
        auVar62 = vblendps_avx(auVar38,auVar46,2);
        auVar36 = vblendps_avx(auVar36,auVar62,3);
        auVar62 = vinsertps_avx(auVar40,auVar38,0x58);
        auVar62 = vblendps_avx(auVar62,auVar46,4);
        auVar40 = vinsertps_avx(auVar40,auVar46,8);
        auVar40 = vblendps_avx(auVar40,auVar38,4);
        auVar41 = vshufps_avx(auVar55,auVar55,0);
        fVar7 = auVar36._0_4_;
        fVar10 = auVar36._4_4_;
        fVar13 = auVar36._8_4_;
        fVar16 = auVar36._12_4_;
        auVar36 = vshufps_avx(auVar55,auVar55,0x55);
        fVar8 = auVar62._0_4_;
        fVar11 = auVar62._4_4_;
        fVar14 = auVar62._8_4_;
        fVar17 = auVar62._12_4_;
        auVar55 = vshufps_avx(auVar55,auVar55,0xaa);
        fVar9 = auVar40._0_4_;
        fVar12 = auVar40._4_4_;
        fVar15 = auVar40._8_4_;
        fVar18 = auVar40._12_4_;
        auVar42._0_4_ = auVar55._0_4_ * fVar9 + auVar41._0_4_ * fVar7 + auVar36._0_4_ * fVar8;
        auVar42._4_4_ = auVar55._4_4_ * fVar12 + auVar41._4_4_ * fVar10 + auVar36._4_4_ * fVar11;
        auVar42._8_4_ = auVar55._8_4_ * fVar15 + auVar41._8_4_ * fVar13 + auVar36._8_4_ * fVar14;
        auVar42._12_4_ = auVar55._12_4_ * fVar18 + auVar41._12_4_ * fVar16 + auVar36._12_4_ * fVar17
        ;
        auVar36 = vsubps_avx(auVar37,auVar42);
        auVar36 = vinsertps_avx(auVar36,ZEXT416(0x3f800000),0x30);
        fVar2 = *local_528;
        fVar3 = local_528[1];
        fVar4 = local_528[2];
        local_578._0_4_ = fVar4 * fVar9 + fVar2 * fVar7 + fVar3 * fVar8 + auVar36._0_4_;
        local_578._4_4_ = fVar4 * fVar12 + fVar2 * fVar10 + fVar3 * fVar11 + auVar36._4_4_;
        local_578._8_4_ = fVar4 * fVar15 + fVar2 * fVar13 + fVar3 * fVar14 + auVar36._8_4_;
        local_578._12_4_ = fVar4 * fVar18 + fVar2 * fVar16 + fVar3 * fVar17 + auVar36._12_4_;
        auVar47._0_4_ = *local_528 + local_528[4];
        auVar47._4_4_ = local_528[1] + local_528[5];
        auVar47._8_4_ = local_528[2] + local_528[6];
        auVar47._12_4_ = local_528[3] + local_528[7];
        auVar55 = vshufps_avx(auVar47,auVar47,0);
        auVar62 = vshufps_avx(auVar47,auVar47,0x55);
        auVar40 = vshufps_avx(auVar47,auVar47,0xaa);
        auVar38._0_4_ =
             fVar9 * auVar40._0_4_ + fVar7 * auVar55._0_4_ + fVar8 * auVar62._0_4_ + auVar36._0_4_;
        auVar38._4_4_ =
             fVar12 * auVar40._4_4_ + fVar10 * auVar55._4_4_ + fVar11 * auVar62._4_4_ +
             auVar36._4_4_;
        auVar38._8_4_ =
             fVar15 * auVar40._8_4_ + fVar13 * auVar55._8_4_ + fVar14 * auVar62._8_4_ +
             auVar36._8_4_;
        auVar38._12_4_ =
             fVar18 * auVar40._12_4_ + fVar16 * auVar55._12_4_ + fVar17 * auVar62._12_4_ +
             auVar36._12_4_;
        local_568 = vsubps_avx(auVar38,local_578);
        plVar6 = (longlong *)*puVar1;
        local_640 = local_508;
        auVar54 = ZEXT1664(auVar54._0_16_);
        auVar56 = ZEXT1664(auVar56._0_16_);
        auVar58 = ZEXT1664(auVar58._0_16_);
        auVar63 = ZEXT1664(auVar37);
        local_648 = local_520;
        uVar30 = (**(code **)(*plVar6 + 0x90))(plVar6,local_578,&local_50c,&local_550);
        uVar27 = uVar28;
        uVar28 = uVar30;
        if (*(float *)(local_520 + 8) <= auVar54._0_4_) goto LAB_1402e8ee6;
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x80);
        lVar33 = uVar30 * 0x40;
        local_588 = *(undefined1 (*) [16])(lVar5 + lVar33);
        local_5c8 = vcvtph2ps_f16c(local_588);
        local_628 = *(undefined1 (*) [16])(lVar5 + 0x10 + lVar33);
        local_5a8 = vshufps_avx(local_588,local_588,0xee);
        local_5b8 = vcvtph2ps_f16c(local_5a8);
        local_618 = *(undefined1 (*) [16])(lVar5 + 0x20 + lVar33);
        local_598 = vshufps_avx(local_628,local_628,0xee);
        local_5f8 = vcvtph2ps_f16c(local_598);
        local_5e8 = vcvtph2ps_f16c(local_618);
        fVar2 = *local_528;
        auVar64._4_4_ = fVar2;
        auVar64._0_4_ = fVar2;
        auVar64._8_4_ = fVar2;
        auVar64._12_4_ = fVar2;
        fVar2 = local_528[1];
        auVar61._4_4_ = fVar2;
        auVar61._0_4_ = fVar2;
        auVar61._8_4_ = fVar2;
        auVar61._12_4_ = fVar2;
        auVar36 = vsubps_avx(local_5c8,auVar64);
        auVar59._0_4_ = auVar36._0_4_ * (float)local_548._0_4_;
        auVar59._4_4_ = auVar36._4_4_ * (float)local_548._0_4_;
        auVar59._8_4_ = auVar36._8_4_ * (float)local_548._0_4_;
        auVar59._12_4_ = auVar36._12_4_ * (float)local_548._0_4_;
        auVar36 = vsubps_avx(local_5b8,auVar61);
        auVar52._0_4_ = auVar36._0_4_ * (float)local_548._4_4_;
        auVar52._4_4_ = auVar36._4_4_ * (float)local_548._4_4_;
        auVar52._8_4_ = auVar36._8_4_ * (float)local_548._4_4_;
        auVar52._12_4_ = auVar36._12_4_ * (float)local_548._4_4_;
        auVar36 = vsubps_avx(local_5f8,auVar64);
        auVar48._0_4_ = auVar36._0_4_ * (float)local_548._0_4_;
        auVar48._4_4_ = auVar36._4_4_ * (float)local_548._0_4_;
        auVar48._8_4_ = auVar36._8_4_ * (float)local_548._0_4_;
        auVar48._12_4_ = auVar36._12_4_ * (float)local_548._0_4_;
        auVar36 = vsubps_avx(local_5e8,auVar61);
        auVar50._0_4_ = auVar36._0_4_ * (float)local_548._4_4_;
        auVar50._4_4_ = auVar36._4_4_ * (float)local_548._4_4_;
        auVar50._8_4_ = auVar36._8_4_ * (float)local_548._4_4_;
        auVar50._12_4_ = auVar36._12_4_ * (float)local_548._4_4_;
        fVar2 = local_528[2];
        auVar57._4_4_ = fVar2;
        auVar57._0_4_ = fVar2;
        auVar57._8_4_ = fVar2;
        auVar57._12_4_ = fVar2;
        local_5d8 = vcvtph2ps_f16c(local_628);
        auVar36 = vsubps_avx(local_5d8,auVar57);
        auVar39._0_4_ = auVar36._0_4_ * fStack_540;
        auVar39._4_4_ = auVar36._4_4_ * fStack_540;
        auVar39._8_4_ = auVar36._8_4_ * fStack_540;
        auVar39._12_4_ = auVar36._12_4_ * fStack_540;
        auVar62 = vshufps_avx(local_618,local_618,0xee);
        local_608 = vcvtph2ps_f16c(auVar62);
        auVar36 = vsubps_avx(local_608,auVar57);
        auVar35._0_4_ = fStack_540 * auVar36._0_4_;
        auVar35._4_4_ = fStack_540 * auVar36._4_4_;
        auVar35._8_4_ = fStack_540 * auVar36._8_4_;
        auVar35._12_4_ = fStack_540 * auVar36._12_4_;
        auVar37 = vshufps_avx(local_538,local_538,0);
        auVar36 = vminps_avx(auVar59,auVar48);
        auVar43._8_4_ = 0xff7fffff;
        auVar43._0_8_ = 0xff7fffffff7fffff;
        auVar43._12_4_ = 0xff7fffff;
        auVar36 = vblendvps_avx(auVar36,auVar43,auVar37);
        auVar42 = vshufps_avx(local_538,local_538,0x55);
        auVar55 = vminps_avx(auVar52,auVar50);
        auVar55 = vblendvps_avx(auVar55,auVar43,auVar42);
        auVar55 = vmaxps_avx(auVar36,auVar55);
        auVar45 = vshufps_avx(local_538,local_538,0xaa);
        auVar36 = vminps_avx(auVar39,auVar35);
        auVar36 = vblendvps_avx(auVar36,auVar43,auVar45);
        auVar40 = vmaxps_avx(auVar55,auVar36);
        auVar36 = vmaxps_avx(auVar59,auVar48);
        auVar60._8_4_ = 0x7f7fffff;
        auVar60._0_8_ = 0x7f7fffff7f7fffff;
        auVar60._12_4_ = 0x7f7fffff;
        auVar63 = ZEXT864(0) << 0x20;
        auVar36 = vblendvps_avx(auVar36,auVar60,auVar37);
        auVar55 = vmaxps_avx(auVar52,auVar50);
        auVar55 = vblendvps_avx(auVar55,auVar60,auVar42);
        auVar55 = vminps_avx(auVar36,auVar55);
        auVar36 = vmaxps_avx(auVar39,auVar35);
        auVar36 = vblendvps_avx(auVar36,auVar60,auVar45);
        auVar55 = vminps_avx(auVar55,auVar36);
        auVar36 = vcmpps_avx(auVar55,auVar40,1);
        auVar55 = vcmpps_avx(auVar55,ZEXT816(0) << 0x20,1);
        auVar19 = vcvtph2ps_f16c(local_628);
        auVar41 = vorps_avx(auVar36,auVar55);
        auVar20 = vcvtph2ps_f16c(auVar62);
        auVar19 = vcmpps_avx(auVar20,auVar19,1);
        auVar20 = vcvtph2ps_f16c(local_618);
        auVar21 = vcvtph2ps_f16c(local_5a8);
        auVar22 = vcvtph2ps_f16c(local_588);
        auVar23 = vcvtph2ps_f16c(local_598);
        auVar20 = vcmpps_avx(auVar20,auVar21,1);
        auVar21 = vcmpps_avx(auVar23,auVar22,1);
        auVar36 = vpackssdw_avx(auVar20._0_16_,auVar20._0_16_);
        auVar55 = vpackssdw_avx(auVar21._0_16_,auVar21._0_16_);
        auVar55 = vpor_avx(auVar36,auVar55);
        auVar36 = vpackssdw_avx(auVar19._0_16_,auVar19._0_16_);
        auVar38 = vpor_avx(auVar55,auVar36);
        auVar36 = vcmpps_avx(local_5f8,auVar64,1);
        auVar55 = vcmpps_avx(auVar64,local_5c8,1);
        auVar36 = vorps_avx(auVar55,auVar36);
        auVar36 = vandps_avx(auVar37,auVar36);
        auVar54 = ZEXT864(0) << 0x20;
        auVar55 = vcmpps_avx(local_5e8,auVar61,1);
        auVar62 = vcmpps_avx(auVar61,local_5b8,1);
        auVar55 = vorps_avx(auVar62,auVar55);
        auVar55 = vandps_avx(auVar55,auVar42);
        auVar62 = vorps_avx(auVar36,auVar55);
        auVar36 = vcmpps_avx(local_608,auVar57,1);
        auVar55 = vcmpps_avx(auVar57,local_5d8,1);
        auVar58 = ZEXT1664(_DAT_140e081e0);
        auVar36 = vorps_avx(auVar55,auVar36);
        auVar36 = vandps_avx(auVar45,auVar36);
        auVar56 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
        auVar36 = vorps_avx(auVar62,auVar36);
        auVar55 = vpunpcklwd_avx(auVar38,auVar38);
        auVar55 = vpor_avx(auVar55,auVar36);
        auVar36 = *(undefined1 (*) [16])(lVar5 + 0x30 + lVar33);
        auVar55 = vpor_avx(auVar55,auVar41);
        auVar55 = vblendvps_avx(auVar40,auVar60,auVar55);
        auVar40 = vshufpd_avx(auVar55,auVar55,1);
        auVar62 = vcmpps_avx(auVar40,auVar55,1);
        auVar62 = vshufpd_avx(auVar62,auVar62,3);
        auVar55 = vblendvps_avx(auVar55,auVar40,auVar62);
        auVar40 = vshufpd_avx(auVar36,auVar36,1);
        auVar36 = vblendvps_avx(auVar36,auVar40,auVar62);
        auVar40 = vshufps_avx(auVar55,auVar55,0xb1);
        auVar62 = vcmpps_avx(auVar40,auVar55,1);
        auVar62 = vmovshdup_avx(auVar62);
        auVar55 = vblendvps_avx(auVar55,auVar40,auVar62);
        auVar40 = vshufps_avx(auVar36,auVar36,0xb1);
        auVar36 = vblendvps_avx(auVar36,auVar40,auVar62);
        auVar40 = vshufps_avx(auVar55,auVar55,0xd8);
        auVar62 = vcmpps_avx(auVar40,auVar55,1);
        auVar62 = vshufps_avx(auVar62,auVar62,0xe8);
        auVar55 = vblendvps_avx(auVar55,auVar40,auVar62);
        auVar40 = vshufps_avx(auVar36,auVar36,0xd8);
        auVar36 = vblendvps_avx(auVar36,auVar40,auVar62);
        uVar29 = *(undefined4 *)(local_520 + 8);
        auVar44._4_4_ = uVar29;
        auVar44._0_4_ = uVar29;
        auVar44._8_4_ = uVar29;
        auVar44._12_4_ = uVar29;
        auVar62 = vcmpps_avx(auVar55,auVar44,1);
        uVar29 = vmovmskps_avx(auVar62);
        auVar55 = vpshufb_avx(auVar55,*(undefined1 (*) [16])
                                       (&DAT_140e086a0 + (uint)(POPCOUNT(uVar29) << 4)));
        auVar36 = vpshufb_avx(auVar36,*(undefined1 (*) [16])
                                       (&DAT_140e086a0 + (uint)(POPCOUNT(uVar29) << 4)));
        *(undefined1 (*) [16])(auStack_4f8 + uVar28 * 4) = auVar55;
        *(undefined1 (*) [16])(local_2f8 + uVar28) = auVar36;
        uVar27 = (ulonglong)(uint)((int)uVar28 + POPCOUNT(uVar29));
        if (*(float *)(local_520 + 8) <= 0.0) goto LAB_1402e8ee6;
      }
      do {
        pfVar31 = &local_4fc + uVar27;
        uVar30 = 0;
        do {
          uVar28 = uVar27;
          if (uVar27 == uVar30) goto LAB_1402e8ee6;
          uVar30 = uVar30 + 1;
          fVar2 = *pfVar31;
          pfVar31 = pfVar31 + -1;
        } while (*(float *)(local_520 + 8) <= fVar2);
        uVar27 = (ulonglong)(uint)((int)uVar27 - (int)uVar30);
        uVar30 = (ulonglong)local_2f8[uVar27];
        uVar28 = uVar27;
      } while (uVar30 == 0x7fffffff);
    } while( true );
  }
LAB_1402e8f19:
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_668)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_668);
LAB_1402e8ee6:
  if (pauVar34 != (undefined1 (*) [16])0x0) {
    uVar30 = rdtsc();
    auVar25._8_8_ = uStack_630;
    auVar25._0_8_ = local_638;
    auVar55 = vpinsrq_avx(auVar25,uVar30 & 0xffffffff00000000 |
                                  CONCAT44((int)(uVar28 >> 0x20),(int)uVar30),1);
    auVar36 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c189),0));
    *pauVar34 = auVar36;
    auVar36 = vmovntdq_avx(auVar55);
    pauVar34[1] = auVar36;
  }
  goto LAB_1402e8f19;
}

