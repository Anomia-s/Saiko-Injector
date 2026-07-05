/**
 * Function: profilemeasurement_too_many_samples_some_data
 * Address:  1405d6980
 * Signature: undefined profilemeasurement_too_many_samples_some_data(void)
 * Body size: 2747 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void profilemeasurement_too_many_samples_some_data
               (longlong *param_1,undefined1 (*param_2) [16],longlong *param_3,longlong *param_4,
               longlong param_5)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  undefined4 *_Src;
  uint *_Src_00;
  ulonglong uVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  void *pvVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  longlong *plVar20;
  uint *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar39 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar40 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_648 [32];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  uint local_590;
  undefined4 local_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  undefined1 local_568 [8];
  float fStack_560;
  undefined1 local_558 [16];
  longlong *local_548;
  undefined4 local_540 [128];
  ulonglong local_340;
  ulonglong local_338;
  ulonglong local_330;
  undefined4 *local_328;
  uint local_310 [128];
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  uint *local_f8;
  ulonglong local_f0;
  undefined1 local_b8 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM15._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_648;
  auVar22 = *param_2;
  auVar26 = param_2[1];
  local_588 = (auVar26._0_4_ + auVar22._0_4_) * 0.5;
  fStack_584 = (auVar26._4_4_ + auVar22._4_4_) * 0.5;
  fStack_580 = (auVar26._8_4_ + auVar22._8_4_) * 0.5;
  fStack_57c = (auVar26._12_4_ + auVar22._12_4_) * 0.5;
  auVar22 = vsubps_avx(auVar26,auVar22);
  local_578 = auVar22._0_4_ * 0.5;
  fStack_574 = auVar22._4_4_ * 0.5;
  fStack_570 = auVar22._8_4_ * 0.5;
  fStack_56c = auVar22._12_4_ * 0.5;
  auVar22 = param_2[2];
  auVar26 = vsubps_avx(ZEXT816(0) << 0x20,auVar22);
  auVar26 = vmaxps_avx(auVar26,auVar22);
  local_558 = vcmpps_avx(auVar26,_DAT_140de3630,2);
  auVar26._8_4_ = 0x3f800000;
  auVar26._0_8_ = 0x3f8000003f800000;
  auVar26._12_4_ = 0x3f800000;
  auVar22 = vdivps_avx(auVar26,auVar22);
  _local_568 = vblendvps_avx(auVar22,auVar26,local_558);
  local_328 = local_540;
  local_340 = 0x80;
  local_330 = 0x80;
  local_338 = 0x80;
  local_540[0] = 0xbf800000;
  local_110 = 0x80;
  puVar21 = local_310;
  local_f8 = puVar21;
  local_100 = 0x80;
  local_108 = 0x80;
  uVar17 = *(uint *)((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x4c) * 4 + 0x44)
           | 0x80000000;
  local_310[0] = uVar17;
  plVar20 = (longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  fVar30 = -3.4028235e+38;
  auVar32 = ZEXT864(0x141325be2);
  auVar34 = ZEXT464(0x800000);
  uVar14 = 0;
  local_548 = param_3;
  if ((int)uVar17 < 0) goto LAB_1405d6c20;
  do {
    uVar13 = uVar14;
    if ((*(short *)(*(longlong *)(param_5 + 0x10) + 2 + (ulonglong)(uVar17 & 0x7fffff) * 8) != -1)
       && (cVar9 = (**(code **)(*param_4 + 8))(param_4), cVar9 != '\0')) {
      local_628._0_8_ = puVar21;
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x169) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar18 = *plVar20;
      if (lVar18 == 0) {
LAB_1405d6cf7:
        pauVar19 = (undefined1 (*) [16])0x0;
      }
      else {
        uVar2 = *(uint *)(lVar18 + 0x200020);
        if (0xffff < (ulonglong)uVar2) {
          if (DAT_14151fc10 == '\0') {
            DAT_14151fc10 = '\x01';
            (*(code *)PTR_vfunction4_1414f67c8)
                      ("ProfileMeasurement: Too many samples, some data will be lost!");
          }
          goto LAB_1405d6cf7;
        }
        *(uint *)(lVar18 + 0x200020) = uVar2 + 1;
        pauVar19 = (undefined1 (*) [16])(lVar18 + (ulonglong)uVar2 * 0x20 + 0x20);
        auVar22 = vpblendw_avx(auVar32._0_16_,local_5d8,0xf0);
        auVar24._0_12_ = ZEXT812(0);
        auVar24._12_4_ = 0;
        local_5d8 = vpblendw_avx(auVar22,auVar24,0x30);
        uVar4 = rdtsc();
        local_608 = vpinsrq_avx(local_608,
                                uVar4 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)lVar18 >> 0x20),(int)uVar4),0);
      }
      local_58c = local_328[uVar14];
      local_590 = uVar17;
      (**(code **)(*local_548 + 0x28))(local_548,&local_590);
      fVar1 = *(float *)(local_548 + 1);
      if (pauVar19 != (undefined1 (*) [16])0x0) {
        uVar14 = rdtsc();
        local_608 = vpinsrq_avx(local_608,
                                uVar14 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)local_548 >> 0x20),(int)uVar14),1);
        auVar22 = vmovntps_avx(local_5d8);
        *pauVar19 = auVar22;
        auVar22 = vmovntdq_avx(local_608);
        pauVar19[1] = auVar22;
      }
      puVar21 = (uint *)local_628._0_8_;
      if (fVar1 <= fVar30) {
LAB_1405d7304:
        if (local_f8 != (uint *)0x0) {
          local_108 = 0;
          if ((ulonglong)((longlong)local_f8 - (longlong)local_310) < 0x200) {
            if (local_f8 == local_310 + (local_110 - local_100)) {
              local_110 = local_110 - local_100;
            }
          }
          else {
            (*DAT_14151f538)();
          }
        }
        if ((local_328 != (undefined4 *)0x0) &&
           (local_338 = 0, 0x1ff < (ulonglong)((longlong)local_328 - (longlong)local_540))) {
          (*DAT_14151f538)();
        }
        if (DAT_1414ef3c0 != (local_f0 ^ (ulonglong)auStack_648)) {
                    /* WARNING: Subroutine does not return */
          FUN_140b65db0(local_f0 ^ (ulonglong)auStack_648);
        }
        return;
      }
    }
    while( true ) {
      pfVar16 = (float *)(local_328 + uVar13);
      uVar14 = 0;
      do {
        pfVar16 = pfVar16 + -1;
        if (uVar13 == uVar14) goto LAB_1405d7304;
        auVar22 = vmaxss_avx(ZEXT416(*(uint *)(local_548 + 1)),auVar34._0_16_);
        uVar14 = uVar14 + 1;
      } while (auVar22._0_4_ <= *pfVar16);
      uVar17 = puVar21[uVar13 - uVar14 & 0xffffffff];
      uVar14 = uVar13 - uVar14 & 0xffffffff;
      if (-1 < (int)uVar17) break;
LAB_1405d6c20:
      _Src_00 = local_f8;
      uVar7 = local_100;
      uVar4 = local_108;
      uVar13 = uVar14;
      if (uVar17 != 0xffffffff) {
        local_5a8 = auVar32._0_16_;
        uVar15 = local_340;
        uVar13 = local_338;
        uVar8 = local_330;
        puVar11 = local_328;
        if ((int)local_108 <= (int)uVar14 + 4) {
          local_5f8._0_8_ = plVar20;
          local_5e8._0_8_ = param_4;
          uVar13 = local_108 * 2;
          if (local_100 <= uVar13 && uVar13 - local_100 != 0) {
            if (local_f8 == (uint *)0x0) {
              if (local_110 + uVar13 < 0x81) {
                local_f8 = local_310 + local_110;
                local_110 = local_110 + uVar13;
              }
              else {
                local_f8 = (uint *)(*DAT_14151f528)(local_108 * 8);
              }
            }
            else if ((ulonglong)((longlong)local_f8 - (longlong)local_310) < 0x200) {
              lVar18 = local_110 - local_100;
              if ((local_f8 == local_310 + lVar18) &&
                 (uVar15 = local_110 + (uVar13 - local_100), uVar15 < 0x81)) {
                local_110 = uVar15;
                local_f8 = local_310 + lVar18;
              }
              else {
                pvVar12 = (void *)(*DAT_14151f528)(local_108 * 8);
                local_628._0_8_ = pvVar12;
                memcpy(pvVar12,_Src_00,uVar7 * 4);
                if (_Src_00 == local_310 + (local_110 - uVar7)) {
                  local_110 = local_110 - uVar7;
                }
                local_f8 = (uint *)local_628._0_8_;
              }
            }
            else {
              local_f8 = (uint *)(*DAT_14151f530)(local_f8,local_100 << 2,local_108 * 8);
            }
            local_100 = uVar13;
          }
          _Src = local_328;
          uVar7 = local_330;
          local_108 = uVar13;
          param_4 = (longlong *)local_5e8._0_8_;
          plVar20 = (longlong *)local_5f8._0_8_;
          puVar21 = local_f8;
          uVar15 = local_340;
          uVar8 = local_330;
          puVar11 = local_328;
          if (local_330 <= uVar13 && uVar13 - local_330 != 0) {
            local_628._0_8_ = local_f8;
            uVar8 = uVar13;
            if (local_328 == (undefined4 *)0x0) {
              if (local_340 + uVar13 < 0x81) {
                uVar15 = local_340 + uVar13;
                puVar11 = local_540 + local_340;
              }
              else {
                puVar11 = (undefined4 *)(*DAT_14151f528)(uVar4 << 3);
                param_4 = (longlong *)local_5e8._0_8_;
                plVar20 = (longlong *)local_5f8._0_8_;
                puVar21 = (uint *)local_628._0_8_;
                uVar15 = local_340;
              }
            }
            else if ((ulonglong)((longlong)local_328 - (longlong)local_540) < 0x200) {
              puVar11 = local_540 + (local_340 - local_330);
              if ((local_328 != puVar11) ||
                 (uVar15 = local_340 + (uVar13 - local_330), 0x80 < uVar15)) {
                pvVar12 = (void *)(*DAT_14151f528)(uVar4 << 3);
                local_618._0_8_ = pvVar12;
                memcpy(pvVar12,_Src,uVar7 * 4);
                if (_Src == local_540 + (local_340 - uVar7)) {
                  local_340 = local_340 - uVar7;
                }
                param_4 = (longlong *)local_5e8._0_8_;
                plVar20 = (longlong *)local_5f8._0_8_;
                puVar21 = (uint *)local_628._0_8_;
                uVar15 = local_340;
                puVar11 = (undefined4 *)local_618._0_8_;
              }
            }
            else {
              puVar11 = (undefined4 *)(*DAT_14151f530)(local_328,local_330 << 2,uVar4 << 3);
              param_4 = (longlong *)local_5e8._0_8_;
              plVar20 = (longlong *)local_5f8._0_8_;
              puVar21 = (uint *)local_628._0_8_;
              uVar15 = local_340;
            }
          }
        }
        local_328 = puVar11;
        local_330 = uVar8;
        local_338 = uVar13;
        local_340 = uVar15;
        lVar18 = *param_1;
        lVar3 = *(longlong *)
                 (*(longlong *)(lVar18 + 0x18) +
                 (ulonglong)((uVar17 & 0x7fffffff) >> (*(byte *)(lVar18 + 4) & 0x1f)) * 8);
        lVar18 = (ulonglong)(uVar17 & 0x7fffffff & *(uint *)(lVar18 + 8)) * 0x80;
        auVar27._4_4_ = local_578;
        auVar27._0_4_ = local_578;
        auVar27._8_4_ = local_578;
        auVar27._12_4_ = local_578;
        local_628 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + lVar18),auVar27);
        pfVar16 = (float *)(lVar3 + 0x30 + lVar18);
        local_5f8._0_4_ = local_578 + *pfVar16;
        local_5f8._4_4_ = local_578 + pfVar16[1];
        local_5f8._8_4_ = local_578 + pfVar16[2];
        local_5f8._12_4_ = local_578 + pfVar16[3];
        auVar22._4_4_ = fStack_574;
        auVar22._0_4_ = fStack_574;
        auVar22._8_4_ = fStack_574;
        auVar22._12_4_ = fStack_574;
        auVar6 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + 0x10 + lVar18),auVar22);
        pfVar16 = (float *)(lVar3 + 0x40 + lVar18);
        local_5b8._0_4_ = fStack_574 + *pfVar16;
        local_5b8._4_4_ = fStack_574 + pfVar16[1];
        local_5b8._8_4_ = fStack_574 + pfVar16[2];
        local_5b8._12_4_ = fStack_574 + pfVar16[3];
        auVar28._4_4_ = fStack_570;
        auVar28._0_4_ = fStack_570;
        auVar28._8_4_ = fStack_570;
        auVar28._12_4_ = fStack_570;
        local_5e8 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + 0x20 + lVar18),auVar28);
        pfVar16 = (float *)(lVar3 + 0x50 + lVar18);
        local_618._0_4_ = fStack_570 + *pfVar16;
        local_618._4_4_ = fStack_570 + pfVar16[1];
        local_618._8_4_ = fStack_570 + pfVar16[2];
        local_618._12_4_ = fStack_570 + pfVar16[3];
        auVar39._4_4_ = local_588;
        auVar39._0_4_ = local_588;
        auVar39._8_4_ = local_588;
        auVar39._12_4_ = local_588;
        auVar40._4_4_ = fStack_584;
        auVar40._0_4_ = fStack_584;
        auVar40._8_4_ = fStack_584;
        auVar40._12_4_ = fStack_584;
        auVar29._4_4_ = fStack_580;
        auVar29._0_4_ = fStack_580;
        auVar29._8_4_ = fStack_580;
        auVar29._12_4_ = fStack_580;
        auVar22 = vsubps_avx(local_628,auVar39);
        auVar37._0_4_ = auVar22._0_4_ * (float)local_568._0_4_;
        auVar37._4_4_ = auVar22._4_4_ * (float)local_568._0_4_;
        auVar37._8_4_ = auVar22._8_4_ * (float)local_568._0_4_;
        auVar37._12_4_ = auVar22._12_4_ * (float)local_568._0_4_;
        auVar22 = vsubps_avx(auVar6,auVar40);
        auVar31._0_4_ = (float)local_568._4_4_ * auVar22._0_4_;
        auVar31._4_4_ = (float)local_568._4_4_ * auVar22._4_4_;
        auVar31._8_4_ = (float)local_568._4_4_ * auVar22._8_4_;
        auVar31._12_4_ = (float)local_568._4_4_ * auVar22._12_4_;
        auVar22 = vsubps_avx(local_5e8,auVar29);
        auVar38._0_4_ = auVar22._0_4_ * fStack_560;
        auVar38._4_4_ = auVar22._4_4_ * fStack_560;
        auVar38._8_4_ = auVar22._8_4_ * fStack_560;
        auVar38._12_4_ = auVar22._12_4_ * fStack_560;
        auVar22 = vsubps_avx(local_5f8,auVar39);
        auVar23._0_4_ = auVar22._0_4_ * (float)local_568._0_4_;
        auVar23._4_4_ = auVar22._4_4_ * (float)local_568._0_4_;
        auVar23._8_4_ = auVar22._8_4_ * (float)local_568._0_4_;
        auVar23._12_4_ = auVar22._12_4_ * (float)local_568._0_4_;
        auVar22 = vsubps_avx(local_5b8,auVar40);
        auVar25._0_4_ = (float)local_568._4_4_ * auVar22._0_4_;
        auVar25._4_4_ = (float)local_568._4_4_ * auVar22._4_4_;
        auVar25._8_4_ = (float)local_568._4_4_ * auVar22._8_4_;
        auVar25._12_4_ = (float)local_568._4_4_ * auVar22._12_4_;
        auVar22 = vsubps_avx(local_618,auVar29);
        auVar33._0_4_ = fStack_560 * auVar22._0_4_;
        auVar33._4_4_ = fStack_560 * auVar22._4_4_;
        auVar33._8_4_ = fStack_560 * auVar22._8_4_;
        auVar33._12_4_ = fStack_560 * auVar22._12_4_;
        auVar24 = vshufps_avx(local_558,local_558,0);
        auVar22 = vminps_avx(auVar37,auVar23);
        auVar35._8_4_ = 0xff7fffff;
        auVar35._0_8_ = 0xff7fffffff7fffff;
        auVar35._12_4_ = 0xff7fffff;
        auVar22 = vblendvps_avx(auVar22,auVar35,auVar24);
        auVar28 = vshufps_avx(local_558,local_558,0x55);
        auVar26 = vminps_avx(auVar31,auVar25);
        auVar26 = vblendvps_avx(auVar26,auVar35,auVar28);
        auVar26 = vmaxps_avx(auVar22,auVar26);
        auVar5 = vshufps_avx(local_558,local_558,0xaa);
        auVar22 = vminps_avx(auVar38,auVar33);
        auVar22 = vblendvps_avx(auVar22,auVar35,auVar5);
        auVar27 = vmaxps_avx(auVar26,auVar22);
        auVar22 = vmaxps_avx(auVar37,auVar23);
        auVar36._8_4_ = 0x7f7fffff;
        auVar36._0_8_ = 0x7f7fffff7f7fffff;
        auVar36._12_4_ = 0x7f7fffff;
        auVar22 = vblendvps_avx(auVar22,auVar36,auVar24);
        auVar26 = vmaxps_avx(auVar31,auVar25);
        auVar26 = vblendvps_avx(auVar26,auVar36,auVar28);
        auVar26 = vminps_avx(auVar22,auVar26);
        auVar22 = vmaxps_avx(auVar38,auVar33);
        auVar22 = vblendvps_avx(auVar22,auVar36,auVar5);
        auVar26 = vminps_avx(auVar26,auVar22);
        auVar22 = vcmpps_avx(auVar26,auVar27,1);
        auVar26 = vcmpps_avx(auVar26,ZEXT816(0) << 0x20,1);
        local_5c8 = vorps_avx(auVar22,auVar26);
        auVar22 = vcmpps_avx(local_5b8,auVar6,1);
        auVar26 = vcmpps_avx(local_5f8,local_628,1);
        auVar26 = vorps_avx(auVar26,auVar22);
        auVar22 = vcmpps_avx(local_618,local_5e8,1);
        auVar23 = vorps_avx(auVar22,auVar26);
        auVar22 = vcmpps_avx(local_5f8,auVar39,1);
        auVar26 = vcmpps_avx(auVar39,local_628,1);
        auVar22 = vorps_avx(auVar26,auVar22);
        auVar22 = vandps_avx(auVar22,auVar24);
        auVar26 = vcmpps_avx(local_5b8,auVar40,1);
        auVar24 = vcmpps_avx(auVar40,auVar6,1);
        auVar26 = vorps_avx(auVar24,auVar26);
        auVar26 = vandps_avx(auVar26,auVar28);
        auVar24 = vorps_avx(auVar22,auVar26);
        auVar22 = vcmpps_avx(local_618,auVar29,1);
        auVar26 = vcmpps_avx(auVar29,local_5e8,1);
        auVar22 = vorps_avx(auVar26,auVar22);
        auVar22 = vandps_avx(auVar5,auVar22);
        auVar22 = vorps_avx(auVar24,auVar22);
        auVar26 = vorps_avx(auVar23,auVar22);
        auVar22 = *(undefined1 (*) [16])(lVar3 + 0x60 + lVar18);
        auVar26 = vorps_avx(auVar26,local_5c8);
        auVar26 = vblendvps_avx(auVar27,auVar36,auVar26);
        auVar27 = vshufpd_avx(auVar26,auVar26,1);
        auVar24 = vcmpps_avx(auVar27,auVar26,1);
        auVar24 = vshufpd_avx(auVar24,auVar24,3);
        auVar26 = vblendvps_avx(auVar26,auVar27,auVar24);
        auVar27 = vshufpd_avx(auVar22,auVar22,1);
        auVar22 = vblendvps_avx(auVar22,auVar27,auVar24);
        auVar27 = vshufps_avx(auVar26,auVar26,0xb1);
        auVar24 = vcmpps_avx(auVar27,auVar26,1);
        auVar24 = vmovshdup_avx(auVar24);
        auVar26 = vblendvps_avx(auVar26,auVar27,auVar24);
        auVar27 = vshufps_avx(auVar22,auVar22,0xb1);
        auVar22 = vblendvps_avx(auVar22,auVar27,auVar24);
        auVar27 = vshufps_avx(auVar26,auVar26,0xd8);
        auVar24 = vcmpps_avx(auVar27,auVar26,1);
        auVar24 = vshufps_avx(auVar24,auVar24,0xe8);
        auVar26 = vblendvps_avx(auVar26,auVar27,auVar24);
        auVar27 = vshufps_avx(auVar22,auVar22,0xd8);
        auVar22 = vblendvps_avx(auVar22,auVar27,auVar24);
        auVar34 = ZEXT464(0x800000);
        auVar24 = vmaxss_avx(ZEXT416(*(uint *)(local_548 + 1)),auVar34._0_16_);
        auVar24 = vshufps_avx(auVar24,auVar24,0);
        auVar24 = vcmpps_avx(auVar26,auVar24,1);
        uVar10 = vmovmskps_avx(auVar24);
        uVar13 = (ulonglong)(uint)((int)uVar14 + POPCOUNT(uVar10));
        auVar26 = vpshufb_avx(auVar26,*(undefined1 (*) [16])
                                       (&DAT_140e086a0 + (uint)(POPCOUNT(uVar10) << 4)));
        auVar22 = vpshufb_avx(auVar22,*(undefined1 (*) [16])
                                       (&DAT_140e086a0 + (uint)(POPCOUNT(uVar10) << 4)));
        *(undefined1 (*) [16])(local_328 + uVar14) = auVar26;
        *(undefined1 (*) [16])(puVar21 + uVar14) = auVar22;
        fVar30 = -3.4028235e+38;
        auVar32 = ZEXT1664(local_5a8);
      }
    }
  } while( true );
}

