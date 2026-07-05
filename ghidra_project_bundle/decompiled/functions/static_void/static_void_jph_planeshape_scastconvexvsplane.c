/**
 * Function: static_void_jph_planeshape_scastconvexvsplane
 * Address:  1402f0ff0
 * Signature: undefined static_void_jph_planeshape_scastconvexvsplane(void)
 * Body size: 2151 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_planeshape_scastconvexvsplane
               (undefined8 *param_1,longlong param_2,longlong param_3,undefined1 (*param_4) [16],
               undefined8 param_5,float *param_6,undefined4 *param_7,undefined4 *param_8,
               longlong *param_9)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 extraout_var_01 [56];
  float fVar19;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [16];
  undefined1 auVar66 [64];
  float fVar67;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auStack_1678 [32];
  float *local_1658;
  int *local_1650;
  undefined1 local_1648 [16];
  undefined8 local_1638;
  undefined8 uStack_1630;
  undefined1 local_1628 [16];
  float local_1618;
  float local_1614;
  float local_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined4 local_15f8;
  undefined1 auStack_15f4 [12];
  undefined1 local_15e8 [16];
  float local_15d8;
  float fStack_15d4;
  float fStack_15d0;
  float fStack_15cc;
  float local_15c8;
  float fStack_15c4;
  float fStack_15c0;
  float fStack_15bc;
  float local_15b8;
  float fStack_15b4;
  float fStack_15b0;
  float fStack_15ac;
  float local_15a8;
  float fStack_15a4;
  float fStack_15a0;
  float fStack_159c;
  undefined1 local_1598 [16];
  undefined1 local_1588 [16];
  float local_1578;
  float fStack_1574;
  float fStack_1570;
  float fStack_156c;
  undefined4 local_1568;
  undefined4 local_1564;
  undefined4 local_1560;
  undefined4 local_155c;
  int local_1558 [132];
  undefined4 local_1348;
  float local_1338;
  float fStack_1334;
  float fStack_1330;
  float fStack_132c;
  undefined1 local_1328 [16];
  undefined1 local_1318 [16];
  undefined1 local_1308 [16];
  float local_1138;
  undefined1 local_1134;
  undefined1 local_1128 [4168];
  ulonglong local_e0;
  undefined1 local_d8 [16];
  undefined8 uStack_48;
  undefined1 auVar68 [64];
  
  uStack_48 = 0x1402f1006;
  local_d8 = in_ZMM6._0_16_;
  local_e0 = DAT_1414ef3c0 ^ (ulonglong)auStack_1678;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 == 0) {
LAB_1402f1109:
    pauVar8 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if (0xffff < (ulonglong)uVar1) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_1402f1109;
    }
    *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
    pauVar8 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
    uVar4 = rdtsc();
    in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar4));
  }
  plVar3 = (longlong *)*param_1;
  auVar17 = vdivps_avx(*(undefined1 (*) [16])(param_3 + 0x20),*param_4);
  auVar20._0_4_ = auVar17._0_4_ * auVar17._0_4_;
  auVar20._4_4_ = auVar17._4_4_ * auVar17._4_4_;
  auVar20._8_4_ = auVar17._8_4_ * auVar17._8_4_;
  auVar20._12_4_ = auVar17._12_4_ * auVar17._12_4_;
  auVar9 = vinsertps_avx(auVar20,auVar20,0x4c);
  auVar21._0_4_ = auVar20._0_4_ + auVar9._0_4_;
  auVar21._4_4_ = auVar20._4_4_ + auVar9._4_4_;
  auVar21._8_4_ = auVar20._8_4_ + auVar9._8_4_;
  auVar21._12_4_ = auVar20._12_4_ + auVar9._12_4_;
  auVar9 = vshufpd_avx(auVar21,auVar21,1);
  auVar9 = ZEXT416((uint)(auVar21._0_4_ + auVar9._0_4_));
  auVar9 = vsqrtss_avx(auVar9,auVar9);
  auVar10 = ZEXT416((uint)(*(float *)(param_3 + 0x2c) / auVar9._0_4_));
  auVar59 = ZEXT1664(auVar10);
  auVar9 = vshufps_avx(auVar9,auVar9,0);
  auVar17 = vdivps_avx(auVar17,auVar9);
  auVar61 = ZEXT1664(auVar17);
  auVar17 = vinsertps_avx(auVar17,auVar10,0x30);
  auVar64 = ZEXT1664(auVar17);
  local_1608 = param_1[2];
  uStack_1600 = param_1[3];
  plVar6 = (longlong *)(**(code **)(*plVar3 + 0x128))(plVar3,2,local_1128,&local_1608);
  auVar10 = auVar64._0_16_;
  auVar17 = vdpps_avx(auVar10,*(undefined1 (*) [16])(param_1 + 4),0x7f);
  auVar9 = vdpps_avx(auVar10,*(undefined1 (*) [16])(param_1 + 6),0x7f);
  auVar10 = vdpps_avx(auVar10,*(undefined1 (*) [16])(param_1 + 8),0x7f);
  auVar17 = vblendps_avx(auVar17,auVar9,2);
  auVar17 = vblendps_avx(auVar10,auVar17,3);
  auVar63 = ZEXT1664(auVar17);
  local_1628 = vsubps_avx(ZEXT816(0) << 0x20,auVar17);
  (**(code **)(*plVar6 + 8))(plVar6,&local_1618,local_1628);
  fVar67 = local_1618 * *(float *)(param_1 + 4) + local_1614 * *(float *)(param_1 + 6) +
           local_1610 * *(float *)(param_1 + 8) + *(float *)(param_1 + 10);
  fVar69 = local_1618 * *(float *)((longlong)param_1 + 0x24) +
           local_1614 * *(float *)((longlong)param_1 + 0x34) +
           local_1610 * *(float *)((longlong)param_1 + 0x44) + *(float *)((longlong)param_1 + 0x54);
  fVar70 = local_1618 * *(float *)(param_1 + 5) + local_1614 * *(float *)(param_1 + 7) +
           local_1610 * *(float *)(param_1 + 9) + *(float *)(param_1 + 0xb);
  fVar71 = local_1618 * *(float *)((longlong)param_1 + 0x2c) +
           local_1614 * *(float *)((longlong)param_1 + 0x3c) +
           local_1610 * *(float *)((longlong)param_1 + 0x4c) + *(float *)((longlong)param_1 + 0x5c);
  auVar68 = ZEXT1664(CONCAT412(fVar71,CONCAT48(fVar70,CONCAT44(fVar69,fVar67))));
  auVar9._0_4_ = auVar61._0_4_ * fVar67;
  auVar9._4_4_ = auVar61._4_4_ * fVar69;
  auVar9._8_4_ = auVar61._8_4_ * fVar70;
  auVar9._12_4_ = auVar61._12_4_ * fVar71;
  auVar17 = vinsertps_avx(auVar9,auVar9,0x4c);
  auVar10._0_4_ = auVar9._0_4_ + auVar17._0_4_;
  auVar10._4_4_ = auVar9._4_4_ + auVar17._4_4_;
  auVar10._8_4_ = auVar9._8_4_ + auVar17._8_4_;
  auVar10._12_4_ = auVar9._12_4_ + auVar17._12_4_;
  auVar17 = vshufpd_avx(auVar10,auVar10,1);
  auVar66 = ZEXT464((uint)(auVar59._0_4_ + auVar10._0_4_ + auVar17._0_4_));
  auVar60._0_8_ = (**(code **)(*plVar6 + 0x10))(plVar6);
  auVar9 = in_ZMM6._0_16_;
  auVar60._8_56_ = extraout_var_01;
  fVar69 = (float)auVar60._0_8_ - auVar66._0_4_;
  auVar39._0_4_ = auVar61._0_4_ * *(float *)(param_1 + 0xc);
  auVar39._4_4_ = auVar61._4_4_ * *(float *)((longlong)param_1 + 100);
  auVar39._8_4_ = auVar61._8_4_ * *(float *)(param_1 + 0xd);
  auVar39._12_4_ = auVar61._12_4_ * *(float *)((longlong)param_1 + 0x6c);
  auVar17 = vinsertps_avx(auVar39,auVar39,0x4c);
  auVar40._0_4_ = auVar39._0_4_ + auVar17._0_4_;
  auVar40._4_4_ = auVar39._4_4_ + auVar17._4_4_;
  auVar40._8_4_ = auVar39._8_4_ + auVar17._8_4_;
  auVar40._12_4_ = auVar39._12_4_ + auVar17._12_4_;
  auVar17 = vshufpd_avx(auVar40,auVar40,1);
  fVar67 = auVar40._0_4_ + auVar17._0_4_;
  auVar17 = auVar60._0_16_;
  fVar70 = auVar64._0_4_;
  fVar71 = auVar64._4_4_;
  fVar19 = auVar64._8_4_;
  fVar25 = auVar64._12_4_;
  auVar10 = auVar68._0_16_;
  uVar7 = extraout_var;
  if (fVar69 <= 0.0) {
    if (0.0 <= fVar67) goto LAB_1402f179f;
    fVar69 = fVar69 / fVar67;
    if (*(float *)(param_9 + 1) <= fVar69) goto LAB_1402f179f;
    auVar9 = vshufps_avx(ZEXT416((uint)fVar69),ZEXT416((uint)fVar69),0);
    auVar22._0_4_ = *(float *)(param_1 + 0xc) * auVar9._0_4_ + param_6[0xc];
    auVar22._4_4_ = *(float *)((longlong)param_1 + 100) * auVar9._4_4_ + param_6[0xd];
    auVar22._8_4_ = *(float *)(param_1 + 0xd) * auVar9._8_4_ + param_6[0xe];
    auVar22._12_4_ = *(float *)((longlong)param_1 + 0x6c) * auVar9._12_4_ + param_6[0xf];
    auVar9 = vinsertps_avx(auVar22,ZEXT416(0x3f800000),0x30);
    fVar42 = *param_6;
    fVar44 = param_6[1];
    fVar41 = param_6[2];
    fVar43 = param_6[3];
    fVar45 = param_6[4];
    fVar53 = param_6[5];
    fVar54 = param_6[6];
    fVar55 = param_6[7];
    fVar28 = param_6[8];
    fVar36 = param_6[9];
    fVar37 = param_6[10];
    fVar38 = param_6[0xb];
    auVar17 = vshufps_avx(auVar17,auVar17,0);
    auVar12._0_4_ = fVar70 * auVar17._0_4_;
    auVar12._4_4_ = fVar71 * auVar17._4_4_;
    auVar12._8_4_ = fVar19 * auVar17._8_4_;
    auVar12._12_4_ = fVar25 * auVar17._12_4_;
    auVar20 = vsubps_avx(auVar10,auVar12);
    auVar17 = vshufps_avx(auVar20,auVar20,0);
    auVar10 = vshufps_avx(auVar20,auVar20,0x55);
    auVar20 = vshufps_avx(auVar20,auVar20,0xaa);
    local_1598._0_4_ =
         auVar9._0_4_ + auVar10._0_4_ * fVar45 + auVar17._0_4_ * fVar42 + auVar20._0_4_ * fVar28;
    local_1598._4_4_ =
         auVar9._4_4_ + auVar10._4_4_ * fVar53 + auVar17._4_4_ * fVar44 + auVar20._4_4_ * fVar36;
    local_1598._8_4_ =
         auVar9._8_4_ + auVar10._8_4_ * fVar54 + auVar17._8_4_ * fVar41 + auVar20._8_4_ * fVar37;
    local_1598._12_4_ =
         auVar9._12_4_ + auVar10._12_4_ * fVar55 + auVar17._12_4_ * fVar43 + auVar20._12_4_ * fVar38
    ;
    local_1588 = local_1598;
  }
  else {
    if (((0.0 < fVar67) && (*(char *)(param_2 + 0x21) == '\0')) ||
       (fVar69 <= -*(float *)(param_9 + 1))) goto LAB_1402f179f;
    fVar42 = *param_6;
    fVar44 = param_6[1];
    fVar41 = param_6[2];
    fVar43 = param_6[3];
    fVar45 = param_6[4];
    fVar53 = param_6[5];
    fVar54 = param_6[6];
    fVar55 = param_6[7];
    fVar28 = param_6[8];
    fVar36 = param_6[9];
    fVar37 = param_6[10];
    fVar38 = param_6[0xb];
    auVar9 = *(undefined1 (*) [16])(param_6 + 0xc);
    auVar17 = vshufps_avx(auVar17,auVar17,0);
    auVar11._0_4_ = fVar70 * auVar17._0_4_;
    auVar11._4_4_ = fVar71 * auVar17._4_4_;
    auVar11._8_4_ = fVar19 * auVar17._8_4_;
    auVar11._12_4_ = fVar25 * auVar17._12_4_;
    auVar21 = vsubps_avx(auVar10,auVar11);
    auVar17 = vshufps_avx(auVar21,auVar21,0);
    auVar20 = vshufps_avx(auVar21,auVar21,0x55);
    auVar21 = vshufps_avx(auVar21,auVar21,0xaa);
    local_1598._0_4_ =
         auVar9._0_4_ + auVar17._0_4_ * fVar42 + auVar20._0_4_ * fVar45 + auVar21._0_4_ * fVar28;
    local_1598._4_4_ =
         auVar9._4_4_ + auVar17._4_4_ * fVar44 + auVar20._4_4_ * fVar53 + auVar21._4_4_ * fVar36;
    local_1598._8_4_ =
         auVar9._8_4_ + auVar17._8_4_ * fVar41 + auVar20._8_4_ * fVar54 + auVar21._8_4_ * fVar37;
    local_1598._12_4_ =
         auVar9._12_4_ + auVar17._12_4_ * fVar43 + auVar20._12_4_ * fVar55 + auVar21._12_4_ * fVar38
    ;
    auVar17 = vshufps_avx(auVar66._0_16_,auVar66._0_16_,0);
    auVar65._0_4_ = fVar70 * auVar17._0_4_;
    auVar65._4_4_ = fVar71 * auVar17._4_4_;
    auVar65._8_4_ = fVar19 * auVar17._8_4_;
    auVar65._12_4_ = fVar25 * auVar17._12_4_;
    auVar20 = vsubps_avx(auVar10,auVar65);
    auVar17 = vshufps_avx(auVar20,auVar20,0);
    auVar10 = vshufps_avx(auVar20,auVar20,0x55);
    auVar20 = vshufps_avx(auVar20,auVar20,0xaa);
    local_1588._0_4_ =
         auVar17._0_4_ * fVar42 + auVar10._0_4_ * fVar45 + auVar20._0_4_ * fVar28 + auVar9._0_4_;
    local_1588._4_4_ =
         auVar17._4_4_ * fVar44 + auVar10._4_4_ * fVar53 + auVar20._4_4_ * fVar36 + auVar9._4_4_;
    local_1588._8_4_ =
         auVar17._8_4_ * fVar41 + auVar10._8_4_ * fVar54 + auVar20._8_4_ * fVar37 + auVar9._8_4_;
    local_1588._12_4_ =
         auVar17._12_4_ * fVar43 + auVar10._12_4_ * fVar55 + auVar20._12_4_ * fVar38 + auVar9._12_4_
    ;
    fVar69 = 0.0;
  }
  auVar20 = vsubps_avx(ZEXT816(0) << 0x20,auVar64._0_16_);
  auVar17 = vshufps_avx(auVar20,auVar20,0);
  auVar10 = vshufps_avx(auVar20,auVar20,0x55);
  auVar20 = vshufps_avx(auVar20,auVar20,0xaa);
  local_1578 = auVar17._0_4_ * fVar42 + auVar10._0_4_ * fVar45 + auVar20._0_4_ * fVar28;
  fStack_1574 = auVar17._4_4_ * fVar44 + auVar10._4_4_ * fVar53 + auVar20._4_4_ * fVar36;
  fStack_1570 = auVar17._8_4_ * fVar41 + auVar10._8_4_ * fVar54 + auVar20._8_4_ * fVar37;
  fStack_156c = auVar17._12_4_ * fVar43 + auVar10._12_4_ * fVar55 + auVar20._12_4_ * fVar38;
  if (param_9[2] == 0) {
    local_155c = 0xffffffff;
  }
  else {
    local_155c = *(undefined4 *)(param_9[2] + 0x34);
  }
  auVar17 = vsubps_avx(local_1588,local_1598);
  auVar56._0_4_ = auVar17._0_4_ * auVar17._0_4_;
  auVar56._4_4_ = auVar17._4_4_ * auVar17._4_4_;
  auVar56._8_4_ = auVar17._8_4_ * auVar17._8_4_;
  auVar56._12_4_ = auVar17._12_4_ * auVar17._12_4_;
  auVar17 = vinsertps_avx(auVar56,auVar56,0x4c);
  auVar57._0_4_ = auVar17._0_4_ + auVar56._0_4_;
  auVar57._4_4_ = auVar17._4_4_ + auVar56._4_4_;
  auVar57._8_4_ = auVar17._8_4_ + auVar56._8_4_;
  auVar57._12_4_ = auVar17._12_4_ + auVar56._12_4_;
  auVar17 = vshufpd_avx(auVar57,auVar57,1);
  auVar17 = ZEXT416((uint)(auVar17._0_4_ + auVar57._0_4_));
  auVar17 = vsqrtss_avx(auVar17,auVar17);
  local_1568 = auVar17._0_4_;
  local_1564 = *param_7;
  local_1560 = *param_8;
  local_1558[0] = 0;
  local_1348 = 0;
  local_1134 = 0.0 < fVar67;
  local_1138 = fVar69;
  if (*(char *)(param_2 + 1) == '\0') {
    local_1650 = local_1558;
    fVar67 = *(float *)(param_1 + 4);
    fVar69 = *(float *)((longlong)param_1 + 0x24);
    fVar70 = *(float *)(param_1 + 5);
    fVar71 = *(float *)((longlong)param_1 + 0x2c);
    fVar19 = auVar9._0_4_;
    fVar25 = auVar9._4_4_;
    fVar26 = auVar9._8_4_;
    fVar27 = auVar9._12_4_;
    local_15d8 = fVar19 * fVar71 + fVar28 * fVar70 + fVar42 * fVar67 + fVar45 * fVar69;
    fStack_15d4 = fVar25 * fVar71 + fVar36 * fVar70 + fVar44 * fVar67 + fVar53 * fVar69;
    fStack_15d0 = fVar26 * fVar71 + fVar37 * fVar70 + fVar41 * fVar67 + fVar54 * fVar69;
    fStack_15cc = fVar27 * fVar71 + fVar38 * fVar70 + fVar43 * fVar67 + fVar55 * fVar69;
    fVar67 = *(float *)(param_1 + 6);
    fVar69 = *(float *)((longlong)param_1 + 0x34);
    fVar70 = *(float *)(param_1 + 7);
    fVar71 = *(float *)((longlong)param_1 + 0x3c);
    local_15c8 = fVar19 * fVar71 + fVar28 * fVar70 + fVar42 * fVar67 + fVar45 * fVar69;
    fStack_15c4 = fVar25 * fVar71 + fVar36 * fVar70 + fVar44 * fVar67 + fVar53 * fVar69;
    fStack_15c0 = fVar26 * fVar71 + fVar37 * fVar70 + fVar41 * fVar67 + fVar54 * fVar69;
    fStack_15bc = fVar27 * fVar71 + fVar38 * fVar70 + fVar43 * fVar67 + fVar55 * fVar69;
    fVar67 = *(float *)(param_1 + 8);
    fVar69 = *(float *)((longlong)param_1 + 0x44);
    fVar70 = *(float *)(param_1 + 9);
    fVar71 = *(float *)((longlong)param_1 + 0x4c);
    local_15b8 = fVar19 * fVar71 + fVar28 * fVar70 + fVar42 * fVar67 + fVar45 * fVar69;
    fStack_15b4 = fVar25 * fVar71 + fVar36 * fVar70 + fVar44 * fVar67 + fVar53 * fVar69;
    fStack_15b0 = fVar26 * fVar71 + fVar37 * fVar70 + fVar41 * fVar67 + fVar54 * fVar69;
    fStack_15ac = fVar27 * fVar71 + fVar38 * fVar70 + fVar43 * fVar67 + fVar55 * fVar69;
    fVar67 = *(float *)(param_1 + 10);
    fVar69 = *(float *)((longlong)param_1 + 0x54);
    fVar70 = *(float *)(param_1 + 0xb);
    fVar71 = *(float *)((longlong)param_1 + 0x5c);
    local_15a8 = fVar19 * fVar71 + fVar28 * fVar70 + fVar42 * fVar67 + fVar45 * fVar69;
    fStack_15a4 = fVar25 * fVar71 + fVar36 * fVar70 + fVar44 * fVar67 + fVar53 * fVar69;
    fStack_15a0 = fVar26 * fVar71 + fVar37 * fVar70 + fVar41 * fVar67 + fVar54 * fVar69;
    fStack_159c = fVar27 * fVar71 + fVar38 * fVar70 + fVar43 * fVar67 + fVar55 * fVar69;
    local_1638 = param_1[2];
    uStack_1630 = param_1[3];
    local_1648 = auVar63._0_16_;
    local_15f8 = 0xffffffff;
    local_1658 = &local_15d8;
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_15f8,local_1648,&local_1638);
    if (local_1558[0] != 0) {
      auVar10 = auVar61._0_16_;
      auVar17 = vshufps_avx(auVar10,auVar10,0);
      auVar5._4_4_ = fStack_15a4;
      auVar5._0_4_ = local_15a8;
      auVar5._8_4_ = fStack_15a0;
      auVar5._12_4_ = fStack_159c;
      auVar9 = vshufps_avx(auVar10,auVar10,0x55);
      auVar10 = vshufps_avx(auVar10,auVar10,0xaa);
      auVar13._0_4_ =
           auVar17._0_4_ * *param_6 + auVar9._0_4_ * param_6[4] + auVar10._0_4_ * param_6[8];
      auVar13._4_4_ =
           auVar17._4_4_ * param_6[1] + auVar9._4_4_ * param_6[5] + auVar10._4_4_ * param_6[9];
      auVar13._8_4_ =
           auVar17._8_4_ * param_6[2] + auVar9._8_4_ * param_6[6] + auVar10._8_4_ * param_6[10];
      auVar13._12_4_ =
           auVar17._12_4_ * param_6[3] + auVar9._12_4_ * param_6[7] + auVar10._12_4_ * param_6[0xb];
      auVar29._0_4_ = auVar13._0_4_ * param_6[0xc];
      auVar29._4_4_ = auVar13._4_4_ * param_6[0xd];
      auVar29._8_4_ = auVar13._8_4_ * param_6[0xe];
      auVar29._12_4_ = auVar13._12_4_ * param_6[0xf];
      auVar17 = vinsertps_avx(auVar29,auVar29,0x4c);
      auVar30._0_4_ = auVar29._0_4_ + auVar17._0_4_;
      auVar30._4_4_ = auVar29._4_4_ + auVar17._4_4_;
      auVar30._8_4_ = auVar29._8_4_ + auVar17._8_4_;
      auVar30._12_4_ = auVar29._12_4_ + auVar17._12_4_;
      auVar17 = vshufpd_avx(auVar30,auVar30,1);
      fVar67 = auVar59._0_4_ - (auVar30._0_4_ + auVar17._0_4_);
      auVar17 = vinsertps_avx(auVar13,ZEXT416((uint)fVar67),0x30);
      auVar46._0_4_ = local_15a8 * auVar13._0_4_;
      auVar46._4_4_ = fStack_15a4 * auVar13._4_4_;
      auVar46._8_4_ = fStack_15a0 * auVar13._8_4_;
      auVar46._12_4_ = fStack_159c * auVar13._12_4_;
      auVar9 = vinsertps_avx(auVar46,auVar46,0x4c);
      auVar47._0_4_ = auVar46._0_4_ + auVar9._0_4_;
      auVar47._4_4_ = auVar46._4_4_ + auVar9._4_4_;
      auVar47._8_4_ = auVar46._8_4_ + auVar9._8_4_;
      auVar47._12_4_ = auVar46._12_4_ + auVar9._12_4_;
      auVar9 = vshufpd_avx(auVar47,auVar47,1);
      auVar9 = ZEXT416((uint)(fVar67 + auVar47._0_4_ + auVar9._0_4_));
      auVar9 = vshufps_avx(auVar9,auVar9,0);
      fVar19 = auVar17._0_4_;
      auVar31._0_4_ = fVar19 * auVar9._0_4_;
      fVar25 = auVar17._4_4_;
      auVar31._4_4_ = fVar25 * auVar9._4_4_;
      fVar42 = auVar17._8_4_;
      auVar31._8_4_ = fVar42 * auVar9._8_4_;
      fVar44 = auVar17._12_4_;
      auVar31._12_4_ = fVar44 * auVar9._12_4_;
      auVar17 = vsubps_avx(auVar5,auVar31);
      auVar60 = ZEXT1664(auVar17);
      auVar48._0_4_ = fVar19 * 1.0;
      auVar48._4_4_ = fVar25 * 0.0;
      auVar48._8_4_ = fVar42 * 0.0;
      auVar48._12_4_ = fVar44 * 0.0;
      auVar17 = vshufps_avx(auVar13,auVar13,0xc9);
      fVar67 = auVar17._0_4_;
      auVar58._0_4_ = fVar67 * 0.0;
      fVar69 = auVar17._4_4_;
      auVar58._4_4_ = fVar69 * 1.0;
      fVar70 = auVar17._8_4_;
      auVar58._8_4_ = fVar70 * 0.0;
      fVar71 = auVar17._12_4_;
      auVar58._12_4_ = fVar71 * 0.0;
      auVar17 = vsubps_avx(auVar48,auVar58);
      auVar9 = vshufps_avx(auVar17,auVar17,9);
      auVar49._0_4_ = auVar17._0_4_ * auVar17._0_4_;
      auVar49._4_4_ = auVar17._4_4_ * auVar17._4_4_;
      auVar49._8_4_ = auVar17._8_4_ * auVar17._8_4_;
      auVar49._12_4_ = auVar17._12_4_ * auVar17._12_4_;
      auVar17 = vshufps_avx(auVar49,auVar49,0xc9);
      auVar62._0_12_ = ZEXT812(0);
      auVar62._12_4_ = 0;
      auVar17 = vblendps_avx(auVar17,auVar62,8);
      auVar10 = vshufps_avx(auVar49,auVar62,0x4a);
      auVar50._0_4_ = auVar17._0_4_ + auVar10._0_4_;
      auVar50._4_4_ = auVar17._4_4_ + auVar10._4_4_;
      auVar50._8_4_ = auVar17._8_4_ + auVar10._8_4_;
      auVar50._12_4_ = auVar17._12_4_ + auVar10._12_4_;
      auVar17 = vshufps_avx(auVar50,auVar50,0);
      auVar10 = vshufps_avx(auVar50,auVar50,0xaa);
      auVar51._0_4_ = auVar17._0_4_ + auVar10._0_4_;
      auVar51._4_4_ = auVar17._4_4_ + auVar10._4_4_;
      auVar51._8_4_ = auVar17._8_4_ + auVar10._8_4_;
      auVar51._12_4_ = auVar17._12_4_ + auVar10._12_4_;
      auVar17 = vcmpps_avx(auVar51,_DAT_140de4ba0,2);
      auVar10 = vsqrtps_avx(auVar51);
      auVar9 = vdivps_avx(auVar9,auVar10);
      auVar17 = vblendvps_avx(auVar9,SUB6416(ZEXT464(0x3f800000),0),auVar17);
      auVar52._0_4_ = fVar67 * auVar17._0_4_;
      auVar52._4_4_ = fVar69 * auVar17._4_4_;
      auVar52._8_4_ = fVar70 * auVar17._8_4_;
      auVar52._12_4_ = fVar71 * auVar17._12_4_;
      auVar17 = vshufps_avx(auVar17,auVar17,0xc9);
      auVar32._0_4_ = fVar19 * auVar17._0_4_;
      auVar32._4_4_ = fVar25 * auVar17._4_4_;
      auVar32._8_4_ = fVar42 * auVar17._8_4_;
      auVar32._12_4_ = fVar44 * auVar17._12_4_;
      auVar17 = vsubps_avx(auVar52,auVar32);
      auVar9 = vshufps_avx(auVar17,auVar17,9);
      auVar33._0_4_ = auVar17._0_4_ * auVar17._0_4_;
      auVar33._4_4_ = auVar17._4_4_ * auVar17._4_4_;
      auVar33._8_4_ = auVar17._8_4_ * auVar17._8_4_;
      auVar33._12_4_ = auVar17._12_4_ * auVar17._12_4_;
      auVar17 = vshufps_avx(auVar33,auVar33,0xc9);
      auVar10 = vshufps_avx(auVar33,auVar62,0x4a);
      auVar34._0_4_ = auVar17._0_4_ + auVar10._0_4_;
      auVar34._4_4_ = auVar17._4_4_ + auVar10._4_4_;
      auVar34._8_4_ = auVar17._8_4_ + auVar10._8_4_;
      auVar34._12_4_ = auVar17._12_4_ + auVar10._12_4_;
      auVar17 = vshufpd_avx(auVar34,auVar34,1);
      auVar17 = ZEXT416((uint)(auVar34._0_4_ + auVar17._0_4_));
      auVar17 = vsqrtss_avx(auVar17,auVar17);
      auVar17 = vshufps_avx(auVar17,auVar17,0);
      auVar17 = vdivps_avx(auVar9,auVar17);
      auVar59 = ZEXT1664(auVar17);
      auVar9 = vshufps_avx(auVar17,auVar17,0xc9);
      auVar14._0_4_ = auVar13._0_4_ * auVar9._0_4_;
      auVar14._4_4_ = auVar13._4_4_ * auVar9._4_4_;
      auVar14._8_4_ = auVar13._8_4_ * auVar9._8_4_;
      auVar14._12_4_ = auVar13._12_4_ * auVar9._12_4_;
      auVar23._0_4_ = auVar17._0_4_ * fVar67;
      auVar23._4_4_ = auVar17._4_4_ * fVar69;
      auVar23._8_4_ = auVar17._8_4_ * fVar70;
      auVar23._12_4_ = auVar17._12_4_ * fVar71;
      auVar17 = vsubps_avx(auVar14,auVar23);
      auVar17 = vshufps_avx(auVar17,auVar17,9);
      auVar61 = ZEXT1664(auVar17);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_15f8);
      auVar17._4_12_ = auStack_15f4;
      auVar17._0_4_ = local_15f8;
      auVar17 = vsubps_avx(local_15e8,auVar17);
      auVar15._0_4_ = auVar17._0_4_ * auVar17._0_4_;
      auVar15._4_4_ = auVar17._4_4_ * auVar17._4_4_;
      auVar15._8_4_ = auVar17._8_4_ * auVar17._8_4_;
      auVar15._12_4_ = auVar17._12_4_ * auVar17._12_4_;
      auVar17 = vinsertps_avx(auVar15,auVar15,0x4c);
      auVar16._0_4_ = auVar15._0_4_ + auVar17._0_4_;
      auVar16._4_4_ = auVar15._4_4_ + auVar17._4_4_;
      auVar16._8_4_ = auVar15._8_4_ + auVar17._8_4_;
      auVar16._12_4_ = auVar15._12_4_ + auVar17._12_4_;
      auVar17 = vshufpd_avx(auVar16,auVar16,1);
      auVar17 = ZEXT416((uint)(auVar16._0_4_ + auVar17._0_4_));
      auVar17 = vsqrtss_avx(auVar17,auVar17);
      auVar17 = vshufps_avx(auVar17,auVar17,0);
      auVar24._0_4_ = auVar61._0_4_ * auVar17._0_4_;
      auVar24._4_4_ = auVar61._4_4_ * auVar17._4_4_;
      auVar24._8_4_ = auVar61._8_4_ * auVar17._8_4_;
      auVar24._12_4_ = auVar61._12_4_ * auVar17._12_4_;
      auVar18._0_4_ = auVar59._0_4_ * auVar17._0_4_;
      auVar18._4_4_ = auVar59._4_4_ * auVar17._4_4_;
      auVar18._8_4_ = auVar59._8_4_ * auVar17._8_4_;
      auVar18._12_4_ = auVar59._12_4_ * auVar17._12_4_;
      local_1348 = 4;
      auVar35._0_4_ = auVar60._0_4_ + auVar24._0_4_;
      auVar35._4_4_ = auVar60._4_4_ + auVar24._4_4_;
      auVar35._8_4_ = auVar60._8_4_ + auVar24._8_4_;
      auVar35._12_4_ = auVar60._12_4_ + auVar24._12_4_;
      local_1338 = auVar18._0_4_ + auVar35._0_4_;
      fStack_1334 = auVar18._4_4_ + auVar35._4_4_;
      fStack_1330 = auVar18._8_4_ + auVar35._8_4_;
      fStack_132c = auVar18._12_4_ + auVar35._12_4_;
      local_1328 = vsubps_avx(auVar35,auVar18);
      auVar17 = vsubps_avx(auVar60._0_16_,auVar24);
      local_1318 = vsubps_avx(auVar17,auVar18);
      local_1308._0_4_ = auVar18._0_4_ + auVar17._0_4_;
      local_1308._4_4_ = auVar18._4_4_ + auVar17._4_4_;
      local_1308._8_4_ = auVar18._8_4_ + auVar17._8_4_;
      local_1308._12_4_ = auVar18._12_4_ + auVar17._12_4_;
    }
  }
  (**(code **)(*param_9 + 0x28))(param_9,local_1598);
  auVar9 = in_ZMM6._0_16_;
  uVar7 = extraout_var_00;
LAB_1402f179f:
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar9 = vpinsrq_avx(auVar9,uVar4 & 0xffffffff00000000 | CONCAT44(uVar7,(int)uVar4),1);
    auVar17 = vmovntdq_avx(SUB6416(ZEXT864(0x14139ac35),0));
    *pauVar8 = auVar17;
    auVar17 = vmovntdq_avx(auVar9);
    pauVar8[1] = auVar17;
  }
  if (DAT_1414ef3c0 == (local_e0 ^ (ulonglong)auStack_1678)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_e0 ^ (ulonglong)auStack_1678);
}

