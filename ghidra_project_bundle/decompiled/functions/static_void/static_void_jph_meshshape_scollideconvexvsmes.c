/**
 * Function: static_void_jph_meshshape_scollideconvexvsmes
 * Address:  1403073e0
 * Signature: undefined static_void_jph_meshshape_scollideconvexvsmes(void)
 * Body size: 2583 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_meshshape_scollideconvexvsmes
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
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar43 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar44 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar45 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar46 [16];
  undefined1 in_ZMM13 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar47 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_2778 [32];
  undefined8 local_2758;
  uint *local_2750;
  undefined8 local_2748;
  undefined8 local_2740;
  undefined8 local_2738;
  undefined1 (*local_2730) [16];
  uint local_2728;
  uint local_2724;
  longlong local_2720;
  ulonglong local_2718;
  longlong local_2710;
  ulonglong local_2708;
  undefined8 uStack_2700;
  undefined1 local_26f8 [16];
  undefined4 local_26e8;
  undefined4 uStack_26e4;
  undefined4 uStack_26e0;
  undefined4 uStack_26dc;
  undefined4 local_26d8;
  undefined4 uStack_26d4;
  undefined4 uStack_26d0;
  undefined4 uStack_26cc;
  undefined4 local_26c8;
  undefined4 uStack_26c4;
  undefined4 uStack_26c0;
  undefined4 uStack_26bc;
  undefined4 local_26b8;
  undefined4 uStack_26b4;
  undefined4 uStack_26b0;
  undefined4 uStack_26ac;
  undefined4 local_26a8;
  undefined4 uStack_26a4;
  undefined4 uStack_26a0;
  undefined4 uStack_269c;
  undefined1 local_2698 [16];
  undefined8 local_2688;
  undefined8 uStack_2680;
  undefined8 local_2678;
  undefined8 uStack_2670;
  undefined8 local_2668;
  undefined8 uStack_2660;
  undefined1 local_2658 [16];
  undefined1 local_2648 [16];
  uint local_262c;
  undefined1 local_2628 [8];
  longlong local_2620;
  float local_25f8;
  float local_25f4;
  float local_25f0;
  undefined4 local_2548;
  undefined4 local_2544;
  undefined4 local_2540;
  undefined4 local_2538;
  undefined4 local_2534;
  undefined4 local_2530;
  uint local_484 [128];
  uint local_284;
  byte local_280 [8];
  undefined1 local_278 [48];
  undefined1 local_248 [344];
  ulonglong local_f0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_98 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x1403073f6;
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_2778;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar24 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  uVar15 = 0;
  if (lVar24 == 0) {
    local_2730 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar27 = *(uint *)(lVar24 + 0x200020);
    if ((ulonglong)uVar27 < 0x10000) {
      *(uint *)(lVar24 + 0x200020) = uVar27 + 1;
      local_2730 = (undefined1 (*) [16])(lVar24 + (ulonglong)uVar27 * 0x20 + 0x20);
      uVar28 = rdtsc();
      local_2708 = uVar28 & 0xffffffff00000000 |
                   CONCAT44((int)((ulonglong)local_2730 >> 0x20),(int)uVar28);
      uStack_2700 = 0;
    }
    else {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      local_2730 = (undefined1 (*) [16])0x0;
    }
  }
  local_2678 = *param_4;
  uStack_2670 = param_4[1];
  local_2688 = *param_3;
  uStack_2680 = param_3[1];
  local_2738 = param_10;
  local_2740 = param_9;
  local_2748 = param_7;
  local_2750 = param_6;
  local_2758 = param_5;
  FUN_1405ba270(local_2628,param_1,&local_2688,&local_2678);
  lVar24 = *(longlong *)(param_2 + 0x48);
  uVar28 = *param_8;
  local_284 = 0;
  local_484[0] = *(uint *)(lVar24 + 0x18);
  local_26a8 = *(undefined4 *)(lVar24 + 0x20);
  local_26b8 = *(undefined4 *)(lVar24 + 0x24);
  local_26c8 = *(undefined4 *)(lVar24 + 0x28);
  local_26d8 = *(undefined4 *)(lVar24 + 0x2c);
  local_26e8 = *(undefined4 *)(lVar24 + 0x30);
  uVar14 = *(undefined4 *)(lVar24 + 0x34);
  local_26f8._4_4_ = uVar14;
  local_26f8._0_4_ = uVar14;
  local_26f8._8_4_ = uVar14;
  local_26f8._12_4_ = uVar14;
  local_2718 = uVar28 >> 0x20;
  bVar8 = (byte)(uVar28 >> 0x20);
  local_2724 = ~(~(uint)(-1L << (*(byte *)(lVar24 + 0x1c) & 0x3f)) << (bVar8 & 0x1f)) & (uint)uVar28
  ;
  bVar8 = bVar8 + *(byte *)(lVar24 + 0x1c);
  local_2728 = ~(7 << (bVar8 & 0x1f));
  local_2720 = lVar24 + 0x13;
  local_2710 = lVar24;
  uStack_26e4 = local_26e8;
  uStack_26e0 = local_26e8;
  uStack_26dc = local_26e8;
  uStack_26d4 = local_26d8;
  uStack_26d0 = local_26d8;
  uStack_26cc = local_26d8;
  uStack_26c4 = local_26c8;
  uStack_26c0 = local_26c8;
  uStack_26bc = local_26c8;
  uStack_26b4 = local_26b8;
  uStack_26b0 = local_26b8;
  uStack_26ac = local_26b8;
  uStack_26a4 = local_26a8;
  uStack_26a0 = local_26a8;
  uStack_269c = local_26a8;
  do {
    uVar27 = local_484[uVar15];
    uVar28 = (ulonglong)uVar27;
    if (uVar28 < 0x10000000) {
      auVar1 = *(undefined1 (*) [16])(lVar24 + uVar28 * 4);
      auVar30 = vcvtph2ps_f16c(auVar1);
      auVar2 = *(undefined1 (*) [16])(lVar24 + 0x10 + uVar28 * 4);
      auVar1 = vshufps_avx(auVar1,auVar1,0xee);
      auVar34 = vcvtph2ps_f16c(auVar1);
      auVar1 = *(undefined1 (*) [16])(lVar24 + 0x20 + uVar28 * 4);
      auVar4 = vcvtph2ps_f16c(auVar2);
      auVar2 = vshufps_avx(auVar2,auVar2,0xee);
      auVar2 = vcvtph2ps_f16c(auVar2);
      auVar31 = vcvtph2ps_f16c(auVar1);
      auVar1 = vshufps_avx(auVar1,auVar1,0xee);
      auVar36 = vcvtph2ps_f16c(auVar1);
      auVar1 = *(undefined1 (*) [16])(lVar24 + 0x30 + uVar28 * 4);
      auVar41._0_4_ = local_25f8 * auVar30._0_4_;
      auVar41._4_4_ = local_25f8 * auVar30._4_4_;
      auVar41._8_4_ = local_25f8 * auVar30._8_4_;
      auVar41._12_4_ = local_25f8 * auVar30._12_4_;
      auVar30._0_4_ = local_25f8 * auVar2._0_4_;
      auVar30._4_4_ = local_25f8 * auVar2._4_4_;
      auVar30._8_4_ = local_25f8 * auVar2._8_4_;
      auVar30._12_4_ = local_25f8 * auVar2._12_4_;
      auVar3 = vminps_avx(auVar41,auVar30);
      auVar2 = vmaxps_avx(auVar41,auVar30);
      auVar32._0_4_ = local_25f4 * auVar34._0_4_;
      auVar32._4_4_ = local_25f4 * auVar34._4_4_;
      auVar32._8_4_ = local_25f4 * auVar34._8_4_;
      auVar32._12_4_ = local_25f4 * auVar34._12_4_;
      auVar42._0_4_ = local_25f4 * auVar31._0_4_;
      auVar42._4_4_ = local_25f4 * auVar31._4_4_;
      auVar42._8_4_ = local_25f4 * auVar31._8_4_;
      auVar42._12_4_ = local_25f4 * auVar31._12_4_;
      auVar31 = vminps_avx(auVar32,auVar42);
      auVar30 = vmaxps_avx(auVar32,auVar42);
      auVar35._0_4_ = local_25f0 * auVar4._0_4_;
      auVar35._4_4_ = local_25f0 * auVar4._4_4_;
      auVar35._8_4_ = local_25f0 * auVar4._8_4_;
      auVar35._12_4_ = local_25f0 * auVar4._12_4_;
      auVar33._0_4_ = local_25f0 * auVar36._0_4_;
      auVar33._4_4_ = local_25f0 * auVar36._4_4_;
      auVar33._8_4_ = local_25f0 * auVar36._8_4_;
      auVar33._12_4_ = local_25f0 * auVar36._12_4_;
      auVar4 = vminps_avx(auVar35,auVar33);
      auVar34 = vmaxps_avx(auVar35,auVar33);
      auVar36._4_4_ = local_2548;
      auVar36._0_4_ = local_2548;
      auVar36._8_4_ = local_2548;
      auVar36._12_4_ = local_2548;
      auVar2 = vcmpps_avx(auVar2,auVar36,5);
      auVar37._4_4_ = local_2544;
      auVar37._0_4_ = local_2544;
      auVar37._8_4_ = local_2544;
      auVar37._12_4_ = local_2544;
      auVar30 = vcmpps_avx(auVar30,auVar37,5);
      auVar38._4_4_ = local_2540;
      auVar38._0_4_ = local_2540;
      auVar38._8_4_ = local_2540;
      auVar38._12_4_ = local_2540;
      auVar34 = vcmpps_avx(auVar34,auVar38,5);
      auVar39._4_4_ = local_2538;
      auVar39._0_4_ = local_2538;
      auVar39._8_4_ = local_2538;
      auVar39._12_4_ = local_2538;
      auVar3 = vcmpps_avx(auVar39,auVar3,5);
      auVar2 = vandps_avx(auVar2,auVar3);
      auVar40._4_4_ = local_2534;
      auVar40._0_4_ = local_2534;
      auVar40._8_4_ = local_2534;
      auVar40._12_4_ = local_2534;
      auVar3 = vcmpps_avx(auVar40,auVar31,5);
      auVar30 = vandps_avx(auVar30,auVar3);
      auVar2 = vandps_avx(auVar2,auVar30);
      auVar31._4_4_ = local_2530;
      auVar31._0_4_ = local_2530;
      auVar31._8_4_ = local_2530;
      auVar31._12_4_ = local_2530;
      auVar30 = vcmpps_avx(auVar31,auVar4,5);
      auVar30 = vandps_avx(auVar34,auVar30);
      auVar2 = vandps_avx(auVar30,auVar2);
      auVar30 = vshufps_avx(auVar1,auVar1,0xf4);
      auVar34 = vshufps_avx(auVar2,auVar2,0xaa);
      auVar1 = vblendvps_avx(auVar30,auVar1,auVar34);
      auVar30 = vshufps_avx(auVar1,auVar1,0xf8);
      auVar34 = vshufps_avx(auVar2,auVar2,0x55);
      auVar1 = vblendvps_avx(auVar30,auVar1,auVar34);
      auVar30 = vshufps_avx(auVar1,auVar1,0xf9);
      auVar34 = vshufps_avx(auVar2,auVar2,0);
      auVar1 = vblendvps_avx(auVar30,auVar1,auVar34);
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
LAB_140307876:
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
            auVar30 = vpsrld_avx(auVar2,10);
            auVar34 = vpsrld_avx(auVar1,0x15);
            auVar47._8_4_ = 0x1fffff;
            auVar47._0_8_ = 0x1fffff001fffff;
            auVar47._12_4_ = 0x1fffff;
            auVar1 = vpand_avx(auVar47,auVar1);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar5._4_4_ = uStack_26a4;
            auVar5._0_4_ = local_26a8;
            auVar5._8_4_ = uStack_26a0;
            auVar5._12_4_ = uStack_269c;
            auVar3._4_4_ = uStack_26d4;
            auVar3._0_4_ = local_26d8;
            auVar3._8_4_ = uStack_26d0;
            auVar3._12_4_ = uStack_26cc;
            local_2698 = vfmadd213ps_fma(auVar1,auVar3,auVar5);
            auVar44._8_4_ = 0x3ff800;
            auVar44._0_8_ = 0x3ff800003ff800;
            auVar44._12_4_ = 0x3ff800;
            auVar1 = vpand_avx(auVar44,auVar30);
            auVar1 = vpor_avx(auVar1,auVar34);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar6._4_4_ = uStack_26b4;
            auVar6._0_4_ = local_26b8;
            auVar6._8_4_ = uStack_26b0;
            auVar6._12_4_ = uStack_26ac;
            auVar34._4_4_ = uStack_26e4;
            auVar34._0_4_ = local_26e8;
            auVar34._8_4_ = uStack_26e0;
            auVar34._12_4_ = uStack_26dc;
            auVar31 = vfmadd213ps_fma(auVar1,auVar34,auVar6);
            auVar1 = vpand_avx(auVar47,auVar2);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar2 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + (ulonglong)pbVar23[4] * 8)),
                                 *(undefined4 *)(lVar22 + (ulonglong)pbVar23[5] * 8),1);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + (ulonglong)pbVar23[6] * 8),2);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + (ulonglong)pbVar23[7] * 8),3);
            auVar7._4_4_ = uStack_26c4;
            auVar7._0_4_ = local_26c8;
            auVar7._8_4_ = uStack_26c0;
            auVar7._12_4_ = uStack_26bc;
            auVar4 = vfmadd213ps_fma(auVar1,local_26f8,auVar7);
            auVar1 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + 4 + (ulonglong)pbVar23[4] * 8)),
                                 *(undefined4 *)(lVar22 + 4 + (ulonglong)pbVar23[5] * 8),1);
            auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar22 + 4 + (ulonglong)pbVar23[6] * 8),2);
            auVar30 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar22 + 4 + (ulonglong)pbVar23[7] * 8),3);
            auVar41 = vpsrld_avx(auVar30,10);
            auVar42 = vpsrld_avx(auVar2,0x15);
            auVar1 = vpand_avx(auVar47,auVar2);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar36 = vfmadd213ps_fma(auVar1,auVar3,auVar5);
            auVar1 = vpand_avx(auVar44,auVar41);
            auVar1 = vpor_avx(auVar1,auVar42);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar41 = vfmadd213ps_fma(auVar1,auVar34,auVar6);
            auVar1 = vpand_avx(auVar47,auVar30);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar2 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + (ulonglong)bVar10 * 8)),
                                 *(undefined4 *)(lVar22 + (ulonglong)bVar11 * 8),1);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + (ulonglong)bVar12 * 8),2);
            auVar42 = vfmadd213ps_fma(auVar1,local_26f8,auVar7);
            auVar1 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + (ulonglong)bVar13 * 8),3);
            auVar2 = vpinsrd_avx(ZEXT416(*(uint *)(lVar22 + 4 + (ulonglong)bVar10 * 8)),
                                 *(undefined4 *)(lVar22 + 4 + (ulonglong)bVar11 * 8),1);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + 4 + (ulonglong)bVar12 * 8),2);
            auVar2 = vpinsrd_avx(auVar2,*(undefined4 *)(lVar22 + 4 + (ulonglong)bVar13 * 8),3);
            auVar30 = vpsrld_avx(auVar2,10);
            auVar44 = vpsrld_avx(auVar1,0x15);
            auVar1 = vpand_avx(auVar47,auVar1);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar5 = vfmadd213ps_fma(auVar1,auVar3,auVar5);
            auVar1 = vpand_avx(auVar30,_DAT_140e095e0);
            auVar1 = vpor_avx(auVar1,auVar44);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar6 = vfmadd213ps_fma(auVar1,auVar34,auVar6);
            auVar1 = vpand_avx(auVar47,auVar2);
            auVar1 = vcvtdq2ps_avx(auVar1);
            auVar7 = vfmadd213ps_fma(auVar1,local_26f8,auVar7);
            auVar1 = vmovlhps_avx(local_2698,auVar31);
            auVar43._8_8_ = 0;
            auVar43._0_8_ = auVar4._0_8_;
            auVar34 = vshufps_avx(auVar1,auVar43,0x88);
            auVar2 = vmovlhps_avx(auVar36,auVar41);
            auVar45._8_8_ = 0;
            auVar45._0_8_ = auVar42._0_8_;
            auVar3 = vshufps_avx(auVar2,auVar45,0x88);
            auVar30 = vmovlhps_avx(auVar5,auVar6);
            *pauVar25 = auVar34;
            pauVar25[1] = auVar3;
            auVar46._8_8_ = 0;
            auVar46._0_8_ = auVar7._0_8_;
            auVar34 = vshufps_avx(auVar30,auVar46,0x88);
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
              goto LAB_140307876;
            }
            auVar1 = vshufps_avx(auVar1,auVar43,0xdd);
            auVar2 = vshufps_avx(auVar2,auVar45,0xdd);
            auVar30 = vshufps_avx(auVar30,auVar46,0xdd);
            pauVar25[3] = auVar1;
            pauVar25[4] = auVar2;
            pauVar25[5] = auVar30;
            if (uVar19 == 1) {
              pauVar25 = pauVar25 + 6;
              uVar26 = uVar26 - 2;
            }
            else {
              auVar34 = vunpckhpd_avx(local_2698,auVar31);
              auVar30 = ZEXT816(0) << 0x20;
              auVar3 = vunpckhpd_avx(auVar4,auVar30);
              auVar1 = vshufps_avx(auVar34,auVar3,0x88);
              auVar31 = vunpckhpd_avx(auVar36,auVar41);
              auVar4 = vunpckhpd_avx(auVar42,auVar30);
              auVar2 = vshufps_avx(auVar31,auVar4,0x88);
              auVar36 = vunpckhpd_avx(auVar5,auVar6);
              auVar41 = vunpckhpd_avx(auVar7,auVar30);
              auVar30 = vshufps_avx(auVar36,auVar41,0x88);
              pauVar25[6] = auVar1;
              pauVar25[7] = auVar2;
              pauVar25[8] = auVar30;
              if (uVar19 == 2) {
                pauVar25 = pauVar25 + 9;
                uVar26 = uVar26 - 3;
              }
              else {
                auVar1 = vshufps_avx(auVar34,auVar3,0xdd);
                auVar2 = vshufps_avx(auVar31,auVar4,0xdd);
                auVar30 = vshufps_avx(auVar36,auVar41,0xdd);
                pauVar25[9] = auVar1;
                pauVar25[10] = auVar2;
                pauVar25[0xb] = auVar30;
                pauVar25 = pauVar25 + 0xc;
                uVar26 = uVar26 - 4;
              }
            }
          }
          pbVar23 = pbVar23 + 0x10;
        } while (pbVar23 < pbVar18);
        pbVar23 = local_280;
        pbVar17 = (byte *)(uVar15 + local_2720);
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
        uVar27 = ((uVar27 & 0xfffffff) << ((byte)local_2718 & 0x1f) | local_2724) & local_2728;
        puVar20 = local_248;
        lVar22 = 0;
        do {
          local_262c = (int)lVar22 << (bVar8 & 0x1f) | uVar27;
          local_2668 = *(undefined8 *)(puVar20 + -0x30);
          uStack_2660 = *(undefined8 *)(puVar20 + -0x28);
          local_2658 = *(undefined1 (*) [16])(puVar20 + -0x20);
          local_2648 = *(undefined1 (*) [16])(puVar20 + -0x10);
          local_2750 = &local_262c;
          local_2758 = CONCAT71(local_2758._1_7_,local_280[lVar22] >> 5);
          FUN_1405ba660(local_2628,&local_2668,local_2658,local_2648);
          lVar24 = local_2710;
          if (*(float *)(local_2620 + 8) <= -3.4028235e+38) break;
          lVar22 = lVar22 + 1;
          bVar29 = puVar20 < local_278 + uVar9 * 0x30;
          puVar20 = puVar20 + 0x30;
        } while (bVar29);
      }
    }
    uVar27 = local_284;
    lVar22 = local_2620;
    if (*(float *)(local_2620 + 8) <= -3.4028235e+38) break;
    lVar22 = 0;
    uVar15 = (ulonglong)(local_284 - 1);
    local_284 = local_284 - 1;
  } while (0 < (int)uVar27);
  auVar1._8_8_ = uStack_2700;
  auVar1._0_8_ = local_2708;
  if (local_2730 != (undefined1 (*) [16])0x0) {
    uVar15 = rdtsc();
    auVar2 = vpinsrq_avx(auVar1,uVar15 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)lVar22 >> 0x20),(int)uVar15),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b264),0));
    *local_2730 = auVar1;
    auVar1 = vmovntdq_avx(auVar2);
    local_2730[1] = auVar1;
  }
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_2778)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_f0 ^ (ulonglong)auStack_2778);
  }
  return;
}

