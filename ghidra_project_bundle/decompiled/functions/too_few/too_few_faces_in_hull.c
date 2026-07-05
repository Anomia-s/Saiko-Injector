/**
 * Function: too_few_faces_in_hull
 * Address:  1405c34e0
 * Signature: undefined too_few_faces_in_hull(void)
 * Body size: 5507 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
too_few_faces_in_hull
          (longlong *param_1,undefined4 param_2,undefined8 param_3,undefined1 (*param_4) [32])

{
  ulonglong *puVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined1 (*pauVar4) [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 *puVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [32];
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [32];
  undefined8 *puVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  byte bVar34;
  bool bVar35;
  undefined1 uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar78;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  undefined1 in_ZMM2 [64];
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [64];
  undefined1 auVar92 [64];
  undefined1 auVar93 [16];
  float fVar94;
  undefined1 auVar95 [64];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [64];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar104 [64];
  undefined1 unaff_000015c4 [12];
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined4 local_150;
  undefined1 *local_148;
  longlong local_140;
  undefined1 (*local_138) [32];
  undefined1 (*local_130) [32];
  undefined1 (*local_128) [32];
  undefined1 (*local_120) [16];
  longlong *local_118;
  undefined1 local_110 [24];
  undefined1 local_f8 [16];
  undefined4 *local_e8;
  undefined1 local_d8 [16];
  longlong *local_c8;
  ulonglong local_c0;
  undefined1 local_68 [16];
  
  local_68 = in_ZMM11._0_16_;
  auVar95 = ZEXT1664(in_ZMM2._0_16_);
  local_c0 = DAT_1414ef3c0 ^ (ulonglong)auStack_178;
  if (param_1[1] != 0) {
    plVar18 = (longlong *)param_1[3];
    plVar17 = plVar18 + param_1[1];
    auVar91 = ZEXT1264(ZEXT812(0));
    do {
      lVar29 = *plVar18;
      if (lVar29 != 0) {
        lVar15 = *(longlong *)(lVar29 + 0x38);
        if (lVar15 != 0) {
          do {
            lVar15 = *(longlong *)(lVar15 + 8);
            (*DAT_14151f538)();
          } while (lVar15 != *(longlong *)(lVar29 + 0x38));
        }
        if (*(longlong *)(lVar29 + 0x30) != 0) {
          *(undefined8 *)(lVar29 + 0x20) = 0;
          (*DAT_14151f538)();
          *(undefined1 (*) [16])(lVar29 + 0x28) = auVar91._0_16_;
        }
        (*DAT_14151f538)(lVar29);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar17);
  }
  param_1[1] = 0;
  puVar3 = (ulonglong *)*param_1;
  uVar24 = *puVar3;
  if (uVar24 < 3) {
    *(char **)*param_4 = "Need at least 3 points to make a hull";
    uVar36 = 2;
    goto LAB_1405c3911;
  }
  pauVar20 = (undefined1 (*) [16])puVar3[2];
  uVar14 = uVar24 * 0x10 - 0x10;
  pauVar25 = pauVar20;
  if ((~(uint)uVar14 & 0x30) == 0) {
    auVar91 = ZEXT864(0);
  }
  else {
    lVar29 = -(ulonglong)(((uint)(uVar14 >> 4) & 0xfffffff) + 1 & 3);
    auVar47._0_12_ = ZEXT812(0);
    auVar47._12_4_ = 0;
    auVar91 = ZEXT864(0);
    do {
      auVar53 = vsubps_avx(auVar47,*pauVar25);
      auVar53 = vmaxps_avx(auVar53,*pauVar25);
      auVar53 = vmaxps_avx(auVar91._0_16_,auVar53);
      auVar91 = ZEXT1664(auVar53);
      pauVar25 = pauVar25 + 1;
      lVar29 = lVar29 + 1;
    } while (lVar29 != 0);
  }
  auVar47 = auVar91._0_16_;
  local_128 = (undefined1 (*) [32])CONCAT44(local_128._4_4_,param_2);
  if (0x2f < uVar14) {
    auVar53._0_12_ = ZEXT812(0);
    auVar53._12_4_ = 0;
    do {
      auVar47 = vsubps_avx(auVar53,*pauVar25);
      auVar47 = vmaxps_avx(auVar47,*pauVar25);
      auVar47 = vmaxps_avx(auVar91._0_16_,auVar47);
      auVar60 = vsubps_avx(auVar53,pauVar25[1]);
      auVar60 = vmaxps_avx(auVar60,pauVar25[1]);
      auVar47 = vmaxps_avx(auVar47,auVar60);
      auVar60 = vsubps_avx(auVar53,pauVar25[2]);
      auVar60 = vmaxps_avx(auVar60,pauVar25[2]);
      auVar47 = vmaxps_avx(auVar47,auVar60);
      auVar60 = vsubps_avx(auVar53,pauVar25[3]);
      auVar60 = vmaxps_avx(auVar60,pauVar25[3]);
      auVar47 = vmaxps_avx(auVar47,auVar60);
      auVar91 = ZEXT1664(auVar47);
      pauVar25 = pauVar25 + 4;
    } while (pauVar25 != pauVar20 + uVar24);
  }
  uVar23 = (uint)uVar24;
  local_130 = param_4;
  if (0 < (int)uVar23) {
    auVar53 = vmovshdup_avx(auVar47);
    auVar60 = vshufpd_avx(auVar47,auVar47,1);
    fVar94 = (auVar60._0_4_ + auVar47._0_4_ + auVar53._0_4_) * 3.5762787e-07;
    uVar14 = (ulonglong)(uVar23 & 0x7fffffff);
    if (uVar14 == 1) {
      auVar91 = ZEXT464(0xbf800000);
      uVar30 = 0xffffffff;
      uVar31 = 0;
    }
    else {
      pauVar25 = pauVar20 + 1;
      auVar91 = ZEXT464(0xbf800000);
      uVar30 = 0xffffffff;
      uVar31 = 0;
      do {
        auVar60._0_4_ = *(float *)pauVar25[-1] * *(float *)pauVar25[-1];
        auVar60._4_4_ = *(float *)(pauVar25[-1] + 4) * *(float *)(pauVar25[-1] + 4);
        auVar60._8_4_ = *(float *)(pauVar25[-1] + 8) * *(float *)(pauVar25[-1] + 8);
        auVar60._12_4_ = *(float *)(pauVar25[-1] + 0xc) * *(float *)(pauVar25[-1] + 0xc);
        auVar47 = vinsertps_avx(auVar60,auVar60,0x4c);
        auVar71._0_4_ = auVar60._0_4_ + auVar47._0_4_;
        auVar71._4_4_ = auVar60._4_4_ + auVar47._4_4_;
        auVar71._8_4_ = auVar60._8_4_ + auVar47._8_4_;
        auVar71._12_4_ = auVar60._12_4_ + auVar47._12_4_;
        auVar47 = vshufpd_avx(auVar71,auVar71,1);
        fVar37 = auVar71._0_4_ + auVar47._0_4_;
        uVar32 = uVar30;
        if (auVar91._0_4_ < fVar37) {
          uVar32 = (uint)uVar31;
        }
        auVar53 = vmaxss_avx(ZEXT416((uint)fVar37),auVar91._0_16_);
        auVar61._0_4_ = *(float *)*pauVar25 * *(float *)*pauVar25;
        auVar61._4_4_ = *(float *)(*pauVar25 + 4) * *(float *)(*pauVar25 + 4);
        auVar61._8_4_ = *(float *)(*pauVar25 + 8) * *(float *)(*pauVar25 + 8);
        auVar61._12_4_ = *(float *)(*pauVar25 + 0xc) * *(float *)(*pauVar25 + 0xc);
        auVar47 = vinsertps_avx(auVar61,auVar61,0x4c);
        auVar62._0_4_ = auVar61._0_4_ + auVar47._0_4_;
        auVar62._4_4_ = auVar61._4_4_ + auVar47._4_4_;
        auVar62._8_4_ = auVar61._8_4_ + auVar47._8_4_;
        auVar62._12_4_ = auVar61._12_4_ + auVar47._12_4_;
        auVar47 = vshufpd_avx(auVar62,auVar62,1);
        fVar37 = auVar62._0_4_ + auVar47._0_4_;
        uVar30 = (uint)uVar31 + 1;
        if (fVar37 <= auVar53._0_4_) {
          uVar30 = uVar32;
        }
        auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar53);
        auVar91 = ZEXT1664(auVar47);
        uVar31 = uVar31 + 2;
        pauVar25 = pauVar25 + 2;
      } while (uVar31 != (uVar23 & 0x7ffffffe));
    }
    fVar94 = fVar94 * fVar94;
    auVar92 = ZEXT464((uint)fVar94);
    if ((uVar24 & 1) != 0) {
      pauVar25 = pauVar20 + uVar31;
      auVar63._0_4_ = *(float *)*pauVar25 * *(float *)*pauVar25;
      auVar63._4_4_ = *(float *)(*pauVar25 + 4) * *(float *)(*pauVar25 + 4);
      auVar63._8_4_ = *(float *)(*pauVar25 + 8) * *(float *)(*pauVar25 + 8);
      auVar63._12_4_ = *(float *)(*pauVar25 + 0xc) * *(float *)(*pauVar25 + 0xc);
      auVar47 = vinsertps_avx(auVar63,auVar63,0x4c);
      auVar64._0_4_ = auVar63._0_4_ + auVar47._0_4_;
      auVar64._4_4_ = auVar63._4_4_ + auVar47._4_4_;
      auVar64._8_4_ = auVar63._8_4_ + auVar47._8_4_;
      auVar64._12_4_ = auVar63._12_4_ + auVar47._12_4_;
      auVar47 = vshufpd_avx(auVar64,auVar64,1);
      if (auVar91._0_4_ < auVar64._0_4_ + auVar47._0_4_) {
        uVar30 = (uint)uVar31;
      }
    }
    puVar1 = (ulonglong *)(param_1 + 1);
    auVar47 = vmaxss_avx(ZEXT416((uint)(auVar95._0_4_ * auVar95._0_4_)),ZEXT416((uint)fVar94));
    auVar91 = ZEXT1664(auVar47);
    uVar28 = (ulonglong)uVar30;
    uVar33 = 0xffffffff;
    fVar37 = -1.0;
    uVar31 = 0;
    pauVar25 = pauVar20;
    do {
      if (uVar28 != uVar31) {
        auVar47 = vsubps_avx(*pauVar25,pauVar20[(int)uVar30]);
        auVar48._0_4_ = auVar47._0_4_ * auVar47._0_4_;
        auVar48._4_4_ = auVar47._4_4_ * auVar47._4_4_;
        auVar48._8_4_ = auVar47._8_4_ * auVar47._8_4_;
        auVar48._12_4_ = auVar47._12_4_ * auVar47._12_4_;
        auVar47 = vinsertps_avx(auVar48,auVar48,0x4c);
        auVar49._0_4_ = auVar48._0_4_ + auVar47._0_4_;
        auVar49._4_4_ = auVar48._4_4_ + auVar47._4_4_;
        auVar49._8_4_ = auVar48._8_4_ + auVar47._8_4_;
        auVar49._12_4_ = auVar48._12_4_ + auVar47._12_4_;
        auVar47 = vshufpd_avx(auVar49,auVar49,1);
        fVar59 = auVar49._0_4_ + auVar47._0_4_;
        if (fVar37 < fVar59) {
          uVar33 = uVar31 & 0xffffffff;
          fVar37 = fVar59;
        }
      }
      uVar31 = uVar31 + 1;
      pauVar25 = pauVar25 + 1;
    } while (uVar14 != uVar31);
    uVar23 = (uint)uVar33;
    uVar31 = 0xffffffff;
    fVar37 = -1.0;
    uVar26 = 0;
    auVar50._0_12_ = ZEXT812(0);
    auVar50._12_4_ = 0;
    pauVar25 = pauVar20;
    do {
      if ((uVar28 != uVar26) && (uVar33 != uVar26)) {
        auVar53 = vsubps_avx(pauVar20[(int)uVar30],*pauVar25);
        auVar60 = vsubps_avx(pauVar20[(int)uVar23],*pauVar25);
        auVar47 = vshufps_avx(auVar60,auVar60,0xc9);
        auVar85._0_4_ = auVar53._0_4_ * auVar47._0_4_;
        auVar85._4_4_ = auVar53._4_4_ * auVar47._4_4_;
        auVar85._8_4_ = auVar53._8_4_ * auVar47._8_4_;
        auVar85._12_4_ = auVar53._12_4_ * auVar47._12_4_;
        auVar47 = vshufps_avx(auVar53,auVar53,0xc9);
        auVar65._0_4_ = auVar47._0_4_ * auVar60._0_4_;
        auVar65._4_4_ = auVar47._4_4_ * auVar60._4_4_;
        auVar65._8_4_ = auVar47._8_4_ * auVar60._8_4_;
        auVar65._12_4_ = auVar47._12_4_ * auVar60._12_4_;
        auVar47 = vsubps_avx(auVar85,auVar65);
        auVar66._0_4_ = auVar47._0_4_ * auVar47._0_4_;
        auVar66._4_4_ = auVar47._4_4_ * auVar47._4_4_;
        auVar66._8_4_ = auVar47._8_4_ * auVar47._8_4_;
        auVar66._12_4_ = auVar47._12_4_ * auVar47._12_4_;
        auVar47 = vshufps_avx(auVar66,auVar66,0xc9);
        auVar53 = vshufps_avx(auVar66,auVar50,0x4a);
        auVar67._0_4_ = auVar47._0_4_ + auVar53._0_4_;
        auVar67._4_4_ = auVar47._4_4_ + auVar53._4_4_;
        auVar67._8_4_ = auVar47._8_4_ + auVar53._8_4_;
        auVar67._12_4_ = auVar47._12_4_ + auVar53._12_4_;
        auVar47 = vshufpd_avx(auVar67,auVar67,1);
        fVar59 = auVar67._0_4_ + auVar47._0_4_;
        if (fVar37 < fVar59) {
          uVar31 = uVar26 & 0xffffffff;
          fVar37 = fVar59;
        }
      }
      uVar32 = (uint)uVar31;
      uVar26 = uVar26 + 1;
      pauVar25 = pauVar25 + 1;
    } while (uVar14 != uVar26);
    if (1e-12 <= fVar37) {
      if (uVar24 == 3) {
        lVar11 = FUN_1405c4af0(param_1,uVar30,uVar33,uVar31);
        lVar12 = FUN_1405c4af0(param_1,uVar30,uVar31,uVar33);
        lVar29 = *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x38) + 8) + 8);
        lVar15 = *(longlong *)(lVar11 + 0x38);
        *(longlong *)(lVar15 + 0x10) = lVar29;
        *(longlong *)(lVar29 + 0x10) = lVar15;
        lVar29 = *(longlong *)(*(longlong *)(lVar12 + 0x38) + 8);
        lVar15 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + 8);
        *(longlong *)(lVar15 + 0x10) = lVar29;
        *(longlong *)(lVar29 + 0x10) = lVar15;
        lVar29 = *(longlong *)(lVar12 + 0x38);
        lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x38) + 8) + 8);
        *(longlong *)(lVar15 + 0x10) = lVar29;
        *(longlong *)(lVar29 + 0x10) = lVar15;
        uVar36 = 0;
        goto LAB_1405c3911;
      }
      auVar47 = pauVar20[(int)uVar30];
      auVar53 = pauVar20[(int)uVar23];
      auVar61 = vsubps_avx(auVar53,auVar47);
      auVar60 = pauVar20[(int)uVar32];
      auVar62 = vsubps_avx(auVar60,auVar47);
      auVar71 = vshufps_avx(auVar62,auVar62,0xc9);
      auVar87._0_4_ = auVar61._0_4_ * auVar71._0_4_;
      auVar87._4_4_ = auVar61._4_4_ * auVar71._4_4_;
      auVar87._8_4_ = auVar61._8_4_ * auVar71._8_4_;
      auVar87._12_4_ = auVar61._12_4_ * auVar71._12_4_;
      auVar71 = vshufps_avx(auVar61,auVar61,0xc9);
      auVar68._0_4_ = auVar71._0_4_ * auVar62._0_4_;
      auVar68._4_4_ = auVar71._4_4_ * auVar62._4_4_;
      auVar68._8_4_ = auVar71._8_4_ * auVar62._8_4_;
      auVar68._12_4_ = auVar71._12_4_ * auVar62._12_4_;
      auVar71 = vsubps_avx(auVar87,auVar68);
      auVar61 = vshufps_avx(auVar71,auVar71,9);
      auVar69._0_4_ = auVar71._0_4_ * auVar71._0_4_;
      auVar69._4_4_ = auVar71._4_4_ * auVar71._4_4_;
      auVar69._8_4_ = auVar71._8_4_ * auVar71._8_4_;
      auVar69._12_4_ = auVar71._12_4_ * auVar71._12_4_;
      auVar71 = vshufps_avx(auVar69,auVar69,0xc9);
      auVar96._0_12_ = ZEXT812(0);
      auVar96._12_4_ = 0;
      auVar62 = vshufps_avx(auVar69,auVar96,0x4a);
      auVar70._0_4_ = auVar71._0_4_ + auVar62._0_4_;
      auVar70._4_4_ = auVar71._4_4_ + auVar62._4_4_;
      auVar70._8_4_ = auVar71._8_4_ + auVar62._8_4_;
      auVar70._12_4_ = auVar71._12_4_ + auVar62._12_4_;
      auVar71 = vshufpd_avx(auVar70,auVar70,1);
      auVar71 = ZEXT416((uint)(auVar70._0_4_ + auVar71._0_4_));
      auVar71 = vsqrtss_avx(auVar71,auVar71);
      auVar71 = vshufps_avx(auVar71,auVar71,0);
      auVar71 = vdivps_avx(auVar61,auVar71);
      auVar99 = ZEXT1664(auVar71);
      auVar38._0_4_ = auVar47._0_4_ + auVar53._0_4_ + auVar60._0_4_;
      auVar38._4_4_ = auVar47._4_4_ + auVar53._4_4_ + auVar60._4_4_;
      auVar38._8_4_ = auVar47._8_4_ + auVar53._8_4_ + auVar60._8_4_;
      auVar38._12_4_ = auVar47._12_4_ + auVar53._12_4_ + auVar60._12_4_;
      auVar47 = vdivps_avx(auVar38,_DAT_1411f4e60);
      auVar46 = ZEXT464(0) << 0x20;
      uVar26 = 0xffffffff;
      uVar24 = 0;
      auVar72._8_4_ = 0x7fffffff;
      auVar72._0_8_ = 0x7fffffff7fffffff;
      auVar72._12_4_ = 0x7fffffff;
      do {
        if (((uVar28 != uVar24) && (uVar33 != uVar24)) && (uVar31 != uVar24)) {
          auVar53 = vsubps_avx(*pauVar20,auVar47);
          auVar80._0_4_ = auVar71._0_4_ * auVar53._0_4_;
          auVar80._4_4_ = auVar71._4_4_ * auVar53._4_4_;
          auVar80._8_4_ = auVar71._8_4_ * auVar53._8_4_;
          auVar80._12_4_ = auVar71._12_4_ * auVar53._12_4_;
          auVar53 = vinsertps_avx(auVar80,auVar80,0x4c);
          auVar81._0_4_ = auVar80._0_4_ + auVar53._0_4_;
          auVar81._4_4_ = auVar80._4_4_ + auVar53._4_4_;
          auVar81._8_4_ = auVar80._8_4_ + auVar53._8_4_;
          auVar81._12_4_ = auVar80._12_4_ + auVar53._12_4_;
          auVar53 = vshufpd_avx(auVar81,auVar81,1);
          auVar62 = ZEXT416((uint)(auVar81._0_4_ + auVar53._0_4_));
          auVar53 = vandps_avx(auVar62,auVar72);
          auVar60 = vandps_avx(auVar46._0_16_,auVar72);
          auVar61 = vcmpss_avx(auVar60,auVar53,1);
          auVar61 = vblendvps_avx(auVar46._0_16_,auVar62,auVar61);
          auVar46 = ZEXT1664(auVar61);
          if (auVar60._0_4_ < auVar53._0_4_) {
            uVar26 = uVar24 & 0xffffffff;
          }
        }
        uVar24 = uVar24 + 1;
        pauVar20 = pauVar20 + 1;
      } while (uVar14 != uVar24);
      fVar37 = auVar46._0_4_;
      if (fVar94 * 36.0 < fVar37 * fVar37) {
        fVar94 = 0.0;
        if (0.0 <= fVar37) {
          uVar31 = uVar33;
          uVar23 = uVar32;
        }
        local_138 = (undefined1 (*) [32])FUN_1405c4af0(param_1,uVar30,uVar31,uVar26);
        local_140 = FUN_1405c4af0(param_1,uVar31,uVar23,uVar26);
        uVar24 = FUN_1405c4af0(param_1,uVar23,uVar30,uVar26);
        lVar11 = FUN_1405c4af0(param_1,uVar30,uVar23);
        lVar29 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x38) + 8) + 8);
        lVar15 = *(longlong *)(local_138[1] + 0x18);
        *(longlong *)(lVar15 + 0x10) = lVar29;
        *(longlong *)(lVar29 + 0x10) = lVar15;
        lVar29 = *(longlong *)(*(longlong *)(*(longlong *)(local_140 + 0x38) + 8) + 8);
        lVar15 = *(longlong *)(*(longlong *)(local_138[1] + 0x18) + 8);
        *(longlong *)(lVar15 + 0x10) = lVar29;
        *(longlong *)(lVar29 + 0x10) = lVar15;
        lVar29 = *(longlong *)(*(longlong *)(uVar24 + 0x38) + 8);
        lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(local_138[1] + 0x18) + 8) + 8);
        *(longlong *)(lVar15 + 0x10) = lVar29;
        *(longlong *)(lVar29 + 0x10) = lVar15;
        lVar29 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + 8);
        lVar15 = *(longlong *)(local_140 + 0x38);
        *(longlong *)(lVar15 + 0x10) = lVar29;
        *(longlong *)(lVar29 + 0x10) = lVar15;
        lVar29 = *(longlong *)(*(longlong *)(*(longlong *)(uVar24 + 0x38) + 8) + 8);
        lVar15 = *(longlong *)(*(longlong *)(local_140 + 0x38) + 8);
        *(longlong *)(lVar15 + 0x10) = lVar29;
        *(longlong *)(lVar29 + 0x10) = lVar15;
        lVar29 = *(longlong *)(lVar11 + 0x38);
        lVar15 = *(longlong *)(uVar24 + 0x38);
        *(longlong *)(lVar15 + 0x10) = lVar29;
        *(longlong *)(lVar29 + 0x10) = lVar15;
        local_118 = (longlong *)(*DAT_14151f530)(0,0,0x20);
        *local_118 = (longlong)local_138;
        local_118[1] = local_140;
        local_118[2] = uVar24;
        local_118[3] = lVar11;
        local_d8._8_8_ = 4;
        local_d8._0_8_ = 4;
        uVar13 = *(undefined8 *)*param_1;
        local_c8 = local_118;
        if (0 < (int)uVar13) {
          uVar24 = 0;
          do {
            uVar32 = (uint)uVar24;
            if (((uVar30 != uVar32) && ((uint)uVar31 != uVar32)) &&
               ((uVar23 != uVar32 && ((uint)uVar26 != uVar32)))) {
              FUN_1405c2ed0(param_1,uVar24,local_d8,auVar91._0_8_);
              uVar13 = *(undefined8 *)*param_1;
            }
            uVar24 = (ulonglong)(uVar32 + 1);
          } while ((int)(uVar32 + 1) < (int)uVar13);
        }
        local_140 = CONCAT44(local_140._4_4_,4);
        auVar95 = ZEXT1264(ZEXT812(0));
        pauVar20 = (undefined1 (*) [16])(param_1 + 4);
        do {
          while (uVar14 = param_1[1], uVar14 != 0) {
            puVar19 = (undefined8 *)param_1[3];
            uVar31 = uVar14 * 8 - 8;
            puVar22 = puVar19;
            if ((~(uint)uVar31 & 0x18) == 0) {
              auVar46 = ZEXT864(0);
              pauVar25 = (undefined1 (*) [16])0x0;
            }
            else {
              lVar29 = -(ulonglong)(((uint)(uVar31 >> 3) & 0x1fffffff) + 1 & 3);
              auVar46 = ZEXT864(0);
              pauVar25 = (undefined1 (*) [16])0x0;
              do {
                fVar37 = *(float *)((undefined1 (*) [16])*puVar22)[4];
                if (auVar46._0_4_ < fVar37) {
                  pauVar25 = (undefined1 (*) [16])*puVar22;
                }
                auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar46._0_16_);
                auVar46 = ZEXT1664(auVar47);
                puVar22 = puVar22 + 1;
                lVar29 = lVar29 + 1;
              } while (lVar29 != 0);
            }
            if (0x17 < uVar31) {
              do {
                fVar37 = *(float *)((undefined1 (*) [16])*puVar22)[4];
                if (auVar46._0_4_ < fVar37) {
                  pauVar25 = (undefined1 (*) [16])*puVar22;
                }
                auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar46._0_16_);
                fVar37 = *(float *)((undefined1 (*) [16])puVar22[1])[4];
                if (auVar47._0_4_ < fVar37) {
                  pauVar25 = (undefined1 (*) [16])puVar22[1];
                }
                auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar47);
                fVar37 = *(float *)((undefined1 (*) [16])puVar22[2])[4];
                if (auVar47._0_4_ < fVar37) {
                  pauVar25 = (undefined1 (*) [16])puVar22[2];
                }
                auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar47);
                fVar37 = *(float *)((undefined1 (*) [16])puVar22[3])[4];
                if (auVar47._0_4_ < fVar37) {
                  pauVar25 = (undefined1 (*) [16])puVar22[3];
                }
                auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar47);
                auVar46 = ZEXT1664(auVar47);
                puVar22 = puVar22 + 4;
              } while (puVar22 != puVar19 + uVar14);
            }
            if (pauVar25 == (undefined1 (*) [16])0x0) break;
            uVar24 = (ulonglong)
                     *(uint *)(*(longlong *)pauVar25[3] + -4 + *(longlong *)pauVar25[2] * 4);
            *(longlong *)pauVar25[2] = *(longlong *)pauVar25[2] + -1;
LAB_1405c425f:
            if ((int)local_128 <= (int)local_140) {
              iVar10 = FUN_1405c3370(param_1);
              local_140 = CONCAT44(local_140._4_4_,iVar10);
              if ((int)local_128 <= iVar10) goto LAB_1405c47ba;
            }
            local_f8 = auVar95._0_16_;
            local_e8 = (undefined4 *)0x0;
            local_158 = local_f8;
            local_120 = pauVar20;
            FUN_1405c4d70(param_1,pauVar25,uVar24 & 0xffffffff,auVar92._0_8_);
            if (param_1[1] != 0) {
              pauVar21 = (undefined1 (*) [32])param_1[3];
              local_138 = (undefined1 (*) [32])(*pauVar21 + param_1[1] * 8);
              do {
                lVar29 = *(longlong *)*pauVar21;
                if ((*(char *)(lVar29 + 0x44) == '\x01') &&
                   (lVar15 = *(longlong *)(lVar29 + 0x20), lVar15 != 0)) {
                  lVar29 = *(longlong *)(lVar29 + 0x30);
                  lVar11 = 0;
                  do {
                    FUN_1405c2ed0(param_1,*(undefined4 *)(lVar29 + lVar11),local_f8,auVar91._0_8_);
                    lVar11 = lVar11 + 4;
                  } while (lVar15 << 2 != lVar11);
                }
                pauVar21 = (undefined1 (*) [32])(*pauVar21 + 8);
              } while (pauVar21 != local_138);
              if (0 < (int)(uint)*puVar1) {
                uVar14 = (ulonglong)((uint)*puVar1 & 0x7fffffff);
                do {
                  uVar31 = uVar14 - 1;
                  lVar29 = *(longlong *)(param_1[3] + -8 + uVar14 * 8);
                  if (*(char *)(lVar29 + 0x44) == '\x01') {
                    lVar15 = *(longlong *)(lVar29 + 0x38);
                    if (lVar15 != 0) {
                      do {
                        lVar15 = *(longlong *)(lVar15 + 8);
                        (*DAT_14151f538)();
                      } while (lVar15 != *(longlong *)(lVar29 + 0x38));
                    }
                    if (*(longlong *)(lVar29 + 0x30) != 0) {
                      *(undefined8 *)(lVar29 + 0x20) = 0;
                      (*DAT_14151f538)();
                      *(undefined1 (*) [16])(lVar29 + 0x28) = auVar95._0_16_;
                    }
                    (*DAT_14151f538)(lVar29);
                    uVar28 = *puVar1;
                    if (uVar14 <= uVar28 && uVar28 - uVar14 != 0) {
                      memmove((void *)(param_1[3] + uVar31 * 8),
                              (void *)(param_1[3] + uVar31 * 8 + 8),(uVar28 - uVar14) * 8);
                      uVar28 = param_1[1];
                    }
                    *puVar1 = uVar28 - 1;
                  }
                  bVar35 = 1 < uVar14;
                  uVar14 = uVar31;
                } while (bVar35);
              }
            }
            if (local_e8 != (undefined4 *)0x0) {
              (*DAT_14151f538)();
            }
            local_140 = CONCAT44(local_140._4_4_,(int)local_140 + 1);
            pauVar20 = local_120;
          }
          lVar29 = *(longlong *)*pauVar20;
          if (lVar29 == 0) goto LAB_1405c46eb;
          *pauVar20 = auVar95._0_16_;
          lVar15 = param_1[6];
          param_1[6] = 0;
          lVar11 = 0;
          bVar34 = 0;
          do {
            bVar9 = FUN_1405c2ed0(param_1,*(undefined4 *)(lVar15 + lVar11),puVar1,auVar91._0_8_);
            bVar34 = bVar34 | bVar9;
            lVar11 = lVar11 + 8;
          } while (lVar29 << 3 != lVar11);
          if ((bVar34 & 1) == 0) {
            uVar14 = *(ulonglong *)*pauVar20;
            if (uVar14 == 0) {
              iVar10 = 0x1b;
              goto LAB_1405c4215;
            }
            lVar29 = param_1[6];
            do {
              if (uVar14 < 2) {
                uVar24 = 0;
              }
              else {
                auVar46 = ZEXT464(*(uint *)(lVar29 + 4));
                uVar31 = uVar14 - 1;
                if (uVar14 - 2 < 3) {
                  uVar28 = 1;
                  uVar24 = 0;
                }
                else {
                  uVar28 = 1;
                  uVar24 = 0;
                  do {
                    fVar37 = *(float *)(lVar29 + 4 + uVar28 * 8);
                    if (auVar46._0_4_ < fVar37) {
                      uVar24 = uVar28;
                    }
                    fVar59 = *(float *)(lVar29 + 0xc + uVar28 * 8);
                    auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar46._0_16_);
                    uVar33 = uVar28 + 1;
                    if (fVar59 <= auVar47._0_4_) {
                      uVar33 = uVar24;
                    }
                    auVar47 = vmaxss_avx(ZEXT416((uint)fVar59),auVar47);
                    fVar37 = *(float *)(lVar29 + 0x14 + uVar28 * 8);
                    uVar24 = uVar28 + 2;
                    if (fVar37 <= auVar47._0_4_) {
                      uVar24 = uVar33;
                    }
                    auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar47);
                    fVar37 = *(float *)(lVar29 + 0x1c + uVar28 * 8);
                    uVar33 = uVar28 + 3;
                    if (auVar47._0_4_ < fVar37) {
                      uVar24 = uVar33;
                    }
                    auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar47);
                    auVar46 = ZEXT1664(auVar47);
                    uVar28 = uVar28 + 4;
                  } while (uVar33 != (uVar31 & 0xfffffffffffffffc));
                }
                uVar33 = (ulonglong)((uint)uVar31 & 3);
                uVar31 = uVar31 & 3;
                while (uVar31 != 0) {
                  fVar37 = *(float *)(lVar29 + 4 + uVar28 * 8);
                  if (auVar46._0_4_ < fVar37) {
                    uVar24 = uVar28;
                  }
                  auVar47 = vmaxss_avx(ZEXT416((uint)fVar37),auVar46._0_16_);
                  auVar46 = ZEXT1664(auVar47);
                  uVar28 = uVar28 + 1;
                  uVar33 = uVar33 - 1;
                  uVar31 = uVar33;
                }
              }
              uVar13 = *(undefined8 *)(lVar29 + uVar24 * 8);
              *(undefined8 *)(lVar29 + uVar24 * 8) = *(undefined8 *)(lVar29 + -8 + uVar14 * 8);
              *(undefined8 *)(lVar29 + -8 + uVar14 * 8) = uVar13;
              lVar29 = param_1[6];
              uVar24 = (ulonglong)*(int *)(lVar29 + -8 + param_1[4] * 8);
              uVar14 = param_1[4] - 1;
              param_1[4] = uVar14;
              if (param_1[1] == 0) {
                pauVar25 = (undefined1 (*) [16])0x0;
              }
              else {
                fVar37 = 0.0;
                lVar11 = 0;
                pauVar25 = (undefined1 (*) [16])0x0;
                do {
                  pauVar4 = *(undefined1 (**) [16])(param_1[3] + lVar11);
                  if (pauVar4[4][4] == '\0') {
                    auVar53 = vsubps_avx(*(undefined1 (*) [16])
                                          (*(longlong *)(*param_1 + 0x10) + uVar24 * 0x10),
                                         pauVar4[1]);
                    auVar47 = *pauVar4;
                    fVar59 = auVar47._0_4_;
                    auVar82._0_4_ = fVar59 * auVar53._0_4_;
                    fVar76 = auVar47._4_4_;
                    auVar82._4_4_ = fVar76 * auVar53._4_4_;
                    fVar77 = auVar47._8_4_;
                    auVar82._8_4_ = fVar77 * auVar53._8_4_;
                    fVar78 = auVar47._12_4_;
                    auVar82._12_4_ = fVar78 * auVar53._12_4_;
                    auVar47 = vblendps_avx(auVar82,auVar95._0_16_,8);
                    auVar53 = vinsertps_avx(auVar82,auVar82,0x4c);
                    auVar83._0_4_ = auVar47._0_4_ + auVar53._0_4_;
                    auVar83._4_4_ = auVar47._4_4_ + auVar53._4_4_;
                    auVar83._8_4_ = auVar47._8_4_ + auVar53._8_4_;
                    auVar83._12_4_ = auVar47._12_4_ + auVar53._12_4_;
                    auVar47 = vshufpd_avx(auVar83,auVar83,1);
                    fVar79 = auVar83._0_4_ + auVar47._0_4_;
                    if (fVar94 < fVar79) {
                      auVar73._0_4_ = fVar59 * fVar59;
                      auVar73._4_4_ = fVar76 * fVar76;
                      auVar73._8_4_ = fVar77 * fVar77;
                      auVar73._12_4_ = fVar78 * fVar78;
                      auVar47 = vinsertps_avx(auVar73,auVar73,0x4c);
                      auVar74._0_4_ = auVar73._0_4_ + auVar47._0_4_;
                      auVar74._4_4_ = auVar73._4_4_ + auVar47._4_4_;
                      auVar74._8_4_ = auVar73._8_4_ + auVar47._8_4_;
                      auVar74._12_4_ = auVar73._12_4_ + auVar47._12_4_;
                      auVar47 = vshufpd_avx(auVar74,auVar74,1);
                      fVar59 = (fVar79 * fVar79) / (auVar74._0_4_ + auVar47._0_4_);
                      if (fVar37 < fVar59) {
                        pauVar25 = pauVar4;
                        fVar37 = fVar59;
                      }
                    }
                  }
                  lVar11 = lVar11 + 8;
                } while (param_1[1] << 3 != lVar11);
              }
              bVar35 = pauVar25 != (undefined1 (*) [16])0x0;
            } while ((uVar14 != 0) && (pauVar25 == (undefined1 (*) [16])0x0));
            iVar10 = 0x1b;
            if (pauVar25 != (undefined1 (*) [16])0x0) {
              iVar10 = 0;
            }
          }
          else {
            iVar10 = 0x1c;
LAB_1405c4215:
            pauVar25 = (undefined1 (*) [16])0x0;
            bVar35 = false;
          }
          if (lVar15 != 0) {
            (*DAT_14151f538)(lVar15);
          }
          if (bVar35) goto LAB_1405c425f;
        } while ((iVar10 == 0) || (iVar10 == 0x1c));
        if (iVar10 == 0x1b) {
          uVar14 = *puVar1;
LAB_1405c46eb:
          uVar36 = 0;
          if (uVar14 < 2) {
            *(char **)*local_130 = "Too few faces in hull";
            uVar36 = 3;
          }
        }
        else {
LAB_1405c47ba:
          uVar36 = 1;
        }
        (*DAT_14151f538)(local_118);
        goto LAB_1405c3911;
      }
      local_f8._0_12_ = ZEXT812(0);
      local_f8._12_4_ = 0;
      auVar91 = ZEXT1664(local_f8);
      local_c8 = (longlong *)0x0;
      uVar24 = *puVar3;
      local_d8 = local_f8;
      if (uVar24 != 0) {
        local_c8 = (longlong *)(*DAT_14151f530)(0,0,uVar24 << 4);
        local_f8 = auVar91._0_16_;
        local_d8._8_8_ = uVar24;
        lVar29 = *(longlong *)*param_1;
        if (lVar29 != 0) {
          auVar61 = auVar99._0_16_;
          auVar71 = vsubps_avx(local_f8,auVar61);
          auVar47 = vmaxps_avx(auVar61,auVar71);
          auVar53 = vshufps_avx(auVar47,auVar47,0);
          auVar47 = vshufps_avx(auVar47,auVar47,0x55);
          auVar60 = vcmpps_avx(auVar47,auVar53,1);
          auVar47 = vshufpd_avx(auVar61,auVar71,1);
          auVar47 = vblendps_avx(auVar47,local_f8,10);
          auVar53 = vshufps_avx(auVar61,auVar71,0xd8);
          auVar53 = vblendps_avx(auVar53,local_f8,9);
          auVar47 = vblendvps_avx(auVar53,auVar47,auVar60);
          auVar51._0_4_ = auVar47._0_4_ * auVar47._0_4_;
          auVar51._4_4_ = auVar47._4_4_ * auVar47._4_4_;
          auVar51._8_4_ = auVar47._8_4_ * auVar47._8_4_;
          auVar51._12_4_ = auVar47._12_4_ * auVar47._12_4_;
          auVar53 = vmovshdup_avx(auVar51);
          auVar52._0_4_ = auVar51._0_4_ + auVar53._0_4_;
          auVar52._4_4_ = auVar51._4_4_ + auVar53._4_4_;
          auVar52._8_4_ = auVar51._8_4_ + auVar53._8_4_;
          auVar52._12_4_ = auVar51._12_4_ + auVar53._12_4_;
          auVar53 = vshufpd_avx(auVar52,auVar52,1);
          auVar53 = ZEXT416((uint)(auVar52._0_4_ + auVar53._0_4_));
          auVar53 = vsqrtss_avx(auVar53,auVar53);
          auVar53 = vshufps_avx(auVar53,auVar53,0);
          auVar47 = vdivps_avx(auVar47,auVar53);
          auVar92 = ZEXT1664(auVar47);
          auVar53 = vshufps_avx(auVar47,auVar47,0xc9);
          auVar39._0_4_ = auVar99._0_4_ * auVar53._0_4_;
          auVar39._4_4_ = auVar99._4_4_ * auVar53._4_4_;
          auVar39._8_4_ = auVar99._8_4_ * auVar53._8_4_;
          auVar39._12_4_ = auVar99._12_4_ * auVar53._12_4_;
          auVar53 = vshufps_avx(auVar61,auVar61,0xc9);
          auVar54._0_4_ = auVar53._0_4_ * auVar47._0_4_;
          auVar54._4_4_ = auVar53._4_4_ * auVar47._4_4_;
          auVar54._8_4_ = auVar53._8_4_ * auVar47._8_4_;
          auVar54._12_4_ = auVar53._12_4_ * auVar47._12_4_;
          auVar47 = vsubps_avx(auVar39,auVar54);
          auVar47 = vshufps_avx(auVar47,auVar47,0xc9);
          auVar46 = ZEXT1664(auVar47);
          lVar15 = ((longlong *)*param_1)[2];
          pauVar21 = (undefined1 (*) [32])(lVar29 << 4);
          pauVar16 = (undefined1 (*) [32])0x0;
          auVar99 = ZEXT1264(ZEXT812(0));
          local_138 = (undefined1 (*) [32])CONCAT44(local_138._4_4_,uVar32);
          local_140 = lVar15;
          local_130 = pauVar21;
          do {
            auVar47 = *(undefined1 (*) [16])(*pauVar16 + lVar15);
            auVar104 = ZEXT1664(auVar47);
            uVar13 = local_d8._0_8_;
            uVar24 = local_d8._0_8_ + 1;
            if ((ulonglong)local_d8._8_8_ < uVar24) {
              uVar14 = local_d8._8_8_ * 2;
              if ((ulonglong)(local_d8._8_8_ * 2) < uVar24) {
                uVar14 = uVar24;
              }
              local_c8 = (longlong *)(*DAT_14151f530)(local_c8,local_d8._8_8_ << 4,uVar14 << 4);
              auVar47 = auVar104._0_16_;
              pauVar21 = local_130;
              lVar15 = local_140;
              local_d8._8_8_ = uVar14;
            }
            local_d8._0_8_ = uVar24;
            if (local_c8 != (longlong *)0x0) {
              auVar40._0_4_ = auVar46._0_4_ * auVar47._0_4_;
              auVar40._4_4_ = auVar46._4_4_ * auVar47._4_4_;
              auVar40._8_4_ = auVar46._8_4_ * auVar47._8_4_;
              auVar40._12_4_ = auVar46._12_4_ * auVar47._12_4_;
              auVar53 = vblendps_avx(auVar40,auVar99._0_16_,8);
              auVar60 = vinsertps_avx(auVar40,auVar40,0x4c);
              auVar41._0_4_ = auVar53._0_4_ + auVar60._0_4_;
              auVar41._4_4_ = auVar53._4_4_ + auVar60._4_4_;
              auVar41._8_4_ = auVar53._8_4_ + auVar60._8_4_;
              auVar41._12_4_ = auVar53._12_4_ + auVar60._12_4_;
              auVar53 = vshufpd_avx(auVar41,auVar41,1);
              auVar42._0_4_ = auVar41._0_4_ + auVar53._0_4_;
              auVar42._4_4_ = auVar41._4_4_ + auVar53._4_4_;
              auVar42._8_4_ = auVar41._8_4_ + auVar53._8_4_;
              auVar42._12_4_ = auVar41._12_4_ + auVar53._12_4_;
              auVar55._0_4_ = auVar47._0_4_ * auVar92._0_4_;
              auVar55._4_4_ = auVar47._4_4_ * auVar92._4_4_;
              auVar55._8_4_ = auVar47._8_4_ * auVar92._8_4_;
              auVar55._12_4_ = auVar47._12_4_ * auVar92._12_4_;
              auVar47 = vblendps_avx(auVar55,auVar99._0_16_,8);
              auVar53 = vinsertps_avx(auVar55,auVar55,0x4c);
              auVar56._0_4_ = auVar47._0_4_ + auVar53._0_4_;
              auVar56._4_4_ = auVar47._4_4_ + auVar53._4_4_;
              auVar56._8_4_ = auVar47._8_4_ + auVar53._8_4_;
              auVar56._12_4_ = auVar47._12_4_ + auVar53._12_4_;
              auVar47 = vshufpd_avx(auVar56,auVar56,1);
              auVar57._0_4_ = auVar56._0_4_ + auVar47._0_4_;
              auVar57._4_4_ = auVar56._4_4_ + auVar47._4_4_;
              auVar57._8_4_ = auVar56._8_4_ + auVar47._8_4_;
              auVar57._12_4_ = auVar56._12_4_ + auVar47._12_4_;
              auVar47 = vinsertps_avx(auVar57,auVar42,0x1c);
              *(undefined1 (*) [16])(local_c8 + uVar13 * 2) = auVar47;
            }
            local_f8 = auVar91._0_16_;
            pauVar16 = (undefined1 (*) [32])(*pauVar16 + 0x10);
          } while (pauVar21 != pauVar16);
        }
      }
      local_e8 = (undefined4 *)0x0;
      FUN_140756b50(local_110,local_d8);
      local_148 = local_f8;
      local_150 = auVar95._0_4_;
      local_158 = (undefined1 *)CONCAT44(local_158._4_4_,(int)local_128);
      iVar10 = FUN_140756bf0(local_110,uVar30,uVar33);
      pauVar21 = (undefined1 (*) [32])(*DAT_14151f528)(0x50);
      auVar43._0_12_ = ZEXT812(0);
      auVar43._12_4_ = 0;
      *pauVar21 = ZEXT1632(auVar43);
      pauVar21[1] = ZEXT1632(auVar43);
      *(undefined1 (*) [32])(pauVar21[1] + 0x10) = ZEXT1632(auVar43);
      lVar29 = param_1[1];
      uVar14 = param_1[2];
      uVar24 = lVar29 + 1;
      local_128 = pauVar21;
      if (uVar14 < uVar24) {
        uVar31 = uVar14 * 2;
        if (uVar14 * 2 < uVar24) {
          uVar31 = uVar24;
        }
        lVar15 = (*DAT_14151f530)(param_1[3],uVar14 << 3,uVar31 * 8);
        param_1[3] = lVar15;
        param_1[2] = uVar31;
        lVar29 = param_1[1];
        uVar24 = lVar29 + 1;
      }
      else {
        lVar15 = param_1[3];
      }
      param_1[1] = uVar24;
      *(undefined1 (**) [32])(lVar15 + lVar29 * 8) = pauVar21;
      pauVar16 = (undefined1 (*) [32])(*DAT_14151f528)(0x50);
      auVar44._0_12_ = ZEXT812(0);
      auVar44._12_4_ = 0;
      *pauVar16 = ZEXT1632(auVar44);
      pauVar16[1] = ZEXT1632(auVar44);
      *(undefined1 (*) [32])(pauVar16[1] + 0x10) = ZEXT1632(auVar44);
      lVar29 = param_1[1];
      uVar14 = param_1[2];
      uVar24 = lVar29 + 1;
      if (uVar14 < uVar24) {
        uVar31 = uVar14 * 2;
        if (uVar14 * 2 < uVar24) {
          uVar31 = uVar24;
        }
        lVar15 = (*DAT_14151f530)(param_1[3],uVar14 << 3,uVar31 * 8);
        param_1[3] = lVar15;
        param_1[2] = uVar31;
        lVar29 = param_1[1];
        uVar24 = lVar29 + 1;
      }
      else {
        lVar15 = param_1[3];
      }
      *puVar1 = uVar24;
      *(undefined1 (**) [32])(lVar15 + lVar29 * 8) = pauVar16;
      uVar24 = local_f8._0_8_;
      local_138 = pauVar16;
      plVar17 = (longlong *)(*DAT_14151f530)(0,0,local_f8._0_8_ * 8);
      puVar8 = local_e8;
      uVar13 = local_f8._0_8_;
      if (local_f8._0_8_ == 0) {
        *(undefined8 *)(plVar17[-1] + 8) = *(undefined8 *)(pauVar21[1] + 0x18);
LAB_1405c47e2:
        *(undefined8 *)(_DAT_fffffffffffffff8 + 8) = *(undefined8 *)(local_138[1] + 0x18);
        plVar18 = (longlong *)0x0;
        pauVar16 = local_138;
      }
      else {
        uVar2 = *local_e8;
        plVar18 = (longlong *)(*DAT_14151f528)(0x20);
        *plVar18 = (longlong)pauVar21;
        auVar88._0_12_ = ZEXT812(0);
        auVar88._12_4_ = 0;
        auVar95 = ZEXT1664(auVar88);
        *(undefined1 (*) [16])(plVar18 + 1) = auVar88;
        *(undefined4 *)(plVar18 + 3) = uVar2;
        *(longlong **)(pauVar21[1] + 0x18) = plVar18;
        *plVar17 = (longlong)plVar18;
        uVar14 = 1;
        local_140 = CONCAT44(local_140._4_4_,iVar10);
        local_130 = pauVar21;
        if (uVar13 != 1) {
          lVar29 = uVar13 * 4 + -4;
          uVar31 = 1;
          do {
            uVar2 = puVar8[uVar31];
            plVar18 = (longlong *)(*DAT_14151f528)(0x20);
            *plVar18 = (longlong)local_130;
            *(undefined1 (*) [16])(plVar18 + 1) = auVar95._0_16_;
            *(undefined4 *)(plVar18 + 3) = uVar2;
            *(longlong **)(plVar17[uVar31 - 1] + 8) = plVar18;
            uVar14 = uVar31 + 1;
            uVar28 = uVar24;
            if (uVar24 <= uVar31) {
              uVar28 = uVar24 * 2;
              if (uVar24 * 2 < uVar14) {
                uVar28 = uVar14;
              }
              plVar17 = (longlong *)(*DAT_14151f530)(plVar17,uVar24 << 3,uVar28 * 8);
            }
            plVar17[uVar31] = (longlong)plVar18;
            lVar29 = lVar29 + -4;
            uVar24 = uVar28;
            uVar31 = uVar14;
          } while (lVar29 != 0);
        }
        pauVar21 = local_130;
        uVar24 = local_f8._0_8_;
        *(undefined8 *)(plVar17[uVar14 - 1] + 8) = *(undefined8 *)(local_130[1] + 0x18);
        if (local_f8._0_8_ == 0) {
          iVar10 = (int)local_140;
          goto LAB_1405c47e2;
        }
        local_118 = plVar17;
        plVar18 = (longlong *)(*DAT_14151f530)(0,0,local_f8._0_8_ * 8);
        pauVar16 = local_138;
        pauVar20 = (undefined1 (*) [16])0x0;
        if (0 < (int)local_f8._0_4_) {
          pauVar20 = (undefined1 (*) [16])(ulonglong)(local_f8._0_4_ & 0x7fffffff);
          puVar19 = (undefined8 *)(*DAT_14151f528)(0x20);
          uVar2 = local_e8[(longlong)pauVar20[-1] + 0xf];
          *puVar19 = pauVar16;
          auVar89._0_12_ = ZEXT812(0);
          auVar89._12_4_ = 0;
          auVar95 = ZEXT1664(auVar89);
          *(undefined1 (*) [16])(puVar19 + 1) = auVar89;
          *(undefined4 *)(puVar19 + 3) = uVar2;
          *(undefined8 **)(pauVar16[1] + 0x18) = puVar19;
          *plVar18 = (longlong)puVar19;
          local_120 = pauVar20;
          if (pauVar20 != (undefined1 (*) [16])0x1) {
            uVar14 = 1;
            do {
              plVar17 = (longlong *)(*DAT_14151f528)(0x20);
              uVar2 = local_e8[(longlong)pauVar20[-1] + 0xe];
              *plVar17 = (longlong)pauVar16;
              *(undefined1 (*) [16])(plVar17 + 1) = auVar95._0_16_;
              *(undefined4 *)(plVar17 + 3) = uVar2;
              *(longlong **)(plVar18[uVar14 - 1] + 8) = plVar17;
              uVar31 = uVar14 + 1;
              uVar28 = uVar24;
              if (uVar24 <= uVar14) {
                uVar28 = uVar24 * 2;
                if (uVar24 * 2 < uVar31) {
                  uVar28 = uVar31;
                }
                plVar18 = (longlong *)(*DAT_14151f530)(plVar18,uVar24 << 3,uVar28 * 8);
                pauVar16 = local_138;
              }
              plVar18[uVar14] = (longlong)plVar17;
              pauVar20 = (undefined1 (*) [16])((longlong)pauVar20[-1] + 0xf);
              uVar24 = uVar28;
              uVar14 = uVar31;
            } while (pauVar20 != (undefined1 (*) [16])0x1);
          }
          pauVar21 = local_130;
          pauVar20 = local_120;
        }
        *(undefined8 *)(plVar18[(longlong)pauVar20[-1] + 0xf] + 8) =
             *(undefined8 *)(pauVar16[1] + 0x18);
        plVar17 = local_118;
        iVar10 = (int)local_140;
        if (local_f8._0_8_ != 0) {
          if (local_f8._0_8_ == 1) {
            uVar14 = 0;
          }
          else {
            uVar24 = local_f8._0_8_ * 2 - 3;
            uVar14 = 0;
            do {
              uVar31 = uVar24 + 1;
              if ((uVar31 | local_f8._0_8_) >> 0x20 == 0) {
                uVar31 = (uVar31 & 0xffffffff) % (local_f8._0_8_ & 0xffffffff);
              }
              else {
                uVar31 = uVar31 % (ulonglong)local_f8._0_8_;
              }
              lVar29 = plVar18[uVar31];
              lVar15 = local_118[uVar14];
              *(longlong *)(lVar15 + 0x10) = lVar29;
              *(longlong *)(lVar29 + 0x10) = lVar15;
              if ((uVar24 | local_f8._0_8_) >> 0x20 == 0) {
                uVar31 = (uVar24 & 0xffffffff) % (local_f8._0_8_ & 0xffffffff);
              }
              else {
                uVar31 = uVar24 % (ulonglong)local_f8._0_8_;
              }
              lVar29 = plVar18[uVar31];
              lVar15 = local_118[uVar14 + 1];
              *(longlong *)(lVar15 + 0x10) = lVar29;
              *(longlong *)(lVar29 + 0x10) = lVar15;
              uVar14 = uVar14 + 2;
              uVar24 = uVar24 - 2;
            } while ((local_f8._0_8_ & 0xfffffffffffffffe) != uVar14);
          }
          if ((local_f8._0_8_ & 1) != 0) {
            uVar24 = (local_f8._0_8_ * 2 + -2) - uVar14;
            if ((uVar24 | local_f8._0_8_) >> 0x20 == 0) {
              uVar24 = (uVar24 & 0xffffffff) % (local_f8._0_8_ & 0xffffffff);
            }
            else {
              uVar24 = uVar24 % (ulonglong)local_f8._0_8_;
            }
            lVar29 = plVar18[uVar24];
            lVar15 = local_118[uVar14];
            *(longlong *)(lVar15 + 0x10) = lVar29;
            *(longlong *)(lVar29 + 0x10) = lVar15;
          }
        }
      }
      lVar29 = *(longlong *)(*param_1 + 0x10);
      lVar15 = *(longlong *)(pauVar21[1] + 0x18);
      auVar47 = *(undefined1 (*) [16])(lVar29 + (longlong)*(int *)(lVar15 + 0x18) * 0x10);
      lVar11 = *(longlong *)(lVar15 + 8);
      auVar53 = *(undefined1 (*) [16])(lVar29 + (longlong)*(int *)(lVar11 + 0x18) * 0x10);
      auVar45._0_4_ = auVar47._0_4_ + auVar53._0_4_;
      auVar45._4_4_ = auVar47._4_4_ + auVar53._4_4_;
      auVar45._8_4_ = auVar47._8_4_ + auVar53._8_4_;
      auVar45._12_4_ = auVar47._12_4_ + auVar53._12_4_;
      *(undefined1 (*) [16])(*pauVar21 + 0x10) = auVar45;
      auVar58._0_12_ = ZEXT812(0);
      auVar58._12_4_ = 0;
      *(undefined1 (*) [16])*pauVar21 = auVar58;
      lVar11 = *(longlong *)(lVar11 + 8);
      if (lVar11 == lVar15) {
        auVar75 = SUB6416(ZEXT464(0x40000000),0);
        auVar84 = ZEXT816(0);
      }
      else {
        auVar86._0_12_ = ZEXT812(0);
        auVar86._12_4_ = 0;
        iVar27 = 2;
        auVar60 = auVar45;
        auVar71 = ZEXT816(0);
        do {
          auVar61 = *(undefined1 (*) [16])(lVar29 + (longlong)*(int *)(lVar11 + 0x18) * 0x10);
          auVar64 = vsubps_avx(auVar53,auVar47);
          auVar48 = vsubps_avx(auVar61,auVar53);
          auVar49 = vsubps_avx(auVar47,auVar61);
          fVar94 = auVar49._0_4_;
          auVar97._0_4_ = fVar94 * fVar94;
          fVar59 = auVar49._4_4_;
          auVar97._4_4_ = fVar59 * fVar59;
          fVar77 = auVar49._8_4_;
          auVar97._8_4_ = fVar77 * fVar77;
          fVar79 = auVar49._12_4_;
          auVar97._12_4_ = fVar79 * fVar79;
          auVar53 = vblendps_avx(auVar97,auVar86,8);
          auVar62 = vinsertps_avx(auVar97,auVar97,0x4c);
          auVar98._0_4_ = auVar53._0_4_ + auVar62._0_4_;
          auVar98._4_4_ = auVar53._4_4_ + auVar62._4_4_;
          auVar98._8_4_ = auVar53._8_4_ + auVar62._8_4_;
          auVar98._12_4_ = auVar53._12_4_ + auVar62._12_4_;
          auVar63 = vshufpd_avx(auVar98,auVar98,1);
          fVar37 = auVar48._0_4_;
          auVar102._0_4_ = fVar37 * fVar37;
          fVar76 = auVar48._4_4_;
          auVar102._4_4_ = fVar76 * fVar76;
          fVar78 = auVar48._8_4_;
          auVar102._8_4_ = fVar78 * fVar78;
          fVar5 = auVar48._12_4_;
          auVar102._12_4_ = fVar5 * fVar5;
          auVar53 = vblendps_avx(auVar102,auVar86,8);
          auVar62 = vinsertps_avx(auVar102,auVar102,0x4c);
          auVar103._0_4_ = auVar53._0_4_ + auVar62._0_4_;
          auVar103._4_4_ = auVar53._4_4_ + auVar62._4_4_;
          auVar103._8_4_ = auVar53._8_4_ + auVar62._8_4_;
          auVar103._12_4_ = auVar53._12_4_ + auVar62._12_4_;
          auVar53 = vshufpd_avx(auVar103,auVar103,1);
          auVar53 = vcmpss_avx(ZEXT416((uint)(auVar103._0_4_ + auVar53._0_4_)),
                               ZEXT416((uint)(auVar98._0_4_ + auVar63._0_4_)),1);
          auVar53 = vshufps_avx(auVar53,auVar53,0);
          auVar62 = vshufps_avx(auVar48,auVar48,0xc9);
          auVar100._0_4_ = auVar62._0_4_ * auVar64._0_4_;
          auVar100._4_4_ = auVar62._4_4_ * auVar64._4_4_;
          auVar100._8_4_ = auVar62._8_4_ * auVar64._8_4_;
          auVar100._12_4_ = auVar62._12_4_ * auVar64._12_4_;
          auVar62 = vshufps_avx(auVar64,auVar64,9);
          auVar90._0_4_ = auVar62._0_4_ * fVar37;
          auVar90._4_4_ = auVar62._4_4_ * fVar76;
          auVar90._8_4_ = auVar62._8_4_ * fVar78;
          auVar90._12_4_ = auVar62._12_4_ * fVar5;
          auVar63 = vsubps_avx(auVar100,auVar90);
          auVar63 = vshufps_avx(auVar63,auVar63,9);
          auVar101._0_4_ = auVar62._0_4_ * fVar94;
          auVar101._4_4_ = auVar62._4_4_ * fVar59;
          auVar101._8_4_ = auVar62._8_4_ * fVar77;
          auVar101._12_4_ = auVar62._12_4_ * fVar79;
          auVar62 = vshufps_avx(auVar49,auVar49,0xc9);
          auVar93._0_4_ = auVar62._0_4_ * auVar64._0_4_;
          auVar93._4_4_ = auVar62._4_4_ * auVar64._4_4_;
          auVar93._8_4_ = auVar62._8_4_ * auVar64._8_4_;
          auVar93._12_4_ = auVar62._12_4_ * auVar64._12_4_;
          auVar62 = vsubps_avx(auVar101,auVar93);
          auVar62 = vshufps_avx(auVar62,auVar62,9);
          auVar53 = vblendvps_avx(auVar62,auVar63,auVar53);
          auVar84._0_4_ = auVar71._0_4_ + auVar53._0_4_;
          auVar84._4_4_ = auVar71._4_4_ + auVar53._4_4_;
          auVar84._8_4_ = auVar71._8_4_ + auVar53._8_4_;
          auVar84._12_4_ = auVar71._12_4_ + auVar53._12_4_;
          *(undefined1 (*) [16])*pauVar21 = auVar84;
          auVar45._0_4_ = auVar60._0_4_ + auVar61._0_4_;
          auVar45._4_4_ = auVar60._4_4_ + auVar61._4_4_;
          auVar45._8_4_ = auVar60._8_4_ + auVar61._8_4_;
          auVar45._12_4_ = auVar60._12_4_ + auVar61._12_4_;
          *(undefined1 (*) [16])(*pauVar21 + 0x10) = auVar45;
          iVar27 = iVar27 + 1;
          lVar11 = *(longlong *)(lVar11 + 8);
          auVar53 = auVar61;
          auVar60 = auVar45;
          auVar71 = auVar84;
        } while (lVar11 != lVar15);
        auVar75._0_4_ = (float)iVar27;
        auVar75._4_12_ = unaff_000015c4;
      }
      auVar47 = vshufps_avx(auVar75,auVar75,0);
      auVar47 = vdivps_avx(auVar45,auVar47);
      *(undefined1 (*) [16])(*local_128 + 0x10) = auVar47;
      auVar47 = vsubps_avx(auVar58,auVar84);
      *(undefined1 (*) [16])*pauVar16 = auVar47;
      uVar13 = *(undefined8 *)(*local_128 + 0x18);
      *(undefined8 *)(*pauVar16 + 0x10) = *(undefined8 *)*(undefined1 (*) [16])(*local_128 + 0x10);
      *(undefined8 *)(*pauVar16 + 0x18) = uVar13;
      uVar36 = iVar10 == 1;
      (*DAT_14151f538)(plVar18);
      if (plVar17 != (longlong *)0x0) {
        (*DAT_14151f538)(plVar17);
      }
      FUN_140756b70(local_110);
      if (local_e8 != (undefined4 *)0x0) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_f8._8_8_;
        local_f8 = auVar6 << 0x40;
        (*DAT_14151f538)();
      }
      if (local_c8 != (longlong *)0x0) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = local_d8._8_8_;
        local_d8 = auVar7 << 0x40;
        (*DAT_14151f538)();
      }
      goto LAB_1405c3911;
    }
  }
  *(char **)*param_4 = "Could not find a suitable initial triangle because its area was too small";
  uVar36 = 4;
LAB_1405c3911:
  if (DAT_1414ef3c0 == (local_c0 ^ (ulonglong)auStack_178)) {
    return uVar36;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_c0 ^ (ulonglong)auStack_178);
}

