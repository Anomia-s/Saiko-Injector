/**
 * Function: virtual_void_jph_mutablecompoundshape_collide
 * Address:  1402e1d10
 * Signature: undefined virtual_void_jph_mutablecompoundshape_collide(void)
 * Body size: 1259 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void virtual_void_jph_mutablecompoundshape_collide
               (longlong param_1,undefined1 (*param_2) [16],undefined8 *param_3,longlong param_4,
               longlong *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar33 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auStack_168 [32];
  longlong *local_148;
  ulonglong local_140;
  uint local_134;
  undefined1 (*local_130) [16];
  ulonglong local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  uint local_f8;
  int local_f4;
  ulonglong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_168;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar12 != 0) {
    uVar13 = *(uint *)(lVar12 + 0x200020);
    if ((ulonglong)uVar13 < 0x10000) {
      *(uint *)(lVar12 + 0x200020) = uVar13 + 1;
      pauVar16 = (undefined1 (*) [16])(lVar12 + (ulonglong)uVar13 * 0x20 + 0x20);
      uVar19 = rdtsc();
      local_128 = uVar19 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)lVar12 >> 0x20),(int)uVar19);
      uStack_120 = 0;
      goto LAB_1402e1e3d;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar16 = (undefined1 (*) [16])0x0;
LAB_1402e1e3d:
  lVar12 = (**(code **)(*param_5 + 0x10))(param_5,param_1,param_3);
  if ((char)lVar12 != '\0') {
    lVar12 = 0;
    uVar13 = *(int *)(param_1 + 0x50) + 3;
    local_140 = (ulonglong)uVar13;
    local_130 = pauVar16;
    if (3 < uVar13) {
      auVar20 = *param_2;
      uVar3 = *param_3;
      local_140 = (ulonglong)(uVar13 >> 2);
      iVar18 = 0x20 - LZCOUNT(*(int *)(param_1 + 0x50) + -1);
      auVar9 = vshufps_avx(auVar20,auVar20,0);
      auVar29 = ZEXT1664(auVar9);
      bVar10 = (byte)((ulonglong)uVar3 >> 0x20);
      auVar9 = vshufps_avx(auVar20,auVar20,0x55);
      auVar30 = ZEXT1664(auVar9);
      auVar20 = vshufps_avx(auVar20,auVar20,0xaa);
      auVar31 = ZEXT1664(auVar20);
      local_134 = ~(~(uint)(-1L << ((byte)iVar18 & 0x3f)) << (bVar10 & 0x1f)) & (uint)uVar3;
      iVar15 = 0;
      auVar34 = ZEXT1264(ZEXT812(0));
      fVar35 = -3.4028235e+38;
      uVar19 = 0;
      do {
        lVar12 = *(longlong *)(param_1 + 0x80);
        lVar14 = uVar19 * 0x60;
        auVar20 = vcmpps_avx(auVar29._0_16_,*(undefined1 (*) [16])(lVar12 + 0x30 + lVar14),2);
        auVar9 = vcmpps_avx(*(undefined1 (*) [16])(lVar12 + lVar14),auVar29._0_16_,2);
        auVar20 = vandps_avx(auVar20,auVar9);
        auVar9 = vcmpps_avx(auVar30._0_16_,*(undefined1 (*) [16])(lVar12 + 0x40 + lVar14),2);
        auVar22 = vcmpps_avx(*(undefined1 (*) [16])(lVar12 + 0x10 + lVar14),auVar30._0_16_,2);
        auVar9 = vandps_avx(auVar9,auVar22);
        auVar22 = vcmpps_avx(auVar31._0_16_,*(undefined1 (*) [16])(lVar12 + 0x50 + lVar14),2);
        auVar20 = vandps_avx(auVar9,auVar20);
        auVar9 = vcmpps_avx(*(undefined1 (*) [16])(lVar12 + 0x20 + lVar14),auVar31._0_16_,2);
        auVar9 = vandps_avx(auVar22,auVar9);
        auVar22 = auVar20 & auVar9;
        if ((((SUB161(auVar22 >> 0x1f,0) & 1) != 0 || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || auVar22[0xf] < '\0') {
          lVar12 = uVar19 * 4;
          uVar13 = (int)*(ulonglong *)(param_1 + 0x50) - (int)lVar12;
          if (3 < uVar13) {
            uVar13 = 4;
          }
          if (lVar12 - (*(ulonglong *)(param_1 + 0x50) & 0xffffffff) != 0) {
            local_118 = vandps_avx(auVar9,auVar20);
            auVar36 = ZEXT1664(local_118);
            uVar17 = 0;
            iVar2 = local_118._0_4_;
            do {
              iVar11 = (int)uVar17;
              if (iVar2 != 0) {
                uVar17 = (ulonglong)(uint)(iVar15 + iVar11);
                lVar12 = *(longlong *)(param_1 + 0x60);
                puVar1 = (undefined8 *)(lVar12 + uVar17 * 0x28);
                local_f8 = iVar15 + iVar11 << (bVar10 & 0x1f) | local_134;
                auVar20 = _DAT_140e081e0;
                if (*(char *)(lVar12 + 0x24 + uVar17 * 0x28) == '\0') {
                  auVar20 = *(undefined1 (*) [16])((longlong)puVar1 + 0x14);
                  auVar22._0_4_ = auVar20._0_4_ * auVar20._0_4_;
                  auVar22._4_4_ = auVar20._4_4_ * auVar20._4_4_;
                  auVar22._8_4_ = auVar20._8_4_ * auVar20._8_4_;
                  auVar22._12_4_ = auVar20._12_4_ * auVar20._12_4_;
                  auVar9 = vinsertps_avx(auVar22,auVar22,0x4c);
                  auVar23._0_4_ = auVar22._0_4_ + auVar9._0_4_;
                  auVar23._4_4_ = auVar22._4_4_ + auVar9._4_4_;
                  auVar23._8_4_ = auVar22._8_4_ + auVar9._8_4_;
                  auVar23._12_4_ = auVar22._12_4_ + auVar9._12_4_;
                  auVar9 = vshufpd_avx(auVar23,auVar23,1);
                  auVar9 = vmaxss_avx(ZEXT816(0),
                                      ZEXT416((uint)(1.0 - (auVar23._0_4_ + auVar9._0_4_))));
                  auVar9 = vsqrtss_avx(auVar9,auVar9);
                  auVar9 = vinsertps_avx(auVar20,auVar9,0x30);
                  auVar20._0_8_ = auVar9._0_8_ ^ 0x8000000080000000;
                  auVar20._8_4_ = auVar9._8_4_ ^ 0x80000000;
                  auVar20._12_4_ = auVar9._12_4_;
                }
                auVar9 = *(undefined1 (*) [16])(lVar12 + 8 + uVar17 * 0x28);
                fVar5 = auVar20._0_4_;
                auVar25._0_4_ = fVar5 + fVar5;
                fVar6 = auVar20._4_4_;
                auVar25._4_4_ = fVar6 + fVar6;
                fVar7 = auVar20._8_4_;
                auVar25._8_4_ = fVar7 + fVar7;
                fVar8 = auVar20._12_4_;
                auVar25._12_4_ = fVar8 + fVar8;
                auVar22 = vshufps_avx(auVar25,auVar25,0xc9);
                auVar23 = vshufps_avx(auVar20,auVar20,0xd2);
                auVar21 = vshufps_avx(auVar25,auVar25,0xd2);
                auVar20 = vshufps_avx(auVar20,auVar20,0xff);
                auVar28._0_4_ = auVar23._0_4_ * auVar21._0_4_;
                auVar28._4_4_ = auVar23._4_4_ * auVar21._4_4_;
                auVar28._8_4_ = auVar23._8_4_ * auVar21._8_4_;
                auVar28._12_4_ = auVar23._12_4_ * auVar21._12_4_;
                auVar33._0_4_ = fVar5 * auVar25._0_4_;
                auVar33._4_4_ = fVar6 * auVar25._4_4_;
                auVar33._8_4_ = fVar7 * auVar25._8_4_;
                auVar33._12_4_ = fVar8 * auVar25._12_4_;
                auVar33 = vshufps_avx(auVar33,auVar33,0xc9);
                auVar32._8_4_ = 0x3f800000;
                auVar32._0_8_ = 0x3f8000003f800000;
                auVar32._12_4_ = 0x3f800000;
                auVar33 = vsubps_avx(auVar32,auVar33);
                auVar33 = vsubps_avx(auVar33,auVar28);
                auVar26._0_4_ = auVar20._0_4_ * auVar22._0_4_ + auVar25._0_4_ * auVar23._0_4_;
                auVar26._4_4_ = auVar20._4_4_ * auVar22._4_4_ + auVar25._4_4_ * auVar23._4_4_;
                auVar26._8_4_ = auVar20._8_4_ * auVar22._8_4_ + auVar25._8_4_ * auVar23._8_4_;
                auVar26._12_4_ = auVar20._12_4_ * auVar22._12_4_ + auVar25._12_4_ * auVar23._12_4_;
                auVar27._0_4_ = auVar20._0_4_ * auVar21._0_4_;
                auVar27._4_4_ = auVar20._4_4_ * auVar21._4_4_;
                auVar27._8_4_ = auVar20._8_4_ * auVar21._8_4_;
                auVar27._12_4_ = auVar20._12_4_ * auVar21._12_4_;
                auVar21._0_4_ = fVar5 * auVar22._0_4_;
                auVar21._4_4_ = fVar6 * auVar22._4_4_;
                auVar21._8_4_ = fVar7 * auVar22._8_4_;
                auVar21._12_4_ = fVar8 * auVar22._12_4_;
                auVar23 = vsubps_avx(auVar21,auVar27);
                auVar20 = vblendps_avx(auVar23,auVar34._0_16_,8);
                auVar22 = vblendps_avx(auVar33,auVar26,2);
                auVar20 = vblendps_avx(auVar20,auVar22,3);
                auVar22 = vinsertps_avx(auVar23,auVar33,0x58);
                auVar22 = vblendps_avx(auVar22,auVar26,4);
                auVar23 = vinsertps_avx(auVar23,auVar26,8);
                auVar23 = vblendps_avx(auVar23,auVar33,4);
                auVar21 = vshufps_avx(auVar9,auVar9,0);
                auVar33 = vshufps_avx(auVar9,auVar9,0x55);
                auVar9 = vshufps_avx(auVar9,auVar9,0xaa);
                auVar24._0_4_ =
                     auVar9._0_4_ * auVar23._0_4_ +
                     auVar21._0_4_ * auVar20._0_4_ + auVar33._0_4_ * auVar22._0_4_;
                auVar24._4_4_ =
                     auVar9._4_4_ * auVar23._4_4_ +
                     auVar21._4_4_ * auVar20._4_4_ + auVar33._4_4_ * auVar22._4_4_;
                auVar24._8_4_ =
                     auVar9._8_4_ * auVar23._8_4_ +
                     auVar21._8_4_ * auVar20._8_4_ + auVar33._8_4_ * auVar22._8_4_;
                auVar24._12_4_ =
                     auVar9._12_4_ * auVar23._12_4_ +
                     auVar21._12_4_ * auVar20._12_4_ + auVar33._12_4_ * auVar22._12_4_;
                auVar9 = vsubps_avx(auVar34._0_16_,auVar24);
                auVar9 = vinsertps_avx(auVar9,ZEXT416(0x3f800000),0x30);
                plVar4 = (longlong *)*puVar1;
                local_108._0_4_ =
                     auVar31._0_4_ * auVar23._0_4_ +
                     auVar29._0_4_ * auVar20._0_4_ + auVar30._0_4_ * auVar22._0_4_ + auVar9._0_4_;
                local_108._4_4_ =
                     auVar31._4_4_ * auVar23._4_4_ +
                     auVar29._4_4_ * auVar20._4_4_ + auVar30._4_4_ * auVar22._4_4_ + auVar9._4_4_;
                local_108._8_4_ =
                     auVar31._8_4_ * auVar23._8_4_ +
                     auVar29._8_4_ * auVar20._8_4_ + auVar30._8_4_ * auVar22._8_4_ + auVar9._8_4_;
                local_108._12_4_ =
                     auVar31._12_4_ * auVar23._12_4_ +
                     auVar29._12_4_ * auVar20._12_4_ + auVar30._12_4_ * auVar22._12_4_ +
                     auVar9._12_4_;
                local_148 = param_5;
                local_f4 = iVar18 + (int)((ulonglong)uVar3 >> 0x20);
                lVar12 = (**(code **)(*plVar4 + 0xa0))(plVar4,local_108,&local_f8,param_4);
                if (*(float *)(param_4 + 8) <= fVar35) break;
              }
              lVar12 = 0;
              if (uVar13 <= iVar11 + 1U) break;
              uVar17 = (ulonglong)(iVar11 + 1);
              local_118 = auVar36._0_16_;
              iVar2 = *(int *)(local_118 + uVar17 * 4);
            } while( true );
          }
        }
        uVar19 = uVar19 + 1;
        iVar15 = iVar15 + 4;
        pauVar16 = local_130;
      } while (uVar19 != local_140);
    }
  }
  auVar9._8_8_ = uStack_120;
  auVar9._0_8_ = local_128;
  if (pauVar16 != (undefined1 (*) [16])0x0) {
    uVar19 = rdtsc();
    auVar9 = vpinsrq_avx(auVar9,uVar19 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)lVar12 >> 0x20),(int)uVar19),1);
    auVar20 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c34f),0));
    *pauVar16 = auVar20;
    auVar20 = vmovntdq_avx(auVar9);
    pauVar16[1] = auVar20;
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_168)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_168);
}

