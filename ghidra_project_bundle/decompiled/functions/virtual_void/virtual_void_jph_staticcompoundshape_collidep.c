/**
 * Function: virtual_void_jph_staticcompoundshape_collidep
 * Address:  1402e8fc0
 * Signature: undefined virtual_void_jph_staticcompoundshape_collidep(void)
 * Body size: 1252 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void virtual_void_jph_staticcompoundshape_collidep
               (longlong param_1,undefined4 *param_2,undefined8 *param_3,longlong param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar34 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_358 [32];
  undefined8 local_338;
  undefined1 (*local_330) [16];
  ulonglong local_328;
  undefined8 uStack_320;
  undefined1 local_318 [16];
  uint local_300;
  int local_2fc;
  uint local_2f8 [130];
  ulonglong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_358;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar4 != 0) {
    uVar3 = *(uint *)(lVar4 + 0x200020);
    if ((ulonglong)uVar3 < 0x10000) {
      *(uint *)(lVar4 + 0x200020) = uVar3 + 1;
      local_330 = (undefined1 (*) [16])(lVar4 + (ulonglong)uVar3 * 0x20 + 0x20);
      uVar15 = rdtsc();
      local_328 = uVar15 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)local_330 >> 0x20),(int)uVar15);
      uStack_320 = 0;
      goto LAB_1402e90f2;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_330 = (undefined1 (*) [16])0x0;
LAB_1402e90f2:
  uVar5 = *param_3;
  iVar16 = 0x20 - LZCOUNT(*(int *)(param_1 + 0x50) + -1);
  uVar13 = *param_2;
  auVar27 = ZEXT1664(CONCAT412(uVar13,CONCAT48(uVar13,CONCAT44(uVar13,uVar13))));
  uVar13 = param_2[1];
  auVar28 = ZEXT1664(CONCAT412(uVar13,CONCAT48(uVar13,CONCAT44(uVar13,uVar13))));
  uVar13 = param_2[2];
  auVar29 = ZEXT1664(CONCAT412(uVar13,CONCAT48(uVar13,CONCAT44(uVar13,uVar13))));
  bVar11 = (byte)((ulonglong)uVar5 >> 0x20);
  local_2f8[0] = 0;
  fVar30 = -3.4028235e+38;
  auVar31 = ZEXT1664(_DAT_140e081e0);
  auVar32 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
  auVar33 = ZEXT1264(ZEXT812(0));
  uVar15 = 0;
  do {
    uVar12 = uVar15;
    iVar17 = (int)uVar12;
    uVar3 = local_2f8[uVar12];
    if ((ulonglong)uVar3 != 0x7fffffff) {
      if ((int)uVar3 < 0) {
        uVar15 = (ulonglong)(uVar3 & 0x7fffffff);
        lVar4 = *(longlong *)(param_1 + 0x60);
        puVar1 = (undefined8 *)(lVar4 + uVar15 * 0x28);
        local_300 = (uVar3 & 0x7fffffff) << (bVar11 & 0x1f) |
                    ~(~(uint)(-1L << ((byte)iVar16 & 0x3f)) << (bVar11 & 0x1f)) & (uint)uVar5;
        auVar19 = auVar31._0_16_;
        if (*(char *)(lVar4 + 0x24 + uVar15 * 0x28) == '\0') {
          auVar19 = *(undefined1 (*) [16])((longlong)puVar1 + 0x14);
          auVar21._0_4_ = auVar19._0_4_ * auVar19._0_4_;
          auVar21._4_4_ = auVar19._4_4_ * auVar19._4_4_;
          auVar21._8_4_ = auVar19._8_4_ * auVar19._8_4_;
          auVar21._12_4_ = auVar19._12_4_ * auVar19._12_4_;
          auVar2 = vinsertps_avx(auVar21,auVar21,0x4c);
          auVar22._0_4_ = auVar21._0_4_ + auVar2._0_4_;
          auVar22._4_4_ = auVar21._4_4_ + auVar2._4_4_;
          auVar22._8_4_ = auVar21._8_4_ + auVar2._8_4_;
          auVar22._12_4_ = auVar21._12_4_ + auVar2._12_4_;
          auVar2 = vshufpd_avx(auVar22,auVar22,1);
          auVar2 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)(1.0 - (auVar22._0_4_ + auVar2._0_4_))));
          auVar2 = vsqrtss_avx(auVar2,auVar2);
          auVar2 = vinsertps_avx(auVar19,auVar2,0x30);
          auVar19._0_8_ = auVar2._0_8_ ^ 0x8000000080000000;
          auVar19._8_4_ = auVar2._8_4_ ^ 0x80000000;
          auVar19._12_4_ = auVar2._12_4_;
        }
        auVar2 = *(undefined1 (*) [16])(lVar4 + 8 + uVar15 * 0x28);
        fVar7 = auVar19._0_4_;
        auVar23._0_4_ = fVar7 + fVar7;
        fVar8 = auVar19._4_4_;
        auVar23._4_4_ = fVar8 + fVar8;
        fVar9 = auVar19._8_4_;
        auVar23._8_4_ = fVar9 + fVar9;
        fVar10 = auVar19._12_4_;
        auVar23._12_4_ = fVar10 + fVar10;
        auVar21 = vshufps_avx(auVar23,auVar23,0xc9);
        auVar22 = vshufps_avx(auVar19,auVar19,0xd2);
        auVar18 = vshufps_avx(auVar23,auVar23,0xd2);
        auVar19 = vshufps_avx(auVar19,auVar19,0xff);
        auVar34._0_4_ = auVar22._0_4_ * auVar18._0_4_;
        auVar34._4_4_ = auVar22._4_4_ * auVar18._4_4_;
        auVar34._8_4_ = auVar22._8_4_ * auVar18._8_4_;
        auVar34._12_4_ = auVar22._12_4_ * auVar18._12_4_;
        auVar26._0_4_ = fVar7 * auVar23._0_4_;
        auVar26._4_4_ = fVar8 * auVar23._4_4_;
        auVar26._8_4_ = fVar9 * auVar23._8_4_;
        auVar26._12_4_ = fVar10 * auVar23._12_4_;
        auVar26 = vshufps_avx(auVar26,auVar26,0xc9);
        auVar26 = vsubps_avx(auVar32._0_16_,auVar26);
        auVar26 = vsubps_avx(auVar26,auVar34);
        auVar24._0_4_ = auVar19._0_4_ * auVar21._0_4_ + auVar23._0_4_ * auVar22._0_4_;
        auVar24._4_4_ = auVar19._4_4_ * auVar21._4_4_ + auVar23._4_4_ * auVar22._4_4_;
        auVar24._8_4_ = auVar19._8_4_ * auVar21._8_4_ + auVar23._8_4_ * auVar22._8_4_;
        auVar24._12_4_ = auVar19._12_4_ * auVar21._12_4_ + auVar23._12_4_ * auVar22._12_4_;
        auVar25._0_4_ = auVar19._0_4_ * auVar18._0_4_;
        auVar25._4_4_ = auVar19._4_4_ * auVar18._4_4_;
        auVar25._8_4_ = auVar19._8_4_ * auVar18._8_4_;
        auVar25._12_4_ = auVar19._12_4_ * auVar18._12_4_;
        auVar18._0_4_ = fVar7 * auVar21._0_4_;
        auVar18._4_4_ = fVar8 * auVar21._4_4_;
        auVar18._8_4_ = fVar9 * auVar21._8_4_;
        auVar18._12_4_ = fVar10 * auVar21._12_4_;
        auVar22 = vsubps_avx(auVar18,auVar25);
        auVar19 = vblendps_avx(auVar22,auVar33._0_16_,8);
        auVar21 = vblendps_avx(auVar26,auVar24,2);
        auVar19 = vblendps_avx(auVar19,auVar21,3);
        auVar21 = vinsertps_avx(auVar22,auVar26,0x58);
        auVar21 = vblendps_avx(auVar21,auVar24,4);
        auVar22 = vinsertps_avx(auVar22,auVar24,8);
        auVar22 = vblendps_avx(auVar22,auVar26,4);
        auVar18 = vshufps_avx(auVar2,auVar2,0);
        auVar26 = vshufps_avx(auVar2,auVar2,0x55);
        auVar2 = vshufps_avx(auVar2,auVar2,0xaa);
        auVar20._0_4_ =
             auVar2._0_4_ * auVar22._0_4_ +
             auVar18._0_4_ * auVar19._0_4_ + auVar26._0_4_ * auVar21._0_4_;
        auVar20._4_4_ =
             auVar2._4_4_ * auVar22._4_4_ +
             auVar18._4_4_ * auVar19._4_4_ + auVar26._4_4_ * auVar21._4_4_;
        auVar20._8_4_ =
             auVar2._8_4_ * auVar22._8_4_ +
             auVar18._8_4_ * auVar19._8_4_ + auVar26._8_4_ * auVar21._8_4_;
        auVar20._12_4_ =
             auVar2._12_4_ * auVar22._12_4_ +
             auVar18._12_4_ * auVar19._12_4_ + auVar26._12_4_ * auVar21._12_4_;
        auVar2 = vsubps_avx(auVar33._0_16_,auVar20);
        auVar2 = vinsertps_avx(auVar2,ZEXT416(0x3f800000),0x30);
        plVar6 = (longlong *)*puVar1;
        local_318._0_4_ =
             auVar29._0_4_ * auVar22._0_4_ +
             auVar27._0_4_ * auVar19._0_4_ + auVar28._0_4_ * auVar21._0_4_ + auVar2._0_4_;
        local_318._4_4_ =
             auVar29._4_4_ * auVar22._4_4_ +
             auVar27._4_4_ * auVar19._4_4_ + auVar28._4_4_ * auVar21._4_4_ + auVar2._4_4_;
        local_318._8_4_ =
             auVar29._8_4_ * auVar22._8_4_ +
             auVar27._8_4_ * auVar19._8_4_ + auVar28._8_4_ * auVar21._8_4_ + auVar2._8_4_;
        local_318._12_4_ =
             auVar29._12_4_ * auVar22._12_4_ +
             auVar27._12_4_ * auVar19._12_4_ + auVar28._12_4_ * auVar21._12_4_ + auVar2._12_4_;
        local_338 = param_5;
        local_2fc = iVar16 + (int)((ulonglong)uVar5 >> 0x20);
        uVar12 = (**(code **)(*plVar6 + 0xa0))(plVar6,local_318,&local_300,param_4);
        if (*(float *)(param_4 + 8) <= fVar30) break;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x80);
        lVar14 = (ulonglong)uVar3 * 0x40;
        auVar19 = *(undefined1 (*) [16])(lVar4 + lVar14);
        auVar21 = vcvtph2ps_f16c(auVar19);
        auVar2 = *(undefined1 (*) [16])(lVar4 + 0x10 + lVar14);
        auVar19 = vshufps_avx(auVar19,auVar19,0xee);
        auVar22 = vcvtph2ps_f16c(auVar19);
        auVar19 = *(undefined1 (*) [16])(lVar4 + 0x20 + lVar14);
        auVar18 = vcvtph2ps_f16c(auVar2);
        auVar2 = vshufps_avx(auVar2,auVar2,0xee);
        auVar2 = vcvtph2ps_f16c(auVar2);
        auVar26 = vcvtph2ps_f16c(auVar19);
        auVar19 = vshufps_avx(auVar19,auVar19,0xee);
        auVar20 = vcvtph2ps_f16c(auVar19);
        auVar19 = *(undefined1 (*) [16])(lVar4 + 0x30 + lVar14);
        auVar2 = vcmpps_avx(auVar27._0_16_,auVar2,2);
        auVar21 = vcmpps_avx(auVar21,auVar27._0_16_,2);
        auVar2 = vandps_avx(auVar21,auVar2);
        auVar21 = vcmpps_avx(auVar28._0_16_,auVar26,2);
        auVar22 = vcmpps_avx(auVar22,auVar28._0_16_,2);
        auVar21 = vandps_avx(auVar22,auVar21);
        auVar2 = vandps_avx(auVar21,auVar2);
        auVar21 = vcmpps_avx(auVar29._0_16_,auVar20,2);
        auVar22 = vcmpps_avx(auVar18,auVar29._0_16_,2);
        auVar21 = vandps_avx(auVar22,auVar21);
        auVar2 = vandps_avx(auVar2,auVar21);
        auVar21 = vshufps_avx(auVar19,auVar19,0xf4);
        auVar22 = vshufps_avx(auVar2,auVar2,0xaa);
        auVar19 = vblendvps_avx(auVar21,auVar19,auVar22);
        auVar21 = vshufps_avx(auVar19,auVar19,0xf8);
        auVar22 = vshufps_avx(auVar2,auVar2,0x55);
        auVar19 = vblendvps_avx(auVar21,auVar19,auVar22);
        auVar21 = vshufps_avx(auVar19,auVar19,0xf9);
        auVar22 = vshufps_avx(auVar2,auVar2,0);
        auVar19 = vblendvps_avx(auVar21,auVar19,auVar22);
        uVar13 = vmovmskps_avx(auVar2);
        *(undefined1 (*) [16])(local_2f8 + uVar12) = auVar19;
        iVar17 = iVar17 + POPCOUNT(uVar13);
        if (*(float *)(param_4 + 8) <= fVar30) break;
      }
    }
    uVar12 = 0;
    uVar15 = (ulonglong)(iVar17 - 1);
  } while (0 < iVar17);
  if (local_330 != (undefined1 (*) [16])0x0) {
    uVar15 = rdtsc();
    auVar2._8_8_ = uStack_320;
    auVar2._0_8_ = local_328;
    auVar2 = vpinsrq_avx(auVar2,uVar15 & 0xffffffff00000000 |
                                CONCAT44((int)(uVar12 >> 0x20),(int)uVar15),1);
    auVar19 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c3dc),0));
    *local_330 = auVar19;
    auVar19 = vmovntdq_avx(auVar2);
    local_330[1] = auVar19;
  }
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_358)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_f0 ^ (ulonglong)auStack_358);
  }
  return;
}

