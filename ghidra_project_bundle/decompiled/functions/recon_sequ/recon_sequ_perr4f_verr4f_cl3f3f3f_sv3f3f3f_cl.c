/**
 * Function: recon_sequ_perr4f_verr4f_cl3f3f3f_sv3f3f3f_cl
 * Address:  1402125a0
 * Signature: undefined recon_sequ_perr4f_verr4f_cl3f3f3f_sv3f3f3f_cl(void)
 * Body size: 2439 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
recon_sequ_perr4f_verr4f_cl3f3f3f_sv3f3f3f_cl
          (undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,longlong param_4,
          longlong param_5,int param_6,ushort param_7,short param_8,ushort *param_9,float *param_10,
          byte *param_11,int *param_12)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  float *pfVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  char *pcVar9;
  uint uVar10;
  ushort uVar11;
  short *psVar12;
  undefined1 uVar13;
  uint uVar14;
  longlong lVar15;
  ushort *puVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [64];
  double dVar32;
  undefined1 auVar33 [64];
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  double dVar37;
  double dVar38;
  undefined8 *puVar39;
  double dVar40;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  uint local_160;
  uint local_158;
  uint local_144;
  double local_140;
  double local_138;
  uint local_12c;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  float fStack_100;
  undefined4 uStack_fc;
  undefined3 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_1e8;
  auVar18._0_12_ = ZEXT812(0);
  auVar18._12_4_ = 0;
  *param_1 = auVar18;
  if (((param_4 != 0) && (cVar3 = FUN_1400b8670(param_2,param_4), cVar3 != '\0')) &&
     (cVar3 = FUN_1400b9b40(param_2,param_4,DAT_14151f628), cVar3 != '\0')) {
    lVar15 = ((longlong)(ulonglong)param_7 % (longlong)param_6 & 0xffffffffU) * 100;
    if ((*(char *)(param_5 + 0x60 + lVar15) == '\x01') &&
       (puVar16 = (ushort *)(lVar15 + param_5), *puVar16 == param_7)) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = *(ulonglong *)param_10;
      auVar18 = *(undefined1 (*) [16])(puVar16 + 6);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *(ulonglong *)(puVar16 + 0xe);
      auVar20 = *(undefined1 (*) [16])(param_10 + 2);
      uVar1 = *(undefined4 *)(puVar16 + 10);
      auVar25._4_4_ = uVar1;
      auVar25._0_4_ = uVar1;
      auVar25._8_4_ = uVar1;
      auVar25._12_4_ = uVar1;
      auVar25 = vinsertps_avx(auVar25,auVar24,0x50);
      auVar25 = vshufps_avx(auVar25,auVar25,0xe1);
      auVar21 = vshufps_avx(auVar20,auVar20,0xe3);
      auVar2 = vsubps_avx(auVar25,auVar21);
      auVar21 = vshufps_avx(auVar18,auVar18,0xe3);
      fVar28 = param_10[4];
      auVar27._4_4_ = fVar28;
      auVar27._0_4_ = fVar28;
      auVar27._8_4_ = fVar28;
      auVar27._12_4_ = fVar28;
      auVar25 = vmovsldup_avx(auVar19);
      auVar25 = vinsertps_avx(auVar25,auVar20,0x4c);
      auVar21 = vsubps_avx(auVar21,auVar25);
      auVar18 = vblendps_avx(auVar24,auVar18,2);
      auVar25 = vinsertps_avx(auVar27,auVar19,0x50);
      auVar25 = vsubps_avx(auVar18,auVar25);
      auVar34._0_4_ = auVar25._0_4_ * auVar25._0_4_;
      auVar34._4_4_ = auVar25._4_4_ * auVar25._4_4_;
      auVar34._8_4_ = auVar25._8_4_ * auVar25._8_4_;
      auVar34._12_4_ = auVar25._12_4_ * auVar25._12_4_;
      auVar18 = vfmadd231ps_fma(auVar34,auVar21,auVar21);
      auVar18 = vfmadd231ps_fma(auVar18,auVar2,auVar2);
      auVar35 = ZEXT1664(auVar18);
      *(ulonglong *)(param_12 + 0xd) = *(ulonglong *)param_10;
      param_12[0xf] = auVar20._0_4_;
      auVar18 = vcmpps_avx(auVar18,_DAT_140dc4310,1);
      *param_9 = param_7;
      auVar20 = vshufps_avx(auVar18,auVar18,0x50);
      auVar18 = vpcmpeqd_avx(auVar25,auVar25);
      if ((SUB161((auVar18 & ~auVar20) >> 0x3f,0) & 1) != 0 || SUB161(auVar18 & ~auVar20,0xf) < '\0'
         ) {
        (*param_1)[0] = 1;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x140) < DAT_1416b6c98) &&
           (FUN_140b6864c(&DAT_1416b6c98), DAT_1416b6c98 == -1)) {
          pcVar9 = getenv("LDV_RECON_LOG");
          DAT_1416b6c94 = pcVar9 != (char *)0x0;
          _Init_thread_footer(&DAT_1416b6c98);
        }
        auVar18 = vmovshdup_avx(auVar35._0_16_);
        auVar36 = ZEXT1664(auVar18);
        if (DAT_1416b6c94 == '\x01') {
          if (param_11 == (byte *)0x0) {
            local_144 = 0xffffffff;
          }
          else {
            local_144 = (uint)*param_11;
          }
          local_140 = (double)param_10[5];
          local_138 = (double)param_10[4];
          local_110 = (double)param_10[3];
          local_118 = (double)*(float *)(puVar16 + 0x10);
          local_120 = (double)*(float *)(puVar16 + 0xe);
          local_128 = (double)*(float *)(puVar16 + 0xc);
          dVar40 = (double)param_10[2];
          local_12c = (uint)(byte)puVar16[0x1a];
          dVar29 = (double)param_10[1];
          dVar30 = (double)*param_10;
          dVar32 = (double)*(float *)(puVar16 + 10);
          dVar37 = (double)*(float *)(puVar16 + 8);
          dVar38 = (double)*(float *)(puVar16 + 6);
          puVar39 = (undefined8 *)(double)auVar35._0_4_;
          dVar26 = (double)auVar18._0_4_;
          uVar4 = __acrt_iob_func(2);
          local_158 = local_144;
          local_160 = local_12c;
          local_168 = local_140;
          local_170 = local_138;
          local_178 = local_110;
          local_180 = local_118;
          local_188 = local_120;
          local_190 = local_128;
          local_1c8 = puVar39;
          local_1c0 = dVar38;
          local_1b8 = dVar37;
          local_1b0 = dVar32;
          local_1a8 = dVar30;
          local_1a0 = dVar29;
          local_198 = dVar40;
          FUN_14002b100(uVar4,
                        "RECON seq=%u perr=%.4f verr=%.4f cl=(%.3f,%.3f,%.3f) sv=(%.3f,%.3f,%.3f) clv=(%.2f,%.2f,%.2f) svv=(%.2f,%.2f,%.2f) clst=%d svst=%d\n"
                        ,param_7,dVar26);
        }
        pfVar5 = (float *)FUN_1400ba4f0(param_2,param_4,DAT_14151f5d8);
        if (pfVar5 == (float *)0x0) {
          pfVar5 = param_10;
        }
        auVar31 = ZEXT464((uint)*pfVar5);
        auVar33 = ZEXT464((uint)pfVar5[1]);
        fVar28 = pfVar5[2];
        *param_12 = *param_12 + 1;
        *(longlong *)(param_12 + 4) = *(longlong *)(param_12 + 4) + 1;
        if ((float)param_12[1] < auVar36._0_4_) {
          param_12[1] = (int)auVar36._0_4_;
        }
        if ((float)param_12[2] < auVar35._0_4_) {
          param_12[2] = (int)auVar35._0_4_;
        }
        local_108 = *(undefined8 *)param_10;
        fStack_100 = param_10[2];
        local_1c8 = &local_108;
        FUN_1400bb430(param_2,param_4,DAT_14151f5d8,0xc);
        local_108 = *(undefined8 *)(param_10 + 3);
        fStack_100 = param_10[5];
        local_1c8 = &local_108;
        FUN_1400bb430(param_2,param_4,DAT_14151f608,0xc);
        auVar18 = *(undefined1 (*) [16])(param_10 + 6);
        auVar20 = vcmpps_avx(auVar18,ZEXT816(0),4);
        if ((((SUB161(auVar20 >> 0x1f,0) & 1) != 0 || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || auVar20[0xf] < '\0') {
          local_108 = auVar18._0_8_;
          fStack_100 = auVar18._8_4_;
          uStack_fc = auVar18._12_4_;
          local_1c8 = &local_108;
          FUN_1400bb430(param_2,param_4,DAT_14151f5e0,0x10);
        }
        if ((param_11 != (byte *)0x0) &&
           (puVar39 = (undefined8 *)FUN_1400bb330(param_2,param_4,DAT_14151f6f8),
           puVar39 != (undefined8 *)0x0)) {
          puVar39[2] = *(undefined8 *)(param_11 + 0x10);
          uVar4 = *(undefined8 *)(param_11 + 8);
          *puVar39 = *(undefined8 *)param_11;
          puVar39[1] = uVar4;
          FUN_1400ba7b0(param_2,param_4,DAT_14151f6f8);
        }
        puVar39 = (undefined8 *)FUN_1400bb330(param_2,param_4,DAT_14151f638);
        if (puVar39 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar39 + 2) = *(undefined4 *)(puVar16 + 0x2e);
          uVar4 = *(undefined8 *)(puVar16 + 0x2a);
          *puVar39 = *(undefined8 *)(puVar16 + 0x26);
          puVar39[1] = uVar4;
          FUN_1400ba7b0(param_2,param_4,DAT_14151f638);
        }
        thunk_FUN_1400b7e20(param_2,param_4,DAT_14151f640);
        FUN_140045680(param_3,param_2,0x3c888889);
        FUN_140045190(param_3);
        uVar11 = param_8 - param_7;
        if (uVar11 < 0x3d && uVar11 != 0) {
          uVar13 = (undefined1)puVar16[3];
          uVar14 = (uint)uVar11;
          dVar26 = (double)(ulonglong)(ushort)(param_7 + 1);
          uVar17 = 0;
          auVar35 = ZEXT464(0x3c888889);
          local_140 = (double)CONCAT44(local_140._4_4_,(uint)uVar11);
          local_138 = dVar26;
          do {
            uVar10 = SUB84(dVar26,0) + uVar17;
            lVar15 = ((longlong)(ulonglong)(uVar10 & 0xffff) % (longlong)param_6 & 0xffffffffU) *
                     100;
            if ((*(char *)(param_5 + 0x60 + lVar15) == '\x01') &&
               (psVar12 = (short *)(lVar15 + param_5), (short)uVar10 == *psVar12)) {
              FUN_140067810(param_2,param_4,psVar12 + 2,uVar13);
              local_144 = CONCAT31(local_144._1_3_,(char)psVar12[3]);
              FUN_140046560(param_3,param_2,auVar35._0_8_,param_4);
              FUN_1400bf090(param_3,param_2,auVar35._0_8_);
              FUN_1400452f0(param_3,param_2);
              puVar39 = (undefined8 *)FUN_1400ba4f0(param_2,param_4,DAT_14151f5d8);
              puVar6 = (uint *)FUN_1400ba4f0(param_2,param_4,DAT_14151f608);
              puVar7 = (undefined8 *)FUN_1400ba4f0(param_2,param_4,DAT_14151f5e0);
              if (puVar7 != (undefined8 *)0x0 &&
                  (puVar6 != (uint *)0x0 && puVar39 != (undefined8 *)0x0)) {
                auVar20._4_4_ = 0;
                auVar20._0_4_ = *(uint *)(puVar39 + 1);
                auVar20._8_4_ = *(uint *)(puVar39 + 1);
                auVar20._12_4_ = 0;
                auVar18 = vinsertps_avx(auVar20,ZEXT416(*puVar6),0x30);
                auVar18 = vmovlps_avx(auVar18,*puVar39);
                auVar23._16_8_ = *(undefined8 *)(puVar6 + 1);
                auVar23._0_16_ = auVar18;
                auVar23._24_8_ = 0;
                auVar22._16_8_ = *puVar7;
                auVar22._0_16_ = auVar18;
                auVar22._24_8_ = 0;
                auVar22 = vshufpd_avx(auVar23,auVar22,2);
                uVar4 = puVar7[1];
                *(undefined1 (*) [32])(psVar12 + 6) = auVar22;
                *(undefined8 *)(psVar12 + 0x16) = uVar4;
              }
              auVar35 = ZEXT1664(auVar35._0_16_);
              auVar31 = ZEXT1664(auVar31._0_16_);
              auVar33 = ZEXT1664(auVar33._0_16_);
              puVar39 = (undefined8 *)FUN_1400ba4f0(param_2,param_4,DAT_14151f6f8);
              if (puVar39 != (undefined8 *)0x0) {
                *(undefined8 *)(psVar12 + 0x22) = puVar39[2];
                uVar4 = puVar39[1];
                *(undefined8 *)(psVar12 + 0x1a) = *puVar39;
                *(undefined8 *)(psVar12 + 0x1e) = uVar4;
              }
              puVar39 = (undefined8 *)FUN_1400ba4f0(param_2,param_4,DAT_14151f638);
              if (puVar39 != (undefined8 *)0x0) {
                *(undefined4 *)(psVar12 + 0x2e) = *(undefined4 *)(puVar39 + 2);
                uVar4 = puVar39[1];
                *(undefined8 *)(psVar12 + 0x26) = *puVar39;
                *(undefined8 *)(psVar12 + 0x2a) = uVar4;
              }
              dVar26 = local_138;
              uVar14 = local_140._0_4_;
              uVar13 = (undefined1)local_144;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar14);
        }
        puVar8 = (ulonglong *)FUN_1400ba4f0(param_2,param_4,DAT_14151f5d8);
        if (puVar8 != (ulonglong *)0x0) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *puVar8;
          auVar18 = vinsertps_avx(auVar31._0_16_,auVar33._0_16_,0x10);
          auVar18 = vsubps_avx(auVar18,auVar21);
          uVar4 = vmovlps_avx(auVar18);
          *(undefined8 *)(*param_1 + 4) = uVar4;
          *(float *)(*param_1 + 0xc) = fVar28 - *(float *)(puVar8 + 1);
        }
      }
    }
    else {
      local_108 = *(undefined8 *)param_10;
      fStack_100 = param_10[2];
      local_1c8 = &local_108;
      FUN_1400bb430(param_2,param_4,DAT_14151f5d8,0xc);
      local_108 = *(undefined8 *)(param_10 + 3);
      fStack_100 = param_10[5];
      local_1c8 = &local_108;
      FUN_1400bb430(param_2,param_4,DAT_14151f608,0xc);
      if ((param_11 != (byte *)0x0) &&
         (puVar39 = (undefined8 *)FUN_1400bb330(param_2,param_4,DAT_14151f6f8),
         puVar39 != (undefined8 *)0x0)) {
        puVar39[2] = *(undefined8 *)(param_11 + 0x10);
        uVar4 = *(undefined8 *)(param_11 + 8);
        *puVar39 = *(undefined8 *)param_11;
        puVar39[1] = uVar4;
        FUN_1400ba7b0(param_2,param_4,DAT_14151f6f8);
      }
      local_108 = 0;
      fStack_100 = 0.0;
      uStack_fc = 0;
      uStack_f8 = 0;
      local_1c8 = &local_108;
      FUN_1400bb430(param_2,param_4,DAT_14151f638,0x14);
      thunk_FUN_1400b7e20(param_2,param_4,DAT_14151f640);
      *param_9 = param_7;
      (*param_1)[0] = 1;
    }
  }
  if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_1e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_f0 ^ (ulonglong)auStack_1e8);
  }
  return param_1;
}

