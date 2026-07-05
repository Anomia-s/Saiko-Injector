/**
 * Function: virtual_void_jph_planeshape_collidesoftbodyve
 * Address:  1402f0db0
 * Signature: undefined virtual_void_jph_planeshape_collidesoftbodyve(void)
 * Body size: 562 bytes
 */


void virtual_void_jph_planeshape_collidesoftbodyve
               (longlong param_1,float *param_2,undefined1 (*param_3) [16],longlong *param_4,
               int param_5,undefined4 param_6)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined1 (*pauVar13) [16];
  float *pfVar14;
  undefined4 *puVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  undefined1 (*pauVar19) [16];
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 auVar21 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar22 [64];
  undefined1 extraout_var [56];
  
  auVar20 = in_ZMM0._0_16_;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auVar21._0_8_ = __dyn_tls_on_demand_init();
    auVar21._8_56_ = extraout_var;
    auVar20 = auVar21._0_16_;
  }
  uVar11 = *(ulonglong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (uVar11 != 0) {
    uVar2 = *(uint *)(uVar11 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(uVar11 + 0x200020) = uVar2 + 1;
      pauVar13 = (undefined1 (*) [16])((ulonglong)uVar2 * 0x20 + uVar11 + 0x20);
      uVar4 = rdtsc();
      uVar11 = CONCAT44((int)(uVar11 >> 0x20),(int)uVar4);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar4 & 0xffffffff00000000 | uVar11;
      iVar16 = (int)param_4[1];
      goto joined_r0x0001402f0e84;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar11 = (*(code *)PTR_vfunction4_1414f67c8)();
      auVar22._8_56_ = extraout_var_00;
      auVar22._0_8_ = extraout_XMM0_Qa;
      auVar20 = auVar22._0_16_;
    }
  }
  pauVar13 = (undefined1 (*) [16])0x0;
  iVar16 = (int)param_4[1];
joined_r0x0001402f0e84:
  uVar12 = (undefined4)(uVar11 >> 0x20);
  if (param_5 * iVar16 != 0) {
    auVar5 = vdivps_avx(*(undefined1 (*) [16])(param_1 + 0x20),*param_3);
    auVar25._0_4_ = auVar5._0_4_ * auVar5._0_4_;
    auVar25._4_4_ = auVar5._4_4_ * auVar5._4_4_;
    auVar25._8_4_ = auVar5._8_4_ * auVar5._8_4_;
    auVar25._12_4_ = auVar5._12_4_ * auVar5._12_4_;
    auVar23 = vinsertps_avx(auVar25,auVar25,0x4c);
    auVar26._0_4_ = auVar25._0_4_ + auVar23._0_4_;
    auVar26._4_4_ = auVar25._4_4_ + auVar23._4_4_;
    auVar26._8_4_ = auVar25._8_4_ + auVar23._8_4_;
    auVar26._12_4_ = auVar25._12_4_ + auVar23._12_4_;
    auVar23 = vshufpd_avx(auVar26,auVar26,1);
    auVar23 = ZEXT416((uint)(auVar26._0_4_ + auVar23._0_4_));
    auVar25 = vsqrtss_avx(auVar23,auVar23);
    auVar23 = vshufps_avx(auVar25,auVar25,0);
    auVar5 = vdivps_avx(auVar5,auVar23);
    auVar23 = vshufps_avx(auVar5,auVar5,0);
    auVar24 = vshufps_avx(auVar5,auVar5,0x55);
    uVar12 = 0;
    auVar5 = vshufps_avx(auVar5,auVar5,0xaa);
    auVar27._0_4_ =
         auVar5._0_4_ * param_2[8] + auVar23._0_4_ * *param_2 + auVar24._0_4_ * param_2[4];
    auVar27._4_4_ =
         auVar5._4_4_ * param_2[9] + auVar23._4_4_ * param_2[1] + auVar24._4_4_ * param_2[5];
    auVar27._8_4_ =
         auVar5._8_4_ * param_2[10] + auVar23._8_4_ * param_2[2] + auVar24._8_4_ * param_2[6];
    auVar27._12_4_ =
         auVar5._12_4_ * param_2[0xb] + auVar23._12_4_ * param_2[3] + auVar24._12_4_ * param_2[7];
    auVar23._0_4_ = auVar27._0_4_ * param_2[0xc];
    auVar23._4_4_ = auVar27._4_4_ * param_2[0xd];
    auVar23._8_4_ = auVar27._8_4_ * param_2[0xe];
    auVar23._12_4_ = auVar27._12_4_ * param_2[0xf];
    auVar5 = vinsertps_avx(auVar23,auVar23,0x4c);
    auVar24._0_4_ = auVar23._0_4_ + auVar5._0_4_;
    auVar24._4_4_ = auVar23._4_4_ + auVar5._4_4_;
    auVar24._8_4_ = auVar23._8_4_ + auVar5._8_4_;
    auVar24._12_4_ = auVar23._12_4_ + auVar5._12_4_;
    auVar5 = vshufpd_avx(auVar24,auVar24,1);
    fVar6 = *(float *)(param_1 + 0x2c) / auVar25._0_4_ - (auVar24._0_4_ + auVar5._0_4_);
    auVar5 = vinsertps_avx(auVar27,ZEXT416((uint)fVar6),0x30);
    lVar3 = *param_4;
    lVar7 = param_4[9];
    puVar15 = (undefined4 *)param_4[8];
    lVar8 = param_4[7];
    pfVar14 = (float *)param_4[6];
    lVar9 = param_4[5];
    pfVar18 = (float *)param_4[2];
    pauVar19 = (undefined1 (*) [16])param_4[4];
    lVar10 = param_4[3];
    lVar17 = 0;
    do {
      if (0.0 < *pfVar18) {
        pfVar1 = (float *)(lVar3 + lVar17);
        auVar29._0_4_ = auVar5._0_4_ * *pfVar1;
        auVar29._4_4_ = auVar5._4_4_ * pfVar1[1];
        auVar29._8_4_ = auVar5._8_4_ * pfVar1[2];
        auVar29._12_4_ = auVar5._12_4_ * pfVar1[3];
        auVar23 = vinsertps_avx(auVar29,auVar29,0x4c);
        auVar30._0_4_ = auVar29._0_4_ + auVar23._0_4_;
        auVar30._4_4_ = auVar29._4_4_ + auVar23._4_4_;
        auVar30._8_4_ = auVar29._8_4_ + auVar23._8_4_;
        auVar30._12_4_ = auVar29._12_4_ + auVar23._12_4_;
        auVar23 = vshufpd_avx(auVar30,auVar30,1);
        fVar28 = -(fVar6 + auVar30._0_4_ + auVar23._0_4_);
        if (*pfVar14 < fVar28) {
          *pfVar14 = fVar28;
          *pauVar19 = auVar5;
          *puVar15 = param_6;
        }
      }
      pfVar18 = (float *)((longlong)pfVar18 + (longlong)(int)lVar10);
      pauVar19 = (undefined1 (*) [16])(*pauVar19 + (int)lVar9);
      pfVar14 = (float *)((longlong)pfVar14 + (longlong)(int)lVar8);
      puVar15 = (undefined4 *)((longlong)puVar15 + (longlong)(int)lVar7);
      lVar17 = lVar17 + iVar16;
    } while (param_5 * iVar16 != lVar17);
  }
  if (pauVar13 != (undefined1 (*) [16])0x0) {
    uVar11 = rdtsc();
    auVar5 = vpinsrq_avx(auVar20,uVar11 & 0xffffffff00000000 | CONCAT44(uVar12,(int)uVar11),1);
    auVar20 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b3c0),0));
    *pauVar13 = auVar20;
    auVar20 = vmovntdq_avx(auVar5);
    pauVar13[1] = auVar20;
  }
  return;
}

