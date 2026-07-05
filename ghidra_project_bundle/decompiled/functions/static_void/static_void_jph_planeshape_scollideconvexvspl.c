/**
 * Function: static_void_jph_planeshape_scollideconvexvspl
 * Address:  1402f1c20
 * Signature: undefined static_void_jph_planeshape_scollideconvexvspl(void)
 * Body size: 1981 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_planeshape_scollideconvexvspl
               (longlong *param_1,longlong param_2,undefined8 *param_3,undefined1 (*param_4) [16],
               undefined1 (*param_5) [16],float *param_6,undefined4 *param_7,undefined4 *param_8,
               longlong param_9,longlong *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong *plVar19;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 extraout_var_01 [56];
  float fVar33;
  float fVar34;
  float fVar40;
  float fVar42;
  float fVar44;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  float fVar43;
  float fVar45;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar46;
  float fVar54;
  float fVar55;
  undefined1 auVar47 [16];
  float fVar56;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  float fVar58;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar59 [16];
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined1 auVar82 [16];
  undefined1 auStack_1648 [32];
  undefined1 (*local_1628) [16];
  int *local_1620;
  ulonglong local_1618;
  undefined8 uStack_1610;
  undefined1 local_1608 [16];
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined1 local_15e8 [16];
  float local_15d8;
  float fStack_15d4;
  float fStack_15d0;
  float fStack_15cc;
  undefined8 local_15c8;
  undefined8 uStack_15c0;
  undefined4 local_15b8;
  undefined1 auStack_15b4 [12];
  undefined1 local_15a8 [16];
  undefined1 local_1598 [16];
  undefined1 local_1588 [16];
  undefined1 local_1578 [16];
  float local_1568;
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
  undefined1 local_1138 [4168];
  ulonglong local_f0;
  undefined8 uStack_48;
  undefined1 auVar83 [64];
  
  uStack_48 = 0x1402f1c36;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_1648;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar10 != 0) {
    uVar9 = *(uint *)(lVar10 + 0x200020);
    if ((ulonglong)uVar9 < 0x10000) {
      *(uint *)(lVar10 + 0x200020) = uVar9 + 1;
      pauVar21 = (undefined1 (*) [16])(lVar10 + (ulonglong)uVar9 * 0x20 + 0x20);
      uVar11 = rdtsc();
      local_1618 = uVar11 & 0xffffffff00000000 |
                   CONCAT44((int)((ulonglong)lVar10 >> 0x20),(int)uVar11);
      uStack_1610 = 0;
      goto LAB_1402f1d63;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar21 = (undefined1 (*) [16])0x0;
LAB_1402f1d63:
  auVar31 = vmovlhps_avx(*param_5,param_5[1]);
  auVar23 = vunpckhpd_avx(*param_5,param_5[1]);
  auVar80 = ZEXT1664((undefined1  [16])0x0);
  auVar22 = vpunpckhqdq_avx(param_5[2],(undefined1  [16])0x0);
  auVar22 = vshufps_avx(auVar23,auVar22,0x88);
  auVar47._8_8_ = 0;
  auVar47._0_8_ = SUB168(param_5[2],0);
  auVar23 = vshufps_avx(auVar31,auVar47,0x88);
  auVar31 = vshufps_avx(auVar31,auVar47,0xdd);
  fVar34 = *(float *)param_5[3];
  fVar57 = auVar23._0_4_;
  fVar60 = auVar23._4_4_;
  fVar62 = auVar23._8_4_;
  fVar64 = auVar23._12_4_;
  fVar41 = *(float *)(param_5[3] + 4);
  fVar46 = auVar31._0_4_;
  fVar54 = auVar31._4_4_;
  fVar55 = auVar31._8_4_;
  fVar56 = auVar31._12_4_;
  fVar43 = *(float *)(param_5[3] + 8);
  fVar33 = auVar22._0_4_;
  fVar40 = auVar22._4_4_;
  fVar42 = auVar22._8_4_;
  fVar44 = auVar22._12_4_;
  auVar31._0_4_ = fVar33 * fVar43 + fVar57 * fVar34 + fVar46 * fVar41;
  auVar31._4_4_ = fVar40 * fVar43 + fVar60 * fVar34 + fVar54 * fVar41;
  auVar31._8_4_ = fVar42 * fVar43 + fVar62 * fVar34 + fVar55 * fVar41;
  auVar31._12_4_ = fVar44 * fVar43 + fVar64 * fVar34 + fVar56 * fVar41;
  auVar24 = vsubps_avx((undefined1  [16])0x0,auVar31);
  auVar31 = vinsertps_avx(auVar24,ZEXT416(0x3f800000),0x30);
  fVar34 = *param_6;
  fVar41 = param_6[1];
  fVar43 = param_6[2];
  fVar45 = param_6[3];
  fVar12 = auVar31._0_4_;
  fVar13 = auVar31._4_4_;
  fVar14 = auVar31._8_4_;
  fVar15 = auVar31._12_4_;
  fVar58 = param_6[4];
  fVar61 = param_6[5];
  fVar63 = param_6[6];
  fVar65 = param_6[7];
  fVar1 = param_6[8];
  fVar2 = param_6[9];
  fVar3 = param_6[10];
  fVar4 = param_6[0xb];
  fVar5 = param_6[0xc];
  fVar6 = param_6[0xd];
  fVar7 = param_6[0xe];
  fVar8 = param_6[0xf];
  auVar31 = vdivps_avx(*(undefined1 (*) [16])(param_2 + 0x20),*param_4);
  auVar48._0_4_ = auVar31._0_4_ * auVar31._0_4_;
  auVar48._4_4_ = auVar31._4_4_ * auVar31._4_4_;
  auVar48._8_4_ = auVar31._8_4_ * auVar31._8_4_;
  auVar48._12_4_ = auVar31._12_4_ * auVar31._12_4_;
  auVar22 = vinsertps_avx(auVar48,auVar48,0x4c);
  auVar49._0_4_ = auVar48._0_4_ + auVar22._0_4_;
  auVar49._4_4_ = auVar48._4_4_ + auVar22._4_4_;
  auVar49._8_4_ = auVar48._8_4_ + auVar22._8_4_;
  auVar49._12_4_ = auVar48._12_4_ + auVar22._12_4_;
  auVar22 = vshufpd_avx(auVar49,auVar49,1);
  auVar22 = ZEXT416((uint)(auVar49._0_4_ + auVar22._0_4_));
  auVar22 = vsqrtss_avx(auVar22,auVar22);
  fVar74 = *(float *)(param_2 + 0x2c) / auVar22._0_4_;
  auVar22 = vshufps_avx(auVar22,auVar22,0);
  auVar31 = vdivps_avx(auVar31,auVar22);
  auVar22 = vshufps_avx(auVar31,auVar31,0);
  auVar76 = ZEXT1664(auVar22);
  auVar23 = vshufps_avx(auVar31,auVar31,0x55);
  auVar77 = ZEXT1664(auVar23);
  auVar31 = vshufps_avx(auVar31,auVar31,0xaa);
  auVar78 = ZEXT1664(auVar31);
  auVar82._0_4_ =
       auVar22._0_4_ * (fVar45 * fVar12 + fVar43 * fVar33 + fVar41 * fVar46 + fVar57 * fVar34) +
       auVar23._0_4_ * (fVar65 * fVar12 + fVar63 * fVar33 + fVar58 * fVar57 + fVar61 * fVar46) +
       auVar31._0_4_ * (fVar3 * fVar33 + fVar1 * fVar57 + fVar2 * fVar46 + fVar4 * fVar12);
  auVar82._4_4_ =
       auVar22._4_4_ * (fVar45 * fVar13 + fVar43 * fVar40 + fVar41 * fVar54 + fVar60 * fVar34) +
       auVar23._4_4_ * (fVar65 * fVar13 + fVar63 * fVar40 + fVar58 * fVar60 + fVar61 * fVar54) +
       auVar31._4_4_ * (fVar3 * fVar40 + fVar1 * fVar60 + fVar2 * fVar54 + fVar4 * fVar13);
  auVar82._8_4_ =
       auVar22._8_4_ * (fVar45 * fVar14 + fVar43 * fVar42 + fVar41 * fVar55 + fVar62 * fVar34) +
       auVar23._8_4_ * (fVar65 * fVar14 + fVar63 * fVar42 + fVar58 * fVar62 + fVar61 * fVar55) +
       auVar31._8_4_ * (fVar3 * fVar42 + fVar1 * fVar62 + fVar2 * fVar55 + fVar4 * fVar14);
  auVar82._12_4_ =
       auVar22._12_4_ * (fVar45 * fVar15 + fVar43 * fVar44 + fVar41 * fVar56 + fVar64 * fVar34) +
       auVar23._12_4_ * (fVar65 * fVar15 + fVar63 * fVar44 + fVar58 * fVar64 + fVar61 * fVar56) +
       auVar31._12_4_ * (fVar3 * fVar44 + fVar1 * fVar64 + fVar2 * fVar56 + fVar4 * fVar15);
  auVar83 = ZEXT1664(auVar82);
  auVar22._0_4_ =
       auVar82._0_4_ * (auVar24._0_4_ * fVar8 + fVar33 * fVar7 + fVar57 * fVar5 + fVar46 * fVar6);
  auVar22._4_4_ =
       auVar82._4_4_ * (auVar24._4_4_ * fVar8 + fVar40 * fVar7 + fVar60 * fVar5 + fVar54 * fVar6);
  auVar22._8_4_ =
       auVar82._8_4_ * (auVar24._8_4_ * fVar8 + fVar42 * fVar7 + fVar62 * fVar5 + fVar55 * fVar6);
  auVar22._12_4_ =
       auVar82._12_4_ * (auVar24._12_4_ * fVar8 + fVar44 * fVar7 + fVar64 * fVar5 + fVar56 * fVar6);
  auVar31 = vinsertps_avx(auVar22,auVar22,0x4c);
  auVar23._0_4_ = auVar22._0_4_ + auVar31._0_4_;
  auVar23._4_4_ = auVar22._4_4_ + auVar31._4_4_;
  auVar23._8_4_ = auVar22._8_4_ + auVar31._8_4_;
  auVar23._12_4_ = auVar22._12_4_ + auVar31._12_4_;
  auVar31 = vshufpd_avx(auVar23,auVar23,1);
  fVar34 = fVar74 - (auVar23._0_4_ + auVar31._0_4_);
  auVar31 = vinsertps_avx(auVar82,ZEXT416((uint)fVar34),0x30);
  auVar79 = ZEXT1664(auVar31);
  local_15c8 = *param_3;
  uStack_15c0 = param_3[1];
  plVar19 = (longlong *)(**(code **)(*param_1 + 0x128))(param_1,2,local_1138,&local_15c8);
  local_15e8 = vsubps_avx(auVar80._0_16_,auVar79._0_16_);
  auVar81 = ZEXT1664(local_15e8);
  (**(code **)(*plVar19 + 8))(plVar19,&local_15d8,local_15e8);
  auVar24._0_4_ = auVar83._0_4_ * local_15d8;
  auVar24._4_4_ = auVar83._4_4_ * fStack_15d4;
  auVar24._8_4_ = auVar83._8_4_ * fStack_15d0;
  auVar24._12_4_ = auVar83._12_4_ * fStack_15cc;
  auVar31 = vinsertps_avx(auVar24,auVar24,0x4c);
  auVar25._0_4_ = auVar24._0_4_ + auVar31._0_4_;
  auVar25._4_4_ = auVar24._4_4_ + auVar31._4_4_;
  auVar25._8_4_ = auVar24._8_4_ + auVar31._8_4_;
  auVar25._12_4_ = auVar24._12_4_ + auVar31._12_4_;
  auVar31 = vshufpd_avx(auVar25,auVar25,1);
  auVar83 = ZEXT464((uint)(fVar34 + auVar25._0_4_ + auVar31._0_4_));
  auVar80._0_8_ = (**(code **)(*plVar19 + 0x10))(plVar19);
  auVar80._8_56_ = extraout_var_01;
  fVar34 = (float)auVar80._0_8_ - auVar83._0_4_;
  uVar20 = extraout_var;
  if (-*(float *)(param_9 + 0x20) < fVar34) {
    auVar31 = vshufps_avx(auVar80._0_16_,auVar80._0_16_,0);
    auVar26._0_4_ = auVar79._0_4_ * auVar31._0_4_;
    auVar26._4_4_ = auVar79._4_4_ * auVar31._4_4_;
    auVar26._8_4_ = auVar79._8_4_ * auVar31._8_4_;
    auVar26._12_4_ = auVar79._12_4_ * auVar31._12_4_;
    auVar17._4_4_ = fStack_15d4;
    auVar17._0_4_ = local_15d8;
    auVar17._8_4_ = fStack_15d0;
    auVar17._12_4_ = fStack_15cc;
    auVar23 = vsubps_avx(auVar17,auVar26);
    auVar31 = vshufps_avx(auVar23,auVar23,0);
    fVar41 = *(float *)*param_5;
    fVar43 = *(float *)(*param_5 + 4);
    fVar45 = *(float *)(*param_5 + 8);
    fVar58 = *(float *)(*param_5 + 0xc);
    fVar61 = *(float *)param_5[1];
    fVar63 = *(float *)(param_5[1] + 4);
    fVar65 = *(float *)(param_5[1] + 8);
    fVar1 = *(float *)(param_5[1] + 0xc);
    fVar2 = *(float *)param_5[2];
    fVar3 = *(float *)(param_5[2] + 4);
    fVar4 = *(float *)(param_5[2] + 8);
    fVar5 = *(float *)(param_5[2] + 0xc);
    auVar22 = vshufps_avx(auVar23,auVar23,0x55);
    auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
    local_1598._0_4_ =
         *(float *)param_5[3] +
         fVar41 * auVar31._0_4_ + fVar61 * auVar22._0_4_ + fVar2 * auVar23._0_4_;
    local_1598._4_4_ =
         *(float *)(param_5[3] + 4) +
         fVar43 * auVar31._4_4_ + fVar63 * auVar22._4_4_ + fVar3 * auVar23._4_4_;
    local_1598._8_4_ =
         *(float *)(param_5[3] + 8) +
         fVar45 * auVar31._8_4_ + fVar65 * auVar22._8_4_ + fVar4 * auVar23._8_4_;
    local_1598._12_4_ =
         *(float *)(param_5[3] + 0xc) +
         fVar58 * auVar31._12_4_ + fVar1 * auVar22._12_4_ + fVar5 * auVar23._12_4_;
    auVar31 = vshufps_avx(auVar83._0_16_,auVar83._0_16_,0);
    auVar59._0_4_ = auVar79._0_4_ * auVar31._0_4_;
    auVar59._4_4_ = auVar79._4_4_ * auVar31._4_4_;
    auVar59._8_4_ = auVar79._8_4_ * auVar31._8_4_;
    auVar59._12_4_ = auVar79._12_4_ * auVar31._12_4_;
    auVar23 = vsubps_avx(auVar17,auVar59);
    auVar31 = vshufps_avx(auVar23,auVar23,0);
    auVar22 = vshufps_avx(auVar23,auVar23,0x55);
    auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
    local_1588._0_4_ =
         *(float *)param_5[3] +
         fVar41 * auVar31._0_4_ + fVar61 * auVar22._0_4_ + fVar2 * auVar23._0_4_;
    local_1588._4_4_ =
         *(float *)(param_5[3] + 4) +
         fVar43 * auVar31._4_4_ + fVar63 * auVar22._4_4_ + fVar3 * auVar23._4_4_;
    local_1588._8_4_ =
         *(float *)(param_5[3] + 8) +
         fVar45 * auVar31._8_4_ + fVar65 * auVar22._8_4_ + fVar4 * auVar23._8_4_;
    local_1588._12_4_ =
         *(float *)(param_5[3] + 0xc) +
         fVar58 * auVar31._12_4_ + fVar1 * auVar22._12_4_ + fVar5 * auVar23._12_4_;
    auVar23 = auVar81._0_16_;
    auVar31 = vshufps_avx(auVar23,auVar23,0);
    auVar22 = vshufps_avx(auVar23,auVar23,0x55);
    auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
    local_1578._0_4_ = auVar31._0_4_ * fVar41 + auVar22._0_4_ * fVar61 + fVar2 * auVar23._0_4_;
    local_1578._4_4_ = auVar31._4_4_ * fVar43 + auVar22._4_4_ * fVar63 + fVar3 * auVar23._4_4_;
    local_1578._8_4_ = auVar31._8_4_ * fVar45 + auVar22._8_4_ * fVar65 + fVar4 * auVar23._8_4_;
    local_1578._12_4_ = auVar31._12_4_ * fVar58 + auVar22._12_4_ * fVar1 + fVar5 * auVar23._12_4_;
    if (param_10[2] == 0) {
      local_155c = 0xffffffff;
    }
    else {
      local_155c = *(undefined4 *)(param_10[2] + 0x34);
    }
    local_1564 = *param_7;
    local_1560 = *param_8;
    local_1558[0] = 0;
    local_1348 = 0;
    local_1568 = fVar34;
    if (*(char *)(param_9 + 1) == '\0') {
      local_1620 = local_1558;
      local_15f8 = *param_3;
      uStack_15f0 = param_3[1];
      local_1608 = auVar79._0_16_;
      local_15b8 = 0xffffffff;
      local_1628 = param_5;
      (**(code **)(*param_1 + 0x58))(param_1,&local_15b8,local_1608,&local_15f8);
      if (local_1558[0] != 0) {
        auVar31 = param_5[3];
        auVar27._0_4_ =
             auVar76._0_4_ * *param_6 + auVar77._0_4_ * param_6[4] + auVar78._0_4_ * param_6[8];
        auVar27._4_4_ =
             auVar76._4_4_ * param_6[1] + auVar77._4_4_ * param_6[5] + auVar78._4_4_ * param_6[9];
        auVar27._8_4_ =
             auVar76._8_4_ * param_6[2] + auVar77._8_4_ * param_6[6] + auVar78._8_4_ * param_6[10];
        auVar27._12_4_ =
             auVar76._12_4_ * param_6[3] + auVar77._12_4_ * param_6[7] +
             auVar78._12_4_ * param_6[0xb];
        auVar35._0_4_ = auVar27._0_4_ * param_6[0xc];
        auVar35._4_4_ = auVar27._4_4_ * param_6[0xd];
        auVar35._8_4_ = auVar27._8_4_ * param_6[0xe];
        auVar35._12_4_ = auVar27._12_4_ * param_6[0xf];
        auVar22 = vinsertps_avx(auVar35,auVar35,0x4c);
        auVar36._0_4_ = auVar35._0_4_ + auVar22._0_4_;
        auVar36._4_4_ = auVar35._4_4_ + auVar22._4_4_;
        auVar36._8_4_ = auVar35._8_4_ + auVar22._8_4_;
        auVar36._12_4_ = auVar35._12_4_ + auVar22._12_4_;
        auVar22 = vshufpd_avx(auVar36,auVar36,1);
        fVar74 = fVar74 - (auVar36._0_4_ + auVar22._0_4_);
        auVar22 = vinsertps_avx(auVar27,ZEXT416((uint)fVar74),0x30);
        auVar66._0_4_ = auVar31._0_4_ * auVar27._0_4_;
        auVar66._4_4_ = auVar31._4_4_ * auVar27._4_4_;
        auVar66._8_4_ = auVar31._8_4_ * auVar27._8_4_;
        auVar66._12_4_ = auVar31._12_4_ * auVar27._12_4_;
        auVar23 = vinsertps_avx(auVar66,auVar66,0x4c);
        auVar67._0_4_ = auVar66._0_4_ + auVar23._0_4_;
        auVar67._4_4_ = auVar66._4_4_ + auVar23._4_4_;
        auVar67._8_4_ = auVar66._8_4_ + auVar23._8_4_;
        auVar67._12_4_ = auVar66._12_4_ + auVar23._12_4_;
        auVar23 = vshufpd_avx(auVar67,auVar67,1);
        auVar23 = ZEXT416((uint)(fVar74 + auVar67._0_4_ + auVar23._0_4_));
        auVar23 = vshufps_avx(auVar23,auVar23,0);
        fVar58 = auVar22._0_4_;
        auVar37._0_4_ = fVar58 * auVar23._0_4_;
        fVar61 = auVar22._4_4_;
        auVar37._4_4_ = fVar61 * auVar23._4_4_;
        fVar63 = auVar22._8_4_;
        auVar37._8_4_ = fVar63 * auVar23._8_4_;
        fVar65 = auVar22._12_4_;
        auVar37._12_4_ = fVar65 * auVar23._12_4_;
        auVar31 = vsubps_avx(auVar31,auVar37);
        auVar76 = ZEXT1664(auVar31);
        auVar68._0_4_ = fVar58 * 1.0;
        auVar68._4_4_ = fVar61 * 0.0;
        auVar68._8_4_ = fVar63 * 0.0;
        auVar68._12_4_ = fVar65 * 0.0;
        auVar31 = vshufps_avx(auVar27,auVar27,0xc9);
        fVar34 = auVar31._0_4_;
        auVar73._0_4_ = fVar34 * 0.0;
        fVar41 = auVar31._4_4_;
        auVar73._4_4_ = fVar41 * 1.0;
        fVar43 = auVar31._8_4_;
        auVar73._8_4_ = fVar43 * 0.0;
        fVar45 = auVar31._12_4_;
        auVar73._12_4_ = fVar45 * 0.0;
        auVar31 = vsubps_avx(auVar68,auVar73);
        auVar22 = vshufps_avx(auVar31,auVar31,9);
        auVar69._0_4_ = auVar31._0_4_ * auVar31._0_4_;
        auVar69._4_4_ = auVar31._4_4_ * auVar31._4_4_;
        auVar69._8_4_ = auVar31._8_4_ * auVar31._8_4_;
        auVar69._12_4_ = auVar31._12_4_ * auVar31._12_4_;
        auVar31 = vshufps_avx(auVar69,auVar69,0xc9);
        auVar75._0_12_ = ZEXT812(0);
        auVar75._12_4_ = 0;
        auVar31 = vblendps_avx(auVar31,auVar75,8);
        auVar23 = vshufps_avx(auVar69,auVar75,0x4a);
        auVar70._0_4_ = auVar31._0_4_ + auVar23._0_4_;
        auVar70._4_4_ = auVar31._4_4_ + auVar23._4_4_;
        auVar70._8_4_ = auVar31._8_4_ + auVar23._8_4_;
        auVar70._12_4_ = auVar31._12_4_ + auVar23._12_4_;
        auVar31 = vshufps_avx(auVar70,auVar70,0);
        auVar23 = vshufps_avx(auVar70,auVar70,0xaa);
        auVar71._0_4_ = auVar31._0_4_ + auVar23._0_4_;
        auVar71._4_4_ = auVar31._4_4_ + auVar23._4_4_;
        auVar71._8_4_ = auVar31._8_4_ + auVar23._8_4_;
        auVar71._12_4_ = auVar31._12_4_ + auVar23._12_4_;
        auVar31 = vcmpps_avx(auVar71,_DAT_140de4ba0,2);
        auVar23 = vsqrtps_avx(auVar71);
        auVar22 = vdivps_avx(auVar22,auVar23);
        auVar31 = vblendvps_avx(auVar22,SUB6416(ZEXT464(0x3f800000),0),auVar31);
        auVar72._0_4_ = fVar34 * auVar31._0_4_;
        auVar72._4_4_ = fVar41 * auVar31._4_4_;
        auVar72._8_4_ = fVar43 * auVar31._8_4_;
        auVar72._12_4_ = fVar45 * auVar31._12_4_;
        auVar31 = vshufps_avx(auVar31,auVar31,0xc9);
        auVar50._0_4_ = fVar58 * auVar31._0_4_;
        auVar50._4_4_ = fVar61 * auVar31._4_4_;
        auVar50._8_4_ = fVar63 * auVar31._8_4_;
        auVar50._12_4_ = fVar65 * auVar31._12_4_;
        auVar31 = vsubps_avx(auVar72,auVar50);
        auVar22 = vshufps_avx(auVar31,auVar31,9);
        auVar51._0_4_ = auVar31._0_4_ * auVar31._0_4_;
        auVar51._4_4_ = auVar31._4_4_ * auVar31._4_4_;
        auVar51._8_4_ = auVar31._8_4_ * auVar31._8_4_;
        auVar51._12_4_ = auVar31._12_4_ * auVar31._12_4_;
        auVar31 = vshufps_avx(auVar51,auVar51,0xc9);
        auVar23 = vshufps_avx(auVar51,auVar75,0x4a);
        auVar52._0_4_ = auVar31._0_4_ + auVar23._0_4_;
        auVar52._4_4_ = auVar31._4_4_ + auVar23._4_4_;
        auVar52._8_4_ = auVar31._8_4_ + auVar23._8_4_;
        auVar52._12_4_ = auVar31._12_4_ + auVar23._12_4_;
        auVar31 = vshufpd_avx(auVar52,auVar52,1);
        auVar31 = ZEXT416((uint)(auVar52._0_4_ + auVar31._0_4_));
        auVar31 = vsqrtss_avx(auVar31,auVar31);
        auVar31 = vshufps_avx(auVar31,auVar31,0);
        auVar31 = vdivps_avx(auVar22,auVar31);
        auVar80 = ZEXT1664(auVar31);
        auVar22 = vshufps_avx(auVar31,auVar31,0xc9);
        auVar28._0_4_ = auVar27._0_4_ * auVar22._0_4_;
        auVar28._4_4_ = auVar27._4_4_ * auVar22._4_4_;
        auVar28._8_4_ = auVar27._8_4_ * auVar22._8_4_;
        auVar28._12_4_ = auVar27._12_4_ * auVar22._12_4_;
        auVar38._0_4_ = fVar34 * auVar31._0_4_;
        auVar38._4_4_ = fVar41 * auVar31._4_4_;
        auVar38._8_4_ = fVar43 * auVar31._8_4_;
        auVar38._12_4_ = fVar45 * auVar31._12_4_;
        auVar31 = vsubps_avx(auVar28,auVar38);
        auVar31 = vshufps_avx(auVar31,auVar31,9);
        auVar77 = ZEXT1664(auVar31);
        (**(code **)(*param_1 + 0x18))(param_1,&local_15b8);
        auVar18._4_12_ = auStack_15b4;
        auVar18._0_4_ = local_15b8;
        auVar31 = vsubps_avx(local_15a8,auVar18);
        auVar29._0_4_ = auVar31._0_4_ * auVar31._0_4_;
        auVar29._4_4_ = auVar31._4_4_ * auVar31._4_4_;
        auVar29._8_4_ = auVar31._8_4_ * auVar31._8_4_;
        auVar29._12_4_ = auVar31._12_4_ * auVar31._12_4_;
        auVar31 = vinsertps_avx(auVar29,auVar29,0x4c);
        auVar30._0_4_ = auVar29._0_4_ + auVar31._0_4_;
        auVar30._4_4_ = auVar29._4_4_ + auVar31._4_4_;
        auVar30._8_4_ = auVar29._8_4_ + auVar31._8_4_;
        auVar30._12_4_ = auVar29._12_4_ + auVar31._12_4_;
        auVar31 = vshufpd_avx(auVar30,auVar30,1);
        auVar31 = ZEXT416((uint)(auVar30._0_4_ + auVar31._0_4_));
        auVar31 = vsqrtss_avx(auVar31,auVar31);
        auVar31 = vshufps_avx(auVar31,auVar31,0);
        auVar39._0_4_ = auVar77._0_4_ * auVar31._0_4_;
        auVar39._4_4_ = auVar77._4_4_ * auVar31._4_4_;
        auVar39._8_4_ = auVar77._8_4_ * auVar31._8_4_;
        auVar39._12_4_ = auVar77._12_4_ * auVar31._12_4_;
        auVar32._0_4_ = auVar31._0_4_ * auVar80._0_4_;
        auVar32._4_4_ = auVar31._4_4_ * auVar80._4_4_;
        auVar32._8_4_ = auVar31._8_4_ * auVar80._8_4_;
        auVar32._12_4_ = auVar31._12_4_ * auVar80._12_4_;
        local_1348 = 4;
        auVar53._0_4_ = auVar76._0_4_ + auVar39._0_4_;
        auVar53._4_4_ = auVar76._4_4_ + auVar39._4_4_;
        auVar53._8_4_ = auVar76._8_4_ + auVar39._8_4_;
        auVar53._12_4_ = auVar76._12_4_ + auVar39._12_4_;
        local_1338 = auVar32._0_4_ + auVar53._0_4_;
        fStack_1334 = auVar32._4_4_ + auVar53._4_4_;
        fStack_1330 = auVar32._8_4_ + auVar53._8_4_;
        fStack_132c = auVar32._12_4_ + auVar53._12_4_;
        local_1328 = vsubps_avx(auVar53,auVar32);
        auVar31 = vsubps_avx(auVar76._0_16_,auVar39);
        local_1318 = vsubps_avx(auVar31,auVar32);
        local_1308._0_4_ = auVar32._0_4_ + auVar31._0_4_;
        local_1308._4_4_ = auVar32._4_4_ + auVar31._4_4_;
        local_1308._8_4_ = auVar32._8_4_ + auVar31._8_4_;
        local_1308._12_4_ = auVar32._12_4_ + auVar31._12_4_;
      }
    }
    (**(code **)(*param_10 + 0x28))(param_10,local_1598);
    uVar20 = extraout_var_00;
  }
  auVar16._8_8_ = uStack_1610;
  auVar16._0_8_ = local_1618;
  if (pauVar21 != (undefined1 (*) [16])0x0) {
    uVar11 = rdtsc();
    auVar22 = vpinsrq_avx(auVar16,uVar11 & 0xffffffff00000000 | CONCAT44(uVar20,(int)uVar11),1);
    auVar31 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b65b),0));
    *pauVar21 = auVar31;
    auVar31 = vmovntdq_avx(auVar22);
    pauVar21[1] = auVar31;
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_1648)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_1648);
}

