/**
 * Function: virtual_void_jph_trackedvehiclecontroller_pos
 * Address:  140362ca0
 * Signature: undefined virtual_void_jph_trackedvehiclecontroller_pos(void)
 * Body size: 2545 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void virtual_void_jph_trackedvehiclecontroller_pos(longlong param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  uint *puVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  bool bVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 in_ZMM8 [64];
  undefined1 auVar31 [16];
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar10 == 0) {
LAB_140362d7d:
    pauVar15 = (undefined1 (*) [16])0x0;
    lVar10 = *(longlong *)(param_1 + 8);
    uVar2 = *(uint *)(lVar10 + 0x90);
  }
  else {
    uVar2 = *(uint *)(lVar10 + 0x200020);
    if (0xffff < (ulonglong)uVar2) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_140362d7d;
    }
    *(uint *)(lVar10 + 0x200020) = uVar2 + 1;
    pauVar15 = (undefined1 (*) [16])(lVar10 + (ulonglong)uVar2 * 0x20 + 0x20);
    uVar9 = rdtsc();
    in_ZMM8 = ZEXT864(uVar9 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)lVar10 >> 0x20),(int)uVar9));
    lVar10 = *(longlong *)(param_1 + 8);
    uVar2 = *(uint *)(lVar10 + 0x90);
  }
  if ((ulonglong)uVar2 != 0) {
    uVar9 = 0;
    do {
      FUN_140361ea0(*(undefined8 *)(*(longlong *)(lVar10 + 0xa0) + uVar9 * 8),uVar9 & 0xffffffff,
                    param_2,*(undefined8 *)(param_1 + 8));
      uVar9 = uVar9 + 1;
    } while (uVar2 != uVar9);
  }
  lVar7 = param_1 + 0x58;
  if ((*(int *)(param_1 + 0xa8) == 0) || (*(float *)(param_1 + 0xac) <= 0.001)) {
    FUN_1405ca1b0(param_1 + 0x20,param_2);
    if (*(char *)(param_1 + 0x58) == '\x01') {
      auVar27 = vandps_avx(ZEXT416(*(uint *)(param_1 + 0x10)),_DAT_140de34a0);
      fVar18 = auVar27._0_4_;
    }
    else {
      fVar18 = 0.0;
    }
    fVar18 = fVar18 * *(float *)(param_1 + 0x20);
    fVar20 = (float)FUN_1405c9590(param_1 + 0x30,
                                  *(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x28));
    FUN_1405ca180(param_1 + 0x20,fVar18 * fVar20,param_2);
    bVar16 = false;
  }
  else {
    fVar18 = (float)FUN_1405cb140(lVar7);
    lVar12 = *(longlong *)(param_1 + 200);
    auVar27 = ZEXT416((uint)(*(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xec)));
    if (0.0 <= fVar18) {
      auVar27 = vmaxss_avx(auVar27,ZEXT416(0xff7fffff));
      if (lVar12 == 0) {
        bVar16 = false;
      }
      else {
        lVar11 = 0;
        do {
          bVar16 = *(int *)(*(longlong *)
                             (*(longlong *)(lVar10 + 0xa0) +
                             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xd8) + lVar11) * 8) +
                           0x18) != -1;
          if (bVar16) break;
          bVar17 = lVar12 * 4 + -4 != lVar11;
          lVar11 = lVar11 + 4;
        } while (bVar17);
      }
      auVar27 = vmaxss_avx(ZEXT416((uint)(*(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x124))
                                  ),auVar27);
      auVar30 = ZEXT1664(auVar27);
      if (*(longlong *)(param_1 + 0x100) != 0) {
        lVar12 = 0;
        do {
          if (*(int *)(*(longlong *)
                        (*(longlong *)(lVar10 + 0xa0) +
                        (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x110) + lVar12) * 8) + 0x18)
              != -1) {
            bVar16 = true;
            auVar27 = vandps_avx(auVar27,_DAT_140de34a0);
            fVar18 = auVar27._0_4_;
            goto joined_r0x0001403632ec;
          }
          lVar12 = lVar12 + 4;
        } while (*(longlong *)(param_1 + 0x100) << 2 != lVar12);
      }
    }
    else {
      auVar27 = vminss_avx(auVar27,ZEXT416(0x7f7fffff));
      if (lVar12 == 0) {
        bVar16 = false;
      }
      else {
        lVar11 = 0;
        do {
          bVar16 = *(int *)(*(longlong *)
                             (*(longlong *)(lVar10 + 0xa0) +
                             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xd8) + lVar11) * 8) +
                           0x18) != -1;
          if (bVar16) break;
          bVar17 = lVar12 * 4 + -4 != lVar11;
          lVar11 = lVar11 + 4;
        } while (bVar17);
      }
      auVar27 = vminss_avx(ZEXT416((uint)(*(float *)(param_1 + 0x128) * *(float *)(param_1 + 0x124))
                                  ),auVar27);
      auVar30 = ZEXT1664(auVar27);
      if (*(longlong *)(param_1 + 0x100) != 0) {
        lVar12 = 0;
        do {
          if (*(int *)(*(longlong *)
                        (*(longlong *)(lVar10 + 0xa0) +
                        (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x110) + lVar12) * 8) + 0x18)
              != -1) {
            bVar16 = true;
            break;
          }
          lVar12 = lVar12 + 4;
        } while (*(longlong *)(param_1 + 0x100) << 2 != lVar12);
      }
    }
    auVar27 = vandps_avx(auVar30._0_16_,_DAT_140de34a0);
    fVar18 = auVar27._0_4_;
joined_r0x0001403632ec:
    if (fVar18 < 3.4028235e+38) {
      fVar18 = (float)FUN_1405cb140(lVar7);
      auVar27 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x24)),
                           ZEXT416((uint)(auVar30._0_4_ * fVar18 * 9.549296)));
      auVar27 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x28)),auVar27);
      *(int *)(param_1 + 0x50) = auVar27._0_4_;
    }
  }
  fVar24 = 0.0;
  FUN_1405cafb0(lVar7,param_2,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x10),
                0.0 < *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x18) & bVar16);
  fVar28 = (float)param_2;
  fVar19 = (float)FUN_1405cb140(lVar7);
  fVar23 = fVar19 * *(float *)(param_1 + 0xac);
  auVar27 = vandps_avx(ZEXT416(*(uint *)(param_1 + 0x10)),_DAT_140de34a0);
  fVar18 = auVar27._0_4_ * *(float *)(param_1 + 0x20);
  fVar20 = (float)FUN_1405c9590(param_1 + 0x30,
                                *(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x28));
  fVar23 = fVar23 * fVar18 * fVar20;
  fVar18 = *(float *)(param_1 + 0x14);
  fVar20 = *(float *)(param_1 + 0x18);
  if ((fVar23 == fVar24) && (!NAN(fVar23) && !NAN(fVar24))) {
    auVar27 = ZEXT416(*(uint *)(param_1 + 0xf0));
    auVar31 = ZEXT416(*(uint *)(param_1 + 0x128));
    goto LAB_140363176;
  }
  fVar4 = (*(float *)(param_1 + 0x50) / (fVar18 * fVar19 * *(float *)(param_1 + 0xec) * 9.549296)) *
          1.001;
  fVar1 = *(float *)(param_1 + 0xf0);
  if (fVar4 * fVar1 < fVar24) {
LAB_1403630e1:
    fVar1 = fVar1 + (fVar28 * fVar23 * fVar18 * *(float *)(param_1 + 0xec)) /
                    *(float *)(param_1 + 0xe0);
  }
  else {
    auVar31._8_4_ = 0x7fffffff;
    auVar31._0_8_ = 0x7fffffff7fffffff;
    auVar31._12_4_ = 0x7fffffff;
    auVar27 = vandps_avx(auVar31,ZEXT416((uint)fVar1));
    auVar31 = vandps_avx(ZEXT416((uint)fVar4),auVar31);
    if (auVar27._0_4_ < auVar31._0_4_) goto LAB_1403630e1;
  }
  auVar27 = ZEXT416((uint)fVar1);
  fVar24 = *(float *)(param_1 + 0x128);
  auVar31 = ZEXT416((uint)fVar24);
  fVar19 = (*(float *)(param_1 + 0x50) / (fVar20 * *(float *)(param_1 + 0x124) * fVar19 * 9.549296))
           * 1.001;
  if (0.0 <= fVar24 * fVar19) {
    auVar29._8_4_ = 0x7fffffff;
    auVar29._0_8_ = 0x7fffffff7fffffff;
    auVar29._12_4_ = 0x7fffffff;
    auVar25 = vandps_avx(ZEXT416((uint)fVar24),auVar29);
    auVar29 = vandps_avx(ZEXT416((uint)fVar19),auVar29);
    if (auVar29._0_4_ <= auVar25._0_4_) goto LAB_140363176;
  }
  auVar31 = ZEXT416((uint)(fVar24 + (fVar28 * fVar23 * *(float *)(param_1 + 0x124) * fVar20) /
                                    *(float *)(param_1 + 0x118)));
LAB_140363176:
  auVar25 = vfmsub231ss_fma(ZEXT416((uint)(fVar20 * auVar27._0_4_)),ZEXT416((uint)fVar18),auVar31);
  if (fVar18 * fVar20 <= 0.0) {
    fVar23 = *(float *)(param_1 + 0xe0);
    auVar29 = vfmsub213ss_fma(ZEXT416((uint)fVar20),ZEXT416((uint)fVar23),
                              ZEXT416((uint)(fVar18 * *(float *)(param_1 + 0x118))));
    auVar22._0_4_ = auVar25._0_4_ / auVar29._0_4_;
    auVar22._4_12_ = auVar25._4_12_;
    auVar25 = vfmadd231ss_fma(auVar27,auVar22,ZEXT416((uint)fVar23));
    auVar27 = vfmadd231ss_fma(auVar31,auVar22,ZEXT416((uint)*(float *)(param_1 + 0x118)));
    uVar5 = auVar27._0_4_;
  }
  else {
    fVar23 = *(float *)(param_1 + 0xe0);
    auVar29 = vfmadd213ss_fma(ZEXT416((uint)fVar18),ZEXT416(*(uint *)(param_1 + 0x118)),
                              ZEXT416((uint)(fVar20 * fVar23)));
    auVar21._0_4_ = auVar25._0_4_ / auVar29._0_4_;
    auVar21._4_12_ = auVar25._4_12_;
    auVar25 = vfmadd231ss_fma(auVar27,auVar21,ZEXT416((uint)fVar23));
    auVar27 = vfnmadd231ss_fma(auVar31,auVar21,ZEXT416(*(uint *)(param_1 + 0x118)));
    uVar5 = auVar27._0_4_;
  }
  *(float *)(param_1 + 0xf0) = auVar25._0_4_;
  *(undefined4 *)(param_1 + 0x128) = uVar5;
  fVar18 = *(float *)(param_1 + 0x1c);
  fVar20 = fVar18 * *(float *)(param_1 + 0xe8);
  if (0.0 < fVar20) {
    auVar27 = vandps_avx(auVar25,_DAT_140de34a0);
    fVar19 = (auVar27._0_4_ * fVar23) / fVar28;
    if (fVar19 < fVar20) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      fVar20 = fVar20 - fVar19;
    }
    else {
      auVar26._0_4_ = -fVar20;
      auVar26._4_4_ = 0x80000000;
      auVar26._8_4_ = 0x80000000;
      auVar26._12_4_ = 0x80000000;
      auVar27 = vcmpss_avx(auVar25,ZEXT816(0),1);
      auVar27 = vblendvps_avx(ZEXT416((uint)fVar20),auVar26,auVar27);
      *(float *)(param_1 + 0xf0) = auVar25._0_4_ - (fVar28 * auVar27._0_4_) / fVar23;
    }
  }
  if ((0.0 < fVar20) && (lVar7 = *(longlong *)(param_1 + 200), lVar7 != 0)) {
    puVar8 = *(uint **)(param_1 + 0xd8);
    lVar12 = *(longlong *)(lVar10 + 0xa0);
    uVar9 = lVar7 * 4 - 4;
    if ((uVar9 & 4) == 0) {
      lVar11 = *(longlong *)(lVar12 + (ulonglong)*puVar8 * 8);
      if (*(int *)(lVar11 + 0x18) == -1) {
        fVar23 = 0.0;
      }
      else {
        fVar23 = *(float *)(*(longlong *)(lVar11 + 0x10) + 0x88) + 0.0;
      }
      puVar13 = puVar8 + 1;
    }
    else {
      fVar23 = 0.0;
      puVar13 = puVar8;
    }
    puVar6 = puVar8 + lVar7;
    if (uVar9 != 0) {
      do {
        lVar7 = *(longlong *)(lVar12 + (ulonglong)*puVar13 * 8);
        if (*(int *)(lVar7 + 0x18) != -1) {
          fVar23 = fVar23 + *(float *)(*(longlong *)(lVar7 + 0x10) + 0x88);
        }
        lVar7 = *(longlong *)(lVar12 + (ulonglong)puVar13[1] * 8);
        if (*(int *)(lVar7 + 0x18) != -1) {
          fVar23 = fVar23 + *(float *)(*(longlong *)(lVar7 + 0x10) + 0x88);
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar6);
    }
    if (0.0 < fVar23) {
      fVar18 = fVar28 * (fVar20 / fVar23);
      if ((uVar9 & 4) == 0) {
        lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + (ulonglong)*puVar8 * 8);
        if (*(int *)(lVar7 + 0x18) != -1) {
          *(float *)(lVar7 + 0x1ac) = fVar18;
        }
        puVar8 = puVar8 + 1;
      }
      if (uVar9 != 0) {
        do {
          lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + (ulonglong)*puVar8 * 8);
          if (*(int *)(lVar7 + 0x18) != -1) {
            *(float *)(lVar7 + 0x1ac) = fVar18;
          }
          lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + (ulonglong)puVar8[1] * 8);
          if (*(int *)(lVar7 + 0x18) != -1) {
            *(float *)(lVar7 + 0x1ac) = fVar18;
          }
          puVar8 = puVar8 + 2;
        } while (puVar8 != puVar6);
      }
      fVar18 = *(float *)(param_1 + 0x1c);
    }
  }
  fVar18 = fVar18 * *(float *)(param_1 + 0x120);
  fVar20 = 0.0;
  fVar23 = 0.0;
  if (0.0 < fVar18) {
    fVar19 = *(float *)(param_1 + 0x128);
    auVar27 = vandps_avx(ZEXT416((uint)fVar19),_DAT_140de34a0);
    fVar24 = (auVar27._0_4_ * *(float *)(param_1 + 0x118)) / fVar28;
    if (fVar18 <= fVar24) {
      auVar25._0_4_ = -fVar18;
      auVar25._4_4_ = 0x80000000;
      auVar25._8_4_ = 0x80000000;
      auVar25._12_4_ = 0x80000000;
      auVar27._0_12_ = ZEXT812(0);
      auVar27._12_4_ = 0;
      auVar27 = vcmpss_avx(ZEXT416((uint)fVar19),auVar27,1);
      auVar27 = vblendvps_avx(ZEXT416((uint)fVar18),auVar25,auVar27);
      *(float *)(param_1 + 0x128) = fVar19 - (fVar28 * auVar27._0_4_) / *(float *)(param_1 + 0x118);
    }
    else {
      *(undefined4 *)(param_1 + 0x128) = 0;
      fVar18 = fVar18 - fVar24;
    }
  }
  if ((0.0 < fVar18) && (lVar7 = *(longlong *)(param_1 + 0x100), lVar7 != 0)) {
    puVar8 = *(uint **)(param_1 + 0x110);
    lVar12 = *(longlong *)(lVar10 + 0xa0);
    uVar9 = lVar7 * 4 - 4;
    puVar13 = puVar8;
    if ((uVar9 & 4) == 0) {
      lVar11 = *(longlong *)(lVar12 + (ulonglong)*puVar8 * 8);
      if (*(int *)(lVar11 + 0x18) != -1) {
        fVar20 = *(float *)(*(longlong *)(lVar11 + 0x10) + 0x88) + 0.0;
      }
      puVar13 = puVar8 + 1;
      fVar23 = fVar20;
    }
    puVar6 = puVar8 + lVar7;
    if (uVar9 != 0) {
      do {
        lVar7 = *(longlong *)(lVar12 + (ulonglong)*puVar13 * 8);
        if (*(int *)(lVar7 + 0x18) != -1) {
          fVar23 = fVar23 + *(float *)(*(longlong *)(lVar7 + 0x10) + 0x88);
        }
        lVar7 = *(longlong *)(lVar12 + (ulonglong)puVar13[1] * 8);
        if (*(int *)(lVar7 + 0x18) != -1) {
          fVar23 = fVar23 + *(float *)(*(longlong *)(lVar7 + 0x10) + 0x88);
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar6);
    }
    if (0.0 < fVar23) {
      fVar28 = fVar28 * (fVar18 / fVar23);
      if ((uVar9 & 4) == 0) {
        lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + (ulonglong)*puVar8 * 8);
        if (*(int *)(lVar7 + 0x18) != -1) {
          *(float *)(lVar7 + 0x1ac) = fVar28;
        }
        puVar8 = puVar8 + 1;
      }
      if (uVar9 != 0) {
        do {
          lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + (ulonglong)*puVar8 * 8);
          if (*(int *)(lVar7 + 0x18) != -1) {
            *(float *)(lVar7 + 0x1ac) = fVar28;
          }
          lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0xa0) + (ulonglong)puVar8[1] * 8);
          if (*(int *)(lVar7 + 0x18) != -1) {
            *(float *)(lVar7 + 0x1ac) = fVar28;
          }
          puVar8 = puVar8 + 2;
        } while (puVar8 != puVar6);
      }
    }
  }
  lVar7 = 0;
  if (*(longlong *)(lVar10 + 0x90) != 0) {
    lVar12 = *(longlong *)(lVar10 + 0xa0);
    lVar7 = *(longlong *)(lVar10 + 0x90) << 3;
    lVar10 = 0;
    do {
      lVar11 = *(longlong *)(lVar12 + lVar10);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
      lVar14 = (longlong)*(int *)(lVar11 + 0x1a0) * 0x38;
      *(float *)(lVar11 + 0x8c) =
           (*(float *)(lVar3 + 0xf0 + lVar14) *
           *(float *)(*(longlong *)
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) +
                         (ulonglong)*(uint *)(lVar3 + 0xc0 + lVar14) * 8) + 0x10) + 0x88)) /
           *(float *)(*(longlong *)(lVar11 + 0x10) + 0x88);
      lVar10 = lVar10 + 8;
    } while (lVar7 != lVar10);
  }
  if (pauVar15 != (undefined1 (*) [16])0x0) {
    uVar9 = rdtsc();
    auVar31 = vpinsrq_avx(in_ZMM8._0_16_,
                          uVar9 & 0xffffffff00000000 |
                          CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar9),1);
    auVar27 = vmovntdq_avx(SUB6416(ZEXT864(0x14139bc20),0));
    *pauVar15 = auVar27;
    auVar27 = vmovntdq_avx(auVar31);
    pauVar15[1] = auVar27;
  }
  return;
}

