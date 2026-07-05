/**
 * Function: void_jph_softbodymotionproperties_updatesoftb
 * Address:  140385a60
 * Signature: undefined void_jph_softbodymotionproperties_updatesoftb(void)
 * Body size: 2578 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void void_jph_softbodymotionproperties_updatesoftb
               (undefined1 (*param_1) [16],undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 (*pauVar30) [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar31;
  float fVar43;
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar40 [64];
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
  undefined1 in_ZMM6 [64];
  float fVar54;
  undefined1 auVar55 [64];
  float fVar56;
  undefined1 auVar57 [64];
  undefined1 auVar58 [16];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  float fVar62;
  undefined1 auVar63 [64];
  undefined1 unaff_000015c4 [12];
  undefined1 auStack_148 [40];
  undefined1 (*local_120) [16];
  longlong local_118;
  undefined8 *local_110;
  undefined1 (*local_108) [16];
  ulonglong local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 (*local_e8) [16];
  ulonglong local_e0;
  undefined1 local_d8 [16];
  undefined4 extraout_XMM0_Db;
  undefined1 extraout_var [56];
  undefined1 auVar59 [64];
  
  local_d8 = in_ZMM6._0_16_;
  local_e0 = DAT_1414ef3c0 ^ (ulonglong)auStack_148;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar18 != 0) {
    uVar21 = *(uint *)(lVar18 + 0x200020);
    if ((ulonglong)uVar21 < 0x10000) {
      *(uint *)(lVar18 + 0x200020) = uVar21 + 1;
      pauVar26 = (undefined1 (*) [16])(lVar18 + (ulonglong)uVar21 * 0x20 + 0x20);
      uVar27 = rdtsc();
      in_ZMM6 = ZEXT864(uVar27 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar18 >> 0x20),(int)uVar27));
      bVar5 = param_1[0x1d][6];
      goto joined_r0x000140385b7f;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar26 = (undefined1 (*) [16])0x0;
  bVar5 = param_1[0x1d][6];
joined_r0x000140385b7f:
  if ((bVar5 & 1) != 0) {
    auVar35 = in_ZMM6._0_16_;
    plVar20 = (longlong *)param_2[2];
    if (plVar20 != (longlong *)0x0) {
      pauVar30 = param_1 + 0x15;
      uVar21 = (uint)*(undefined8 *)param_1[0x15];
      if (0 < (int)uVar21) {
        auVar57 = ZEXT1264(ZEXT812(0));
        uVar27 = (ulonglong)(uVar21 & 0x7fffffff);
        local_120 = pauVar26;
        local_118 = param_3;
        local_110 = param_2;
        local_108 = pauVar30;
        do {
          auVar58 = auVar57._0_16_;
          auVar35 = in_ZMM6._0_16_;
          uVar28 = uVar27 - 1;
          lVar18 = *(longlong *)param_1[0x16];
          if (*(char *)(lVar18 + 0x5c + uVar28 * 0x60) == '\0') {
            puVar23 = (undefined8 *)(uVar28 * 0x60 + lVar18);
            lVar25 = *(longlong *)*pauVar30 * 0x60;
            lVar7 = lVar18 + lVar25;
            puVar2 = (undefined8 *)(lVar18 + -0x60 + lVar25);
            uVar9 = *puVar2;
            uVar11 = puVar2[1];
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            puVar2 = (undefined8 *)(lVar18 + -0x40 + lVar25);
            uVar14 = puVar2[1];
            uVar15 = puVar2[2];
            uVar16 = puVar2[3];
            puVar23[4] = *puVar2;
            puVar23[5] = uVar14;
            puVar23[6] = uVar15;
            puVar23[7] = uVar16;
            *puVar23 = uVar9;
            puVar23[1] = uVar11;
            puVar23[2] = uVar12;
            puVar23[3] = uVar13;
            local_100 = uVar28;
            if (puVar23 != (undefined8 *)(lVar18 + lVar25 + -0x60)) {
              uVar28 = puVar23[10];
              if (uVar28 != 0) {
                if (puVar23[8] != 0) {
                  uVar29 = puVar23[8] * 0x60 + uVar28;
                  do {
                    puVar2 = *(undefined8 **)(uVar28 + 0x50);
                    if (puVar2 != (undefined8 *)0x0) {
                      LOCK();
                      piVar1 = (int *)(puVar2 + 1);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
                        auVar57 = ZEXT1664(auVar57._0_16_);
                        (**(code **)*puVar2)(puVar2,1);
                      }
                    }
                    auVar58 = auVar57._0_16_;
                    auVar35 = in_ZMM6._0_16_;
                    uVar28 = uVar28 + 0x60;
                  } while (uVar28 < uVar29);
                  uVar28 = puVar23[10];
                  pauVar30 = local_108;
                }
                puVar23[8] = 0;
                in_ZMM6 = ZEXT1664(auVar35);
                auVar57 = ZEXT1664(auVar58);
                (*DAT_14151f538)(uVar28);
                *(undefined1 (*) [16])(puVar23 + 9) = auVar57._0_16_;
              }
              uVar9 = *(undefined8 *)(lVar7 + -0x18);
              puVar23[8] = *(undefined8 *)(lVar7 + -0x20);
              puVar23[9] = uVar9;
              puVar23[10] = *(undefined8 *)(lVar7 + -0x10);
              *(undefined1 (*) [16])(lVar18 + lVar25 + -0x20) = auVar57._0_16_;
              *(undefined8 *)(lVar18 + lVar25 + -0x10) = 0;
            }
            uVar28 = local_100;
            auVar58 = auVar57._0_16_;
            auVar35 = in_ZMM6._0_16_;
            *(undefined1 *)((longlong)puVar23 + 0x5c) = *(undefined1 *)(lVar7 + -4);
            *(undefined4 *)(puVar23 + 0xb) = *(undefined4 *)(lVar7 + -8);
            lVar18 = *(longlong *)param_1[0x15] + -1;
            *(longlong *)param_1[0x15] = lVar18;
            lVar18 = lVar18 * 0x60;
            uVar29 = *(ulonglong *)(*(longlong *)param_1[0x16] + 0x50 + lVar18);
            if (uVar29 != 0) {
              lVar18 = *(longlong *)param_1[0x16] + lVar18;
              if (*(longlong *)(lVar18 + 0x40) != 0) {
                uVar24 = *(longlong *)(lVar18 + 0x40) * 0x60 + uVar29;
                do {
                  puVar2 = *(undefined8 **)(uVar29 + 0x50);
                  if (puVar2 != (undefined8 *)0x0) {
                    LOCK();
                    piVar1 = (int *)(puVar2 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
                      auVar57 = ZEXT1664(auVar57._0_16_);
                      (**(code **)*puVar2)(puVar2,1);
                    }
                  }
                  auVar58 = auVar57._0_16_;
                  auVar35 = in_ZMM6._0_16_;
                  uVar29 = uVar29 + 0x60;
                } while (uVar29 < uVar24);
                uVar29 = *(ulonglong *)(lVar18 + 0x50);
              }
              *(undefined8 *)(lVar18 + 0x40) = 0;
              in_ZMM6 = ZEXT1664(auVar35);
              auVar57 = ZEXT1664(auVar58);
              (*DAT_14151f538)(uVar29);
              *(undefined1 (*) [16])(lVar18 + 0x48) = auVar57._0_16_;
            }
          }
          auVar35 = in_ZMM6._0_16_;
          bVar8 = 1 < (longlong)uVar27;
          uVar27 = uVar28;
        } while (bVar8);
        plVar20 = (longlong *)local_110[2];
        pauVar26 = local_120;
        param_2 = local_110;
        param_3 = local_118;
      }
      local_f8 = param_1[0x10] + 8;
      local_f0 = param_1[0x13] + 8;
      in_ZMM6 = ZEXT1664(auVar35);
      local_e8 = pauVar30;
      (**(code **)(*plVar20 + 0x10))(plVar20,*param_2,&local_f8);
    }
  }
  auVar35 = in_ZMM6._0_16_;
  fVar54 = *(float *)(param_2 + 0x10);
  fVar62 = *(float *)(param_1[6] + 4);
  fVar56 = fVar62 * fVar62;
  auVar57 = ZEXT464((uint)fVar56);
  *(undefined4 *)param_1[0x18] = 0x7f7fffff;
  *(undefined4 *)(param_1[0x18] + 4) = 0x7f7fffff;
  *(undefined4 *)(param_1[0x18] + 8) = 0x7f7fffff;
  *(undefined4 *)(param_1[0x18] + 0xc) = 0x7f7fffff;
  *(undefined4 *)param_1[0x19] = 0xff7fffff;
  *(undefined4 *)(param_1[0x19] + 4) = 0xff7fffff;
  *(undefined4 *)(param_1[0x19] + 8) = 0xff7fffff;
  *(undefined4 *)(param_1[0x19] + 0xc) = 0xff7fffff;
  uVar9 = *(undefined8 *)(param_1[0x18] + 8);
  *(undefined8 *)param_1[0x1a] = *(undefined8 *)param_1[0x18];
  *(undefined8 *)(param_1[0x1a] + 8) = uVar9;
  uVar9 = *(undefined8 *)(param_1[0x19] + 8);
  *(undefined8 *)param_1[0x1b] = *(undefined8 *)param_1[0x19];
  *(undefined8 *)(param_1[0x1b] + 8) = uVar9;
  lVar18 = *(longlong *)(param_1[0x10] + 8);
  if (lVar18 == 0) {
    auVar55 = ZEXT864(0);
    auVar58 = ZEXT816(0);
    iVar17 = 0;
    auVar36 = ZEXT816(0);
  }
  else {
    lVar7 = *(longlong *)(param_1[0x11] + 8);
    auVar35 = vshufps_avx(ZEXT416((uint)fVar54),ZEXT416((uint)fVar54),0);
    auVar61 = ZEXT1664(auVar35);
    auVar36 = ZEXT816(0);
    fVar62 = 0.0;
    lVar25 = 0;
    auVar55 = ZEXT864(0);
    auVar58 = ZEXT816(0);
    do {
      auVar60 = ZEXT1664(auVar36);
      auVar59 = ZEXT1664(auVar58);
      auVar33 = auVar55._0_16_;
      auVar32 = *(undefined1 (*) [16])(lVar7 + 0x20 + lVar25);
      auVar45._0_4_ = auVar32._0_4_ * auVar32._0_4_;
      auVar45._4_4_ = auVar32._4_4_ * auVar32._4_4_;
      auVar45._8_4_ = auVar32._8_4_ * auVar32._8_4_;
      auVar45._12_4_ = auVar32._12_4_ * auVar32._12_4_;
      auVar35 = vinsertps_avx(auVar45,auVar45,0x4c);
      auVar46._0_4_ = auVar45._0_4_ + auVar35._0_4_;
      auVar46._4_4_ = auVar45._4_4_ + auVar35._4_4_;
      auVar46._8_4_ = auVar45._8_4_ + auVar35._8_4_;
      auVar46._12_4_ = auVar45._12_4_ + auVar35._12_4_;
      auVar35 = vshufpd_avx(auVar46,auVar46,1);
      fVar56 = auVar46._0_4_ + auVar35._0_4_;
      auVar63 = ZEXT464((uint)fVar56);
      auVar45 = ZEXT416((uint)fVar56);
      auVar46 = auVar36;
      auVar34 = auVar58;
      if (auVar57._0_4_ < fVar56) {
        auVar35._0_4_ = auVar57._0_4_ / fVar56;
        auVar35._4_12_ = auVar57._4_12_;
        if (auVar35._0_4_ < fVar62) {
          auVar40._0_4_ = sqrtf(auVar35._0_4_);
          auVar40._4_4_ = extraout_XMM0_Db;
          auVar34 = auVar59._0_16_;
          auVar46 = auVar60._0_16_;
          auVar45 = auVar63._0_16_;
          auVar33 = auVar55._0_16_;
          auVar40._8_56_ = extraout_var;
          auVar35 = auVar40._0_16_;
        }
        else {
          auVar35 = vsqrtss_avx(auVar35,auVar35);
          auVar45 = ZEXT416((uint)fVar56);
        }
        auVar35 = vshufps_avx(auVar35,auVar35,0);
        pfVar3 = (float *)(lVar7 + 0x20 + lVar25);
        auVar32._0_4_ = auVar35._0_4_ * *pfVar3;
        auVar32._4_4_ = auVar35._4_4_ * pfVar3[1];
        auVar32._8_4_ = auVar35._8_4_ * pfVar3[2];
        auVar32._12_4_ = auVar35._12_4_ * pfVar3[3];
        *(undefined1 (*) [16])(lVar7 + 0x20 + lVar25) = auVar32;
      }
      auVar35 = in_ZMM6._0_16_;
      auVar58 = vmaxss_avx(auVar45,auVar33);
      auVar55 = ZEXT1664(auVar58);
      auVar36._0_4_ = auVar46._0_4_ + auVar32._0_4_;
      auVar36._4_4_ = auVar46._4_4_ + auVar32._4_4_;
      auVar36._8_4_ = auVar46._8_4_ + auVar32._8_4_;
      auVar36._12_4_ = auVar46._12_4_ + auVar32._12_4_;
      auVar45 = vshufps_avx(auVar32,auVar32,0xc9);
      auVar58 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar25);
      auVar44._0_4_ = auVar45._0_4_ * auVar58._0_4_;
      auVar44._4_4_ = auVar45._4_4_ * auVar58._4_4_;
      auVar44._8_4_ = auVar45._8_4_ * auVar58._8_4_;
      auVar44._12_4_ = auVar45._12_4_ * auVar58._12_4_;
      auVar45 = vshufps_avx(auVar58,auVar58,0xc9);
      auVar33._0_4_ = auVar32._0_4_ * auVar45._0_4_;
      auVar33._4_4_ = auVar32._4_4_ * auVar45._4_4_;
      auVar33._8_4_ = auVar32._8_4_ * auVar45._8_4_;
      auVar33._12_4_ = auVar32._12_4_ * auVar45._12_4_;
      auVar45 = vsubps_avx(auVar44,auVar33);
      auVar32 = vminps_avx(param_1[0x18],auVar58);
      param_1[0x18] = auVar32;
      auVar32 = vshufps_avx(auVar45,auVar45,9);
      auVar58 = vmaxps_avx(param_1[0x19],auVar58);
      param_1[0x19] = auVar58;
      pfVar3 = (float *)(lVar7 + 0x20 + lVar25);
      pfVar4 = (float *)(lVar7 + 0x10 + lVar25);
      auVar58._0_4_ = auVar34._0_4_ + auVar32._0_4_;
      auVar58._4_4_ = auVar34._4_4_ + auVar32._4_4_;
      auVar58._8_4_ = auVar34._8_4_ + auVar32._8_4_;
      auVar58._12_4_ = auVar34._12_4_ + auVar32._12_4_;
      auVar34._0_4_ = auVar61._0_4_ * *pfVar3 + *pfVar4 + *(float *)(param_2 + 0xe);
      auVar34._4_4_ = auVar61._4_4_ * pfVar3[1] + pfVar4[1] + *(float *)((longlong)param_2 + 0x74);
      auVar34._8_4_ = auVar61._8_4_ * pfVar3[2] + pfVar4[2] + *(float *)(param_2 + 0xf);
      auVar34._12_4_ = auVar61._12_4_ * pfVar3[3] + pfVar4[3] + *(float *)((longlong)param_2 + 0x7c)
      ;
      auVar32 = vminps_avx(param_1[0x1a],auVar34);
      param_1[0x1a] = auVar32;
      auVar32 = vmaxps_avx(param_1[0x1b],auVar34);
      param_1[0x1b] = auVar32;
      *(undefined4 *)(lVar7 + 0x48 + lVar25) = 0xff7fffff;
      *(undefined4 *)(lVar7 + 0x40 + lVar25) = 0xffffffff;
      *(undefined1 *)(lVar7 + 0x44 + lVar25) = 0;
      lVar25 = lVar25 + 0x50;
    } while (lVar18 * 0x50 != lVar25);
    iVar17 = *(int *)(param_1[0x10] + 8);
    fVar62 = *(float *)(param_1[6] + 4);
    fVar56 = fVar62 * fVar62;
  }
  iVar19 = 1;
  if (1 < iVar17) {
    iVar19 = iVar17;
  }
  auVar47._0_4_ = (float)iVar19;
  auVar47._4_12_ = unaff_000015c4;
  auVar45 = vshufps_avx(auVar47,auVar47,0);
  auVar36 = vdivps_avx(auVar36,auVar45);
  auVar32 = vshufps_avx(auVar36,auVar36,0);
  auVar46 = vshufps_avx(auVar36,auVar36,0x55);
  auVar36 = vshufps_avx(auVar36,auVar36,0xaa);
  auVar50._0_4_ =
       auVar36._0_4_ * *(float *)(param_2 + 8) +
       auVar32._0_4_ * *(float *)(param_2 + 4) + auVar46._0_4_ * *(float *)(param_2 + 6);
  auVar50._4_4_ =
       auVar36._4_4_ * *(float *)((longlong)param_2 + 0x44) +
       auVar32._4_4_ * *(float *)((longlong)param_2 + 0x24) +
       auVar46._4_4_ * *(float *)((longlong)param_2 + 0x34);
  auVar50._8_4_ =
       auVar36._8_4_ * *(float *)(param_2 + 9) +
       auVar32._8_4_ * *(float *)(param_2 + 5) + auVar46._8_4_ * *(float *)(param_2 + 7);
  auVar50._12_4_ =
       auVar36._12_4_ * *(float *)((longlong)param_2 + 0x4c) +
       auVar32._12_4_ * *(float *)((longlong)param_2 + 0x2c) +
       auVar46._12_4_ * *(float *)((longlong)param_2 + 0x3c);
  auVar32 = vpshufd_avx(ZEXT116((byte)param_1[7][10]),0);
  auVar36 = vpand_avx(auVar32,_DAT_140de3460);
  auVar36 = vpcmpeqd_avx(auVar36,_DAT_140de3460);
  auVar51 = vpand_avx(auVar36,auVar50);
  fVar31 = auVar51._0_4_;
  auVar52._0_4_ = fVar31 * fVar31;
  fVar41 = auVar51._4_4_;
  auVar52._4_4_ = fVar41 * fVar41;
  fVar42 = auVar51._8_4_;
  auVar52._8_4_ = fVar42 * fVar42;
  fVar43 = auVar51._12_4_;
  auVar52._12_4_ = fVar43 * fVar43;
  auVar36 = vinsertps_avx(auVar52,auVar52,0x4c);
  auVar53._0_4_ = auVar52._0_4_ + auVar36._0_4_;
  auVar53._4_4_ = auVar52._4_4_ + auVar36._4_4_;
  auVar53._8_4_ = auVar52._8_4_ + auVar36._8_4_;
  auVar53._12_4_ = auVar52._12_4_ + auVar36._12_4_;
  auVar36 = vshufpd_avx(auVar53,auVar53,1);
  fVar10 = auVar53._0_4_ + auVar36._0_4_;
  if (fVar56 < fVar10) {
    auVar36 = vsqrtss_avx(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    auVar36 = ZEXT416((uint)(fVar62 / auVar36._0_4_));
    auVar36 = vshufps_avx(auVar36,auVar36,0);
    auVar51._0_4_ = auVar36._0_4_ * fVar31;
    auVar51._4_4_ = auVar36._4_4_ * fVar41;
    auVar51._8_4_ = auVar36._8_4_ * fVar42;
    auVar51._12_4_ = auVar36._12_4_ * fVar43;
  }
  *param_1 = auVar51;
  auVar58 = vdivps_avx(auVar58,auVar45);
  auVar36 = vshufps_avx(auVar58,auVar58,0);
  auVar45 = vshufps_avx(auVar58,auVar58,0x55);
  auVar58 = vshufps_avx(auVar58,auVar58,0xaa);
  auVar37._0_4_ =
       auVar36._0_4_ * *(float *)(param_2 + 4) + auVar45._0_4_ * *(float *)(param_2 + 6) +
       auVar58._0_4_ * *(float *)(param_2 + 8);
  auVar37._4_4_ =
       auVar36._4_4_ * *(float *)((longlong)param_2 + 0x24) +
       auVar45._4_4_ * *(float *)((longlong)param_2 + 0x34) +
       auVar58._4_4_ * *(float *)((longlong)param_2 + 0x44);
  auVar37._8_4_ =
       auVar36._8_4_ * *(float *)(param_2 + 5) + auVar45._8_4_ * *(float *)(param_2 + 7) +
       auVar58._8_4_ * *(float *)(param_2 + 9);
  auVar37._12_4_ =
       auVar36._12_4_ * *(float *)((longlong)param_2 + 0x2c) +
       auVar45._12_4_ * *(float *)((longlong)param_2 + 0x3c) +
       auVar58._12_4_ * *(float *)((longlong)param_2 + 0x4c);
  auVar58 = vpand_avx(auVar32,_DAT_140de3470);
  auVar58 = vpcmpeqd_avx(auVar58,_DAT_140de3470);
  auVar58 = vpand_avx(auVar58,auVar37);
  param_1[1] = auVar58;
  if (param_1[0x1d][4] == '\0') {
    *(undefined1 (*) [16])(param_2 + 0x16) = (undefined1  [16])0x0;
    cVar6 = param_1[7][9];
  }
  else {
    auVar38._0_4_ = (*(float *)param_1[0x19] + *(float *)param_1[0x18]) * 0.5;
    auVar38._4_4_ = (*(float *)(param_1[0x19] + 4) + *(float *)(param_1[0x18] + 4)) * 0.5;
    auVar38._8_4_ = (*(float *)(param_1[0x19] + 8) + *(float *)(param_1[0x18] + 8)) * 0.5;
    auVar38._12_4_ = (*(float *)(param_1[0x19] + 0xc) + *(float *)(param_1[0x18] + 0xc)) * 0.5;
    auVar58 = vshufps_avx(auVar38,auVar38,0);
    auVar36 = vshufps_avx(auVar38,auVar38,0x55);
    auVar32 = vshufps_avx(auVar38,auVar38,0xaa);
    *(float *)(param_2 + 0x16) =
         auVar32._0_4_ * *(float *)(param_2 + 8) +
         auVar58._0_4_ * *(float *)(param_2 + 4) + auVar36._0_4_ * *(float *)(param_2 + 6);
    *(float *)((longlong)param_2 + 0xb4) =
         auVar32._4_4_ * *(float *)((longlong)param_2 + 0x44) +
         auVar58._4_4_ * *(float *)((longlong)param_2 + 0x24) +
         auVar36._4_4_ * *(float *)((longlong)param_2 + 0x34);
    *(float *)(param_2 + 0x17) =
         auVar32._8_4_ * *(float *)(param_2 + 9) +
         auVar58._8_4_ * *(float *)(param_2 + 5) + auVar36._8_4_ * *(float *)(param_2 + 7);
    *(float *)((longlong)param_2 + 0xbc) =
         auVar32._12_4_ * *(float *)((longlong)param_2 + 0x4c) +
         auVar58._12_4_ * *(float *)((longlong)param_2 + 0x2c) +
         auVar36._12_4_ * *(float *)((longlong)param_2 + 0x3c);
    if (*(longlong *)(param_1[0x10] + 8) != 0) {
      lVar18 = *(longlong *)(param_1[0x11] + 8);
      lVar7 = *(longlong *)(param_1[0x10] + 8) * 0x50;
      uVar27 = lVar7 - 0x50;
      uVar21 = (uint)(uVar27 / 0x50);
      lVar25 = lVar18;
      if ((~uVar21 & 7) != 0) {
        lVar22 = -(ulonglong)(uVar21 + 1 & 7);
        do {
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x10),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x10) = auVar58;
          lVar25 = lVar25 + 0x50;
          lVar22 = lVar22 + 1;
        } while (lVar22 != 0);
      }
      if (0x22f < uVar27) {
        do {
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x10),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x10) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x60),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x60) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0xb0),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0xb0) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x100),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x100) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x150),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x150) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x1a0),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x1a0) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x1f0),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x1f0) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x240),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x240) = auVar58;
          lVar25 = lVar25 + 0x280;
        } while (lVar25 != lVar18 + lVar7);
      }
    }
    if (*(longlong *)(param_1[0x16] + 8) != 0) {
      lVar18 = *(longlong *)(param_1[0x17] + 8);
      lVar7 = *(longlong *)(param_1[0x16] + 8) * 0x30;
      uVar27 = lVar7 - 0x30;
      uVar21 = (uint)(uVar27 / 0x30);
      lVar25 = lVar18;
      if ((~uVar21 & 7) != 0) {
        lVar22 = -(ulonglong)(uVar21 + 1 & 7);
        do {
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x10),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x10) = auVar58;
          lVar25 = lVar25 + 0x30;
          lVar22 = lVar22 + 1;
        } while (lVar22 != 0);
      }
      if (0x14f < uVar27) {
        do {
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x10),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x10) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x40),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x40) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x70),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x70) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0xa0),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0xa0) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0xd0),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0xd0) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x100),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x100) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x130),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x130) = auVar58;
          auVar58 = vsubps_avx(*(undefined1 (*) [16])(lVar25 + 0x160),auVar38);
          *(undefined1 (*) [16])(lVar25 + 0x160) = auVar58;
          lVar25 = lVar25 + 0x180;
        } while (lVar25 != lVar18 + lVar7);
      }
    }
    auVar48._0_4_ = *(float *)param_1[0xf] + *(float *)(param_2 + 0x16);
    auVar48._4_4_ = *(float *)(param_1[0xf] + 4) + *(float *)((longlong)param_2 + 0xb4);
    auVar48._8_4_ = *(float *)(param_1[0xf] + 8) + *(float *)(param_2 + 0x17);
    auVar48._12_4_ = *(float *)(param_1[0xf] + 0xc) + *(float *)((longlong)param_2 + 0xbc);
    auVar58 = vinsertps_avx(auVar48,ZEXT416(0x3f800000),0x30);
    param_1[0xf] = auVar58;
    auVar58 = vsubps_avx(ZEXT816(0) << 0x20,auVar38);
    fVar62 = *(float *)(param_1[0x18] + 4);
    fVar56 = *(float *)(param_1[0x18] + 8);
    fVar10 = *(float *)(param_1[0x18] + 0xc);
    fVar31 = auVar58._0_4_;
    fVar41 = auVar58._4_4_;
    fVar42 = auVar58._8_4_;
    fVar43 = auVar58._12_4_;
    *(float *)param_1[0x18] = fVar31 + *(float *)param_1[0x18];
    *(float *)(param_1[0x18] + 4) = fVar41 + fVar62;
    *(float *)(param_1[0x18] + 8) = fVar42 + fVar56;
    *(float *)(param_1[0x18] + 0xc) = fVar43 + fVar10;
    fVar62 = *(float *)(param_1[0x19] + 4);
    fVar56 = *(float *)(param_1[0x19] + 8);
    fVar10 = *(float *)(param_1[0x19] + 0xc);
    *(float *)param_1[0x19] = fVar31 + *(float *)param_1[0x19];
    *(float *)(param_1[0x19] + 4) = fVar41 + fVar62;
    *(float *)(param_1[0x19] + 8) = fVar42 + fVar56;
    *(float *)(param_1[0x19] + 0xc) = fVar43 + fVar10;
    auVar49._0_4_ = fVar31 + *(float *)param_1[0x1a];
    auVar49._4_4_ = fVar41 + *(float *)(param_1[0x1a] + 4);
    auVar49._8_4_ = fVar42 + *(float *)(param_1[0x1a] + 8);
    auVar49._12_4_ = fVar43 + *(float *)(param_1[0x1a] + 0xc);
    param_1[0x1a] = auVar49;
    auVar39._0_4_ = fVar31 + *(float *)param_1[0x1b];
    auVar39._4_4_ = fVar41 + *(float *)(param_1[0x1b] + 4);
    auVar39._8_4_ = fVar42 + *(float *)(param_1[0x1b] + 8);
    auVar39._12_4_ = fVar43 + *(float *)(param_1[0x1b] + 0xc);
    param_1[0x1b] = auVar39;
    cVar6 = param_1[7][9];
  }
  uVar21 = 0;
  if (cVar6 == '\x01') {
    uVar21 = 0;
    if (auVar55._0_4_ <= *(float *)(param_3 + 0x4c)) {
      fVar54 = fVar54 + *(float *)param_1[0xb];
      fVar62 = *(float *)(param_3 + 0x48);
      *(float *)param_1[0xb] = fVar54;
      uVar21 = (uint)(fVar62 <= fVar54);
    }
    else {
      *(undefined4 *)param_1[0xb] = 0;
    }
  }
  *(uint *)(param_2 + 0x18) = uVar21;
  param_1[0x1d][8] = 0;
  *(undefined8 *)param_1[4] = 0;
  *(undefined4 *)(param_1[4] + 8) = 0;
  if (pauVar26 != (undefined1 (*) [16])0x0) {
    uVar9 = rdtsc();
    auVar58 = vpinsrq_avx(auVar35,uVar9,1);
    auVar35 = vmovntdq_avx(SUB6416(ZEXT864(0x14139a844),0));
    *pauVar26 = auVar35;
    auVar35 = vmovntdq_avx(auVar58);
    pauVar26[1] = auVar35;
  }
  if (DAT_1414ef3c0 == (local_e0 ^ (ulonglong)auStack_148)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_e0 ^ (ulonglong)auStack_148);
}

