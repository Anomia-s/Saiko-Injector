/**
 * Function: void_jph_debugrenderer_drawswingconelimitsrma
 * Address:  14037dae0
 * Signature: undefined void_jph_debugrenderer_drawswingconelimitsrma(void)
 * Body size: 2928 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void void_jph_debugrenderer_drawswingconelimitsrma
               (longlong *param_1,float *param_2,float param_3,float param_4,uint param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 extraout_var;
  undefined4 uVar5;
  int *piVar4;
  float *pfVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  undefined1 (*pauVar13) [16];
  int *piVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  uint uVar67;
  float fVar71;
  uint uVar72;
  float fVar73;
  uint uVar74;
  float fVar75;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  uint uVar76;
  float fVar77;
  float fVar78;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar85;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar86 [16];
  float fVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar96;
  float fVar97;
  undefined1 auVar94 [16];
  undefined1 auVar95 [64];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [64];
  undefined1 auVar102 [64];
  uint uVar103;
  uint uVar105;
  uint uVar106;
  undefined1 auVar104 [16];
  uint uVar107;
  undefined1 auVar108 [16];
  undefined1 auStack_588 [32];
  undefined4 local_568;
  undefined8 *local_560;
  undefined4 local_558;
  undefined4 local_550;
  undefined4 local_548;
  undefined8 *local_540;
  ulonglong local_538;
  undefined8 uStack_530;
  float local_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  undefined1 local_508 [16];
  float local_4f8 [7];
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  undefined1 local_2f8 [520];
  ulonglong local_f0;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  undefined1 extraout_var_07 [56];
  undefined1 auVar81 [64];
  undefined1 auVar93 [64];
  
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_588;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar15 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar15 == 0) {
LAB_14037dc04:
    pauVar11 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar67 = *(uint *)(lVar15 + 0x200020);
    if (0xffff < (ulonglong)uVar67) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_14037dc04;
    }
    *(uint *)(lVar15 + 0x200020) = uVar67 + 1;
    pauVar11 = (undefined1 (*) [16])(lVar15 + (ulonglong)uVar67 * 0x20 + 0x20);
    uVar1 = rdtsc();
    local_538 = uVar1 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar15 >> 0x20),(int)uVar1);
    uStack_530 = 0;
  }
  local_520 = param_3;
  fStack_51c = param_4;
  cVar3 = FUN_1403808e0(param_1 + 8,&local_520,local_4f8);
  puVar9 = (undefined8 *)(param_1[8] + (ulonglong)(uint)local_4f8[0] * 0x10);
  if (cVar3 == '\0') {
    puVar12 = (undefined8 *)(param_1[8] + (ulonglong)(uint)local_4f8[0] * 0x10 + 8);
    piVar14 = (int *)puVar9[1];
    if (piVar14 == (int *)0x0) goto LAB_14037dc6e;
  }
  else {
    *puVar9 = CONCAT44(fStack_51c,local_520);
    puVar9[1] = 0;
    puVar12 = puVar9 + 1;
LAB_14037dc6e:
    pfVar6 = local_4f8;
    FUN_1403814d0(param_1 + 0xc,pfVar6,&local_520);
    if (local_4f8[2] == *(float *)((longlong)param_1 + 0x74)) {
LAB_14037dd4a:
      piVar14 = (int *)*puVar12;
LAB_14037dd4e:
      if (piVar14 != (int *)0x0) goto LAB_14037dd57;
    }
    else {
      lVar15 = param_1[0xc];
      piVar14 = (int *)*puVar12;
      piVar4 = *(int **)(lVar15 + 8 + (ulonglong)(uint)local_4f8[2] * 0x10);
      if (piVar14 == piVar4) goto LAB_14037dd4e;
      if (piVar14 != (int *)0x0) {
        puVar9 = (undefined8 *)(lVar15 + (ulonglong)(uint)local_4f8[2] * 0x10 + 8);
        LOCK();
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (*piVar14 == 0) {
          plVar7 = *(longlong **)(piVar14 + 6);
          if (plVar7 != (longlong *)0x0) {
            local_540 = puVar9;
            if (*(longlong *)(piVar14 + 2) != 0) {
              plVar10 = plVar7 + *(longlong *)(piVar14 + 2) * 2;
              do {
                if ((longlong *)*plVar7 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)*plVar7 + 0x10))();
                }
                plVar7 = plVar7 + 2;
              } while (plVar7 < plVar10);
              plVar7 = *(longlong **)(piVar14 + 6);
            }
            piVar14[2] = 0;
            piVar14[3] = 0;
            (*DAT_14151f538)(plVar7);
            *(undefined1 (*) [16])(piVar14 + 4) = (undefined1  [16])0x0;
            puVar9 = local_540;
          }
          (*DAT_14151f538)(piVar14);
        }
        piVar4 = (int *)*puVar9;
      }
      *puVar12 = piVar4;
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        goto LAB_14037dd4a;
      }
    }
    auVar45 = vshufps_avx(ZEXT416((uint)(param_4 * 0.5)),ZEXT416((uint)(param_4 * 0.5)),0);
    auVar104 = vandps_avx(auVar45,_DAT_140de34a0);
    auVar44._0_4_ = (int)(auVar104._0_4_ * 0.63661975 + 0.5);
    auVar44._4_4_ = (int)(auVar104._4_4_ * 0.63661975 + 0.5);
    auVar44._8_4_ = (int)(auVar104._8_4_ * 0.63661975 + 0.5);
    auVar44._12_4_ = (int)(auVar104._12_4_ * 0.63661975 + 0.5);
    auVar46 = vcvtdq2ps_avx(auVar44);
    fVar78 = auVar46._0_4_;
    auVar86._0_4_ = fVar78 * 1.5703125;
    fVar90 = auVar46._4_4_;
    auVar86._4_4_ = fVar90 * 1.5703125;
    fVar96 = auVar46._8_4_;
    auVar86._8_4_ = fVar96 * 1.5703125;
    fVar97 = auVar46._12_4_;
    auVar86._12_4_ = fVar97 * 1.5703125;
    auVar104 = vsubps_avx(auVar104,auVar86);
    auVar91._0_4_ = fVar78 * 0.0004837513;
    auVar91._4_4_ = fVar90 * 0.0004837513;
    auVar91._8_4_ = fVar96 * 0.0004837513;
    auVar91._12_4_ = fVar97 * 0.0004837513;
    auVar104 = vsubps_avx(auVar104,auVar91);
    auVar94._0_4_ = fVar78 * 7.54979e-08;
    auVar94._4_4_ = fVar90 * 7.54979e-08;
    auVar94._8_4_ = fVar96 * 7.54979e-08;
    auVar94._12_4_ = fVar97 * 7.54979e-08;
    auVar104 = vsubps_avx(auVar104,auVar94);
    fVar78 = auVar104._0_4_;
    fVar66 = fVar78 * fVar78;
    fVar90 = auVar104._4_4_;
    fVar71 = fVar90 * fVar90;
    fVar96 = auVar104._8_4_;
    fVar73 = fVar96 * fVar96;
    fVar97 = auVar104._12_4_;
    fVar75 = fVar97 * fVar97;
    auVar46._0_4_ =
         fVar66 * fVar66 * (fVar66 * (fVar66 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar46._4_4_ =
         fVar71 * fVar71 * (fVar71 * (fVar71 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar46._8_4_ =
         fVar73 * fVar73 * (fVar73 * (fVar73 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar46._12_4_ =
         fVar75 * fVar75 * (fVar75 * (fVar75 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar108._0_4_ = fVar66 * 0.5;
    auVar108._4_4_ = fVar71 * 0.5;
    auVar108._8_4_ = fVar73 * 0.5;
    auVar108._12_4_ = fVar75 * 0.5;
    auVar104 = vsubps_avx(auVar46,auVar108);
    auVar58._0_4_ = fVar66 * 0.00019515296;
    auVar58._4_4_ = fVar71 * 0.00019515296;
    auVar58._8_4_ = fVar73 * 0.00019515296;
    auVar58._12_4_ = fVar75 * 0.00019515296;
    auVar65._8_4_ = 0x3c08839e;
    auVar65._0_8_ = 0x3c08839e3c08839e;
    auVar65._12_4_ = 0x3c08839e;
    auVar46 = vsubps_avx(auVar65,auVar58);
    auVar70._0_4_ = fVar78 + fVar78 * (fVar66 * auVar46._0_4_ + -0.16666655) * fVar66;
    auVar70._4_4_ = fVar90 + fVar90 * (fVar71 * auVar46._4_4_ + -0.16666655) * fVar71;
    auVar70._8_4_ = fVar96 + fVar96 * (fVar73 * auVar46._8_4_ + -0.16666655) * fVar73;
    auVar70._12_4_ = fVar97 + fVar97 * (fVar75 * auVar46._12_4_ + -0.16666655) * fVar75;
    auVar98._0_4_ = auVar104._0_4_ + 1.0;
    auVar98._4_4_ = auVar104._4_4_ + 1.0;
    auVar98._8_4_ = auVar104._8_4_ + 1.0;
    auVar98._12_4_ = auVar104._12_4_ + 1.0;
    auVar104 = vpslld_avx(auVar44,0x1f);
    auVar46 = vblendvps_avx(auVar70,auVar98,auVar104);
    auVar58 = vshufps_avx(ZEXT416((uint)(param_3 * 0.5)),ZEXT416((uint)(param_3 * 0.5)),0);
    auVar104 = vandps_avx(auVar58,_DAT_140de34a0);
    auVar61._0_4_ = (int)(auVar104._0_4_ * 0.63661975 + 0.5);
    auVar61._4_4_ = (int)(auVar104._4_4_ * 0.63661975 + 0.5);
    auVar61._8_4_ = (int)(auVar104._8_4_ * 0.63661975 + 0.5);
    auVar61._12_4_ = (int)(auVar104._12_4_ * 0.63661975 + 0.5);
    auVar55 = vcvtdq2ps_avx(auVar61);
    fVar78 = auVar55._0_4_;
    auVar92._0_4_ = fVar78 * 1.5703125;
    fVar90 = auVar55._4_4_;
    auVar92._4_4_ = fVar90 * 1.5703125;
    fVar96 = auVar55._8_4_;
    auVar92._8_4_ = fVar96 * 1.5703125;
    fVar97 = auVar55._12_4_;
    auVar92._12_4_ = fVar97 * 1.5703125;
    auVar104 = vsubps_avx(auVar104,auVar92);
    auVar99._0_4_ = fVar78 * 0.0004837513;
    auVar99._4_4_ = fVar90 * 0.0004837513;
    auVar99._8_4_ = fVar96 * 0.0004837513;
    auVar99._12_4_ = fVar97 * 0.0004837513;
    auVar104 = vsubps_avx(auVar104,auVar99);
    auVar100._0_4_ = fVar78 * 7.54979e-08;
    auVar100._4_4_ = fVar90 * 7.54979e-08;
    auVar100._8_4_ = fVar96 * 7.54979e-08;
    auVar100._12_4_ = fVar97 * 7.54979e-08;
    auVar104 = vsubps_avx(auVar104,auVar100);
    fVar78 = auVar104._0_4_;
    fVar66 = fVar78 * fVar78;
    fVar90 = auVar104._4_4_;
    fVar71 = fVar90 * fVar90;
    fVar96 = auVar104._8_4_;
    fVar73 = fVar96 * fVar96;
    fVar97 = auVar104._12_4_;
    fVar75 = fVar97 * fVar97;
    auVar79._0_4_ =
         fVar66 * fVar66 * (fVar66 * (fVar66 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar79._4_4_ =
         fVar71 * fVar71 * (fVar71 * (fVar71 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar79._8_4_ =
         fVar73 * fVar73 * (fVar73 * (fVar73 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar79._12_4_ =
         fVar75 * fVar75 * (fVar75 * (fVar75 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar104._0_4_ = fVar66 * 0.5;
    auVar104._4_4_ = fVar71 * 0.5;
    auVar104._8_4_ = fVar73 * 0.5;
    auVar104._12_4_ = fVar75 * 0.5;
    auVar104 = vsubps_avx(auVar79,auVar104);
    auVar55._0_4_ = auVar104._0_4_ + 1.0;
    auVar55._4_4_ = auVar104._4_4_ + 1.0;
    auVar55._8_4_ = auVar104._8_4_ + 1.0;
    auVar55._12_4_ = auVar104._12_4_ + 1.0;
    auVar80._0_4_ = fVar66 * 0.00019515296;
    auVar80._4_4_ = fVar71 * 0.00019515296;
    auVar80._8_4_ = fVar73 * 0.00019515296;
    auVar80._12_4_ = fVar75 * 0.00019515296;
    auVar104 = vsubps_avx(auVar65,auVar80);
    auVar59._0_4_ = fVar78 + fVar78 * fVar66 * (fVar66 * auVar104._0_4_ + -0.16666655);
    auVar59._4_4_ = fVar90 + fVar90 * fVar71 * (fVar71 * auVar104._4_4_ + -0.16666655);
    auVar59._8_4_ = fVar96 + fVar96 * fVar73 * (fVar73 * auVar104._8_4_ + -0.16666655);
    auVar59._12_4_ = fVar97 + fVar97 * fVar75 * (fVar75 * auVar104._12_4_ + -0.16666655);
    auVar104 = vpslld_avx(auVar61,0x1f);
    auVar55 = vblendvps_avx(auVar59,auVar55,auVar104);
    uVar5 = 0x80000000;
    auVar59 = SUB6416(ZEXT864(0x8000000080000000),0);
    auVar104 = vandps_avx(auVar45,auVar59);
    auVar45 = vpslld_avx(auVar44,0x1e);
    auVar45 = vpand_avx(auVar45,auVar59);
    fVar78 = (float)(auVar46._0_4_ ^ auVar104._0_4_ ^ auVar45._0_4_);
    auVar81 = ZEXT1664(CONCAT412(auVar46._12_4_ ^ auVar104._12_4_ ^ auVar45._12_4_,
                                 CONCAT48(auVar46._8_4_ ^ auVar104._8_4_ ^ auVar45._8_4_,
                                          (ulonglong)(uint)fVar78)));
    auVar104 = vandps_avx(auVar58,auVar59);
    auVar46 = vpslld_avx(auVar61,0x1e);
    auVar46 = vpand_avx(auVar46,auVar59);
    fVar90 = (float)(auVar104._0_4_ ^ auVar46._0_4_ ^ auVar55._0_4_);
    auVar93 = ZEXT1664(CONCAT412(auVar104._12_4_ ^ auVar46._12_4_ ^ auVar55._12_4_,
                                 CONCAT48(auVar104._8_4_ ^ auVar46._8_4_ ^ auVar55._8_4_,
                                          (ulonglong)(uint)fVar90)));
    if (((fVar78 <= 0.0) && (fVar90 <= 0.0)) || ((1.0 <= fVar78 && (1.0 <= fVar90))))
    goto LAB_14037def5;
    fVar78 = fVar78 * fVar78;
    auVar95 = ZEXT464((uint)fVar78);
    fVar90 = fVar90 * fVar90;
    auVar101 = ZEXT464((uint)fVar90);
    uVar74 = 0x80000000;
    uVar67 = 0x80000000;
    uVar72 = 0x80000000;
    uVar76 = 0x80000000;
    if (fVar90 <= fVar78) {
      auVar45._0_4_ = -fVar90;
      auVar45._4_4_ = 0x80000000;
      auVar45._8_4_ = 0x80000000;
      auVar45._12_4_ = 0x80000000;
      auVar95 = ZEXT1664(CONCAT124(auVar45._4_12_,auVar45._0_4_ / fVar78));
      lVar15 = 0;
      fVar71 = 0.0;
      auVar93 = ZEXT464(0) << 0x20;
      fVar78 = 1.0;
      uVar103 = 0;
      uVar105 = 0;
      uVar106 = 0x80000000;
      uVar107 = 0;
      fVar90 = -1.0;
      fVar96 = -0.0;
      fVar97 = -0.0;
      fVar66 = -0.0;
      do {
        fVar73 = auVar81._0_4_ * ((float)(int)lVar15 + (float)(int)lVar15) * 0.03125 - auVar81._0_4_
        ;
        auVar102 = ZEXT464((uint)fVar73);
        auVar46 = ZEXT416((uint)fVar73);
        auVar104 = vfmadd213ss_fma(ZEXT416((uint)(fVar73 * fVar73)),auVar95._0_16_,auVar101._0_16_);
        fVar73 = auVar104._0_4_;
        auVar21._0_12_ = ZEXT812(0);
        auVar21._12_4_ = 0;
        if (fVar71 < fVar73) {
          if (fVar73 < fVar71) {
            auVar38._0_4_ = sqrtf(fVar73);
            auVar38._4_4_ = extraout_XMM0_Db_02;
            auVar46 = auVar102._0_16_;
            auVar38._8_56_ = extraout_var_03;
            auVar21 = auVar38._0_16_;
          }
          else {
            auVar21 = vsqrtss_avx(auVar104,auVar104);
          }
        }
        auVar104 = vblendps_avx(auVar93._0_16_,auVar46,1);
        auVar46 = vblendps_avx(auVar93._0_16_,auVar21,1);
        auVar46 = vshufps_avx(auVar46,auVar104,0x41);
        auVar102 = ZEXT1664(auVar46);
        auVar22._0_4_ = auVar46._0_4_ * auVar46._0_4_;
        auVar22._4_4_ = auVar46._4_4_ * auVar46._4_4_;
        auVar22._8_4_ = auVar46._8_4_ * auVar46._8_4_;
        auVar22._12_4_ = auVar46._12_4_ * auVar46._12_4_;
        auVar104 = vinsertps_avx(auVar22,auVar22,0x4c);
        auVar23._0_4_ = auVar22._0_4_ + auVar104._0_4_;
        auVar23._4_4_ = auVar22._4_4_ + auVar104._4_4_;
        auVar23._8_4_ = auVar22._8_4_ + auVar104._8_4_;
        auVar23._12_4_ = auVar22._12_4_ + auVar104._12_4_;
        auVar104 = vshufpd_avx(auVar23,auVar23,1);
        fVar73 = fVar78 - (auVar23._0_4_ + auVar104._0_4_);
        if (fVar73 < fVar71) {
          auVar37._0_4_ = sqrtf(fVar73);
          auVar37._4_4_ = extraout_XMM0_Db_01;
          auVar46 = auVar102._0_16_;
          auVar37._8_56_ = extraout_var_02;
          auVar104 = auVar37._0_16_;
        }
        else {
          auVar104 = vsqrtss_avx(ZEXT416((uint)fVar73),ZEXT416((uint)fVar73));
        }
        auVar104 = vinsertps_avx(auVar46,auVar104,0x30);
        fVar73 = auVar104._0_4_;
        auVar48._0_4_ = fVar73 + fVar73;
        fVar75 = auVar104._4_4_;
        auVar48._4_4_ = fVar75 + fVar75;
        fVar77 = auVar104._8_4_;
        auVar48._8_4_ = fVar77 + fVar77;
        fVar82 = auVar104._12_4_;
        auVar48._12_4_ = fVar82 + fVar82;
        auVar46 = vshufps_avx(auVar48,auVar48,0);
        auVar55 = vshufps_avx(auVar48,auVar48,0xff);
        auVar104 = vshufps_avx(auVar104,auVar104,0x1b);
        lVar15 = lVar15 + 1;
        *pfVar6 = fVar90 + fVar73 * auVar46._0_4_ +
                           (float)(uVar103 ^ (uint)(auVar104._0_4_ * auVar55._0_4_));
        pfVar6[1] = fVar96 + fVar75 * auVar46._4_4_ +
                             (float)(uVar105 ^ (uint)(auVar104._4_4_ * auVar55._4_4_));
        pfVar6[2] = fVar97 + fVar77 * auVar46._8_4_ +
                             (float)(uVar106 ^ (uint)(auVar104._8_4_ * auVar55._8_4_));
        pfVar6[3] = fVar66 + fVar82 * auVar46._12_4_ +
                             (float)(uVar107 ^ (uint)(auVar104._12_4_ * auVar55._12_4_));
        pfVar6 = pfVar6 + 4;
      } while (lVar15 != 0x20);
      iVar8 = 0;
      pauVar13 = (undefined1 (*) [16])local_2f8;
      fVar71 = 0.0;
      auVar93 = ZEXT1264(ZEXT812(0));
      do {
        fVar73 = auVar81._0_4_ * ((float)iVar8 + (float)iVar8) * 0.03125 - auVar81._0_4_;
        auVar102 = ZEXT464((uint)fVar73);
        auVar46 = ZEXT416((uint)fVar73);
        auVar104 = vfmadd213ss_fma(ZEXT416((uint)(fVar73 * fVar73)),auVar95._0_16_,auVar101._0_16_);
        fVar73 = auVar104._0_4_;
        auVar30._0_12_ = ZEXT812(0);
        auVar30._12_4_ = 0;
        if (fVar71 < fVar73) {
          if (fVar73 < fVar71) {
            auVar42._0_4_ = sqrtf(fVar73);
            auVar42._4_4_ = extraout_XMM0_Db_06;
            auVar46 = auVar102._0_16_;
            auVar42._8_56_ = extraout_var_07;
            auVar30 = auVar42._0_16_;
          }
          else {
            auVar30 = vsqrtss_avx(auVar104,auVar104);
          }
        }
        auVar31._0_4_ = auVar46._0_4_ ^ uVar67;
        auVar31._4_4_ = auVar46._4_4_ ^ uVar72;
        auVar31._8_4_ = auVar46._8_4_ ^ uVar74;
        auVar31._12_4_ = auVar46._12_4_ ^ uVar76;
        auVar52._0_4_ = auVar30._0_4_ ^ uVar67;
        auVar52._4_4_ = auVar30._4_4_ ^ uVar72;
        auVar52._8_4_ = auVar30._8_4_ ^ uVar74;
        auVar52._12_4_ = auVar30._12_4_ ^ uVar76;
        auVar104 = vblendps_avx(auVar93._0_16_,auVar31,1);
        auVar46 = vblendps_avx(auVar93._0_16_,auVar52,1);
        auVar46 = vshufps_avx(auVar46,auVar104,0x41);
        auVar102 = ZEXT1664(auVar46);
        auVar32._0_4_ = auVar46._0_4_ * auVar46._0_4_;
        auVar32._4_4_ = auVar46._4_4_ * auVar46._4_4_;
        auVar32._8_4_ = auVar46._8_4_ * auVar46._8_4_;
        auVar32._12_4_ = auVar46._12_4_ * auVar46._12_4_;
        auVar104 = vinsertps_avx(auVar32,auVar32,0x4c);
        auVar33._0_4_ = auVar32._0_4_ + auVar104._0_4_;
        auVar33._4_4_ = auVar32._4_4_ + auVar104._4_4_;
        auVar33._8_4_ = auVar32._8_4_ + auVar104._8_4_;
        auVar33._12_4_ = auVar32._12_4_ + auVar104._12_4_;
        auVar104 = vshufpd_avx(auVar33,auVar33,1);
        fVar73 = fVar78 - (auVar33._0_4_ + auVar104._0_4_);
        if (fVar73 < fVar71) {
          auVar41._0_4_ = sqrtf(fVar73);
          auVar41._4_4_ = extraout_XMM0_Db_05;
          auVar46 = auVar102._0_16_;
          auVar41._8_56_ = extraout_var_06;
          auVar104 = auVar41._0_16_;
        }
        else {
          auVar104 = vsqrtss_avx(ZEXT416((uint)fVar73),ZEXT416((uint)fVar73));
        }
        auVar104 = vinsertps_avx(auVar46,auVar104,0x30);
        fVar73 = auVar104._0_4_;
        auVar51._0_4_ = fVar73 + fVar73;
        fVar75 = auVar104._4_4_;
        auVar51._4_4_ = fVar75 + fVar75;
        fVar77 = auVar104._8_4_;
        auVar51._8_4_ = fVar77 + fVar77;
        fVar82 = auVar104._12_4_;
        auVar51._12_4_ = fVar82 + fVar82;
        auVar46 = vshufps_avx(auVar51,auVar51,0);
        auVar55 = vshufps_avx(auVar51,auVar51,0xff);
        auVar104 = vshufps_avx(auVar104,auVar104,0x1b);
        auVar29._0_4_ =
             fVar90 + fVar73 * auVar46._0_4_ +
                      (float)(uVar103 ^ (uint)(auVar104._0_4_ * auVar55._0_4_));
        auVar29._4_4_ =
             fVar96 + fVar75 * auVar46._4_4_ +
                      (float)(uVar105 ^ (uint)(auVar104._4_4_ * auVar55._4_4_));
        auVar29._8_4_ =
             fVar97 + fVar77 * auVar46._8_4_ +
                      (float)(uVar106 ^ (uint)(auVar104._8_4_ * auVar55._8_4_));
        auVar29._12_4_ =
             fVar66 + fVar82 * auVar46._12_4_ +
                      (float)(uVar107 ^ (uint)(auVar104._12_4_ * auVar55._12_4_));
        *pauVar13 = auVar29;
        iVar8 = iVar8 + 1;
        pauVar13 = pauVar13 + 1;
      } while (iVar8 != 0x20);
    }
    else {
      auVar17._0_4_ = -fVar78;
      auVar17._4_4_ = 0x80000000;
      auVar17._8_4_ = 0x80000000;
      auVar17._12_4_ = 0x80000000;
      auVar81 = ZEXT1664(CONCAT124(auVar17._4_12_,auVar17._0_4_ / fVar90));
      pfVar6 = local_4f8;
      lVar15 = 0;
      fVar71 = 0.0;
      auVar101 = ZEXT464(0) << 0x20;
      fVar78 = 1.0;
      uVar103 = 0;
      uVar105 = 0;
      uVar106 = 0x80000000;
      uVar107 = 0;
      fVar90 = -1.0;
      fVar96 = -0.0;
      fVar97 = -0.0;
      fVar66 = -0.0;
      do {
        fVar73 = auVar93._0_4_ +
                 auVar93._0_4_ * ((float)(int)lVar15 + (float)(int)lVar15) * -0.03125;
        auVar102 = ZEXT464((uint)fVar73);
        auVar46 = ZEXT416((uint)fVar73);
        auVar104 = vfmadd213ss_fma(ZEXT416((uint)(fVar73 * fVar73)),auVar81._0_16_,auVar95._0_16_);
        fVar73 = auVar104._0_4_;
        auVar18._0_12_ = ZEXT812(0);
        auVar18._12_4_ = 0;
        if (fVar71 < fVar73) {
          if (fVar73 < fVar71) {
            auVar36._0_4_ = sqrtf(fVar73);
            auVar36._4_4_ = extraout_XMM0_Db_00;
            auVar46 = auVar102._0_16_;
            auVar36._8_56_ = extraout_var_01;
            auVar18 = auVar36._0_16_;
          }
          else {
            auVar18 = vsqrtss_avx(auVar104,auVar104);
          }
        }
        auVar104 = vblendps_avx(auVar101._0_16_,auVar18,1);
        auVar46 = vblendps_avx(auVar101._0_16_,auVar46,1);
        auVar46 = vshufps_avx(auVar46,auVar104,0x41);
        auVar102 = ZEXT1664(auVar46);
        auVar19._0_4_ = auVar46._0_4_ * auVar46._0_4_;
        auVar19._4_4_ = auVar46._4_4_ * auVar46._4_4_;
        auVar19._8_4_ = auVar46._8_4_ * auVar46._8_4_;
        auVar19._12_4_ = auVar46._12_4_ * auVar46._12_4_;
        auVar104 = vinsertps_avx(auVar19,auVar19,0x4c);
        auVar20._0_4_ = auVar19._0_4_ + auVar104._0_4_;
        auVar20._4_4_ = auVar19._4_4_ + auVar104._4_4_;
        auVar20._8_4_ = auVar19._8_4_ + auVar104._8_4_;
        auVar20._12_4_ = auVar19._12_4_ + auVar104._12_4_;
        auVar104 = vshufpd_avx(auVar20,auVar20,1);
        fVar73 = fVar78 - (auVar20._0_4_ + auVar104._0_4_);
        if (fVar73 < fVar71) {
          auVar35._0_4_ = sqrtf(fVar73);
          auVar35._4_4_ = extraout_XMM0_Db;
          auVar46 = auVar102._0_16_;
          auVar35._8_56_ = extraout_var_00;
          auVar104 = auVar35._0_16_;
        }
        else {
          auVar104 = vsqrtss_avx(ZEXT416((uint)fVar73),ZEXT416((uint)fVar73));
        }
        auVar104 = vinsertps_avx(auVar46,auVar104,0x30);
        fVar73 = auVar104._0_4_;
        auVar47._0_4_ = fVar73 + fVar73;
        fVar75 = auVar104._4_4_;
        auVar47._4_4_ = fVar75 + fVar75;
        fVar77 = auVar104._8_4_;
        auVar47._8_4_ = fVar77 + fVar77;
        fVar82 = auVar104._12_4_;
        auVar47._12_4_ = fVar82 + fVar82;
        auVar46 = vshufps_avx(auVar47,auVar47,0);
        auVar55 = vshufps_avx(auVar47,auVar47,0xff);
        auVar104 = vshufps_avx(auVar104,auVar104,0x1b);
        lVar15 = lVar15 + 1;
        *pfVar6 = fVar90 + fVar73 * auVar46._0_4_ +
                           (float)(uVar103 ^ (uint)(auVar104._0_4_ * auVar55._0_4_));
        pfVar6[1] = fVar96 + fVar75 * auVar46._4_4_ +
                             (float)(uVar105 ^ (uint)(auVar104._4_4_ * auVar55._4_4_));
        pfVar6[2] = fVar97 + fVar77 * auVar46._8_4_ +
                             (float)(uVar106 ^ (uint)(auVar104._8_4_ * auVar55._8_4_));
        pfVar6[3] = fVar66 + fVar82 * auVar46._12_4_ +
                             (float)(uVar107 ^ (uint)(auVar104._12_4_ * auVar55._12_4_));
        pfVar6 = pfVar6 + 4;
      } while (lVar15 != 0x20);
      iVar8 = 0;
      pauVar13 = (undefined1 (*) [16])local_2f8;
      fVar71 = 0.0;
      auVar101 = ZEXT1264(ZEXT812(0));
      do {
        fVar73 = auVar93._0_4_ + auVar93._0_4_ * ((float)iVar8 + (float)iVar8) * -0.03125;
        auVar102 = ZEXT464((uint)fVar73);
        auVar46 = ZEXT416((uint)fVar73);
        auVar104 = vfmadd213ss_fma(ZEXT416((uint)(fVar73 * fVar73)),auVar81._0_16_,auVar95._0_16_);
        fVar73 = auVar104._0_4_;
        auVar25._0_12_ = ZEXT812(0);
        auVar25._12_4_ = 0;
        if (fVar71 < fVar73) {
          if (fVar73 < fVar71) {
            auVar40._0_4_ = sqrtf(fVar73);
            auVar40._4_4_ = extraout_XMM0_Db_04;
            auVar46 = auVar102._0_16_;
            auVar40._8_56_ = extraout_var_05;
            auVar25 = auVar40._0_16_;
          }
          else {
            auVar25 = vsqrtss_avx(auVar104,auVar104);
          }
        }
        auVar26._0_4_ = auVar25._0_4_ ^ uVar67;
        auVar26._4_4_ = auVar25._4_4_ ^ uVar72;
        auVar26._8_4_ = auVar25._8_4_ ^ uVar74;
        auVar26._12_4_ = auVar25._12_4_ ^ uVar76;
        auVar50._0_4_ = auVar46._0_4_ ^ uVar67;
        auVar50._4_4_ = auVar46._4_4_ ^ uVar72;
        auVar50._8_4_ = auVar46._8_4_ ^ uVar74;
        auVar50._12_4_ = auVar46._12_4_ ^ uVar76;
        auVar104 = vblendps_avx(auVar101._0_16_,auVar26,1);
        auVar46 = vblendps_avx(auVar101._0_16_,auVar50,1);
        auVar46 = vshufps_avx(auVar46,auVar104,0x41);
        auVar102 = ZEXT1664(auVar46);
        auVar27._0_4_ = auVar46._0_4_ * auVar46._0_4_;
        auVar27._4_4_ = auVar46._4_4_ * auVar46._4_4_;
        auVar27._8_4_ = auVar46._8_4_ * auVar46._8_4_;
        auVar27._12_4_ = auVar46._12_4_ * auVar46._12_4_;
        auVar104 = vinsertps_avx(auVar27,auVar27,0x4c);
        auVar28._0_4_ = auVar27._0_4_ + auVar104._0_4_;
        auVar28._4_4_ = auVar27._4_4_ + auVar104._4_4_;
        auVar28._8_4_ = auVar27._8_4_ + auVar104._8_4_;
        auVar28._12_4_ = auVar27._12_4_ + auVar104._12_4_;
        auVar104 = vshufpd_avx(auVar28,auVar28,1);
        fVar73 = fVar78 - (auVar28._0_4_ + auVar104._0_4_);
        if (fVar73 < fVar71) {
          auVar39._0_4_ = sqrtf(fVar73);
          auVar39._4_4_ = extraout_XMM0_Db_03;
          auVar46 = auVar102._0_16_;
          auVar39._8_56_ = extraout_var_04;
          auVar104 = auVar39._0_16_;
        }
        else {
          auVar104 = vsqrtss_avx(ZEXT416((uint)fVar73),ZEXT416((uint)fVar73));
        }
        auVar104 = vinsertps_avx(auVar46,auVar104,0x30);
        fVar73 = auVar104._0_4_;
        auVar49._0_4_ = fVar73 + fVar73;
        fVar75 = auVar104._4_4_;
        auVar49._4_4_ = fVar75 + fVar75;
        fVar77 = auVar104._8_4_;
        auVar49._8_4_ = fVar77 + fVar77;
        fVar82 = auVar104._12_4_;
        auVar49._12_4_ = fVar82 + fVar82;
        auVar46 = vshufps_avx(auVar49,auVar49,0);
        auVar55 = vshufps_avx(auVar49,auVar49,0xff);
        auVar104 = vshufps_avx(auVar104,auVar104,0x1b);
        auVar24._0_4_ =
             fVar90 + fVar73 * auVar46._0_4_ +
                      (float)(uVar103 ^ (uint)(auVar104._0_4_ * auVar55._0_4_));
        auVar24._4_4_ =
             fVar96 + fVar75 * auVar46._4_4_ +
                      (float)(uVar105 ^ (uint)(auVar104._4_4_ * auVar55._4_4_));
        auVar24._8_4_ =
             fVar97 + fVar77 * auVar46._8_4_ +
                      (float)(uVar106 ^ (uint)(auVar104._8_4_ * auVar55._8_4_));
        auVar24._12_4_ =
             fVar66 + fVar82 * auVar46._12_4_ +
                      (float)(uVar107 ^ (uint)(auVar104._12_4_ * auVar55._12_4_));
        *pauVar13 = auVar24;
        iVar8 = iVar8 + 1;
        pauVar13 = pauVar13 + 1;
      } while (iVar8 != 0x20);
    }
    piVar4 = (int *)FUN_14037d570(param_1,0x40,local_4f8);
    piVar14 = (int *)*puVar12;
    if (piVar14 != piVar4) {
      if (piVar14 != (int *)0x0) {
        LOCK();
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (*piVar14 == 0) {
          plVar7 = *(longlong **)(piVar14 + 6);
          if (plVar7 != (longlong *)0x0) {
            if (*(longlong *)(piVar14 + 2) != 0) {
              plVar10 = plVar7 + *(longlong *)(piVar14 + 2) * 2;
              do {
                if ((longlong *)*plVar7 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)*plVar7 + 0x10))();
                }
                plVar7 = plVar7 + 2;
              } while (plVar7 < plVar10);
              plVar7 = *(longlong **)(piVar14 + 6);
            }
            piVar14[2] = 0;
            piVar14[3] = 0;
            (*DAT_14151f538)(plVar7);
            auVar34._0_12_ = ZEXT812(0);
            auVar34._12_4_ = 0;
            *(undefined1 (*) [16])(piVar14 + 4) = auVar34;
          }
          (*DAT_14151f538)(piVar14);
        }
      }
      *puVar12 = piVar4;
      if (piVar4 == (int *)0x0) {
        piVar14 = (int *)0x0;
      }
      else {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        piVar14 = (int *)*puVar12;
      }
    }
  }
LAB_14037dd57:
  auVar104 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar78 = auVar104._0_4_;
  fVar90 = auVar104._4_4_;
  fVar96 = auVar104._8_4_;
  fVar97 = auVar104._12_4_;
  fVar77 = param_2[4] * 0.0;
  fVar82 = param_2[5] * 0.0;
  fVar83 = param_2[6] * 0.0;
  fVar84 = param_2[7] * 0.0;
  fVar85 = param_2[8] * 0.0;
  fVar87 = param_2[9] * 0.0;
  fVar88 = param_2[10] * 0.0;
  fVar89 = param_2[0xb] * 0.0;
  local_4d8 = param_2[0xc] * 0.0;
  fStack_4d4 = param_2[0xd] * 0.0;
  fStack_4d0 = param_2[0xe] * 0.0;
  fStack_4cc = param_2[0xf] * 0.0;
  local_4f8[0] = local_4d8 + fVar85 + *param_2 * fVar78 + fVar77;
  local_4f8[1] = fStack_4d4 + fVar87 + param_2[1] * fVar90 + fVar82;
  local_4f8[2] = fStack_4d0 + fVar88 + param_2[2] * fVar96 + fVar83;
  local_4f8[3] = fStack_4cc + fVar89 + param_2[3] * fVar97 + fVar84;
  fVar66 = *param_2 * 0.0;
  fVar71 = param_2[1] * 0.0;
  fVar73 = param_2[2] * 0.0;
  fVar75 = param_2[3] * 0.0;
  local_4f8[4] = local_4d8 + fVar85 + fVar66 + fVar78 * param_2[4];
  local_4f8[5] = fStack_4d4 + fVar87 + fVar71 + fVar90 * param_2[5];
  local_4f8[6] = fStack_4d0 + fVar88 + fVar73 + fVar96 * param_2[6];
  fStack_4dc = fStack_4cc + fVar89 + fVar75 + fVar97 * param_2[7];
  fVar66 = fVar66 + fVar77;
  fVar71 = fVar71 + fVar82;
  fVar73 = fVar73 + fVar83;
  fVar75 = fVar75 + fVar84;
  local_4d8 = local_4d8 + fVar66 + fVar78 * param_2[8];
  fStack_4d4 = fStack_4d4 + fVar71 + fVar90 * param_2[9];
  fStack_4d0 = fStack_4d0 + fVar73 + fVar96 * param_2[10];
  fStack_4cc = fStack_4cc + fVar75 + fVar97 * param_2[0xb];
  local_4c8 = fVar85 + fVar66 + param_2[0xc];
  fStack_4c4 = fVar87 + fVar71 + param_2[0xd];
  fStack_4c0 = fVar88 + fVar73 + param_2[0xe];
  fStack_4bc = fVar89 + fVar75 + param_2[0xf];
  auVar56._0_4_ = local_4d8 * local_4d8;
  auVar56._4_4_ = fStack_4d4 * fStack_4d4;
  auVar56._8_4_ = fStack_4d0 * fStack_4d0;
  auVar56._12_4_ = fStack_4cc * fStack_4cc;
  auVar104 = vinsertps_avx(auVar56,auVar56,0x4c);
  auVar57._0_4_ = auVar56._0_4_ + auVar104._0_4_;
  auVar57._4_4_ = auVar56._4_4_ + auVar104._4_4_;
  auVar57._8_4_ = auVar56._8_4_ + auVar104._8_4_;
  auVar57._12_4_ = auVar56._12_4_ + auVar104._12_4_;
  auVar46 = vshufpd_avx(auVar57,auVar57,1);
  auVar62._0_4_ = local_4f8[4] * local_4f8[4];
  auVar62._4_4_ = local_4f8[5] * local_4f8[5];
  auVar62._8_4_ = local_4f8[6] * local_4f8[6];
  auVar62._12_4_ = fStack_4dc * fStack_4dc;
  auVar104 = vinsertps_avx(auVar62,auVar62,0x4c);
  auVar63._0_4_ = auVar62._0_4_ + auVar104._0_4_;
  auVar63._4_4_ = auVar62._4_4_ + auVar104._4_4_;
  auVar63._8_4_ = auVar62._8_4_ + auVar104._8_4_;
  auVar63._12_4_ = auVar62._12_4_ + auVar104._12_4_;
  auVar55 = vshufpd_avx(auVar63,auVar63,1);
  auVar68._0_4_ = local_4f8[0] * local_4f8[0];
  auVar68._4_4_ = local_4f8[1] * local_4f8[1];
  auVar68._8_4_ = local_4f8[2] * local_4f8[2];
  auVar68._12_4_ = local_4f8[3] * local_4f8[3];
  auVar104 = vinsertps_avx(auVar68,auVar68,0x4c);
  auVar69._0_4_ = auVar68._0_4_ + auVar104._0_4_;
  auVar69._4_4_ = auVar68._4_4_ + auVar104._4_4_;
  auVar69._8_4_ = auVar68._8_4_ + auVar104._8_4_;
  auVar69._12_4_ = auVar68._12_4_ + auVar104._12_4_;
  auVar104 = vshufpd_avx(auVar69,auVar69,1);
  auVar104 = vmaxss_avx(ZEXT416((uint)(auVar63._0_4_ + auVar55._0_4_)),
                        ZEXT416((uint)(auVar69._0_4_ + auVar104._0_4_)));
  auVar45 = vmaxss_avx(ZEXT416((uint)(auVar57._0_4_ + auVar46._0_4_)),auVar104);
  fVar78 = (float)piVar14[8];
  auVar64._0_4_ = local_4f8[0] * fVar78;
  auVar64._4_4_ = local_4f8[1] * fVar78;
  auVar64._8_4_ = local_4f8[2] * fVar78;
  auVar64._12_4_ = local_4f8[3] * fVar78;
  fVar78 = (float)piVar14[0xc];
  auVar53._0_4_ = local_4f8[0] * fVar78;
  auVar53._4_4_ = local_4f8[1] * fVar78;
  auVar53._8_4_ = local_4f8[2] * fVar78;
  auVar53._12_4_ = local_4f8[3] * fVar78;
  auVar55 = vminps_avx(auVar64,auVar53);
  auVar104 = vmaxps_avx(auVar64,auVar53);
  fVar78 = (float)piVar14[9];
  auVar60._0_4_ = local_4f8[4] * fVar78;
  auVar60._4_4_ = local_4f8[5] * fVar78;
  auVar60._8_4_ = local_4f8[6] * fVar78;
  auVar60._12_4_ = fStack_4dc * fVar78;
  fVar78 = (float)piVar14[0xd];
  auVar43._0_4_ = local_4f8[4] * fVar78;
  auVar43._4_4_ = local_4f8[5] * fVar78;
  auVar43._8_4_ = local_4f8[6] * fVar78;
  auVar43._12_4_ = fStack_4dc * fVar78;
  auVar58 = vminps_avx(auVar60,auVar43);
  auVar46 = vmaxps_avx(auVar60,auVar43);
  fVar78 = (float)piVar14[10];
  auVar54._0_4_ = local_4d8 * fVar78;
  auVar54._4_4_ = fStack_4d4 * fVar78;
  auVar54._8_4_ = fStack_4d0 * fVar78;
  auVar54._12_4_ = fStack_4cc * fVar78;
  fVar78 = (float)piVar14[0xe];
  auVar16._0_4_ = local_4d8 * fVar78;
  auVar16._4_4_ = fStack_4d4 * fVar78;
  auVar16._8_4_ = fStack_4d0 * fVar78;
  auVar16._12_4_ = fStack_4cc * fVar78;
  auVar44 = vminps_avx(auVar54,auVar16);
  local_518 = local_4c8 + auVar55._0_4_ + auVar58._0_4_ + auVar44._0_4_;
  fStack_514 = fStack_4c4 + auVar55._4_4_ + auVar58._4_4_ + auVar44._4_4_;
  fStack_510 = fStack_4c0 + auVar55._8_4_ + auVar58._8_4_ + auVar44._8_4_;
  fStack_50c = fStack_4bc + auVar55._12_4_ + auVar58._12_4_ + auVar44._12_4_;
  auVar55 = vmaxps_avx(auVar54,auVar16);
  local_508._0_4_ = local_4c8 + auVar104._0_4_ + auVar46._0_4_ + auVar55._0_4_;
  local_508._4_4_ = fStack_4c4 + auVar104._4_4_ + auVar46._4_4_ + auVar55._4_4_;
  local_508._8_4_ = fStack_4c0 + auVar104._8_4_ + auVar46._8_4_ + auVar55._8_4_;
  local_508._12_4_ = fStack_4bc + auVar104._12_4_ + auVar46._12_4_ + auVar55._12_4_;
  local_548 = param_8;
  local_550 = param_7;
  local_568 = param_6;
  local_558 = 2;
  local_560 = puVar12;
  (**(code **)(*param_1 + 0x28))(param_1,local_4f8,&local_518,auVar45._0_8_);
  uVar5 = extraout_var;
LAB_14037def5:
  auVar2._8_8_ = uStack_530;
  auVar2._0_8_ = local_538;
  if (pauVar11 != (undefined1 (*) [16])0x0) {
    uVar1 = rdtsc();
    auVar46 = vpinsrq_avx(auVar2,uVar1 & 0xffffffff00000000 | CONCAT44(uVar5,(int)uVar1),1);
    auVar104 = vmovntdq_avx(SUB6416(ZEXT864(0x1413975fc),0));
    *pauVar11 = auVar104;
    auVar104 = vmovntdq_avx(auVar46);
    pauVar11[1] = auVar104;
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_588)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_588);
}

