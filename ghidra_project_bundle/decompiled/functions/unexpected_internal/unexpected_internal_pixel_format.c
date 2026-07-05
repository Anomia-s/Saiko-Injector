/**
 * Function: unexpected_internal_pixel_format
 * Address:  140115cc0
 * Signature: undefined unexpected_internal_pixel_format(void)
 * Body size: 2453 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong unexpected_internal_pixel_format
                    (uint param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                    float *param_6,uint param_7,uint param_8,int param_9,undefined4 param_10,
                    float *param_11,uint param_12,char param_13)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  unkbyte10 Var12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  float *pfVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  float *pfVar26;
  uint uVar27;
  float *pfVar28;
  float *pfVar29;
  longlong lVar30;
  int iVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  ushort uVar40;
  ushort uVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  ushort uVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  undefined1 auVar64 [16];
  float *local_c0;
  longlong local_b0;
  uint uVar34;
  uint uVar42;
  uint uVar43;
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  
  if (param_6 == (float *)0x0) {
    uVar21 = FUN_1400fbed0("Parameter \'%s\' is invalid","src");
    return uVar21;
  }
  if (param_7 == 0) {
    uVar21 = FUN_1400fbed0("Parameter \'%s\' is invalid","src_pitch");
    return uVar21;
  }
  if (param_11 == (float *)0x0) {
    uVar21 = FUN_1400fbed0("Parameter \'%s\' is invalid","dst");
    return uVar21;
  }
  if (param_12 == 0) {
    uVar21 = FUN_1400fbed0("Parameter \'%s\' is invalid","dst_pitch");
    return uVar21;
  }
  if ((((param_3 & 0xff0f0000) == 0x16070000 || param_13 != '\0') ||
      ((param_8 & 0xff0f0000) == 0x16070000 ||
       0x2000 < (param_3 & 0xff00) && (param_3 & 0xf0000000) == 0x10000000)) ||
     (0x2000 < (param_8 & 0xff00) && (param_8 & 0xf0000000) == 0x10000000)) {
    uVar20 = 0x1b308010;
    if (param_3 == 0x1b608010) {
      uVar20 = param_3;
    }
  }
  else {
    uVar19 = param_3 + 0xe9c9dffc >> 0x14;
    if ((5 < ((param_3 + 0xe9c9dffc) * 0x1000 | uVar19)) ||
       (uVar20 = param_3, (0x33U >> (uVar19 & 0x1f) & 1) == 0)) {
      uVar20 = 0x16362004;
    }
  }
  iVar23 = 0x120005a0;
  if (param_13 != '\0') {
    iVar23 = 0x12000500;
  }
  if (param_4 == iVar23 && param_3 == uVar20) {
    if (param_4 != param_9 || param_8 != param_3) {
      local_b0 = height_pitch_would_overflow(param_1,param_2,param_3);
      if (local_b0 == 0) {
        return 0;
      }
      local_c0 = *(float **)(local_b0 + 0x18);
      uVar19 = *(uint *)(local_b0 + 0x10);
      goto joined_r0x000140116193;
    }
    local_b0 = 0;
    local_c0 = param_11;
    uVar19 = param_12;
    if ((int)uVar20 < 0x16862004) goto LAB_140115e2e;
LAB_1401161cc:
    if (uVar20 == 0x16862004) goto LAB_140116318;
    if ((uVar20 == 0x1b308010) || (uVar20 == 0x1b608010)) {
      if ((param_2 != 0) && (param_1 != 0)) {
        pfVar26 = local_c0;
        iVar31 = param_2;
        do {
          pfVar22 = param_6;
          pfVar28 = pfVar26;
          uVar27 = param_1;
          if ((param_1 & 1) != 0) {
            fVar3 = *param_6;
            pfVar22 = param_6 + 4;
            fVar1 = param_6[1];
            pfVar28 = pfVar26 + 4;
            uVar2 = *(undefined8 *)(param_6 + 2);
            *pfVar26 = fVar3;
            pfVar26[1] = fVar1 * fVar3;
            *(ulonglong *)(pfVar26 + 2) =
                 CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar3,fVar3 * (float)uVar2);
            uVar27 = param_1 - 1;
          }
          if (param_1 != 1) {
            lVar30 = 0;
            do {
              fVar3 = *(float *)((longlong)pfVar22 + lVar30);
              fVar1 = *(float *)((longlong)pfVar22 + lVar30 + 4);
              uVar2 = *(undefined8 *)((longlong)pfVar22 + lVar30 + 8);
              *(float *)((longlong)pfVar28 + lVar30) = fVar3;
              *(float *)((longlong)pfVar28 + lVar30 + 4) = fVar1 * fVar3;
              *(ulonglong *)((longlong)pfVar28 + lVar30 + 8) =
                   CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar3,fVar3 * (float)uVar2);
              fVar3 = *(float *)((longlong)pfVar22 + lVar30 + 0x10);
              fVar1 = *(float *)((longlong)pfVar22 + lVar30 + 0x14);
              uVar2 = *(undefined8 *)((longlong)pfVar22 + lVar30 + 0x18);
              *(float *)((longlong)pfVar28 + lVar30 + 0x10) = fVar3;
              *(float *)((longlong)pfVar28 + lVar30 + 0x14) = fVar1 * fVar3;
              *(ulonglong *)((longlong)pfVar28 + lVar30 + 0x18) =
                   CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar3,fVar3 * (float)uVar2);
              lVar30 = lVar30 + 0x20;
              uVar27 = uVar27 - 2;
            } while (uVar27 != 0);
          }
          param_6 = (float *)((longlong)param_6 + (longlong)(int)param_7);
          pfVar26 = (float *)((longlong)pfVar26 + (longlong)(int)uVar19);
          iVar31 = iVar31 + -1;
        } while (iVar31 != 0);
      }
      goto LAB_140116575;
    }
LAB_140116624:
    FUN_1400fbed0("Unexpected internal pixel format");
    uVar21 = 0;
  }
  else {
    local_b0 = height_pitch_would_overflow(param_1,param_2,uVar20);
    if (local_b0 == 0) {
      return 0;
    }
    cVar18 = parameter_s_is_invalid
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar20,iVar23,0,
                        *(undefined8 *)(local_b0 + 0x18),*(undefined4 *)(local_b0 + 0x10));
    if (cVar18 == '\0') {
      uVar21 = 0;
      goto LAB_140116637;
    }
    local_c0 = *(float **)(local_b0 + 0x18);
    uVar19 = *(uint *)(local_b0 + 0x10);
    param_6 = local_c0;
    param_7 = uVar19;
joined_r0x000140116193:
    if (0x16862003 < (int)uVar20) goto LAB_1401161cc;
LAB_140115e2e:
    auVar33 = _DAT_140de9930;
    auVar17 = _DAT_140de9920;
    auVar16 = _DAT_140de9910;
    if (uVar20 == 0x16362004) {
LAB_140115e4e:
      if ((param_2 != 0) && (param_1 != 0)) {
        pfVar22 = (float *)((longlong)param_6 +
                           (ulonglong)(param_1 - 1) * 4 +
                           (ulonglong)(param_2 - 1) * (longlong)(int)param_7 + 4);
        bVar32 = param_6 < (float *)((longlong)local_c0 +
                                    (ulonglong)(param_1 - 1) * 4 +
                                    (longlong)(int)uVar19 * (ulonglong)(param_2 - 1) + 4);
        uVar27 = param_1 & 0xfffffffc;
        uVar21 = (ulonglong)uVar27;
        pfVar26 = local_c0;
        iVar31 = param_2;
        do {
          pfVar28 = pfVar26;
          pfVar29 = param_6;
          uVar34 = param_1;
          if (param_1 < 4 || ((int)(param_7 | uVar19) < 0 || bVar32 && local_c0 < pfVar22)) {
LAB_140116059:
            lVar30 = 0;
            do {
              fVar3 = pfVar29[lVar30];
              uVar24 = (uint)fVar3 >> 0x18;
              pfVar28[lVar30] =
                   (float)(((uint)fVar3 >> 8 & 0xff) * uVar24 * 0x8081 >> 0xf & 0x1ff00 |
                           (uint)fVar3 & 0xff000000 | (uVar24 * ((uint)fVar3 & 0xff)) / 0xff |
                          ((uint)fVar3 >> 0x10 & 0xff) * uVar24 * 0x8081 >> 7 & 0x1ff0000);
              lVar30 = lVar30 + 1;
            } while (uVar34 != (uint)lVar30);
          }
          else {
            pfVar28 = pfVar26 + uVar21;
            pfVar29 = param_6 + uVar21;
            uVar25 = 0;
            do {
              auVar36 = *(undefined1 (*) [16])(param_6 + uVar25);
              uVar34 = auVar36._0_4_;
              auVar45._0_4_ = uVar34 >> 0x10;
              uVar24 = auVar36._4_4_;
              auVar45._4_4_ = uVar24 >> 0x10;
              uVar42 = auVar36._8_4_;
              uVar43 = auVar36._12_4_;
              auVar45._8_4_ = uVar42 >> 0x10;
              auVar45._12_4_ = uVar43 >> 0x10;
              auVar48._0_4_ = uVar34 >> 8;
              auVar48._4_4_ = uVar24 >> 8;
              auVar48._8_4_ = uVar42 >> 8;
              auVar48._12_4_ = uVar43 >> 8;
              auVar64._0_4_ = uVar34 >> 0x18;
              auVar64._4_4_ = uVar24 >> 0x18;
              auVar64._8_4_ = uVar42 >> 0x18;
              auVar64._12_4_ = uVar43 >> 0x18;
              auVar44 = pmaddwd(auVar45 & auVar16,auVar64);
              auVar44 = pshuflw(auVar44,auVar44,0xe8);
              auVar44 = pshufhw(auVar44,auVar44,0xe8);
              auVar50._0_4_ = auVar44._0_4_;
              auVar50._8_4_ = auVar44._8_4_;
              auVar50._12_4_ = auVar44._12_4_;
              auVar50._4_4_ = auVar50._8_4_;
              auVar45 = pmulhuw(auVar50,auVar17);
              auVar44 = pmaddwd(auVar48 & auVar16,auVar64);
              auVar44 = pshuflw(auVar44,auVar44,0xe8);
              auVar44 = pshufhw(auVar44,auVar44,0xe8);
              auVar49._0_4_ = auVar44._0_4_;
              auVar49._8_4_ = auVar44._8_4_;
              auVar49._12_4_ = auVar44._12_4_;
              auVar49._4_4_ = auVar49._8_4_;
              auVar50 = pmulhuw(auVar49,auVar17);
              uVar55 = auVar50._6_2_ >> 7;
              auVar10._2_2_ = auVar50._8_2_ >> 7;
              auVar10._0_2_ = uVar55;
              auVar10._4_8_ = 0;
              auVar4._12_2_ = uVar55;
              auVar4._0_12_ = auVar10 << 0x30;
              uVar2 = CONCAT44(auVar4._10_4_,CONCAT22(auVar50._4_2_ >> 7,uVar55));
              auVar7._6_8_ = 0;
              auVar7._0_6_ = (uint6)((ulonglong)uVar2 >> 0x10);
              auVar44 = pmaddwd(auVar64,auVar36 & auVar16);
              auVar44 = pshuflw(auVar36 & auVar16,auVar44,0xe8);
              auVar44 = pshufhw(auVar44,auVar44,0xe8);
              auVar56._0_4_ = auVar44._0_4_;
              auVar56._8_4_ = auVar44._8_4_;
              auVar56._12_4_ = auVar44._12_4_;
              auVar56._4_4_ = auVar56._8_4_;
              auVar44 = pmulhuw(auVar56,auVar17);
              auVar57._0_2_ = auVar44._0_2_ >> 7;
              uVar55 = auVar44._6_2_ >> 7;
              auVar11._2_2_ = auVar44._8_2_ >> 7;
              auVar11._0_2_ = uVar55;
              auVar11._4_8_ = 0;
              auVar5._12_2_ = uVar55;
              auVar5._0_12_ = auVar11 << 0x30;
              auVar8._6_8_ = 0;
              auVar8._0_6_ = (uint6)(CONCAT44(auVar5._10_4_,CONCAT22(auVar44._4_2_ >> 7,uVar55)) >>
                                    0x10);
              auVar57._6_8_ = SUB148(auVar8 << 0x40,6);
              auVar57._4_2_ = auVar44._2_2_ >> 7;
              auVar57._2_2_ = 0;
              auVar57._14_2_ = 0;
              auVar60._0_12_ = SUB1412(SUB1614((undefined1  [16])0x0,0),0);
              auVar60._12_2_ = 0;
              auVar60._14_2_ = auVar45._6_2_ >> 7;
              auVar59._12_4_ = auVar60._12_4_;
              auVar59._0_10_ = SUB1410(SUB1614((undefined1  [16])0x0,0),0);
              auVar59._10_2_ = auVar45._4_2_ >> 7;
              auVar58._10_6_ = auVar59._10_6_;
              auVar58._0_10_ = (unkuint10)0 << 0x40;
              auVar14._2_8_ = auVar58._8_8_;
              auVar14._0_2_ = auVar45._2_2_ >> 7;
              auVar14._10_2_ = 0;
              auVar44._2_12_ = auVar14 << 0x10;
              auVar44._0_2_ = auVar45._0_2_ >> 7;
              auVar44._14_2_ = 0;
              auVar51._0_4_ = (uint)(ushort)(auVar50._0_2_ >> 7) << 8;
              auVar51._4_4_ = (int)CONCAT82(SUB148(auVar7 << 0x40,6),auVar50._2_2_ >> 7) << 8;
              auVar51._8_4_ = (int)((ulonglong)uVar2 >> 0x10) << 8;
              auVar51._12_4_ = (auVar4._10_4_ >> 0x10) << 8;
              *(undefined1 (*) [16])(pfVar26 + uVar25) =
                   auVar51 | auVar44 << 0x10 | auVar36 & auVar33 | auVar57;
              uVar25 = uVar25 + 4;
            } while (uVar21 != uVar25);
            uVar34 = param_1 - uVar27;
            if (uVar27 != param_1) goto LAB_140116059;
          }
          param_6 = (float *)((longlong)param_6 + (longlong)(int)param_7);
          pfVar26 = (float *)((longlong)pfVar26 + (longlong)(int)uVar19);
          iVar31 = iVar31 + -1;
        } while (iVar31 != 0);
      }
      goto LAB_140116575;
    }
    if (uVar20 != 0x16462004) {
      if (uVar20 == 0x16762004) goto LAB_140115e4e;
      goto LAB_140116624;
    }
LAB_140116318:
    auVar17 = _DAT_140de9920;
    auVar16 = _DAT_140de9910;
    if ((param_2 != 0) && (param_1 != 0)) {
      pfVar22 = (float *)((longlong)param_6 +
                         (ulonglong)(param_1 - 1) * 4 +
                         (ulonglong)(param_2 - 1) * (longlong)(int)param_7 + 4);
      bVar32 = param_6 < (float *)((longlong)local_c0 +
                                  (ulonglong)(param_1 - 1) * 4 +
                                  (longlong)(int)uVar19 * (ulonglong)(param_2 - 1) + 4);
      uVar27 = param_1 & 0xfffffffc;
      uVar21 = (ulonglong)uVar27;
      pfVar26 = local_c0;
      iVar31 = param_2;
      do {
        pfVar28 = pfVar26;
        pfVar29 = param_6;
        uVar34 = param_1;
        if (param_1 < 4 || ((int)(param_7 | uVar19) < 0 || bVar32 && local_c0 < pfVar22)) {
LAB_140116501:
          lVar30 = 0;
          do {
            fVar3 = pfVar29[lVar30];
            uVar24 = (uint)fVar3 & 0xff;
            pfVar28[lVar30] =
                 (float)(((uint)fVar3 >> 8 & 0xff) * uVar24 * 0x8081 >> 0xf & 0x1ff00 |
                         ((uint)fVar3 >> 0x18) * uVar24 * 0x10102 & 0xff000000 |
                         ((uint)fVar3 >> 0x10 & 0xff) * uVar24 * 0x8081 >> 7 & 0x1ff0000 | uVar24);
            lVar30 = lVar30 + 1;
          } while (uVar34 != (uint)lVar30);
        }
        else {
          pfVar28 = pfVar26 + uVar21;
          pfVar29 = param_6 + uVar21;
          uVar25 = 0;
          do {
            auVar33 = *(undefined1 (*) [16])(param_6 + uVar25);
            uVar34 = auVar33._0_4_;
            auVar35._0_4_ = uVar34 >> 0x18;
            uVar24 = auVar33._4_4_;
            auVar35._4_4_ = uVar24 >> 0x18;
            uVar42 = auVar33._8_4_;
            uVar43 = auVar33._12_4_;
            auVar35._8_4_ = uVar42 >> 0x18;
            auVar35._12_4_ = uVar43 >> 0x18;
            auVar46._0_4_ = uVar34 >> 0x10;
            auVar46._4_4_ = uVar24 >> 0x10;
            auVar46._8_4_ = uVar42 >> 0x10;
            auVar46._12_4_ = uVar43 >> 0x10;
            auVar52._0_4_ = uVar34 >> 8;
            auVar52._4_4_ = uVar24 >> 8;
            auVar52._8_4_ = uVar42 >> 8;
            auVar52._12_4_ = uVar43 >> 8;
            auVar33 = auVar33 & auVar16;
            auVar36 = pmaddwd(auVar35,auVar33);
            auVar36 = pshuflw(auVar36,auVar36,0xe8);
            auVar36 = pshufhw(auVar36,auVar36,0xe8);
            auVar37._0_4_ = auVar36._0_4_;
            auVar37._8_4_ = auVar36._8_4_;
            auVar37._12_4_ = auVar36._12_4_;
            auVar37._4_4_ = auVar37._8_4_;
            auVar36 = pmulhuw(auVar37,auVar17);
            uVar55 = auVar36._2_2_ >> 7;
            auVar38._0_4_ = CONCAT22(uVar55,auVar36._0_2_ >> 7);
            uVar40 = auVar36._4_2_ >> 7;
            uVar41 = auVar36._6_2_ >> 7;
            Var12 = CONCAT64(CONCAT42(CONCAT22(uVar41,uVar41),uVar40),CONCAT22(uVar40,uVar41));
            auVar38._8_8_ = (undefined8)((unkuint10)Var12 >> 0x10);
            auVar38._6_2_ = uVar55;
            auVar38._4_2_ = uVar55;
            auVar36 = pmaddwd(auVar46 & auVar16,auVar33);
            auVar36 = pshuflw(auVar36,auVar36,0xe8);
            auVar36 = pshufhw(auVar36,auVar36,0xe8);
            auVar47._0_4_ = auVar36._0_4_;
            auVar47._8_4_ = auVar36._8_4_;
            auVar47._12_4_ = auVar36._12_4_;
            auVar47._4_4_ = auVar47._8_4_;
            auVar44 = pmulhuw(auVar47,auVar17);
            auVar36 = pmaddwd(auVar52 & auVar16,auVar33);
            auVar36 = pshuflw(auVar36,auVar36,0xe8);
            auVar36 = pshufhw(auVar36,auVar36,0xe8);
            auVar53._0_4_ = auVar36._0_4_;
            auVar53._8_4_ = auVar36._8_4_;
            auVar53._12_4_ = auVar36._12_4_;
            auVar53._4_4_ = auVar53._8_4_;
            auVar45 = pmulhuw(auVar53,auVar17);
            uVar55 = auVar45._6_2_ >> 7;
            auVar13._2_2_ = auVar45._8_2_ >> 7;
            auVar13._0_2_ = uVar55;
            auVar13._4_8_ = 0;
            auVar6._12_2_ = uVar55;
            auVar6._0_12_ = auVar13 << 0x30;
            uVar2 = CONCAT44(auVar6._10_4_,CONCAT22(auVar45._4_2_ >> 7,uVar55));
            auVar9._6_8_ = 0;
            auVar9._0_6_ = (uint6)((ulonglong)uVar2 >> 0x10);
            auVar39._0_4_ = auVar38._0_4_ << 0x18;
            auVar39._4_4_ = auVar38._4_4_ << 0x18;
            auVar39._8_4_ = (int)((unkuint10)Var12 >> 0x10) << 0x18;
            auVar39._12_4_ = CONCAT22(uVar41,uVar41) << 0x18;
            auVar63._0_12_ = SUB1412(SUB1614((undefined1  [16])0x0,0),0);
            auVar63._12_2_ = 0;
            auVar63._14_2_ = auVar44._6_2_ >> 7;
            auVar62._12_4_ = auVar63._12_4_;
            auVar62._0_10_ = SUB1410(SUB1614((undefined1  [16])0x0,0),0);
            auVar62._10_2_ = auVar44._4_2_ >> 7;
            auVar61._10_6_ = auVar62._10_6_;
            auVar61._0_10_ = (unkuint10)0 << 0x40;
            auVar15._2_8_ = auVar61._8_8_;
            auVar15._0_2_ = auVar44._2_2_ >> 7;
            auVar15._10_2_ = 0;
            auVar36._2_12_ = auVar15 << 0x10;
            auVar36._0_2_ = auVar44._0_2_ >> 7;
            auVar36._14_2_ = 0;
            auVar54._0_4_ = (uint)(ushort)(auVar45._0_2_ >> 7) << 8;
            auVar54._4_4_ = (int)CONCAT82(SUB148(auVar9 << 0x40,6),auVar45._2_2_ >> 7) << 8;
            auVar54._8_4_ = (int)((ulonglong)uVar2 >> 0x10) << 8;
            auVar54._12_4_ = (auVar6._10_4_ >> 0x10) << 8;
            *(undefined1 (*) [16])(pfVar26 + uVar25) = auVar54 | auVar36 << 0x10 | auVar39 | auVar33
            ;
            uVar25 = uVar25 + 4;
          } while (uVar21 != uVar25);
          uVar34 = param_1 - uVar27;
          if (uVar27 != param_1) goto LAB_140116501;
        }
        param_6 = (float *)((longlong)param_6 + (longlong)(int)param_7);
        pfVar26 = (float *)((longlong)pfVar26 + (longlong)(int)uVar19);
        iVar31 = iVar31 + -1;
      } while (iVar31 != 0);
    }
LAB_140116575:
    if (local_c0 != param_11) {
      uVar20 = parameter_s_is_invalid
                         (param_1,param_2,uVar20,iVar23,0,*(undefined8 *)(local_b0 + 0x18),
                          *(undefined4 *)(local_b0 + 0x10),param_8,param_9,param_10,param_11,
                          param_12);
      uVar21 = (ulonglong)uVar20;
      goto LAB_140116637;
    }
    uVar21 = CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
  }
  if (local_b0 == 0) {
    return uVar21;
  }
LAB_140116637:
  parameter_s_is_invalid(local_b0);
                    /* WARNING: Read-only address (ram,0x000140de9910) is written */
                    /* WARNING: Read-only address (ram,0x000140de9920) is written */
                    /* WARNING: Read-only address (ram,0x000140de9930) is written */
  return uVar21;
}

