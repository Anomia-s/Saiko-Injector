/**
 * Function: static_void_jph_meshshape_scollidespherevsmes
 * Address:  140307e20
 * Signature: undefined static_void_jph_meshshape_scollidespherevsmes(void)
 * Body size: 2577 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_meshshape_scollidespherevsmes
               (undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5,uint *param_6,undefined8 param_7,ulonglong *param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  longlong lVar22;
  byte *pbVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar45 [16];
  undefined1 in_ZMM13 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar46 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_668 [32];
  undefined8 local_648;
  uint *local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined1 (*local_620) [16];
  uint local_618;
  uint local_614;
  longlong local_610;
  ulonglong local_608;
  longlong local_600;
  ulonglong local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8 [16];
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined1 local_588 [16];
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  uint local_51c;
  undefined1 local_518 [8];
  longlong local_510;
  float local_4f8;
  float local_4f4;
  float local_4f0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_48c;
  uint local_484 [128];
  uint local_284;
  byte local_280 [8];
  undefined1 local_278 [48];
  undefined1 local_248 [344];
  ulonglong local_f0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_668;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar24 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  uVar15 = 0;
  if (lVar24 == 0) {
    local_620 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar27 = *(uint *)(lVar24 + 0x200020);
    if ((ulonglong)uVar27 < 0x10000) {
      *(uint *)(lVar24 + 0x200020) = uVar27 + 1;
      local_620 = (undefined1 (*) [16])(lVar24 + (ulonglong)uVar27 * 0x20 + 0x20);
      uVar28 = rdtsc();
      local_5f8 = uVar28 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)local_620 >> 0x20),(int)uVar28);
      uStack_5f0 = 0;
    }
    else {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      local_620 = (undefined1 (*) [16])0x0;
    }
  }
  local_568 = *param_4;
  uStack_560 = param_4[1];
  local_578 = *param_3;
  uStack_570 = param_3[1];
  local_628 = param_10;
  local_630 = param_9;
  local_638 = param_7;
  local_640 = param_6;
  local_648 = param_5;
  FUN_1405bcb90(local_518,param_1,&local_578,&local_568);
  lVar24 = *(longlong *)(param_2 + 0x48);
  uVar28 = *param_8;
  local_284 = 0;
  local_484[0] = *(uint *)(lVar24 + 0x18);
  local_598 = *(undefined4 *)(lVar24 + 0x20);
  local_5a8 = *(undefined4 *)(lVar24 + 0x24);
  local_5b8 = *(undefined4 *)(lVar24 + 0x28);
  local_5c8 = *(undefined4 *)(lVar24 + 0x2c);
  local_5d8 = *(undefined4 *)(lVar24 + 0x30);
  uVar14 = *(undefined4 *)(lVar24 + 0x34);
  local_5e8._4_4_ = uVar14;
  local_5e8._0_4_ = uVar14;
  local_5e8._8_4_ = uVar14;
  local_5e8._12_4_ = uVar14;
  local_608 = uVar28 >> 0x20;
  bVar8 = (byte)(uVar28 >> 0x20);
  local_614 = ~(~(uint)(-1L << (*(byte *)(lVar24 + 0x1c) & 0x3f)) << (bVar8 & 0x1f)) & (uint)uVar28;
  bVar8 = bVar8 + *(byte *)(lVar24 + 0x1c);
  local_618 = ~(7 << (bVar8 & 0x1f));
  local_610 = lVar24 + 0x13;
  local_600 = lVar24;
  uStack_5d4 = local_5d8;
  uStack_5d0 = local_5d8;
  uStack_5cc = local_5d8;
  uStack_5c4 = local_5c8;
  uStack_5c0 = local_5c8;
  uStack_5bc = local_5c8;
  uStack_5b4 = local_5b8;
  uStack_5b0 = local_5b8;
  uStack_5ac = local_5b8;
  uStack_5a4 = local_5a8;
  uStack_5a0 = local_5a8;
  uStack_59c = local_5a8;
  uStack_594 = local_598;
  uStack_590 = local_598;
  uStack_58c = local_598;
  do {
    uVar27 = local_484[uVar15];
    uVar28 = (ulonglong)uVar27;
    if (uVar28 < 0x10000000) {
      auVar1 = *(undefined1 (*) [16])(lVar24 + uVar28 * 4);
      auVar31 = vcvtph2ps_f16c(auVar1);
      auVar2 = *(undefined1 (*) [16])(lVar24 + 0x10 + uVar28 * 4);
      auVar1 = vshufps_avx(auVar1,auVar1,0xee);
      auVar34 = vcvtph2ps_f16c(auVar1);
      auVar1 = *(undefined1 (*) [16])(lVar24 + 0x20 + uVar28 * 4);
      auVar4 = vcvtph2ps_f16c(auVar2);
      auVar2 = vshufps_avx(auVar2,auVar2,0xee);
      auVar2 = vcvtph2ps_f16c(auVar2);
      auVar30 = vcvtph2ps_f16c(auVar1);
      auVar1 = vshufps_avx(auVar1,auVar1,0xee);
      auVar36 = vcvtph2ps_f16c(auVar1);
      auVar1 = *(undefined1 (*) [16])(lVar24 + 0x30 + uVar28 * 4);
      auVar37._0_4_ = local_4f8 * auVar31._0_4_;
      auVar37._4_4_ = local_4f8 * auVar31._4_4_;
      auVar37._8_4_ = local_4f8 * auVar31._8_4_;
      auVar37._12_4_ = local_4f8 * auVar31._12_4_;
      auVar31._0_4_ = local_4f8 * auVar2._0_4_;
      auVar31._4_4_ = local_4f8 * auVar2._4_4_;
      auVar31._8_4_ = local_4f8 * auVar2._8_4_;
      auVar31._12_4_ = local_4f8 * auVar2._12_4_;
      auVar3 = vminps_avx(auVar37,auVar31);
      auVar2 = vmaxps_avx(auVar37,auVar31);
      auVar32._0_4_ = local_4f4 * auVar34._0_4_;
      auVar32._4_4_ = local_4f4 * auVar34._4_4_;
      auVar32._8_4_ = local_4f4 * auVar34._8_4_;
      auVar32._12_4_ = local_4f4 * auVar34._12_4_;
      auVar38._0_4_ = local_4f4 * auVar30._0_4_;
      auVar38._4_4_ = local_4f4 * auVar30._4_4_;
      auVar38._8_4_ = local_4f4 * auVar30._8_4_;
      auVar38._12_4_ = local_4f4 * auVar30._12_4_;
      auVar30 = vminps_avx(auVar32,auVar38);
      auVar31 = vmaxps_avx(auVar32,auVar38);
      auVar35._0_4_ = local_4f0 * auVar4._0_4_;
      auVar35._4_4_ = local_4f0 * auVar4._4_4_;
      auVar35._8_4_ = local_4f0 * auVar4._8_4_;
      auVar35._12_4_ = local_4f0 * auVar4._12_4_;
      auVar33._0_4_ = local_4f0 * auVar36._0_4_;
      auVar33._4_4_ = local_4f0 * auVar36._4_4_;
      auVar33._8_4_ = local_4f0 * auVar36._8_4_;
      auVar33._12_4_ = local_4f0 * auVar36._12_4_;
      auVar4 = vminps_avx(auVar35,auVar33);
      auVar34 = vmaxps_avx(auVar35,auVar33);
      auVar36._4_4_ = local_48c;
      auVar36._0_4_ = local_48c;
      auVar36._8_4_ = local_48c;
      auVar36._12_4_ = local_48c;
      auVar39._4_4_ = local_4a0;
      auVar39._0_4_ = local_4a0;
      auVar39._8_4_ = local_4a0;
      auVar39._12_4_ = local_4a0;
      auVar41._4_4_ = local_4a4;
      auVar41._0_4_ = local_4a4;
      auVar41._8_4_ = local_4a4;
      auVar41._12_4_ = local_4a4;
      auVar43._4_4_ = local_4a8;
      auVar43._0_4_ = local_4a8;
      auVar43._8_4_ = local_4a8;
      auVar43._12_4_ = local_4a8;
      auVar3 = vmaxps_avx(auVar43,auVar3);
      auVar3 = vminps_avx(auVar3,auVar2);
      auVar2 = vmaxps_avx(auVar41,auVar30);
      auVar31 = vminps_avx(auVar2,auVar31);
      auVar2 = vmaxps_avx(auVar39,auVar4);
      auVar2 = vminps_avx(auVar2,auVar34);
      auVar34 = vsubps_avx(auVar3,auVar43);
      auVar31 = vsubps_avx(auVar31,auVar41);
      auVar2 = vsubps_avx(auVar2,auVar39);
      auVar30._0_4_ =
           auVar34._0_4_ * auVar34._0_4_ + auVar31._0_4_ * auVar31._0_4_ +
           auVar2._0_4_ * auVar2._0_4_;
      auVar30._4_4_ =
           auVar34._4_4_ * auVar34._4_4_ + auVar31._4_4_ * auVar31._4_4_ +
           auVar2._4_4_ * auVar2._4_4_;
      auVar30._8_4_ =
           auVar34._8_4_ * auVar34._8_4_ + auVar31._8_4_ * auVar31._8_4_ +
           auVar2._8_4_ * auVar2._8_4_;
      auVar30._12_4_ =
           auVar34._12_4_ * auVar34._12_4_ + auVar31._12_4_ * auVar31._12_4_ +
           auVar2._12_4_ * auVar2._12_4_;
      auVar2 = vcmpps_avx(auVar30,auVar36,2);
      auVar31 = vshufps_avx(auVar1,auVar1,0xf4);
      auVar34 = vshufps_avx(auVar2,auVar2,0xaa);
      auVar1 = vblendvps_avx(auVar31,auVar1,auVar34);
      auVar31 = vshufps_avx(auVar1,auVar1,0xf8);
      auVar34 = vshufps_avx(auVar2,auVar2,0x55);
      auVar1 = vblendvps_avx(auVar31,auVar1,auVar34);
      auVar31 = vshufps_avx(auVar1,auVar1,0xf9);
      auVar34 = vshufps_avx(auVar2,auVar2,0);
      auVar1 = vblendvps_avx(auVar31,auVar1,auVar34);
      uVar14 = vmovmskps_avx(auVar2);
      *(undefined1 (*) [16])(local_484 + uVar15) = auVar1;
      local_284 = local_284 + POPCOUNT(uVar14);
    }
    else {
      uVar9 = uVar27 >> 0x1c;
      if (uVar9 != 0xf) {
        uVar15 = (ulonglong)((uVar27 & 0xfffffff) * 4);
        lVar22 = (ulonglong)((*(uint *)(lVar24 + uVar15) & 0x1fffffff) << 2) + lVar24 + uVar15;
        pbVar23 = (byte *)(lVar24 + uVar15 + 4);
        pbVar18 = (byte *)(lVar24 + uVar15 + (ulonglong)(uVar9 * 4 + 0xc & 0xfffffff0) + 4);
        pauVar25 = (undefined1 (*) [16])local_278;
        uVar26 = uVar9;
LAB_1403082b6:
        do {
          if (0 < (int)uVar26) {
            bVar10 = *pbVar23;
            bVar11 = pbVar23[1];
            bVar12 = pbVar23[2];
            bVar13 = pbVar23[3];
            auVar1 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + (ulonglong)bVar10 * 8)),
                                 *(undefined4 *)(lVar22 + (ulonglong)bVar11 * 8),1);
            auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar22 + (ulonglong)bVar12 * 8),2);
            auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar22 + (ulonglong)bVar13 * 8),3);
            auVar2 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + 4 + (ulonglong)bVar10 * 8)),
                                 *(undefined4 *)(lVar22 + 4 + (ulonglong)bVar11 * 8),1);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + 4 + (ulonglong)bVar12 * 8),2);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + 4 + (ulonglong)bVar13 * 8),3);
            auVar31 = vpsrld_avx(auVar2,10);
            auVar34 = vpsrld_avx(auVar1,0x15);
            auVar46._8_4_ = 0x1fffff;
            auVar46._0_8_ = 0x1fffff001fffff;
            auVar46._12_4_ = 0x1fffff;
            auVar1 = vpand_avx(auVar46,auVar1);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar5._4_4_ = uStack_594;
            auVar5._0_4_ = local_598;
            auVar5._8_4_ = uStack_590;
            auVar5._12_4_ = uStack_58c;
            auVar3._4_4_ = uStack_5c4;
            auVar3._0_4_ = local_5c8;
            auVar3._8_4_ = uStack_5c0;
            auVar3._12_4_ = uStack_5bc;
            local_588 = vfmadd213ps_fma(auVar1,auVar3,auVar5);
            auVar42._8_4_ = 0x3ff800;
            auVar42._0_8_ = 0x3ff800003ff800;
            auVar42._12_4_ = 0x3ff800;
            auVar1 = vpand_avx(auVar42,auVar31);
            auVar1 = vpor_avx(auVar1,auVar34);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar6._4_4_ = uStack_5a4;
            auVar6._0_4_ = local_5a8;
            auVar6._8_4_ = uStack_5a0;
            auVar6._12_4_ = uStack_59c;
            auVar34._4_4_ = uStack_5d4;
            auVar34._0_4_ = local_5d8;
            auVar34._8_4_ = uStack_5d0;
            auVar34._12_4_ = uStack_5cc;
            auVar30 = vfmadd213ps_fma(auVar1,auVar34,auVar6);
            auVar1 = vpand_avx(auVar46,auVar2);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar2 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + (ulonglong)pbVar23[4] * 8)),
                                 *(undefined4 *)(lVar22 + (ulonglong)pbVar23[5] * 8),1);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + (ulonglong)pbVar23[6] * 8),2);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + (ulonglong)pbVar23[7] * 8),3);
            auVar7._4_4_ = uStack_5b4;
            auVar7._0_4_ = local_5b8;
            auVar7._8_4_ = uStack_5b0;
            auVar7._12_4_ = uStack_5ac;
            auVar4 = vfmadd213ps_fma(auVar1,local_5e8,auVar7);
            auVar1 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + 4 + (ulonglong)pbVar23[4] * 8)),
                                 *(undefined4 *)(lVar22 + 4 + (ulonglong)pbVar23[5] * 8),1);
            auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar22 + 4 + (ulonglong)pbVar23[6] * 8),2);
            auVar31 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar22 + 4 + (ulonglong)pbVar23[7] * 8),3);
            auVar37 = vpsrld_avx(auVar31,10);
            auVar38 = vpsrld_avx(auVar2,0x15);
            auVar1 = vpand_avx(auVar46,auVar2);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar36 = vfmadd213ps_fma(auVar1,auVar3,auVar5);
            auVar1 = vpand_avx(auVar42,auVar37);
            auVar1 = vpor_avx(auVar1,auVar38);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar37 = vfmadd213ps_fma(auVar1,auVar34,auVar6);
            auVar1 = vpand_avx(auVar46,auVar31);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar2 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + (ulonglong)bVar10 * 8)),
                                 *(undefined4 *)(lVar22 + (ulonglong)bVar11 * 8),1);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + (ulonglong)bVar12 * 8),2);
            auVar38 = vfmadd213ps_fma(auVar1,local_5e8,auVar7);
            auVar1 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + (ulonglong)bVar13 * 8),3);
            auVar2 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + 4 + (ulonglong)bVar10 * 8)),
                                 *(undefined4 *)(lVar22 + 4 + (ulonglong)bVar11 * 8),1);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + 4 + (ulonglong)bVar12 * 8),2);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + 4 + (ulonglong)bVar13 * 8),3);
            auVar31 = vpsrld_avx(auVar2,10);
            auVar42 = vpsrld_avx(auVar1,0x15);
            auVar1 = vpand_avx(auVar46,auVar1);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar5 = vfmadd213ps_fma(auVar1,auVar3,auVar5);
            auVar1 = vpand_avx(auVar31,_DAT_140e095e0);
            auVar1 = vpor_avx(auVar1,auVar42);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar6 = vfmadd213ps_fma(auVar1,auVar34,auVar6);
            auVar1 = vpand_avx(auVar46,auVar2);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar7 = vfmadd213ps_fma(auVar1,local_5e8,auVar7);
            auVar1 = vmovlhps_avx(local_588,auVar30);
            auVar40._8_8_ = 0;
            auVar40._0_8_ = auVar4._0_8_;
            auVar34 = vshufps_avx(auVar1,auVar40,0x88);
            auVar2 = vmovlhps_avx(auVar36,auVar37);
            auVar44._8_8_ = 0;
            auVar44._0_8_ = auVar38._0_8_;
            auVar3 = vshufps_avx(auVar2,auVar44,0x88);
            auVar31 = vmovlhps_avx(auVar5,auVar6);
            *pauVar25 = auVar34;
            pauVar25[1] = auVar3;
            auVar45._8_8_ = 0;
            auVar45._0_8_ = auVar7._0_8_;
            auVar34 = vshufps_avx(auVar31,auVar45,0x88);
            pauVar25[2] = auVar34;
            uVar21 = uVar26 - 1;
            uVar19 = 3;
            if (uVar21 < 3) {
              uVar19 = uVar21;
            }
            if (uVar21 == 0) {
              pauVar25 = pauVar25 + 3;
              pbVar23 = pbVar23 + 0x10;
              uVar26 = 0;
              if (pbVar18 <= pbVar23) break;
              goto LAB_1403082b6;
            }
            auVar1 = vshufps_avx(auVar1,auVar40,0xdd);
            auVar2 = vshufps_avx(auVar2,auVar44,0xdd);
            auVar31 = vshufps_avx(auVar31,auVar45,0xdd);
            pauVar25[3] = auVar1;
            pauVar25[4] = auVar2;
            pauVar25[5] = auVar31;
            if (uVar19 == 1) {
              pauVar25 = pauVar25 + 6;
              uVar26 = uVar26 - 2;
            }
            else {
              auVar34 = vunpckhpd_avx(local_588,auVar30);
              auVar31 = ZEXT816(0) << 0x20;
              auVar3 = vunpckhpd_avx(auVar4,auVar31);
              auVar1 = vshufps_avx(auVar34,auVar3,0x88);
              auVar30 = vunpckhpd_avx(auVar36,auVar37);
              auVar4 = vunpckhpd_avx(auVar38,auVar31);
              auVar2 = vshufps_avx(auVar30,auVar4,0x88);
              auVar36 = vunpckhpd_avx(auVar5,auVar6);
              auVar37 = vunpckhpd_avx(auVar7,auVar31);
              auVar31 = vshufps_avx(auVar36,auVar37,0x88);
              pauVar25[6] = auVar1;
              pauVar25[7] = auVar2;
              pauVar25[8] = auVar31;
              if (uVar19 == 2) {
                pauVar25 = pauVar25 + 9;
                uVar26 = uVar26 - 3;
              }
              else {
                auVar1 = vshufps_avx(auVar34,auVar3,0xdd);
                auVar2 = vshufps_avx(auVar30,auVar4,0xdd);
                auVar31 = vshufps_avx(auVar36,auVar37,0xdd);
                pauVar25[9] = auVar1;
                pauVar25[10] = auVar2;
                pauVar25[0xb] = auVar31;
                pauVar25 = pauVar25 + 0xc;
                uVar26 = uVar26 - 4;
              }
            }
          }
          pbVar23 = pbVar23 + 0x10;
        } while (pbVar23 < pbVar18);
        pbVar23 = local_280;
        pbVar17 = (byte *)(uVar15 + local_610);
        uVar26 = uVar9;
        do {
          if (0 < (int)uVar26) {
            uVar21 = uVar26 - 1;
            uVar19 = 3;
            if (uVar21 < 3) {
              uVar19 = uVar21;
            }
            *pbVar23 = pbVar17[-3];
            if (uVar21 == 0) {
              pbVar23 = pbVar23 + 1;
              uVar26 = 0;
            }
            else {
              pbVar23[1] = pbVar17[-2];
              if (uVar19 == 1) {
                pbVar23 = pbVar23 + 2;
                uVar26 = uVar26 - 2;
              }
              else {
                pbVar23[2] = pbVar17[-1];
                if (uVar19 == 2) {
                  pbVar23 = pbVar23 + 3;
                  uVar26 = uVar26 - 3;
                }
                else {
                  pbVar23[3] = *pbVar17;
                  pbVar23 = pbVar23 + 4;
                  uVar26 = uVar26 - 4;
                }
              }
            }
          }
          pbVar16 = pbVar17 + 1;
          pbVar17 = pbVar17 + 0x10;
        } while (pbVar16 < pbVar18);
        uVar27 = ((uVar27 & 0xfffffff) << ((byte)local_608 & 0x1f) | local_614) & local_618;
        puVar20 = local_248;
        lVar22 = 0;
        do {
          local_51c = (int)lVar22 << (bVar8 & 0x1f) | uVar27;
          local_558 = *(undefined8 *)(puVar20 + -0x30);
          uStack_550 = *(undefined8 *)(puVar20 + -0x28);
          local_548 = *(undefined1 (*) [16])(puVar20 + -0x20);
          local_538 = *(undefined1 (*) [16])(puVar20 + -0x10);
          local_640 = &local_51c;
          local_648 = CONCAT71(local_648._1_7_,local_280[lVar22] >> 5);
          FUN_1405bcc80(local_518,&local_558,local_548,local_538);
          lVar24 = local_600;
          if (*(float *)(local_510 + 8) <= -3.4028235e+38) break;
          lVar22 = lVar22 + 1;
          bVar29 = puVar20 < local_278 + uVar9 * 0x30;
          puVar20 = puVar20 + 0x30;
        } while (bVar29);
      }
    }
    uVar27 = local_284;
    lVar22 = local_510;
    if (*(float *)(local_510 + 8) <= -3.4028235e+38) break;
    lVar22 = 0;
    uVar15 = (ulonglong)(local_284 - 1);
    local_284 = local_284 - 1;
  } while (0 < (int)uVar27);
  auVar1._8_8_ = uStack_5f0;
  auVar1._0_8_ = local_5f8;
  if (local_620 != (undefined1 (*) [16])0x0) {
    uVar15 = rdtsc();
    auVar2 = vpinsrq_avx(auVar1,uVar15 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)lVar22 >> 0x20),(int)uVar15),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b35b),0));
    *local_620 = auVar1;
    auVar1 = vmovntdq_avx(auVar2);
    local_620[1] = auVar1;
  }
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_668)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_f0 ^ (ulonglong)auStack_668);
  }
  return;
}

