/**
 * Function: void_jph_debugrenderer_drawpiervec3arg_float
 * Address:  14037f720
 * Signature: undefined void_jph_debugrenderer_drawpiervec3arg_float(void)
 * Body size: 2880 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void void_jph_debugrenderer_drawpiervec3arg_float
               (longlong *param_1,undefined1 (*param_2) [16],undefined8 param_3,
               undefined1 (*param_4) [16],undefined1 (*param_5) [16],float param_6,float param_7,
               undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  longlong lVar1;
  code *pcVar2;
  int *piVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int *piVar11;
  undefined4 extraout_var;
  float *pfVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong *puVar16;
  uint *puVar17;
  uint uVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  undefined1 (*pauVar24) [16];
  uint uVar25;
  longlong *plVar26;
  float *pfVar27;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  float fVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [64];
  undefined1 auVar64 [16];
  undefined1 auVar65 [64];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  undefined1 in_ZMM8 [64];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  float fVar79;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  undefined1 in_ZMM10 [64];
  undefined1 auVar80 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar81 [16];
  undefined1 in_ZMM12 [64];
  undefined8 auStack_1d0 [4];
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined1 (*local_180) [16];
  longlong local_178;
  undefined1 (*local_170) [16];
  float *local_168;
  undefined8 uStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  undefined1 local_c8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  
  puVar20 = local_1a8;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_c8 = in_ZMM8._0_16_;
  auVar63 = ZEXT464((uint)param_6);
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)&fStack_128;
  if (param_7 <= param_6) goto LAB_1403801eb;
  auVar65 = ZEXT1664(in_ZMM2._0_16_);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    auStack_1d0[0] = 0x14037f7da;
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  local_188 = param_2;
  if (lVar1 == 0) {
LAB_14037f85d:
    pauVar24 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar25 = *(uint *)(lVar1 + 0x200020);
    if (0xffff < (ulonglong)uVar25) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        auStack_1d0[0] = 0x14037f859;
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_14037f85d;
    }
    *(uint *)(lVar1 + 0x200020) = uVar25 + 1;
    pauVar24 = (undefined1 (*) [16])(lVar1 + (ulonglong)uVar25 * 0x20 + 0x20);
    uVar13 = rdtsc();
    in_ZMM12 = ZEXT864(uVar13 & 0xffffffff00000000 |
                       CONCAT44((int)((ulonglong)lVar1 >> 0x20),(int)uVar13));
  }
  uStack_160._4_4_ = param_7 - auVar63._0_4_;
  auStack_1d0[0] = 0x14037f894;
  cVar9 = FUN_1403825e0(param_1 + 0x18,(longlong)&uStack_160 + 4,&local_138);
  fVar53 = uStack_160._4_4_;
  auVar71 = auVar63._0_16_;
  auVar28 = auVar65._0_16_;
  pfVar12 = (float *)((ulonglong)(uint)local_138 * 0x10 + param_1[0x18]);
  if (cVar9 == '\0') {
    pfVar27 = pfVar12 + 2;
    puVar20 = local_1a8;
    if (*(longlong *)(pfVar12 + 2) == 0) goto LAB_14037f8d3;
  }
  else {
    *pfVar12 = uStack_160._4_4_;
    pfVar12[2] = 0.0;
    pfVar12[3] = 0.0;
LAB_14037f8d3:
    pfVar27 = pfVar12 + 2;
    local_170 = param_4;
    if ((int)param_1[0x1e] != 0) {
      auVar30._0_12_ = ZEXT812(0);
      auVar30._12_4_ = 0;
      auVar30 = vcmpss_avx(ZEXT416((uint)uStack_160._4_4_),auVar30,0);
      auVar30 = vandnps_avx(auVar30,ZEXT416((uint)uStack_160._4_4_));
      uVar25 = auVar30._0_4_;
      uVar13 = ((ulonglong)(uVar25 >> 0x18) ^
               ((ulonglong)(uVar25 >> 0x10 & 0xff) ^
               ((ulonglong)(uVar25 >> 8 & 0xff) ^
               ((ulonglong)(uVar25 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
               0x100000001b3) * 0x100000001b3;
      uVar25 = *(uint *)((longlong)param_1 + 0xf4) - 1;
      uVar10 = (uint)(uVar13 >> 7);
      auVar30 = vpshufb_avx(ZEXT416((uint)uVar13 | 0x80),(undefined1  [16])0x0);
      while( true ) {
        uVar10 = uVar10 & uVar25;
        auVar31 = vpcmpeqb_avx(*(undefined1 (*) [16])(param_1[0x1d] + (ulonglong)uVar10),auVar30);
        uVar5 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar31[0xf] >> 7) << 0xf;
        if (uVar5 != 0) {
          uVar18 = (uint)uVar5;
          uVar23 = uVar10;
          do {
            iVar22 = 0;
            for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              iVar22 = iVar22 + 1;
            }
            uVar23 = uVar23 + iVar22 & uVar25;
            fVar58 = *(float *)(param_1[0x1c] + (ulonglong)uVar23 * 0x10);
            if ((fVar58 == uStack_160._4_4_) && (!NAN(fVar58) && !NAN(uStack_160._4_4_))) {
              if ((uVar23 == *(uint *)((longlong)param_1 + 0xf4)) ||
                 (piVar11 = *(int **)(param_1[0x1c] + 8 + (ulonglong)uVar23 * 0x10),
                 piVar11 == (int *)0x0)) goto LAB_14037f9fb;
              *(int **)pfVar27 = piVar11;
              LOCK();
              *piVar11 = *piVar11 + 1;
              UNLOCK();
              puVar20 = local_1a8;
              if (*(longlong *)pfVar27 == 0) goto LAB_14037f9fb;
              goto LAB_14037fefd;
            }
            bVar4 = (char)iVar22 + 1U & 0x1f;
            uVar23 = uVar23 + 1;
            uVar6 = uVar18 >> bVar4;
            uVar18 = uVar18 >> bVar4;
          } while (uVar6 != 0);
        }
        auVar31 = vpcmpeqb_avx(*(undefined1 (*) [16])(param_1[0x1d] + (ulonglong)uVar10),
                               (undefined1  [16])0x0);
        if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x1f,0) & 1) != 0) || (SUB161(auVar31 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
        uVar10 = uVar10 + 0x10;
      }
    }
LAB_14037f9fb:
    auVar71._0_4_ = (uStack_160._4_4_ * 64.0) / 6.2831855;
    auVar71._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar71 = vroundss_avx(auVar71,auVar71,10);
    uVar25 = (uint)auVar71._0_4_;
    fStack_130 = 0.0;
    local_138 = 0.0;
    fStack_134 = 0.0;
    lVar1 = (longlong)(int)uVar25 * 4;
    uStack_1b0 = 0x14037fa4d;
    lVar7 = -((longlong)(int)uVar25 * 0x24 + 0x57U & 0xfffffffffffffff0);
    puVar16 = (ulonglong *)(local_1a8 + lVar7);
    fStack_12c = 0.0;
    fStack_128 = 1.0;
    fStack_124 = 0.0;
    local_168 = pfVar27;
    *(undefined8 *)(local_1a8 + lVar7) = 0;
    *(float *)(local_1a8 + lVar7 + 8) = fStack_130;
    *(float *)(local_1a8 + lVar7 + 0xc) = fStack_12c;
    *(ulonglong *)(local_198 + lVar7) = CONCAT44(fStack_124,fStack_128);
    *(undefined8 *)(local_198 + lVar7 + 8) = 0;
    *(undefined4 *)((longlong)&local_188 + lVar7) = 0xffffffff;
    local_180 = pauVar24;
    local_178 = lVar1;
    if ((int)uVar25 < 0) {
      uVar10 = uVar25 * 3;
      *(undefined8 *)(local_1a8 + lVar7 + -8) = 0x14037fd99;
      lVar1 = -((longlong)(int)uVar10 * 4 + 0xfU & 0xfffffffffffffff0);
      puVar20 = local_1a8 + lVar1 + lVar7;
      *(undefined8 *)((longlong)auStack_1d0 + lVar1 + lVar7) = 0x14037fdae;
      piVar11 = (int *)(*DAT_14151f528)(0x40);
      if (uVar25 == 0xffffffff) {
        uVar10 = 0xfffffffd;
        goto LAB_14037fd2f;
      }
      auVar31._8_4_ = 0x7f7fffff;
      auVar31._0_8_ = 0x7f7fffff7f7fffff;
      auVar31._12_4_ = 0x7f7fffff;
      auVar28._8_4_ = 0xff7fffff;
      auVar28._0_8_ = 0xff7fffffff7fffff;
      auVar28._12_4_ = 0xff7fffff;
      puVar20 = local_1a8 + lVar1 + lVar7;
    }
    else {
      local_1a8 = in_ZMM12._0_16_;
      puVar17 = (uint *)((longlong)&local_188 + lVar7 + 4);
      iVar22 = 0;
      auVar35._8_4_ = 0x80000000;
      auVar35._0_8_ = 0x8000000080000000;
      auVar35._12_4_ = 0x80000000;
      do {
        fVar58 = fVar53 * ((float)iVar22 / (float)(int)uVar25);
        auVar71 = vshufps_avx(ZEXT416((uint)fVar58),ZEXT416((uint)fVar58),0);
        auVar71 = vandps_avx(auVar71,_DAT_140de34a0);
        auVar70._0_4_ = (int)(auVar71._0_4_ * 0.63661975 + 0.5);
        auVar70._4_4_ = (int)(auVar71._4_4_ * 0.63661975 + 0.5);
        auVar70._8_4_ = (int)(auVar71._8_4_ * 0.63661975 + 0.5);
        auVar70._12_4_ = (int)(auVar71._12_4_ * 0.63661975 + 0.5);
        auVar30 = vcvtdq2ps_avx(auVar70);
        fVar43 = auVar30._0_4_;
        fVar50 = auVar30._4_4_;
        fVar51 = auVar30._8_4_;
        fVar52 = auVar30._12_4_;
        fVar43 = fVar43 * -7.54979e-08 +
                 fVar43 * -0.0004837513 + fVar43 * -1.5703125 + auVar71._0_4_;
        fVar50 = fVar50 * -7.54979e-08 +
                 fVar50 * -0.0004837513 + fVar50 * -1.5703125 + auVar71._4_4_;
        fVar51 = fVar51 * -7.54979e-08 +
                 fVar51 * -0.0004837513 + fVar51 * -1.5703125 + auVar71._8_4_;
        fVar52 = fVar52 * -7.54979e-08 +
                 fVar52 * -0.0004837513 + fVar52 * -1.5703125 + auVar71._12_4_;
        fVar74 = fVar43 * fVar43;
        fVar77 = fVar50 * fVar50;
        fVar78 = fVar51 * fVar51;
        fVar79 = fVar52 * fVar52;
        auVar81._0_4_ = fVar74 * 0.5;
        auVar81._4_4_ = fVar77 * 0.5;
        auVar81._8_4_ = fVar78 * 0.5;
        auVar81._12_4_ = fVar79 * 0.5;
        auVar75._0_4_ =
             fVar74 * fVar74 * (fVar74 * (fVar74 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
        auVar75._4_4_ =
             fVar77 * fVar77 * (fVar77 * (fVar77 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
        auVar75._8_4_ =
             fVar78 * fVar78 * (fVar78 * (fVar78 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
        auVar75._12_4_ =
             fVar79 * fVar79 * (fVar79 * (fVar79 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
        auVar71 = vsubps_avx(auVar75,auVar81);
        auVar72._0_4_ = auVar71._0_4_ + 1.0;
        auVar72._4_4_ = auVar71._4_4_ + 1.0;
        auVar72._8_4_ = auVar71._8_4_ + 1.0;
        auVar72._12_4_ = auVar71._12_4_ + 1.0;
        auVar44._0_4_ =
             fVar74 * (fVar74 * (fVar74 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar43 +
             fVar43;
        auVar44._4_4_ =
             fVar77 * (fVar77 * (fVar77 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar50 +
             fVar50;
        auVar44._8_4_ =
             fVar78 * (fVar78 * (fVar78 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar51 +
             fVar51;
        auVar44._12_4_ =
             fVar79 * (fVar79 * (fVar79 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar52 +
             fVar52;
        auVar75 = vpslld_avx(auVar70,0x1f);
        auVar30 = vblendvps_avx(auVar44,auVar72,auVar75);
        auVar31 = vblendvps_avx(auVar72,auVar44,auVar75);
        auVar71 = vpslld_avx(auVar70,0x1e);
        auVar44 = vpand_avx(auVar71,auVar35);
        auVar71 = vandps_avx(ZEXT416((uint)fVar58),auVar35);
        *puVar17 = auVar44._0_4_ ^ auVar75._0_4_ ^ auVar31._0_4_;
        puVar17[1] = 0;
        puVar17[2] = auVar30._0_4_ ^ auVar44._0_4_ ^ auVar71._0_4_;
        puVar17[3] = 0;
        puVar17[4] = 0x3f800000;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[8] = 0xffffffff;
        iVar22 = iVar22 + 1;
        puVar17 = puVar17 + 9;
      } while (uVar25 + 1 != iVar22);
      uVar10 = uVar25 * 3;
      local_198 = auVar28;
      *(undefined8 *)(local_1a8 + lVar7 + -8) = 0x14037fc32;
      lVar1 = -((ulonglong)uVar10 * 4 + 0xf & 0xfffffffffffffff0);
      puVar14 = (undefined4 *)(local_1a8 + lVar1 + lVar7);
      puVar20 = local_1a8 + lVar1 + lVar7;
      auVar63 = ZEXT464((uint)param_6);
      auVar65 = ZEXT1664(local_198);
      if (uVar25 != 0) {
        iVar22 = 0;
        puVar15 = (undefined4 *)(local_1a8 + lVar1 + lVar7);
        if (3 < uVar25) {
          iVar8 = 2;
          do {
            iVar22 = iVar8;
            *puVar14 = 0;
            puVar14[1] = iVar22 + -1;
            puVar14[2] = iVar22;
            puVar14[3] = 0;
            puVar14[4] = iVar22;
            puVar14[5] = iVar22 + 1;
            puVar14[6] = 0;
            puVar14[7] = iVar22 + 1;
            puVar14[8] = iVar22 + 2;
            puVar14[9] = 0;
            puVar14[10] = iVar22 + 2;
            puVar14[0xb] = iVar22 + 3;
            puVar14 = puVar14 + 0xc;
            iVar8 = iVar22 + 4;
          } while (iVar22 - (uVar25 & 0x7ffffffc) != -2);
          iVar22 = iVar22 + 2;
          puVar15 = puVar14;
        }
        if ((uVar25 & 3) != 0) {
          iVar22 = iVar22 + 2;
          lVar21 = 0;
          do {
            *(undefined4 *)((longlong)puVar15 + lVar21) = 0;
            *(int *)((longlong)puVar15 + lVar21 + 4) = iVar22 + -1;
            *(int *)((longlong)puVar15 + lVar21 + 8) = iVar22;
            iVar22 = iVar22 + 1;
            lVar21 = lVar21 + 0xc;
          } while ((uVar25 & 3) * 0xc != (int)lVar21);
        }
      }
      *(undefined8 *)((longlong)auStack_1d0 + lVar1 + lVar7) = 0x14037fd20;
      piVar11 = (int *)(*DAT_14151f528)(0x40);
      in_ZMM12 = ZEXT1664(local_1a8);
LAB_14037fd2f:
      auVar28._8_4_ = 0xff7fffff;
      auVar28._0_8_ = 0xff7fffffff7fffff;
      auVar28._12_4_ = 0xff7fffff;
      auVar31._8_4_ = 0x7f7fffff;
      auVar31._0_8_ = 0x7f7fffff7f7fffff;
      auVar31._12_4_ = 0x7f7fffff;
      do {
        auVar36._8_8_ = 0;
        auVar36._0_8_ = *puVar16;
        auVar71 = vshufps_avx(auVar36,ZEXT416((uint)puVar16[1]),4);
        auVar31 = vminps_avx(auVar31,auVar71);
        auVar28 = vmaxps_avx(auVar28,auVar71);
        puVar16 = (ulonglong *)((longlong)puVar16 + 0x24);
      } while (puVar16 < (ulonglong *)((longlong)&uStack_160 + local_178 * 9 + lVar7));
    }
    local_138 = auVar31._0_4_;
    fStack_134 = auVar31._4_4_;
    fStack_130 = auVar31._8_4_;
    fStack_12c = auVar31._12_4_;
    fStack_128 = auVar28._0_4_;
    fStack_124 = auVar28._4_4_;
    fStack_120 = auVar28._8_4_;
    fStack_11c = auVar28._12_4_;
    lVar1 = *param_1;
    *(uint *)(puVar20 + -8) = uVar10;
    *(undefined1 **)(puVar20 + -0x10) = puVar20;
    pcVar2 = *(code **)(lVar1 + 0x18);
    *(undefined8 *)(puVar20 + -0x38) = 0x14037fdfe;
    (*pcVar2)(param_1,&local_158,local_1a8 + lVar7,uVar25 + 2);
    *(undefined8 *)(puVar20 + -0x28) = 0x14037fe11;
    FUN_1403014e0(piVar11,&local_158,&local_138);
    piVar3 = *(int **)local_168;
    if (piVar3 != piVar11) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          plVar26 = *(longlong **)(piVar3 + 6);
          if (plVar26 != (longlong *)0x0) {
            if (*(longlong *)(piVar3 + 2) != 0) {
              plVar19 = plVar26 + *(longlong *)(piVar3 + 2) * 2;
              do {
                if ((longlong *)*plVar26 != (longlong *)0x0) {
                  pcVar2 = *(code **)(*(longlong *)*plVar26 + 0x10);
                  *(undefined8 *)(puVar20 + -0x28) = 0x14037fe7b;
                  (*pcVar2)();
                }
                plVar26 = plVar26 + 2;
              } while (plVar26 < plVar19);
              plVar26 = *(longlong **)(piVar3 + 6);
            }
            piVar3[2] = 0;
            piVar3[3] = 0;
            *(undefined8 *)(puVar20 + -0x28) = 0x14037fea7;
            (*DAT_14151f538)(plVar26);
            auVar29._0_12_ = ZEXT812(0);
            auVar29._12_4_ = 0;
            *(undefined1 (*) [16])(piVar3 + 4) = auVar29;
          }
          *(undefined8 *)(puVar20 + -0x28) = 0x14037fec2;
          (*DAT_14151f538)(piVar3);
        }
      }
      *(int **)local_168 = piVar11;
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    pfVar27 = local_168;
    auVar71 = auVar63._0_16_;
    auVar28 = auVar65._0_16_;
    pauVar24 = local_180;
    param_4 = local_170;
    if ((longlong *)CONCAT44(fStack_154,local_158) != (longlong *)0x0) {
      pcVar2 = *(code **)(*(longlong *)CONCAT44(fStack_154,local_158) + 0x10);
      *(undefined8 *)(puVar20 + -0x28) = 0x14037fee5;
      (*pcVar2)();
      auVar71 = auVar63._0_16_;
      auVar28 = auVar65._0_16_;
      pauVar24 = local_180;
      param_4 = local_170;
    }
  }
LAB_14037fefd:
  auVar30 = *param_5;
  auVar35 = vshufps_avx(auVar30,auVar30,0xc9);
  auVar31 = *param_4;
  auVar32._0_4_ = auVar35._0_4_ * auVar31._0_4_;
  auVar32._4_4_ = auVar35._4_4_ * auVar31._4_4_;
  auVar32._8_4_ = auVar35._8_4_ * auVar31._8_4_;
  auVar32._12_4_ = auVar35._12_4_ * auVar31._12_4_;
  auVar35 = vshufps_avx(auVar31,auVar31,0xc9);
  auVar37._0_4_ = auVar30._0_4_ * auVar35._0_4_;
  auVar37._4_4_ = auVar30._4_4_ * auVar35._4_4_;
  auVar37._8_4_ = auVar30._8_4_ * auVar35._8_4_;
  auVar37._12_4_ = auVar30._12_4_ * auVar35._12_4_;
  auVar35 = vsubps_avx(auVar32,auVar37);
  auVar35 = vshufps_avx(auVar35,auVar35,0xc9);
  auVar28 = vpshufd_avx(auVar28,0);
  fVar53 = auVar28._0_4_;
  auVar33._0_4_ = fVar53 * auVar35._0_4_;
  fVar58 = auVar28._4_4_;
  auVar33._4_4_ = fVar58 * auVar35._4_4_;
  fVar43 = auVar28._8_4_;
  auVar33._8_4_ = fVar43 * auVar35._8_4_;
  fVar50 = auVar28._12_4_;
  auVar33._12_4_ = fVar50 * auVar35._12_4_;
  auVar35 = ZEXT416(0) << 0x20;
  auVar28 = vblendps_avx(auVar33,auVar35,8);
  auVar40._0_4_ = fVar53 * auVar31._0_4_;
  auVar40._4_4_ = fVar58 * auVar31._4_4_;
  auVar40._8_4_ = fVar43 * auVar31._8_4_;
  auVar40._12_4_ = fVar50 * auVar31._12_4_;
  auVar31 = vblendps_avx(auVar40,auVar35,8);
  auVar45._0_4_ = fVar53 * auVar30._0_4_;
  auVar45._4_4_ = fVar58 * auVar30._4_4_;
  auVar45._8_4_ = fVar43 * auVar30._8_4_;
  auVar45._12_4_ = fVar50 * auVar30._12_4_;
  auVar70 = vinsertps_avx(*local_188,ZEXT416(0x3f800000),0x30);
  auVar71 = vshufps_avx(auVar71,auVar71,0);
  auVar59._0_8_ = auVar71._0_8_ ^ 0x8000000080000000;
  auVar59._8_4_ = auVar71._8_4_ ^ 0x80000000;
  auVar59._12_4_ = auVar71._12_4_ ^ 0x80000000;
  auVar71 = vandps_avx(auVar71,_DAT_140de34a0);
  auVar64._0_4_ = (int)(auVar71._0_4_ * 0.63661975 + 0.5);
  auVar64._4_4_ = (int)(auVar71._4_4_ * 0.63661975 + 0.5);
  auVar64._8_4_ = (int)(auVar71._8_4_ * 0.63661975 + 0.5);
  auVar64._12_4_ = (int)(auVar71._12_4_ * 0.63661975 + 0.5);
  auVar30 = vcvtdq2ps_avx(auVar64);
  fVar53 = auVar30._0_4_;
  fVar58 = auVar30._4_4_;
  fVar43 = auVar30._8_4_;
  fVar50 = auVar30._12_4_;
  auVar30 = vblendps_avx(auVar45,auVar35,8);
  auVar80._8_4_ = 0x80000000;
  auVar80._0_8_ = 0x8000000080000000;
  auVar80._12_4_ = 0x80000000;
  fVar53 = fVar53 * -7.54979e-08 + fVar53 * -0.0004837513 + fVar53 * -1.5703125 + auVar71._0_4_;
  fVar58 = fVar58 * -7.54979e-08 + fVar58 * -0.0004837513 + fVar58 * -1.5703125 + auVar71._4_4_;
  fVar43 = fVar43 * -7.54979e-08 + fVar43 * -0.0004837513 + fVar43 * -1.5703125 + auVar71._8_4_;
  fVar50 = fVar50 * -7.54979e-08 + fVar50 * -0.0004837513 + fVar50 * -1.5703125 + auVar71._12_4_;
  fVar51 = fVar53 * fVar53;
  fVar52 = fVar58 * fVar58;
  fVar74 = fVar43 * fVar43;
  fVar77 = fVar50 * fVar50;
  auVar71 = vandps_avx(auVar80,auVar59);
  auVar76._0_4_ =
       fVar51 * fVar51 * (fVar51 * (fVar51 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar76._4_4_ =
       fVar52 * fVar52 * (fVar52 * (fVar52 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar76._8_4_ =
       fVar74 * fVar74 * (fVar74 * (fVar74 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar76._12_4_ =
       fVar77 * fVar77 * (fVar77 * (fVar77 * 2.4433157e-05 + -0.0013887316) + 0.041666646);
  auVar66._0_4_ = fVar51 * 0.5;
  auVar66._4_4_ = fVar52 * 0.5;
  auVar66._8_4_ = fVar74 * 0.5;
  auVar66._12_4_ = fVar77 * 0.5;
  auVar35 = vsubps_avx(auVar76,auVar66);
  auVar67._0_4_ = auVar35._0_4_ + 1.0;
  auVar67._4_4_ = auVar35._4_4_ + 1.0;
  auVar67._8_4_ = auVar35._8_4_ + 1.0;
  auVar67._12_4_ = auVar35._12_4_ + 1.0;
  auVar54._0_4_ =
       fVar51 * (fVar51 * (fVar51 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar53 + fVar53;
  auVar54._4_4_ =
       fVar52 * (fVar52 * (fVar52 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar58 + fVar58;
  auVar54._8_4_ =
       fVar74 * (fVar74 * (fVar74 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar43 + fVar43;
  auVar54._12_4_ =
       fVar77 * (fVar77 * (fVar77 * -0.00019515296 + 0.008332161) + -0.16666655) * fVar50 + fVar50;
  auVar72 = vpslld_avx(auVar64,0x1f);
  auVar75 = vpslld_avx(auVar64,0x1e);
  auVar35 = vblendvps_avx(auVar54,auVar67,auVar72);
  auVar44 = vblendvps_avx(auVar67,auVar54,auVar72);
  auVar75 = vpand_avx(auVar80,auVar75);
  auVar60._0_4_ = auVar35._0_4_ ^ auVar71._0_4_ ^ auVar75._0_4_;
  auVar60._4_4_ = auVar35._4_4_ ^ auVar71._4_4_ ^ auVar75._4_4_;
  auVar60._8_4_ = auVar35._8_4_ ^ auVar71._8_4_ ^ auVar75._8_4_;
  auVar60._12_4_ = auVar35._12_4_ ^ auVar71._12_4_ ^ auVar75._12_4_;
  auVar55._0_4_ = auVar44._0_4_ ^ auVar72._0_4_ ^ auVar75._0_4_;
  auVar55._4_4_ = auVar44._4_4_ ^ auVar72._4_4_ ^ auVar75._4_4_;
  auVar55._8_4_ = auVar44._8_4_ ^ auVar72._8_4_ ^ auVar75._8_4_;
  auVar55._12_4_ = auVar44._12_4_ ^ auVar72._12_4_ ^ auVar75._12_4_;
  auVar71 = vshufps_avx(auVar55,auVar55,0);
  fVar51 = auVar30._0_4_;
  fVar52 = auVar30._4_4_;
  fVar74 = auVar30._8_4_;
  fVar77 = auVar30._12_4_;
  fVar78 = auVar31._0_4_ * 0.0;
  fVar79 = auVar31._4_4_ * 0.0;
  fVar68 = auVar31._8_4_ * 0.0;
  fVar69 = auVar31._12_4_ * 0.0;
  auVar56._0_4_ = fVar78 + fVar51 * auVar71._0_4_;
  auVar56._4_4_ = fVar79 + fVar52 * auVar71._4_4_;
  auVar56._8_4_ = fVar68 + fVar74 * auVar71._8_4_;
  auVar56._12_4_ = fVar69 + fVar77 * auVar71._12_4_;
  auVar30 = vshufps_avx(auVar60,auVar60,0);
  fVar53 = auVar28._0_4_;
  auVar73._0_4_ = fVar53 * auVar30._0_4_;
  fVar58 = auVar28._4_4_;
  auVar73._4_4_ = fVar58 * auVar30._4_4_;
  fVar43 = auVar28._8_4_;
  auVar73._8_4_ = fVar43 * auVar30._8_4_;
  fVar50 = auVar28._12_4_;
  auVar73._12_4_ = fVar50 * auVar30._12_4_;
  auVar28 = vsubps_avx(auVar56,auVar73);
  local_118 = auVar70._0_4_ * 0.0;
  fStack_114 = auVar70._4_4_ * 0.0;
  fStack_110 = auVar70._8_4_ * 0.0;
  fStack_10c = auVar70._12_4_ * 0.0;
  local_138 = local_118 + auVar28._0_4_;
  fStack_134 = fStack_114 + auVar28._4_4_;
  fStack_130 = fStack_110 + auVar28._8_4_;
  fStack_12c = fStack_10c + auVar28._12_4_;
  fStack_128 = local_118 + fVar53 * 0.0 + fVar51 * 0.0 + auVar31._0_4_;
  fStack_124 = fStack_114 + fVar58 * 0.0 + fVar52 * 0.0 + auVar31._4_4_;
  fStack_120 = fStack_110 + fVar43 * 0.0 + fVar74 * 0.0 + auVar31._8_4_;
  fStack_11c = fStack_10c + fVar50 * 0.0 + fVar77 * 0.0 + auVar31._12_4_;
  local_118 = local_118 + fVar53 * auVar71._0_4_ + fVar78 + fVar51 * auVar30._0_4_;
  fStack_114 = fStack_114 + fVar58 * auVar71._4_4_ + fVar79 + fVar52 * auVar30._4_4_;
  fStack_110 = fStack_110 + fVar43 * auVar71._8_4_ + fVar68 + fVar74 * auVar30._8_4_;
  fStack_10c = fStack_10c + fVar50 * auVar71._12_4_ + fVar69 + fVar77 * auVar30._12_4_;
  local_108 = auVar70._0_4_ + fVar53 * 0.0 + fVar51 * 0.0 + fVar78;
  fStack_104 = auVar70._4_4_ + fVar58 * 0.0 + fVar52 * 0.0 + fVar79;
  fStack_100 = auVar70._8_4_ + fVar43 * 0.0 + fVar74 * 0.0 + fVar68;
  fStack_fc = auVar70._12_4_ + fVar50 * 0.0 + fVar77 * 0.0 + fVar69;
  auVar41._0_4_ = local_118 * local_118;
  auVar41._4_4_ = fStack_114 * fStack_114;
  auVar41._8_4_ = fStack_110 * fStack_110;
  auVar41._12_4_ = fStack_10c * fStack_10c;
  auVar71 = vinsertps_avx(auVar41,auVar41,0x4c);
  auVar42._0_4_ = auVar41._0_4_ + auVar71._0_4_;
  auVar42._4_4_ = auVar41._4_4_ + auVar71._4_4_;
  auVar42._8_4_ = auVar41._8_4_ + auVar71._8_4_;
  auVar42._12_4_ = auVar41._12_4_ + auVar71._12_4_;
  auVar28 = vshufpd_avx(auVar42,auVar42,1);
  auVar46._0_4_ = fStack_128 * fStack_128;
  auVar46._4_4_ = fStack_124 * fStack_124;
  auVar46._8_4_ = fStack_120 * fStack_120;
  auVar46._12_4_ = fStack_11c * fStack_11c;
  auVar71 = vinsertps_avx(auVar46,auVar46,0x4c);
  auVar47._0_4_ = auVar46._0_4_ + auVar71._0_4_;
  auVar47._4_4_ = auVar46._4_4_ + auVar71._4_4_;
  auVar47._8_4_ = auVar46._8_4_ + auVar71._8_4_;
  auVar47._12_4_ = auVar46._12_4_ + auVar71._12_4_;
  auVar30 = vshufpd_avx(auVar47,auVar47,1);
  auVar61._0_4_ = local_138 * local_138;
  auVar61._4_4_ = fStack_134 * fStack_134;
  auVar61._8_4_ = fStack_130 * fStack_130;
  auVar61._12_4_ = fStack_12c * fStack_12c;
  auVar71 = vinsertps_avx(auVar61,auVar61,0x4c);
  auVar62._0_4_ = auVar61._0_4_ + auVar71._0_4_;
  auVar62._4_4_ = auVar61._4_4_ + auVar71._4_4_;
  auVar62._8_4_ = auVar61._8_4_ + auVar71._8_4_;
  auVar62._12_4_ = auVar61._12_4_ + auVar71._12_4_;
  auVar71 = vshufpd_avx(auVar62,auVar62,1);
  auVar71 = vmaxss_avx(ZEXT416((uint)(auVar47._0_4_ + auVar30._0_4_)),
                       ZEXT416((uint)(auVar62._0_4_ + auVar71._0_4_)));
  auVar31 = vmaxss_avx(ZEXT416((uint)(auVar42._0_4_ + auVar28._0_4_)),auVar71);
  lVar1 = *(longlong *)pfVar27;
  fVar53 = *(float *)(lVar1 + 0x20);
  auVar48._0_4_ = local_138 * fVar53;
  auVar48._4_4_ = fStack_134 * fVar53;
  auVar48._8_4_ = fStack_130 * fVar53;
  auVar48._12_4_ = fStack_12c * fVar53;
  fVar53 = *(float *)(lVar1 + 0x30);
  auVar57._0_4_ = local_138 * fVar53;
  auVar57._4_4_ = fStack_134 * fVar53;
  auVar57._8_4_ = fStack_130 * fVar53;
  auVar57._12_4_ = fStack_12c * fVar53;
  auVar30 = vminps_avx(auVar48,auVar57);
  auVar71 = vmaxps_avx(auVar48,auVar57);
  fVar53 = *(float *)(lVar1 + 0x24);
  auVar49._0_4_ = fStack_128 * fVar53;
  auVar49._4_4_ = fStack_124 * fVar53;
  auVar49._8_4_ = fStack_120 * fVar53;
  auVar49._12_4_ = fStack_11c * fVar53;
  fVar53 = *(float *)(lVar1 + 0x34);
  auVar38._0_4_ = fStack_128 * fVar53;
  auVar38._4_4_ = fStack_124 * fVar53;
  auVar38._8_4_ = fStack_120 * fVar53;
  auVar38._12_4_ = fStack_11c * fVar53;
  auVar35 = vminps_avx(auVar49,auVar38);
  auVar28 = vmaxps_avx(auVar49,auVar38);
  fVar53 = *(float *)(lVar1 + 0x28);
  auVar39._0_4_ = local_118 * fVar53;
  auVar39._4_4_ = fStack_114 * fVar53;
  auVar39._8_4_ = fStack_110 * fVar53;
  auVar39._12_4_ = fStack_10c * fVar53;
  fVar53 = *(float *)(lVar1 + 0x38);
  auVar34._0_4_ = local_118 * fVar53;
  auVar34._4_4_ = fStack_114 * fVar53;
  auVar34._8_4_ = fStack_110 * fVar53;
  auVar34._12_4_ = fStack_10c * fVar53;
  auVar44 = vminps_avx(auVar39,auVar34);
  local_158 = local_108 + auVar30._0_4_ + auVar35._0_4_ + auVar44._0_4_;
  fStack_154 = fStack_104 + auVar30._4_4_ + auVar35._4_4_ + auVar44._4_4_;
  fStack_150 = fStack_100 + auVar30._8_4_ + auVar35._8_4_ + auVar44._8_4_;
  fStack_14c = fStack_fc + auVar30._12_4_ + auVar35._12_4_ + auVar44._12_4_;
  auVar30 = vmaxps_avx(auVar39,auVar34);
  local_148._0_4_ = local_108 + auVar71._0_4_ + auVar28._0_4_ + auVar30._0_4_;
  local_148._4_4_ = fStack_104 + auVar71._4_4_ + auVar28._4_4_ + auVar30._4_4_;
  local_148._8_4_ = fStack_100 + auVar71._8_4_ + auVar28._8_4_ + auVar30._8_4_;
  local_148._12_4_ = fStack_fc + auVar71._12_4_ + auVar28._12_4_ + auVar30._12_4_;
  lVar1 = *param_1;
  *(undefined4 *)(puVar20 + -0x10) = param_10;
  *(undefined4 *)(puVar20 + -0x18) = param_9;
  *(float **)(puVar20 + -0x28) = pfVar27;
  *(undefined4 *)(puVar20 + -0x30) = param_8;
  *(undefined4 *)(puVar20 + -0x20) = 2;
  pcVar2 = *(code **)(lVar1 + 0x28);
  *(undefined8 *)(puVar20 + -0x58) = 0x1403801ba;
  (*pcVar2)(param_1,&local_138,&local_158,auVar31._0_8_);
  if (pauVar24 != (undefined1 (*) [16])0x0) {
    uVar13 = rdtsc();
    auVar28 = vpinsrq_avx(in_ZMM12._0_16_,
                          uVar13 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar13),1);
    auVar71 = vmovntdq_avx(SUB6416(ZEXT864(0x14139772c),0));
    *pauVar24 = auVar71;
    auVar71 = vmovntdq_avx(auVar28);
    pauVar24[1] = auVar71;
  }
LAB_1403801eb:
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)&fStack_128)) {
    uVar13 = local_f0 ^ (ulonglong)&fStack_128;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar20 + -0x28) = &UNK_140380266;
    FUN_140b65db0(uVar13);
  }
  return;
}

