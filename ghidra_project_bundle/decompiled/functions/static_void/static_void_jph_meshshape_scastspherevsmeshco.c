/**
 * Function: static_void_jph_meshshape_scastspherevsmeshco
 * Address:  1403052d0
 * Signature: undefined static_void_jph_meshshape_scastspherevsmeshco(void)
 * Body size: 3106 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_meshshape_scastspherevsmeshco
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,uint *param_7,ulonglong *param_8,
               undefined8 param_9)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  byte *pbVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  int iVar27;
  uint uVar28;
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
  undefined1 in_ZMM6 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar52 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 in_ZMM13 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_888 [32];
  undefined8 local_868;
  uint *local_860;
  undefined8 local_858;
  undefined1 (*local_848) [16];
  uint local_840;
  uint local_83c;
  undefined1 local_838 [16];
  longlong local_828;
  ulonglong local_820;
  ulonglong local_818;
  undefined8 uStack_810;
  undefined1 local_808 [16];
  undefined1 local_7f8 [16];
  undefined1 local_7e8 [16];
  undefined1 local_7d8 [16];
  undefined1 local_7c8 [16];
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined1 local_738 [16];
  uint local_71c;
  undefined4 local_718;
  undefined4 local_714;
  undefined4 local_710;
  float local_6f8;
  float local_6d8;
  float local_6d4;
  float local_6d0;
  ulonglong local_6c0;
  undefined1 local_6a8 [8];
  float fStack_6a0;
  undefined1 local_698 [16];
  float afStack_688 [129];
  uint local_484 [128];
  uint local_284;
  byte local_280 [8];
  undefined1 local_278 [48];
  undefined1 local_248 [344];
  ulonglong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_888;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar28 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar28 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar28 + 1;
      local_848 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar28 * 0x20 + 0x20);
      uVar14 = rdtsc();
      local_818 = uVar14 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)local_848 >> 0x20),(int)uVar14);
      uStack_810 = 0;
      goto LAB_14030541f;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_848 = (undefined1 (*) [16])0x0;
LAB_14030541f:
  local_768 = *param_4;
  uStack_760 = param_4[1];
  local_858 = param_9;
  local_860 = param_7;
  local_868 = param_6;
  FUN_1405bfa10(&local_718,param_1,param_2,&local_768);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar31._0_12_ = ZEXT812(0);
  auVar31._12_4_ = 0;
  auVar31 = vsubps_avx(auVar31,auVar1);
  auVar31 = vmaxps_avx(auVar31,auVar1);
  local_698 = vcmpps_avx(auVar31,_DAT_140de3630,2);
  auVar32._8_4_ = 0x3f800000;
  auVar32._0_8_ = 0x3f8000003f800000;
  auVar32._12_4_ = 0x3f800000;
  auVar1 = vdivps_avx(auVar32,auVar1);
  _local_6a8 = vblendvps_avx(auVar1,auVar32,local_698);
  lVar2 = *(longlong *)(param_3 + 0x48);
  uVar14 = *param_8;
  local_284 = 0;
  local_484[0] = *(uint *)(lVar2 + 0x18);
  local_778 = *(undefined4 *)(lVar2 + 0x20);
  local_788 = *(undefined4 *)(lVar2 + 0x24);
  local_798 = *(undefined4 *)(lVar2 + 0x28);
  local_7a8 = *(undefined4 *)(lVar2 + 0x2c);
  local_7b8 = *(undefined4 *)(lVar2 + 0x30);
  uVar15 = *(undefined4 *)(lVar2 + 0x34);
  local_7c8._4_4_ = uVar15;
  local_7c8._0_4_ = uVar15;
  local_7c8._8_4_ = uVar15;
  local_7c8._12_4_ = uVar15;
  local_820 = uVar14 >> 0x20;
  bVar7 = (byte)(uVar14 >> 0x20);
  local_83c = ~(~(uint)(-1L << (*(byte *)(lVar2 + 0x1c) & 0x3f)) << (bVar7 & 0x1f)) & (uint)uVar14;
  bVar7 = bVar7 + *(byte *)(lVar2 + 0x1c);
  local_840 = ~(7 << (bVar7 & 0x1f));
  local_828 = lVar2 + 0x13;
  lVar13 = 0;
  uVar14 = (ulonglong)*(uint *)(lVar2 + 0x18);
  uStack_7b4 = local_7b8;
  uStack_7b0 = local_7b8;
  uStack_7ac = local_7b8;
  uStack_7a4 = local_7a8;
  uStack_7a0 = local_7a8;
  uStack_79c = local_7a8;
  uStack_794 = local_798;
  uStack_790 = local_798;
  uStack_78c = local_798;
  uStack_784 = local_788;
  uStack_780 = local_788;
  uStack_77c = local_788;
  uStack_774 = local_778;
  uStack_770 = local_778;
  uStack_76c = local_778;
  if (uVar14 < 0x10000000) goto LAB_140305ab0;
LAB_140305583:
  pauVar26 = (undefined1 (*) [16])local_278;
  uVar24 = uVar14 >> 0x1c;
  iVar12 = (int)uVar24;
  if (iVar12 != 0xf) {
    uVar28 = (uint)uVar14 & 0xfffffff;
    uVar16 = (ulonglong)(uVar28 * 4);
    lVar13 = (ulonglong)((*(uint *)(lVar2 + uVar16) & 0x1fffffff) << 2) + uVar16 + lVar2;
    pbVar23 = (byte *)(uVar16 + lVar2 + 4);
    pbVar19 = (byte *)(uVar16 + lVar2 + (ulonglong)(iVar12 * 4 + 0xcU & 0xfffffff0) + 4);
    uVar14 = uVar24;
LAB_1403055f6:
    do {
      iVar27 = (int)uVar14;
      if (0 < iVar27) {
        bVar8 = *pbVar23;
        bVar9 = pbVar23[1];
        bVar10 = pbVar23[2];
        bVar11 = pbVar23[3];
        auVar1 = vpinsrd_avx(ZEXT416(*(uint *)(lVar13 + (ulonglong)bVar8 * 8)),
                             *(undefined4 *)(lVar13 + (ulonglong)bVar9 * 8),1);
        auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar13 + (ulonglong)bVar10 * 8),2);
        auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar13 + (ulonglong)bVar11 * 8),3);
        auVar31 = vpinsrd_avx(ZEXT416(*(uint *)(lVar13 + 4 + (ulonglong)bVar8 * 8)),
                              *(undefined4 *)(lVar13 + 4 + (ulonglong)bVar9 * 8),1);
        auVar31 = vpinsrd_avx(auVar31,*(undefined4 *)(lVar13 + 4 + (ulonglong)bVar10 * 8),2);
        auVar31 = vpinsrd_avx(auVar31,*(undefined4 *)(lVar13 + 4 + (ulonglong)bVar11 * 8),3);
        auVar32 = vpsrld_avx(auVar31,10);
        auVar37 = vpsrld_avx(auVar1,0x15);
        auVar55._8_4_ = 0x1fffff;
        auVar55._0_8_ = 0x1fffff001fffff;
        auVar55._12_4_ = 0x1fffff;
        auVar1 = vpand_avx(auVar55,auVar1);
        auVar1 = vcvtdq2ps_avx(auVar1);
        auVar4._4_4_ = uStack_774;
        auVar4._0_4_ = local_778;
        auVar4._8_4_ = uStack_770;
        auVar4._12_4_ = uStack_76c;
        auVar3._4_4_ = uStack_7a4;
        auVar3._0_4_ = local_7a8;
        auVar3._8_4_ = uStack_7a0;
        auVar3._12_4_ = uStack_79c;
        local_838 = vfmadd213ps_fma(auVar1,auVar3,auVar4);
        auVar45._8_4_ = 0x3ff800;
        auVar45._0_8_ = 0x3ff800003ff800;
        auVar45._12_4_ = 0x3ff800;
        auVar1 = vpand_avx(auVar45,auVar32);
        auVar1 = vpor_avx(auVar1,auVar37);
        auVar1 = vcvtdq2ps_avx(auVar1);
        auVar5._4_4_ = uStack_784;
        auVar5._0_4_ = local_788;
        auVar5._8_4_ = uStack_780;
        auVar5._12_4_ = uStack_77c;
        auVar37._4_4_ = uStack_7b4;
        auVar37._0_4_ = local_7b8;
        auVar37._8_4_ = uStack_7b0;
        auVar37._12_4_ = uStack_7ac;
        auVar30 = vfmadd213ps_fma(auVar1,auVar37,auVar5);
        auVar1 = vpand_avx(auVar55,auVar31);
        auVar1 = vcvtdq2ps_avx(auVar1);
        auVar31 = vpinsrd_avx(ZEXT416(*(uint *)(lVar13 + (ulonglong)pbVar23[4] * 8)),
                              *(undefined4 *)(lVar13 + (ulonglong)pbVar23[5] * 8),1);
        auVar31 = vpinsrd_avx(auVar31,*(undefined4 *)(lVar13 + (ulonglong)pbVar23[6] * 8),2);
        auVar31 = vpinsrd_avx(auVar31,*(undefined4 *)(lVar13 + (ulonglong)pbVar23[7] * 8),3);
        auVar6._4_4_ = uStack_794;
        auVar6._0_4_ = local_798;
        auVar6._8_4_ = uStack_790;
        auVar6._12_4_ = uStack_78c;
        auVar35 = vfmadd213ps_fma(auVar1,local_7c8,auVar6);
        auVar1 = vpinsrd_avx(ZEXT416(*(uint *)(lVar13 + 4 + (ulonglong)pbVar23[4] * 8)),
                             *(undefined4 *)(lVar13 + 4 + (ulonglong)pbVar23[5] * 8),1);
        auVar1 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar13 + 4 + (ulonglong)pbVar23[6] * 8),2);
        auVar32 = vpinsrd_avx(auVar1,*(undefined4 *)(lVar13 + 4 + (ulonglong)pbVar23[7] * 8),3);
        auVar40 = vpsrld_avx(auVar32,10);
        auVar43 = vpsrld_avx(auVar31,0x15);
        auVar1 = vpand_avx(auVar55,auVar31);
        auVar1 = vcvtdq2ps_avx(auVar1);
        auVar47 = vfmadd213ps_fma(auVar1,auVar3,auVar4);
        auVar1 = vpand_avx(auVar45,auVar40);
        auVar1 = vpor_avx(auVar1,auVar43);
        auVar1 = vcvtdq2ps_avx(auVar1);
        auVar40 = vfmadd213ps_fma(auVar1,auVar37,auVar5);
        auVar1 = vpand_avx(auVar55,auVar32);
        auVar1 = vcvtdq2ps_avx(auVar1);
        auVar31 = vpinsrd_avx(ZEXT416(*(uint *)(lVar13 + (ulonglong)bVar8 * 8)),
                              *(undefined4 *)(lVar13 + (ulonglong)bVar9 * 8),1);
        auVar31 = vpinsrd_avx(auVar31,*(undefined4 *)(lVar13 + (ulonglong)bVar10 * 8),2);
        auVar43 = vfmadd213ps_fma(auVar1,local_7c8,auVar6);
        auVar1 = vpinsrd_avx(auVar31,*(undefined4 *)(lVar13 + (ulonglong)bVar11 * 8),3);
        auVar31 = vpinsrd_avx(ZEXT416(*(uint *)(lVar13 + 4 + (ulonglong)bVar8 * 8)),
                              *(undefined4 *)(lVar13 + 4 + (ulonglong)bVar9 * 8),1);
        auVar31 = vpinsrd_avx(auVar31,*(undefined4 *)(lVar13 + 4 + (ulonglong)bVar10 * 8),2);
        auVar31 = vpinsrd_avx(auVar31,*(undefined4 *)(lVar13 + 4 + (ulonglong)bVar11 * 8),3);
        auVar32 = vpsrld_avx(auVar31,10);
        auVar45 = vpsrld_avx(auVar1,0x15);
        auVar1 = vpand_avx(auVar55,auVar1);
        auVar1 = vcvtdq2ps_avx(auVar1);
        auVar4 = vfmadd213ps_fma(auVar1,auVar3,auVar4);
        auVar1 = vpand_avx(auVar32,_DAT_140e095e0);
        auVar1 = vpor_avx(auVar45,auVar1);
        auVar1 = vcvtdq2ps_avx(auVar1);
        auVar5 = vfmadd213ps_fma(auVar1,auVar37,auVar5);
        auVar1 = vpand_avx(auVar31,auVar55);
        auVar1 = vcvtdq2ps_avx(auVar1);
        auVar6 = vfmadd213ps_fma(auVar1,local_7c8,auVar6);
        auVar1 = vmovlhps_avx(local_838,auVar30);
        auVar46._8_8_ = 0;
        auVar46._0_8_ = auVar35._0_8_;
        auVar37 = vshufps_avx(auVar1,auVar46,0x88);
        auVar31 = vmovlhps_avx(auVar47,auVar40);
        auVar50._8_8_ = 0;
        auVar50._0_8_ = auVar43._0_8_;
        auVar3 = vshufps_avx(auVar31,auVar50,0x88);
        auVar32 = vmovlhps_avx(auVar4,auVar5);
        *pauVar26 = auVar37;
        pauVar26[1] = auVar3;
        auVar53._8_8_ = 0;
        auVar53._0_8_ = auVar6._0_8_;
        auVar37 = vshufps_avx(auVar32,auVar53,0x88);
        pauVar26[2] = auVar37;
        uVar20 = iVar27 - 1;
        uVar22 = 3;
        if (uVar20 < 3) {
          uVar22 = uVar20;
        }
        if (uVar20 == 0) {
          pauVar26 = pauVar26 + 3;
          pbVar23 = pbVar23 + 0x10;
          uVar14 = 0;
          if (pbVar19 <= pbVar23) break;
          goto LAB_1403055f6;
        }
        auVar1 = vshufps_avx(auVar1,auVar46,0xdd);
        auVar31 = vshufps_avx(auVar31,auVar50,0xdd);
        auVar32 = vshufps_avx(auVar32,auVar53,0xdd);
        pauVar26[3] = auVar1;
        pauVar26[4] = auVar31;
        pauVar26[5] = auVar32;
        if (uVar22 == 1) {
          pauVar26 = pauVar26 + 6;
          uVar14 = (ulonglong)(iVar27 - 2);
        }
        else {
          auVar37 = vunpckhpd_avx(local_838,auVar30);
          auVar32 = ZEXT816(0) << 0x20;
          auVar3 = vunpckhpd_avx(auVar35,auVar32);
          auVar1 = vshufps_avx(auVar37,auVar3,0x88);
          auVar30 = vunpckhpd_avx(auVar47,auVar40);
          auVar35 = vunpckhpd_avx(auVar43,auVar32);
          auVar31 = vshufps_avx(auVar30,auVar35,0x88);
          auVar47 = vunpckhpd_avx(auVar4,auVar5);
          auVar40 = vunpckhpd_avx(auVar6,auVar32);
          auVar32 = vshufps_avx(auVar47,auVar40,0x88);
          pauVar26[6] = auVar1;
          pauVar26[7] = auVar31;
          pauVar26[8] = auVar32;
          if (uVar22 == 2) {
            pauVar26 = pauVar26 + 9;
            uVar14 = (ulonglong)(iVar27 - 3);
          }
          else {
            auVar1 = vshufps_avx(auVar37,auVar3,0xdd);
            auVar31 = vshufps_avx(auVar30,auVar35,0xdd);
            auVar32 = vshufps_avx(auVar47,auVar40,0xdd);
            pauVar26[9] = auVar1;
            pauVar26[10] = auVar31;
            pauVar26[0xb] = auVar32;
            pauVar26 = pauVar26 + 0xc;
            uVar14 = (ulonglong)(iVar27 - 4);
          }
        }
      }
      pbVar23 = pbVar23 + 0x10;
    } while (pbVar23 < pbVar19);
    pbVar23 = local_280;
    pbVar18 = (byte *)(uVar16 + local_828);
    do {
      uVar22 = (uint)uVar24;
      if (0 < (int)uVar22) {
        uVar25 = uVar22 - 1;
        uVar20 = 3;
        if (uVar25 < 3) {
          uVar20 = uVar25;
        }
        *pbVar23 = pbVar18[-3];
        if (uVar25 == 0) {
          pbVar23 = pbVar23 + 1;
          uVar22 = 0;
        }
        else {
          pbVar23[1] = pbVar18[-2];
          if (uVar20 == 1) {
            pbVar23 = pbVar23 + 2;
            uVar22 = uVar22 - 2;
          }
          else {
            pbVar23[2] = pbVar18[-1];
            if (uVar20 == 2) {
              pbVar23 = pbVar23 + 3;
              uVar22 = uVar22 - 3;
            }
            else {
              pbVar23[3] = *pbVar18;
              pbVar23 = pbVar23 + 4;
              uVar22 = uVar22 - 4;
            }
          }
        }
      }
      uVar24 = (ulonglong)uVar22;
      pbVar17 = pbVar18 + 1;
      pbVar18 = pbVar18 + 0x10;
    } while (pbVar17 < pbVar19);
    uVar28 = (uVar28 << ((byte)local_820 & 0x1f) | local_83c) & local_840;
    puVar21 = local_248;
    lVar13 = 0;
    do {
      local_71c = (int)lVar13 << (bVar7 & 0x1f) | uVar28;
      local_758 = *(undefined8 *)(puVar21 + -0x30);
      uStack_750 = *(undefined8 *)(puVar21 + -0x28);
      local_748 = *(undefined8 *)(puVar21 + -0x20);
      uStack_740 = *(undefined8 *)(puVar21 + -0x18);
      local_738 = *(undefined1 (*) [16])(puVar21 + -0x10);
      local_860 = &local_71c;
      local_868 = CONCAT71(local_868._1_7_,local_280[lVar13] >> 5);
      FUN_1405c00d0(&local_718,&local_758,&local_748,local_738);
      if (*(float *)(local_6c0 + 8) <= -3.4028235e+38) break;
      lVar13 = lVar13 + 1;
      bVar29 = puVar21 < local_278 + (uint)(iVar12 * 0x30);
      puVar21 = puVar21 + 0x30;
    } while (bVar29);
  }
  do {
    uVar14 = local_6c0;
    if (*(float *)(local_6c0 + 8) <= -3.4028235e+38) {
LAB_140305e47:
      if (local_848 != (undefined1 (*) [16])0x0) {
        uVar24 = rdtsc();
        auVar1._8_8_ = uStack_810;
        auVar1._0_8_ = local_818;
        auVar31 = vpinsrq_avx(auVar1,uVar24 & 0xffffffff00000000 |
                                     CONCAT44((int)(uVar14 >> 0x20),(int)uVar24),1);
        auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14139aa70),0));
        *local_848 = auVar1;
        auVar1 = vmovntdq_avx(auVar31);
        local_848[1] = auVar1;
      }
      if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_888)) {
                    /* WARNING: Subroutine does not return */
        FUN_140b65db0(local_f0 ^ (ulonglong)auStack_888);
      }
      return;
    }
    uVar14 = (ulonglong)local_284;
    auVar1 = vmaxss_avx(ZEXT416((uint)*(float *)(local_6c0 + 8)),ZEXT416(0x800000));
    do {
      if ((int)uVar14 < 1) goto LAB_140305e47;
      uVar14 = uVar14 - 1;
    } while (auVar1._0_4_ <= afStack_688[uVar14 & 0xffffffff]);
    local_284 = (uint)uVar14;
    lVar13 = (longlong)(int)(uint)uVar14;
    uVar14 = (ulonglong)local_484[lVar13];
    if (0xfffffff < uVar14) goto LAB_140305583;
LAB_140305ab0:
    auVar1 = *(undefined1 (*) [16])(lVar2 + uVar14 * 4);
    auVar31 = *(undefined1 (*) [16])(lVar2 + 0x10 + uVar14 * 4);
    auVar32 = vcvtph2ps_f16c(auVar1);
    auVar1 = vshufps_avx(auVar1,auVar1,0xee);
    auVar3 = vcvtph2ps_f16c(auVar1);
    auVar30 = vcvtph2ps_f16c(auVar31);
    auVar1 = vshufps_avx(auVar31,auVar31,0xee);
    auVar31 = vcvtph2ps_f16c(auVar1);
    auVar1 = *(undefined1 (*) [16])(lVar2 + 0x20 + uVar14 * 4);
    auVar35 = vcvtph2ps_f16c(auVar1);
    auVar1 = vshufps_avx(auVar1,auVar1,0xee);
    auVar47 = vcvtph2ps_f16c(auVar1);
    auVar33._0_4_ = local_6d8 * auVar32._0_4_;
    auVar33._4_4_ = local_6d8 * auVar32._4_4_;
    auVar33._8_4_ = local_6d8 * auVar32._8_4_;
    auVar33._12_4_ = local_6d8 * auVar32._12_4_;
    auVar43._0_4_ = local_6d8 * auVar31._0_4_;
    auVar43._4_4_ = local_6d8 * auVar31._4_4_;
    auVar43._8_4_ = local_6d8 * auVar31._8_4_;
    auVar43._12_4_ = local_6d8 * auVar31._12_4_;
    auVar37 = vminps_avx(auVar33,auVar43);
    auVar1 = vmaxps_avx(auVar33,auVar43);
    auVar40._0_4_ = local_6d4 * auVar3._0_4_;
    auVar40._4_4_ = local_6d4 * auVar3._4_4_;
    auVar40._8_4_ = local_6d4 * auVar3._8_4_;
    auVar40._12_4_ = local_6d4 * auVar3._12_4_;
    auVar34._0_4_ = local_6d4 * auVar35._0_4_;
    auVar34._4_4_ = local_6d4 * auVar35._4_4_;
    auVar34._8_4_ = local_6d4 * auVar35._8_4_;
    auVar34._12_4_ = local_6d4 * auVar35._12_4_;
    auVar3 = vminps_avx(auVar40,auVar34);
    auVar31 = vmaxps_avx(auVar40,auVar34);
    auVar38._0_4_ = local_6d0 * auVar30._0_4_;
    auVar38._4_4_ = local_6d0 * auVar30._4_4_;
    auVar38._8_4_ = local_6d0 * auVar30._8_4_;
    auVar38._12_4_ = local_6d0 * auVar30._12_4_;
    auVar35._0_4_ = local_6d0 * auVar47._0_4_;
    auVar35._4_4_ = local_6d0 * auVar47._4_4_;
    auVar35._8_4_ = local_6d0 * auVar47._8_4_;
    auVar35._12_4_ = local_6d0 * auVar47._12_4_;
    auVar30 = vminps_avx(auVar38,auVar35);
    auVar32 = vmaxps_avx(auVar38,auVar35);
    auVar47._4_4_ = local_6f8;
    auVar47._0_4_ = local_6f8;
    auVar47._8_4_ = local_6f8;
    auVar47._12_4_ = local_6f8;
    local_7d8 = vsubps_avx(auVar37,auVar47);
    auVar44._0_4_ = local_6f8 + auVar1._0_4_;
    auVar44._4_4_ = local_6f8 + auVar1._4_4_;
    auVar44._8_4_ = local_6f8 + auVar1._8_4_;
    auVar44._12_4_ = local_6f8 + auVar1._12_4_;
    local_7f8 = vsubps_avx(auVar3,auVar47);
    auVar41._0_4_ = local_6f8 + auVar31._0_4_;
    auVar41._4_4_ = local_6f8 + auVar31._4_4_;
    auVar41._8_4_ = local_6f8 + auVar31._8_4_;
    auVar41._12_4_ = local_6f8 + auVar31._12_4_;
    local_7e8 = vsubps_avx(auVar30,auVar47);
    local_808._0_4_ = local_6f8 + auVar32._0_4_;
    local_808._4_4_ = local_6f8 + auVar32._4_4_;
    local_808._8_4_ = local_6f8 + auVar32._8_4_;
    local_808._12_4_ = local_6f8 + auVar32._12_4_;
    auVar56._4_4_ = local_718;
    auVar56._0_4_ = local_718;
    auVar56._8_4_ = local_718;
    auVar56._12_4_ = local_718;
    auVar42._4_4_ = local_714;
    auVar42._0_4_ = local_714;
    auVar42._8_4_ = local_714;
    auVar42._12_4_ = local_714;
    local_838._4_4_ = local_710;
    local_838._0_4_ = local_710;
    local_838._8_4_ = local_710;
    local_838._12_4_ = local_710;
    auVar1 = vsubps_avx(local_7d8,auVar56);
    auVar48._0_4_ = auVar1._0_4_ * (float)local_6a8._0_4_;
    auVar48._4_4_ = auVar1._4_4_ * (float)local_6a8._0_4_;
    auVar48._8_4_ = auVar1._8_4_ * (float)local_6a8._0_4_;
    auVar48._12_4_ = auVar1._12_4_ * (float)local_6a8._0_4_;
    auVar1 = vsubps_avx(local_7f8,auVar42);
    auVar51._0_4_ = auVar1._0_4_ * (float)local_6a8._4_4_;
    auVar51._4_4_ = auVar1._4_4_ * (float)local_6a8._4_4_;
    auVar51._8_4_ = auVar1._8_4_ * (float)local_6a8._4_4_;
    auVar51._12_4_ = auVar1._12_4_ * (float)local_6a8._4_4_;
    auVar1 = vsubps_avx(local_7e8,local_838);
    auVar52._0_4_ = auVar1._0_4_ * fStack_6a0;
    auVar52._4_4_ = auVar1._4_4_ * fStack_6a0;
    auVar52._8_4_ = auVar1._8_4_ * fStack_6a0;
    auVar52._12_4_ = auVar1._12_4_ * fStack_6a0;
    auVar1 = vsubps_avx(auVar44,auVar56);
    auVar54._0_4_ = auVar1._0_4_ * (float)local_6a8._0_4_;
    auVar54._4_4_ = auVar1._4_4_ * (float)local_6a8._0_4_;
    auVar54._8_4_ = auVar1._8_4_ * (float)local_6a8._0_4_;
    auVar54._12_4_ = auVar1._12_4_ * (float)local_6a8._0_4_;
    auVar1 = vsubps_avx(auVar41,auVar42);
    auVar30._0_4_ = (float)local_6a8._4_4_ * auVar1._0_4_;
    auVar30._4_4_ = (float)local_6a8._4_4_ * auVar1._4_4_;
    auVar30._8_4_ = (float)local_6a8._4_4_ * auVar1._8_4_;
    auVar30._12_4_ = (float)local_6a8._4_4_ * auVar1._12_4_;
    auVar1 = vsubps_avx(local_808,local_838);
    auVar36._0_4_ = auVar1._0_4_ * fStack_6a0;
    auVar36._4_4_ = auVar1._4_4_ * fStack_6a0;
    auVar36._8_4_ = auVar1._8_4_ * fStack_6a0;
    auVar36._12_4_ = auVar1._12_4_ * fStack_6a0;
    auVar32 = vshufps_avx(local_698,local_698,0);
    auVar1 = vminps_avx(auVar48,auVar54);
    auVar39._8_4_ = 0xff7fffff;
    auVar39._0_8_ = 0xff7fffffff7fffff;
    auVar39._12_4_ = 0xff7fffff;
    auVar1 = vblendvps_avx(auVar1,auVar39,auVar32);
    auVar35 = vshufps_avx(local_698,local_698,0x55);
    auVar31 = vminps_avx(auVar51,auVar30);
    auVar31 = vblendvps_avx(auVar31,auVar39,auVar35);
    auVar31 = vmaxps_avx(auVar1,auVar31);
    auVar47 = vshufps_avx(local_698,local_698,0xaa);
    auVar1 = vminps_avx(auVar52,auVar36);
    auVar1 = vblendvps_avx(auVar1,auVar39,auVar47);
    auVar37 = vmaxps_avx(auVar31,auVar1);
    auVar1 = vmaxps_avx(auVar48,auVar54);
    auVar49._8_4_ = 0x7f7fffff;
    auVar49._0_8_ = 0x7f7fffff7f7fffff;
    auVar49._12_4_ = 0x7f7fffff;
    auVar1 = vblendvps_avx(auVar1,auVar49,auVar32);
    auVar31 = vmaxps_avx(auVar51,auVar30);
    auVar31 = vblendvps_avx(auVar31,auVar49,auVar35);
    auVar31 = vminps_avx(auVar1,auVar31);
    auVar1 = vmaxps_avx(auVar52,auVar36);
    auVar1 = vblendvps_avx(auVar1,auVar49,auVar47);
    auVar31 = vminps_avx(auVar31,auVar1);
    auVar1 = vcmpps_avx(auVar31,auVar37,1);
    auVar31 = vcmpps_avx(auVar31,ZEXT816(0) << 0x20,1);
    auVar3 = vorps_avx(auVar1,auVar31);
    auVar1 = vcmpps_avx(auVar41,local_7f8,1);
    auVar31 = vcmpps_avx(auVar44,local_7d8,1);
    auVar31 = vorps_avx(auVar31,auVar1);
    auVar1 = vcmpps_avx(local_808,local_7e8,1);
    auVar30 = vorps_avx(auVar1,auVar31);
    auVar1 = vcmpps_avx(auVar44,auVar56,1);
    auVar31 = vcmpps_avx(auVar56,local_7d8,1);
    auVar1 = vorps_avx(auVar31,auVar1);
    auVar1 = vandps_avx(auVar32,auVar1);
    auVar31 = vcmpps_avx(auVar41,auVar42,1);
    auVar32 = vcmpps_avx(auVar42,local_7f8,1);
    auVar31 = vorps_avx(auVar32,auVar31);
    auVar31 = vandps_avx(auVar31,auVar35);
    auVar32 = vorps_avx(auVar1,auVar31);
    auVar1 = vcmpps_avx(local_808,local_838,1);
    auVar31 = vcmpps_avx(local_838,local_7e8,1);
    auVar1 = vorps_avx(auVar31,auVar1);
    auVar1 = vandps_avx(auVar47,auVar1);
    auVar1 = vorps_avx(auVar32,auVar1);
    auVar31 = vorps_avx(auVar30,auVar1);
    auVar1 = *(undefined1 (*) [16])(lVar2 + 0x30 + uVar14 * 4);
    auVar31 = vorps_avx(auVar31,auVar3);
    auVar31 = vblendvps_avx(auVar37,auVar49,auVar31);
    auVar37 = vshufpd_avx(auVar31,auVar31,1);
    auVar32 = vcmpps_avx(auVar37,auVar31,1);
    auVar32 = vshufpd_avx(auVar32,auVar32,3);
    auVar31 = vblendvps_avx(auVar31,auVar37,auVar32);
    auVar37 = vshufpd_avx(auVar1,auVar1,1);
    auVar1 = vblendvps_avx(auVar1,auVar37,auVar32);
    auVar37 = vshufps_avx(auVar31,auVar31,0xb1);
    auVar32 = vcmpps_avx(auVar37,auVar31,1);
    auVar32 = vmovshdup_avx(auVar32);
    auVar31 = vblendvps_avx(auVar31,auVar37,auVar32);
    auVar37 = vshufps_avx(auVar1,auVar1,0xb1);
    auVar1 = vblendvps_avx(auVar1,auVar37,auVar32);
    auVar37 = vshufps_avx(auVar31,auVar31,0xd8);
    auVar32 = vcmpps_avx(auVar37,auVar31,1);
    auVar32 = vshufps_avx(auVar32,auVar32,0xe8);
    auVar31 = vblendvps_avx(auVar31,auVar37,auVar32);
    auVar37 = vshufps_avx(auVar1,auVar1,0xd8);
    auVar1 = vblendvps_avx(auVar1,auVar37,auVar32);
    auVar32 = vmaxss_avx(ZEXT416(*(uint *)(local_6c0 + 8)),ZEXT416(0x800000));
    auVar32 = vshufps_avx(auVar32,auVar32,0);
    auVar32 = vcmpps_avx(auVar31,auVar32,1);
    uVar15 = vmovmskps_avx(auVar32);
    auVar31 = vpshufb_avx(auVar31,*(undefined1 (*) [16])
                                   (&DAT_140e086a0 + (uint)(POPCOUNT(uVar15) << 4)));
    auVar1 = vpshufb_avx(auVar1,*(undefined1 (*) [16])
                                 (&DAT_140e086a0 + (uint)(POPCOUNT(uVar15) << 4)));
    *(undefined1 (*) [16])(afStack_688 + lVar13) = auVar31;
    *(undefined1 (*) [16])(local_484 + lVar13) = auVar1;
    local_284 = local_284 + POPCOUNT(uVar15);
  } while( true );
}

