/**
 * Function: anonymous_namespace_draw_sky
 * Address:  1404c81f0
 * Signature: undefined anonymous_namespace_draw_sky(void)
 * Body size: 3612 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void anonymous_namespace_draw_sky
               (longlong *param_1,float *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  longlong local_638;
  float fStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  float fStack_624;
  longlong lStack_620;
  ulonglong local_618;
  ulonglong uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  ulonglong local_5f8;
  ulonglong uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined4 local_570;
  undefined4 local_56c;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  int local_49c;
  undefined4 local_498;
  int local_494;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  longlong local_380 [8];
  longlong local_340;
  undefined8 local_1a0;
  undefined8 uStack_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  
  local_e0 = 0xfffffffffffffffe;
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  if (param_1[9] == 0) {
    return;
  }
  if (param_1[0xd] == 0) {
    return;
  }
  if (param_1[0x11] == 0) {
    return;
  }
  if (param_1[0x1a] == 0) {
    return;
  }
  plVar4 = (longlong *)FUN_140220610(*param_1);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  local_188 = 0.0;
  fStack_184 = 1.0;
  fStack_180 = 0.0;
  fStack_17c = 0.0;
  local_ec = 0.0;
  fVar13 = 0.0;
  fVar9 = local_188;
  fVar7 = fStack_184;
  if (param_4 != (undefined8 *)0x0) {
    fVar9 = (float)*param_4;
    fVar7 = (float)((ulonglong)*param_4 >> 0x20);
    fVar13 = *(float *)(param_4 + 1);
  }
  fVar8 = fVar13 * fVar13 + fVar9 * fVar9 + fVar7 * fVar7;
  if (1e-12 < fVar8) {
    fStack_17c = 1.0 / SQRT(fVar8);
    local_ec = fVar13 * fStack_17c;
    local_188 = fVar9 * fStack_17c;
    fStack_184 = fVar7 * fStack_17c;
    fStack_180 = fStack_17c * 0.0;
    fStack_17c = fStack_17c * 0.0;
  }
  fVar13 = param_2[1];
  fVar7 = fVar13 * 3.4e-06;
  fVar17 = 0.0;
  fVar8 = (float)(-(uint)(0.0 < fVar13) & (uint)fVar7);
  fVar34 = local_188 - *(float *)(param_1 + 0x23);
  fVar22 = fStack_184 - *(float *)((longlong)param_1 + 0x11c);
  local_e4 = local_ec - *(float *)(param_1 + 0x24);
  fVar9 = *(float *)((longlong)param_1 + 0x124);
  local_168 = ZEXT416((uint)fVar8);
  if ((char)param_1[0x2d] == '\x01') {
    atmosphere_transmittance_lut(param_1,plVar4);
    atmosphere_multi_scatter_lut(param_1,plVar4);
    *(undefined2 *)(param_1 + 0x2d) = 0x100;
    fVar13 = param_2[1];
    fVar7 = fVar13 * 3.4e-06;
  }
  fVar7 = (float)(-(uint)(0.0 < fVar13) & (uint)fVar7);
  fVar10 = param_2[3] - *param_2;
  fVar13 = param_2[4] - fVar13;
  fVar29 = param_2[5] - param_2[2];
  fVar31 = SQRT(fVar29 * fVar29 + fVar10 * fVar10 + fVar13 * fVar13);
  fVar35 = 0.0;
  fVar30 = 0.0;
  if (1.1920929e-07 <= fVar31) {
    fVar31 = 1.0 / fVar31;
    fVar17 = fVar10 * fVar31;
    fVar35 = fVar13 * fVar31;
    fVar30 = fVar29 * fVar31;
  }
  local_178 = ZEXT416((uint)ABS(fVar8 - fVar9));
  local_e8 = 1e-05;
  if (1e-05 <= fVar7) {
    local_e8 = fVar7;
  }
  fVar42 = -fVar30;
  fVar7 = 0.0;
  fVar8 = fVar30 * 0.0 + fVar17 * -0.0;
  fVar31 = fVar17 - fVar35 * 0.0;
  fVar9 = fVar35 * 0.0 - fVar30;
  fVar13 = SQRT(fVar31 * fVar31 + fVar9 * fVar9 + fVar8 * fVar8);
  fVar10 = 0.0;
  fVar29 = 0.0;
  if (1.1920929e-07 <= fVar13) {
    fVar13 = 1.0 / fVar13;
    fVar7 = fVar9 * fVar13;
    fVar10 = fVar8 * fVar13;
    fVar29 = fVar31 * fVar13;
  }
  local_e4 = local_e4 * local_e4;
  fVar36 = fVar30 * fVar10 - fVar29 * fVar35;
  fVar9 = fVar29 * fVar17 + fVar7 * fVar42;
  fVar8 = fVar7 * fVar35 - fVar10 * fVar17;
  FUN_14047f9d0(param_2[6],param_3,param_2[7],param_2[8],&local_158);
  fVar13 = local_ec;
  fVar31 = local_128 * 0.0;
  fVar30 = fStack_124 * 0.0;
  fVar11 = fStack_120 * 0.0;
  fVar12 = fStack_11c * 0.0;
  fVar37 = ((fVar36 * local_148 + fVar7 * local_158) - fVar17 * local_138) + fVar31;
  fVar39 = ((fVar36 * fStack_144 + fVar7 * fStack_154) - fVar17 * fStack_134) + fVar30;
  fVar40 = ((fVar36 * fStack_140 + fVar7 * fStack_150) - fVar17 * fStack_130) + fVar11;
  fVar41 = ((fVar36 * fStack_13c + fVar7 * fStack_14c) - fVar17 * fStack_12c) + fVar12;
  fVar23 = ((fVar9 * local_148 + fVar10 * local_158) - fVar35 * local_138) + fVar31;
  fVar25 = ((fVar9 * fStack_144 + fVar10 * fStack_154) - fVar35 * fStack_134) + fVar30;
  fVar27 = ((fVar9 * fStack_140 + fVar10 * fStack_150) - fVar35 * fStack_130) + fVar11;
  fVar28 = ((fVar9 * fStack_13c + fVar10 * fStack_14c) - fVar35 * fStack_12c) + fVar12;
  fVar31 = fVar31 + fVar42 * local_138 + fVar8 * local_148 + fVar29 * local_158;
  fVar30 = fVar30 + fVar42 * fStack_134 + fVar8 * fStack_144 + fVar29 * fStack_154;
  fVar11 = fVar11 + fVar42 * fStack_130 + fVar8 * fStack_140 + fVar29 * fStack_150;
  fVar12 = fVar12 + fVar42 * fStack_12c + fVar8 * fStack_13c + fVar29 * fStack_14c;
  local_128 = local_138 * 0.0 + local_148 * 0.0 + local_158 * 0.0 + local_128;
  fStack_124 = fStack_134 * 0.0 + fStack_144 * 0.0 + fStack_154 * 0.0 + fStack_124;
  fStack_120 = fStack_130 * 0.0 + fStack_140 * 0.0 + fStack_150 * 0.0 + fStack_120;
  fStack_11c = fStack_12c * 0.0 + fStack_13c * 0.0 + fStack_14c * 0.0 + fStack_11c;
  fVar9 = fVar40 * fVar28 - fVar27 * fVar41;
  fVar7 = fVar11 * fStack_11c - fStack_120 * fVar12;
  fVar8 = fVar37 * fVar28 - fVar23 * fVar41;
  fVar17 = fVar31 * fStack_11c - local_128 * fVar12;
  fVar10 = fVar37 * fVar27 - fVar40 * fVar23;
  fVar35 = fVar31 * fStack_120 - fVar11 * local_128;
  fVar29 = fVar39 * fVar28 - fVar41 * fVar25;
  fVar42 = fVar30 * fStack_11c - fVar12 * fStack_124;
  fVar36 = fVar25 * fVar37 - fVar39 * fVar23;
  fVar14 = fStack_124 * fVar31 - fVar30 * local_128;
  fVar15 = fVar27 * fVar39 - fVar40 * fVar25;
  fVar16 = fStack_120 * fVar30 - fVar11 * fStack_124;
  fVar18 = fVar14 * fVar9;
  fVar19 = fVar36 * fVar7;
  fVar20 = fVar16 * fVar8;
  fVar21 = fVar15 * fVar17;
  fVar24 = fVar42 * fVar10;
  fVar26 = fVar29 * fVar35;
  fVar32 = fVar21 + fVar18;
  fVar33 = fVar20 + fVar19;
  auVar38._4_4_ = (fVar32 + fVar33) - (fVar24 + fVar26);
  auVar38._0_4_ = (fVar33 + fVar32) - (fVar26 + fVar24);
  auVar38._8_4_ = (fVar32 + fVar19 + fVar20) - (fVar24 + fVar35 * fVar29);
  auVar38._12_4_ = (fVar33 + fVar18 + fVar21) - (fVar26 + fVar10 * fVar42);
  auVar38 = divps(_DAT_140dc4380,auVar38);
  fVar18 = auVar38._0_4_;
  fVar9 = fVar9 * fVar18;
  fVar19 = auVar38._4_4_;
  fVar7 = fVar7 * fVar19;
  fVar21 = auVar38._8_4_;
  fVar8 = fVar8 * fVar21;
  fVar26 = auVar38._12_4_;
  fVar17 = fVar17 * fVar26;
  fVar10 = fVar10 * fVar18;
  fVar35 = fVar35 * fVar19;
  fVar29 = fVar29 * fVar21;
  fVar42 = fVar42 * fVar26;
  fVar18 = fVar18 * fVar36;
  fVar19 = fVar19 * fVar14;
  fVar21 = fVar21 * fVar15;
  fVar26 = fVar26 * fVar16;
  fVar15 = fVar26 * fVar28 + (fVar25 * fVar7 - fVar42 * fVar27);
  fVar16 = fVar26 * fVar41 + (fVar39 * fVar7 - fVar42 * fVar40);
  fVar24 = fVar21 * fStack_11c + (fStack_124 * fVar9 - fVar29 * fStack_120);
  fVar32 = fVar21 * fVar12 + (fVar30 * fVar9 - fVar29 * fVar11);
  fVar43 = fVar35 * fVar41 + (fVar7 * fVar37 - fVar40 * fVar17);
  fVar44 = fVar10 * fVar12 + (fVar9 * fVar31 - fVar11 * fVar8);
  fVar36 = fVar28 * fVar19 + (fVar23 * fVar42 - fVar17 * fVar25);
  fVar42 = fVar41 * fVar19 + (fVar37 * fVar42 - fVar17 * fVar39);
  fVar14 = fStack_11c * fVar18 + (local_128 * fVar29 - fVar8 * fStack_124);
  fVar12 = fVar12 * fVar18 + (fVar31 * fVar29 - fVar8 * fVar30);
  fVar29 = fVar19 * fVar40 + (fVar37 * fVar26 - fVar39 * fVar35);
  fVar31 = fVar18 * fVar11 + (fVar31 * fVar21 - fVar30 * fVar10);
  fVar20 = -fVar16;
  fVar33 = -fVar32;
  fVar30 = -fVar42;
  fVar11 = -fVar12;
  lVar6 = CONCAT44(fStack_184,local_188);
  fStack_630 = local_ec;
  uStack_62c = 0x47fa0000;
  uStack_628 = 0;
  fVar17 = -(fVar35 * fVar28 + (fVar7 * fVar23 - fVar27 * fVar17));
  fVar8 = -(fVar10 * fStack_11c + (fVar9 * local_128 - fStack_120 * fVar8));
  fStack_624 = local_e8 + 6.36;
  lStack_620 = 0x38da740e00000000;
  fVar9 = -(fVar19 * fVar27 + (fVar23 * fVar26 - fVar25 * fVar35));
  fVar7 = -(fVar18 * fStack_120 + (local_128 * fVar21 - fStack_124 * fVar10));
  local_5d8 = CONCAT44((float)((uint *)*param_1)[1],(float)*(uint *)*param_1);
  local_5d0 = *(undefined8 *)(param_2 + 7);
  local_618 = CONCAT44(fVar16,fVar15) ^ 0x8000000000000000;
  uStack_610 = CONCAT44(fVar32,fVar24) ^ 0x8000000000000000;
  local_608 = CONCAT44(fVar43,fVar17);
  uStack_600 = CONCAT44(fVar44,fVar8);
  local_5f8 = CONCAT44(fVar42,fVar36) ^ 0x8000000000000000;
  uStack_5f0 = CONCAT44(fVar12,fVar14) ^ 0x8000000000000000;
  local_5e8 = CONCAT44(fVar29,fVar9);
  uStack_5e0 = CONCAT44(fVar31,fVar7);
  local_638 = lVar6;
  plVar5 = (longlong *)FUN_140220610();
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x80))(plVar5,param_1[1],&local_638,0x70,0);
  }
  fVar22 = local_e4 + fVar34 * fVar34 + fVar22 * fVar22;
  uVar1 = local_178._0_4_;
  if (((1e-05 < (float)local_178._0_4_) || (*(char *)((longlong)param_1 + 0x169) != '\0')) ||
     (1e-06 < fVar22)) {
    anonymous_namespace_dispatch_sky_view(param_1,plVar4);
    param_1[0x23] = lVar6;
    *(float *)(param_1 + 0x24) = fVar13;
    *(undefined4 *)((longlong)param_1 + 0x124) = local_168._0_4_;
    *(undefined1 *)((longlong)param_1 + 0x169) = 0;
  }
  if (param_1[0x15] != 0) {
    if ((((float)uVar1 <= 1e-05) && (*(char *)((longlong)param_1 + 0x16a) == '\0')) &&
       (fVar22 <= 1e-06)) {
      fVar22 = fVar15 - *(float *)(param_1 + 0x25);
      fVar13 = -fVar22;
      if (-fVar22 <= fVar22) {
        fVar13 = fVar22;
      }
      fVar34 = fVar20 - *(float *)((longlong)param_1 + 300);
      fVar22 = -fVar34;
      if (-fVar34 <= fVar34) {
        fVar22 = fVar34;
      }
      fVar10 = fVar24 - *(float *)(param_1 + 0x26);
      fVar34 = -fVar10;
      if (-fVar10 <= fVar10) {
        fVar34 = fVar10;
      }
      fVar35 = fVar33 - *(float *)((longlong)param_1 + 0x134);
      fVar10 = -fVar35;
      if (-fVar35 <= fVar35) {
        fVar10 = fVar35;
      }
      fVar42 = fVar17 - *(float *)(param_1 + 0x27);
      fVar35 = -fVar42;
      if (-fVar42 <= fVar42) {
        fVar35 = fVar42;
      }
      fVar12 = fVar43 - *(float *)((longlong)param_1 + 0x13c);
      fVar42 = -fVar12;
      if (-fVar12 <= fVar12) {
        fVar42 = fVar12;
      }
      fVar16 = fVar8 - *(float *)(param_1 + 0x28);
      fVar12 = -fVar16;
      if (-fVar16 <= fVar16) {
        fVar12 = fVar16;
      }
      fVar18 = fVar44 - *(float *)((longlong)param_1 + 0x144);
      fVar16 = -fVar18;
      if (-fVar18 <= fVar18) {
        fVar16 = fVar18;
      }
      fVar19 = fVar36 - *(float *)(param_1 + 0x29);
      fVar18 = -fVar19;
      if (-fVar19 <= fVar19) {
        fVar18 = fVar19;
      }
      fVar21 = fVar30 - *(float *)((longlong)param_1 + 0x14c);
      fVar19 = -fVar21;
      if (-fVar21 <= fVar21) {
        fVar19 = fVar21;
      }
      fVar23 = fVar14 - *(float *)(param_1 + 0x2a);
      fVar21 = -fVar23;
      if (-fVar23 <= fVar23) {
        fVar21 = fVar23;
      }
      fVar25 = fVar11 - *(float *)((longlong)param_1 + 0x154);
      fVar23 = -fVar25;
      if (-fVar25 <= fVar25) {
        fVar23 = fVar25;
      }
      fVar26 = fVar9 - *(float *)(param_1 + 0x2b);
      fVar25 = -fVar26;
      if (-fVar26 <= fVar26) {
        fVar25 = fVar26;
      }
      fVar27 = fVar29 - *(float *)((longlong)param_1 + 0x15c);
      fVar26 = -fVar27;
      if (-fVar27 <= fVar27) {
        fVar26 = fVar27;
      }
      fVar28 = fVar7 - *(float *)(param_1 + 0x2c);
      fVar27 = -fVar28;
      if (-fVar28 <= fVar28) {
        fVar27 = fVar28;
      }
      fVar32 = fVar31 - *(float *)((longlong)param_1 + 0x164);
      fVar28 = -fVar32;
      if (-fVar32 <= fVar32) {
        fVar28 = fVar32;
      }
      if (fVar28 + fVar27 + fVar26 + fVar25 + fVar23 + fVar21 + fVar19 + fVar18 + fVar16 + fVar12 + 
                                                  fVar42 + fVar35 + fVar10 + fVar34 + fVar22 + 
                                                  fVar13 + 0.0 <= 0.0001) goto LAB_1404c8b2c;
    }
    atmosphere_aerial_lut(param_1,plVar4);
    *(float *)(param_1 + 0x25) = fVar15;
    *(float *)((longlong)param_1 + 300) = fVar20;
    *(float *)(param_1 + 0x26) = fVar24;
    *(float *)((longlong)param_1 + 0x134) = fVar33;
    *(float *)(param_1 + 0x27) = fVar17;
    *(float *)((longlong)param_1 + 0x13c) = fVar43;
    *(float *)(param_1 + 0x28) = fVar8;
    *(float *)((longlong)param_1 + 0x144) = fVar44;
    *(float *)(param_1 + 0x29) = fVar36;
    *(float *)((longlong)param_1 + 0x14c) = fVar30;
    *(float *)(param_1 + 0x2a) = fVar14;
    *(float *)((longlong)param_1 + 0x154) = fVar11;
    *(float *)(param_1 + 0x2b) = fVar9;
    *(float *)((longlong)param_1 + 0x15c) = fVar29;
    *(float *)(param_1 + 0x2c) = fVar7;
    *(float *)((longlong)param_1 + 0x164) = fVar31;
    *(undefined1 *)((longlong)param_1 + 0x16a) = 0;
  }
LAB_1404c8b2c:
  if ((param_1[0x1b] != 0) && (lVar6 = FUN_14021de30(*param_1), lVar6 != 0)) {
    uStack_628 = 0;
    fStack_624 = 0.0;
    lStack_620 = 0;
    local_638 = 0;
    fStack_630 = 0.0;
    uStack_62c = 0;
    local_618 = 0x3f80000000000000;
    uStack_610 = 0;
    local_608 = 0;
    uStack_600 = 0x3f80000000000000;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_5e8 = 0x3f80000000000000;
    uStack_5e0 = 0;
    local_5d8 = 0;
    local_5d0 = 0x3f80000000000000;
    local_5c8 = 0;
    uStack_5c0 = 0;
    local_5b8 = 0x3f80000000000000;
    local_5b0 = 0;
    uStack_5a8 = 0;
    local_5a0 = 0x3f80000000000000;
    local_598 = 0;
    uStack_590 = 0;
    local_588 = 0x3f80000000000000;
    local_580 = 0;
    uStack_578 = 0;
    local_570 = 0;
    local_56c = 0x3f800000;
    local_568 = 0;
    uStack_560 = 0;
    local_558 = 0x3f80000000000000;
    local_550 = 0;
    uStack_548 = 0;
    local_540 = 0x3f80000000000000;
    local_538 = 0;
    uStack_530 = 0;
    local_528 = 0x3f80000000000000;
    local_520 = 0;
    uStack_518 = 0;
    local_510 = 0x3f80000000000000;
    local_508 = 0;
    uStack_500 = 0;
    local_4f8 = 0x3f80000000000000;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4e0 = 0x3f80000000000000;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4c8 = 0x3f80000000000000;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_4b0 = 0x3f80000000000000;
    memset(&local_4a8,0,0x125);
    memset(local_380,0,0x1d8);
    local_1a0 = 0;
    uStack_198 = 0;
    FUN_1401a3690(&local_158,*param_1,"Atmosphere Sky Draw",0x23e,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/atmosphere.cpp",
                  "(anonymous namespace)::draw_sky");
    local_638 = param_1[0x1a];
    fStack_630 = (float)lVar6;
    uStack_62c = (undefined4)((ulonglong)lVar6 >> 0x20);
    fVar13 = (float)((uint *)*param_1)[1];
    fStack_624 = (float)*(uint *)*param_1;
    uStack_610 = 0;
    local_608 = 0;
    local_5f8 = 0;
    uStack_5f0 = 0;
    uStack_5e0 = 0;
    local_5d8 = 0;
    local_5c8 = 0;
    uStack_5c0 = 0;
    local_5b0 = 0;
    uStack_5a8 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_580 = 0;
    uStack_578 = 0;
    local_570 = 0;
    local_568 = 0;
    uStack_560 = 0;
    local_550 = 0;
    uStack_548 = 0;
    local_538 = 0;
    uStack_530 = 0;
    local_520 = 0;
    uStack_518 = 0;
    local_508 = 0;
    uStack_500 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_470 = 0;
    uStack_468 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 0;
    uStack_448 = 0;
    local_440 = 0;
    uStack_438 = 0;
    local_430 = 0;
    uStack_428 = 0;
    local_420 = 0;
    uStack_418 = 0;
    local_410 = 0;
    uStack_408 = 0;
    local_400 = 0;
    uStack_3f8 = 0;
    local_3f0 = 0;
    uStack_3e8 = 0;
    local_3e0 = 0;
    uStack_3d8 = 0;
    local_3d0 = 0;
    uStack_3c8 = 0;
    local_3c0 = 0;
    uStack_3b8 = 0;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_494 = (int)fVar13;
    local_49c = (int)fStack_624;
    uStack_628 = 0;
    lStack_620 = (ulonglong)(uint)fVar13 << 0x20;
    local_618 = 0x3f80000000000000;
    uStack_600 = 0x3f80000000000000;
    local_5e8 = 0x3f80000000000000;
    local_5d0 = 0x3f80000000000000;
    local_5b8 = 0x3f80000000000000;
    local_5a0 = 0x3f80000000000000;
    local_588 = 0x3f80000000000000;
    local_56c = 0x3f800000;
    local_558 = 0x3f80000000000000;
    local_540 = 0x3f80000000000000;
    local_528 = 0x3f80000000000000;
    local_510 = 0x3f80000000000000;
    local_4f8 = 0x3f80000000000000;
    local_4e0 = 0x3f80000000000000;
    local_4c8 = 0x3f80000000000000;
    local_4b0 = 0x3f80000000000000;
    local_4a8 = 1;
    local_4a0 = 0;
    local_498 = 0;
    local_3a0 = 1;
    local_380[local_340] = param_1[0x1b];
    local_340 = local_340 + 1;
    (**(code **)(*plVar4 + 0xb8))(plVar4,&local_638);
    local_f8 = 0;
    local_108 = 0x100000003;
    uStack_100 = 0;
    (**(code **)(*plVar4 + 0xc0))(plVar4,&local_108);
    FUN_1401a43a0(&local_138);
    FUN_1401a44e0(&local_158);
  }
  uVar3 = FUN_140220660(*param_1);
  if (((uVar3 < 2) && (lVar6 = FUN_140220600(*param_1), lVar6 != 0)) && (lVar6 != param_1[0x2e])) {
    param_1[0x2e] = lVar6;
    cVar2 = FUN_1404c9500(param_1);
    if (cVar2 == '\0') {
      if ((*(byte *)(DAT_14151e360 + 0x39) < 8) &&
         (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e48d50),
         DAT_14151e360 == 0)) {
        return;
      }
      FUN_140196ac0(DAT_14151e360,100);
    }
  }
                    /* WARNING: Read-only address (ram,0x000140dc4380) is written */
  return;
}

