/**
 * Function: void_jph_softbodymotionproperties_applypressu
 * Address:  140383920
 * Signature: undefined void_jph_softbodymotionproperties_applypressu(void)
 * Body size: 698 bytes
 */


void void_jph_softbodymotionproperties_applypressu(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  uint *puVar9;
  undefined1 (*pauVar10) [16];
  uint *puVar11;
  longlong lVar12;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 auVar15 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar16 [64];
  undefined1 extraout_var [56];
  
  auVar14 = in_ZMM0._0_16_;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar15._0_8_ = __dyn_tls_on_demand_init();
    auVar15._8_56_ = extraout_var;
    auVar14 = auVar15._0_16_;
  }
  puVar9 = *(uint **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x170);
  if (puVar9 != (uint *)0x0) {
    uVar4 = puVar9[0x80008];
    if ((ulonglong)uVar4 < 0x10000) {
      puVar9[0x80008] = uVar4 + 1;
      pauVar10 = (undefined1 (*) [16])(puVar9 + (ulonglong)uVar4 * 8 + 8);
      uVar6 = rdtsc();
      puVar9 = (uint *)CONCAT44((int)((ulonglong)puVar9 >> 0x20),(int)uVar6);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar6 & 0xffffffff00000000 | (ulonglong)puVar9;
      fVar3 = *(float *)(param_1 + 0x1c8);
      goto joined_r0x0001403839e9;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      puVar9 = (uint *)(*(code *)PTR_vfunction4_1414f67c8)();
      auVar16._8_56_ = extraout_var_00;
      auVar16._0_8_ = extraout_XMM0_Qa;
      auVar14 = auVar16._0_16_;
    }
  }
  pauVar10 = (undefined1 (*) [16])0x0;
  fVar3 = *(float *)(param_1 + 0x1c8);
joined_r0x0001403839e9:
  if (0.0 < fVar3) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x20);
    puVar9 = (uint *)0x0;
    if (lVar5 != 0) {
      puVar11 = *(uint **)(*(longlong *)(param_1 + 0x100) + 0x30);
      puVar9 = puVar11 + lVar5 * 4;
      lVar5 = *(longlong *)(param_1 + 0x118);
      fVar23 = 0.0;
      puVar13 = puVar11;
      do {
        auVar17 = *(undefined1 (*) [16])(lVar5 + 0x10 + (ulonglong)*puVar13 * 0x50);
        auVar25 = *(undefined1 (*) [16])(lVar5 + 0x10 + (ulonglong)puVar13[1] * 0x50);
        auVar24 = vshufps_avx(auVar25,auVar25,0xc9);
        auVar28._0_4_ = auVar17._0_4_ * auVar24._0_4_;
        auVar28._4_4_ = auVar17._4_4_ * auVar24._4_4_;
        auVar28._8_4_ = auVar17._8_4_ * auVar24._8_4_;
        auVar28._12_4_ = auVar17._12_4_ * auVar24._12_4_;
        auVar17 = vshufps_avx(auVar17,auVar17,0xc9);
        auVar24._0_4_ = auVar17._0_4_ * auVar25._0_4_;
        auVar24._4_4_ = auVar17._4_4_ * auVar25._4_4_;
        auVar24._8_4_ = auVar17._8_4_ * auVar25._8_4_;
        auVar24._12_4_ = auVar17._12_4_ * auVar25._12_4_;
        auVar17 = vsubps_avx(auVar28,auVar24);
        auVar17 = vshufps_avx(auVar17,auVar17,0xc9);
        pfVar1 = (float *)(lVar5 + 0x10 + (ulonglong)puVar13[2] * 0x50);
        auVar25._0_4_ = auVar17._0_4_ * *pfVar1;
        auVar25._4_4_ = auVar17._4_4_ * pfVar1[1];
        auVar25._8_4_ = auVar17._8_4_ * pfVar1[2];
        auVar25._12_4_ = auVar17._12_4_ * pfVar1[3];
        auVar17 = vinsertps_avx(auVar25,auVar25,0x4c);
        auVar26._0_4_ = auVar25._0_4_ + auVar17._0_4_;
        auVar26._4_4_ = auVar25._4_4_ + auVar17._4_4_;
        auVar26._8_4_ = auVar25._8_4_ + auVar17._8_4_;
        auVar26._12_4_ = auVar25._12_4_ + auVar17._12_4_;
        auVar17 = vshufpd_avx(auVar26,auVar26,1);
        fVar23 = fVar23 + auVar26._0_4_ + auVar17._0_4_;
        puVar13 = puVar13 + 4;
      } while (puVar13 != puVar9);
      if (0.0 < fVar23) {
        auVar17._0_4_ = (*(float *)(param_2 + 0x84) * fVar3) / fVar23;
        auVar17._4_12_ = SUB6012((undefined1  [60])0x0,0);
        auVar17 = vshufps_avx(auVar17,auVar17,0);
        do {
          lVar5 = *(longlong *)(param_1 + 0x118);
          lVar12 = (ulonglong)*puVar11 * 0x50;
          auVar25 = *(undefined1 (*) [16])(lVar5 + 0x10 + lVar12);
          auVar24 = vsubps_avx(*(undefined1 (*) [16])(lVar5 + 0x10 + (ulonglong)puVar11[1] * 0x50),
                               auVar25);
          auVar26 = vsubps_avx(*(undefined1 (*) [16])(lVar5 + 0x10 + (ulonglong)puVar11[2] * 0x50),
                               auVar25);
          auVar25 = vshufps_avx(auVar26,auVar26,0xc9);
          auVar27._0_4_ = auVar24._0_4_ * auVar25._0_4_;
          auVar27._4_4_ = auVar24._4_4_ * auVar25._4_4_;
          auVar27._8_4_ = auVar24._8_4_ * auVar25._8_4_;
          auVar27._12_4_ = auVar24._12_4_ * auVar25._12_4_;
          auVar25 = vshufps_avx(auVar24,auVar24,0xc9);
          auVar19._0_4_ = auVar25._0_4_ * auVar26._0_4_;
          auVar19._4_4_ = auVar25._4_4_ * auVar26._4_4_;
          auVar19._8_4_ = auVar25._8_4_ * auVar26._8_4_;
          auVar19._12_4_ = auVar25._12_4_ * auVar26._12_4_;
          auVar25 = vsubps_avx(auVar27,auVar19);
          auVar25 = vshufps_avx(auVar25,auVar25,9);
          fVar18 = auVar17._0_4_ * auVar25._0_4_;
          fVar20 = auVar17._4_4_ * auVar25._4_4_;
          fVar21 = auVar17._8_4_ * auVar25._8_4_;
          fVar22 = auVar17._12_4_ * auVar25._12_4_;
          fVar3 = *(float *)(lVar5 + 0x4c + lVar12);
          pfVar1 = (float *)(lVar5 + 0x20 + lVar12);
          fVar23 = pfVar1[1];
          fVar7 = pfVar1[2];
          fVar8 = pfVar1[3];
          pfVar2 = (float *)(lVar5 + 0x20 + lVar12);
          *pfVar2 = fVar18 * fVar3 + *pfVar1;
          pfVar2[1] = fVar20 * fVar3 + fVar23;
          pfVar2[2] = fVar21 * fVar3 + fVar7;
          pfVar2[3] = fVar22 * fVar3 + fVar8;
          lVar5 = *(longlong *)(param_1 + 0x118);
          lVar12 = (ulonglong)puVar11[1] * 0x50;
          fVar3 = *(float *)(lVar5 + 0x4c + lVar12);
          pfVar1 = (float *)(lVar5 + 0x20 + lVar12);
          fVar23 = pfVar1[1];
          fVar7 = pfVar1[2];
          fVar8 = pfVar1[3];
          pfVar2 = (float *)(lVar5 + 0x20 + lVar12);
          *pfVar2 = fVar18 * fVar3 + *pfVar1;
          pfVar2[1] = fVar20 * fVar3 + fVar23;
          pfVar2[2] = fVar21 * fVar3 + fVar7;
          pfVar2[3] = fVar22 * fVar3 + fVar8;
          lVar5 = *(longlong *)(param_1 + 0x118);
          lVar12 = (ulonglong)puVar11[2] * 0x50;
          fVar3 = *(float *)(lVar5 + 0x4c + lVar12);
          pfVar1 = (float *)(lVar5 + 0x20 + lVar12);
          fVar23 = pfVar1[1];
          fVar7 = pfVar1[2];
          fVar8 = pfVar1[3];
          pfVar2 = (float *)(lVar5 + 0x20 + lVar12);
          *pfVar2 = fVar18 * fVar3 + *pfVar1;
          pfVar2[1] = fVar20 * fVar3 + fVar23;
          pfVar2[2] = fVar21 * fVar3 + fVar7;
          pfVar2[3] = fVar22 * fVar3 + fVar8;
          puVar11 = puVar11 + 4;
        } while (puVar11 != puVar9);
      }
    }
  }
  if (pauVar10 != (undefined1 (*) [16])0x0) {
    uVar6 = rdtsc();
    auVar17 = vpinsrq_avx(auVar14,uVar6 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)puVar9 >> 0x20),(int)uVar6),1);
    auVar14 = vmovntdq_avx(SUB6416(ZEXT864(0x14139a578),0));
    *pauVar10 = auVar14;
    auVar14 = vmovntdq_avx(auVar17);
    pauVar10[1] = auVar14;
  }
  return;
}

