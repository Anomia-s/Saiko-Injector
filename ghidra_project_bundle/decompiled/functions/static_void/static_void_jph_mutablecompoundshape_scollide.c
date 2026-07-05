/**
 * Function: static_void_jph_mutablecompoundshape_scollide
 * Address:  1402e5830
 * Signature: undefined static_void_jph_mutablecompoundshape_scollide(void)
 * Body size: 2847 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_mutablecompoundshape_scollide
               (longlong *param_1,longlong param_2,float *param_3,undefined8 *param_4,float *param_5
               ,undefined1 (*param_6) [16],undefined8 *param_7,undefined8 *param_8,longlong param_9,
               ulonglong param_10,longlong *param_11)

{
  float *pfVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar49;
  float fVar50;
  undefined1 auVar31 [16];
  float fVar51;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar52;
  float fVar53;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [64];
  undefined1 auVar84 [64];
  float fVar85;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar86 [16];
  float fVar90;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar91 [64];
  float fVar95;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 auVar96 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar104 [64];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar107 [64];
  undefined1 in_ZMM15 [64];
  undefined1 auVar108 [64];
  undefined1 auStack_318 [32];
  uint *local_2f8;
  undefined1 *local_2f0;
  undefined8 *local_2e8;
  uint *local_2e0;
  longlong local_2d8;
  ulonglong local_2d0;
  longlong *local_2c8;
  undefined1 (*local_2b8) [16];
  longlong local_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  ulonglong local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  uint local_270;
  int local_26c;
  undefined1 local_268 [8];
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [16];
  longlong local_238;
  ulonglong local_230;
  longlong *local_228;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  int local_148;
  longlong *local_140;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  ulonglong local_f0;
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  ulonglong uVar14;
  
  local_58 = in_ZMM15._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_318;
  local_2b0 = param_2;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar16 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar16 != 0) {
    uVar13 = *(uint *)(lVar16 + 0x200020);
    if ((ulonglong)uVar13 < 0x10000) {
      *(uint *)(lVar16 + 0x200020) = uVar13 + 1;
      local_2b8 = (undefined1 (*) [16])(lVar16 + (ulonglong)uVar13 * 0x20 + 0x20);
      uVar14 = rdtsc();
      local_298 = uVar14 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)local_2b8 >> 0x20),(int)uVar14);
      uStack_290 = 0;
      goto LAB_1402e59ba;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_2b8 = (undefined1 (*) [16])0x0;
LAB_1402e59ba:
  lVar16 = local_2b0;
  fVar85 = *param_3;
  fVar87 = param_3[1];
  fVar88 = param_3[2];
  fVar89 = param_3[3];
  local_238 = param_9;
  local_230 = param_10;
  local_208 = (float)*param_4;
  fStack_204 = (float)((ulonglong)*param_4 >> 0x20);
  fStack_200 = (float)param_4[1];
  fStack_1fc = (float)((ulonglong)param_4[1] >> 0x20);
  local_1f8 = *(undefined8 *)param_5;
  uStack_1f0 = *(undefined8 *)(param_5 + 2);
  uStack_1e8 = *(undefined8 *)(param_5 + 4);
  uStack_1e0 = *(undefined8 *)(param_5 + 6);
  local_1d8 = *(undefined8 *)(param_5 + 8);
  uStack_1d0 = *(undefined8 *)(param_5 + 10);
  uStack_1c8 = *(undefined8 *)(param_5 + 0xc);
  uStack_1c0 = *(undefined8 *)(param_5 + 0xe);
  local_1b8 = *(undefined8 *)*param_6;
  uStack_1b0 = *(undefined8 *)(*param_6 + 8);
  uStack_1a8 = *(undefined8 *)param_6[1];
  uStack_1a0 = *(undefined8 *)(param_6[1] + 8);
  local_198 = *(undefined8 *)param_6[2];
  uStack_190 = *(undefined8 *)(param_6[2] + 8);
  uStack_188 = *(undefined8 *)param_6[3];
  uStack_180 = *(undefined8 *)(param_6[3] + 8);
  local_158 = *param_7;
  local_150 = *param_8;
  local_148 = 0x20 - LZCOUNT(*(int *)(local_2b0 + 0x50) + -1);
  local_140 = param_11;
  auVar19 = vmovlhps_avx(*param_6,param_6[1]);
  auVar32 = vunpckhpd_avx(*param_6,param_6[1]);
  auVar20 = vpunpckhqdq_avx(param_6[2],(undefined1  [16])0x0);
  auVar20 = vshufps_avx(auVar32,auVar20,0x88);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = SUB168(param_6[2],0);
  auVar32 = vshufps_avx(auVar19,auVar31,0x88);
  auVar19 = vshufps_avx(auVar19,auVar31,0xdd);
  fVar53 = *(float *)param_6[3];
  fVar52 = auVar32._0_4_;
  fVar61 = auVar32._4_4_;
  fVar62 = auVar32._8_4_;
  fVar64 = auVar32._12_4_;
  fVar83 = *(float *)(param_6[3] + 4);
  fVar30 = auVar19._0_4_;
  fVar49 = auVar19._4_4_;
  fVar50 = auVar19._8_4_;
  fVar51 = auVar19._12_4_;
  fVar63 = *(float *)(param_6[3] + 8);
  fVar18 = auVar20._0_4_;
  fVar27 = auVar20._4_4_;
  fVar28 = auVar20._8_4_;
  fVar29 = auVar20._12_4_;
  auVar66._0_4_ = fVar18 * fVar63 + fVar52 * fVar53 + fVar30 * fVar83;
  auVar66._4_4_ = fVar27 * fVar63 + fVar61 * fVar53 + fVar49 * fVar83;
  auVar66._8_4_ = fVar28 * fVar63 + fVar62 * fVar53 + fVar50 * fVar83;
  auVar66._12_4_ = fVar29 * fVar63 + fVar64 * fVar53 + fVar51 * fVar83;
  auVar19 = vsubps_avx((undefined1  [16])0x0,auVar66);
  auVar19 = vinsertps_avx(auVar19,ZEXT416(0x3f800000),0x30);
  fVar53 = *param_5;
  fVar83 = param_5[1];
  fVar63 = param_5[2];
  fVar65 = param_5[3];
  fVar73 = auVar19._0_4_;
  fVar81 = auVar19._4_4_;
  fVar82 = auVar19._8_4_;
  fVar5 = auVar19._12_4_;
  fVar90 = fVar18 * fVar63 + fVar52 * fVar53 + fVar30 * fVar83 + fVar65 * fVar73;
  fVar92 = fVar27 * fVar63 + fVar61 * fVar53 + fVar49 * fVar83 + fVar65 * fVar81;
  fVar93 = fVar28 * fVar63 + fVar62 * fVar53 + fVar50 * fVar83 + fVar65 * fVar82;
  fVar94 = fVar29 * fVar63 + fVar64 * fVar53 + fVar51 * fVar83 + fVar65 * fVar5;
  fVar53 = param_5[4];
  fVar83 = param_5[5];
  fVar63 = param_5[6];
  fVar65 = param_5[7];
  fVar95 = fVar18 * fVar63 + fVar52 * fVar53 + fVar30 * fVar83 + fVar65 * fVar73;
  fVar97 = fVar27 * fVar63 + fVar61 * fVar53 + fVar49 * fVar83 + fVar65 * fVar81;
  fVar98 = fVar28 * fVar63 + fVar62 * fVar53 + fVar50 * fVar83 + fVar65 * fVar82;
  fVar99 = fVar29 * fVar63 + fVar64 * fVar53 + fVar51 * fVar83 + fVar65 * fVar5;
  fVar53 = param_5[8];
  fVar83 = param_5[9];
  fVar63 = param_5[10];
  fVar65 = param_5[0xb];
  fVar100 = fVar65 * fVar73 + fVar18 * fVar63 + fVar52 * fVar53 + fVar30 * fVar83;
  fVar101 = fVar65 * fVar81 + fVar27 * fVar63 + fVar61 * fVar53 + fVar49 * fVar83;
  fVar102 = fVar65 * fVar82 + fVar28 * fVar63 + fVar62 * fVar53 + fVar50 * fVar83;
  fVar103 = fVar65 * fVar5 + fVar29 * fVar63 + fVar64 * fVar53 + fVar51 * fVar83;
  fVar53 = param_5[0xc];
  fVar83 = param_5[0xd];
  fVar63 = param_5[0xe];
  fVar65 = param_5[0xf];
  fVar73 = fVar65 * fVar73 + fVar18 * fVar63 + fVar52 * fVar53 + fVar30 * fVar83;
  fVar81 = fVar65 * fVar81 + fVar27 * fVar63 + fVar61 * fVar53 + fVar49 * fVar83;
  fVar82 = fVar65 * fVar82 + fVar28 * fVar63 + fVar62 * fVar53 + fVar50 * fVar83;
  fVar83 = fVar65 * fVar5 + fVar29 * fVar63 + fVar64 * fVar53 + fVar51 * fVar83;
  auVar84 = ZEXT2464(ZEXT1624((undefined1  [16])0x0));
  local_228 = param_1;
  local_218 = fVar85;
  fStack_214 = fVar87;
  fStack_210 = fVar88;
  fStack_20c = fVar89;
  (**(code **)(*param_1 + 0x18))(param_1,local_268);
  auVar19._0_4_ = fVar85 * local_258;
  auVar19._4_4_ = fVar87 * fStack_254;
  auVar19._8_4_ = fVar88 * fStack_250;
  auVar19._12_4_ = fVar89 * fStack_24c;
  auVar32._0_4_ = fVar85 * (float)local_268._0_4_;
  auVar32._4_4_ = fVar87 * (float)local_268._4_4_;
  auVar32._8_4_ = fVar88 * fStack_260;
  auVar32._12_4_ = fVar89 * fStack_25c;
  _local_128 = vmaxps_avx(auVar32,auVar19);
  _local_138 = vminps_avx(auVar32,auVar19);
  auVar66 = _local_138;
  auVar19 = vshufps_avx(_local_138,_local_138,0);
  auVar20._0_4_ = fVar90 * auVar19._0_4_;
  auVar20._4_4_ = fVar92 * auVar19._4_4_;
  auVar20._8_4_ = fVar93 * auVar19._8_4_;
  auVar20._12_4_ = fVar94 * auVar19._12_4_;
  auVar19 = vshufps_avx(_local_128,_local_128,0);
  auVar33._0_4_ = fVar90 * auVar19._0_4_;
  auVar33._4_4_ = fVar92 * auVar19._4_4_;
  auVar33._8_4_ = fVar93 * auVar19._8_4_;
  auVar33._12_4_ = fVar94 * auVar19._12_4_;
  auVar32 = vminps_avx(auVar20,auVar33);
  auVar19 = vmaxps_avx(auVar20,auVar33);
  auVar34._0_4_ = fVar95 * (float)local_138._4_4_;
  auVar34._4_4_ = fVar97 * (float)local_138._4_4_;
  auVar34._8_4_ = fVar98 * (float)local_138._4_4_;
  auVar34._12_4_ = fVar99 * (float)local_138._4_4_;
  auVar20 = vshufps_avx(_local_128,_local_128,0x55);
  auVar70._0_4_ = fVar95 * auVar20._0_4_;
  auVar70._4_4_ = fVar97 * auVar20._4_4_;
  auVar70._8_4_ = fVar98 * auVar20._8_4_;
  auVar70._12_4_ = fVar99 * auVar20._12_4_;
  auVar31 = vminps_avx(auVar34,auVar70);
  auVar20 = vmaxps_avx(auVar34,auVar70);
  auVar35._0_4_ = fVar100 * fStack_130;
  auVar35._4_4_ = fVar101 * fStack_130;
  auVar35._8_4_ = fVar102 * fStack_130;
  auVar35._12_4_ = fVar103 * fStack_130;
  auVar33 = vshufps_avx(_local_128,_local_128,0xaa);
  auVar54._0_4_ = fVar100 * auVar33._0_4_;
  auVar54._4_4_ = fVar101 * auVar33._4_4_;
  auVar54._8_4_ = fVar102 * auVar33._8_4_;
  auVar54._12_4_ = fVar103 * auVar33._12_4_;
  auVar33 = vminps_avx(auVar35,auVar54);
  auVar67._0_4_ = fVar73 + auVar32._0_4_ + auVar31._0_4_ + auVar33._0_4_;
  auVar67._4_4_ = fVar81 + auVar32._4_4_ + auVar31._4_4_ + auVar33._4_4_;
  auVar67._8_4_ = fVar82 + auVar32._8_4_ + auVar31._8_4_ + auVar33._8_4_;
  auVar67._12_4_ = fVar83 + auVar32._12_4_ + auVar31._12_4_ + auVar33._12_4_;
  auVar32 = vmaxps_avx(auVar35,auVar54);
  fVar53 = *(float *)(param_9 + 0x20);
  auVar36._4_4_ = fVar53;
  auVar36._0_4_ = fVar53;
  auVar36._8_4_ = fVar53;
  auVar36._12_4_ = fVar53;
  local_178 = vsubps_avx(auVar67,auVar36);
  local_168 = fVar73 + auVar19._0_4_ + auVar20._0_4_ + auVar32._0_4_ + fVar53;
  fStack_164 = fVar81 + auVar19._4_4_ + auVar20._4_4_ + auVar32._4_4_ + fVar53;
  fStack_160 = fVar82 + auVar19._8_4_ + auVar20._8_4_ + auVar32._8_4_ + fVar53;
  fStack_15c = fVar83 + auVar19._12_4_ + auVar20._12_4_ + auVar32._12_4_ + fVar53;
  uVar13 = *(int *)(lVar16 + 0x50) + 3;
  uVar14 = (ulonglong)uVar13;
  local_2a8 = uVar14;
  _local_138 = auVar66;
  if (3 < uVar13) {
    local_2a8 = (ulonglong)(uVar13 >> 2);
    iVar17 = 0;
    auVar91 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
    auVar104 = ZEXT464(0x3f800000);
    uVar15 = 0;
    do {
      uVar14 = *(ulonglong *)(local_2b0 + 0x80);
      lVar16 = uVar15 * 0x60;
      pfVar1 = (float *)(uVar14 + lVar16);
      auVar37._0_4_ = local_208 * *pfVar1;
      auVar37._4_4_ = local_208 * pfVar1[1];
      auVar37._8_4_ = local_208 * pfVar1[2];
      auVar37._12_4_ = local_208 * pfVar1[3];
      pfVar1 = (float *)(uVar14 + 0x30 + lVar16);
      auVar21._0_4_ = local_208 * *pfVar1;
      auVar21._4_4_ = local_208 * pfVar1[1];
      auVar21._8_4_ = local_208 * pfVar1[2];
      auVar21._12_4_ = local_208 * pfVar1[3];
      auVar31 = vminps_avx(auVar37,auVar21);
      auVar19 = vmaxps_avx(auVar37,auVar21);
      pfVar1 = (float *)(uVar14 + 0x10 + lVar16);
      auVar68._0_4_ = fStack_204 * *pfVar1;
      auVar68._4_4_ = fStack_204 * pfVar1[1];
      auVar68._8_4_ = fStack_204 * pfVar1[2];
      auVar68._12_4_ = fStack_204 * pfVar1[3];
      pfVar1 = (float *)(uVar14 + 0x40 + lVar16);
      auVar38._0_4_ = fStack_204 * *pfVar1;
      auVar38._4_4_ = fStack_204 * pfVar1[1];
      auVar38._8_4_ = fStack_204 * pfVar1[2];
      auVar38._12_4_ = fStack_204 * pfVar1[3];
      auVar33 = vminps_avx(auVar68,auVar38);
      pfVar1 = (float *)(uVar14 + 0x20 + lVar16);
      auVar74._0_4_ = fStack_200 * *pfVar1;
      auVar74._4_4_ = fStack_200 * pfVar1[1];
      auVar74._8_4_ = fStack_200 * pfVar1[2];
      auVar74._12_4_ = fStack_200 * pfVar1[3];
      pfVar1 = (float *)(uVar14 + 0x50 + lVar16);
      auVar71._0_4_ = fStack_200 * *pfVar1;
      auVar71._4_4_ = fStack_200 * pfVar1[1];
      auVar71._8_4_ = fStack_200 * pfVar1[2];
      auVar71._12_4_ = fStack_200 * pfVar1[3];
      auVar20 = vmaxps_avx(auVar68,auVar38);
      auVar66 = vminps_avx(auVar74,auVar71);
      auVar32 = vmaxps_avx(auVar74,auVar71);
      auVar75._4_4_ = local_178._0_4_;
      auVar75._0_4_ = local_178._0_4_;
      auVar75._8_4_ = local_178._0_4_;
      auVar75._12_4_ = local_178._0_4_;
      auVar19 = vcmpps_avx(auVar19,auVar75,5);
      auVar76._4_4_ = local_178._4_4_;
      auVar76._0_4_ = local_178._4_4_;
      auVar76._8_4_ = local_178._4_4_;
      auVar76._12_4_ = local_178._4_4_;
      auVar20 = vcmpps_avx(auVar20,auVar76,5);
      auVar77._4_4_ = local_178._8_4_;
      auVar77._0_4_ = local_178._8_4_;
      auVar77._8_4_ = local_178._8_4_;
      auVar77._12_4_ = local_178._8_4_;
      auVar32 = vcmpps_avx(auVar32,auVar77,5);
      auVar78._4_4_ = local_168;
      auVar78._0_4_ = local_168;
      auVar78._8_4_ = local_168;
      auVar78._12_4_ = local_168;
      auVar31 = vcmpps_avx(auVar78,auVar31,5);
      auVar19 = vandps_avx(auVar19,auVar31);
      auVar55._4_4_ = fStack_164;
      auVar55._0_4_ = fStack_164;
      auVar55._8_4_ = fStack_164;
      auVar55._12_4_ = fStack_164;
      auVar31 = vcmpps_avx(auVar55,auVar33,5);
      auVar20 = vandps_avx(auVar20,auVar31);
      auVar19 = vandps_avx(auVar19,auVar20);
      auVar39._4_4_ = fStack_160;
      auVar39._0_4_ = fStack_160;
      auVar39._8_4_ = fStack_160;
      auVar39._12_4_ = fStack_160;
      auVar20 = vcmpps_avx(auVar39,auVar66,5);
      auVar20 = vandps_avx(auVar32,auVar20);
      auVar32 = auVar19 & auVar20;
      local_2a0 = uVar15;
      if ((((SUB161(auVar32 >> 0x1f,0) & 1) != 0 || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar32 >> 0x5f,0) & 1) != 0) || auVar32[0xf] < '\0') {
        uVar14 = uVar15 * 4;
        uVar13 = (int)*(ulonglong *)(local_2b0 + 0x50) - (int)uVar14;
        if (3 < uVar13) {
          uVar13 = 4;
        }
        if (uVar14 - (*(ulonglong *)(local_2b0 + 0x50) & 0xffffffff) != 0) {
          local_288 = vandps_avx(auVar20,auVar19);
          auVar107 = ZEXT1664(local_288);
          uVar14 = 0;
          lVar16 = local_238;
          uVar15 = local_230;
          plVar10 = local_228;
          plVar11 = local_140;
          iVar3 = local_288._0_4_;
          do {
            iVar9 = (int)uVar14;
            local_238 = lVar16;
            local_230 = uVar15;
            local_228 = plVar10;
            local_140 = plVar11;
            if (iVar3 != 0) {
              uVar14 = (ulonglong)(uint)(iVar9 + iVar17);
              lVar4 = *(longlong *)(local_2b0 + 0x60);
              plVar2 = (longlong *)(lVar4 + uVar14 * 0x28);
              bVar6 = (byte)((ulonglong)local_150 >> 0x20);
              local_270 = iVar9 + iVar17 << (bVar6 & 0x1f) |
                          ~(~(uint)(-1L << ((byte)local_148 & 0x3f)) << (bVar6 & 0x1f)) &
                          (uint)local_150;
              local_26c = local_148 + (int)((ulonglong)local_150 >> 0x20);
              auVar19 = _DAT_140de0210;
              if (*(char *)(lVar4 + 0x24 + uVar14 * 0x28) == '\0') {
                auVar19 = *(undefined1 (*) [16])((longlong)plVar2 + 0x14);
                auVar40._0_4_ = auVar19._0_4_ * auVar19._0_4_;
                auVar40._4_4_ = auVar19._4_4_ * auVar19._4_4_;
                auVar40._8_4_ = auVar19._8_4_ * auVar19._8_4_;
                auVar40._12_4_ = auVar19._12_4_ * auVar19._12_4_;
                auVar20 = vinsertps_avx(auVar40,auVar40,0x4c);
                auVar41._0_4_ = auVar40._0_4_ + auVar20._0_4_;
                auVar41._4_4_ = auVar40._4_4_ + auVar20._4_4_;
                auVar41._8_4_ = auVar40._8_4_ + auVar20._8_4_;
                auVar41._12_4_ = auVar40._12_4_ + auVar20._12_4_;
                auVar20 = vshufpd_avx(auVar41,auVar41,1);
                auVar20 = vmaxss_avx(ZEXT816(0) << 0x20,
                                     ZEXT416((uint)(auVar104._0_4_ - (auVar41._0_4_ + auVar20._0_4_)
                                                   )));
                auVar20 = vsqrtss_avx(auVar20,auVar20);
                auVar19 = vinsertps_avx(auVar19,auVar20,0x30);
              }
              auVar8._4_4_ = fStack_204;
              auVar8._0_4_ = local_208;
              auVar8._8_4_ = fStack_200;
              auVar8._12_4_ = fStack_1fc;
              auVar108 = ZEXT1664(auVar8);
              pfVar1 = (float *)(lVar4 + 8 + uVar14 * 0x28);
              auVar22._0_4_ = local_208 * *pfVar1;
              auVar22._4_4_ = fStack_204 * pfVar1[1];
              auVar22._8_4_ = fStack_200 * pfVar1[2];
              auVar22._12_4_ = fStack_1fc * pfVar1[3];
              fVar53 = auVar19._0_4_;
              auVar56._0_4_ = fVar53 + fVar53;
              fVar83 = auVar19._4_4_;
              auVar56._4_4_ = fVar83 + fVar83;
              fVar63 = auVar19._8_4_;
              auVar56._8_4_ = fVar63 + fVar63;
              fVar65 = auVar19._12_4_;
              auVar56._12_4_ = fVar65 + fVar65;
              auVar20 = vshufps_avx(auVar56,auVar56,0xc9);
              auVar32 = vshufps_avx(auVar19,auVar19,0xd2);
              auVar31 = vshufps_avx(auVar56,auVar56,0xd2);
              auVar19 = vshufps_avx(auVar19,auVar19,0xff);
              auVar69._0_4_ = auVar32._0_4_ * auVar31._0_4_;
              auVar69._4_4_ = auVar32._4_4_ * auVar31._4_4_;
              auVar69._8_4_ = auVar32._8_4_ * auVar31._8_4_;
              auVar69._12_4_ = auVar32._12_4_ * auVar31._12_4_;
              auVar105._0_4_ = fVar53 * auVar56._0_4_;
              auVar105._4_4_ = fVar83 * auVar56._4_4_;
              auVar105._8_4_ = fVar63 * auVar56._8_4_;
              auVar105._12_4_ = fVar65 * auVar56._12_4_;
              auVar33 = vshufps_avx(auVar105,auVar105,0xc9);
              auVar33 = vsubps_avx(auVar91._0_16_,auVar33);
              auVar33 = vsubps_avx(auVar33,auVar69);
              auVar106._0_4_ = auVar19._0_4_ * auVar20._0_4_ + auVar56._0_4_ * auVar32._0_4_;
              auVar106._4_4_ = auVar19._4_4_ * auVar20._4_4_ + auVar56._4_4_ * auVar32._4_4_;
              auVar106._8_4_ = auVar19._8_4_ * auVar20._8_4_ + auVar56._8_4_ * auVar32._8_4_;
              auVar106._12_4_ = auVar19._12_4_ * auVar20._12_4_ + auVar56._12_4_ * auVar32._12_4_;
              auVar57._0_4_ = auVar19._0_4_ * auVar31._0_4_;
              auVar57._4_4_ = auVar19._4_4_ * auVar31._4_4_;
              auVar57._8_4_ = auVar19._8_4_ * auVar31._8_4_;
              auVar57._12_4_ = auVar19._12_4_ * auVar31._12_4_;
              auVar42._0_4_ = fVar53 * auVar20._0_4_;
              auVar42._4_4_ = fVar83 * auVar20._4_4_;
              auVar42._8_4_ = fVar63 * auVar20._8_4_;
              auVar42._12_4_ = fVar65 * auVar20._12_4_;
              auVar31 = vsubps_avx(auVar42,auVar57);
              local_1b8._4_4_ = (float)((ulonglong)local_1b8 >> 0x20);
              uStack_1b0._4_4_ = (float)((ulonglong)uStack_1b0 >> 0x20);
              uStack_1a8._4_4_ = (float)((ulonglong)uStack_1a8 >> 0x20);
              uStack_1a0._4_4_ = (float)((ulonglong)uStack_1a0 >> 0x20);
              auVar19 = vshufps_avx(auVar33,auVar33,0);
              auVar20 = vshufps_avx(auVar106,auVar106,0x55);
              auVar32 = vshufps_avx(auVar31,auVar31,0xaa);
              fVar53 = (float)local_198;
              fVar83 = (float)((ulonglong)local_198 >> 0x20);
              fVar63 = (float)uStack_190;
              fVar65 = (float)((ulonglong)uStack_190 >> 0x20);
              local_118 = (float)uStack_188 * auVar84._0_4_;
              fVar73 = (float)((ulonglong)uStack_188 >> 0x20);
              fStack_114 = fVar73 * auVar84._4_4_;
              fStack_110 = (float)uStack_180 * auVar84._8_4_;
              fVar81 = (float)((ulonglong)uStack_180 >> 0x20);
              fStack_10c = fVar81 * auVar84._12_4_;
              local_138._4_4_ =
                   auVar19._4_4_ * local_1b8._4_4_ + auVar20._4_4_ * uStack_1a8._4_4_ +
                   auVar32._4_4_ * fVar83 + fStack_114;
              local_138._0_4_ =
                   auVar19._0_4_ * (float)local_1b8 + auVar20._0_4_ * (float)uStack_1a8 +
                   auVar32._0_4_ * fVar53 + local_118;
              fStack_130 = auVar19._8_4_ * (float)uStack_1b0 + auVar20._8_4_ * (float)uStack_1a0 +
                           auVar32._8_4_ * fVar63 + fStack_110;
              fStack_12c = auVar19._12_4_ * uStack_1b0._4_4_ + auVar20._12_4_ * uStack_1a0._4_4_ +
                           auVar32._12_4_ * fVar65 + fStack_10c;
              auVar19 = vshufps_avx(auVar31,auVar31,0);
              auVar20 = vshufps_avx(auVar33,auVar33,0x55);
              auVar32 = vshufps_avx(auVar106,auVar106,0xaa);
              local_128._4_4_ =
                   auVar19._4_4_ * local_1b8._4_4_ + auVar20._4_4_ * uStack_1a8._4_4_ +
                   auVar32._4_4_ * fVar83 + fStack_114;
              local_128._0_4_ =
                   auVar19._0_4_ * (float)local_1b8 + auVar20._0_4_ * (float)uStack_1a8 +
                   auVar32._0_4_ * fVar53 + local_118;
              fStack_120 = auVar19._8_4_ * (float)uStack_1b0 + auVar20._8_4_ * (float)uStack_1a0 +
                           auVar32._8_4_ * fVar63 + fStack_110;
              fStack_11c = auVar19._12_4_ * uStack_1b0._4_4_ + auVar20._12_4_ * uStack_1a0._4_4_ +
                           auVar32._12_4_ * fVar65 + fStack_10c;
              auVar19 = vshufps_avx(auVar106,auVar106,0);
              auVar20 = vshufps_avx(auVar31,auVar31,0x55);
              auVar32 = vshufps_avx(auVar33,auVar33,0xaa);
              local_118 = local_118 +
                          auVar19._0_4_ * (float)local_1b8 + auVar20._0_4_ * (float)uStack_1a8 +
                          auVar32._0_4_ * fVar53;
              fStack_114 = fStack_114 +
                           auVar19._4_4_ * local_1b8._4_4_ + auVar20._4_4_ * uStack_1a8._4_4_ +
                           auVar32._4_4_ * fVar83;
              fStack_110 = fStack_110 +
                           auVar19._8_4_ * (float)uStack_1b0 + auVar20._8_4_ * (float)uStack_1a0 +
                           auVar32._8_4_ * fVar63;
              fStack_10c = fStack_10c +
                           auVar19._12_4_ * uStack_1b0._4_4_ + auVar20._12_4_ * uStack_1a0._4_4_ +
                           auVar32._12_4_ * fVar65;
              auVar19 = vshufps_avx(auVar22,auVar22,0);
              auVar20 = vshufps_avx(auVar22,auVar22,0x55);
              auVar32 = vshufps_avx(auVar22,auVar22,0xaa);
              local_108._0_4_ =
                   (float)local_1b8 * auVar19._0_4_ + auVar20._0_4_ * (float)uStack_1a8 +
                   auVar32._0_4_ * fVar53 + (float)uStack_188;
              local_108._4_4_ =
                   local_1b8._4_4_ * auVar19._4_4_ + auVar20._4_4_ * uStack_1a8._4_4_ +
                   auVar32._4_4_ * fVar83 + fVar73;
              local_108._8_4_ =
                   (float)uStack_1b0 * auVar19._8_4_ + auVar20._8_4_ * (float)uStack_1a0 +
                   auVar32._8_4_ * fVar63 + (float)uStack_180;
              local_108._12_4_ =
                   uStack_1b0._4_4_ * auVar19._12_4_ + auVar20._12_4_ * uStack_1a0._4_4_ +
                   auVar32._12_4_ * fVar65 + fVar81;
              if (*(char *)((longlong)plVar2 + 0x24) == '\0') {
                auVar19 = vshufps_avx(auVar8,auVar8,9);
                auVar19 = vsubps_avx(auVar8,auVar19);
                auVar23._0_4_ = auVar19._0_4_ * auVar19._0_4_;
                auVar23._4_4_ = auVar19._4_4_ * auVar19._4_4_;
                auVar23._8_4_ = auVar19._8_4_ * auVar19._8_4_;
                auVar23._12_4_ = auVar19._12_4_ * auVar19._12_4_;
                auVar19 = vinsertps_avx(auVar23,auVar23,0x4c);
                auVar24._0_4_ = auVar23._0_4_ + auVar19._0_4_;
                auVar24._4_4_ = auVar23._4_4_ + auVar19._4_4_;
                auVar24._8_4_ = auVar23._8_4_ + auVar19._8_4_;
                auVar24._12_4_ = auVar23._12_4_ + auVar19._12_4_;
                auVar19 = vshufpd_avx(auVar24,auVar24,1);
                if (1e-08 < auVar24._0_4_ + auVar19._0_4_) {
                  auVar19 = *(undefined1 (*) [16])((longlong)plVar2 + 0x14);
                  auVar43._0_4_ = auVar19._0_4_ * auVar19._0_4_;
                  auVar43._4_4_ = auVar19._4_4_ * auVar19._4_4_;
                  auVar43._8_4_ = auVar19._8_4_ * auVar19._8_4_;
                  auVar43._12_4_ = auVar19._12_4_ * auVar19._12_4_;
                  auVar20 = vinsertps_avx(auVar43,auVar43,0x4c);
                  auVar44._0_4_ = auVar43._0_4_ + auVar20._0_4_;
                  auVar44._4_4_ = auVar43._4_4_ + auVar20._4_4_;
                  auVar44._8_4_ = auVar43._8_4_ + auVar20._8_4_;
                  auVar44._12_4_ = auVar43._12_4_ + auVar20._12_4_;
                  auVar20 = vshufpd_avx(auVar44,auVar44,1);
                  auVar20 = vmaxss_avx(ZEXT816(0) << 0x20,
                                       ZEXT416((uint)(auVar104._0_4_ -
                                                     (auVar44._0_4_ + auVar20._0_4_))));
                  auVar31 = vsqrtss_avx(auVar20,auVar20);
                  auVar19 = vinsertps_avx(auVar19,auVar31,0x30);
                  fVar53 = auVar19._0_4_;
                  auVar58._0_4_ = fVar53 + fVar53;
                  fVar83 = auVar19._4_4_;
                  auVar58._4_4_ = fVar83 + fVar83;
                  fVar63 = auVar19._8_4_;
                  auVar58._8_4_ = fVar63 + fVar63;
                  fVar65 = auVar19._12_4_;
                  auVar58._12_4_ = fVar65 + fVar65;
                  auVar20 = vshufps_avx(auVar58,auVar58,0xc9);
                  auVar19 = vshufps_avx(auVar19,auVar19,0xd2);
                  auVar32 = vshufps_avx(auVar58,auVar58,0xd2);
                  auVar31 = vshufps_avx(auVar31,auVar31,0);
                  auVar79._0_4_ = auVar19._0_4_ * auVar32._0_4_;
                  auVar79._4_4_ = auVar19._4_4_ * auVar32._4_4_;
                  auVar79._8_4_ = auVar19._8_4_ * auVar32._8_4_;
                  auVar79._12_4_ = auVar19._12_4_ * auVar32._12_4_;
                  auVar86._0_4_ = fVar53 * auVar58._0_4_;
                  auVar86._4_4_ = fVar83 * auVar58._4_4_;
                  auVar86._8_4_ = fVar63 * auVar58._8_4_;
                  auVar86._12_4_ = fVar65 * auVar58._12_4_;
                  auVar33 = vshufps_avx(auVar86,auVar86,0xc9);
                  auVar33 = vsubps_avx(auVar91._0_16_,auVar33);
                  auVar35 = vsubps_avx(auVar33,auVar79);
                  auVar59._0_4_ = auVar31._0_4_ * auVar20._0_4_ + auVar58._0_4_ * auVar19._0_4_;
                  auVar59._4_4_ = auVar31._4_4_ * auVar20._4_4_ + auVar58._4_4_ * auVar19._4_4_;
                  auVar59._8_4_ = auVar31._8_4_ * auVar20._8_4_ + auVar58._8_4_ * auVar19._8_4_;
                  auVar59._12_4_ = auVar31._12_4_ * auVar20._12_4_ + auVar58._12_4_ * auVar19._12_4_
                  ;
                  auVar45._0_4_ = auVar31._0_4_ * auVar32._0_4_;
                  auVar45._4_4_ = auVar31._4_4_ * auVar32._4_4_;
                  auVar45._8_4_ = auVar31._8_4_ * auVar32._8_4_;
                  auVar45._12_4_ = auVar31._12_4_ * auVar32._12_4_;
                  auVar25._0_4_ = fVar53 * auVar20._0_4_;
                  auVar25._4_4_ = fVar83 * auVar20._4_4_;
                  auVar25._8_4_ = fVar63 * auVar20._8_4_;
                  auVar25._12_4_ = fVar65 * auVar20._12_4_;
                  auVar36 = vsubps_avx(auVar25,auVar45);
                  auVar19 = vblendps_avx(auVar36,auVar84._0_16_,8);
                  auVar20 = vblendps_avx(auVar35,auVar59,2);
                  auVar19 = vblendps_avx(auVar19,auVar20,3);
                  auVar33 = vinsertps_avx(auVar36,auVar35,0x58);
                  auVar32 = vblendps_avx(auVar33,auVar59,4);
                  auVar66 = vinsertps_avx(auVar36,auVar59,8);
                  auVar31 = vblendps_avx(auVar66,auVar35,4);
                  auVar34 = vinsertps_avx(auVar8,auVar104._0_16_,0x30);
                  fVar53 = auVar34._0_4_;
                  auVar96._0_4_ = fVar53 * auVar31._0_4_;
                  fVar83 = auVar34._4_4_;
                  auVar96._4_4_ = fVar83 * auVar31._4_4_;
                  fVar63 = auVar34._8_4_;
                  auVar96._8_4_ = fVar63 * auVar31._8_4_;
                  fVar65 = auVar34._12_4_;
                  auVar96._12_4_ = fVar65 * auVar31._12_4_;
                  auVar72._0_4_ = fVar53 * auVar32._0_4_;
                  auVar72._4_4_ = fVar83 * auVar32._4_4_;
                  auVar72._8_4_ = fVar63 * auVar32._8_4_;
                  auVar72._12_4_ = fVar65 * auVar32._12_4_;
                  auVar46._0_4_ = fVar53 * auVar19._0_4_;
                  auVar46._4_4_ = fVar83 * auVar19._4_4_;
                  auVar46._8_4_ = fVar63 * auVar19._8_4_;
                  auVar46._12_4_ = fVar65 * auVar19._12_4_;
                  auVar19 = vmovlhps_avx(auVar20,auVar33);
                  auVar33 = vunpckhpd_avx(auVar36,auVar59);
                  auVar31 = vunpckhpd_avx(auVar35,auVar84._0_16_);
                  auVar60._8_8_ = 0;
                  auVar60._0_8_ = auVar66._0_8_;
                  auVar32 = vshufps_avx(auVar19,auVar60,0x88);
                  auVar20 = vshufps_avx(auVar19,auVar60,0xdd);
                  auVar31 = vshufps_avx(auVar33,auVar31,0x88);
                  auVar19 = vmovshdup_avx(auVar46);
                  fVar53 = auVar20._0_4_;
                  fVar83 = auVar20._4_4_;
                  fVar63 = auVar20._8_4_;
                  fVar65 = auVar20._12_4_;
                  auVar20 = vshufpd_avx(auVar46,auVar46,1);
                  auVar26._0_4_ =
                       auVar33._0_4_ * auVar20._0_4_ +
                       auVar46._0_4_ * auVar35._0_4_ + fVar53 * auVar19._0_4_;
                  auVar26._4_4_ =
                       auVar33._4_4_ * auVar20._4_4_ +
                       auVar46._4_4_ * auVar35._4_4_ + fVar83 * auVar19._4_4_;
                  auVar26._8_4_ =
                       auVar33._8_4_ * auVar20._8_4_ +
                       auVar46._8_4_ * auVar35._8_4_ + fVar63 * auVar19._8_4_;
                  auVar26._12_4_ =
                       auVar33._12_4_ * auVar20._12_4_ +
                       auVar46._12_4_ * auVar35._12_4_ + fVar65 * auVar19._12_4_;
                  auVar19 = vmovsldup_avx(auVar72);
                  auVar20 = vshufps_avx(auVar72,auVar72,0xaa);
                  auVar47._0_4_ =
                       auVar31._0_4_ * auVar20._0_4_ +
                       auVar32._0_4_ * auVar19._0_4_ + auVar72._0_4_ * fVar53;
                  auVar47._4_4_ =
                       auVar31._4_4_ * auVar20._4_4_ +
                       auVar32._4_4_ * auVar19._4_4_ + auVar72._4_4_ * fVar83;
                  auVar47._8_4_ =
                       auVar31._8_4_ * auVar20._8_4_ +
                       auVar32._8_4_ * auVar19._8_4_ + auVar72._8_4_ * fVar63;
                  auVar47._12_4_ =
                       auVar31._12_4_ * auVar20._12_4_ +
                       auVar32._12_4_ * auVar19._12_4_ + auVar72._12_4_ * fVar65;
                  auVar19 = vblendps_avx(auVar26,auVar47,2);
                  auVar20 = vshufps_avx(auVar96,auVar96,0x55);
                  auVar48._0_4_ =
                       auVar96._0_4_ * auVar31._0_4_ +
                       auVar32._0_4_ * auVar96._0_4_ + fVar53 * auVar20._0_4_;
                  auVar48._4_4_ =
                       auVar96._4_4_ * auVar31._4_4_ +
                       auVar32._4_4_ * auVar96._4_4_ + fVar83 * auVar20._4_4_;
                  auVar48._8_4_ =
                       auVar96._8_4_ * auVar31._8_4_ +
                       auVar32._8_4_ * auVar96._0_4_ + fVar63 * auVar20._8_4_;
                  auVar48._12_4_ =
                       auVar96._12_4_ * auVar31._12_4_ +
                       auVar32._12_4_ * auVar96._4_4_ + fVar65 * auVar20._12_4_;
                  auVar19 = vshufps_avx(auVar19,auVar48,0xa4);
                  auVar108 = ZEXT1664(auVar19);
                }
              }
              auVar80 = ZEXT1664(CONCAT412(fStack_20c,
                                           CONCAT48(fStack_210,CONCAT44(fStack_214,local_218))));
              lVar4 = *plVar2;
              local_2f8 = &local_270;
              cVar12 = (**(code **)(*plVar11 + 8))(plVar11,plVar10,&local_158,lVar4);
              if (cVar12 != '\0') {
                _local_268 = auVar108._0_16_;
                local_248 = auVar80._0_16_;
                local_2e0 = &local_270;
                local_2e8 = &local_158;
                local_2f0 = local_138;
                local_2f8 = (uint *)&local_1f8;
                local_2d8 = lVar16;
                local_2d0 = uVar15;
                local_2c8 = plVar11;
                (*(code *)(&DAT_1416badb0)
                          [(ulonglong)*(byte *)((longlong)plVar10 + 0x19) * 0x22 +
                           (ulonglong)*(byte *)(lVar4 + 0x19)])(plVar10,lVar4,local_248,local_268);
              }
              uVar14 = local_230;
              if (*(float *)(local_230 + 8) <= -3.4028235e+38) break;
            }
            uVar14 = 0;
            if (uVar13 <= iVar9 + 1U) break;
            uVar14 = (ulonglong)(iVar9 + 1);
            local_288 = auVar107._0_16_;
            iVar3 = *(int *)(local_288 + uVar14 * 4);
            lVar16 = local_238;
            uVar15 = local_230;
            plVar10 = local_228;
            plVar11 = local_140;
          } while( true );
        }
      }
      uVar15 = local_2a0 + 1;
      iVar17 = iVar17 + 4;
    } while (uVar15 != local_2a8);
  }
  auVar7._8_8_ = uStack_290;
  auVar7._0_8_ = local_298;
  if (local_2b8 != (undefined1 (*) [16])0x0) {
    uVar15 = rdtsc();
    auVar20 = vpinsrq_avx(auVar7,uVar15 & 0xffffffff00000000 |
                                 CONCAT44((int)(uVar14 >> 0x20),(int)uVar15),1);
    auVar19 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b754),0));
    *local_2b8 = auVar19;
    auVar19 = vmovntdq_avx(auVar20);
    local_2b8[1] = auVar19;
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_318)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_318);
}

