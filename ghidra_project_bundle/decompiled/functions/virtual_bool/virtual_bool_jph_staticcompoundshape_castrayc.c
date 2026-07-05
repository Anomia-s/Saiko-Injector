/**
 * Function: virtual_bool_jph_staticcompoundshape_castrayc
 * Address:  1402e7e70
 * Signature: undefined virtual_bool_jph_staticcompoundshape_castrayc(void)
 * Body size: 2198 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
virtual_bool_jph_staticcompoundshape_castrayc
          (longlong param_1,float *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
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
  float fVar19;
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  byte bVar25;
  undefined1 auVar26 [16];
  char cVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  float *pfVar33;
  int iVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
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
  undefined1 in_ZMM6 [64];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [64];
  undefined1 auVar61 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar64 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar65 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [16];
  ulonglong local_5d8;
  undefined8 uStack_5d0;
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [8];
  float fStack_5b0;
  float fStack_5ac;
  undefined1 local_5a8 [8];
  float fStack_5a0;
  float fStack_59c;
  undefined1 local_598 [8];
  float fStack_590;
  float fStack_58c;
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  uint local_540;
  int local_53c;
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  float *local_518;
  longlong local_510;
  undefined8 local_508;
  int local_500;
  undefined1 local_4fc [4];
  undefined1 auStack_4f8 [512];
  uint local_2f8 [130];
  ulonglong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_98 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_6a8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  uVar28 = 0;
  if (lVar5 == 0) {
    pauVar36 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar35 = *(uint *)(lVar5 + 0x200020);
    if ((ulonglong)uVar35 < 0x10000) {
      *(uint *)(lVar5 + 0x200020) = uVar35 + 1;
      pauVar36 = (undefined1 (*) [16])(lVar5 + (ulonglong)uVar35 * 0x20 + 0x20);
      uVar30 = rdtsc();
      local_5d8 = uVar30 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar30);
      uStack_5d0 = 0;
    }
    else {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      pauVar36 = (undefined1 (*) [16])0x0;
    }
  }
  local_508 = *param_3;
  local_500 = 0x20 - LZCOUNT(*(int *)(param_1 + 0x50) + -1);
  local_4fc[0] = 0;
  auVar59 = *(undefined1 (*) [16])(param_2 + 4);
  auVar44._0_12_ = ZEXT812(0);
  auVar44._12_4_ = 0;
  auVar44 = vsubps_avx(auVar44,auVar59);
  auVar44 = vmaxps_avx(auVar44,auVar59);
  local_528 = vcmpps_avx(auVar44,_DAT_140de3630,2);
  auVar58._8_4_ = 0x3f800000;
  auVar58._0_8_ = 0x3f8000003f800000;
  auVar58._12_4_ = 0x3f800000;
  auVar59 = vdivps_avx(auVar58,auVar59);
  local_538 = vblendvps_avx(auVar59,auVar58,local_528);
  bVar25 = (byte)((ulonglong)local_508 >> 0x20);
  local_2f8[0] = 0;
  uVar35 = ~(~(uint)(-1L << ((byte)local_500 & 0x3f)) << (bVar25 & 0x1f)) & (uint)local_508;
  iVar34 = local_500 + (int)((ulonglong)local_508 >> 0x20);
  local_5c8 = vshufps_avx(local_528,local_528,0);
  local_578 = vshufps_avx(local_528,local_528,0x55);
  local_588 = vshufps_avx(local_528,local_528,0xaa);
  _local_598 = vshufps_avx(local_538,local_538,0);
  _local_5a8 = vshufps_avx(local_538,local_538,0x55);
  _local_5b8 = vshufps_avx(local_538,local_538,0xaa);
  auVar59._0_12_ = ZEXT812(0);
  auVar59._12_4_ = 0;
  uVar37 = 0;
  uVar30 = 0;
  local_518 = param_2;
  local_510 = param_4;
  do {
    if ((int)(uint)uVar30 < 0) {
      uVar31 = (uint)uVar30 & 0x7fffffff;
      uVar30 = (ulonglong)uVar31;
      local_688._0_8_ = param_1;
      lVar5 = *(longlong *)(param_1 + 0x60);
      puVar1 = (undefined8 *)(lVar5 + uVar30 * 0x28);
      local_678._0_4_ = uVar35;
      local_540 = uVar31 << (bVar25 & 0x1f) | uVar35;
      auVar40 = _DAT_140e081e0;
      if (*(char *)(lVar5 + 0x24 + uVar30 * 0x28) == '\0') {
        auVar44 = *(undefined1 (*) [16])((longlong)puVar1 + 0x14);
        auVar45._0_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar45._4_4_ = auVar44._4_4_ * auVar44._4_4_;
        auVar45._8_4_ = auVar44._8_4_ * auVar44._8_4_;
        auVar45._12_4_ = auVar44._12_4_ * auVar44._12_4_;
        auVar40 = vinsertps_avx(auVar45,auVar45,0x4c);
        auVar46._0_4_ = auVar45._0_4_ + auVar40._0_4_;
        auVar46._4_4_ = auVar45._4_4_ + auVar40._4_4_;
        auVar46._8_4_ = auVar45._8_4_ + auVar40._8_4_;
        auVar46._12_4_ = auVar45._12_4_ + auVar40._12_4_;
        auVar40 = vshufpd_avx(auVar46,auVar46,1);
        auVar40 = vmaxss_avx(auVar59,ZEXT416((uint)(1.0 - (auVar46._0_4_ + auVar40._0_4_))));
        auVar40 = vsqrtss_avx(auVar40,auVar40);
        auVar44 = vinsertps_avx(auVar44,auVar40,0x30);
        auVar40._0_8_ = auVar44._0_8_ ^ 0x8000000080000000;
        auVar40._8_4_ = auVar44._8_4_ ^ 0x80000000;
        auVar40._12_4_ = auVar44._12_4_;
      }
      auVar44 = *(undefined1 (*) [16])(lVar5 + 8 + uVar30 * 0x28);
      fVar4 = auVar40._0_4_;
      auVar49._0_4_ = fVar4 + fVar4;
      fVar2 = auVar40._4_4_;
      auVar49._4_4_ = fVar2 + fVar2;
      fVar3 = auVar40._8_4_;
      auVar49._8_4_ = fVar3 + fVar3;
      fVar8 = auVar40._12_4_;
      auVar49._12_4_ = fVar8 + fVar8;
      auVar45 = vshufps_avx(auVar49,auVar49,0xc9);
      auVar46 = vshufps_avx(auVar40,auVar40,0xd2);
      auVar41 = vshufps_avx(auVar49,auVar49,0xd2);
      auVar40 = vshufps_avx(auVar40,auVar40,0xff);
      auVar55._0_4_ = auVar46._0_4_ * auVar41._0_4_;
      auVar55._4_4_ = auVar46._4_4_ * auVar41._4_4_;
      auVar55._8_4_ = auVar46._8_4_ * auVar41._8_4_;
      auVar55._12_4_ = auVar46._12_4_ * auVar41._12_4_;
      auVar57._0_4_ = fVar4 * auVar49._0_4_;
      auVar57._4_4_ = fVar2 * auVar49._4_4_;
      auVar57._8_4_ = fVar3 * auVar49._8_4_;
      auVar57._12_4_ = fVar8 * auVar49._12_4_;
      auVar42 = vshufps_avx(auVar57,auVar57,0xc9);
      auVar42 = vsubps_avx(auVar58,auVar42);
      auVar42 = vsubps_avx(auVar42,auVar55);
      auVar50._0_4_ = auVar40._0_4_ * auVar45._0_4_ + auVar49._0_4_ * auVar46._0_4_;
      auVar50._4_4_ = auVar40._4_4_ * auVar45._4_4_ + auVar49._4_4_ * auVar46._4_4_;
      auVar50._8_4_ = auVar40._8_4_ * auVar45._8_4_ + auVar49._8_4_ * auVar46._8_4_;
      auVar50._12_4_ = auVar40._12_4_ * auVar45._12_4_ + auVar49._12_4_ * auVar46._12_4_;
      auVar53._0_4_ = auVar40._0_4_ * auVar41._0_4_;
      auVar53._4_4_ = auVar40._4_4_ * auVar41._4_4_;
      auVar53._8_4_ = auVar40._8_4_ * auVar41._8_4_;
      auVar53._12_4_ = auVar40._12_4_ * auVar41._12_4_;
      auVar41._0_4_ = fVar4 * auVar45._0_4_;
      auVar41._4_4_ = fVar2 * auVar45._4_4_;
      auVar41._8_4_ = fVar3 * auVar45._8_4_;
      auVar41._12_4_ = fVar8 * auVar45._12_4_;
      auVar46 = vsubps_avx(auVar41,auVar53);
      auVar40 = vblendps_avx(auVar46,ZEXT816(0) << 0x20,8);
      auVar45 = vblendps_avx(auVar42,auVar50,2);
      auVar40 = vblendps_avx(auVar40,auVar45,3);
      auVar45 = vinsertps_avx(auVar46,auVar42,0x58);
      auVar45 = vblendps_avx(auVar45,auVar50,4);
      auVar46 = vinsertps_avx(auVar46,auVar50,8);
      auVar46 = vblendps_avx(auVar46,auVar42,4);
      auVar41 = vshufps_avx(auVar44,auVar44,0);
      fVar8 = auVar40._0_4_;
      fVar11 = auVar40._4_4_;
      fVar14 = auVar40._8_4_;
      fVar17 = auVar40._12_4_;
      auVar40 = vshufps_avx(auVar44,auVar44,0x55);
      fVar9 = auVar45._0_4_;
      fVar12 = auVar45._4_4_;
      fVar15 = auVar45._8_4_;
      fVar18 = auVar45._12_4_;
      auVar44 = vshufps_avx(auVar44,auVar44,0xaa);
      fVar10 = auVar46._0_4_;
      fVar13 = auVar46._4_4_;
      fVar16 = auVar46._8_4_;
      fVar19 = auVar46._12_4_;
      auVar47._0_4_ = auVar44._0_4_ * fVar10 + auVar41._0_4_ * fVar8 + auVar40._0_4_ * fVar9;
      auVar47._4_4_ = auVar44._4_4_ * fVar13 + auVar41._4_4_ * fVar11 + auVar40._4_4_ * fVar12;
      auVar47._8_4_ = auVar44._8_4_ * fVar16 + auVar41._8_4_ * fVar14 + auVar40._8_4_ * fVar15;
      auVar47._12_4_ = auVar44._12_4_ * fVar19 + auVar41._12_4_ * fVar17 + auVar40._12_4_ * fVar18;
      auVar44 = vsubps_avx(ZEXT816(0) << 0x20,auVar47);
      auVar44 = vinsertps_avx(auVar44,ZEXT416(0x3f800000),0x30);
      fVar4 = *param_2;
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      local_568._0_4_ = fVar3 * fVar10 + fVar4 * fVar8 + fVar2 * fVar9 + auVar44._0_4_;
      local_568._4_4_ = fVar3 * fVar13 + fVar4 * fVar11 + fVar2 * fVar12 + auVar44._4_4_;
      local_568._8_4_ = fVar3 * fVar16 + fVar4 * fVar14 + fVar2 * fVar15 + auVar44._8_4_;
      local_568._12_4_ = fVar3 * fVar19 + fVar4 * fVar17 + fVar2 * fVar18 + auVar44._12_4_;
      auVar51._0_4_ = *param_2 + param_2[4];
      auVar51._4_4_ = param_2[1] + param_2[5];
      auVar51._8_4_ = param_2[2] + param_2[6];
      auVar51._12_4_ = param_2[3] + param_2[7];
      auVar40 = vshufps_avx(auVar51,auVar51,0);
      auVar45 = vshufps_avx(auVar51,auVar51,0x55);
      auVar46 = vshufps_avx(auVar51,auVar51,0xaa);
      auVar42._0_4_ =
           auVar46._0_4_ * fVar10 + auVar40._0_4_ * fVar8 + auVar45._0_4_ * fVar9 + auVar44._0_4_;
      auVar42._4_4_ =
           auVar46._4_4_ * fVar13 + auVar40._4_4_ * fVar11 + auVar45._4_4_ * fVar12 + auVar44._4_4_;
      auVar42._8_4_ =
           auVar46._8_4_ * fVar16 + auVar40._8_4_ * fVar14 + auVar45._8_4_ * fVar15 + auVar44._8_4_;
      auVar42._12_4_ =
           auVar46._12_4_ * fVar19 + auVar40._12_4_ * fVar17 + auVar45._12_4_ * fVar18 +
           auVar44._12_4_;
      local_558 = vsubps_avx(auVar42,local_568);
      plVar6 = (longlong *)*puVar1;
      auVar43 = ZEXT1664(auVar58);
      auVar60 = ZEXT1664(auVar59);
      local_53c = iVar34;
      cVar27 = (**(code **)(*plVar6 + 0x98))(plVar6,local_568,&local_540,param_4);
      auVar58 = auVar43._0_16_;
      auVar59 = auVar60._0_16_;
      if (cVar27 != '\0') {
        uVar37 = 1;
      }
      auVar43 = ZEXT464((uint)*(float *)(param_4 + 4));
      uVar35 = local_678._0_4_;
      param_1 = local_688._0_8_;
      if (*(float *)(param_4 + 4) <= auVar60._0_4_) {
LAB_1402e8643:
        auVar26._8_8_ = uStack_5d0;
        auVar26._0_8_ = local_5d8;
        if (pauVar36 != (undefined1 (*) [16])0x0) {
          uVar7 = rdtsc();
          auVar44 = vpinsrq_avx(auVar26,uVar7,1);
          auVar59 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b980),0));
          *pauVar36 = auVar59;
          auVar59 = vmovntdq_avx(auVar44);
          pauVar36[1] = auVar59;
        }
        if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_6a8)) {
          return uVar37;
        }
                    /* WARNING: Subroutine does not return */
        FUN_140b65db0(local_f0 ^ (ulonglong)auStack_6a8);
      }
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x80);
      lVar32 = uVar30 * 0x40;
      local_688 = *(undefined1 (*) [16])(lVar5 + lVar32);
      local_5e8 = vcvtph2ps_f16c(local_688);
      local_668 = *(undefined1 (*) [16])(lVar5 + 0x10 + lVar32);
      local_608 = vshufps_avx(local_688,local_688,0xee);
      local_678 = vcvtph2ps_f16c(local_608);
      auVar59 = *(undefined1 (*) [16])(lVar5 + 0x20 + lVar32);
      local_5f8 = vshufps_avx(local_668,local_668,0xee);
      local_628 = vcvtph2ps_f16c(local_5f8);
      local_618 = vcvtph2ps_f16c(auVar59);
      fVar4 = *param_2;
      auVar65._4_4_ = fVar4;
      auVar65._0_4_ = fVar4;
      auVar65._8_4_ = fVar4;
      auVar65._12_4_ = fVar4;
      fVar4 = param_2[1];
      local_638._4_4_ = fVar4;
      local_638._0_4_ = fVar4;
      local_638._8_4_ = fVar4;
      local_638._12_4_ = fVar4;
      auVar44 = vsubps_avx(local_5e8,auVar65);
      auVar61._0_4_ = auVar44._0_4_ * (float)local_598._0_4_;
      auVar61._4_4_ = auVar44._4_4_ * (float)local_598._4_4_;
      auVar61._8_4_ = auVar44._8_4_ * fStack_590;
      auVar61._12_4_ = auVar44._12_4_ * fStack_58c;
      auVar44 = vsubps_avx(local_678,local_638);
      auVar54._0_4_ = auVar44._0_4_ * (float)local_5a8._0_4_;
      auVar54._4_4_ = auVar44._4_4_ * (float)local_5a8._4_4_;
      auVar54._8_4_ = auVar44._8_4_ * fStack_5a0;
      auVar54._12_4_ = auVar44._12_4_ * fStack_59c;
      auVar44 = vsubps_avx(local_628,auVar65);
      auVar48._0_4_ = auVar44._0_4_ * (float)local_598._0_4_;
      auVar48._4_4_ = auVar44._4_4_ * (float)local_598._4_4_;
      auVar48._8_4_ = auVar44._8_4_ * fStack_590;
      auVar48._12_4_ = auVar44._12_4_ * fStack_58c;
      auVar44 = vsubps_avx(local_618,local_638);
      auVar52._0_4_ = auVar44._0_4_ * (float)local_5a8._0_4_;
      auVar52._4_4_ = auVar44._4_4_ * (float)local_5a8._4_4_;
      auVar52._8_4_ = auVar44._8_4_ * fStack_5a0;
      auVar52._12_4_ = auVar44._12_4_ * fStack_59c;
      auVar44 = vminps_avx(auVar61,auVar48);
      auVar64._8_4_ = 0xff7fffff;
      auVar64._0_8_ = 0xff7fffffff7fffff;
      auVar64._12_4_ = 0xff7fffff;
      auVar44 = vblendvps_avx(auVar44,auVar64,local_5c8);
      auVar58 = vminps_avx(auVar54,auVar52);
      auVar58 = vblendvps_avx(auVar58,auVar64,local_578);
      local_648 = vcvtph2ps_f16c(local_668);
      auVar58 = vmaxps_avx(auVar44,auVar58);
      fVar4 = param_2[2];
      auVar63._4_4_ = fVar4;
      auVar63._0_4_ = fVar4;
      auVar63._8_4_ = fVar4;
      auVar63._12_4_ = fVar4;
      auVar44 = vsubps_avx(local_648,auVar63);
      auVar38._0_4_ = auVar44._0_4_ * (float)local_5b8._0_4_;
      auVar38._4_4_ = auVar44._4_4_ * (float)local_5b8._4_4_;
      auVar38._8_4_ = auVar44._8_4_ * fStack_5b0;
      auVar38._12_4_ = auVar44._12_4_ * fStack_5ac;
      auVar46 = vshufps_avx(auVar59,auVar59,0xee);
      local_658 = vcvtph2ps_f16c(auVar46);
      auVar44 = vsubps_avx(local_658,auVar63);
      auVar56._0_4_ = auVar44._0_4_ * (float)local_5b8._0_4_;
      auVar56._4_4_ = auVar44._4_4_ * (float)local_5b8._4_4_;
      auVar56._8_4_ = auVar44._8_4_ * fStack_5b0;
      auVar56._12_4_ = auVar44._12_4_ * fStack_5ac;
      auVar44 = vminps_avx(auVar38,auVar56);
      auVar44 = vblendvps_avx(auVar44,auVar64,local_588);
      auVar40 = vmaxps_avx(auVar58,auVar44);
      auVar44 = vmaxps_avx(auVar61,auVar48);
      auVar62._8_4_ = 0x7f7fffff;
      auVar62._0_8_ = 0x7f7fffff7f7fffff;
      auVar62._12_4_ = 0x7f7fffff;
      auVar44 = vblendvps_avx(auVar44,auVar62,local_5c8);
      auVar58 = vmaxps_avx(auVar54,auVar52);
      auVar58 = vblendvps_avx(auVar58,auVar62,local_578);
      auVar58 = vminps_avx(auVar44,auVar58);
      auVar44 = vmaxps_avx(auVar38,auVar56);
      auVar44 = vblendvps_avx(auVar44,auVar62,local_588);
      auVar58 = vminps_avx(auVar58,auVar44);
      auVar44 = vcmpps_avx(auVar58,auVar40,1);
      auVar58 = vcmpps_avx(auVar58,ZEXT816(0) << 0x20,1);
      auVar20 = vcvtph2ps_f16c(local_668);
      auVar45 = vorps_avx(auVar44,auVar58);
      auVar21 = vcvtph2ps_f16c(auVar46);
      auVar20 = vcmpps_avx(auVar21,auVar20,1);
      auVar21 = vcvtph2ps_f16c(auVar59);
      auVar22 = vcvtph2ps_f16c(local_608);
      auVar23 = vcvtph2ps_f16c(local_688);
      auVar24 = vcvtph2ps_f16c(local_5f8);
      auVar21 = vcmpps_avx(auVar21,auVar22,1);
      auVar22 = vcmpps_avx(auVar24,auVar23,1);
      auVar59 = vpackssdw_avx(auVar21._0_16_,auVar21._0_16_);
      auVar44 = vpackssdw_avx(auVar22._0_16_,auVar22._0_16_);
      auVar44 = vpor_avx(auVar59,auVar44);
      auVar59 = vpackssdw_avx(auVar20._0_16_,auVar20._0_16_);
      auVar41 = vpor_avx(auVar44,auVar59);
      auVar59 = vcmpps_avx(local_628,auVar65,1);
      auVar44 = vcmpps_avx(auVar65,local_5e8,1);
      auVar58 = vorps_avx(auVar44,auVar59);
      auVar59 = vcmpps_avx(local_618,local_638,1);
      auVar44 = vcmpps_avx(local_638,local_678,1);
      auVar44 = vorps_avx(auVar44,auVar59);
      auVar59 = vandps_avx(local_5c8,auVar58);
      auVar44 = vandps_avx(local_578,auVar44);
      auVar46 = vorps_avx(auVar59,auVar44);
      auVar44 = vcmpps_avx(local_658,auVar63,1);
      auVar59 = SUB6416(ZEXT864(0),0) << 0x20;
      auVar58 = vcmpps_avx(auVar63,local_648,1);
      auVar44 = vorps_avx(auVar58,auVar44);
      auVar44 = vandps_avx(auVar44,local_588);
      auVar44 = vorps_avx(auVar46,auVar44);
      auVar58 = vpunpcklwd_avx(auVar41,auVar41);
      auVar58 = vpor_avx(auVar58,auVar44);
      auVar44 = *(undefined1 (*) [16])(lVar5 + 0x30 + lVar32);
      auVar58 = vpor_avx(auVar45,auVar58);
      auVar40 = vblendvps_avx(auVar40,auVar62,auVar58);
      auVar58._8_4_ = 0x3f800000;
      auVar58._0_8_ = 0x3f8000003f800000;
      auVar58._12_4_ = 0x3f800000;
      auVar46 = vshufpd_avx(auVar40,auVar40,1);
      auVar45 = vcmpps_avx(auVar46,auVar40,1);
      auVar45 = vshufpd_avx(auVar45,auVar45,3);
      auVar40 = vblendvps_avx(auVar40,auVar46,auVar45);
      auVar46 = vshufpd_avx(auVar44,auVar44,1);
      auVar44 = vblendvps_avx(auVar44,auVar46,auVar45);
      auVar46 = vshufps_avx(auVar40,auVar40,0xb1);
      auVar45 = vcmpps_avx(auVar46,auVar40,1);
      auVar45 = vmovshdup_avx(auVar45);
      auVar40 = vblendvps_avx(auVar40,auVar46,auVar45);
      auVar46 = vshufps_avx(auVar44,auVar44,0xb1);
      auVar44 = vblendvps_avx(auVar44,auVar46,auVar45);
      auVar46 = vshufps_avx(auVar40,auVar40,0xd8);
      auVar45 = vcmpps_avx(auVar46,auVar40,1);
      auVar45 = vshufps_avx(auVar45,auVar45,0xe8);
      auVar40 = vblendvps_avx(auVar40,auVar46,auVar45);
      auVar46 = vshufps_avx(auVar44,auVar44,0xd8);
      auVar44 = vblendvps_avx(auVar44,auVar46,auVar45);
      fVar4 = *(float *)(param_4 + 4);
      auVar39._4_4_ = fVar4;
      auVar39._0_4_ = fVar4;
      auVar39._8_4_ = fVar4;
      auVar39._12_4_ = fVar4;
      auVar43 = ZEXT1664(auVar39);
      auVar45 = vcmpps_avx(auVar40,auVar39,1);
      uVar29 = vmovmskps_avx(auVar45);
      auVar40 = vpshufb_avx(auVar40,*(undefined1 (*) [16])
                                     (&DAT_140e086a0 + (uint)(POPCOUNT(uVar29) << 4)));
      auVar44 = vpshufb_avx(auVar44,*(undefined1 (*) [16])
                                     (&DAT_140e086a0 + (uint)(POPCOUNT(uVar29) << 4)));
      *(undefined1 (*) [16])(auStack_4f8 + uVar28 * 4) = auVar40;
      *(undefined1 (*) [16])(local_2f8 + uVar28) = auVar44;
      uVar28 = (ulonglong)(uint)((int)uVar28 + POPCOUNT(uVar29));
      if (fVar4 <= 0.0) goto LAB_1402e8643;
    }
    while( true ) {
      pfVar33 = (float *)(local_4fc + uVar28 * 4);
      uVar30 = 0;
      do {
        if (uVar28 == uVar30) goto LAB_1402e8643;
        uVar30 = uVar30 + 1;
        fVar4 = *pfVar33;
        pfVar33 = pfVar33 + -1;
      } while (auVar43._0_4_ <= fVar4);
      uVar28 = (ulonglong)(uint)((int)uVar28 - (int)uVar30);
      uVar30 = (ulonglong)local_2f8[uVar28];
      if (uVar30 != 0x7fffffff) break;
                    /* WARNING: Read-only address (ram,0x000140de3630) is written */
                    /* WARNING: Read-only address (ram,0x000140e081e0) is written */
      auVar43 = ZEXT464(*(uint *)(param_4 + 4));
    }
  } while( true );
}

