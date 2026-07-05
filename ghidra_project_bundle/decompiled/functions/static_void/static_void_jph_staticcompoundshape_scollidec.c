/**
 * Function: static_void_jph_staticcompoundshape_scollidec
 * Address:  1402ebfe0
 * Signature: undefined static_void_jph_staticcompoundshape_scollidec(void)
 * Body size: 2826 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_staticcompoundshape_scollidec
               (longlong param_1,longlong *param_2,undefined8 *param_3,float *param_4,
               undefined1 (*param_5) [16],float *param_6,undefined8 *param_7,undefined8 *param_8,
               longlong param_9,longlong param_10,longlong *param_11)

{
  longlong *plVar1;
  float *pfVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong *plVar10;
  longlong *plVar11;
  char cVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  float fVar18;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  float fVar46;
  float fVar47;
  undefined1 auVar30 [16];
  float fVar48;
  undefined1 auVar31 [16];
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
  float fVar49;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar80 [64];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar87 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar88 [64];
  float fVar92;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [64];
  float fVar97;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar98 [16];
  float fVar102;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar103 [64];
  undefined1 auVar107 [16];
  undefined1 auVar108 [64];
  undefined1 in_ZMM15 [64];
  undefined1 auVar109 [64];
  undefined1 auStack_4d8 [32];
  float *local_4b8;
  undefined8 *local_4b0;
  uint *local_4a8;
  undefined8 *local_4a0;
  longlong local_498;
  longlong local_490;
  longlong *local_488;
  undefined1 (*local_480) [16];
  ulonglong local_478;
  undefined8 uStack_470;
  uint local_460;
  int local_45c;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  longlong local_438;
  longlong local_430;
  longlong *local_428;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined8 local_358;
  undefined8 local_350;
  int local_348;
  longlong *local_340;
  undefined1 local_338 [4];
  undefined1 auStack_334 [12];
  undefined1 local_328 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  ulonglong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM15._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_4d8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar13 == 0) {
    local_480 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar17 = *(uint *)(lVar13 + 0x200020);
    if ((ulonglong)uVar17 < 0x10000) {
      *(uint *)(lVar13 + 0x200020) = uVar17 + 1;
      local_480 = (undefined1 (*) [16])(lVar13 + (ulonglong)uVar17 * 0x20 + 0x20);
      uVar16 = rdtsc();
      local_478 = uVar16 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)local_480 >> 0x20),(int)uVar16);
      uStack_470 = 0;
    }
    else {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      local_480 = (undefined1 (*) [16])0x0;
    }
  }
  fVar81 = *param_4;
  fVar83 = param_4[1];
  fVar84 = param_4[2];
  fVar85 = param_4[3];
  local_438 = param_9;
  local_430 = param_10;
  local_418 = (float)*param_3;
  fStack_414 = (float)((ulonglong)*param_3 >> 0x20);
  fStack_410 = (float)param_3[1];
  fStack_40c = (float)((ulonglong)param_3[1] >> 0x20);
  local_3f8 = *(undefined8 *)*param_5;
  uStack_3f0 = *(undefined8 *)(*param_5 + 8);
  uStack_3e8 = *(undefined8 *)param_5[1];
  uStack_3e0 = *(undefined8 *)(param_5[1] + 8);
  local_3d8 = *(undefined8 *)param_5[2];
  uStack_3d0 = *(undefined8 *)(param_5[2] + 8);
  uStack_3c8 = *(undefined8 *)param_5[3];
  uStack_3c0 = *(undefined8 *)(param_5[3] + 8);
  local_3b8 = *(undefined8 *)param_6;
  uStack_3b0 = *(undefined8 *)(param_6 + 2);
  uStack_3a8 = *(undefined8 *)(param_6 + 4);
  uStack_3a0 = *(undefined8 *)(param_6 + 6);
  local_398 = *(undefined8 *)(param_6 + 8);
  uStack_390 = *(undefined8 *)(param_6 + 10);
  uStack_388 = *(undefined8 *)(param_6 + 0xc);
  uStack_380 = *(undefined8 *)(param_6 + 0xe);
  local_358 = *param_7;
  local_350 = *param_8;
  local_348 = 0x20 - LZCOUNT(*(int *)(param_1 + 0x50) + -1);
  local_340 = param_11;
  auVar87 = vmovlhps_avx(*param_5,param_5[1]);
  auVar31 = vunpckhpd_avx(*param_5,param_5[1]);
  auVar19 = vpunpckhqdq_avx(param_5[2],(undefined1  [16])0x0);
  auVar19 = vshufps_avx(auVar31,auVar19,0x88);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = SUB168(param_5[2],0);
  auVar31 = vshufps_avx(auVar87,auVar30,0x88);
  auVar87 = vshufps_avx(auVar87,auVar30,0xdd);
  fVar82 = *(float *)param_5[3];
  fVar49 = auVar31._0_4_;
  fVar59 = auVar31._4_4_;
  fVar61 = auVar31._8_4_;
  fVar63 = auVar31._12_4_;
  fVar106 = *(float *)(param_5[3] + 4);
  fVar29 = auVar87._0_4_;
  fVar46 = auVar87._4_4_;
  fVar47 = auVar87._8_4_;
  fVar48 = auVar87._12_4_;
  fVar60 = *(float *)(param_5[3] + 8);
  fVar18 = auVar19._0_4_;
  fVar26 = auVar19._4_4_;
  fVar27 = auVar19._8_4_;
  fVar28 = auVar19._12_4_;
  auVar64._0_4_ = fVar18 * fVar60 + fVar49 * fVar82 + fVar29 * fVar106;
  auVar64._4_4_ = fVar26 * fVar60 + fVar59 * fVar82 + fVar46 * fVar106;
  auVar64._8_4_ = fVar27 * fVar60 + fVar61 * fVar82 + fVar47 * fVar106;
  auVar64._12_4_ = fVar28 * fVar60 + fVar63 * fVar82 + fVar48 * fVar106;
  auVar87 = vsubps_avx((undefined1  [16])0x0,auVar64);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(0x3f800000),0x30);
  fVar82 = *param_6;
  fVar106 = param_6[1];
  fVar60 = param_6[2];
  fVar62 = param_6[3];
  fVar102 = auVar87._0_4_;
  fVar104 = auVar87._4_4_;
  fVar105 = auVar87._8_4_;
  fVar6 = auVar87._12_4_;
  fVar86 = fVar18 * fVar60 + fVar49 * fVar82 + fVar29 * fVar106 + fVar62 * fVar102;
  fVar89 = fVar26 * fVar60 + fVar59 * fVar82 + fVar46 * fVar106 + fVar62 * fVar104;
  fVar90 = fVar27 * fVar60 + fVar61 * fVar82 + fVar47 * fVar106 + fVar62 * fVar105;
  fVar91 = fVar28 * fVar60 + fVar63 * fVar82 + fVar48 * fVar106 + fVar62 * fVar6;
  fVar82 = param_6[4];
  fVar106 = param_6[5];
  fVar60 = param_6[6];
  fVar62 = param_6[7];
  fVar92 = fVar18 * fVar60 + fVar49 * fVar82 + fVar29 * fVar106 + fVar62 * fVar102;
  fVar94 = fVar26 * fVar60 + fVar59 * fVar82 + fVar46 * fVar106 + fVar62 * fVar104;
  fVar95 = fVar27 * fVar60 + fVar61 * fVar82 + fVar47 * fVar106 + fVar62 * fVar105;
  fVar96 = fVar28 * fVar60 + fVar63 * fVar82 + fVar48 * fVar106 + fVar62 * fVar6;
  fVar82 = param_6[8];
  fVar106 = param_6[9];
  fVar60 = param_6[10];
  fVar62 = param_6[0xb];
  fVar97 = fVar62 * fVar102 + fVar18 * fVar60 + fVar49 * fVar82 + fVar29 * fVar106;
  fVar99 = fVar62 * fVar104 + fVar26 * fVar60 + fVar59 * fVar82 + fVar46 * fVar106;
  fVar100 = fVar62 * fVar105 + fVar27 * fVar60 + fVar61 * fVar82 + fVar47 * fVar106;
  fVar101 = fVar62 * fVar6 + fVar28 * fVar60 + fVar63 * fVar82 + fVar48 * fVar106;
  fVar82 = param_6[0xc];
  fVar106 = param_6[0xd];
  fVar60 = param_6[0xe];
  fVar62 = param_6[0xf];
  fVar102 = fVar62 * fVar102 + fVar18 * fVar60 + fVar49 * fVar82 + fVar29 * fVar106;
  fVar104 = fVar62 * fVar104 + fVar26 * fVar60 + fVar59 * fVar82 + fVar46 * fVar106;
  fVar105 = fVar62 * fVar105 + fVar27 * fVar60 + fVar61 * fVar82 + fVar47 * fVar106;
  fVar106 = fVar62 * fVar6 + fVar28 * fVar60 + fVar63 * fVar82 + fVar48 * fVar106;
  auVar80 = ZEXT2464(ZEXT1624((undefined1  [16])0x0));
  local_428 = param_2;
  local_408 = fVar81;
  fStack_404 = fVar83;
  fStack_400 = fVar84;
  fStack_3fc = fVar85;
  (**(code **)(*param_2 + 0x18))(param_2,&local_138);
  auVar19._0_4_ = fVar81 * local_128;
  auVar19._4_4_ = fVar83 * fStack_124;
  auVar19._8_4_ = fVar84 * fStack_120;
  auVar19._12_4_ = fVar85 * fStack_11c;
  auVar31._0_4_ = fVar81 * local_138;
  auVar31._4_4_ = fVar83 * fStack_134;
  auVar31._8_4_ = fVar84 * fStack_130;
  auVar31._12_4_ = fVar85 * fStack_12c;
  local_328 = vmaxps_avx(auVar31,auVar19);
  auVar30 = vminps_avx(auVar31,auVar19);
  auVar87 = vshufps_avx(auVar30,auVar30,0);
  auVar20._0_4_ = fVar86 * auVar87._0_4_;
  auVar20._4_4_ = fVar89 * auVar87._4_4_;
  auVar20._8_4_ = fVar90 * auVar87._8_4_;
  auVar20._12_4_ = fVar91 * auVar87._12_4_;
  auVar87 = vshufps_avx(local_328,local_328,0);
  auVar32._0_4_ = fVar86 * auVar87._0_4_;
  auVar32._4_4_ = fVar89 * auVar87._4_4_;
  auVar32._8_4_ = fVar90 * auVar87._8_4_;
  auVar32._12_4_ = fVar91 * auVar87._12_4_;
  auVar31 = vminps_avx(auVar20,auVar32);
  auVar87 = vmaxps_avx(auVar20,auVar32);
  auStack_334._0_4_ = auVar30._4_4_;
  auVar33._0_4_ = fVar92 * (float)auStack_334._0_4_;
  auVar33._4_4_ = fVar94 * (float)auStack_334._0_4_;
  auVar33._8_4_ = fVar95 * (float)auStack_334._0_4_;
  auVar33._12_4_ = fVar96 * (float)auStack_334._0_4_;
  auVar19 = vshufps_avx(local_328,local_328,0x55);
  auVar69._0_4_ = fVar92 * auVar19._0_4_;
  auVar69._4_4_ = fVar94 * auVar19._4_4_;
  auVar69._8_4_ = fVar95 * auVar19._8_4_;
  auVar69._12_4_ = fVar96 * auVar19._12_4_;
  auVar20 = vminps_avx(auVar33,auVar69);
  auVar19 = vmaxps_avx(auVar33,auVar69);
  auStack_334._4_4_ = auVar30._8_4_;
  auVar34._0_4_ = fVar97 * (float)auStack_334._4_4_;
  auVar34._4_4_ = fVar99 * (float)auStack_334._4_4_;
  auVar34._8_4_ = fVar100 * (float)auStack_334._4_4_;
  auVar34._12_4_ = fVar101 * (float)auStack_334._4_4_;
  auVar32 = vshufps_avx(local_328,local_328,0xaa);
  auVar50._0_4_ = fVar97 * auVar32._0_4_;
  auVar50._4_4_ = fVar99 * auVar32._4_4_;
  auVar50._8_4_ = fVar100 * auVar32._8_4_;
  auVar50._12_4_ = fVar101 * auVar32._12_4_;
  auVar32 = vminps_avx(auVar34,auVar50);
  auVar65._0_4_ = fVar102 + auVar31._0_4_ + auVar20._0_4_ + auVar32._0_4_;
  auVar65._4_4_ = fVar104 + auVar31._4_4_ + auVar20._4_4_ + auVar32._4_4_;
  auVar65._8_4_ = fVar105 + auVar31._8_4_ + auVar20._8_4_ + auVar32._8_4_;
  auVar65._12_4_ = fVar106 + auVar31._12_4_ + auVar20._12_4_ + auVar32._12_4_;
  auVar31 = vmaxps_avx(auVar34,auVar50);
  fVar82 = *(float *)(param_9 + 0x20);
  auVar35._4_4_ = fVar82;
  auVar35._0_4_ = fVar82;
  auVar35._8_4_ = fVar82;
  auVar35._12_4_ = fVar82;
  local_378 = vsubps_avx(auVar65,auVar35);
  local_368._0_4_ = fVar102 + auVar87._0_4_ + auVar19._0_4_ + auVar31._0_4_ + fVar82;
  local_368._4_4_ = fVar104 + auVar87._4_4_ + auVar19._4_4_ + auVar31._4_4_ + fVar82;
  local_368._8_4_ = fVar105 + auVar87._8_4_ + auVar19._8_4_ + auVar31._8_4_ + fVar82;
  local_368._12_4_ = fVar106 + auVar87._12_4_ + auVar19._12_4_ + auVar31._12_4_ + fVar82;
  auStack_334 = auVar30._4_12_;
  auVar87._12_4_ = 0;
  auVar87._0_12_ = auStack_334;
  _local_338 = auVar87 << 0x20;
  fVar82 = -3.4028235e+38;
  auVar88 = ZEXT1664(_DAT_140de0210);
  auVar93 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
  auVar103 = ZEXT464(0x3f800000);
  uVar17 = 0;
  do {
    plVar11 = local_340;
    plVar10 = local_428;
    lVar15 = local_430;
    lVar13 = local_438;
    uVar3 = *(uint *)(local_338 + (ulonglong)uVar17 * 4);
    if ((ulonglong)uVar3 != 0x7fffffff) {
      if ((int)uVar3 < 0) {
        uVar16 = (ulonglong)(uVar3 & 0x7fffffff);
        lVar4 = *(longlong *)(param_1 + 0x60);
        plVar1 = (longlong *)(lVar4 + uVar16 * 0x28);
        auVar87 = auVar88._0_16_;
        if (*(char *)(lVar4 + 0x24 + uVar16 * 0x28) == '\0') {
          auVar87 = *(undefined1 (*) [16])((longlong)plVar1 + 0x14);
          auVar37._0_4_ = auVar87._0_4_ * auVar87._0_4_;
          auVar37._4_4_ = auVar87._4_4_ * auVar87._4_4_;
          auVar37._8_4_ = auVar87._8_4_ * auVar87._8_4_;
          auVar37._12_4_ = auVar87._12_4_ * auVar87._12_4_;
          auVar19 = vinsertps_avx(auVar37,auVar37,0x4c);
          auVar38._0_4_ = auVar37._0_4_ + auVar19._0_4_;
          auVar38._4_4_ = auVar37._4_4_ + auVar19._4_4_;
          auVar38._8_4_ = auVar37._8_4_ + auVar19._8_4_;
          auVar38._12_4_ = auVar37._12_4_ + auVar19._12_4_;
          auVar19 = vshufpd_avx(auVar38,auVar38,1);
          auVar19 = vmaxss_avx(ZEXT816(0) << 0x20,
                               ZEXT416((uint)(auVar103._0_4_ - (auVar38._0_4_ + auVar19._0_4_))));
          auVar19 = vsqrtss_avx(auVar19,auVar19);
          auVar87 = vinsertps_avx(auVar87,auVar19,0x30);
        }
        pfVar2 = (float *)(lVar4 + 8 + uVar16 * 0x28);
        auVar21._0_4_ = local_418 * *pfVar2;
        auVar21._4_4_ = fStack_414 * pfVar2[1];
        auVar21._8_4_ = fStack_410 * pfVar2[2];
        auVar21._12_4_ = fStack_40c * pfVar2[3];
        fVar106 = auVar87._0_4_;
        auVar54._0_4_ = fVar106 + fVar106;
        fVar60 = auVar87._4_4_;
        auVar54._4_4_ = fVar60 + fVar60;
        fVar62 = auVar87._8_4_;
        auVar54._8_4_ = fVar62 + fVar62;
        fVar102 = auVar87._12_4_;
        auVar54._12_4_ = fVar102 + fVar102;
        auVar19 = vshufps_avx(auVar54,auVar54,0xc9);
        auVar31 = vshufps_avx(auVar87,auVar87,0xd2);
        auVar30 = vshufps_avx(auVar54,auVar54,0xd2);
        auVar87 = vshufps_avx(auVar87,auVar87,0xff);
        auVar68._0_4_ = auVar30._0_4_ * auVar31._0_4_;
        auVar68._4_4_ = auVar30._4_4_ * auVar31._4_4_;
        auVar68._8_4_ = auVar30._8_4_ * auVar31._8_4_;
        auVar68._12_4_ = auVar30._12_4_ * auVar31._12_4_;
        auVar77._0_4_ = fVar106 * auVar54._0_4_;
        auVar77._4_4_ = fVar60 * auVar54._4_4_;
        auVar77._8_4_ = fVar62 * auVar54._8_4_;
        auVar77._12_4_ = fVar102 * auVar54._12_4_;
        auVar20 = vshufps_avx(auVar77,auVar77,0xc9);
        auVar20 = vsubps_avx(auVar93._0_16_,auVar20);
        auVar20 = vsubps_avx(auVar20,auVar68);
        auVar78._0_4_ = auVar54._0_4_ * auVar31._0_4_ + auVar87._0_4_ * auVar19._0_4_;
        auVar78._4_4_ = auVar54._4_4_ * auVar31._4_4_ + auVar87._4_4_ * auVar19._4_4_;
        auVar78._8_4_ = auVar54._8_4_ * auVar31._8_4_ + auVar87._8_4_ * auVar19._8_4_;
        auVar78._12_4_ = auVar54._12_4_ * auVar31._12_4_ + auVar87._12_4_ * auVar19._12_4_;
        auVar55._0_4_ = auVar87._0_4_ * auVar30._0_4_;
        auVar55._4_4_ = auVar87._4_4_ * auVar30._4_4_;
        auVar55._8_4_ = auVar87._8_4_ * auVar30._8_4_;
        auVar55._12_4_ = auVar87._12_4_ * auVar30._12_4_;
        auVar39._0_4_ = fVar106 * auVar19._0_4_;
        auVar39._4_4_ = fVar60 * auVar19._4_4_;
        auVar39._8_4_ = fVar62 * auVar19._8_4_;
        auVar39._12_4_ = fVar102 * auVar19._12_4_;
        auVar30 = vsubps_avx(auVar39,auVar55);
        auVar87 = vshufps_avx(auVar20,auVar20,0);
        auVar19 = vshufps_avx(auVar78,auVar78,0x55);
        auVar31 = vshufps_avx(auVar30,auVar30,0xaa);
        fVar106 = (float)local_3d8;
        fVar60 = (float)((ulonglong)local_3d8 >> 0x20);
        fVar62 = (float)uStack_3d0;
        fVar102 = (float)((ulonglong)uStack_3d0 >> 0x20);
        local_118 = (float)uStack_3c8 * auVar80._0_4_;
        fVar104 = (float)((ulonglong)uStack_3c8 >> 0x20);
        fStack_114 = fVar104 * auVar80._4_4_;
        fStack_110 = (float)uStack_3c0 * auVar80._8_4_;
        fVar105 = (float)((ulonglong)uStack_3c0 >> 0x20);
        fStack_10c = fVar105 * auVar80._12_4_;
        local_138 = auVar87._0_4_ * (float)local_3f8 + auVar19._0_4_ * (float)uStack_3e8 +
                    auVar31._0_4_ * fVar106 + local_118;
        fStack_134 = auVar87._4_4_ * local_3f8._4_4_ + auVar19._4_4_ * uStack_3e8._4_4_ +
                     auVar31._4_4_ * fVar60 + fStack_114;
        fStack_130 = auVar87._8_4_ * (float)uStack_3f0 + auVar19._8_4_ * (float)uStack_3e0 +
                     auVar31._8_4_ * fVar62 + fStack_110;
        fStack_12c = auVar87._12_4_ * uStack_3f0._4_4_ + auVar19._12_4_ * uStack_3e0._4_4_ +
                     auVar31._12_4_ * fVar102 + fStack_10c;
        auVar87 = vshufps_avx(auVar30,auVar30,0);
        auVar19 = vshufps_avx(auVar20,auVar20,0x55);
        auVar31 = vshufps_avx(auVar78,auVar78,0xaa);
        local_128 = auVar87._0_4_ * (float)local_3f8 + auVar19._0_4_ * (float)uStack_3e8 +
                    auVar31._0_4_ * fVar106 + local_118;
        fStack_124 = auVar87._4_4_ * local_3f8._4_4_ + auVar19._4_4_ * uStack_3e8._4_4_ +
                     auVar31._4_4_ * fVar60 + fStack_114;
        fStack_120 = auVar87._8_4_ * (float)uStack_3f0 + auVar19._8_4_ * (float)uStack_3e0 +
                     auVar31._8_4_ * fVar62 + fStack_110;
        fStack_11c = auVar87._12_4_ * uStack_3f0._4_4_ + auVar19._12_4_ * uStack_3e0._4_4_ +
                     auVar31._12_4_ * fVar102 + fStack_10c;
        auVar87 = vshufps_avx(auVar78,auVar78,0);
        auVar19 = vshufps_avx(auVar30,auVar30,0x55);
        auVar31 = vshufps_avx(auVar20,auVar20,0xaa);
        local_118 = local_118 +
                    auVar19._0_4_ * (float)uStack_3e8 + (float)local_3f8 * auVar87._0_4_ +
                    auVar31._0_4_ * fVar106;
        fStack_114 = fStack_114 +
                     auVar19._4_4_ * uStack_3e8._4_4_ + local_3f8._4_4_ * auVar87._4_4_ +
                     auVar31._4_4_ * fVar60;
        fStack_110 = fStack_110 +
                     auVar19._8_4_ * (float)uStack_3e0 + (float)uStack_3f0 * auVar87._8_4_ +
                     auVar31._8_4_ * fVar62;
        fStack_10c = fStack_10c +
                     auVar19._12_4_ * uStack_3e0._4_4_ + uStack_3f0._4_4_ * auVar87._12_4_ +
                     auVar31._12_4_ * fVar102;
        auVar87 = vshufps_avx(auVar21,auVar21,0);
        auVar19 = vshufps_avx(auVar21,auVar21,0x55);
        auVar31 = vshufps_avx(auVar21,auVar21,0xaa);
        local_108._0_4_ =
             (float)local_3f8 * auVar87._0_4_ + auVar19._0_4_ * (float)uStack_3e8 +
             auVar31._0_4_ * fVar106 + (float)uStack_3c8;
        local_108._4_4_ =
             local_3f8._4_4_ * auVar87._4_4_ + auVar19._4_4_ * uStack_3e8._4_4_ +
             auVar31._4_4_ * fVar60 + fVar104;
        local_108._8_4_ =
             (float)uStack_3f0 * auVar87._8_4_ + auVar19._8_4_ * (float)uStack_3e0 +
             auVar31._8_4_ * fVar62 + (float)uStack_3c0;
        local_108._12_4_ =
             uStack_3f0._4_4_ * auVar87._12_4_ + auVar19._12_4_ * uStack_3e0._4_4_ +
             auVar31._12_4_ * fVar102 + fVar105;
        bVar7 = (byte)((ulonglong)local_358 >> 0x20);
        local_460 = (uVar3 & 0x7fffffff) << (bVar7 & 0x1f) |
                    ~(~(uint)(-1L << ((byte)local_348 & 0x3f)) << (bVar7 & 0x1f)) & (uint)local_358;
        local_45c = local_348 + (int)((ulonglong)local_358 >> 0x20);
        auVar9._4_4_ = fStack_414;
        auVar9._0_4_ = local_418;
        auVar9._8_4_ = fStack_410;
        auVar9._12_4_ = fStack_40c;
        auVar108 = ZEXT1664(auVar9);
        if (*(char *)((longlong)plVar1 + 0x24) == '\0') {
          auVar87 = vshufps_avx(auVar9,auVar9,9);
          auVar87 = vsubps_avx(auVar9,auVar87);
          auVar22._0_4_ = auVar87._0_4_ * auVar87._0_4_;
          auVar22._4_4_ = auVar87._4_4_ * auVar87._4_4_;
          auVar22._8_4_ = auVar87._8_4_ * auVar87._8_4_;
          auVar22._12_4_ = auVar87._12_4_ * auVar87._12_4_;
          auVar87 = vinsertps_avx(auVar22,auVar22,0x4c);
          auVar23._0_4_ = auVar22._0_4_ + auVar87._0_4_;
          auVar23._4_4_ = auVar22._4_4_ + auVar87._4_4_;
          auVar23._8_4_ = auVar22._8_4_ + auVar87._8_4_;
          auVar23._12_4_ = auVar22._12_4_ + auVar87._12_4_;
          auVar87 = vshufpd_avx(auVar23,auVar23,1);
          if (1e-08 < auVar23._0_4_ + auVar87._0_4_) {
            auVar87 = *(undefined1 (*) [16])((longlong)plVar1 + 0x14);
            auVar40._0_4_ = auVar87._0_4_ * auVar87._0_4_;
            auVar40._4_4_ = auVar87._4_4_ * auVar87._4_4_;
            auVar40._8_4_ = auVar87._8_4_ * auVar87._8_4_;
            auVar40._12_4_ = auVar87._12_4_ * auVar87._12_4_;
            auVar19 = vinsertps_avx(auVar40,auVar40,0x4c);
            auVar41._0_4_ = auVar40._0_4_ + auVar19._0_4_;
            auVar41._4_4_ = auVar40._4_4_ + auVar19._4_4_;
            auVar41._8_4_ = auVar40._8_4_ + auVar19._8_4_;
            auVar41._12_4_ = auVar40._12_4_ + auVar19._12_4_;
            auVar19 = vshufpd_avx(auVar41,auVar41,1);
            auVar19 = vmaxss_avx(ZEXT816(0) << 0x20,
                                 ZEXT416((uint)(auVar103._0_4_ - (auVar41._0_4_ + auVar19._0_4_))));
            auVar30 = vsqrtss_avx(auVar19,auVar19);
            auVar87 = vinsertps_avx(auVar87,auVar30,0x30);
            fVar106 = auVar87._0_4_;
            auVar56._0_4_ = fVar106 + fVar106;
            fVar60 = auVar87._4_4_;
            auVar56._4_4_ = fVar60 + fVar60;
            fVar62 = auVar87._8_4_;
            auVar56._8_4_ = fVar62 + fVar62;
            fVar102 = auVar87._12_4_;
            auVar56._12_4_ = fVar102 + fVar102;
            auVar19 = vshufps_avx(auVar56,auVar56,0xc9);
            auVar87 = vshufps_avx(auVar87,auVar87,0xd2);
            auVar31 = vshufps_avx(auVar56,auVar56,0xd2);
            auVar30 = vshufps_avx(auVar30,auVar30,0);
            auVar79._0_4_ = auVar87._0_4_ * auVar31._0_4_;
            auVar79._4_4_ = auVar87._4_4_ * auVar31._4_4_;
            auVar79._8_4_ = auVar87._8_4_ * auVar31._8_4_;
            auVar79._12_4_ = auVar87._12_4_ * auVar31._12_4_;
            auVar98._0_4_ = fVar106 * auVar56._0_4_;
            auVar98._4_4_ = fVar60 * auVar56._4_4_;
            auVar98._8_4_ = fVar62 * auVar56._8_4_;
            auVar98._12_4_ = fVar102 * auVar56._12_4_;
            auVar20 = vshufps_avx(auVar98,auVar98,0xc9);
            auVar20 = vsubps_avx(auVar93._0_16_,auVar20);
            auVar34 = vsubps_avx(auVar20,auVar79);
            auVar57._0_4_ = auVar30._0_4_ * auVar19._0_4_ + auVar56._0_4_ * auVar87._0_4_;
            auVar57._4_4_ = auVar30._4_4_ * auVar19._4_4_ + auVar56._4_4_ * auVar87._4_4_;
            auVar57._8_4_ = auVar30._8_4_ * auVar19._8_4_ + auVar56._8_4_ * auVar87._8_4_;
            auVar57._12_4_ = auVar30._12_4_ * auVar19._12_4_ + auVar56._12_4_ * auVar87._12_4_;
            auVar42._0_4_ = auVar30._0_4_ * auVar31._0_4_;
            auVar42._4_4_ = auVar30._4_4_ * auVar31._4_4_;
            auVar42._8_4_ = auVar30._8_4_ * auVar31._8_4_;
            auVar42._12_4_ = auVar30._12_4_ * auVar31._12_4_;
            auVar24._0_4_ = fVar106 * auVar19._0_4_;
            auVar24._4_4_ = fVar60 * auVar19._4_4_;
            auVar24._8_4_ = fVar62 * auVar19._8_4_;
            auVar24._12_4_ = fVar102 * auVar19._12_4_;
            auVar35 = vsubps_avx(auVar24,auVar42);
            auVar87 = vblendps_avx(auVar35,auVar80._0_16_,8);
            auVar19 = vblendps_avx(auVar34,auVar57,2);
            auVar87 = vblendps_avx(auVar87,auVar19,3);
            auVar20 = vinsertps_avx(auVar35,auVar34,0x58);
            auVar31 = vblendps_avx(auVar20,auVar57,4);
            auVar32 = vinsertps_avx(auVar35,auVar57,8);
            auVar30 = vblendps_avx(auVar32,auVar34,4);
            auVar33 = vinsertps_avx(auVar9,auVar103._0_16_,0x30);
            fVar106 = auVar33._0_4_;
            auVar107._0_4_ = fVar106 * auVar30._0_4_;
            fVar60 = auVar33._4_4_;
            auVar107._4_4_ = fVar60 * auVar30._4_4_;
            fVar62 = auVar33._8_4_;
            auVar107._8_4_ = fVar62 * auVar30._8_4_;
            fVar102 = auVar33._12_4_;
            auVar107._12_4_ = fVar102 * auVar30._12_4_;
            auVar76._0_4_ = fVar106 * auVar31._0_4_;
            auVar76._4_4_ = fVar60 * auVar31._4_4_;
            auVar76._8_4_ = fVar62 * auVar31._8_4_;
            auVar76._12_4_ = fVar102 * auVar31._12_4_;
            auVar43._0_4_ = fVar106 * auVar87._0_4_;
            auVar43._4_4_ = fVar60 * auVar87._4_4_;
            auVar43._8_4_ = fVar62 * auVar87._8_4_;
            auVar43._12_4_ = fVar102 * auVar87._12_4_;
            auVar87 = vmovlhps_avx(auVar19,auVar20);
            auVar20 = vunpckhpd_avx(auVar35,auVar57);
            auVar30 = vunpckhpd_avx(auVar34,auVar80._0_16_);
            auVar58._8_8_ = 0;
            auVar58._0_8_ = auVar32._0_8_;
            auVar31 = vshufps_avx(auVar87,auVar58,0x88);
            auVar19 = vshufps_avx(auVar87,auVar58,0xdd);
            auVar30 = vshufps_avx(auVar20,auVar30,0x88);
            auVar87 = vmovshdup_avx(auVar43);
            fVar106 = auVar19._0_4_;
            fVar60 = auVar19._4_4_;
            fVar62 = auVar19._8_4_;
            fVar102 = auVar19._12_4_;
            auVar19 = vshufpd_avx(auVar43,auVar43,1);
            auVar25._0_4_ =
                 auVar20._0_4_ * auVar19._0_4_ +
                 auVar43._0_4_ * auVar34._0_4_ + fVar106 * auVar87._0_4_;
            auVar25._4_4_ =
                 auVar20._4_4_ * auVar19._4_4_ +
                 auVar43._4_4_ * auVar34._4_4_ + fVar60 * auVar87._4_4_;
            auVar25._8_4_ =
                 auVar20._8_4_ * auVar19._8_4_ +
                 auVar43._8_4_ * auVar34._8_4_ + fVar62 * auVar87._8_4_;
            auVar25._12_4_ =
                 auVar20._12_4_ * auVar19._12_4_ +
                 auVar43._12_4_ * auVar34._12_4_ + fVar102 * auVar87._12_4_;
            auVar87 = vmovsldup_avx(auVar76);
            auVar19 = vshufps_avx(auVar76,auVar76,0xaa);
            auVar44._0_4_ =
                 auVar30._0_4_ * auVar19._0_4_ +
                 auVar31._0_4_ * auVar87._0_4_ + auVar76._0_4_ * fVar106;
            auVar44._4_4_ =
                 auVar30._4_4_ * auVar19._4_4_ +
                 auVar31._4_4_ * auVar87._4_4_ + auVar76._4_4_ * fVar60;
            auVar44._8_4_ =
                 auVar30._8_4_ * auVar19._8_4_ +
                 auVar31._8_4_ * auVar87._8_4_ + auVar76._8_4_ * fVar62;
            auVar44._12_4_ =
                 auVar30._12_4_ * auVar19._12_4_ +
                 auVar31._12_4_ * auVar87._12_4_ + auVar76._12_4_ * fVar102;
            auVar87 = vblendps_avx(auVar25,auVar44,2);
            auVar19 = vshufps_avx(auVar107,auVar107,0x55);
            auVar45._0_4_ =
                 auVar107._0_4_ * auVar30._0_4_ +
                 auVar31._0_4_ * auVar107._0_4_ + fVar106 * auVar19._0_4_;
            auVar45._4_4_ =
                 auVar107._4_4_ * auVar30._4_4_ +
                 auVar31._4_4_ * auVar107._4_4_ + fVar60 * auVar19._4_4_;
            auVar45._8_4_ =
                 auVar107._8_4_ * auVar30._8_4_ +
                 auVar31._8_4_ * auVar107._0_4_ + fVar62 * auVar19._8_4_;
            auVar45._12_4_ =
                 auVar107._12_4_ * auVar30._12_4_ +
                 auVar31._12_4_ * auVar107._4_4_ + fVar102 * auVar19._12_4_;
            auVar87 = vshufps_avx(auVar87,auVar45,0xa4);
            auVar108 = ZEXT1664(auVar87);
          }
        }
        auVar109 = ZEXT1664(CONCAT412(fStack_3fc,CONCAT48(fStack_400,CONCAT44(fStack_404,local_408))
                                     ));
        lVar4 = *plVar1;
        local_4b8 = (float *)&local_350;
        cVar12 = (**(code **)(*local_340 + 8))(local_340,lVar4,&local_460,local_428);
        if (cVar12 != '\0') {
          local_448 = auVar109._0_16_;
          local_458 = auVar108._0_16_;
          local_488 = plVar11;
          local_490 = lVar15;
          local_498 = lVar13;
          local_4a0 = &local_350;
          local_4b0 = &local_3b8;
          local_4b8 = &local_138;
          local_4a8 = &local_460;
          (*(code *)(&DAT_1416badb0)
                    [(ulonglong)*(byte *)(lVar4 + 0x19) * 0x22 +
                     (ulonglong)*(byte *)((longlong)plVar10 + 0x19)])
                    (lVar4,plVar10,local_458,local_448);
        }
      }
      else {
        lVar13 = *(longlong *)(param_1 + 0x80);
        lVar15 = (ulonglong)uVar3 * 0x40;
        auVar87 = *(undefined1 (*) [16])(lVar13 + lVar15);
        auVar31 = vcvtph2ps_f16c(auVar87);
        auVar19 = *(undefined1 (*) [16])(lVar13 + 0x10 + lVar15);
        auVar87 = vshufps_avx(auVar87,auVar87,0xee);
        auVar30 = vcvtph2ps_f16c(auVar87);
        auVar87 = *(undefined1 (*) [16])(lVar13 + 0x20 + lVar15);
        auVar33 = vcvtph2ps_f16c(auVar19);
        auVar19 = vshufps_avx(auVar19,auVar19,0xee);
        auVar19 = vcvtph2ps_f16c(auVar19);
        auVar32 = vcvtph2ps_f16c(auVar87);
        auVar87 = vshufps_avx(auVar87,auVar87,0xee);
        auVar34 = vcvtph2ps_f16c(auVar87);
        auVar87 = *(undefined1 (*) [16])(lVar13 + 0x30 + lVar15);
        auVar36._0_4_ = local_418 * auVar31._0_4_;
        auVar36._4_4_ = local_418 * auVar31._4_4_;
        auVar36._8_4_ = local_418 * auVar31._8_4_;
        auVar36._12_4_ = local_418 * auVar31._12_4_;
        auVar51._0_4_ = local_418 * auVar19._0_4_;
        auVar51._4_4_ = local_418 * auVar19._4_4_;
        auVar51._8_4_ = local_418 * auVar19._8_4_;
        auVar51._12_4_ = local_418 * auVar19._12_4_;
        auVar20 = vminps_avx(auVar36,auVar51);
        auVar19 = vmaxps_avx(auVar36,auVar51);
        auVar66._0_4_ = fStack_414 * auVar30._0_4_;
        auVar66._4_4_ = fStack_414 * auVar30._4_4_;
        auVar66._8_4_ = fStack_414 * auVar30._8_4_;
        auVar66._12_4_ = fStack_414 * auVar30._12_4_;
        auVar52._0_4_ = fStack_414 * auVar32._0_4_;
        auVar52._4_4_ = fStack_414 * auVar32._4_4_;
        auVar52._8_4_ = fStack_414 * auVar32._8_4_;
        auVar52._12_4_ = fStack_414 * auVar32._12_4_;
        auVar32 = vminps_avx(auVar66,auVar52);
        auVar31 = vmaxps_avx(auVar66,auVar52);
        auVar70._0_4_ = fStack_410 * auVar33._0_4_;
        auVar70._4_4_ = fStack_410 * auVar33._4_4_;
        auVar70._8_4_ = fStack_410 * auVar33._8_4_;
        auVar70._12_4_ = fStack_410 * auVar33._12_4_;
        auVar67._0_4_ = auVar34._0_4_ * fStack_410;
        auVar67._4_4_ = auVar34._4_4_ * fStack_410;
        auVar67._8_4_ = auVar34._8_4_ * fStack_410;
        auVar67._12_4_ = auVar34._12_4_ * fStack_410;
        auVar33 = vminps_avx(auVar70,auVar67);
        auVar30 = vmaxps_avx(auVar70,auVar67);
        auVar71._4_4_ = local_378._0_4_;
        auVar71._0_4_ = local_378._0_4_;
        auVar71._8_4_ = local_378._0_4_;
        auVar71._12_4_ = local_378._0_4_;
        auVar19 = vcmpps_avx(auVar19,auVar71,5);
        auVar72._4_4_ = local_378._4_4_;
        auVar72._0_4_ = local_378._4_4_;
        auVar72._8_4_ = local_378._4_4_;
        auVar72._12_4_ = local_378._4_4_;
        auVar31 = vcmpps_avx(auVar31,auVar72,5);
        auVar73._4_4_ = local_378._8_4_;
        auVar73._0_4_ = local_378._8_4_;
        auVar73._8_4_ = local_378._8_4_;
        auVar73._12_4_ = local_378._8_4_;
        auVar30 = vcmpps_avx(auVar30,auVar73,5);
        auVar74._4_4_ = local_368._0_4_;
        auVar74._0_4_ = local_368._0_4_;
        auVar74._8_4_ = local_368._0_4_;
        auVar74._12_4_ = local_368._0_4_;
        auVar20 = vcmpps_avx(auVar74,auVar20,5);
        auVar19 = vandps_avx(auVar19,auVar20);
        auVar75._4_4_ = local_368._4_4_;
        auVar75._0_4_ = local_368._4_4_;
        auVar75._8_4_ = local_368._4_4_;
        auVar75._12_4_ = local_368._4_4_;
        auVar20 = vcmpps_avx(auVar75,auVar32,5);
        auVar31 = vandps_avx(auVar31,auVar20);
        auVar19 = vandps_avx(auVar19,auVar31);
        auVar53._4_4_ = local_368._8_4_;
        auVar53._0_4_ = local_368._8_4_;
        auVar53._8_4_ = local_368._8_4_;
        auVar53._12_4_ = local_368._8_4_;
        auVar31 = vcmpps_avx(auVar53,auVar33,5);
        auVar31 = vandps_avx(auVar30,auVar31);
        auVar19 = vandps_avx(auVar31,auVar19);
        auVar31 = vshufps_avx(auVar87,auVar87,0xf4);
        auVar30 = vshufps_avx(auVar19,auVar19,0xaa);
        auVar87 = vblendvps_avx(auVar31,auVar87,auVar30);
        auVar31 = vshufps_avx(auVar87,auVar87,0xf8);
        auVar30 = vshufps_avx(auVar19,auVar19,0x55);
        auVar87 = vblendvps_avx(auVar31,auVar87,auVar30);
        auVar31 = vshufps_avx(auVar87,auVar87,0xf9);
        auVar30 = vshufps_avx(auVar19,auVar19,0);
        auVar87 = vblendvps_avx(auVar31,auVar87,auVar30);
        uVar14 = vmovmskps_avx(auVar19);
        *(undefined1 (*) [16])(local_338 + (ulonglong)uVar17 * 4) = auVar87;
        uVar17 = uVar17 + POPCOUNT(uVar14);
      }
      lVar13 = local_430;
      if (*(float *)(local_430 + 8) <= fVar82) break;
    }
    lVar13 = 0;
    bVar5 = 0 < (int)uVar17;
    uVar17 = uVar17 - 1;
  } while (bVar5);
  auVar8._8_8_ = uStack_470;
  auVar8._0_8_ = local_478;
  if (local_480 != (undefined1 (*) [16])0x0) {
    uVar16 = rdtsc();
    auVar19 = vpinsrq_avx(auVar8,uVar16 & 0xffffffff00000000 |
                                 CONCAT44((int)((ulonglong)lVar13 >> 0x20),(int)uVar16),1);
    auVar87 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b557),0));
    *local_480 = auVar87;
    auVar87 = vmovntdq_avx(auVar19);
    local_480[1] = auVar87;
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_4d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_4d8);
}

