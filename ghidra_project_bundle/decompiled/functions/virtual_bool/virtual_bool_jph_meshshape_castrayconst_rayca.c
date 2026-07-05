/**
 * Function: virtual_bool_jph_meshshape_castrayconst_rayca
 * Address:  140301690
 * Signature: undefined virtual_bool_jph_meshshape_castrayconst_rayca(void)
 * Body size: 3113 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
virtual_bool_jph_meshshape_castrayconst_rayca
          (longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  longlong lVar5;
  float fVar6;
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
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulonglong uVar31;
  undefined4 uVar32;
  byte *pbVar33;
  int iVar34;
  undefined1 (*pauVar35) [16];
  uint uVar36;
  ulonglong uVar37;
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
  uint uVar50;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar66 [64];
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar75;
  undefined1 auVar71 [16];
  float fVar73;
  float fVar74;
  undefined1 in_ZMM8 [64];
  undefined1 auVar72 [64];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar82;
  float fVar83;
  undefined1 auVar81 [16];
  float fVar84;
  float fVar85;
  float fVar89;
  float fVar90;
  undefined1 auVar86 [16];
  float fVar91;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar97;
  float fVar101;
  undefined1 auVar98 [16];
  float fVar99;
  float fVar100;
  undefined1 in_ZMM13 [64];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  undefined1 local_658 [8];
  float fStack_650;
  float fStack_64c;
  undefined1 local_648 [8];
  float fStack_640;
  float fStack_63c;
  undefined1 local_638 [8];
  float fStack_630;
  float fStack_62c;
  undefined1 local_628 [8];
  float fStack_620;
  float fStack_61c;
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  ulonglong local_5a8;
  undefined8 uStack_5a0;
  undefined1 local_598 [16];
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined1 local_558 [16];
  longlong local_548;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined1 local_518 [8];
  float fStack_510;
  undefined1 local_508 [16];
  uint local_4f8;
  undefined8 local_4f4;
  undefined1 local_4ec;
  float afStack_4e8 [129];
  uint local_2e4 [128];
  uint local_e4;
  ulonglong local_e0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_68 [16];
  undefined1 auVar96 [64];
  
  local_68 = in_ZMM13._0_16_;
  local_b8 = in_ZMM8._0_16_;
  local_c8 = in_ZMM7._0_16_;
  local_e0 = DAT_1414ef3c0 ^ (ulonglong)auStack_6a8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar5 != 0) {
    uVar36 = *(uint *)(lVar5 + 0x200020);
    if ((ulonglong)uVar36 < 0x10000) {
      *(uint *)(lVar5 + 0x200020) = uVar36 + 1;
      pauVar35 = (undefined1 (*) [16])(lVar5 + (ulonglong)uVar36 * 0x20 + 0x20);
      uVar31 = rdtsc();
      local_5a8 = uVar31 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar31);
      uStack_5a0 = 0;
      goto LAB_1403017b7;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar35 = (undefined1 (*) [16])0x0;
LAB_1403017b7:
  local_4ec = 0;
  uVar27 = *param_2;
  uStack_530 = param_2[1];
  uVar28 = param_2[2];
  uStack_520 = param_2[3];
  auVar3 = *(undefined1 (*) [16])(param_2 + 2);
  auVar92._0_12_ = ZEXT812(0);
  auVar92._12_4_ = 0;
  auVar96 = ZEXT1664(auVar92);
  auVar45 = vsubps_avx(auVar92,auVar3);
  auVar45 = vmaxps_avx(auVar45,auVar3);
  local_508 = vcmpps_avx(auVar45,_DAT_140de3630,2);
  auVar45._8_4_ = 0x3f800000;
  auVar45._0_8_ = 0x3f8000003f800000;
  auVar45._12_4_ = 0x3f800000;
  auVar3 = vdivps_avx(auVar45,auVar3);
  _local_518 = vblendvps_avx(auVar3,auVar45,local_508);
  lVar5 = *(longlong *)(param_1 + 0x48);
  bVar4 = *(byte *)(lVar5 + 0x1c);
  local_4f8 = (uint)bVar4;
  local_4f4 = *param_3;
  local_e4 = 0;
  local_2e4[0] = *(uint *)(lVar5 + 0x18);
  uVar32 = *(undefined4 *)(lVar5 + 0x20);
  local_5b8._4_4_ = uVar32;
  local_5b8._0_4_ = uVar32;
  local_5b8._8_4_ = uVar32;
  local_5b8._12_4_ = uVar32;
  uVar32 = *(undefined4 *)(lVar5 + 0x24);
  local_558._4_4_ = uVar32;
  local_558._0_4_ = uVar32;
  local_558._8_4_ = uVar32;
  local_558._12_4_ = uVar32;
  uVar32 = *(undefined4 *)(lVar5 + 0x28);
  local_5c8._4_4_ = uVar32;
  local_5c8._0_4_ = uVar32;
  local_5c8._8_4_ = uVar32;
  local_5c8._12_4_ = uVar32;
  local_568 = *(undefined4 *)(lVar5 + 0x2c);
  local_578 = *(undefined4 *)(lVar5 + 0x30);
  local_588 = *(undefined4 *)(lVar5 + 0x34);
  uVar31 = 0;
  uVar37 = (ulonglong)*(uint *)(lVar5 + 0x18);
  local_538._0_4_ = (undefined4)uVar27;
  local_538._4_4_ = (undefined4)((ulonglong)uVar27 >> 0x20);
  if (0xfffffff < uVar37) goto LAB_140301c10;
  do {
    local_5d8 = *(undefined1 (*) [16])(lVar5 + uVar37 * 4);
    local_608 = vcvtph2ps_f16c(local_5d8);
    _local_658 = *(undefined1 (*) [16])(lVar5 + 0x10 + uVar37 * 4);
    local_5f8 = vshufps_avx(local_5d8,local_5d8,0xee);
    _local_628 = vcvtph2ps_f16c(local_5f8);
    local_688 = *(undefined1 (*) [16])(lVar5 + 0x20 + uVar37 * 4);
    _local_638 = vcvtph2ps_f16c(_local_658);
    local_5e8 = vshufps_avx(_local_658,_local_658,0xee);
    local_618 = vcvtph2ps_f16c(local_5e8);
    _local_648 = vcvtph2ps_f16c(local_688);
    auVar102._4_4_ = (undefined4)local_538;
    auVar102._0_4_ = (undefined4)local_538;
    auVar102._8_4_ = (undefined4)local_538;
    auVar102._12_4_ = (undefined4)local_538;
    local_668._4_4_ = local_538._4_4_;
    local_668._0_4_ = local_538._4_4_;
    local_668._8_4_ = local_538._4_4_;
    local_668._12_4_ = local_538._4_4_;
    auVar3 = vsubps_avx(local_608,auVar102);
    auVar86._0_4_ = auVar3._0_4_ * (float)local_518._0_4_;
    auVar86._4_4_ = auVar3._4_4_ * (float)local_518._0_4_;
    auVar86._8_4_ = auVar3._8_4_ * (float)local_518._0_4_;
    auVar86._12_4_ = auVar3._12_4_ * (float)local_518._0_4_;
    auVar3 = vsubps_avx(local_618,auVar102);
    auVar62._0_4_ = (float)local_518._0_4_ * auVar3._0_4_;
    auVar62._4_4_ = (float)local_518._0_4_ * auVar3._4_4_;
    auVar62._8_4_ = (float)local_518._0_4_ * auVar3._8_4_;
    auVar62._12_4_ = (float)local_518._0_4_ * auVar3._12_4_;
    auVar3 = vsubps_avx(_local_628,local_668);
    auVar68._0_4_ = auVar3._0_4_ * (float)local_518._4_4_;
    auVar68._4_4_ = auVar3._4_4_ * (float)local_518._4_4_;
    auVar68._8_4_ = auVar3._8_4_ * (float)local_518._4_4_;
    auVar68._12_4_ = auVar3._12_4_ * (float)local_518._4_4_;
    auVar3 = vsubps_avx(_local_648,local_668);
    auVar93._0_4_ = auVar3._0_4_ * (float)local_518._4_4_;
    auVar93._4_4_ = auVar3._4_4_ * (float)local_518._4_4_;
    auVar93._8_4_ = auVar3._8_4_ * (float)local_518._4_4_;
    auVar93._12_4_ = auVar3._12_4_ * (float)local_518._4_4_;
    auVar81._4_4_ = (undefined4)uStack_530;
    auVar81._0_4_ = (undefined4)uStack_530;
    auVar81._8_4_ = (undefined4)uStack_530;
    auVar81._12_4_ = (undefined4)uStack_530;
    auVar3 = vsubps_avx(_local_638,auVar81);
    auVar70._0_4_ = auVar3._0_4_ * fStack_510;
    auVar70._4_4_ = auVar3._4_4_ * fStack_510;
    auVar70._8_4_ = auVar3._8_4_ * fStack_510;
    auVar70._12_4_ = auVar3._12_4_ * fStack_510;
    auVar92 = vshufps_avx(local_688,local_688,0xee);
    local_678 = vcvtph2ps_f16c(auVar92);
    auVar3 = vsubps_avx(local_678,auVar81);
    auVar63._0_4_ = fStack_510 * auVar3._0_4_;
    auVar63._4_4_ = fStack_510 * auVar3._4_4_;
    auVar63._8_4_ = fStack_510 * auVar3._8_4_;
    auVar63._12_4_ = fStack_510 * auVar3._12_4_;
    auVar41 = vshufps_avx(local_508,local_508,0);
    auVar3 = vminps_avx(auVar86,auVar62);
    auVar46._8_4_ = 0xff7fffff;
    auVar46._0_8_ = 0xff7fffffff7fffff;
    auVar46._12_4_ = 0xff7fffff;
    auVar3 = vblendvps_avx(auVar3,auVar46,auVar41);
    auVar55 = vshufps_avx(local_508,local_508,0x55);
    auVar45 = vminps_avx(auVar68,auVar93);
    auVar45 = vblendvps_avx(auVar45,auVar46,auVar55);
    auVar45 = vmaxps_avx(auVar3,auVar45);
    auVar69 = vshufps_avx(local_508,local_508,0xaa);
    auVar3 = vminps_avx(auVar70,auVar63);
    auVar3 = vblendvps_avx(auVar3,auVar46,auVar69);
    auVar46 = vmaxps_avx(auVar45,auVar3);
    auVar104._8_4_ = 0x7f7fffff;
    auVar104._0_8_ = 0x7f7fffff7f7fffff;
    auVar104._12_4_ = 0x7f7fffff;
    auVar3 = vmaxps_avx(auVar86,auVar62);
    auVar3 = vblendvps_avx(auVar3,auVar104,auVar41);
    auVar45 = vmaxps_avx(auVar68,auVar93);
    auVar45 = vblendvps_avx(auVar45,auVar104,auVar55);
    auVar45 = vminps_avx(auVar3,auVar45);
    auVar3 = vmaxps_avx(auVar70,auVar63);
    auVar3 = vblendvps_avx(auVar3,auVar104,auVar69);
    auVar45 = vminps_avx(auVar45,auVar3);
    auVar3 = vcmpps_avx(auVar45,auVar46,1);
    auVar45 = vcmpps_avx(auVar45,auVar96._0_16_,1);
    auVar18 = vcvtph2ps_f16c(_local_658);
    auVar63 = vorps_avx(auVar3,auVar45);
    auVar19 = vcvtph2ps_f16c(auVar92);
    auVar18 = vcmpps_avx(auVar19,auVar18,1);
    auVar19 = vcvtph2ps_f16c(local_688);
    auVar20 = vcvtph2ps_f16c(local_5f8);
    auVar21 = vcvtph2ps_f16c(local_5d8);
    auVar22 = vcvtph2ps_f16c(local_5e8);
    auVar19 = vcmpps_avx(auVar19,auVar20,1);
    auVar20 = vcmpps_avx(auVar22,auVar21,1);
    auVar3 = vpackssdw_avx(auVar19._0_16_,auVar19._0_16_);
    auVar45 = vpackssdw_avx(auVar20._0_16_,auVar20._0_16_);
    auVar45 = vpor_avx(auVar3,auVar45);
    auVar3 = vpackssdw_avx(auVar18._0_16_,auVar18._0_16_);
    auVar47 = vpor_avx(auVar45,auVar3);
    auVar3 = vcmpps_avx(local_618,auVar102,1);
    auVar45 = vcmpps_avx(auVar102,local_608,1);
    auVar3 = vorps_avx(auVar45,auVar3);
    auVar3 = vandps_avx(auVar41,auVar3);
    auVar45 = vcmpps_avx(_local_648,local_668,1);
    auVar92 = vcmpps_avx(local_668,_local_628,1);
    auVar45 = vorps_avx(auVar92,auVar45);
    auVar45 = vandps_avx(auVar45,auVar55);
    auVar92 = vorps_avx(auVar3,auVar45);
    auVar3 = vcmpps_avx(local_678,auVar81,1);
    auVar45 = vcmpps_avx(auVar81,_local_638,1);
    auVar3 = vorps_avx(auVar45,auVar3);
    auVar3 = vandps_avx(auVar69,auVar3);
    auVar3 = vorps_avx(auVar92,auVar3);
    auVar45 = vpunpcklwd_avx(auVar47,auVar47);
    auVar45 = vpor_avx(auVar45,auVar3);
    auVar3 = *(undefined1 (*) [16])(lVar5 + 0x30 + uVar37 * 4);
    auVar45 = vpor_avx(auVar45,auVar63);
    auVar45 = vblendvps_avx(auVar46,auVar104,auVar45);
    auVar46 = vshufpd_avx(auVar45,auVar45,1);
    auVar92 = vcmpps_avx(auVar46,auVar45,1);
    auVar92 = vshufpd_avx(auVar92,auVar92,3);
    auVar45 = vblendvps_avx(auVar45,auVar46,auVar92);
    auVar46 = vshufpd_avx(auVar3,auVar3,1);
    auVar3 = vblendvps_avx(auVar3,auVar46,auVar92);
    auVar46 = vshufps_avx(auVar45,auVar45,0xb1);
    auVar92 = vcmpps_avx(auVar46,auVar45,1);
    auVar92 = vmovshdup_avx(auVar92);
    auVar45 = vblendvps_avx(auVar45,auVar46,auVar92);
    auVar46 = vshufps_avx(auVar3,auVar3,0xb1);
    auVar3 = vblendvps_avx(auVar3,auVar46,auVar92);
    auVar46 = vshufps_avx(auVar45,auVar45,0xd8);
    auVar92 = vcmpps_avx(auVar46,auVar45,1);
    auVar92 = vshufps_avx(auVar92,auVar92,0xe8);
    auVar45 = vblendvps_avx(auVar45,auVar46,auVar92);
    auVar46 = vshufps_avx(auVar3,auVar3,0xd8);
    auVar3 = vblendvps_avx(auVar3,auVar46,auVar92);
    uVar32 = *(undefined4 *)(param_4 + 4);
    auVar47._4_4_ = uVar32;
    auVar47._0_4_ = uVar32;
    auVar47._8_4_ = uVar32;
    auVar47._12_4_ = uVar32;
    auVar92 = vcmpps_avx(auVar45,auVar47,1);
    uVar32 = vmovmskps_avx(auVar92);
    auVar45 = vpshufb_avx(auVar45,*(undefined1 (*) [16])
                                   (&DAT_140e086a0 + (uint)(POPCOUNT(uVar32) << 4)));
    auVar3 = vpshufb_avx(auVar3,*(undefined1 (*) [16])
                                 (&DAT_140e086a0 + (uint)(POPCOUNT(uVar32) << 4)));
    *(undefined1 (*) [16])(afStack_4e8 + uVar31) = auVar45;
    *(undefined1 (*) [16])(local_2e4 + uVar31) = auVar3;
    local_e4 = local_e4 + POPCOUNT(uVar32);
LAB_140302190:
    if (*(float *)(param_4 + 4) <= 0.0) {
LAB_1403021e7:
      if (pauVar35 != (undefined1 (*) [16])0x0) {
        uVar37 = rdtsc();
        auVar3._8_8_ = uStack_5a0;
        auVar3._0_8_ = local_5a8;
        auVar45 = vpinsrq_avx(auVar3,uVar37 & 0xffffffff00000000 |
                                     CONCAT44((int)(uVar31 >> 0x20),(int)uVar37),1);
        auVar3 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b83c),0));
        *pauVar35 = auVar3;
        auVar3 = vmovntdq_avx(auVar45);
        pauVar35[1] = auVar3;
      }
      if (DAT_1414ef3c0 != (local_e0 ^ (ulonglong)auStack_6a8)) {
        uStack_584 = local_588;
        uStack_580 = local_588;
        uStack_57c = local_588;
        uStack_574 = local_578;
        uStack_570 = local_578;
        uStack_56c = local_578;
        uStack_564 = local_568;
        uStack_560 = local_568;
        uStack_55c = local_568;
        local_548 = param_4;
        local_538 = uVar27;
        local_528 = uVar28;
                    /* WARNING: Subroutine does not return */
        FUN_140b65db0(local_e0 ^ (ulonglong)auStack_6a8);
      }
      return local_4ec;
    }
    uVar31 = (ulonglong)local_e4;
    do {
      if ((int)uVar31 < 1) goto LAB_1403021e7;
      uVar31 = uVar31 - 1;
    } while (*(float *)(param_4 + 4) <= afStack_4e8[uVar31 & 0xffffffff]);
    local_e4 = (uint)uVar31;
    uVar31 = (ulonglong)(int)(uint)uVar31;
    uVar37 = (ulonglong)local_2e4[uVar31];
  } while (uVar37 < 0x10000000);
LAB_140301c10:
  iVar34 = (int)(uVar37 >> 0x1c);
  if (iVar34 != 0xf) {
    uVar36 = (uint)uVar37 & 0xfffffff;
    uVar37 = (ulonglong)uVar36;
    lVar1 = lVar5 + uVar37 * 4;
    fVar2 = *(float *)(param_4 + 4);
    local_598._4_4_ = fVar2;
    local_598._0_4_ = fVar2;
    local_598._8_4_ = fVar2;
    local_598._12_4_ = fVar2;
    uVar31 = (ulonglong)((*(uint *)(lVar5 + uVar37 * 4) & 0x1fffffff) << 2) + lVar1;
    pbVar33 = (byte *)(lVar5 + uVar37 * 4 + 4);
    local_528._0_4_ = (float)uVar28;
    local_638._4_4_ = (float)local_528;
    local_638._0_4_ = (float)local_528;
    fStack_630 = (float)local_528;
    fStack_62c = (float)local_528;
    local_528._4_4_ = (float)((ulonglong)uVar28 >> 0x20);
    local_648._4_4_ = local_528._4_4_;
    local_648._0_4_ = local_528._4_4_;
    fStack_640 = local_528._4_4_;
    fStack_63c = local_528._4_4_;
    local_658._4_4_ = (float)uStack_520;
    local_658._0_4_ = (float)uStack_520;
    fStack_650 = (float)uStack_520;
    fStack_64c = (float)uStack_520;
    local_668._4_4_ = (undefined4)local_538;
    local_668._0_4_ = (undefined4)local_538;
    local_668._8_4_ = (undefined4)local_538;
    local_668._12_4_ = (undefined4)local_538;
    local_678._4_4_ = local_538._4_4_;
    local_678._0_4_ = local_538._4_4_;
    local_678._8_4_ = local_538._4_4_;
    local_678._12_4_ = local_538._4_4_;
    auVar66 = ZEXT1264(ZEXT812(0));
    auVar72 = ZEXT1264(ZEXT812(0));
    local_688._4_4_ = (undefined4)uStack_530;
    local_688._0_4_ = (undefined4)uStack_530;
    local_688._8_4_ = (undefined4)uStack_530;
    local_688._12_4_ = (undefined4)uStack_530;
    auVar3 = local_598;
    do {
      local_5e8 = auVar3;
      local_5f8 = auVar72._0_16_;
      local_5d8 = auVar66._0_16_;
      bVar23 = *pbVar33;
      bVar24 = pbVar33[1];
      bVar25 = pbVar33[2];
      bVar26 = pbVar33[3];
      auVar3 = vpinsrd_avx(ZEXT416(*(uint *)(uVar31 + (ulonglong)bVar23 * 8)),
                           *(undefined4 *)(uVar31 + (ulonglong)bVar24 * 8),1);
      auVar45 = vpinsrd_avx(ZEXT416(*(uint *)(uVar31 + 4 + (ulonglong)bVar23 * 8)),
                            *(undefined4 *)(uVar31 + 4 + (ulonglong)bVar24 * 8),1);
      auVar3 = vpinsrd_avx(auVar3,*(undefined4 *)(uVar31 + (ulonglong)bVar25 * 8),2);
      auVar45 = vpinsrd_avx(auVar45,*(undefined4 *)(uVar31 + 4 + (ulonglong)bVar25 * 8),2);
      auVar3 = vpinsrd_avx(auVar3,*(undefined4 *)(uVar31 + (ulonglong)bVar26 * 8),3);
      auVar92 = vpinsrd_avx(ZEXT416(*(uint *)(uVar31 + (ulonglong)pbVar33[4] * 8)),
                            *(undefined4 *)(uVar31 + (ulonglong)pbVar33[5] * 8),1);
      auVar45 = vpinsrd_avx(auVar45,*(undefined4 *)(uVar31 + 4 + (ulonglong)bVar26 * 8),3);
      auVar92 = vpinsrd_avx(auVar92,*(undefined4 *)(uVar31 + (ulonglong)pbVar33[6] * 8),2);
      auVar92 = vpinsrd_avx(auVar92,*(undefined4 *)(uVar31 + (ulonglong)pbVar33[7] * 8),3);
      auVar46 = vpinsrd_avx(ZEXT416(*(uint *)(uVar31 + 4 + (ulonglong)pbVar33[4] * 8)),
                            *(undefined4 *)(uVar31 + 4 + (ulonglong)pbVar33[5] * 8),1);
      auVar69 = vpsrld_avx(auVar45,10);
      auVar55 = vpsrld_avx(auVar3,0x15);
      auVar46 = vpinsrd_avx(auVar46,*(undefined4 *)(uVar31 + 4 + (ulonglong)pbVar33[6] * 8),2);
      auVar38._8_4_ = 0x1fffff;
      auVar38._0_8_ = 0x1fffff001fffff;
      auVar38._12_4_ = 0x1fffff;
      auVar3 = vpand_avx(auVar3,auVar38);
      auVar45 = vpand_avx(auVar45,auVar38);
      auVar47 = vpinsrd_avx(auVar46,*(undefined4 *)(uVar31 + 4 + (ulonglong)pbVar33[7] * 8),3);
      auVar3 = vcvtdq2ps_avx(auVar3);
      auVar63 = vpsrld_avx(auVar47,10);
      auVar41._8_4_ = 0x3ff800;
      auVar41._0_8_ = 0x3ff800003ff800;
      auVar41._12_4_ = 0x3ff800;
      auVar46 = vpand_avx(auVar69,auVar41);
      auVar69 = vpsrld_avx(auVar92,0x15);
      auVar45 = vcvtdq2ps_avx(auVar45);
      auVar92 = vpand_avx(auVar92,auVar38);
      auVar92 = vcvtdq2ps_avx(auVar92);
      auVar63 = vpand_avx(auVar63,auVar41);
      auVar46 = vpor_avx(auVar46,auVar55);
      auVar41 = vpinsrd_avx(ZEXT416(*(uint *)(uVar31 + (ulonglong)bVar23 * 8)),
                            *(undefined4 *)(uVar31 + (ulonglong)bVar24 * 8),1);
      auVar46 = vcvtdq2ps_avx(auVar46);
      auVar63 = vpor_avx(auVar69,auVar63);
      auVar41 = vpinsrd_avx(auVar41,*(undefined4 *)(uVar31 + (ulonglong)bVar25 * 8),2);
      auVar63 = vcvtdq2ps_avx(auVar63);
      auVar47 = vpand_avx(auVar47,auVar38);
      auVar41 = vpinsrd_avx(auVar41,*(undefined4 *)(uVar31 + (ulonglong)bVar26 * 8),3);
      auVar30._4_4_ = local_568;
      auVar30._0_4_ = local_568;
      auVar30._8_4_ = local_568;
      auVar30._12_4_ = local_568;
      local_618 = vfmadd213ps_fma(auVar3,auVar30,local_5b8);
      auVar55 = vpinsrd_avx(ZEXT416(*(uint *)(uVar31 + 4 + (ulonglong)bVar23 * 8)),
                            *(undefined4 *)(uVar31 + 4 + (ulonglong)bVar24 * 8),1);
      auVar29._4_4_ = local_588;
      auVar29._0_4_ = local_588;
      auVar29._8_4_ = local_588;
      auVar29._12_4_ = local_588;
      auVar69 = vfmadd213ps_fma(auVar45,auVar29,local_5c8);
      auVar3 = vcvtdq2ps_avx(auVar47);
      auVar45 = vpinsrd_avx(auVar55,*(undefined4 *)(uVar31 + 4 + (ulonglong)bVar25 * 8),2);
      auVar92 = vfmadd213ps_fma(auVar92,auVar30,local_5b8);
      auVar45 = vpinsrd_avx(auVar45,*(undefined4 *)(uVar31 + 4 + (ulonglong)bVar26 * 8),3);
      auVar70 = vpsrld_avx(auVar45,10);
      auVar47 = vfmadd213ps_fma(auVar3,auVar29,local_5c8);
      auVar93 = vpsrld_avx(auVar41,0x15);
      auVar3 = vpand_avx(auVar41,auVar38);
      auVar3 = vcvtdq2ps_avx(auVar3);
      auVar55._4_4_ = local_578;
      auVar55._0_4_ = local_578;
      auVar55._8_4_ = local_578;
      auVar55._12_4_ = local_578;
      auVar41 = vfmadd213ps_fma(auVar46,auVar55,local_558);
      auVar46 = vfmadd213ps_fma(auVar3,auVar30,local_5b8);
      auVar3 = vpand_avx(auVar70,_DAT_140e095e0);
      auVar3 = vpor_avx(auVar93,auVar3);
      auVar63 = vfmadd213ps_fma(auVar63,auVar55,local_558);
      auVar3 = vcvtdq2ps_avx(auVar3);
      auVar45 = vpand_avx(auVar45,_DAT_140e095d0);
      auVar45 = vcvtdq2ps_avx(auVar45);
      auVar55 = vfmadd213ps_fma(auVar3,auVar55,local_558);
      auVar70 = vfmadd213ps_fma(auVar45,auVar29,local_5c8);
      auVar3 = vsubps_avx(auVar92,local_618);
      auVar45 = vsubps_avx(auVar47,auVar69);
      auVar92 = vsubps_avx(auVar63,auVar41);
      auVar46 = vsubps_avx(auVar46,local_618);
      auVar63 = vsubps_avx(auVar55,auVar41);
      local_608 = vsubps_avx(auVar70,auVar69);
      fVar85 = local_608._0_4_;
      auVar39._0_4_ = fVar85 * local_528._4_4_;
      fVar89 = local_608._4_4_;
      auVar39._4_4_ = fVar89 * local_528._4_4_;
      fVar90 = local_608._8_4_;
      auVar39._8_4_ = fVar90 * local_528._4_4_;
      fVar91 = local_608._12_4_;
      auVar39._12_4_ = fVar91 * local_528._4_4_;
      fVar80 = auVar63._0_4_;
      auVar94._0_4_ = fVar80 * (float)uStack_520;
      fVar82 = auVar63._4_4_;
      auVar94._4_4_ = fVar82 * (float)uStack_520;
      fVar83 = auVar63._8_4_;
      auVar94._8_4_ = fVar83 * (float)uStack_520;
      fVar84 = auVar63._12_4_;
      auVar94._12_4_ = fVar84 * (float)uStack_520;
      fVar6 = auVar46._0_4_;
      auVar105._0_4_ = (float)uStack_520 * fVar6;
      fVar9 = auVar46._4_4_;
      auVar105._4_4_ = (float)uStack_520 * fVar9;
      fVar12 = auVar46._8_4_;
      auVar105._8_4_ = (float)uStack_520 * fVar12;
      fVar15 = auVar46._12_4_;
      auVar105._12_4_ = (float)uStack_520 * fVar15;
      auVar87._0_4_ = fVar85 * (float)local_528;
      auVar87._4_4_ = fVar89 * (float)local_528;
      auVar87._8_4_ = fVar90 * (float)local_528;
      auVar87._12_4_ = fVar91 * (float)local_528;
      auVar46 = vsubps_avx(auVar39,auVar94);
      auVar63 = vsubps_avx(auVar105,auVar87);
      auVar95._0_4_ = fVar80 * (float)local_528;
      auVar95._4_4_ = fVar82 * (float)local_528;
      auVar95._8_4_ = fVar83 * (float)local_528;
      auVar95._12_4_ = fVar84 * (float)local_528;
      auVar106._0_4_ = local_528._4_4_ * fVar6;
      auVar106._4_4_ = local_528._4_4_ * fVar9;
      auVar106._8_4_ = local_528._4_4_ * fVar12;
      auVar106._12_4_ = local_528._4_4_ * fVar15;
      auVar47 = vsubps_avx(auVar95,auVar106);
      fVar57 = auVar3._0_4_;
      fVar59 = auVar3._4_4_;
      fVar60 = auVar3._8_4_;
      fVar61 = auVar3._12_4_;
      fVar7 = auVar92._0_4_;
      fVar10 = auVar92._4_4_;
      fVar13 = auVar92._8_4_;
      fVar16 = auVar92._12_4_;
      local_628._0_4_ = auVar63._0_4_ * fVar7 + fVar57 * auVar46._0_4_;
      local_628._4_4_ = auVar63._4_4_ * fVar10 + fVar59 * auVar46._4_4_;
      fStack_620 = auVar63._8_4_ * fVar13 + fVar60 * auVar46._8_4_;
      fStack_61c = auVar63._12_4_ * fVar16 + fVar61 * auVar46._12_4_;
      fVar67 = auVar45._0_4_;
      fVar73 = auVar45._4_4_;
      fVar74 = auVar45._8_4_;
      fVar75 = auVar45._12_4_;
      auVar3 = vsubps_avx(local_668,local_618);
      auVar45 = vsubps_avx(local_678,auVar41);
      auVar92 = vsubps_avx(local_688,auVar69);
      fVar76 = auVar3._0_4_;
      fVar77 = auVar3._4_4_;
      fVar78 = auVar3._8_4_;
      fVar79 = auVar3._12_4_;
      fVar8 = auVar45._0_4_;
      fVar11 = auVar45._4_4_;
      fVar14 = auVar45._8_4_;
      fVar17 = auVar45._12_4_;
      auVar88._0_4_ = fVar67 * fVar8;
      auVar88._4_4_ = fVar73 * fVar11;
      auVar88._8_4_ = fVar74 * fVar14;
      auVar88._12_4_ = fVar75 * fVar17;
      auVar103._0_4_ = fVar67 * auVar47._0_4_ + (float)local_628._0_4_;
      auVar103._4_4_ = fVar73 * auVar47._4_4_ + (float)local_628._4_4_;
      auVar103._8_4_ = fVar74 * auVar47._8_4_ + fStack_620;
      auVar103._12_4_ = fVar75 * auVar47._12_4_ + fStack_61c;
      fVar97 = auVar92._0_4_;
      auVar107._0_4_ = fVar97 * fVar7;
      fVar99 = auVar92._4_4_;
      auVar107._4_4_ = fVar99 * fVar10;
      fVar100 = auVar92._8_4_;
      auVar107._8_4_ = fVar100 * fVar13;
      fVar101 = auVar92._12_4_;
      auVar107._12_4_ = fVar101 * fVar16;
      auVar92 = vsubps_avx(auVar88,auVar107);
      auVar98._0_4_ = fVar97 * fVar57;
      auVar98._4_4_ = fVar99 * fVar59;
      auVar98._8_4_ = fVar100 * fVar60;
      auVar98._12_4_ = fVar101 * fVar61;
      auVar71._0_4_ = fVar76 * fVar67;
      auVar71._4_4_ = fVar77 * fVar73;
      auVar71._8_4_ = fVar78 * fVar74;
      auVar71._12_4_ = fVar79 * fVar75;
      auVar41 = vsubps_avx(auVar98,auVar71);
      auVar64._0_4_ = fVar76 * fVar7;
      auVar64._4_4_ = fVar77 * fVar10;
      auVar64._8_4_ = fVar78 * fVar13;
      auVar64._12_4_ = fVar79 * fVar16;
      auVar69._12_4_ = 0;
      auVar69._0_12_ = ZEXT412(0);
      auVar69 = auVar69 << 0x20;
      auVar96 = ZEXT1264(ZEXT412(0)) << 0x20;
      auVar48._0_4_ = fVar8 * fVar57;
      auVar48._4_4_ = fVar11 * fVar59;
      auVar48._8_4_ = fVar14 * fVar60;
      auVar48._12_4_ = fVar17 * fVar61;
      auVar55 = vsubps_avx(auVar64,auVar48);
      auVar65._8_4_ = 0x7fffffff;
      auVar65._0_8_ = 0x7fffffff7fffffff;
      auVar65._12_4_ = 0x7fffffff;
      auVar42._8_4_ = 0x80000000;
      auVar42._0_8_ = 0x8000000080000000;
      auVar42._12_4_ = 0x80000000;
      auVar3 = vandps_avx(auVar103,auVar42);
      auVar45 = vandps_avx(auVar103,auVar65);
      auVar43._8_4_ = 0x2b8cbccc;
      auVar43._0_8_ = 0x2b8cbccc2b8cbccc;
      auVar43._12_4_ = 0x2b8cbccc;
      uVar50 = auVar3._0_4_;
      auVar40._0_4_ =
           (float)(uVar50 ^ (uint)(fVar97 * auVar47._0_4_ +
                                  auVar63._0_4_ * fVar8 + fVar76 * auVar46._0_4_));
      uVar52 = auVar3._4_4_;
      auVar40._4_4_ =
           (float)(uVar52 ^ (uint)(fVar99 * auVar47._4_4_ +
                                  auVar63._4_4_ * fVar11 + fVar77 * auVar46._4_4_));
      uVar53 = auVar3._8_4_;
      auVar40._8_4_ =
           (float)(uVar53 ^ (uint)(fVar100 * auVar47._8_4_ +
                                  auVar63._8_4_ * fVar14 + fVar78 * auVar46._8_4_));
      uVar54 = auVar3._12_4_;
      auVar40._12_4_ =
           (float)(uVar54 ^ (uint)(fVar101 * auVar47._12_4_ +
                                  auVar63._12_4_ * fVar17 + fVar79 * auVar46._12_4_));
      auVar56._0_4_ =
           (float)(uVar50 ^ (uint)((float)uStack_520 * auVar55._0_4_ +
                                  auVar41._0_4_ * local_528._4_4_ + auVar92._0_4_ * (float)local_528
                                  ));
      auVar56._4_4_ =
           (float)(uVar52 ^ (uint)((float)uStack_520 * auVar55._4_4_ +
                                  auVar41._4_4_ * local_528._4_4_ + auVar92._4_4_ * (float)local_528
                                  ));
      auVar56._8_4_ =
           (float)(uVar53 ^ (uint)((float)uStack_520 * auVar55._8_4_ +
                                  auVar41._8_4_ * local_528._4_4_ + auVar92._8_4_ * (float)local_528
                                  ));
      auVar56._12_4_ =
           (float)(uVar54 ^ (uint)((float)uStack_520 * auVar55._12_4_ +
                                  auVar41._12_4_ * local_528._4_4_ +
                                  auVar92._12_4_ * (float)local_528));
      auVar58._8_4_ = 0x3f800000;
      auVar58._0_8_ = 0x3f8000003f800000;
      auVar58._12_4_ = 0x3f800000;
      auVar49._0_4_ =
           uVar50 ^ (uint)(auVar55._0_4_ * fVar85 + auVar92._0_4_ * fVar6 + auVar41._0_4_ * fVar80);
      auVar49._4_4_ =
           uVar52 ^ (uint)(auVar55._4_4_ * fVar89 + auVar92._4_4_ * fVar9 + auVar41._4_4_ * fVar82);
      auVar49._8_4_ =
           uVar53 ^ (uint)(auVar55._8_4_ * fVar90 + auVar92._8_4_ * fVar12 + auVar41._8_4_ * fVar83)
      ;
      auVar49._12_4_ =
           uVar54 ^ (uint)(auVar55._12_4_ * fVar91 +
                          auVar92._12_4_ * fVar15 + auVar41._12_4_ * fVar84);
      auVar51._0_4_ = auVar40._0_4_ + auVar56._0_4_;
      auVar51._4_4_ = auVar40._4_4_ + auVar56._4_4_;
      auVar51._8_4_ = auVar40._8_4_ + auVar56._8_4_;
      auVar51._12_4_ = auVar40._12_4_ + auVar56._12_4_;
      auVar3 = vcmpps_avx(auVar56,auVar69,1);
      auVar92 = vcmpps_avx(auVar40,auVar69,1);
      auVar92 = vorps_avx(auVar92,auVar3);
      auVar3 = vcmpps_avx(auVar49,auVar69,1);
      auVar46 = vorps_avx(auVar3,auVar92);
      auVar92 = vcmpps_avx(auVar45,auVar43,1);
      auVar3 = vblendvps_avx(auVar45,auVar58,auVar92);
      auVar92 = vorps_avx(auVar92,auVar46);
      auVar45 = vcmpps_avx(auVar3,auVar51,1);
      auVar45 = vorps_avx(auVar92,auVar45);
      auVar3 = vdivps_avx(auVar49,auVar3);
      auVar3 = vblendvps_avx(auVar3,_DAT_140dc4390,auVar45);
      auVar45 = vcmpps_avx(auVar3,local_5e8,1);
      auVar92 = vorps_avx(local_5f8,_DAT_140df9df0);
      auVar44._8_4_ = 4;
      auVar44._0_8_ = 0x400000004;
      auVar44._12_4_ = 4;
      auVar45 = vblendvps_avx(local_5d8,auVar92,auVar45);
      auVar66 = ZEXT1664(auVar45);
      auVar3 = vminps_avx(auVar3,local_5e8);
      pbVar33 = pbVar33 + 0x10;
      auVar92 = vpaddd_avx(local_5f8,auVar44);
      auVar72 = ZEXT1664(auVar92);
    } while (pbVar33 < (byte *)((ulonglong)(iVar34 * 4 + 0xcU & 0xfffffff0) + lVar1 + 4));
    auVar46 = vshufpd_avx(auVar3,auVar3,1);
    auVar92 = vcmpps_avx(auVar3,auVar46,1);
    auVar63 = vshufpd_avx(auVar92,auVar92,3);
    auVar3 = vblendvps_avx(auVar3,auVar46,auVar63);
    auVar46 = vshufps_avx(auVar3,auVar3,0xb1);
    auVar92 = vcmpps_avx(auVar3,auVar46,1);
    auVar92 = vmovshdup_avx(auVar92);
    auVar3 = vblendvps_avx(auVar3,auVar46,auVar92);
    if (auVar3._0_4_ < fVar2) {
      auVar46 = vshufpd_avx(auVar45,auVar45,1);
      auVar45 = vblendvps_avx(auVar45,auVar46,auVar63);
      auVar46 = vshufps_avx(auVar45,auVar45,0xb1);
      auVar45 = vblendvps_avx(auVar45,auVar46,auVar92);
      iVar34 = vextractps_avx(auVar45,0);
      *(float *)(param_4 + 4) = auVar3._0_4_;
      bVar23 = (byte)((ulonglong)local_4f4 >> 0x20);
      uVar31 = 0;
      *(uint *)(param_4 + 8) =
           iVar34 << (bVar23 + bVar4 & 0x1f) |
           ~(7 << (bVar23 + bVar4 & 0x1f)) &
           (uVar36 << (bVar23 & 0x1f) |
           ~(~(uint)(-1L << (bVar4 & 0x3f)) << (bVar23 & 0x1f)) & (uint)local_4f4);
      local_4ec = 1;
    }
  }
  goto LAB_140302190;
}

