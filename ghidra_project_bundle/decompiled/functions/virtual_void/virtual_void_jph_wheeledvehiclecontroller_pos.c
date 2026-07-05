/**
 * Function: virtual_void_jph_wheeledvehiclecontroller_pos
 * Address:  14035e060
 * Signature: undefined virtual_void_jph_wheeledvehiclecontroller_pos(void)
 * Body size: 4523 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void virtual_void_jph_wheeledvehiclecontroller_pos(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  char cVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int *piVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 auVar27 [64];
  undefined1 extraout_var_03 [56];
  undefined1 auVar28 [16];
  undefined1 in_ZMM1 [64];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar46 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auStack_1e8 [32];
  float *local_1c8;
  float local_1b4;
  longlong local_1b0;
  longlong local_1a8;
  undefined1 (*local_1a0) [16];
  longlong local_198;
  longlong local_190;
  float local_184;
  uint local_180;
  float local_17c;
  undefined1 local_178 [16];
  longlong local_160;
  undefined1 local_158 [16];
  ulonglong local_148;
  undefined8 uStack_140;
  float local_138;
  int local_134;
  ulonglong local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  ulonglong uStack_110;
  undefined1 local_108 [16];
  float local_f4;
  ulonglong local_f0;
  undefined1 local_78 [16];
  
  local_78 = in_ZMM13._0_16_;
  auVar35 = ZEXT1664(in_ZMM1._0_16_);
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_1e8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar13 == 0) {
LAB_14035e184:
    local_1a0 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar9 = *(uint *)(lVar13 + 0x200020);
    if (0xffff < (ulonglong)uVar9) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_14035e184;
    }
    *(uint *)(lVar13 + 0x200020) = uVar9 + 1;
    local_1a0 = (undefined1 (*) [16])(lVar13 + (ulonglong)uVar9 * 0x20 + 0x20);
    uVar16 = rdtsc();
    local_148 = uVar16 & 0xffffffff00000000 |
                CONCAT44((int)((ulonglong)local_1a0 >> 0x20),(int)uVar16);
    uStack_140 = 0;
  }
  fVar44 = *(float *)(param_1 + 0x50);
  lVar13 = *(longlong *)(param_1 + 8);
  uVar9 = *(uint *)(lVar13 + 0x90);
  if ((ulonglong)uVar9 != 0) {
    uVar16 = 0;
    do {
      FUN_14035d300(*(undefined8 *)(*(longlong *)(lVar13 + 0xa0) + uVar16 * 8),uVar16 & 0xffffffff,
                    auVar35._0_8_,*(undefined8 *)(param_1 + 8));
      uVar16 = uVar16 + 1;
    } while (uVar9 != uVar16);
  }
  local_160 = param_1 + 0x20;
  auVar25 = vandps_avx(ZEXT416(*(uint *)(param_1 + 0x10)),_DAT_140de34a0);
  auVar38 = ZEXT1664(auVar25);
  if (*(char *)(param_1 + 0x58) == '\0') {
    auVar38 = ZEXT464((uint)(auVar25._0_4_ * *(float *)(param_1 + 0xac)));
  }
  FUN_1405ca1b0(local_160,auVar35._0_8_);
  auVar39 = ZEXT464((uint)(auVar38._0_4_ * *(float *)(param_1 + 0x20)));
  auVar38._0_8_ =
       FUN_1405c9590(param_1 + 0x30,*(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x28));
  auVar38._8_56_ = extraout_var_01;
  auVar38 = ZEXT1664(auVar38._0_16_);
  uVar16 = *(ulonglong *)(param_1 + 0xc0);
  local_1a8 = param_1;
  if (uVar16 == 0) {
    uVar14 = 0;
    lVar7 = 0;
  }
  else {
    uVar14 = 0;
    lVar7 = (*DAT_14151f530)(0);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      local_1b0 = CONCAT44(local_1b0._4_4_,auVar38._0_4_);
      local_178._0_4_ = auVar39._0_4_;
      piVar23 = *(int **)(param_1 + 0xd0);
      lVar20 = *(longlong *)(param_1 + 0xc0) * 0x18;
      auVar43 = ZEXT464(0x7f7fffff);
      uVar14 = 0;
      fVar15 = 1.0;
      auVar38 = ZEXT1664(CONCAT412(0x7fffffff,CONCAT48(0x7fffffff,0x7fffffff7fffffff)));
      auVar39 = ZEXT1264(ZEXT812(0));
      fVar33 = 2.0;
      auVar46 = ZEXT1264(ZEXT812(0));
      local_1b4 = fVar44;
      do {
        auVar28 = auVar46._0_16_;
        auVar25 = auVar43._0_16_;
        iVar22 = *piVar23;
        fVar44 = 0.0;
        fVar32 = fVar15;
        if ((longlong)iVar22 != -1) {
          fVar44 = *(float *)(*(longlong *)(*(longlong *)(lVar13 + 0xa0) + (longlong)iVar22 * 8) +
                             0x8c) + 0.0;
          fVar32 = fVar33;
        }
        if (piVar23[1] == -1) {
          fVar32 = fVar15;
          if (iVar22 != -1) goto LAB_14035e35a;
        }
        else {
          fVar44 = fVar44 + *(float *)(*(longlong *)
                                        (*(longlong *)(lVar13 + 0xa0) + (longlong)piVar23[1] * 8) +
                                      0x8c);
LAB_14035e35a:
          auVar41 = ZEXT464((uint)(fVar44 * (float)piVar23[2]));
          auVar26 = ZEXT416((uint)(fVar44 * (float)piVar23[2]));
          auVar40 = ZEXT464((uint)piVar23[5]);
          auVar34 = ZEXT416((uint)piVar23[5]);
          uVar10 = uVar14 + 1;
          if (uVar16 < uVar10) {
            uVar16 = uVar16 * 2;
            if (uVar16 < uVar10) {
              uVar16 = uVar10;
            }
            lVar7 = (*DAT_14151f530)(lVar7);
            auVar28 = auVar46._0_16_;
            auVar25 = auVar43._0_16_;
            auVar34 = auVar40._0_16_;
            auVar26 = auVar41._0_16_;
          }
          auVar24._0_4_ = auVar26._0_4_ / fVar32;
          auVar24._4_12_ = auVar26._4_12_;
          auVar26 = vandps_avx(auVar38._0_16_,auVar24);
          *(int **)(lVar7 + uVar14 * 0x18) = piVar23;
          *(int *)(lVar7 + 8 + uVar14 * 0x18) = auVar26._0_4_;
          auVar34 = vblendps_avx(auVar39._0_16_,auVar34,1);
          uVar45 = vmovlps_avx(auVar34);
          *(undefined8 *)(lVar7 + 0xc + uVar14 * 0x18) = uVar45;
          auVar25 = vminss_avx(auVar26,auVar25);
          auVar43 = ZEXT1664(auVar25);
          auVar25 = vmaxss_avx(auVar26,auVar28);
          auVar46 = ZEXT1664(auVar25);
          uVar14 = uVar10;
        }
        piVar23 = piVar23 + 6;
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != 0);
      param_1 = local_1a8;
      fVar44 = local_1b4;
      if (3.4028235e+38 <= *(float *)(local_1a8 + 0xd8)) {
        auVar39 = ZEXT464((uint)local_178._0_4_);
        auVar38 = ZEXT464((uint)local_1b0);
      }
      else {
        fVar15 = auVar46._0_4_;
        auVar39 = ZEXT464((uint)local_178._0_4_);
        auVar38 = ZEXT464((uint)local_1b0);
        if (auVar43._0_4_ < fVar15) {
          lVar21 = uVar14 * 0x18;
          lVar20 = lVar7 + lVar21;
          if (uVar14 != 0) {
            fVar33 = fVar15 - auVar43._0_4_;
            uVar16 = lVar21 - 0x18;
            uVar9 = (uint)(uVar16 / 0x18);
            lVar8 = lVar7;
            if ((~uVar9 & 3) == 0) {
              auVar40 = ZEXT864(0);
            }
            else {
              lVar11 = -(ulonglong)(uVar9 + 1 & 3);
              auVar40 = ZEXT864(SUB648(ZEXT464(0x7f7fffff),0) ^ 0x7f7fffff);
              do {
                fVar32 = (fVar15 - *(float *)(lVar8 + 8)) / fVar33;
                *(float *)(lVar8 + 0x10) = fVar32;
                auVar40 = ZEXT464((uint)(auVar40._0_4_ + fVar32));
                lVar8 = lVar8 + 0x18;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
            }
            auVar25 = auVar40._0_16_;
            if (0x47 < uVar16) {
              do {
                fVar29 = (fVar15 - *(float *)(lVar8 + 8)) / fVar33;
                *(float *)(lVar8 + 0x10) = fVar29;
                fVar30 = (fVar15 - *(float *)(lVar8 + 0x20)) / fVar33;
                *(float *)(lVar8 + 0x28) = fVar30;
                fVar31 = (fVar15 - *(float *)(lVar8 + 0x38)) / fVar33;
                *(float *)(lVar8 + 0x40) = fVar31;
                fVar32 = (fVar15 - *(float *)(lVar8 + 0x50)) / fVar33;
                *(float *)(lVar8 + 0x58) = fVar32;
                fVar32 = auVar40._0_4_ + fVar29 + fVar30 + fVar31 + fVar32;
                auVar40 = ZEXT464((uint)fVar32);
                auVar25 = ZEXT416((uint)fVar32);
                lVar8 = lVar8 + 0x60;
              } while (lVar8 != lVar20);
            }
            lVar8 = lVar7;
            if (0x5f < uVar16) {
              uVar10 = uVar16 / 0x18 + 1;
              uVar16 = 4;
              if ((uVar10 & 3) != 0) {
                uVar16 = (ulonglong)((uint)uVar10 & 3);
              }
              lVar11 = uVar10 - uVar16;
              lVar8 = lVar7 + lVar11 * 0x18;
              auVar28 = vshufps_avx(auVar25,auVar25,0);
              puVar19 = (uint *)(lVar7 + 0x58);
              do {
                auVar34 = vinsertps_avx(ZEXT416(puVar19[-0x12]),ZEXT416(puVar19[-0xc]),0x10);
                auVar34 = vinsertps_avx(auVar34,ZEXT416(puVar19[-6]),0x20);
                auVar34 = vinsertps_avx(auVar34,ZEXT416(*puVar19),0x30);
                auVar34 = vdivps_avx(auVar34,auVar28);
                puVar19[-0x12] = auVar34._0_4_;
                uVar9 = vextractps_avx(auVar34,1);
                puVar19[-0xc] = uVar9;
                uVar9 = vextractps_avx(auVar34,2);
                puVar19[-6] = uVar9;
                uVar9 = vextractps_avx(auVar34,3);
                *puVar19 = uVar9;
                puVar19 = puVar19 + 0x18;
                lVar11 = lVar11 + -4;
              } while (lVar11 != 0);
            }
            do {
              *(float *)(lVar8 + 0x10) = *(float *)(lVar8 + 0x10) / auVar25._0_4_;
              lVar8 = lVar8 + 0x18;
            } while (lVar8 != lVar20);
          }
          if (uVar14 == 0) {
            uVar14 = 0;
          }
          else {
            auVar25 = vmaxss_avx(auVar43._0_16_,SUB6416(ZEXT464(0x3a83126f),0));
            auVar28 = vmaxss_avx(auVar46._0_16_,SUB6416(ZEXT464(0x3a83126f),0));
            auVar25._0_4_ =
                 (auVar28._0_4_ / auVar25._0_4_ + -1.0) / (*(float *)(local_1a8 + 0xd8) + -1.0);
            auVar25._4_12_ = SUB6012((undefined1  [60])0x0,0);
            auVar25 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar25);
            fVar33 = auVar25._0_4_;
            fVar15 = 1.0 - fVar33;
            uVar9 = (uint)((lVar21 - 0x18U) / 0x18);
            lVar8 = lVar7;
            if ((~uVar9 & 3) != 0) {
              lVar11 = -(ulonglong)(uVar9 + 1 & 3);
              do {
                auVar25 = vfmadd231ss_fma(ZEXT416((uint)(fVar33 * *(float *)(lVar8 + 0x10))),
                                          ZEXT416((uint)fVar15),ZEXT416(*(uint *)(lVar8 + 0xc)));
                *(int *)(lVar8 + 0xc) = auVar25._0_4_;
                lVar8 = lVar8 + 0x18;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
            }
            if (0x47 < lVar21 - 0x18U) {
              do {
                auVar25 = vfmadd231ss_fma(ZEXT416((uint)(fVar33 * *(float *)(lVar8 + 0x10))),
                                          ZEXT416((uint)fVar15),ZEXT416(*(uint *)(lVar8 + 0xc)));
                *(int *)(lVar8 + 0xc) = auVar25._0_4_;
                auVar28 = ZEXT416((uint)fVar15);
                auVar25 = vfmadd231ss_fma(ZEXT416((uint)(fVar33 * *(float *)(lVar8 + 0x28))),auVar28
                                          ,ZEXT416(*(uint *)(lVar8 + 0x24)));
                *(int *)(lVar8 + 0x24) = auVar25._0_4_;
                auVar25 = vfmadd231ss_fma(ZEXT416((uint)(fVar33 * *(float *)(lVar8 + 0x40))),auVar28
                                          ,ZEXT416(*(uint *)(lVar8 + 0x3c)));
                *(int *)(lVar8 + 0x3c) = auVar25._0_4_;
                auVar25 = vfmadd231ss_fma(ZEXT416((uint)(fVar33 * *(float *)(lVar8 + 0x58))),auVar28
                                          ,ZEXT416(*(uint *)(lVar8 + 0x54)));
                *(int *)(lVar8 + 0x54) = auVar25._0_4_;
                lVar8 = lVar8 + 0x60;
              } while (lVar8 != lVar20);
            }
          }
        }
      }
    }
  }
  fVar33 = auVar38._0_4_;
  fVar15 = auVar39._0_4_;
  local_190 = param_1 + 0x58;
  uVar16 = *(ulonglong *)(lVar13 + 0x90);
  local_1b0 = lVar7;
  if (uVar16 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (*DAT_14151f530)(0);
    fVar33 = auVar38._0_4_;
    fVar15 = auVar39._0_4_;
  }
  auVar38 = ZEXT464((uint)(fVar33 * fVar15));
  auVar39._0_8_ = FUN_1405cb140(local_190);
  uVar45 = auVar38._0_8_;
  auVar39._8_56_ = extraout_var_02;
  if (uVar14 != 0) {
    auVar39 = ZEXT1664(auVar39._0_16_);
    local_178._0_8_ = uVar14 * 0x18;
    lVar21 = 0;
    auVar43 = ZEXT1264(ZEXT812(0));
    uVar14 = 0;
    lVar20 = local_1b0;
    local_198 = lVar13;
    do {
      puVar2 = *(undefined8 **)(lVar20 + lVar21);
      uVar45 = *puVar2;
      uStack_110 = puVar2[1];
      local_108._0_8_ = puVar2[2];
      local_118._0_4_ = (int)uVar45;
      local_118._4_4_ = (int)((ulonglong)uVar45 >> 0x20);
      local_118 = uVar45;
      if ((longlong)(int)local_118 == -1) {
        if (local_118._4_4_ != -1) {
          lVar8 = *(longlong *)(lVar13 + 0xa0);
          lVar11 = 0;
          goto LAB_14035e795;
        }
      }
      else {
        lVar8 = *(longlong *)(lVar13 + 0xa0);
        lVar11 = *(longlong *)(lVar8 + (longlong)(int)local_118 * 8);
        if (local_118._4_4_ == -1) {
          if (lVar11 == 0) goto LAB_14035e70f;
          auVar46 = ZEXT464((uint)(auVar39._0_4_ * (float)uStack_110));
LAB_14035e8d5:
          uVar36 = auVar46._0_4_;
          uVar9 = *(uint *)(lVar20 + 0xc + lVar21);
          auVar40 = ZEXT464(uVar9);
          auVar25 = ZEXT416(uVar9);
          uVar10 = uVar14 + 1;
          uVar17 = uVar16;
          if (uVar16 < uVar10) {
            uVar17 = uVar16 * 2;
            if (uVar16 * 2 < uVar10) {
              uVar17 = uVar10;
            }
            lVar7 = (*DAT_14151f530)(lVar7,uVar16 * 0x18);
            uVar36 = auVar46._0_4_;
            auVar25 = auVar40._0_16_;
            lVar20 = local_1b0;
            lVar13 = local_198;
          }
          *(longlong *)(lVar7 + uVar14 * 0x18) = lVar11;
          *(undefined4 *)(lVar7 + 8 + uVar14 * 0x18) = uVar36;
          auVar25 = vblendps_avx(auVar43._0_16_,auVar25,1);
          uVar45 = vmovlps_avx(auVar25);
          *(undefined8 *)(lVar7 + 0xc + uVar14 * 0x18) = uVar45;
          uVar14 = uVar10;
          uVar16 = uVar17;
          uVar45 = local_118;
        }
        else {
LAB_14035e795:
          lVar8 = *(longlong *)(lVar8 + (longlong)local_118._4_4_ * 8);
          fVar15 = auVar39._0_4_ * (float)uStack_110;
          auVar46 = ZEXT464((uint)fVar15);
          if ((lVar11 == 0) || (lVar8 == 0)) {
            if (lVar11 != 0) goto LAB_14035e8d5;
            if (lVar8 != 0) {
              uVar9 = *(uint *)(lVar20 + 0xc + lVar21);
              auVar40 = ZEXT464(uVar9);
              auVar25 = ZEXT416(uVar9);
              uVar10 = uVar14 + 1;
              uVar17 = uVar16;
              if (uVar16 < uVar10) {
                uVar17 = uVar16 * 2;
                if (uVar16 * 2 < uVar10) {
                  uVar17 = uVar10;
                }
                lVar7 = (*DAT_14151f530)(lVar7,uVar16 * 0x18);
                fVar15 = auVar46._0_4_;
                auVar25 = auVar40._0_16_;
                lVar20 = local_1b0;
              }
              *(longlong *)(lVar7 + uVar14 * 0x18) = lVar8;
              *(float *)(lVar7 + 8 + uVar14 * 0x18) = fVar15;
              auVar25 = vblendps_avx(auVar43._0_16_,auVar25,1);
              uVar45 = vmovlps_avx(auVar25);
              *(undefined8 *)(lVar7 + 0xc + uVar14 * 0x18) = uVar45;
              uVar14 = uVar10;
              uVar16 = uVar17;
              uVar45 = local_118;
            }
          }
          else {
            local_1c8 = &local_f4;
            FUN_1405cb870(&local_118,*(undefined4 *)(lVar11 + 0x8c),*(undefined4 *)(lVar8 + 0x8c),
                          &local_138);
            fVar15 = *(float *)(local_1b0 + 0xc + lVar21) * local_138;
            uVar10 = uVar14 + 1;
            uVar17 = uVar16;
            if (uVar16 < uVar10) {
              uVar17 = uVar16 * 2;
              if (uVar16 * 2 < uVar10) {
                uVar17 = uVar10;
              }
              lVar7 = (*DAT_14151f530)(lVar7,uVar16 * 0x18);
              lVar13 = local_198;
            }
            *(longlong *)(lVar7 + uVar14 * 0x18) = lVar11;
            uVar36 = auVar46._0_4_;
            *(undefined4 *)(lVar7 + 8 + uVar14 * 0x18) = uVar36;
            *(float *)(lVar7 + 0xc + uVar14 * 0x18) = fVar15;
            *(undefined4 *)(lVar7 + 0x10 + uVar14 * 0x18) = 0;
            fVar15 = *(float *)(local_1b0 + 0xc + lVar21) * local_f4;
            uVar14 = uVar14 + 2;
            uVar16 = uVar17;
            if (uVar17 < uVar14) {
              uVar16 = uVar17 * 2;
              if (uVar17 * 2 < uVar14) {
                uVar16 = uVar14;
              }
              lVar7 = (*DAT_14151f530)(lVar7,uVar17 * 0x18);
              uVar36 = auVar46._0_4_;
            }
            *(longlong *)(lVar7 + uVar10 * 0x18) = lVar8;
            *(undefined4 *)(lVar7 + 8 + uVar10 * 0x18) = uVar36;
            *(float *)(lVar7 + 0xc + uVar10 * 0x18) = fVar15;
            *(undefined4 *)(lVar7 + 0x10 + uVar10 * 0x18) = 0;
            lVar20 = local_1b0;
            uVar45 = local_118;
          }
        }
      }
LAB_14035e70f:
      local_118 = uVar45;
      lVar8 = local_1a8;
      uVar45 = auVar38._0_8_;
      lVar21 = lVar21 + 0x18;
    } while (local_178._0_8_ != lVar21);
    param_1 = local_1a8;
    if (uVar14 != 0) {
      uVar9 = (uint)uVar14;
      fVar15 = (float)(uVar9 + 1);
      local_118 = CONCAT44(fVar15,fVar15);
      local_128._0_12_ = ZEXT812(0);
      local_128._12_4_ = 0;
      auVar43 = ZEXT1664(local_128);
      uVar16 = CONCAT44(0,(int)fVar15 * (int)fVar15);
      local_108 = local_128;
      if ((int)fVar15 * (int)fVar15 != 0) {
        local_108._8_8_ = (*DAT_14151f530)(0,0);
        local_128 = auVar43._0_16_;
        local_108._0_8_ = uVar16;
      }
      local_180 = auVar38._0_4_;
      auVar25 = auVar39._0_16_;
      local_134 = 1;
      uVar10 = CONCAT44(0,fVar15);
      local_138 = fVar15;
      uStack_110 = uVar16;
      if (fVar15 != 0.0) {
        local_128._8_8_ = (*DAT_14151f530)(0,0);
        local_180 = auVar38._0_4_;
        auVar25 = auVar39._0_16_;
        local_128._0_8_ = uVar10;
      }
      fVar33 = (float)uVar14;
      auVar28._0_12_ = ZEXT812(0);
      auVar28._12_4_ = 0;
      auVar25 = vcmpss_avx(auVar25,auVar28,4);
      auVar25 = vandps_avx(auVar25,ZEXT416((uint)(*(float *)(lVar8 + 0xac) *
                                                 *(float *)(lVar8 + 0xa4))));
      auVar38 = ZEXT1664(auVar25);
      fVar15 = auVar35._0_4_;
      if (0.0 < *(float *)(lVar8 + 0xdc)) {
        auVar28._0_4_ = fVar15 / *(float *)(lVar8 + 0xdc);
        auVar28._4_12_ = auVar35._4_12_;
      }
      auVar39 = ZEXT1664(auVar28);
      local_184 = *(float *)(lVar8 + 0x50) / 9.549296;
      local_158._0_4_ = fVar15 / *(float *)(lVar8 + 0x48);
      local_158._4_12_ = auVar35._4_12_;
      local_1b4 = fVar44;
      local_130 = uVar10;
      if (0 < (int)uVar9) {
        fVar44 = -local_158._0_4_;
        uVar16 = 0;
        auVar43 = ZEXT464(0x3f800000);
        auVar46 = ZEXT1664(CONCAT412(0x80000000,CONCAT48(0x80000000,0x8000000080000000)));
        auVar40 = ZEXT1264(ZEXT812(0));
        auVar41 = ZEXT1664(CONCAT412(0x3f800000,CONCAT48(0x3f800000,0x3f8000003f800000)));
        auVar48 = ZEXT1664(CONCAT412(0xbf800000,CONCAT48(0xbf800000,0xbf800000bf800000)));
        local_17c = fVar15;
        local_178 = auVar25;
        do {
          lVar13 = *(longlong *)(*(longlong *)(lVar7 + uVar16 * 0x18) + 0x10);
          fVar15 = *(float *)(lVar13 + 0xa0);
          fVar32 = auVar38._0_4_ * *(float *)(lVar7 + 8 + uVar16 * 0x18);
          fVar29 = (fVar32 * auVar35._0_4_ * *(float *)(lVar7 + 0xc + uVar16 * 0x18)) / fVar15;
          iVar22 = (int)uVar16;
          if ((uVar9 & 0x7fffffff) == 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            pfVar12 = (float *)(lVar7 + 0x20);
            do {
              *(float *)(local_108._8_8_ +
                        (ulonglong)(uint)(local_118._4_4_ * iVar22 + (int)uVar10) * 4) =
                   (fVar29 * pfVar12[-6]) / fVar33;
              *(float *)(local_108._8_8_ +
                        (ulonglong)(local_118._4_4_ * iVar22 + (int)uVar10 + 1) * 4) =
                   (fVar29 * *pfVar12) / fVar33;
              uVar10 = uVar10 + 2;
              pfVar12 = pfVar12 + 0xc;
            } while ((uVar9 & 0x7ffffffe) != uVar10);
          }
          if ((uVar14 & 1) != 0) {
            *(float *)(local_108._8_8_ +
                      (ulonglong)(uint)((int)uVar10 + local_118._4_4_ * iVar22) * 4) =
                 (fVar29 * *(float *)(lVar7 + 8 + uVar10 * 0x18)) / fVar33;
          }
          plVar1 = (longlong *)(lVar7 + uVar16 * 0x18);
          uVar10 = (ulonglong)(uint)((local_118._4_4_ + 1) * iVar22);
          *(float *)(local_108._8_8_ + uVar10 * 4) =
               auVar43._0_4_ + *(float *)(local_108._8_8_ + uVar10 * 4);
          *(uint *)(local_108._8_8_ + (ulonglong)(local_118._4_4_ * iVar22 + uVar9) * 4) =
               (uint)fVar29 ^ auVar46._0_4_;
          auVar25 = vfmadd231ss_fma(ZEXT416((uint)(*(float *)(local_1a8 + 0x1c) *
                                                  *(float *)(lVar13 + 0xe4))),
                                    ZEXT416(*(uint *)(local_1a8 + 0x18)),
                                    ZEXT416(*(uint *)(lVar13 + 0xe0)));
          auVar42 = ZEXT1664(auVar25);
          fVar29 = auVar25._0_4_;
          auVar27 = ZEXT864(0);
          lVar20 = *plVar1;
          if (0.0 < fVar29) {
            fVar30 = *(float *)(lVar20 + 0x8c);
            if ((fVar30 != 0.0) || (NAN(fVar30))) {
              auVar25 = vcmpss_avx(ZEXT416((uint)fVar30),auVar40._0_16_,1);
              auVar25 = vblendvps_avx(auVar41._0_16_,auVar48._0_16_,auVar25);
              fVar30 = auVar25._0_4_;
            }
            else {
              auVar38 = ZEXT1664(auVar43._0_16_);
              auVar39 = ZEXT1664(auVar39._0_16_);
              auVar35 = ZEXT1664(auVar46._0_16_);
              auVar47 = ZEXT1664(auVar41._0_16_);
              auVar27._0_8_ = FUN_1405cb140(local_190);
              fVar29 = auVar42._0_4_;
              auVar27._8_56_ = extraout_var_03;
              auVar41 = ZEXT1664(auVar47._0_16_);
              auVar34._0_12_ = ZEXT812(0);
              auVar34._12_4_ = 0;
              auVar40 = ZEXT1664(auVar34);
              auVar46 = ZEXT1664(auVar35._0_16_);
              auVar39 = ZEXT1664(auVar39._0_16_);
              auVar35 = ZEXT464((uint)local_17c);
              auVar43 = ZEXT1664(auVar38._0_16_);
              auVar38 = ZEXT1664(local_178);
              auVar25 = vcmpss_avx(auVar27._0_16_,auVar34,1);
              auVar25 = vblendvps_avx(auVar47._0_16_,auVar48._0_16_,auVar25);
              fVar30 = auVar25._0_4_;
              lVar20 = *plVar1;
            }
            auVar27 = ZEXT464((uint)(fVar29 * auVar35._0_4_ * fVar30));
          }
          auVar25 = auVar38._0_16_;
          if (*(int *)(lVar20 + 0x18) != -1) {
            auVar28 = vfmadd231ss_fma(auVar27._0_16_,
                                      ZEXT416((uint)(auVar39._0_4_ * *(float *)(lVar20 + 0x150))),
                                      ZEXT416(*(uint *)(lVar13 + 0x88)));
            auVar27 = ZEXT1664(auVar28);
          }
          *(float *)(plVar1 + 2) = auVar27._0_4_;
          *(float *)(local_128._8_8_ + (ulonglong)(uint)(local_134 * iVar22) * 4) =
               *(float *)(lVar20 + 0x8c) - auVar27._0_4_ / fVar15;
          *(float *)(local_108._8_8_ + (ulonglong)(local_118._4_4_ * uVar9 + iVar22) * 4) =
               (fVar32 * fVar44) / fVar33;
          uVar16 = uVar16 + 1;
        } while (uVar16 != (uVar9 & 0x7fffffff));
      }
      auVar25 = vfmadd231ss_fma(SUB6416(ZEXT464(0x3f800000),0),local_158,auVar25);
      *(int *)(local_108._8_8_ + (ulonglong)((local_118._4_4_ + 1) * uVar9) * 4) = auVar25._0_4_;
      auVar38 = ZEXT464(local_180);
      auVar25 = vfmadd231ss_fma(ZEXT416((uint)local_184),ZEXT416(local_180),local_158);
      *(int *)(local_128._8_8_ + (ulonglong)(local_134 * uVar9) * 4) = auVar25._0_4_;
      cVar5 = FUN_14035f250(&local_118,&local_138,0x24e69595);
      lVar13 = local_198;
      param_1 = local_1a8;
      fVar44 = local_1b4;
      if (cVar5 == '\0') {
        if (local_128._8_8_ != 0) {
          local_130 = 0;
          (*DAT_14151f538)();
        }
        uVar45 = auVar38._0_8_;
        if (local_108._8_8_ != 0) {
          uStack_110 = 0;
          (*DAT_14151f538)();
          uVar45 = auVar38._0_8_;
        }
        FUN_1405ca180(local_160,uVar45,auVar35._0_8_);
        param_1 = local_1a8;
      }
      else {
        if (0 < (int)uVar9) {
          uVar18 = 0;
          if ((uVar9 & 0x7fffffff) == 1) {
            uVar16 = 0;
          }
          else {
            pfVar12 = (float *)(lVar7 + 0x28);
            uVar16 = 0;
            do {
              *(float *)(*(longlong *)(pfVar12 + -10) + 0x8c) =
                   pfVar12[-6] /
                   *(float *)(*(longlong *)(*(longlong *)(pfVar12 + -10) + 0x10) + 0xa0) +
                   *(float *)(local_128._8_8_ + (ulonglong)uVar18 * 4);
              *(float *)(*(longlong *)(pfVar12 + -4) + 0x8c) =
                   *pfVar12 / *(float *)(*(longlong *)(*(longlong *)(pfVar12 + -4) + 0x10) + 0xa0) +
                   *(float *)(local_128._8_8_ + (ulonglong)(local_134 + uVar18) * 4);
              uVar16 = uVar16 + 2;
              pfVar12 = pfVar12 + 0xc;
              uVar18 = uVar18 + local_134 * 2;
            } while ((uVar9 & 0x7ffffffe) != uVar16);
          }
          if ((uVar14 & 1) != 0) {
            lVar20 = *(longlong *)(lVar7 + uVar16 * 0x18);
            *(float *)(lVar20 + 0x8c) =
                 *(float *)(lVar7 + 0x10 + uVar16 * 0x18) /
                 *(float *)(*(longlong *)(lVar20 + 0x10) + 0xa0) +
                 *(float *)(local_128._8_8_ + (ulonglong)(uint)((int)uVar16 * local_134) * 4);
          }
        }
        auVar25 = vmaxss_avx(ZEXT416(*(uint *)(local_1a8 + 0x24)),
                             ZEXT416((uint)(*(float *)(local_128._8_8_ +
                                                      (ulonglong)(local_134 * uVar9) * 4) * 9.549296
                                           )));
        auVar25 = vminss_avx(ZEXT416(*(uint *)(local_1a8 + 0x28)),auVar25);
        *(int *)(local_1a8 + 0x50) = auVar25._0_4_;
        local_130 = 0;
        (*DAT_14151f538)();
        if (local_108._8_8_ != 0) {
          uStack_110 = 0;
          (*DAT_14151f538)();
        }
      }
      lVar20 = 0;
      bVar6 = false;
      do {
        bVar3 = false;
        if (0.0 < *(float *)(lVar7 + 0xc + lVar20)) {
          if (*(int *)(*(longlong *)(lVar7 + lVar20) + 0x18) == -1) {
            bVar3 = true;
          }
          else {
            bVar3 = 0.1 < *(float *)(*(longlong *)(lVar7 + lVar20) + 0x1a0);
          }
        }
        bVar6 = (bool)(bVar6 | bVar3);
        lVar20 = lVar20 + 0x18;
      } while (uVar14 * 0x18 != lVar20);
      bVar6 = !bVar6;
      goto LAB_14035f031;
    }
  }
  FUN_1405ca180(local_160,uVar45,auVar35._0_8_);
  bVar6 = true;
LAB_14035f031:
  local_1c8 = (float *)CONCAT71(local_1c8._1_7_,fVar44 <= *(float *)(param_1 + 0x50) & bVar6);
  FUN_1405cafb0(local_190,auVar35._0_8_,*(float *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x10));
  fVar44 = auVar35._0_4_;
  lVar20 = 0;
  if (*(longlong *)(lVar13 + 0x90) != 0) {
    lVar21 = *(longlong *)(lVar13 + 0xa0);
    lVar20 = *(longlong *)(lVar13 + 0x90) << 3;
    lVar13 = 0;
    auVar26._8_4_ = 0x7fffffff;
    auVar26._0_8_ = 0x7fffffff7fffffff;
    auVar26._12_4_ = 0x7fffffff;
    do {
      lVar8 = *(longlong *)(lVar21 + lVar13);
      lVar11 = *(longlong *)(lVar8 + 0x10);
      auVar25 = vfmadd231ss_fma(ZEXT416((uint)(*(float *)(param_1 + 0x1c) *
                                              *(float *)(lVar11 + 0xe4))),
                                ZEXT416(*(uint *)(param_1 + 0x18)),ZEXT416(*(uint *)(lVar11 + 0xe0))
                               );
      fVar33 = 0.0;
      fVar15 = auVar25._0_4_;
      if (0.0 < fVar15) {
        fVar32 = *(float *)(lVar8 + 0x8c);
        auVar28 = vandps_avx(ZEXT416((uint)fVar32),auVar26);
        fVar33 = (auVar28._0_4_ * *(float *)(lVar11 + 0xa0)) / fVar44;
        if (fVar15 <= fVar33) {
          auVar37._0_8_ = auVar25._0_8_ ^ 0x8000000080000000;
          auVar37._8_4_ = auVar25._8_4_ ^ 0x80000000;
          auVar37._12_4_ = auVar25._12_4_ ^ 0x80000000;
          fVar33 = 0.0;
          auVar28 = vcmpss_avx(ZEXT416((uint)fVar32),ZEXT416(0) << 0x20,1);
          auVar25 = vblendvps_avx(auVar37,auVar25,auVar28);
          *(float *)(lVar8 + 0x8c) = fVar32 + (fVar44 * auVar25._0_4_) / *(float *)(lVar11 + 0xa0);
        }
        else {
          *(undefined4 *)(lVar8 + 0x8c) = 0;
          fVar33 = (fVar44 * (fVar15 - fVar33)) / *(float *)(lVar11 + 0x88);
        }
      }
      *(float *)(lVar8 + 0x1b0) = fVar33;
      lVar13 = lVar13 + 8;
    } while (lVar20 != lVar13);
  }
  uVar36 = (undefined4)((ulonglong)lVar20 >> 0x20);
  *(float *)(param_1 + 0xdc) = fVar44;
  if (lVar7 != 0) {
    (*DAT_14151f538)(lVar7);
    uVar36 = extraout_var;
  }
  if (local_1b0 != 0) {
    (*DAT_14151f538)();
    uVar36 = extraout_var_00;
  }
  if (local_1a0 != (undefined1 (*) [16])0x0) {
    uVar16 = rdtsc();
    auVar4._8_8_ = uStack_140;
    auVar4._0_8_ = local_148;
    auVar28 = vpinsrq_avx(auVar4,uVar16 & 0xffffffff00000000 | CONCAT44(uVar36,(int)uVar16),1);
    auVar25 = vmovntdq_avx(SUB6416(ZEXT864(0x14139bbd0),0));
    *local_1a0 = auVar25;
    auVar25 = vmovntdq_avx(auVar28);
    local_1a0[1] = auVar25;
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_1e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_1e8);
}

