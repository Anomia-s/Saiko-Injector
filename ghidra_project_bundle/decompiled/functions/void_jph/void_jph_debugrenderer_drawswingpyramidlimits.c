/**
 * Function: void_jph_debugrenderer_drawswingpyramidlimits
 * Address:  14037e6a0
 * Signature: undefined void_jph_debugrenderer_drawswingpyramidlimits(void)
 * Body size: 4204 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void void_jph_debugrenderer_drawswingpyramidlimits
               (longlong *param_1,float *param_2,float param_3,float param_4,float param_5,
               float param_6,uint param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 extraout_var;
  float *pfVar8;
  undefined1 (*pauVar9) [16];
  longlong *plVar10;
  longlong *plVar11;
  undefined1 (*pauVar12) [16];
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar60;
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
  undefined1 auVar59 [64];
  float fVar61;
  float fVar69;
  float fVar70;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  float fVar72;
  float fVar78;
  float fVar79;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar80;
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
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auStack_598 [32];
  undefined4 local_578;
  undefined8 *local_570;
  undefined4 local_568;
  undefined4 local_560;
  undefined4 local_558;
  float local_54c;
  undefined8 *local_548;
  float local_53c;
  undefined1 local_538 [16];
  float local_528;
  float fStack_524;
  float fStack_520;
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
  float local_3f8 [64];
  float local_2f8 [64];
  undefined1 local_1f8 [264];
  ulonglong local_f0;
  undefined1 local_a8 [16];
  
  local_a8 = in_ZMM10._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_598;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  fVar99 = param_5;
  fStack_51c = param_6;
  if (lVar6 == 0) {
LAB_14037e7e4:
    pauVar12 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 0x200020);
    if (0xffff < (ulonglong)uVar1) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        auVar59 = ZEXT464((uint)param_6);
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
        fStack_51c = auVar59._0_4_;
      }
      goto LAB_14037e7e4;
    }
    *(uint *)(lVar6 + 0x200020) = uVar1 + 1;
    pauVar12 = (undefined1 (*) [16])(lVar6 + (ulonglong)uVar1 * 0x20 + 0x20);
    uVar2 = rdtsc();
    in_ZMM10 = ZEXT864(uVar2 & 0xffffffff00000000 |
                       CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar2));
  }
  auVar59 = ZEXT464(param_7);
  local_54c = param_3;
  local_528 = param_3;
  fStack_524 = param_4;
  fStack_520 = fVar99;
  cVar3 = FUN_1403816a0(param_1 + 0x10,&local_528,local_4f8);
  auVar35 = auVar59._0_16_;
  puVar13 = (undefined8 *)((ulonglong)(uint)local_4f8[0] * 0x18 + param_1[0x10]);
  if (cVar3 == '\0') {
    piVar15 = (int *)puVar13[2];
    if (piVar15 != (int *)0x0) goto LAB_14037f4d0;
  }
  else {
    *puVar13 = CONCAT44(fStack_524,local_528);
    puVar13[1] = CONCAT44(fStack_51c,fStack_520);
    puVar13[2] = 0;
  }
  puVar14 = puVar13 + 2;
  pfVar8 = local_4f8;
  FUN_1403824a0(param_1 + 0x14,pfVar8,&local_528);
  auVar35 = auVar59._0_16_;
  if (local_4f8[2] == (float)*(uint *)((longlong)param_1 + 0xb4)) {
LAB_14037e97a:
    piVar15 = (int *)*puVar14;
LAB_14037e97e:
    auVar17 = in_ZMM10._0_16_;
    if (piVar15 != (int *)0x0) goto LAB_14037f4d0;
  }
  else {
    lVar6 = param_1[0x14];
    piVar15 = (int *)*puVar14;
    piVar7 = *(int **)(lVar6 + 0x10 + (ulonglong)(uint)local_4f8[2] * 0x18);
    if (piVar15 == piVar7) goto LAB_14037e97e;
    if (piVar15 != (int *)0x0) {
      puVar5 = (undefined8 *)(lVar6 + (ulonglong)(uint)local_4f8[2] * 0x18 + 0x10);
      LOCK();
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        plVar10 = *(longlong **)(piVar15 + 6);
        local_548 = puVar5;
        if (plVar10 != (longlong *)0x0) {
          if (*(longlong *)(piVar15 + 2) != 0) {
            plVar11 = plVar10 + *(longlong *)(piVar15 + 2) * 2;
            do {
              if ((longlong *)*plVar10 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar10 + 0x10))();
              }
              plVar10 = plVar10 + 2;
            } while (plVar10 < plVar11);
            plVar10 = *(longlong **)(piVar15 + 6);
          }
          piVar15[2] = 0;
          piVar15[3] = 0;
          (*DAT_14151f538)(plVar10);
          auVar35._0_12_ = ZEXT812(0);
          auVar35._12_4_ = 0;
          *(undefined1 (*) [16])(piVar15 + 4) = auVar35;
        }
        (*DAT_14151f538)(piVar15);
        auVar35 = auVar59._0_16_;
        puVar5 = local_548;
      }
      piVar7 = (int *)*puVar5;
    }
    auVar17 = in_ZMM10._0_16_;
    *puVar14 = piVar7;
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      goto LAB_14037e97a;
    }
  }
  local_548 = (undefined8 *)CONCAT44(local_548._4_4_,param_4);
  auVar84 = vshufps_avx(ZEXT416((uint)(local_54c * 0.5)),ZEXT416((uint)(local_54c * 0.5)),0);
  auVar35 = vandps_avx(auVar84,_DAT_140de34a0);
  auVar26._0_4_ = (int)(auVar35._0_4_ * 0.63661975 + 0.5);
  auVar26._4_4_ = (int)(auVar35._4_4_ * 0.63661975 + 0.5);
  auVar26._8_4_ = (int)(auVar35._8_4_ * 0.63661975 + 0.5);
  auVar26._12_4_ = (int)(auVar35._12_4_ * 0.63661975 + 0.5);
  auVar102 = vcvtdq2ps_avx(auVar26);
  fVar38 = auVar102._0_4_;
  fVar40 = auVar102._4_4_;
  fVar41 = auVar102._8_4_;
  fVar16 = auVar102._12_4_;
  fVar38 = auVar35._0_4_ + fVar38 * -1.5703125 + fVar38 * -0.0004837513 + fVar38 * -7.54979e-08;
  fVar40 = auVar35._4_4_ + fVar40 * -1.5703125 + fVar40 * -0.0004837513 + fVar40 * -7.54979e-08;
  fVar41 = auVar35._8_4_ + fVar41 * -1.5703125 + fVar41 * -0.0004837513 + fVar41 * -7.54979e-08;
  fVar16 = auVar35._12_4_ + fVar16 * -1.5703125 + fVar16 * -0.0004837513 + fVar16 * -7.54979e-08;
  fVar19 = fVar38 * fVar38;
  fVar20 = fVar40 * fVar40;
  fVar21 = fVar41 * fVar41;
  fVar61 = fVar16 * fVar16;
  local_53c = param_6 - fVar99;
  auVar102._0_4_ =
       fVar19 * fVar19 * (fVar19 * (fVar19 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar102._4_4_ =
       fVar20 * fVar20 * (fVar20 * (fVar20 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar102._8_4_ =
       fVar21 * fVar21 * (fVar21 * (fVar21 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar102._12_4_ =
       fVar61 * fVar61 * (fVar61 * (fVar61 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar62._0_4_ = fVar19 * 0.5;
  auVar62._4_4_ = fVar20 * 0.5;
  auVar62._8_4_ = fVar21 * 0.5;
  auVar62._12_4_ = fVar61 * 0.5;
  auVar35 = vsubps_avx(auVar102,auVar62);
  auVar65._0_4_ = auVar35._0_4_ + 1.0;
  auVar65._4_4_ = auVar35._4_4_ + 1.0;
  auVar65._8_4_ = auVar35._8_4_ + 1.0;
  auVar65._12_4_ = auVar35._12_4_ + 1.0;
  auVar22._0_4_ =
       fVar38 + fVar38 * (fVar19 * (fVar19 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar19;
  auVar22._4_4_ =
       fVar40 + fVar40 * (fVar20 * (fVar20 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar20;
  auVar22._8_4_ =
       fVar41 + fVar41 * (fVar21 * (fVar21 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar21;
  auVar22._12_4_ =
       fVar16 + fVar16 * (fVar61 * (fVar61 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar61;
  auVar45 = vpslld_avx(auVar26,0x1f);
  auVar35 = vpslld_avx(auVar26,0x1e);
  auVar62 = vpand_avx(auVar35,_DAT_140dc1ff0);
  auVar102 = vblendvps_avx(auVar22,auVar65,auVar45);
  auVar26 = vblendvps_avx(auVar65,auVar22,auVar45);
  auVar22 = SUB6416(ZEXT864(0x8000000080000000),0);
  auVar35 = vandps_avx(auVar84,auVar22);
  auVar45 = auVar62 ^ auVar45;
  fVar99 = (float)(auVar26._0_4_ ^ auVar45._0_4_);
  fVar38 = (float)(auVar26._4_4_ ^ auVar45._4_4_);
  fVar40 = (float)(auVar26._8_4_ ^ auVar45._8_4_);
  fVar41 = (float)(auVar26._12_4_ ^ auVar45._12_4_);
  lVar6 = 0;
  auVar45._8_4_ = 0x7fffffff;
  auVar45._0_8_ = 0x7fffffff7fffffff;
  auVar45._12_4_ = 0x7fffffff;
  auVar84._0_12_ = ZEXT812(0);
  auVar84._12_4_ = 0;
  do {
    auVar26 = ZEXT416((uint)(((float)(int)lVar6 * local_53c * -0.0625 + param_6) * 0.5));
    auVar73 = vshufps_avx(auVar26,auVar26,0);
    auVar26 = vandps_avx(auVar73,auVar45);
    auVar104._0_4_ = (int)(auVar26._0_4_ * 0.63661975 + 0.5);
    auVar104._4_4_ = (int)(auVar26._4_4_ * 0.63661975 + 0.5);
    auVar104._8_4_ = (int)(auVar26._8_4_ * 0.63661975 + 0.5);
    auVar104._12_4_ = (int)(auVar26._12_4_ * 0.63661975 + 0.5);
    auVar65 = vcvtdq2ps_avx(auVar104);
    fVar16 = auVar65._0_4_;
    fVar19 = auVar65._4_4_;
    fVar20 = auVar65._8_4_;
    fVar21 = auVar65._12_4_;
    fVar16 = auVar26._0_4_ + fVar16 * -1.5703125 + fVar16 * -0.0004837513 + fVar16 * -7.54979e-08;
    fVar19 = auVar26._4_4_ + fVar19 * -1.5703125 + fVar19 * -0.0004837513 + fVar19 * -7.54979e-08;
    fVar20 = auVar26._8_4_ + fVar20 * -1.5703125 + fVar20 * -0.0004837513 + fVar20 * -7.54979e-08;
    fVar21 = auVar26._12_4_ + fVar21 * -1.5703125 + fVar21 * -0.0004837513 + fVar21 * -7.54979e-08;
    fVar61 = fVar16 * fVar16;
    fVar69 = fVar19 * fVar19;
    fVar70 = fVar20 * fVar20;
    fVar71 = fVar21 * fVar21;
    auVar82._0_4_ = fVar61 * 0.5;
    auVar82._4_4_ = fVar69 * 0.5;
    auVar82._8_4_ = fVar70 * 0.5;
    auVar82._12_4_ = fVar71 * 0.5;
    auVar93._0_4_ =
         fVar61 * fVar61 * (fVar61 * (fVar61 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar93._4_4_ =
         fVar69 * fVar69 * (fVar69 * (fVar69 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar93._8_4_ =
         fVar70 * fVar70 * (fVar70 * (fVar70 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar93._12_4_ =
         fVar71 * fVar71 * (fVar71 * (fVar71 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
    auVar26 = vsubps_avx(auVar93,auVar82);
    auVar46._0_4_ = auVar26._0_4_ + 1.0;
    auVar46._4_4_ = auVar26._4_4_ + 1.0;
    auVar46._8_4_ = auVar26._8_4_ + 1.0;
    auVar46._12_4_ = auVar26._12_4_ + 1.0;
    auVar81._0_4_ =
         fVar16 + fVar16 * fVar61 * (fVar61 * (fVar61 * -0.00019515296 + 0.008332161) + -0.16666655)
    ;
    auVar81._4_4_ =
         fVar19 + fVar19 * fVar69 * (fVar69 * (fVar69 * -0.00019515296 + 0.008332161) + -0.16666655)
    ;
    auVar81._8_4_ =
         fVar20 + fVar20 * fVar70 * (fVar70 * (fVar70 * -0.00019515296 + 0.008332161) + -0.16666655)
    ;
    auVar81._12_4_ =
         fVar21 + fVar21 * fVar71 * (fVar71 * (fVar71 * -0.00019515296 + 0.008332161) + -0.16666655)
    ;
    auVar87 = vpslld_avx(auVar104,0x1f);
    auVar65 = vblendvps_avx(auVar81,auVar46,auVar87);
    auVar26 = vblendvps_avx(auVar46,auVar81,auVar87);
    auVar82 = vpslld_avx(auVar104,0x1e);
    auVar82 = vpand_avx(auVar82,_DAT_140dc1ff0);
    auVar87 = auVar82 ^ auVar87;
    fVar16 = (float)(auVar87._0_4_ ^ auVar26._0_4_);
    fVar19 = (float)(auVar87._4_4_ ^ auVar26._4_4_);
    fVar20 = (float)(auVar87._8_4_ ^ auVar26._8_4_);
    fVar21 = (float)(auVar87._12_4_ ^ auVar26._12_4_);
    auVar26 = vandps_avx(auVar73,auVar22);
    auVar83._0_4_ = fVar99 * fVar16;
    auVar83._4_4_ = fVar38 * fVar19;
    auVar83._8_4_ = fVar40 * fVar20;
    auVar83._12_4_ = fVar41 * fVar21;
    auVar73._0_4_ = fVar99 * (float)(auVar26._0_4_ ^ auVar82._0_4_ ^ auVar65._0_4_);
    auVar73._4_4_ = fVar38 * (float)(auVar26._4_4_ ^ auVar82._4_4_ ^ auVar65._4_4_);
    auVar73._8_4_ = fVar40 * (float)(auVar26._8_4_ ^ auVar82._8_4_ ^ auVar65._8_4_);
    auVar73._12_4_ = fVar41 * (float)(auVar26._12_4_ ^ auVar82._12_4_ ^ auVar65._12_4_);
    auVar87._0_4_ = (float)(auVar102._0_4_ ^ auVar35._0_4_ ^ auVar62._0_4_) * fVar16;
    auVar87._4_4_ = (float)(auVar102._4_4_ ^ auVar35._4_4_ ^ auVar62._4_4_) * fVar19;
    auVar87._8_4_ = (float)(auVar102._8_4_ ^ auVar35._8_4_ ^ auVar62._8_4_) * fVar20;
    auVar87._12_4_ = (float)(auVar102._12_4_ ^ auVar35._12_4_ ^ auVar62._12_4_) * fVar21;
    auVar26 = vunpcklps_avx(auVar84,auVar87);
    auVar26 = vmovlhps_avx(auVar26,auVar73);
    auVar65 = vinsertps_avx(auVar26,auVar83,0x30);
    auVar26 = vdpps_avx(auVar65,auVar65,0xff);
    auVar26 = vsqrtps_avx(auVar26);
    auVar26 = vdivps_avx(auVar65,auVar26);
    fVar16 = auVar26._0_4_;
    auVar74._0_4_ = fVar16 + fVar16;
    fVar20 = auVar26._4_4_;
    auVar74._4_4_ = fVar20 + fVar20;
    fVar61 = auVar26._8_4_;
    auVar74._8_4_ = fVar61 + fVar61;
    fVar70 = auVar26._12_4_;
    auVar74._12_4_ = fVar70 + fVar70;
    auVar65 = vshufps_avx(auVar74,auVar74,0);
    auVar26 = vshufps_avx(auVar26,auVar26,0x1b);
    auVar82 = vshufps_avx(auVar74,auVar74,0xff);
    fVar19 = (float)DAT_140e0a360;
    fVar21 = DAT_140e0a360._4_4_;
    fVar69 = DAT_140e0a360._8_4_;
    fVar71 = DAT_140e0a360._12_4_;
    *pfVar8 = auVar65._0_4_ * fVar16 + auVar82._0_4_ * auVar26._0_4_ + fVar19;
    pfVar8[1] = auVar65._4_4_ * fVar20 + auVar82._4_4_ * auVar26._4_4_ + fVar21;
    pfVar8[2] = auVar65._8_4_ * fVar61 + -(auVar82._8_4_ * auVar26._8_4_) + fVar69;
    pfVar8[3] = auVar65._12_4_ * fVar70 + auVar82._12_4_ * auVar26._12_4_ + fVar71;
    lVar6 = lVar6 + 1;
    pfVar8 = pfVar8 + 4;
  } while (lVar6 != 0x10);
  auVar26 = vshufps_avx(ZEXT416((uint)(param_5 * 0.5)),ZEXT416((uint)(param_5 * 0.5)),0);
  auVar35 = vandps_avx(auVar26,_DAT_140de34a0);
  auVar101._0_4_ = (int)(auVar35._0_4_ * 0.63661975 + 0.5);
  auVar101._4_4_ = (int)(auVar35._4_4_ * 0.63661975 + 0.5);
  auVar101._8_4_ = (int)(auVar35._8_4_ * 0.63661975 + 0.5);
  auVar101._12_4_ = (int)(auVar35._12_4_ * 0.63661975 + 0.5);
  auVar102 = vcvtdq2ps_avx(auVar101);
  fVar99 = auVar102._0_4_;
  fVar40 = auVar102._4_4_;
  fVar41 = auVar102._8_4_;
  fVar16 = auVar102._12_4_;
  fVar38 = auVar35._0_4_ + fVar99 * -1.5703125 + fVar99 * -0.0004837513 + fVar99 * -7.54979e-08;
  fVar40 = auVar35._4_4_ + fVar40 * -1.5703125 + fVar40 * -0.0004837513 + fVar40 * -7.54979e-08;
  fVar41 = auVar35._8_4_ + fVar41 * -1.5703125 + fVar41 * -0.0004837513 + fVar41 * -7.54979e-08;
  fVar16 = auVar35._12_4_ + fVar16 * -1.5703125 + fVar16 * -0.0004837513 + fVar16 * -7.54979e-08;
  fVar20 = fVar38 * fVar38;
  fVar61 = fVar40 * fVar40;
  fVar70 = fVar41 * fVar41;
  fVar72 = fVar16 * fVar16;
  auVar100._0_4_ =
       fVar20 * fVar20 * (fVar20 * (fVar20 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar100._4_4_ =
       fVar61 * fVar61 * (fVar61 * (fVar61 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar100._8_4_ =
       fVar70 * fVar70 * (fVar70 * (fVar70 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar100._12_4_ =
       fVar72 * fVar72 * (fVar72 * (fVar72 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar105._0_4_ = fVar20 * 0.5;
  auVar105._4_4_ = fVar61 * 0.5;
  auVar105._8_4_ = fVar70 * 0.5;
  auVar105._12_4_ = fVar72 * 0.5;
  auVar35 = vsubps_avx(auVar100,auVar105);
  auVar106._0_4_ = auVar35._0_4_ + 1.0;
  auVar106._4_4_ = auVar35._4_4_ + 1.0;
  auVar106._8_4_ = auVar35._8_4_ + 1.0;
  auVar106._12_4_ = auVar35._12_4_ + 1.0;
  fVar99 = param_4 - local_54c;
  auVar35 = vandps_avx(auVar26,auVar22);
  auVar75._0_4_ =
       fVar38 + fVar38 * fVar20 * (fVar20 * (fVar20 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar75._4_4_ =
       fVar40 + fVar40 * fVar61 * (fVar61 * (fVar61 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar75._8_4_ =
       fVar41 + fVar41 * fVar70 * (fVar70 * (fVar70 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar75._12_4_ =
       fVar16 + fVar16 * fVar72 * (fVar72 * (fVar72 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar84 = vpslld_avx(auVar101,0x1f);
  auVar102 = vpslld_avx(auVar101,0x1e);
  auVar62 = vpand_avx(auVar102,_DAT_140dc1ff0);
  auVar102 = vblendvps_avx(auVar75,auVar106,auVar84);
  auVar26 = vblendvps_avx(auVar106,auVar75,auVar84);
  auVar84 = auVar62 ^ auVar84;
  fVar38 = (float)(auVar26._0_4_ ^ auVar84._0_4_);
  fVar40 = (float)(auVar26._4_4_ ^ auVar84._4_4_);
  fVar41 = (float)(auVar26._8_4_ ^ auVar84._8_4_);
  fVar16 = (float)(auVar26._12_4_ ^ auVar84._12_4_);
  iVar4 = 0;
  pfVar8 = local_3f8;
  do {
    auVar26 = ZEXT416((uint)((local_54c + fVar99 * (float)iVar4 * 0.0625) * 0.5));
    auVar87 = vshufps_avx(auVar26,auVar26,0);
    auVar26 = vandps_avx(auVar87,auVar45);
    auVar88._0_4_ = (int)(auVar26._0_4_ * 0.63661975 + 0.5);
    auVar88._4_4_ = (int)(auVar26._4_4_ * 0.63661975 + 0.5);
    auVar88._8_4_ = (int)(auVar26._8_4_ * 0.63661975 + 0.5);
    auVar88._12_4_ = (int)(auVar26._12_4_ * 0.63661975 + 0.5);
    auVar84 = vcvtdq2ps_avx(auVar88);
    fVar20 = auVar84._0_4_;
    fVar61 = auVar84._4_4_;
    fVar70 = auVar84._8_4_;
    fVar72 = auVar84._12_4_;
    fVar20 = auVar26._0_4_ + fVar20 * -1.5703125 + fVar20 * -0.0004837513 + fVar20 * -7.54979e-08;
    fVar61 = auVar26._4_4_ + fVar61 * -1.5703125 + fVar61 * -0.0004837513 + fVar61 * -7.54979e-08;
    fVar70 = auVar26._8_4_ + fVar70 * -1.5703125 + fVar70 * -0.0004837513 + fVar70 * -7.54979e-08;
    fVar72 = auVar26._12_4_ + fVar72 * -1.5703125 + fVar72 * -0.0004837513 + fVar72 * -7.54979e-08;
    fVar78 = fVar20 * fVar20;
    fVar79 = fVar61 * fVar61;
    fVar80 = fVar70 * fVar70;
    fVar60 = fVar72 * fVar72;
    auVar63._0_4_ = fVar78 * 0.5;
    auVar63._4_4_ = fVar79 * 0.5;
    auVar63._8_4_ = fVar80 * 0.5;
    auVar63._12_4_ = fVar60 * 0.5;
    auVar94._0_4_ =
         ((fVar78 * 2.4433157e-05 + -0.0013887316) * fVar78 + 0.041666646) * fVar78 * fVar78;
    auVar94._4_4_ =
         ((fVar79 * 2.4433157e-05 + -0.0013887316) * fVar79 + 0.041666646) * fVar79 * fVar79;
    auVar94._8_4_ =
         ((fVar80 * 2.4433157e-05 + -0.0013887316) * fVar80 + 0.041666646) * fVar80 * fVar80;
    auVar94._12_4_ =
         ((fVar60 * 2.4433157e-05 + -0.0013887316) * fVar60 + 0.041666646) * fVar60 * fVar60;
    auVar26 = vsubps_avx(auVar94,auVar63);
    auVar64._0_4_ = auVar26._0_4_ + 1.0;
    auVar64._4_4_ = auVar26._4_4_ + 1.0;
    auVar64._8_4_ = auVar26._8_4_ + 1.0;
    auVar64._12_4_ = auVar26._12_4_ + 1.0;
    auVar24._0_4_ =
         fVar20 + fVar20 * ((fVar78 * -0.00019515296 + 0.008332161) * fVar78 + -0.16666655) * fVar78
    ;
    auVar24._4_4_ =
         fVar61 + fVar61 * ((fVar79 * -0.00019515296 + 0.008332161) * fVar79 + -0.16666655) * fVar79
    ;
    auVar24._8_4_ =
         fVar70 + fVar70 * ((fVar80 * -0.00019515296 + 0.008332161) * fVar80 + -0.16666655) * fVar80
    ;
    auVar24._12_4_ =
         fVar72 + fVar72 * ((fVar60 * -0.00019515296 + 0.008332161) * fVar60 + -0.16666655) * fVar60
    ;
    auVar82 = vpslld_avx(auVar88,0x1f);
    auVar84 = vblendvps_avx(auVar24,auVar64,auVar82);
    auVar26 = vblendvps_avx(auVar64,auVar24,auVar82);
    auVar65 = vpslld_avx(auVar88,0x1e);
    auVar65 = vpand_avx(auVar65,_DAT_140dc1ff0);
    auVar82 = auVar65 ^ auVar82;
    fVar20 = (float)(auVar26._0_4_ ^ auVar82._0_4_);
    fVar61 = (float)(auVar26._4_4_ ^ auVar82._4_4_);
    fVar70 = (float)(auVar26._8_4_ ^ auVar82._8_4_);
    fVar72 = (float)(auVar26._12_4_ ^ auVar82._12_4_);
    auVar26 = vandps_avx(auVar87,auVar22);
    auVar66._0_4_ = fVar38 * fVar20;
    auVar66._4_4_ = fVar40 * fVar61;
    auVar66._8_4_ = fVar41 * fVar70;
    auVar66._12_4_ = fVar16 * fVar72;
    auVar25._0_4_ = (float)(auVar62._0_4_ ^ auVar35._0_4_ ^ auVar102._0_4_) * fVar20;
    auVar25._4_4_ = (float)(auVar62._4_4_ ^ auVar35._4_4_ ^ auVar102._4_4_) * fVar61;
    auVar25._8_4_ = (float)(auVar62._8_4_ ^ auVar35._8_4_ ^ auVar102._8_4_) * fVar70;
    auVar25._12_4_ = (float)(auVar62._12_4_ ^ auVar35._12_4_ ^ auVar102._12_4_) * fVar72;
    auVar47._0_4_ = fVar38 * (float)(auVar84._0_4_ ^ auVar26._0_4_ ^ auVar65._0_4_);
    auVar47._4_4_ = fVar40 * (float)(auVar84._4_4_ ^ auVar26._4_4_ ^ auVar65._4_4_);
    auVar47._8_4_ = fVar41 * (float)(auVar84._8_4_ ^ auVar26._8_4_ ^ auVar65._8_4_);
    auVar47._12_4_ = fVar16 * (float)(auVar84._12_4_ ^ auVar26._12_4_ ^ auVar65._12_4_);
    auVar26 = vunpcklps_avx(ZEXT416(0) << 0x20,auVar47);
    auVar26 = vmovlhps_avx(auVar26,auVar25);
    auVar84 = vinsertps_avx(auVar26,auVar66,0x30);
    auVar26 = vdpps_avx(auVar84,auVar84,0xff);
    auVar26 = vsqrtps_avx(auVar26);
    auVar26 = vdivps_avx(auVar84,auVar26);
    fVar20 = auVar26._0_4_;
    auVar48._0_4_ = fVar20 + fVar20;
    fVar61 = auVar26._4_4_;
    auVar48._4_4_ = fVar61 + fVar61;
    fVar70 = auVar26._8_4_;
    auVar48._8_4_ = fVar70 + fVar70;
    fVar72 = auVar26._12_4_;
    auVar48._12_4_ = fVar72 + fVar72;
    auVar84 = vshufps_avx(auVar48,auVar48,0);
    auVar26 = vshufps_avx(auVar26,auVar26,0x1b);
    auVar65 = vshufps_avx(auVar48,auVar48,0xff);
    *pfVar8 = fVar20 * auVar84._0_4_ + auVar26._0_4_ * auVar65._0_4_ + fVar19;
    pfVar8[1] = fVar61 * auVar84._4_4_ + auVar26._4_4_ * auVar65._4_4_ + fVar21;
    pfVar8[2] = fVar70 * auVar84._8_4_ + -(auVar26._8_4_ * auVar65._8_4_) + fVar69;
    pfVar8[3] = fVar72 * auVar84._12_4_ + auVar26._12_4_ * auVar65._12_4_ + fVar71;
    iVar4 = iVar4 + 1;
    pfVar8 = pfVar8 + 4;
  } while (iVar4 != 0x10);
  auVar65 = vshufps_avx(ZEXT416((uint)(param_4 * 0.5)),ZEXT416((uint)(param_4 * 0.5)),0);
  auVar35 = vandps_avx(auVar65,_DAT_140de34a0);
  auVar85._0_4_ = (int)(auVar35._0_4_ * 0.63661975 + 0.5);
  auVar85._4_4_ = (int)(auVar35._4_4_ * 0.63661975 + 0.5);
  auVar85._8_4_ = (int)(auVar35._8_4_ * 0.63661975 + 0.5);
  auVar85._12_4_ = (int)(auVar35._12_4_ * 0.63661975 + 0.5);
  auVar102 = vcvtdq2ps_avx(auVar85);
  fVar38 = auVar102._0_4_;
  fVar40 = auVar102._4_4_;
  fVar41 = auVar102._8_4_;
  fVar16 = auVar102._12_4_;
  fVar38 = fVar38 * -7.54979e-08 + fVar38 * -0.0004837513 + fVar38 * -1.5703125 + auVar35._0_4_;
  fVar40 = fVar40 * -7.54979e-08 + fVar40 * -0.0004837513 + fVar40 * -1.5703125 + auVar35._4_4_;
  fVar41 = fVar41 * -7.54979e-08 + fVar41 * -0.0004837513 + fVar41 * -1.5703125 + auVar35._8_4_;
  fVar16 = fVar16 * -7.54979e-08 + fVar16 * -0.0004837513 + fVar16 * -1.5703125 + auVar35._12_4_;
  fVar20 = fVar38 * fVar38;
  fVar61 = fVar40 * fVar40;
  fVar70 = fVar41 * fVar41;
  fVar72 = fVar16 * fVar16;
  auVar95._0_4_ =
       fVar20 * fVar20 * (fVar20 * (fVar20 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar95._4_4_ =
       fVar61 * fVar61 * (fVar61 * (fVar61 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar95._8_4_ =
       fVar70 * fVar70 * (fVar70 * (fVar70 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar95._12_4_ =
       fVar72 * fVar72 * (fVar72 * (fVar72 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar103._0_4_ = fVar20 * 0.5;
  auVar103._4_4_ = fVar61 * 0.5;
  auVar103._8_4_ = fVar70 * 0.5;
  auVar103._12_4_ = fVar72 * 0.5;
  auVar35 = vsubps_avx(auVar95,auVar103);
  auVar96._0_4_ = auVar35._0_4_ + 1.0;
  auVar96._4_4_ = auVar35._4_4_ + 1.0;
  auVar96._8_4_ = auVar35._8_4_ + 1.0;
  auVar96._12_4_ = auVar35._12_4_ + 1.0;
  auVar49._0_4_ =
       fVar20 * (fVar20 * (fVar20 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar38 + fVar38;
  auVar49._4_4_ =
       fVar61 * (fVar61 * (fVar61 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar40 + fVar40;
  auVar49._8_4_ =
       fVar70 * (fVar70 * (fVar70 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar41 + fVar41;
  auVar49._12_4_ =
       fVar72 * (fVar72 * (fVar72 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar16 + fVar16;
  auVar84 = vpslld_avx(auVar85,0x1f);
  auVar35 = vpslld_avx(auVar85,0x1e);
  auVar62 = vpand_avx(auVar35,_DAT_140dc1ff0);
  auVar102 = vblendvps_avx(auVar49,auVar96,auVar84);
  auVar26 = vblendvps_avx(auVar96,auVar49,auVar84);
  auVar35 = vandps_avx(auVar65,auVar22);
  auVar84 = auVar62 ^ auVar84;
  fVar38 = (float)(auVar84._0_4_ ^ auVar26._0_4_);
  fVar40 = (float)(auVar84._4_4_ ^ auVar26._4_4_);
  fVar41 = (float)(auVar84._8_4_ ^ auVar26._8_4_);
  fVar16 = (float)(auVar84._12_4_ ^ auVar26._12_4_);
  iVar4 = 0;
  pfVar8 = local_2f8;
  do {
    auVar26 = ZEXT416((uint)((param_5 + local_53c * (float)iVar4 * 0.0625) * 0.5));
    auVar87 = vshufps_avx(auVar26,auVar26,0);
    auVar26 = vandps_avx(auVar87,auVar45);
    auVar50._0_4_ = (int)(auVar26._0_4_ * 0.63661975 + 0.5);
    auVar50._4_4_ = (int)(auVar26._4_4_ * 0.63661975 + 0.5);
    auVar50._8_4_ = (int)(auVar26._8_4_ * 0.63661975 + 0.5);
    auVar50._12_4_ = (int)(auVar26._12_4_ * 0.63661975 + 0.5);
    auVar84 = vcvtdq2ps_avx(auVar50);
    fVar20 = auVar84._0_4_;
    fVar61 = auVar84._4_4_;
    fVar70 = auVar84._8_4_;
    fVar72 = auVar84._12_4_;
    fVar20 = fVar20 * -0.0004837513 + fVar20 * -1.5703125 + auVar26._0_4_ + fVar20 * -7.54979e-08;
    fVar61 = fVar61 * -0.0004837513 + fVar61 * -1.5703125 + auVar26._4_4_ + fVar61 * -7.54979e-08;
    fVar70 = fVar70 * -0.0004837513 + fVar70 * -1.5703125 + auVar26._8_4_ + fVar70 * -7.54979e-08;
    fVar72 = fVar72 * -0.0004837513 + fVar72 * -1.5703125 + auVar26._12_4_ + fVar72 * -7.54979e-08;
    fVar78 = fVar20 * fVar20;
    fVar79 = fVar61 * fVar61;
    fVar80 = fVar70 * fVar70;
    fVar60 = fVar72 * fVar72;
    auVar97._0_4_ = fVar78 * 0.5;
    auVar97._4_4_ = fVar79 * 0.5;
    auVar97._8_4_ = fVar80 * 0.5;
    auVar97._12_4_ = fVar60 * 0.5;
    auVar89._0_4_ =
         ((fVar78 * 2.4433157e-05 + -0.0013887316) * fVar78 + 0.041666646) * fVar78 * fVar78;
    auVar89._4_4_ =
         ((fVar79 * 2.4433157e-05 + -0.0013887316) * fVar79 + 0.041666646) * fVar79 * fVar79;
    auVar89._8_4_ =
         ((fVar80 * 2.4433157e-05 + -0.0013887316) * fVar80 + 0.041666646) * fVar80 * fVar80;
    auVar89._12_4_ =
         ((fVar60 * 2.4433157e-05 + -0.0013887316) * fVar60 + 0.041666646) * fVar60 * fVar60;
    auVar26 = vsubps_avx(auVar89,auVar97);
    auVar90._0_4_ = auVar26._0_4_ + 1.0;
    auVar90._4_4_ = auVar26._4_4_ + 1.0;
    auVar90._8_4_ = auVar26._8_4_ + 1.0;
    auVar90._12_4_ = auVar26._12_4_ + 1.0;
    auVar27._0_4_ =
         fVar20 + fVar20 * ((fVar78 * -0.00019515296 + 0.008332161) * fVar78 + -0.16666655) * fVar78
    ;
    auVar27._4_4_ =
         fVar61 + fVar61 * ((fVar79 * -0.00019515296 + 0.008332161) * fVar79 + -0.16666655) * fVar79
    ;
    auVar27._8_4_ =
         fVar70 + fVar70 * ((fVar80 * -0.00019515296 + 0.008332161) * fVar80 + -0.16666655) * fVar80
    ;
    auVar27._12_4_ =
         fVar72 + fVar72 * ((fVar60 * -0.00019515296 + 0.008332161) * fVar60 + -0.16666655) * fVar60
    ;
    auVar82 = vpslld_avx(auVar50,0x1f);
    auVar84 = vblendvps_avx(auVar27,auVar90,auVar82);
    auVar26 = vblendvps_avx(auVar90,auVar27,auVar82);
    auVar65 = vpslld_avx(auVar50,0x1e);
    auVar65 = vpand_avx(auVar65,_DAT_140dc1ff0);
    auVar82 = auVar65 ^ auVar82;
    fVar20 = (float)(auVar26._0_4_ ^ auVar82._0_4_);
    fVar61 = (float)(auVar26._4_4_ ^ auVar82._4_4_);
    fVar70 = (float)(auVar26._8_4_ ^ auVar82._8_4_);
    fVar72 = (float)(auVar26._12_4_ ^ auVar82._12_4_);
    auVar26 = vandps_avx(auVar87,auVar22);
    auVar67._0_4_ = fVar38 * fVar20;
    auVar67._4_4_ = fVar40 * fVar61;
    auVar67._8_4_ = fVar41 * fVar70;
    auVar67._12_4_ = fVar16 * fVar72;
    auVar51._0_4_ = fVar38 * (float)(auVar84._0_4_ ^ auVar26._0_4_ ^ auVar65._0_4_);
    auVar51._4_4_ = fVar40 * (float)(auVar84._4_4_ ^ auVar26._4_4_ ^ auVar65._4_4_);
    auVar51._8_4_ = fVar41 * (float)(auVar84._8_4_ ^ auVar26._8_4_ ^ auVar65._8_4_);
    auVar51._12_4_ = fVar16 * (float)(auVar84._12_4_ ^ auVar26._12_4_ ^ auVar65._12_4_);
    auVar28._0_4_ = (float)(auVar102._0_4_ ^ auVar35._0_4_ ^ auVar62._0_4_) * fVar20;
    auVar28._4_4_ = (float)(auVar102._4_4_ ^ auVar35._4_4_ ^ auVar62._4_4_) * fVar61;
    auVar28._8_4_ = (float)(auVar102._8_4_ ^ auVar35._8_4_ ^ auVar62._8_4_) * fVar70;
    auVar28._12_4_ = (float)(auVar102._12_4_ ^ auVar35._12_4_ ^ auVar62._12_4_) * fVar72;
    auVar26 = vunpcklps_avx(ZEXT816(0) << 0x20,auVar28);
    auVar26 = vmovlhps_avx(auVar26,auVar51);
    auVar84 = vinsertps_avx(auVar26,auVar67,0x30);
    auVar26 = vdpps_avx(auVar84,auVar84,0xff);
    auVar26 = vsqrtps_avx(auVar26);
    auVar26 = vdivps_avx(auVar84,auVar26);
    fVar20 = auVar26._0_4_;
    auVar52._0_4_ = fVar20 + fVar20;
    fVar61 = auVar26._4_4_;
    auVar52._4_4_ = fVar61 + fVar61;
    fVar70 = auVar26._8_4_;
    auVar52._8_4_ = fVar70 + fVar70;
    fVar72 = auVar26._12_4_;
    auVar52._12_4_ = fVar72 + fVar72;
    auVar84 = vshufps_avx(auVar52,auVar52,0);
    auVar26 = vshufps_avx(auVar26,auVar26,0x1b);
    auVar65 = vshufps_avx(auVar52,auVar52,0xff);
    *pfVar8 = fVar20 * auVar84._0_4_ + auVar26._0_4_ * auVar65._0_4_ + fVar19;
    pfVar8[1] = fVar61 * auVar84._4_4_ + auVar26._4_4_ * auVar65._4_4_ + fVar21;
    pfVar8[2] = fVar70 * auVar84._8_4_ + -(auVar26._8_4_ * auVar65._8_4_) + fVar69;
    pfVar8[3] = fVar72 * auVar84._12_4_ + auVar26._12_4_ * auVar65._12_4_ + fVar71;
    iVar4 = iVar4 + 1;
    pfVar8 = pfVar8 + 4;
  } while (iVar4 != 0x10);
  auVar65 = vshufps_avx(ZEXT416((uint)(param_6 * 0.5)),ZEXT416((uint)(param_6 * 0.5)),0);
  auVar35 = vandps_avx(auVar65,_DAT_140de34a0);
  auVar53._0_4_ = (int)(auVar35._0_4_ * 0.63661975 + 0.5);
  auVar53._4_4_ = (int)(auVar35._4_4_ * 0.63661975 + 0.5);
  auVar53._8_4_ = (int)(auVar35._8_4_ * 0.63661975 + 0.5);
  auVar53._12_4_ = (int)(auVar35._12_4_ * 0.63661975 + 0.5);
  auVar102 = vcvtdq2ps_avx(auVar53);
  fVar38 = auVar102._0_4_;
  fVar40 = auVar102._4_4_;
  fVar41 = auVar102._8_4_;
  fVar16 = auVar102._12_4_;
  fVar38 = fVar38 * -0.0004837513 + fVar38 * -1.5703125 + auVar35._0_4_ + fVar38 * -7.54979e-08;
  fVar40 = fVar40 * -0.0004837513 + fVar40 * -1.5703125 + auVar35._4_4_ + fVar40 * -7.54979e-08;
  fVar41 = fVar41 * -0.0004837513 + fVar41 * -1.5703125 + auVar35._8_4_ + fVar41 * -7.54979e-08;
  fVar16 = fVar16 * -0.0004837513 + fVar16 * -1.5703125 + auVar35._12_4_ + fVar16 * -7.54979e-08;
  fVar20 = fVar38 * fVar38;
  fVar61 = fVar40 * fVar40;
  fVar70 = fVar41 * fVar41;
  fVar72 = fVar16 * fVar16;
  auVar76._0_4_ =
       ((fVar20 * 2.4433157e-05 + -0.0013887316) * fVar20 + 0.041666646) * fVar20 * fVar20;
  auVar76._4_4_ =
       ((fVar61 * 2.4433157e-05 + -0.0013887316) * fVar61 + 0.041666646) * fVar61 * fVar61;
  auVar76._8_4_ =
       ((fVar70 * 2.4433157e-05 + -0.0013887316) * fVar70 + 0.041666646) * fVar70 * fVar70;
  auVar76._12_4_ =
       ((fVar72 * 2.4433157e-05 + -0.0013887316) * fVar72 + 0.041666646) * fVar72 * fVar72;
  auVar86._0_4_ = fVar20 * 0.5;
  auVar86._4_4_ = fVar61 * 0.5;
  auVar86._8_4_ = fVar70 * 0.5;
  auVar86._12_4_ = fVar72 * 0.5;
  auVar35 = vsubps_avx(auVar76,auVar86);
  auVar77._0_4_ = auVar35._0_4_ + 1.0;
  auVar77._4_4_ = auVar35._4_4_ + 1.0;
  auVar77._8_4_ = auVar35._8_4_ + 1.0;
  auVar77._12_4_ = auVar35._12_4_ + 1.0;
  auVar29._0_4_ =
       fVar38 + fVar38 * ((fVar20 * -0.00019515296 + 0.008332161) * fVar20 + -0.16666655) * fVar20;
  auVar29._4_4_ =
       fVar40 + fVar40 * ((fVar61 * -0.00019515296 + 0.008332161) * fVar61 + -0.16666655) * fVar61;
  auVar29._8_4_ =
       fVar41 + fVar41 * ((fVar70 * -0.00019515296 + 0.008332161) * fVar70 + -0.16666655) * fVar70;
  auVar29._12_4_ =
       fVar16 + fVar16 * ((fVar72 * -0.00019515296 + 0.008332161) * fVar72 + -0.16666655) * fVar72;
  auVar84 = vpslld_avx(auVar53,0x1f);
  auVar35 = vpslld_avx(auVar53,0x1e);
  auVar62 = vpand_avx(auVar35,_DAT_140dc1ff0);
  auVar102 = vblendvps_avx(auVar29,auVar77,auVar84);
  auVar26 = vblendvps_avx(auVar77,auVar29,auVar84);
  auVar35 = vandps_avx(auVar65,auVar22);
  auVar84 = auVar62 ^ auVar84;
  fVar38 = (float)(auVar26._0_4_ ^ auVar84._0_4_);
  fVar40 = (float)(auVar26._4_4_ ^ auVar84._4_4_);
  fVar41 = (float)(auVar26._8_4_ ^ auVar84._8_4_);
  fVar16 = (float)(auVar26._12_4_ ^ auVar84._12_4_);
  iVar4 = 0;
  pauVar9 = (undefined1 (*) [16])local_1f8;
  do {
    auVar26 = ZEXT416((uint)((param_4 + fVar99 * (float)iVar4 * -0.0625) * 0.5));
    auVar87 = vshufps_avx(auVar26,auVar26,0);
    auVar26 = vandps_avx(auVar87,auVar45);
    auVar54._0_4_ = (int)(auVar26._0_4_ * 0.63661975 + 0.5);
    auVar54._4_4_ = (int)(auVar26._4_4_ * 0.63661975 + 0.5);
    auVar54._8_4_ = (int)(auVar26._8_4_ * 0.63661975 + 0.5);
    auVar54._12_4_ = (int)(auVar26._12_4_ * 0.63661975 + 0.5);
    auVar84 = vcvtdq2ps_avx(auVar54);
    fVar20 = auVar84._0_4_;
    fVar61 = auVar84._4_4_;
    fVar70 = auVar84._8_4_;
    fVar72 = auVar84._12_4_;
    fVar20 = fVar20 * -0.0004837513 + fVar20 * -1.5703125 + auVar26._0_4_ + fVar20 * -7.54979e-08;
    fVar61 = fVar61 * -0.0004837513 + fVar61 * -1.5703125 + auVar26._4_4_ + fVar61 * -7.54979e-08;
    fVar70 = fVar70 * -0.0004837513 + fVar70 * -1.5703125 + auVar26._8_4_ + fVar70 * -7.54979e-08;
    fVar72 = fVar72 * -0.0004837513 + fVar72 * -1.5703125 + auVar26._12_4_ + fVar72 * -7.54979e-08;
    fVar78 = fVar20 * fVar20;
    fVar79 = fVar61 * fVar61;
    fVar80 = fVar70 * fVar70;
    fVar60 = fVar72 * fVar72;
    auVar98._0_4_ = fVar78 * 0.5;
    auVar98._4_4_ = fVar79 * 0.5;
    auVar98._8_4_ = fVar80 * 0.5;
    auVar98._12_4_ = fVar60 * 0.5;
    auVar91._0_4_ =
         ((fVar78 * 2.4433157e-05 + -0.0013887316) * fVar78 + 0.041666646) * fVar78 * fVar78;
    auVar91._4_4_ =
         ((fVar79 * 2.4433157e-05 + -0.0013887316) * fVar79 + 0.041666646) * fVar79 * fVar79;
    auVar91._8_4_ =
         ((fVar80 * 2.4433157e-05 + -0.0013887316) * fVar80 + 0.041666646) * fVar80 * fVar80;
    auVar91._12_4_ =
         ((fVar60 * 2.4433157e-05 + -0.0013887316) * fVar60 + 0.041666646) * fVar60 * fVar60;
    auVar26 = vsubps_avx(auVar91,auVar98);
    auVar92._0_4_ = auVar26._0_4_ + 1.0;
    auVar92._4_4_ = auVar26._4_4_ + 1.0;
    auVar92._8_4_ = auVar26._8_4_ + 1.0;
    auVar92._12_4_ = auVar26._12_4_ + 1.0;
    auVar30._0_4_ =
         fVar20 + fVar20 * ((fVar78 * -0.00019515296 + 0.008332161) * fVar78 + -0.16666655) * fVar78
    ;
    auVar30._4_4_ =
         fVar61 + fVar61 * ((fVar79 * -0.00019515296 + 0.008332161) * fVar79 + -0.16666655) * fVar79
    ;
    auVar30._8_4_ =
         fVar70 + fVar70 * ((fVar80 * -0.00019515296 + 0.008332161) * fVar80 + -0.16666655) * fVar80
    ;
    auVar30._12_4_ =
         fVar72 + fVar72 * ((fVar60 * -0.00019515296 + 0.008332161) * fVar60 + -0.16666655) * fVar60
    ;
    auVar82 = vpslld_avx(auVar54,0x1f);
    auVar84 = vblendvps_avx(auVar30,auVar92,auVar82);
    auVar26 = vblendvps_avx(auVar92,auVar30,auVar82);
    auVar65 = vpslld_avx(auVar54,0x1e);
    auVar65 = vpand_avx(auVar65,_DAT_140dc1ff0);
    auVar82 = auVar65 ^ auVar82;
    fVar20 = (float)(auVar26._0_4_ ^ auVar82._0_4_);
    fVar61 = (float)(auVar26._4_4_ ^ auVar82._4_4_);
    fVar70 = (float)(auVar26._8_4_ ^ auVar82._8_4_);
    fVar72 = (float)(auVar26._12_4_ ^ auVar82._12_4_);
    auVar26 = vandps_avx(auVar87,auVar22);
    auVar68._0_4_ = fVar20 * fVar38;
    auVar68._4_4_ = fVar61 * fVar40;
    auVar68._8_4_ = fVar70 * fVar41;
    auVar68._12_4_ = fVar72 * fVar16;
    auVar31._0_4_ = (float)(auVar102._0_4_ ^ auVar35._0_4_ ^ auVar62._0_4_) * fVar20;
    auVar31._4_4_ = (float)(auVar102._4_4_ ^ auVar35._4_4_ ^ auVar62._4_4_) * fVar61;
    auVar31._8_4_ = (float)(auVar102._8_4_ ^ auVar35._8_4_ ^ auVar62._8_4_) * fVar70;
    auVar31._12_4_ = (float)(auVar102._12_4_ ^ auVar35._12_4_ ^ auVar62._12_4_) * fVar72;
    auVar55._0_4_ = (float)(auVar84._0_4_ ^ auVar26._0_4_ ^ auVar65._0_4_) * fVar38;
    auVar55._4_4_ = (float)(auVar84._4_4_ ^ auVar26._4_4_ ^ auVar65._4_4_) * fVar40;
    auVar55._8_4_ = (float)(auVar84._8_4_ ^ auVar26._8_4_ ^ auVar65._8_4_) * fVar41;
    auVar55._12_4_ = (float)(auVar84._12_4_ ^ auVar26._12_4_ ^ auVar65._12_4_) * fVar16;
    auVar26 = vunpcklps_avx(ZEXT816(0) << 0x20,auVar55);
    auVar26 = vmovlhps_avx(auVar26,auVar31);
    auVar84 = vinsertps_avx(auVar26,auVar68,0x30);
    auVar26 = vdpps_avx(auVar84,auVar84,0xff);
    auVar26 = vsqrtps_avx(auVar26);
    auVar26 = vdivps_avx(auVar84,auVar26);
    fVar20 = auVar26._0_4_;
    auVar56._0_4_ = fVar20 + fVar20;
    fVar61 = auVar26._4_4_;
    auVar56._4_4_ = fVar61 + fVar61;
    fVar70 = auVar26._8_4_;
    auVar56._8_4_ = fVar70 + fVar70;
    fVar72 = auVar26._12_4_;
    auVar56._12_4_ = fVar72 + fVar72;
    auVar84 = vshufps_avx(auVar56,auVar56,0);
    auVar26 = vshufps_avx(auVar26,auVar26,0x1b);
    auVar65 = vshufps_avx(auVar56,auVar56,0xff);
    auVar32._0_4_ = fVar20 * auVar84._0_4_ + auVar26._0_4_ * auVar65._0_4_ + fVar19;
    auVar32._4_4_ = fVar61 * auVar84._4_4_ + auVar26._4_4_ * auVar65._4_4_ + fVar21;
    auVar32._8_4_ = fVar70 * auVar84._8_4_ + -(auVar26._8_4_ * auVar65._8_4_) + fVar69;
    auVar32._12_4_ = fVar72 * auVar84._12_4_ + auVar26._12_4_ * auVar65._12_4_ + fVar71;
    *pauVar9 = auVar32;
    iVar4 = iVar4 + 1;
    pauVar9 = pauVar9 + 1;
  } while (iVar4 != 0x10);
  local_54c = fVar99;
  local_538 = auVar17;
  piVar7 = (int *)FUN_14037d570(param_1,0x40,local_4f8);
  piVar15 = (int *)*puVar14;
  if (piVar15 == piVar7) {
    in_ZMM10 = ZEXT1664(local_538);
    auVar35 = ZEXT416(param_7);
  }
  else {
    in_ZMM10 = ZEXT1664(local_538);
    auVar59 = ZEXT464(param_7);
    auVar35 = ZEXT416(param_7);
    if (piVar15 != (int *)0x0) {
      LOCK();
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        plVar10 = *(longlong **)(piVar15 + 6);
        if (plVar10 != (longlong *)0x0) {
          if (*(longlong *)(piVar15 + 2) != 0) {
            plVar11 = plVar10 + *(longlong *)(piVar15 + 2) * 2;
            do {
              if ((longlong *)*plVar10 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar10 + 0x10))();
              }
              plVar10 = plVar10 + 2;
            } while (plVar10 < plVar11);
            plVar10 = *(longlong **)(piVar15 + 6);
          }
          piVar15[2] = 0;
          piVar15[3] = 0;
          (*DAT_14151f538)(plVar10);
          auVar17._0_12_ = ZEXT812(0);
          auVar17._12_4_ = 0;
          *(undefined1 (*) [16])(piVar15 + 4) = auVar17;
        }
        (*DAT_14151f538)(piVar15);
        auVar35 = auVar59._0_16_;
      }
    }
    *puVar14 = piVar7;
    if (piVar7 == (int *)0x0) {
      piVar15 = (int *)0x0;
    }
    else {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      piVar15 = (int *)*puVar14;
    }
  }
LAB_14037f4d0:
  local_570 = puVar13 + 2;
  auVar35 = vshufps_avx(auVar35,auVar35,0);
  fVar99 = auVar35._0_4_;
  fVar38 = auVar35._4_4_;
  fVar40 = auVar35._8_4_;
  fVar41 = auVar35._12_4_;
  fVar61 = param_2[4] * 0.0;
  fVar69 = param_2[5] * 0.0;
  fVar70 = param_2[6] * 0.0;
  fVar71 = param_2[7] * 0.0;
  fVar72 = param_2[8] * 0.0;
  fVar78 = param_2[9] * 0.0;
  fVar79 = param_2[10] * 0.0;
  fVar80 = param_2[0xb] * 0.0;
  local_4d8 = param_2[0xc] * 0.0;
  fStack_4d4 = param_2[0xd] * 0.0;
  fStack_4d0 = param_2[0xe] * 0.0;
  fStack_4cc = param_2[0xf] * 0.0;
  local_4f8[0] = local_4d8 + fVar72 + *param_2 * fVar99 + fVar61;
  local_4f8[1] = fStack_4d4 + fVar78 + param_2[1] * fVar38 + fVar69;
  local_4f8[2] = fStack_4d0 + fVar79 + param_2[2] * fVar40 + fVar70;
  local_4f8[3] = fStack_4cc + fVar80 + param_2[3] * fVar41 + fVar71;
  fVar16 = *param_2 * 0.0;
  fVar19 = param_2[1] * 0.0;
  fVar20 = param_2[2] * 0.0;
  fVar21 = param_2[3] * 0.0;
  local_4f8[4] = local_4d8 + fVar72 + fVar16 + fVar99 * param_2[4];
  local_4f8[5] = fStack_4d4 + fVar78 + fVar19 + fVar38 * param_2[5];
  local_4f8[6] = fStack_4d0 + fVar79 + fVar20 + fVar40 * param_2[6];
  fStack_4dc = fStack_4cc + fVar80 + fVar21 + fVar41 * param_2[7];
  fVar16 = fVar16 + fVar61;
  fVar19 = fVar19 + fVar69;
  fVar20 = fVar20 + fVar70;
  fVar21 = fVar21 + fVar71;
  local_4d8 = local_4d8 + fVar16 + fVar99 * param_2[8];
  fStack_4d4 = fStack_4d4 + fVar19 + fVar38 * param_2[9];
  fStack_4d0 = fStack_4d0 + fVar20 + fVar40 * param_2[10];
  fStack_4cc = fStack_4cc + fVar21 + fVar41 * param_2[0xb];
  local_4c8 = fVar72 + fVar16 + param_2[0xc];
  fStack_4c4 = fVar78 + fVar19 + param_2[0xd];
  fStack_4c0 = fVar79 + fVar20 + param_2[0xe];
  fStack_4bc = fVar80 + fVar21 + param_2[0xf];
  auVar36._0_4_ = local_4d8 * local_4d8;
  auVar36._4_4_ = fStack_4d4 * fStack_4d4;
  auVar36._8_4_ = fStack_4d0 * fStack_4d0;
  auVar36._12_4_ = fStack_4cc * fStack_4cc;
  auVar35 = vinsertps_avx(auVar36,auVar36,0x4c);
  auVar37._0_4_ = auVar36._0_4_ + auVar35._0_4_;
  auVar37._4_4_ = auVar36._4_4_ + auVar35._4_4_;
  auVar37._8_4_ = auVar36._8_4_ + auVar35._8_4_;
  auVar37._12_4_ = auVar36._12_4_ + auVar35._12_4_;
  auVar17 = vshufpd_avx(auVar37,auVar37,1);
  auVar42._0_4_ = local_4f8[4] * local_4f8[4];
  auVar42._4_4_ = local_4f8[5] * local_4f8[5];
  auVar42._8_4_ = local_4f8[6] * local_4f8[6];
  auVar42._12_4_ = fStack_4dc * fStack_4dc;
  auVar35 = vinsertps_avx(auVar42,auVar42,0x4c);
  auVar43._0_4_ = auVar42._0_4_ + auVar35._0_4_;
  auVar43._4_4_ = auVar42._4_4_ + auVar35._4_4_;
  auVar43._8_4_ = auVar42._8_4_ + auVar35._8_4_;
  auVar43._12_4_ = auVar42._12_4_ + auVar35._12_4_;
  auVar102 = vshufpd_avx(auVar43,auVar43,1);
  auVar57._0_4_ = local_4f8[0] * local_4f8[0];
  auVar57._4_4_ = local_4f8[1] * local_4f8[1];
  auVar57._8_4_ = local_4f8[2] * local_4f8[2];
  auVar57._12_4_ = local_4f8[3] * local_4f8[3];
  auVar35 = vinsertps_avx(auVar57,auVar57,0x4c);
  auVar58._0_4_ = auVar57._0_4_ + auVar35._0_4_;
  auVar58._4_4_ = auVar57._4_4_ + auVar35._4_4_;
  auVar58._8_4_ = auVar57._8_4_ + auVar35._8_4_;
  auVar58._12_4_ = auVar57._12_4_ + auVar35._12_4_;
  auVar35 = vshufpd_avx(auVar58,auVar58,1);
  auVar35 = vmaxss_avx(ZEXT416((uint)(auVar43._0_4_ + auVar102._0_4_)),
                       ZEXT416((uint)(auVar58._0_4_ + auVar35._0_4_)));
  auVar26 = vmaxss_avx(ZEXT416((uint)(auVar37._0_4_ + auVar17._0_4_)),auVar35);
  fVar99 = (float)piVar15[8];
  auVar44._0_4_ = local_4f8[0] * fVar99;
  auVar44._4_4_ = local_4f8[1] * fVar99;
  auVar44._8_4_ = local_4f8[2] * fVar99;
  auVar44._12_4_ = local_4f8[3] * fVar99;
  fVar99 = (float)piVar15[0xc];
  auVar33._0_4_ = local_4f8[0] * fVar99;
  auVar33._4_4_ = local_4f8[1] * fVar99;
  auVar33._8_4_ = local_4f8[2] * fVar99;
  auVar33._12_4_ = local_4f8[3] * fVar99;
  auVar102 = vminps_avx(auVar44,auVar33);
  auVar35 = vmaxps_avx(auVar44,auVar33);
  fVar99 = (float)piVar15[9];
  auVar39._0_4_ = local_4f8[4] * fVar99;
  auVar39._4_4_ = local_4f8[5] * fVar99;
  auVar39._8_4_ = local_4f8[6] * fVar99;
  auVar39._12_4_ = fStack_4dc * fVar99;
  fVar99 = (float)piVar15[0xd];
  auVar23._0_4_ = local_4f8[4] * fVar99;
  auVar23._4_4_ = local_4f8[5] * fVar99;
  auVar23._8_4_ = local_4f8[6] * fVar99;
  auVar23._12_4_ = fStack_4dc * fVar99;
  auVar62 = vminps_avx(auVar39,auVar23);
  auVar17 = vmaxps_avx(auVar39,auVar23);
  fVar99 = (float)piVar15[10];
  auVar34._0_4_ = local_4d8 * fVar99;
  auVar34._4_4_ = fStack_4d4 * fVar99;
  auVar34._8_4_ = fStack_4d0 * fVar99;
  auVar34._12_4_ = fStack_4cc * fVar99;
  fVar99 = (float)piVar15[0xe];
  auVar18._0_4_ = local_4d8 * fVar99;
  auVar18._4_4_ = fStack_4d4 * fVar99;
  auVar18._8_4_ = fStack_4d0 * fVar99;
  auVar18._12_4_ = fStack_4cc * fVar99;
  auVar45 = vminps_avx(auVar34,auVar18);
  local_518 = local_4c8 + auVar102._0_4_ + auVar62._0_4_ + auVar45._0_4_;
  fStack_514 = fStack_4c4 + auVar102._4_4_ + auVar62._4_4_ + auVar45._4_4_;
  fStack_510 = fStack_4c0 + auVar102._8_4_ + auVar62._8_4_ + auVar45._8_4_;
  fStack_50c = fStack_4bc + auVar102._12_4_ + auVar62._12_4_ + auVar45._12_4_;
  auVar102 = vmaxps_avx(auVar34,auVar18);
  local_508._0_4_ = local_4c8 + auVar35._0_4_ + auVar17._0_4_ + auVar102._0_4_;
  local_508._4_4_ = fStack_4c4 + auVar35._4_4_ + auVar17._4_4_ + auVar102._4_4_;
  local_508._8_4_ = fStack_4c0 + auVar35._8_4_ + auVar17._8_4_ + auVar102._8_4_;
  local_508._12_4_ = fStack_4bc + auVar35._12_4_ + auVar17._12_4_ + auVar102._12_4_;
  local_568 = 2;
  local_578 = param_8;
  local_560 = param_9;
  local_558 = param_10;
  (**(code **)(*param_1 + 0x28))(param_1,local_4f8,&local_518,auVar26._0_8_);
  if (pauVar12 != (undefined1 (*) [16])0x0) {
    uVar2 = rdtsc();
    auVar17 = vpinsrq_avx(in_ZMM10._0_16_,
                          uVar2 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar2),1);
    auVar35 = vmovntdq_avx(SUB6416(ZEXT864(0x14139757c),0));
    *pauVar12 = auVar35;
    auVar35 = vmovntdq_avx(auVar17);
    pauVar12[1] = auVar35;
  }
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_598)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_f0 ^ (ulonglong)auStack_598);
  }
  return;
}

