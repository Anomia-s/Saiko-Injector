/**
 * Function: static_void_jph_staticcompoundshape_scollides
 * Address:  1402ecb00
 * Signature: undefined static_void_jph_staticcompoundshape_scollides(void)
 * Body size: 2820 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_staticcompoundshape_scollides
               (longlong *param_1,longlong param_2,float *param_3,undefined8 *param_4,float *param_5
               ,undefined1 (*param_6) [16],undefined8 *param_7,undefined8 *param_8,longlong param_9,
               longlong param_10,longlong *param_11)

{
  longlong *plVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong *plVar15;
  longlong *plVar16;
  char cVar17;
  longlong lVar18;
  undefined4 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  float fVar51;
  float fVar53;
  undefined1 auVar35 [16];
  float fVar54;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar52;
  float fVar55;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar56;
  float fVar57;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [64];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [16];
  float fVar97;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar98 [64];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar106 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar110 [64];
  undefined1 in_ZMM15 [64];
  undefined1 auVar111 [64];
  undefined1 auStack_4d8 [32];
  uint *local_4b8;
  float *local_4b0;
  undefined8 *local_4a8;
  uint *local_4a0;
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
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_4d8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar18 == 0) {
    local_480 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar22 = *(uint *)(lVar18 + 0x200020);
    if ((ulonglong)uVar22 < 0x10000) {
      *(uint *)(lVar18 + 0x200020) = uVar22 + 1;
      local_480 = (undefined1 (*) [16])(lVar18 + (ulonglong)uVar22 * 0x20 + 0x20);
      uVar21 = rdtsc();
      local_478 = uVar21 & 0xffffffff00000000 |
                  CONCAT44((int)((ulonglong)local_480 >> 0x20),(int)uVar21);
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
  fVar87 = *param_3;
  fVar89 = param_3[1];
  fVar90 = param_3[2];
  fVar91 = param_3[3];
  local_438 = param_9;
  local_430 = param_10;
  local_408 = (float)*param_4;
  fStack_404 = (float)((ulonglong)*param_4 >> 0x20);
  fStack_400 = (float)param_4[1];
  fStack_3fc = (float)((ulonglong)param_4[1] >> 0x20);
  local_3f8 = *(undefined8 *)param_5;
  uStack_3f0 = *(undefined8 *)(param_5 + 2);
  uStack_3e8 = *(undefined8 *)(param_5 + 4);
  uStack_3e0 = *(undefined8 *)(param_5 + 6);
  local_3d8 = *(undefined8 *)(param_5 + 8);
  uStack_3d0 = *(undefined8 *)(param_5 + 10);
  uStack_3c8 = *(undefined8 *)(param_5 + 0xc);
  uStack_3c0 = *(undefined8 *)(param_5 + 0xe);
  local_3b8 = *(undefined8 *)*param_6;
  uStack_3b0 = *(undefined8 *)(*param_6 + 8);
  uStack_3a8 = *(undefined8 *)param_6[1];
  uStack_3a0 = *(undefined8 *)(param_6[1] + 8);
  local_398 = *(undefined8 *)param_6[2];
  uStack_390 = *(undefined8 *)(param_6[2] + 8);
  uStack_388 = *(undefined8 *)param_6[3];
  uStack_380 = *(undefined8 *)(param_6[3] + 8);
  local_358 = *param_7;
  local_350 = *param_8;
  local_348 = 0x20 - LZCOUNT(*(int *)(param_2 + 0x50) + -1);
  local_340 = param_11;
  auVar7 = vmovlhps_avx(*param_6,param_6[1]);
  auVar36 = vunpckhpd_avx(*param_6,param_6[1]);
  auVar24 = vpunpckhqdq_avx(param_6[2],(undefined1  [16])0x0);
  auVar24 = vshufps_avx(auVar36,auVar24,0x88);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = SUB168(param_6[2],0);
  auVar36 = vshufps_avx(auVar7,auVar35,0x88);
  auVar7 = vshufps_avx(auVar7,auVar35,0xdd);
  fVar88 = *(float *)param_6[3];
  fVar56 = auVar36._0_4_;
  fVar67 = auVar36._4_4_;
  fVar69 = auVar36._8_4_;
  fVar71 = auVar36._12_4_;
  fVar57 = *(float *)(param_6[3] + 4);
  fVar34 = auVar7._0_4_;
  fVar51 = auVar7._4_4_;
  fVar53 = auVar7._8_4_;
  fVar54 = auVar7._12_4_;
  fVar68 = *(float *)(param_6[3] + 8);
  fVar23 = auVar24._0_4_;
  fVar31 = auVar24._4_4_;
  fVar32 = auVar24._8_4_;
  fVar33 = auVar24._12_4_;
  auVar72._0_4_ = fVar23 * fVar68 + fVar56 * fVar88 + fVar34 * fVar57;
  auVar72._4_4_ = fVar31 * fVar68 + fVar67 * fVar88 + fVar51 * fVar57;
  auVar72._8_4_ = fVar32 * fVar68 + fVar69 * fVar88 + fVar53 * fVar57;
  auVar72._12_4_ = fVar33 * fVar68 + fVar71 * fVar88 + fVar54 * fVar57;
  auVar7 = vsubps_avx((undefined1  [16])0x0,auVar72);
  auVar7 = vinsertps_avx(auVar7,ZEXT416(0x3f800000),0x30);
  fVar88 = *param_5;
  fVar57 = param_5[1];
  fVar68 = param_5[2];
  fVar70 = param_5[3];
  fVar8 = auVar7._0_4_;
  fVar9 = auVar7._4_4_;
  fVar10 = auVar7._8_4_;
  fVar11 = auVar7._12_4_;
  fVar92 = fVar23 * fVar68 + fVar56 * fVar88 + fVar34 * fVar57 + fVar70 * fVar8;
  fVar94 = fVar31 * fVar68 + fVar67 * fVar88 + fVar51 * fVar57 + fVar70 * fVar9;
  fVar95 = fVar32 * fVar68 + fVar69 * fVar88 + fVar53 * fVar57 + fVar70 * fVar10;
  fVar96 = fVar33 * fVar68 + fVar71 * fVar88 + fVar54 * fVar57 + fVar70 * fVar11;
  fVar88 = param_5[4];
  fVar57 = param_5[5];
  fVar68 = param_5[6];
  fVar70 = param_5[7];
  fVar97 = fVar23 * fVar68 + fVar56 * fVar88 + fVar34 * fVar57 + fVar70 * fVar8;
  fVar99 = fVar31 * fVar68 + fVar67 * fVar88 + fVar51 * fVar57 + fVar70 * fVar9;
  fVar100 = fVar32 * fVar68 + fVar69 * fVar88 + fVar53 * fVar57 + fVar70 * fVar10;
  fVar101 = fVar33 * fVar68 + fVar71 * fVar88 + fVar54 * fVar57 + fVar70 * fVar11;
  fVar88 = param_5[8];
  fVar57 = param_5[9];
  fVar68 = param_5[10];
  fVar70 = param_5[0xb];
  fVar109 = param_5[0xc];
  fVar52 = param_5[0xd];
  fVar55 = param_5[0xe];
  fVar3 = param_5[0xf];
  fVar105 = fVar3 * fVar8 + fVar23 * fVar55 + fVar56 * fVar109 + fVar34 * fVar52;
  fVar107 = fVar3 * fVar9 + fVar31 * fVar55 + fVar67 * fVar109 + fVar51 * fVar52;
  fVar108 = fVar3 * fVar10 + fVar32 * fVar55 + fVar69 * fVar109 + fVar53 * fVar52;
  fVar109 = fVar3 * fVar11 + fVar33 * fVar55 + fVar71 * fVar109 + fVar54 * fVar52;
  auVar86 = ZEXT2464(ZEXT1624((undefined1  [16])0x0));
  auVar98 = ZEXT1664(CONCAT412(fVar70 * fVar11 + fVar33 * fVar68 + fVar71 * fVar88 + fVar54 * fVar57
                               ,CONCAT48(fVar70 * fVar10 +
                                         fVar32 * fVar68 + fVar69 * fVar88 + fVar53 * fVar57,
                                         CONCAT44(fVar70 * fVar9 +
                                                  fVar31 * fVar68 +
                                                  fVar67 * fVar88 + fVar51 * fVar57,
                                                  fVar70 * fVar8 +
                                                  fVar23 * fVar68 +
                                                  fVar56 * fVar88 + fVar34 * fVar57))));
  local_428 = param_1;
  local_418 = fVar87;
  fStack_414 = fVar89;
  fStack_410 = fVar90;
  fStack_40c = fVar91;
  (**(code **)(*param_1 + 0x18))(param_1,&local_138);
  auVar24._0_4_ = fVar87 * local_128;
  auVar24._4_4_ = fVar89 * fStack_124;
  auVar24._8_4_ = fVar90 * fStack_120;
  auVar24._12_4_ = fVar91 * fStack_11c;
  auVar36._0_4_ = fVar87 * local_138;
  auVar36._4_4_ = fVar89 * fStack_134;
  auVar36._8_4_ = fVar90 * fStack_130;
  auVar36._12_4_ = fVar91 * fStack_12c;
  local_328 = vmaxps_avx(auVar36,auVar24);
  auVar35 = vminps_avx(auVar36,auVar24);
  auVar7 = vshufps_avx(auVar35,auVar35,0);
  auVar25._0_4_ = fVar92 * auVar7._0_4_;
  auVar25._4_4_ = fVar94 * auVar7._4_4_;
  auVar25._8_4_ = fVar95 * auVar7._8_4_;
  auVar25._12_4_ = fVar96 * auVar7._12_4_;
  auVar7 = vshufps_avx(local_328,local_328,0);
  auVar37._0_4_ = fVar92 * auVar7._0_4_;
  auVar37._4_4_ = fVar94 * auVar7._4_4_;
  auVar37._8_4_ = fVar95 * auVar7._8_4_;
  auVar37._12_4_ = fVar96 * auVar7._12_4_;
  auVar36 = vminps_avx(auVar25,auVar37);
  auVar7 = vmaxps_avx(auVar25,auVar37);
  auStack_334._0_4_ = auVar35._4_4_;
  auVar38._0_4_ = fVar97 * (float)auStack_334._0_4_;
  auVar38._4_4_ = fVar99 * (float)auStack_334._0_4_;
  auVar38._8_4_ = fVar100 * (float)auStack_334._0_4_;
  auVar38._12_4_ = fVar101 * (float)auStack_334._0_4_;
  auVar24 = vshufps_avx(local_328,local_328,0x55);
  auVar77._0_4_ = fVar97 * auVar24._0_4_;
  auVar77._4_4_ = fVar99 * auVar24._4_4_;
  auVar77._8_4_ = fVar100 * auVar24._8_4_;
  auVar77._12_4_ = fVar101 * auVar24._12_4_;
  auVar25 = vminps_avx(auVar38,auVar77);
  auVar24 = vmaxps_avx(auVar38,auVar77);
  auStack_334._4_4_ = auVar35._8_4_;
  auVar39._0_4_ = auVar98._0_4_ * (float)auStack_334._4_4_;
  auVar39._4_4_ = auVar98._4_4_ * (float)auStack_334._4_4_;
  auVar39._8_4_ = auVar98._8_4_ * (float)auStack_334._4_4_;
  auVar39._12_4_ = auVar98._12_4_ * (float)auStack_334._4_4_;
  auVar37 = vshufps_avx(local_328,local_328,0xaa);
  auVar58._0_4_ = auVar98._0_4_ * auVar37._0_4_;
  auVar58._4_4_ = auVar98._4_4_ * auVar37._4_4_;
  auVar58._8_4_ = auVar98._8_4_ * auVar37._8_4_;
  auVar58._12_4_ = auVar98._12_4_ * auVar37._12_4_;
  auVar37 = vminps_avx(auVar39,auVar58);
  auVar73._0_4_ = fVar105 + auVar36._0_4_ + auVar25._0_4_ + auVar37._0_4_;
  auVar73._4_4_ = fVar107 + auVar36._4_4_ + auVar25._4_4_ + auVar37._4_4_;
  auVar73._8_4_ = fVar108 + auVar36._8_4_ + auVar25._8_4_ + auVar37._8_4_;
  auVar73._12_4_ = fVar109 + auVar36._12_4_ + auVar25._12_4_ + auVar37._12_4_;
  auVar36 = vmaxps_avx(auVar39,auVar58);
  fVar88 = *(float *)(param_9 + 0x20);
  auVar40._4_4_ = fVar88;
  auVar40._0_4_ = fVar88;
  auVar40._8_4_ = fVar88;
  auVar40._12_4_ = fVar88;
  local_378 = vsubps_avx(auVar73,auVar40);
  local_368._0_4_ = fVar105 + auVar7._0_4_ + auVar24._0_4_ + auVar36._0_4_ + fVar88;
  local_368._4_4_ = fVar107 + auVar7._4_4_ + auVar24._4_4_ + auVar36._4_4_ + fVar88;
  local_368._8_4_ = fVar108 + auVar7._8_4_ + auVar24._8_4_ + auVar36._8_4_ + fVar88;
  local_368._12_4_ = fVar109 + auVar7._12_4_ + auVar24._12_4_ + auVar36._12_4_ + fVar88;
  auStack_334 = auVar35._4_12_;
  auVar7._12_4_ = 0;
  auVar7._0_12_ = auStack_334;
  _local_338 = auVar7 << 0x20;
  fVar88 = -3.4028235e+38;
  auVar98 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
  auVar106 = ZEXT464(0x3f800000);
  uVar22 = 0;
  do {
    plVar16 = local_340;
    plVar15 = local_428;
    lVar20 = local_430;
    lVar18 = local_438;
    uVar4 = *(uint *)(local_338 + (ulonglong)uVar22 * 4);
    if ((ulonglong)uVar4 != 0x7fffffff) {
      if ((int)uVar4 < 0) {
        uVar21 = (ulonglong)(uVar4 & 0x7fffffff);
        lVar5 = *(longlong *)(param_2 + 0x60);
        plVar1 = (longlong *)(lVar5 + uVar21 * 0x28);
        bVar12 = (byte)((ulonglong)local_350 >> 0x20);
        local_460 = (uVar4 & 0x7fffffff) << (bVar12 & 0x1f) |
                    ~(~(uint)(-1L << ((byte)local_348 & 0x3f)) << (bVar12 & 0x1f)) & (uint)local_350
        ;
        local_45c = local_348 + (int)((ulonglong)local_350 >> 0x20);
        auVar7 = _DAT_140de0210;
        if (*(char *)(lVar5 + 0x24 + uVar21 * 0x28) == '\0') {
          auVar7 = *(undefined1 (*) [16])((longlong)plVar1 + 0x14);
          auVar42._0_4_ = auVar7._0_4_ * auVar7._0_4_;
          auVar42._4_4_ = auVar7._4_4_ * auVar7._4_4_;
          auVar42._8_4_ = auVar7._8_4_ * auVar7._8_4_;
          auVar42._12_4_ = auVar7._12_4_ * auVar7._12_4_;
          auVar24 = vinsertps_avx(auVar42,auVar42,0x4c);
          auVar43._0_4_ = auVar42._0_4_ + auVar24._0_4_;
          auVar43._4_4_ = auVar42._4_4_ + auVar24._4_4_;
          auVar43._8_4_ = auVar42._8_4_ + auVar24._8_4_;
          auVar43._12_4_ = auVar42._12_4_ + auVar24._12_4_;
          auVar24 = vshufpd_avx(auVar43,auVar43,1);
          auVar24 = vmaxss_avx(ZEXT816(0) << 0x20,
                               ZEXT416((uint)(auVar106._0_4_ - (auVar43._0_4_ + auVar24._0_4_))));
          auVar24 = vsqrtss_avx(auVar24,auVar24);
          auVar7 = vinsertps_avx(auVar7,auVar24,0x30);
        }
        auVar14._4_4_ = fStack_404;
        auVar14._0_4_ = local_408;
        auVar14._8_4_ = fStack_400;
        auVar14._12_4_ = fStack_3fc;
        auVar110 = ZEXT1664(auVar14);
        pfVar2 = (float *)(lVar5 + 8 + uVar21 * 0x28);
        auVar26._0_4_ = local_408 * *pfVar2;
        auVar26._4_4_ = fStack_404 * pfVar2[1];
        auVar26._8_4_ = fStack_400 * pfVar2[2];
        auVar26._12_4_ = fStack_3fc * pfVar2[3];
        fVar57 = auVar7._0_4_;
        auVar62._0_4_ = fVar57 + fVar57;
        fVar68 = auVar7._4_4_;
        auVar62._4_4_ = fVar68 + fVar68;
        fVar70 = auVar7._8_4_;
        auVar62._8_4_ = fVar70 + fVar70;
        fVar109 = auVar7._12_4_;
        auVar62._12_4_ = fVar109 + fVar109;
        auVar24 = vshufps_avx(auVar62,auVar62,0xc9);
        auVar36 = vshufps_avx(auVar7,auVar7,0xd2);
        auVar35 = vshufps_avx(auVar62,auVar62,0xd2);
        auVar7 = vshufps_avx(auVar7,auVar7,0xff);
        auVar76._0_4_ = auVar35._0_4_ * auVar36._0_4_;
        auVar76._4_4_ = auVar35._4_4_ * auVar36._4_4_;
        auVar76._8_4_ = auVar35._8_4_ * auVar36._8_4_;
        auVar76._12_4_ = auVar35._12_4_ * auVar36._12_4_;
        auVar102._0_4_ = fVar57 * auVar62._0_4_;
        auVar102._4_4_ = fVar68 * auVar62._4_4_;
        auVar102._8_4_ = fVar70 * auVar62._8_4_;
        auVar102._12_4_ = fVar109 * auVar62._12_4_;
        auVar25 = vshufps_avx(auVar102,auVar102,0xc9);
        auVar25 = vsubps_avx(auVar98._0_16_,auVar25);
        auVar25 = vsubps_avx(auVar25,auVar76);
        auVar103._0_4_ = auVar7._0_4_ * auVar24._0_4_ + auVar62._0_4_ * auVar36._0_4_;
        auVar103._4_4_ = auVar7._4_4_ * auVar24._4_4_ + auVar62._4_4_ * auVar36._4_4_;
        auVar103._8_4_ = auVar7._8_4_ * auVar24._8_4_ + auVar62._8_4_ * auVar36._8_4_;
        auVar103._12_4_ = auVar7._12_4_ * auVar24._12_4_ + auVar62._12_4_ * auVar36._12_4_;
        auVar63._0_4_ = auVar35._0_4_ * auVar7._0_4_;
        auVar63._4_4_ = auVar35._4_4_ * auVar7._4_4_;
        auVar63._8_4_ = auVar35._8_4_ * auVar7._8_4_;
        auVar63._12_4_ = auVar35._12_4_ * auVar7._12_4_;
        auVar44._0_4_ = fVar57 * auVar24._0_4_;
        auVar44._4_4_ = fVar68 * auVar24._4_4_;
        auVar44._8_4_ = fVar70 * auVar24._8_4_;
        auVar44._12_4_ = fVar109 * auVar24._12_4_;
        auVar35 = vsubps_avx(auVar44,auVar63);
        auVar7 = vshufps_avx(auVar25,auVar25,0);
        auVar24 = vshufps_avx(auVar103,auVar103,0x55);
        auVar36 = vshufps_avx(auVar35,auVar35,0xaa);
        fVar57 = (float)local_398;
        fVar68 = (float)((ulonglong)local_398 >> 0x20);
        fVar70 = (float)uStack_390;
        fVar109 = (float)((ulonglong)uStack_390 >> 0x20);
        local_118 = (float)uStack_388 * auVar86._0_4_;
        fVar52 = (float)((ulonglong)uStack_388 >> 0x20);
        fStack_114 = fVar52 * auVar86._4_4_;
        fStack_110 = (float)uStack_380 * auVar86._8_4_;
        fVar55 = (float)((ulonglong)uStack_380 >> 0x20);
        fStack_10c = fVar55 * auVar86._12_4_;
        local_138 = auVar7._0_4_ * (float)local_3b8 + auVar24._0_4_ * (float)uStack_3a8 +
                    auVar36._0_4_ * fVar57 + local_118;
        fStack_134 = auVar7._4_4_ * local_3b8._4_4_ + auVar24._4_4_ * uStack_3a8._4_4_ +
                     auVar36._4_4_ * fVar68 + fStack_114;
        fStack_130 = auVar7._8_4_ * (float)uStack_3b0 + auVar24._8_4_ * (float)uStack_3a0 +
                     auVar36._8_4_ * fVar70 + fStack_110;
        fStack_12c = auVar7._12_4_ * uStack_3b0._4_4_ + auVar24._12_4_ * uStack_3a0._4_4_ +
                     auVar36._12_4_ * fVar109 + fStack_10c;
        auVar7 = vshufps_avx(auVar35,auVar35,0);
        auVar24 = vshufps_avx(auVar25,auVar25,0x55);
        auVar36 = vshufps_avx(auVar103,auVar103,0xaa);
        local_128 = auVar7._0_4_ * (float)local_3b8 + auVar24._0_4_ * (float)uStack_3a8 +
                    auVar36._0_4_ * fVar57 + local_118;
        fStack_124 = auVar7._4_4_ * local_3b8._4_4_ + auVar24._4_4_ * uStack_3a8._4_4_ +
                     auVar36._4_4_ * fVar68 + fStack_114;
        fStack_120 = auVar7._8_4_ * (float)uStack_3b0 + auVar24._8_4_ * (float)uStack_3a0 +
                     auVar36._8_4_ * fVar70 + fStack_110;
        fStack_11c = auVar7._12_4_ * uStack_3b0._4_4_ + auVar24._12_4_ * uStack_3a0._4_4_ +
                     auVar36._12_4_ * fVar109 + fStack_10c;
        auVar7 = vshufps_avx(auVar103,auVar103,0);
        auVar24 = vshufps_avx(auVar35,auVar35,0x55);
        auVar36 = vshufps_avx(auVar25,auVar25,0xaa);
        local_118 = local_118 +
                    auVar7._0_4_ * (float)local_3b8 + auVar24._0_4_ * (float)uStack_3a8 +
                    auVar36._0_4_ * fVar57;
        fStack_114 = fStack_114 +
                     auVar7._4_4_ * local_3b8._4_4_ + auVar24._4_4_ * uStack_3a8._4_4_ +
                     auVar36._4_4_ * fVar68;
        fStack_110 = fStack_110 +
                     auVar7._8_4_ * (float)uStack_3b0 + auVar24._8_4_ * (float)uStack_3a0 +
                     auVar36._8_4_ * fVar70;
        fStack_10c = fStack_10c +
                     auVar7._12_4_ * uStack_3b0._4_4_ + auVar24._12_4_ * uStack_3a0._4_4_ +
                     auVar36._12_4_ * fVar109;
        auVar7 = vshufps_avx(auVar26,auVar26,0);
        auVar24 = vshufps_avx(auVar26,auVar26,0x55);
        auVar36 = vshufps_avx(auVar26,auVar26,0xaa);
        local_108._0_4_ =
             (float)local_3b8 * auVar7._0_4_ + auVar24._0_4_ * (float)uStack_3a8 +
             auVar36._0_4_ * fVar57 + (float)uStack_388;
        local_108._4_4_ =
             local_3b8._4_4_ * auVar7._4_4_ + auVar24._4_4_ * uStack_3a8._4_4_ +
             auVar36._4_4_ * fVar68 + fVar52;
        local_108._8_4_ =
             (float)uStack_3b0 * auVar7._8_4_ + auVar24._8_4_ * (float)uStack_3a0 +
             auVar36._8_4_ * fVar70 + (float)uStack_380;
        local_108._12_4_ =
             uStack_3b0._4_4_ * auVar7._12_4_ + auVar24._12_4_ * uStack_3a0._4_4_ +
             auVar36._12_4_ * fVar109 + fVar55;
        if (*(char *)((longlong)plVar1 + 0x24) == '\0') {
          auVar7 = vshufps_avx(auVar14,auVar14,9);
          auVar7 = vsubps_avx(auVar14,auVar7);
          auVar27._0_4_ = auVar7._0_4_ * auVar7._0_4_;
          auVar27._4_4_ = auVar7._4_4_ * auVar7._4_4_;
          auVar27._8_4_ = auVar7._8_4_ * auVar7._8_4_;
          auVar27._12_4_ = auVar7._12_4_ * auVar7._12_4_;
          auVar7 = vinsertps_avx(auVar27,auVar27,0x4c);
          auVar28._0_4_ = auVar27._0_4_ + auVar7._0_4_;
          auVar28._4_4_ = auVar27._4_4_ + auVar7._4_4_;
          auVar28._8_4_ = auVar27._8_4_ + auVar7._8_4_;
          auVar28._12_4_ = auVar27._12_4_ + auVar7._12_4_;
          auVar7 = vshufpd_avx(auVar28,auVar28,1);
          if (1e-08 < auVar28._0_4_ + auVar7._0_4_) {
            auVar7 = *(undefined1 (*) [16])((longlong)plVar1 + 0x14);
            auVar45._0_4_ = auVar7._0_4_ * auVar7._0_4_;
            auVar45._4_4_ = auVar7._4_4_ * auVar7._4_4_;
            auVar45._8_4_ = auVar7._8_4_ * auVar7._8_4_;
            auVar45._12_4_ = auVar7._12_4_ * auVar7._12_4_;
            auVar24 = vinsertps_avx(auVar45,auVar45,0x4c);
            auVar46._0_4_ = auVar45._0_4_ + auVar24._0_4_;
            auVar46._4_4_ = auVar45._4_4_ + auVar24._4_4_;
            auVar46._8_4_ = auVar45._8_4_ + auVar24._8_4_;
            auVar46._12_4_ = auVar45._12_4_ + auVar24._12_4_;
            auVar24 = vshufpd_avx(auVar46,auVar46,1);
            auVar24 = vmaxss_avx(ZEXT816(0) << 0x20,
                                 ZEXT416((uint)(auVar106._0_4_ - (auVar46._0_4_ + auVar24._0_4_))));
            auVar35 = vsqrtss_avx(auVar24,auVar24);
            auVar7 = vinsertps_avx(auVar7,auVar35,0x30);
            fVar57 = auVar7._0_4_;
            auVar64._0_4_ = fVar57 + fVar57;
            fVar68 = auVar7._4_4_;
            auVar64._4_4_ = fVar68 + fVar68;
            fVar70 = auVar7._8_4_;
            auVar64._8_4_ = fVar70 + fVar70;
            fVar109 = auVar7._12_4_;
            auVar64._12_4_ = fVar109 + fVar109;
            auVar24 = vshufps_avx(auVar64,auVar64,0xc9);
            auVar7 = vshufps_avx(auVar7,auVar7,0xd2);
            auVar36 = vshufps_avx(auVar64,auVar64,0xd2);
            auVar35 = vshufps_avx(auVar35,auVar35,0);
            auVar85._0_4_ = auVar7._0_4_ * auVar36._0_4_;
            auVar85._4_4_ = auVar7._4_4_ * auVar36._4_4_;
            auVar85._8_4_ = auVar7._8_4_ * auVar36._8_4_;
            auVar85._12_4_ = auVar7._12_4_ * auVar36._12_4_;
            auVar93._0_4_ = fVar57 * auVar64._0_4_;
            auVar93._4_4_ = fVar68 * auVar64._4_4_;
            auVar93._8_4_ = fVar70 * auVar64._8_4_;
            auVar93._12_4_ = fVar109 * auVar64._12_4_;
            auVar25 = vshufps_avx(auVar93,auVar93,0xc9);
            auVar25 = vsubps_avx(auVar98._0_16_,auVar25);
            auVar39 = vsubps_avx(auVar25,auVar85);
            auVar65._0_4_ = auVar35._0_4_ * auVar24._0_4_ + auVar64._0_4_ * auVar7._0_4_;
            auVar65._4_4_ = auVar35._4_4_ * auVar24._4_4_ + auVar64._4_4_ * auVar7._4_4_;
            auVar65._8_4_ = auVar35._8_4_ * auVar24._8_4_ + auVar64._8_4_ * auVar7._8_4_;
            auVar65._12_4_ = auVar35._12_4_ * auVar24._12_4_ + auVar64._12_4_ * auVar7._12_4_;
            auVar47._0_4_ = auVar35._0_4_ * auVar36._0_4_;
            auVar47._4_4_ = auVar35._4_4_ * auVar36._4_4_;
            auVar47._8_4_ = auVar35._8_4_ * auVar36._8_4_;
            auVar47._12_4_ = auVar35._12_4_ * auVar36._12_4_;
            auVar29._0_4_ = fVar57 * auVar24._0_4_;
            auVar29._4_4_ = fVar68 * auVar24._4_4_;
            auVar29._8_4_ = fVar70 * auVar24._8_4_;
            auVar29._12_4_ = fVar109 * auVar24._12_4_;
            auVar40 = vsubps_avx(auVar29,auVar47);
            auVar7 = vblendps_avx(auVar40,auVar86._0_16_,8);
            auVar24 = vblendps_avx(auVar39,auVar65,2);
            auVar7 = vblendps_avx(auVar7,auVar24,3);
            auVar25 = vinsertps_avx(auVar40,auVar39,0x58);
            auVar36 = vblendps_avx(auVar25,auVar65,4);
            auVar37 = vinsertps_avx(auVar40,auVar65,8);
            auVar35 = vblendps_avx(auVar37,auVar39,4);
            auVar38 = vinsertps_avx(auVar14,auVar106._0_16_,0x30);
            fVar57 = auVar38._0_4_;
            auVar104._0_4_ = fVar57 * auVar35._0_4_;
            fVar68 = auVar38._4_4_;
            auVar104._4_4_ = fVar68 * auVar35._4_4_;
            fVar70 = auVar38._8_4_;
            auVar104._8_4_ = fVar70 * auVar35._8_4_;
            fVar109 = auVar38._12_4_;
            auVar104._12_4_ = fVar109 * auVar35._12_4_;
            auVar84._0_4_ = fVar57 * auVar36._0_4_;
            auVar84._4_4_ = fVar68 * auVar36._4_4_;
            auVar84._8_4_ = fVar70 * auVar36._8_4_;
            auVar84._12_4_ = fVar109 * auVar36._12_4_;
            auVar48._0_4_ = fVar57 * auVar7._0_4_;
            auVar48._4_4_ = fVar68 * auVar7._4_4_;
            auVar48._8_4_ = fVar70 * auVar7._8_4_;
            auVar48._12_4_ = fVar109 * auVar7._12_4_;
            auVar7 = vmovlhps_avx(auVar24,auVar25);
            auVar25 = vunpckhpd_avx(auVar40,auVar65);
            auVar35 = vunpckhpd_avx(auVar39,auVar86._0_16_);
            auVar66._8_8_ = 0;
            auVar66._0_8_ = auVar37._0_8_;
            auVar36 = vshufps_avx(auVar7,auVar66,0x88);
            auVar24 = vshufps_avx(auVar7,auVar66,0xdd);
            auVar35 = vshufps_avx(auVar25,auVar35,0x88);
            auVar7 = vmovshdup_avx(auVar48);
            fVar57 = auVar24._0_4_;
            fVar68 = auVar24._4_4_;
            fVar70 = auVar24._8_4_;
            fVar109 = auVar24._12_4_;
            auVar24 = vshufpd_avx(auVar48,auVar48,1);
            auVar30._0_4_ =
                 auVar25._0_4_ * auVar24._0_4_ +
                 auVar48._0_4_ * auVar39._0_4_ + fVar57 * auVar7._0_4_;
            auVar30._4_4_ =
                 auVar25._4_4_ * auVar24._4_4_ +
                 auVar48._4_4_ * auVar39._4_4_ + fVar68 * auVar7._4_4_;
            auVar30._8_4_ =
                 auVar25._8_4_ * auVar24._8_4_ +
                 auVar48._8_4_ * auVar39._8_4_ + fVar70 * auVar7._8_4_;
            auVar30._12_4_ =
                 auVar25._12_4_ * auVar24._12_4_ +
                 auVar48._12_4_ * auVar39._12_4_ + fVar109 * auVar7._12_4_;
            auVar7 = vmovsldup_avx(auVar84);
            auVar24 = vshufps_avx(auVar84,auVar84,0xaa);
            auVar49._0_4_ =
                 auVar35._0_4_ * auVar24._0_4_ +
                 auVar36._0_4_ * auVar7._0_4_ + auVar84._0_4_ * fVar57;
            auVar49._4_4_ =
                 auVar35._4_4_ * auVar24._4_4_ +
                 auVar36._4_4_ * auVar7._4_4_ + auVar84._4_4_ * fVar68;
            auVar49._8_4_ =
                 auVar35._8_4_ * auVar24._8_4_ +
                 auVar36._8_4_ * auVar7._8_4_ + auVar84._8_4_ * fVar70;
            auVar49._12_4_ =
                 auVar35._12_4_ * auVar24._12_4_ +
                 auVar36._12_4_ * auVar7._12_4_ + auVar84._12_4_ * fVar109;
            auVar7 = vblendps_avx(auVar30,auVar49,2);
            auVar24 = vshufps_avx(auVar104,auVar104,0x55);
            auVar50._0_4_ =
                 auVar104._0_4_ * auVar35._0_4_ +
                 auVar36._0_4_ * auVar104._0_4_ + fVar57 * auVar24._0_4_;
            auVar50._4_4_ =
                 auVar104._4_4_ * auVar35._4_4_ +
                 auVar36._4_4_ * auVar104._4_4_ + fVar68 * auVar24._4_4_;
            auVar50._8_4_ =
                 auVar104._8_4_ * auVar35._8_4_ +
                 auVar36._8_4_ * auVar104._0_4_ + fVar70 * auVar24._8_4_;
            auVar50._12_4_ =
                 auVar104._12_4_ * auVar35._12_4_ +
                 auVar36._12_4_ * auVar104._4_4_ + fVar109 * auVar24._12_4_;
            auVar7 = vshufps_avx(auVar7,auVar50,0xa4);
            auVar110 = ZEXT1664(auVar7);
          }
        }
        auVar111 = ZEXT1664(CONCAT412(fStack_40c,CONCAT48(fStack_410,CONCAT44(fStack_414,local_418))
                                     ));
        lVar5 = *plVar1;
        local_4b8 = &local_460;
        cVar17 = (**(code **)(*local_340 + 8))(local_340,local_428,&local_358,lVar5);
        if (cVar17 != '\0') {
          local_448 = auVar110._0_16_;
          local_458 = auVar111._0_16_;
          local_488 = plVar16;
          local_490 = lVar20;
          local_498 = lVar18;
          local_4a8 = &local_358;
          local_4b0 = &local_138;
          local_4b8 = (uint *)&local_3f8;
          local_4a0 = &local_460;
          (*(code *)(&DAT_1416badb0)
                    [(ulonglong)*(byte *)((longlong)plVar15 + 0x19) * 0x22 +
                     (ulonglong)*(byte *)(lVar5 + 0x19)])(plVar15,lVar5,local_458,local_448);
        }
      }
      else {
        lVar18 = *(longlong *)(param_2 + 0x80);
        lVar20 = (ulonglong)uVar4 * 0x40;
        auVar7 = *(undefined1 (*) [16])(lVar18 + lVar20);
        auVar36 = vcvtph2ps_f16c(auVar7);
        auVar24 = *(undefined1 (*) [16])(lVar18 + 0x10 + lVar20);
        auVar7 = vshufps_avx(auVar7,auVar7,0xee);
        auVar35 = vcvtph2ps_f16c(auVar7);
        auVar7 = *(undefined1 (*) [16])(lVar18 + 0x20 + lVar20);
        auVar38 = vcvtph2ps_f16c(auVar24);
        auVar24 = vshufps_avx(auVar24,auVar24,0xee);
        auVar24 = vcvtph2ps_f16c(auVar24);
        auVar37 = vcvtph2ps_f16c(auVar7);
        auVar7 = vshufps_avx(auVar7,auVar7,0xee);
        auVar39 = vcvtph2ps_f16c(auVar7);
        auVar7 = *(undefined1 (*) [16])(lVar18 + 0x30 + lVar20);
        auVar41._0_4_ = local_408 * auVar36._0_4_;
        auVar41._4_4_ = local_408 * auVar36._4_4_;
        auVar41._8_4_ = local_408 * auVar36._8_4_;
        auVar41._12_4_ = local_408 * auVar36._12_4_;
        auVar59._0_4_ = local_408 * auVar24._0_4_;
        auVar59._4_4_ = local_408 * auVar24._4_4_;
        auVar59._8_4_ = local_408 * auVar24._8_4_;
        auVar59._12_4_ = local_408 * auVar24._12_4_;
        auVar25 = vminps_avx(auVar41,auVar59);
        auVar24 = vmaxps_avx(auVar41,auVar59);
        auVar74._0_4_ = fStack_404 * auVar35._0_4_;
        auVar74._4_4_ = fStack_404 * auVar35._4_4_;
        auVar74._8_4_ = fStack_404 * auVar35._8_4_;
        auVar74._12_4_ = fStack_404 * auVar35._12_4_;
        auVar60._0_4_ = fStack_404 * auVar37._0_4_;
        auVar60._4_4_ = fStack_404 * auVar37._4_4_;
        auVar60._8_4_ = fStack_404 * auVar37._8_4_;
        auVar60._12_4_ = fStack_404 * auVar37._12_4_;
        auVar37 = vminps_avx(auVar74,auVar60);
        auVar36 = vmaxps_avx(auVar74,auVar60);
        auVar78._0_4_ = fStack_400 * auVar38._0_4_;
        auVar78._4_4_ = fStack_400 * auVar38._4_4_;
        auVar78._8_4_ = fStack_400 * auVar38._8_4_;
        auVar78._12_4_ = fStack_400 * auVar38._12_4_;
        auVar75._0_4_ = auVar39._0_4_ * fStack_400;
        auVar75._4_4_ = auVar39._4_4_ * fStack_400;
        auVar75._8_4_ = auVar39._8_4_ * fStack_400;
        auVar75._12_4_ = auVar39._12_4_ * fStack_400;
        auVar38 = vminps_avx(auVar78,auVar75);
        auVar35 = vmaxps_avx(auVar78,auVar75);
        auVar79._4_4_ = local_378._0_4_;
        auVar79._0_4_ = local_378._0_4_;
        auVar79._8_4_ = local_378._0_4_;
        auVar79._12_4_ = local_378._0_4_;
        auVar24 = vcmpps_avx(auVar24,auVar79,5);
        auVar80._4_4_ = local_378._4_4_;
        auVar80._0_4_ = local_378._4_4_;
        auVar80._8_4_ = local_378._4_4_;
        auVar80._12_4_ = local_378._4_4_;
        auVar36 = vcmpps_avx(auVar36,auVar80,5);
        auVar81._4_4_ = local_378._8_4_;
        auVar81._0_4_ = local_378._8_4_;
        auVar81._8_4_ = local_378._8_4_;
        auVar81._12_4_ = local_378._8_4_;
        auVar35 = vcmpps_avx(auVar35,auVar81,5);
        auVar82._4_4_ = local_368._0_4_;
        auVar82._0_4_ = local_368._0_4_;
        auVar82._8_4_ = local_368._0_4_;
        auVar82._12_4_ = local_368._0_4_;
        auVar25 = vcmpps_avx(auVar82,auVar25,5);
        auVar24 = vandps_avx(auVar24,auVar25);
        auVar83._4_4_ = local_368._4_4_;
        auVar83._0_4_ = local_368._4_4_;
        auVar83._8_4_ = local_368._4_4_;
        auVar83._12_4_ = local_368._4_4_;
        auVar25 = vcmpps_avx(auVar83,auVar37,5);
        auVar36 = vandps_avx(auVar36,auVar25);
        auVar24 = vandps_avx(auVar24,auVar36);
        auVar61._4_4_ = local_368._8_4_;
        auVar61._0_4_ = local_368._8_4_;
        auVar61._8_4_ = local_368._8_4_;
        auVar61._12_4_ = local_368._8_4_;
        auVar36 = vcmpps_avx(auVar61,auVar38,5);
        auVar36 = vandps_avx(auVar35,auVar36);
        auVar24 = vandps_avx(auVar36,auVar24);
        auVar36 = vshufps_avx(auVar7,auVar7,0xf4);
        auVar35 = vshufps_avx(auVar24,auVar24,0xaa);
        auVar7 = vblendvps_avx(auVar36,auVar7,auVar35);
        auVar36 = vshufps_avx(auVar7,auVar7,0xf8);
        auVar35 = vshufps_avx(auVar24,auVar24,0x55);
        auVar7 = vblendvps_avx(auVar36,auVar7,auVar35);
        auVar36 = vshufps_avx(auVar7,auVar7,0xf9);
        auVar35 = vshufps_avx(auVar24,auVar24,0);
        auVar7 = vblendvps_avx(auVar36,auVar7,auVar35);
        uVar19 = vmovmskps_avx(auVar24);
        *(undefined1 (*) [16])(local_338 + (ulonglong)uVar22 * 4) = auVar7;
        uVar22 = uVar22 + POPCOUNT(uVar19);
      }
      lVar18 = local_430;
      if (*(float *)(local_430 + 8) <= fVar88) break;
    }
    lVar18 = 0;
    bVar6 = 0 < (int)uVar22;
    uVar22 = uVar22 - 1;
  } while (bVar6);
  auVar13._8_8_ = uStack_470;
  auVar13._0_8_ = local_478;
  if (local_480 != (undefined1 (*) [16])0x0) {
    uVar21 = rdtsc();
    auVar24 = vpinsrq_avx(auVar13,uVar21 & 0xffffffff00000000 |
                                  CONCAT44((int)((ulonglong)lVar18 >> 0x20),(int)uVar21),1);
    auVar7 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b859),0));
    *local_480 = auVar7;
    auVar7 = vmovntdq_avx(auVar24);
    local_480[1] = auVar7;
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_4d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_4d8);
}

