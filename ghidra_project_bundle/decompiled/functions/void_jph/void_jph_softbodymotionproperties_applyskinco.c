/**
 * Function: void_jph_softbodymotionproperties_applyskinco
 * Address:  140384950
 * Signature: undefined void_jph_softbodymotionproperties_applyskinco(void)
 * Body size: 872 bytes
 */


void void_jph_softbodymotionproperties_applyskinco
               (longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  float *pfVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_ZMM5 [64];
  undefined1 in_ZMM6 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined4 extraout_XMM0_Db;
  undefined1 extraout_var [56];
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x80) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1d7) == '\0') {
    return;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  auVar24 = in_ZMM5._4_12_;
  pfVar10 = *(float **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170
             );
  if (pfVar10 != (float *)0x0) {
    fVar29 = pfVar10[0x80008];
    if ((ulonglong)(uint)fVar29 < 0x10000) {
      pfVar10[0x80008] = (float)((int)fVar29 + 1);
      pauVar12 = (undefined1 (*) [16])(pfVar10 + (ulonglong)(uint)fVar29 * 8 + 8);
      uVar7 = rdtsc();
      pfVar10 = (float *)CONCAT44((int)((ulonglong)pfVar10 >> 0x20),(int)uVar7);
      in_ZMM6 = ZEXT864(uVar7 & 0xffffffff00000000 | (ulonglong)pfVar10);
      cVar3 = *(char *)(param_1 + 0x1d8);
      goto joined_r0x000140384a83;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      pfVar10 = (float *)(*(code *)PTR_vfunction4_1414f67c8)
                                   ("ProfileMeasurement: Too many samples, some data will be lost!")
      ;
      auVar24 = in_ZMM5._4_12_;
    }
  }
  pauVar12 = (undefined1 (*) [16])0x0;
  cVar3 = *(char *)(param_1 + 0x1d8);
joined_r0x000140384a83:
  if (cVar3 == '\x01') {
    pfVar10 = (float *)(ulonglong)*(uint *)(param_1 + 0x1c0);
    auVar15._0_4_ = (float)*(uint *)(param_2 + 0x9c) / (float)(longlong)pfVar10;
    auVar15._4_12_ = auVar24;
  }
  else {
    auVar15 = SUB6416(ZEXT464(0x3f800000),0);
  }
  auVar18 = in_ZMM6._0_16_;
  if (param_3 < param_4) {
    lVar4 = *(longlong *)(param_1 + 0x118);
    lVar5 = *(longlong *)(param_1 + 0x178);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x90);
    auVar18 = ZEXT416((uint)(1.0 - auVar15._0_4_));
    auVar18 = vshufps_avx(auVar18,auVar18,0);
    auVar25 = ZEXT1664(auVar18);
    auVar15 = vshufps_avx(auVar15,auVar15,0);
    auVar26 = ZEXT1664(auVar15);
    auVar28 = ZEXT1264(ZEXT812(0));
    fVar29 = 3.4028235e+38;
    pfVar14 = (float *)((ulonglong)param_3 * 0x34 + lVar6 + 0x2c);
    do {
      lVar11 = (ulonglong)(uint)pfVar14[-0xb] * 0x30;
      fVar9 = pfVar14[-2] * *(float *)(param_1 + 0x1cc);
      pfVar10 = (float *)(lVar5 + lVar11);
      pfVar1 = (float *)(lVar5 + 0x10 + lVar11);
      lVar13 = (ulonglong)(uint)pfVar14[-0xb] * 0x50 + lVar4;
      auVar18._0_4_ = auVar25._0_4_ * *pfVar10 + auVar26._0_4_ * *pfVar1;
      auVar18._4_4_ = auVar25._4_4_ * pfVar10[1] + auVar26._4_4_ * pfVar1[1];
      auVar18._8_4_ = auVar25._8_4_ * pfVar10[2] + auVar26._8_4_ * pfVar1[2];
      auVar18._12_4_ = auVar25._12_4_ * pfVar10[3] + auVar26._12_4_ * pfVar1[3];
      auVar30 = ZEXT1664(auVar18);
      fVar27 = auVar28._0_4_;
      if (fVar9 <= fVar27) {
        *(undefined1 (*) [16])(lVar13 + 0x10) = auVar18;
      }
      else {
        if (pfVar14[-1] < fVar9) {
          fVar2 = *pfVar14;
          auVar15 = ZEXT416((uint)(pfVar14[-1] + fVar2));
          auVar31 = vshufps_avx(auVar15,auVar15,0);
          auVar15 = *(undefined1 (*) [16])(lVar11 + lVar5 + 0x20);
          auVar21._0_4_ = auVar15._0_4_ * auVar31._0_4_;
          auVar21._4_4_ = auVar15._4_4_ * auVar31._4_4_;
          auVar21._8_4_ = auVar15._8_4_ * auVar31._8_4_;
          auVar21._12_4_ = auVar15._12_4_ * auVar31._12_4_;
          auVar21 = vsubps_avx(auVar18,auVar21);
          auVar19 = vsubps_avx(*(undefined1 (*) [16])(lVar13 + 0x10),auVar21);
          auVar22._0_4_ = auVar19._0_4_ * auVar19._0_4_;
          auVar22._4_4_ = auVar19._4_4_ * auVar19._4_4_;
          auVar22._8_4_ = auVar19._8_4_ * auVar19._8_4_;
          auVar22._12_4_ = auVar19._12_4_ * auVar19._12_4_;
          auVar31 = vinsertps_avx(auVar22,auVar22,0x4c);
          auVar23._0_4_ = auVar31._0_4_ + auVar22._0_4_;
          auVar23._4_4_ = auVar31._4_4_ + auVar22._4_4_;
          auVar23._8_4_ = auVar31._8_4_ + auVar22._8_4_;
          auVar23._12_4_ = auVar31._12_4_ + auVar22._12_4_;
          auVar31 = vshufpd_avx(auVar23,auVar23,1);
          fVar8 = auVar31._0_4_ + auVar23._0_4_;
          if (fVar8 < fVar2 * fVar2) {
            if (fVar8 <= fVar27) {
              auVar19 = auVar15;
            }
            auVar15 = ZEXT416((uint)fVar8);
            auVar31 = vsqrtss_avx(auVar15,auVar15);
            auVar15 = vcmpss_avx(auVar28._0_16_,auVar15,1);
            auVar15 = vblendvps_avx(ZEXT416((uint)fVar2),ZEXT416((uint)(fVar2 / auVar31._0_4_)),
                                    auVar15);
            auVar15 = vshufps_avx(auVar15,auVar15,0);
            *(float *)(lVar13 + 0x10) = auVar21._0_4_ + auVar19._0_4_ * auVar15._0_4_;
            *(float *)(lVar13 + 0x14) = auVar21._4_4_ + auVar19._4_4_ * auVar15._4_4_;
            *(float *)(lVar13 + 0x18) = auVar21._8_4_ + auVar19._8_4_ * auVar15._8_4_;
            *(float *)(lVar13 + 0x1c) = auVar21._12_4_ + auVar19._12_4_ * auVar15._12_4_;
          }
        }
        if (fVar9 < fVar29) {
          auVar31 = vsubps_avx(*(undefined1 (*) [16])(lVar13 + 0x10),auVar18);
          auVar32 = ZEXT1664(auVar31);
          auVar19._0_4_ = auVar31._0_4_ * auVar31._0_4_;
          auVar19._4_4_ = auVar31._4_4_ * auVar31._4_4_;
          auVar19._8_4_ = auVar31._8_4_ * auVar31._8_4_;
          auVar19._12_4_ = auVar31._12_4_ * auVar31._12_4_;
          auVar15 = vinsertps_avx(auVar19,auVar19,0x4c);
          auVar20._0_4_ = auVar19._0_4_ + auVar15._0_4_;
          auVar20._4_4_ = auVar19._4_4_ + auVar15._4_4_;
          auVar20._8_4_ = auVar19._8_4_ + auVar15._8_4_;
          auVar20._12_4_ = auVar19._12_4_ + auVar15._12_4_;
          auVar15 = vshufpd_avx(auVar20,auVar20,1);
          fVar2 = auVar20._0_4_ + auVar15._0_4_;
          if (fVar9 * fVar9 < fVar2) {
            auVar16._0_4_ = (fVar9 * fVar9) / fVar2;
            auVar16._4_12_ = SUB6012((undefined1  [60])0x0,0);
            if (auVar16._0_4_ < fVar27) {
              auVar17._0_4_ = sqrtf(auVar16._0_4_);
              auVar17._4_4_ = extraout_XMM0_Db;
              auVar18 = auVar30._0_16_;
              auVar31 = auVar32._0_16_;
              auVar17._8_56_ = extraout_var;
              auVar15 = auVar17._0_16_;
            }
            else {
              auVar15 = vsqrtss_avx(auVar16,auVar16);
            }
            auVar15 = vshufps_avx(auVar15,auVar15,0);
            *(float *)(lVar13 + 0x10) = auVar18._0_4_ + auVar31._0_4_ * auVar15._0_4_;
            *(float *)(lVar13 + 0x14) = auVar18._4_4_ + auVar31._4_4_ * auVar15._4_4_;
            *(float *)(lVar13 + 0x18) = auVar18._8_4_ + auVar31._8_4_ * auVar15._8_4_;
            *(float *)(lVar13 + 0x1c) = auVar18._12_4_ + auVar31._12_4_ * auVar15._12_4_;
          }
        }
      }
      auVar18 = in_ZMM6._0_16_;
      pfVar10 = pfVar14 + 2;
      pfVar14 = pfVar14 + 0xd;
    } while (pfVar10 < (float *)((ulonglong)param_4 * 0x34 + lVar6));
  }
  if (pauVar12 != (undefined1 (*) [16])0x0) {
    uVar7 = rdtsc();
    auVar18 = vpinsrq_avx(auVar18,uVar7 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)pfVar10 >> 0x20),(int)uVar7),1);
    auVar15 = vmovntdq_avx(SUB6416(ZEXT864(0x141395113),0));
    *pauVar12 = auVar15;
    auVar15 = vmovntdq_avx(auVar18);
    pauVar12[1] = auVar15;
  }
  return;
}

