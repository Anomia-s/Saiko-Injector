/**
 * Function: build_job_barrier
 * Address:  1400a4140
 * Signature: undefined build_job_barrier(void)
 * Body size: 11504 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined4
build_job_barrier(undefined8 *******param_1,undefined8 param_2,uint param_3,longlong *param_4,
                 longlong *param_5)

{
  int *piVar1;
  undefined8 ******ppppppuVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 ******ppppppuVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 extraout_var;
  undefined8 uVar12;
  undefined4 uVar14;
  undefined4 *puVar13;
  undefined4 extraout_var_00;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 (*pauVar20) [16];
  undefined8 *******pppppppuVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint uVar25;
  ulonglong uVar26;
  int iVar27;
  ulonglong uVar28;
  undefined8 *******pppppppuVar29;
  undefined1 in_ZMM1 [64];
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar33 [16];
  undefined1 auStack_42d8 [32];
  undefined8 *******local_42b8;
  uint local_42b0;
  uint local_42a4;
  longlong local_42a0;
  ulonglong local_4298;
  ulonglong local_4290;
  int local_4288;
  uint local_4284;
  uint local_4280;
  int local_427c;
  undefined1 (*local_4278) [16];
  ulonglong local_4270;
  ulonglong local_4268;
  ulonglong local_4260;
  ulonglong local_4258;
  ulonglong local_4250;
  ulonglong *local_4248;
  longlong *local_4240;
  ulonglong local_4238;
  int local_422c;
  int local_4228;
  int local_4224;
  int local_4220;
  int local_421c;
  undefined8 *******local_4218;
  undefined8 *******local_4210;
  undefined8 *******local_4208;
  longlong local_4200;
  ulonglong local_41f8;
  longlong local_41f0;
  longlong local_41e8;
  longlong local_41e0;
  longlong local_41d8;
  longlong local_41d0;
  longlong local_41c8;
  longlong local_41c0;
  ulonglong local_41b8;
  undefined8 *******local_41b0;
  longlong local_41a8;
  longlong local_41a0;
  longlong local_4198;
  ulonglong local_4190;
  ulonglong local_4188;
  ulonglong local_4180;
  ulonglong local_4178;
  ulonglong local_4170;
  undefined1 (*local_4168) [16];
  undefined8 *******local_4160;
  undefined8 *******local_4158;
  longlong local_4150;
  longlong local_4148;
  longlong local_4140;
  longlong local_4138;
  longlong local_4130;
  longlong local_4128;
  ulonglong local_4120;
  longlong local_4118;
  longlong local_4110;
  undefined8 *******local_4108;
  undefined8 local_4100;
  longlong *local_40f8;
  longlong *local_40f0;
  undefined4 local_40e8;
  undefined4 local_40e4;
  undefined4 local_40e0;
  undefined8 local_40d8;
  undefined8 local_40d0;
  undefined8 *******local_40c8;
  undefined1 local_40c0 [8];
  longlong local_40b8;
  longlong local_40a8;
  undefined8 ******local_4088;
  undefined8 *******local_4080;
  longlong local_4078;
  undefined8 *******local_4050;
  ulonglong local_80;
  undefined1 local_68 [16];
  undefined8 uStack_48;
  undefined1 auVar32 [64];
  
  uStack_48 = 0x1400a4156;
  local_68 = in_ZMM7._0_16_;
  auVar31 = ZEXT1664(in_ZMM1._0_16_);
  local_80 = DAT_1414ef3c0 ^ (ulonglong)auStack_42d8;
  local_4240 = param_4;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar5 = *(longlong *)(lVar17 + 0x170);
  if (lVar5 == 0) {
LAB_1400a4229:
    pauVar20 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar10 = *(uint *)(lVar5 + 0x200020);
    if (0xffff < (ulonglong)uVar10) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_1400a4229;
    }
    *(uint *)(lVar5 + 0x200020) = uVar10 + 1;
    pauVar20 = (undefined1 (*) [16])(lVar5 + (ulonglong)uVar10 * 0x20 + 0x20);
    uVar23 = rdtsc();
    in_ZMM7 = ZEXT864(uVar23 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar23));
  }
  (*(code *)(*param_1[0x41])[10])();
  plVar19 = local_4240;
  pppppppuVar29 = param_1 + 2;
  iVar4 = *(int *)(param_1 + 0x22);
  fVar30 = auVar31._0_4_;
  if (*(int *)((longlong)param_1 + 0x114) == 0 && iVar4 == 0) {
    if ((0.0 < fVar30) && (param_1[0x9e] != (undefined8 ******)0x0)) goto LAB_1400a4278;
  }
  else if (0.0 < fVar30) {
LAB_1400a4278:
    fVar30 = fVar30 / (float)(int)param_3;
    auVar32 = ZEXT1664(CONCAT124(auVar31._4_12_,fVar30));
    auVar33._0_12_ = ZEXT812(0);
    auVar33._12_4_ = 0;
    if (0.0 < *(float *)(param_1 + 0xa4)) {
      auVar33._0_4_ = fVar30 / *(float *)(param_1 + 0xa4);
      auVar33._4_12_ = auVar31._4_12_;
    }
    auVar31 = ZEXT1664(auVar33);
    local_4248 = (ulonglong *)(lVar17 + 0x170);
    *(float *)(param_1 + 0xa4) = fVar30;
    local_4210 = pppppppuVar29;
    local_4168 = pauVar20;
    FUN_1403755f0(&local_4108,local_4240);
    local_40f8 = param_5;
    local_4108 = param_1;
    local_40f0 = (longlong *)(**(code **)(*param_5 + 0x18))(param_5);
    local_4208 = param_1 + 0x7e;
    local_40e8 = auVar32._0_4_;
    local_40e4 = auVar31._0_4_;
    local_40c8 = local_4208;
    FUN_1400a7050(local_40c0,(longlong)(int)param_3);
    local_40d0 = (**(code **)(*plVar19 + 8))(plVar19,*(int *)(param_1 + 0x4c) << 3);
    local_4218 = param_1 + 0x94;
    iVar9 = _Mtx_trylock();
    if (iVar9 != 0) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x169) == '\0') {
        __dyn_tls_on_demand_init();
        uVar23 = *local_4248;
        if (uVar23 != 0) goto LAB_1400a44a8;
LAB_1400a44f9:
        pauVar20 = (undefined1 (*) [16])0x0;
      }
      else {
        uVar23 = *local_4248;
        if (uVar23 == 0) goto LAB_1400a44f9;
LAB_1400a44a8:
        uVar10 = *(uint *)(uVar23 + 0x200020);
        if (0xffff < (ulonglong)uVar10) {
          if (DAT_14151fc10 == '\0') {
            DAT_14151fc10 = '\x01';
            (*(code *)PTR_vfunction4_1414f67c8)
                      ("ProfileMeasurement: Too many samples, some data will be lost!");
          }
          goto LAB_1400a44f9;
        }
        *(uint *)(uVar23 + 0x200020) = uVar10 + 1;
        pauVar20 = (undefined1 (*) [16])(uVar23 + (ulonglong)uVar10 * 0x20 + 0x20);
        uVar28 = rdtsc();
        auVar32 = ZEXT864(uVar28 & 0xffffffff00000000 | CONCAT44((int)(uVar23 >> 0x20),(int)uVar28))
        ;
      }
      uVar12 = _Mtx_lock(local_4218);
      if ((int)uVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(5);
      }
      if (*(int *)((longlong)param_1 + 0x4ec) == 0x7fffffff) {
        *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(6);
      }
      if (pauVar20 != (undefined1 (*) [16])0x0) {
        uVar23 = rdtsc();
        auVar8 = vpinsrq_avx(auVar32._0_16_,
                             uVar23 & 0xffffffff00000000 |
                             CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar23),1);
        auVar33 = vpinsrd_avx(SUB6416(ZEXT864(0x141344f0a),0),0xff00ffff,2);
        auVar33 = vmovntdq_avx(auVar33);
        *pauVar20 = auVar33;
        auVar33 = vmovntdq_avx(auVar8);
        pauVar20[1] = auVar33;
      }
    }
    profilemeasurement_too_many_samples_some_data(local_4210);
    (*(code *)(*param_1[0x41])[0xb])();
    uVar10 = (**(code **)(*local_40f8 + 8))();
    uVar23 = 0x20;
    if ((int)uVar10 < 0x20) {
      uVar23 = (ulonglong)uVar10;
    }
    ppppppuVar6 = param_1[0x9e];
    uVar22 = (uint)uVar23;
    if (ppppppuVar6 == (undefined8 ******)0x0) {
      local_42a4 = 0;
    }
    else {
      uVar28 = (longlong)
               ((ulonglong)(uint)((int)ppppppuVar6 >> 0x1f) << 0x20 |
               (ulonglong)ppppppuVar6 & 0xffffffff) / (longlong)*(int *)((longlong)param_1 + 0x264);
      uVar11 = (uint)((longlong)
                      ((ulonglong)(uint)((int)uVar28 >> 0x1f) << 0x20 | uVar28 & 0xffffffff) /
                     (longlong)*(int *)(param_1 + 0x4d));
      if ((int)uVar22 < (int)uVar11) {
        uVar11 = uVar22;
      }
      local_42a4 = 1;
      if (1 < (int)uVar11) {
        local_42a4 = uVar11;
      }
    }
    iVar9 = iVar4 + 0x7e;
    if (-1 < iVar4 + 0x3f) {
      iVar9 = iVar4 + 0x3f;
    }
    uVar15 = uVar22 - 2;
    uVar25 = iVar9 >> 6;
    uVar11 = uVar25;
    if ((int)uVar15 < (int)uVar25) {
      uVar11 = uVar15;
    }
    if ((int)uVar11 < 2) {
      uVar11 = 1;
    }
    local_4260 = (ulonglong)uVar11;
    iVar9 = *(int *)(param_1 + 0x71);
    iVar27 = iVar9 + 0x7e;
    if (-1 < iVar9 + 0x3f) {
      iVar27 = iVar9 + 0x3f;
    }
    uVar11 = iVar27 >> 6;
    if ((int)uVar15 < iVar27 >> 6) {
      uVar11 = uVar15;
    }
    if ((int)uVar11 < 2) {
      uVar11 = 1;
    }
    local_4270 = (ulonglong)uVar11;
    iVar27 = iVar9 + 0x1fe;
    if (-1 < iVar9 + 0xff) {
      iVar27 = iVar9 + 0xff;
    }
    uVar11 = iVar27 >> 8;
    if ((int)uVar22 < iVar27 >> 8) {
      uVar11 = uVar22;
    }
    if ((int)uVar11 < 2) {
      uVar11 = 1;
    }
    local_4268 = (ulonglong)uVar11;
    iVar9 = iVar4 + 0x1e;
    if (-1 < iVar4 + 0xf) {
      iVar9 = iVar4 + 0xf;
    }
    uVar15 = (uVar10 != 1) + 1;
    uVar11 = iVar9 >> 4;
    if ((int)uVar22 < iVar9 >> 4) {
      uVar11 = uVar22;
    }
    if ((int)uVar11 < (int)uVar15) {
      uVar11 = uVar15;
    }
    local_4250 = (ulonglong)uVar11;
    if ((int)uVar22 < (int)uVar25) {
      uVar25 = uVar22;
    }
    if ((int)uVar25 < 2) {
      uVar25 = 1;
    }
    local_4258 = (ulonglong)uVar25;
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
      __dyn_tls_on_demand_init();
      uVar28 = *local_4248;
      if (uVar28 != 0) goto LAB_1400a46e2;
LAB_1400a473f:
      local_4278 = (undefined1 (*) [16])0x0;
    }
    else {
      uVar28 = *local_4248;
      if (uVar28 == 0) goto LAB_1400a473f;
LAB_1400a46e2:
      uVar11 = *(uint *)(uVar28 + 0x200020);
      if (0xffff < (ulonglong)uVar11) {
        if (DAT_14151fc10 == '\0') {
          DAT_14151fc10 = '\x01';
          uVar28 = (*(code *)PTR_vfunction4_1414f67c8)
                             ("ProfileMeasurement: Too many samples, some data will be lost!");
        }
        goto LAB_1400a473f;
      }
      *(uint *)(uVar28 + 0x200020) = uVar11 + 1;
      local_4278 = (undefined1 (*) [16])(uVar28 + (ulonglong)uVar11 * 0x20 + 0x20);
      uVar26 = rdtsc();
      uVar28 = CONCAT44((int)((ulonglong)local_4278 >> 0x20),(int)uVar26);
      auVar32 = ZEXT864(uVar26 & 0xffffffff00000000 | uVar28);
    }
    uVar14 = (undefined4)(uVar28 >> 0x20);
    if (0 < (int)param_3) {
      local_4158 = param_1 + 0x71;
      local_41b8 = (ulonglong)(param_3 - 1);
      local_4288 = (int)local_4250 + 2;
      local_4224 = (1 << (sbyte)local_4250) + -1;
      local_41f8 = local_4250 & 0xffffffff;
      local_4128 = local_41f8 * 8 + 8;
      local_427c = (int)local_4270 + 1;
      local_421c = (int)local_4270 + 1 + (int)local_4260;
      local_4160 = param_1 + 0x57;
      local_4170 = local_4260 & 0xffffffff;
      local_4130 = local_4170 * 8 + 8;
      local_4178 = local_4268 & 0xffffffff;
      local_4138 = local_4178 * 8 + 8;
      local_4180 = local_4270 & 0xffffffff;
      local_4140 = local_4180 * 8 + 8;
      local_4190 = (ulonglong)local_42a4;
      local_4148 = local_4190 * 8 + 8;
      local_4200 = uVar23 * 8 + 8;
      local_4220 = (int)local_4268 + 2;
      local_4228 = uVar22 + 2;
      local_4188 = local_4258 & 0xffffffff;
      local_4150 = local_4188 * 8 + 8;
      local_422c = (int)local_4258 + 1;
      local_41c0 = 0x1528;
      local_41c8 = 0x1420;
      local_41d0 = 0x1638;
      local_41d8 = 0x1318;
      local_41e8 = 0x1210;
      local_41f0 = 0x1758;
      local_41e0 = 0x1868;
      lVar17 = 0x1980;
      uVar28 = 0;
      local_4298 = uVar23;
      local_4290 = uVar23;
      local_4284 = uVar10;
      local_41b0 = param_1;
      local_4120 = (ulonglong)param_3;
      do {
        lVar7 = local_40a8;
        pppppppuVar29 = local_41b0;
        lVar18 = uVar28 * 0x1cb0;
        *(bool *)(local_40a8 + 8 + lVar18) = uVar28 == 0;
        local_4080 = &local_4108;
        *(undefined8 ********)(local_40a8 + lVar18) = local_4080;
        *(bool *)(local_40a8 + 9 + lVar18) = uVar28 == local_41b8;
        lVar5 = local_40a8 + lVar18;
        local_4088 = (undefined8 ******)&PTR_LAB_140de2fd0;
        local_42b0 = local_4288;
        local_42b8 = &local_4088;
        local_4118 = lVar17;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"UpdateBroadPhaseFinalize",DAT_14151f560)
        ;
        local_42a0 = lVar7;
        lVar17 = *(longlong *)(lVar7 + 0x1628 + lVar18);
        local_41a8 = lVar18;
        if (lVar17 == local_4110) {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(lVar17 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1628) = local_4110;
          local_4110 = 0;
        }
        uVar23 = local_4298;
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        local_4088 = (undefined8 ******)&PTR_LAB_140de3000;
        local_4080 = &local_4108;
        local_42b0 = (uint)(uVar28 != 0);
        local_42b8 = &local_4088;
        local_4280 = local_42b0;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"UpdateBroadPhasePrepare",DAT_14151f564);
        lVar17 = *(longlong *)(lVar5 + 0x1200);
        if (lVar17 == local_4110) {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(lVar17 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1200) = local_4110;
          local_4110 = 0;
        }
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        uVar10 = (uint)uVar23;
        if (*(uint *)(lVar5 + 0x1b4) < uVar10) {
          puVar13 = (undefined4 *)(lVar5 + ((ulonglong)*(uint *)(lVar5 + 0x1b4) * 0x10 + 0x37) * 8);
          do {
            *puVar13 = 0;
            puVar13[0x10] = 0;
            puVar13 = puVar13 + 0x20;
          } while (puVar13 < (undefined4 *)(lVar5 + (local_4290 * 0x10 + 0x37) * 8));
        }
        *(uint *)(lVar5 + 0x1b4) = uVar10;
        *(int *)(lVar5 + 0x11b8) = *(int *)(pppppppuVar29 + 0x4c) / (int)uVar10;
        *(int *)(lVar5 + 0x11bc) = local_4224;
        puVar3 = (uint *)(lVar5 + 0x1520);
        local_4198 = lVar5 + 0x1528;
        uVar23 = (ulonglong)*(uint *)(lVar5 + 0x1520);
        local_4238 = uVar28;
        if (*(uint *)(lVar5 + 0x1520) < (uint)local_4250) {
          puVar24 = (uint *)(local_4128 + (longlong)puVar3);
          if ((uint *)(local_4128 + (longlong)puVar3) < puVar3 + uVar23 * 2 + 4) {
            puVar24 = puVar3 + uVar23 * 2 + 4;
          }
          memset((void *)(local_4198 + uVar23 * 8),0,
                 ((longlong)puVar24 + (-9 - (longlong)(puVar3 + uVar23 * 2)) & 0xfffffffffffffff8U)
                 + 8);
          uVar23 = (ulonglong)*puVar3;
        }
        if ((uint)local_4250 < (uint)uVar23) {
          plVar16 = (longlong *)(lVar5 + (local_41f8 + 0x2a5) * 8);
          plVar19 = (longlong *)(local_4198 + uVar23 * 8);
          do {
            lVar17 = *plVar16;
            if (lVar17 != 0) {
              LOCK();
              piVar1 = (int *)(lVar17 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
              }
            }
            plVar16 = plVar16 + 1;
          } while (plVar16 < plVar19);
        }
        uVar23 = local_41f8;
        *puVar3 = (uint)local_4250;
        lVar17 = local_42a0 + local_41c0;
        uVar28 = 0;
        do {
          local_42b0 = local_421c + (uint)(uVar28 == 0);
          local_4088 = (undefined8 ******)&PTR_LAB_140de3030;
          local_4078 = CONCAT44(local_4078._4_4_,(int)uVar28);
          local_42b8 = &local_4088;
          local_4080 = (undefined8 *******)lVar5;
          local_4050 = &local_4088;
          (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"FindCollisions",DAT_14151f568);
          lVar7 = *(longlong *)(lVar17 + uVar28 * 8);
          if (lVar7 == local_4110) {
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(local_4110 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                          (*(longlong **)(local_4110 + 0x10),local_4110);
              }
            }
          }
          else {
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(lVar7 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))();
              }
            }
            *(longlong *)(lVar17 + uVar28 * 8) = local_4110;
            local_4110 = 0;
          }
          if (local_4050 != (undefined8 *******)0x0) {
            (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
          }
          uVar28 = uVar28 + 1;
        } while (uVar23 != uVar28);
        if (local_4238 == 0) {
          *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(pppppppuVar29 + 0x22);
          profilemeasurement_too_many_samples_some_data(local_4158);
          local_40d8 = (**(code **)(*local_4240 + 8))
                                 (local_4240,*(int *)(pppppppuVar29 + 0x71) << 3);
          FUN_1400ce640(local_4160,&local_4108);
          void_jph_islandbuilder_preparecontactconstrai
                    (local_4208,*(undefined4 *)(pppppppuVar29 + 0x6e),local_4100);
        }
        puVar3 = (uint *)(lVar5 + 0x1418);
        uVar23 = (ulonglong)*(uint *)(lVar5 + 0x1418);
        if (*(uint *)(lVar5 + 0x1418) < (uint)local_4260) {
          puVar24 = (uint *)(local_4130 + (longlong)puVar3);
          if ((uint *)(local_4130 + (longlong)puVar3) < puVar3 + uVar23 * 2 + 4) {
            puVar24 = puVar3 + uVar23 * 2 + 4;
          }
          memset((void *)(lVar5 + (uVar23 + 0x284) * 8),0,
                 ((longlong)puVar24 + (-9 - (longlong)(puVar3 + uVar23 * 2)) & 0xfffffffffffffff8U)
                 + 8);
          uVar23 = (ulonglong)*puVar3;
        }
        if ((uint)local_4260 < (uint)uVar23) {
          plVar19 = (longlong *)(lVar5 + (local_4170 + 0x284) * 8);
          do {
            lVar17 = *plVar19;
            if (lVar17 != 0) {
              LOCK();
              piVar1 = (int *)(lVar17 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
              }
            }
            plVar19 = plVar19 + 1;
          } while (plVar19 < (longlong *)(lVar5 + (uVar23 + 0x284) * 8));
        }
        *puVar3 = (uint)local_4260;
        uVar10 = local_42a4;
        if (local_42a4 == 0) {
          uVar10 = local_4280;
        }
        lVar17 = local_42a0 + local_41c8;
        uVar23 = 0;
        do {
          local_4088 = (undefined8 ******)&PTR_LAB_140de3060;
          local_42b8 = &local_4088;
          local_42b0 = uVar10;
          local_4080 = &local_4108;
          local_4078 = lVar5;
          local_4050 = &local_4088;
          (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"ApplyGravity",DAT_14151f56c);
          lVar7 = *(longlong *)(lVar17 + uVar23 * 8);
          if (lVar7 == local_4110) {
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(local_4110 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                          (*(longlong **)(local_4110 + 0x10),local_4110);
              }
            }
          }
          else {
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(lVar7 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))();
              }
            }
            *(longlong *)(lVar17 + uVar23 * 8) = local_4110;
            local_4110 = 0;
          }
          if (local_4050 != (undefined8 *******)0x0) {
            (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
          }
          uVar23 = uVar23 + 1;
        } while (local_4170 != uVar23);
        puVar3 = (uint *)(lVar5 + 0x1630);
        local_41a0 = lVar5 + 0x1638;
        uVar23 = (ulonglong)*(uint *)(lVar5 + 0x1630);
        if (*(uint *)(lVar5 + 0x1630) < (uint)local_4268) {
          puVar24 = (uint *)(local_4138 + (longlong)puVar3);
          if ((uint *)(local_4138 + (longlong)puVar3) < puVar3 + uVar23 * 2 + 4) {
            puVar24 = puVar3 + uVar23 * 2 + 4;
          }
          memset((void *)(local_41a0 + uVar23 * 8),0,
                 ((longlong)puVar24 + (-9 - (longlong)(puVar3 + uVar23 * 2)) & 0xfffffffffffffff8U)
                 + 8);
          uVar23 = (ulonglong)*puVar3;
        }
        if ((uint)local_4268 < (uint)uVar23) {
          plVar16 = (longlong *)(lVar5 + (local_4178 + 0x2c7) * 8);
          plVar19 = (longlong *)(local_41a0 + uVar23 * 8);
          do {
            lVar17 = *plVar16;
            if (lVar17 != 0) {
              LOCK();
              piVar1 = (int *)(lVar17 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
              }
            }
            plVar16 = plVar16 + 1;
          } while (plVar16 < plVar19);
        }
        *puVar3 = (uint)local_4268;
        lVar17 = local_42a0 + local_41d0;
        uVar23 = 0;
        do {
          local_4088 = (undefined8 ******)&PTR_LAB_140de3090;
          local_42b0 = local_427c;
          local_42b8 = &local_4088;
          local_4080 = &local_4108;
          local_4078 = lVar5;
          local_4050 = &local_4088;
          (**(code **)(*param_5 + 0x10))
                    (param_5,&local_4110,"SetupVelocityConstraints",DAT_14151f570);
          lVar7 = *(longlong *)(lVar17 + uVar23 * 8);
          if (lVar7 == local_4110) {
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(local_4110 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                          (*(longlong **)(local_4110 + 0x10),local_4110);
              }
            }
          }
          else {
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(lVar7 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))();
              }
            }
            *(longlong *)(lVar17 + uVar23 * 8) = local_4110;
            local_4110 = 0;
          }
          if (local_4050 != (undefined8 *******)0x0) {
            (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
          }
          uVar23 = uVar23 + 1;
        } while (local_4178 != uVar23);
        local_4088 = (undefined8 ******)&PTR_LAB_140de30c0;
        local_42b0 = local_427c;
        local_42b8 = &local_4088;
        local_4080 = &local_4108;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))
                  (param_5,&local_4110,"BuildIslandsFromConstraints",DAT_14151f574);
        lVar17 = *(longlong *)(lVar5 + 0x1738);
        if (lVar17 == local_4110) {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(lVar17 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1738) = local_4110;
          local_4110 = 0;
        }
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        puVar3 = (uint *)(lVar5 + 0x1310);
        uVar23 = (ulonglong)*(uint *)(lVar5 + 0x1310);
        if (*(uint *)(lVar5 + 0x1310) < (uint)local_4270) {
          puVar24 = (uint *)(local_4140 + (longlong)puVar3);
          if ((uint *)(local_4140 + (longlong)puVar3) < puVar3 + uVar23 * 2 + 4) {
            puVar24 = puVar3 + uVar23 * 2 + 4;
          }
          memset((void *)(lVar5 + (uVar23 + 0x263) * 8),0,
                 ((longlong)puVar24 + (-9 - (longlong)(puVar3 + uVar23 * 2)) & 0xfffffffffffffff8U)
                 + 8);
          uVar23 = (ulonglong)*puVar3;
        }
        if ((uint)local_4270 < (uint)uVar23) {
          plVar19 = (longlong *)(lVar5 + (local_4180 + 0x263) * 8);
          do {
            lVar17 = *plVar19;
            if (lVar17 != 0) {
              LOCK();
              piVar1 = (int *)(lVar17 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
              }
            }
            plVar19 = plVar19 + 1;
          } while (plVar19 < (longlong *)(lVar5 + (uVar23 + 0x263) * 8));
        }
        pppppppuVar29 = local_41b0;
        *puVar3 = (uint)local_4270;
        lVar17 = local_42a0 + local_41d8;
        uVar23 = 0;
        do {
          local_4088 = (undefined8 ******)&PTR_LAB_140de30f0;
          local_4080 = &local_4108;
          local_42b8 = &local_4088;
          local_42b0 = uVar10;
          local_4078 = lVar5;
          local_4050 = &local_4088;
          (**(code **)(*param_5 + 0x10))
                    (param_5,&local_4110,"DetermineActiveConstraints",DAT_14151f578);
          lVar7 = *(longlong *)(lVar17 + uVar23 * 8);
          if (lVar7 == local_4110) {
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(local_4110 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                          (*(longlong **)(local_4110 + 0x10),local_4110);
              }
            }
          }
          else {
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(lVar7 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))();
              }
            }
            *(longlong *)(lVar17 + uVar23 * 8) = local_4110;
            local_4110 = 0;
          }
          if (local_4050 != (undefined8 *******)0x0) {
            (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
          }
          uVar23 = uVar23 + 1;
        } while (local_4180 != uVar23);
        puVar3 = (uint *)(lVar5 + 0x1208);
        uVar23 = (ulonglong)*(uint *)(lVar5 + 0x1208);
        if (*(uint *)(lVar5 + 0x1208) < local_42a4) {
          puVar24 = (uint *)(local_4148 + (longlong)puVar3);
          if ((uint *)(local_4148 + (longlong)puVar3) < puVar3 + uVar23 * 2 + 4) {
            puVar24 = puVar3 + uVar23 * 2 + 4;
          }
          memset((void *)(lVar5 + (uVar23 + 0x242) * 8),0,
                 ((longlong)puVar24 + (-9 - (longlong)(puVar3 + uVar23 * 2)) & 0xfffffffffffffff8U)
                 + 8);
          uVar23 = (ulonglong)*puVar3;
        }
        if (local_42a4 < (uint)uVar23) {
          plVar19 = (longlong *)(lVar5 + (local_4190 + 0x242) * 8);
          do {
            lVar17 = *plVar19;
            if (lVar17 != 0) {
              LOCK();
              piVar1 = (int *)(lVar17 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
              }
            }
            plVar19 = plVar19 + 1;
          } while (plVar19 < (longlong *)(lVar5 + (uVar23 + 0x242) * 8));
        }
        *puVar3 = local_42a4;
        if (local_42a4 != 0) {
          lVar17 = local_42a0 + local_41e8;
          uVar23 = 0;
          do {
            local_4088 = (undefined8 ******)&PTR_LAB_140de3120;
            local_4080 = &local_4108;
            local_42b0 = local_4280;
            local_42b8 = &local_4088;
            local_4078 = lVar5;
            local_4050 = &local_4088;
            (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"StepListeners",DAT_14151f5a8);
            lVar7 = *(longlong *)(lVar17 + uVar23 * 8);
            if (lVar7 == local_4110) {
              if (lVar7 != 0) {
                LOCK();
                piVar1 = (int *)(local_4110 + 0x60);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                            (*(longlong **)(local_4110 + 0x10),local_4110);
                }
              }
            }
            else {
              if (lVar7 != 0) {
                LOCK();
                piVar1 = (int *)(lVar7 + 0x60);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))();
                }
              }
              *(longlong *)(lVar17 + uVar23 * 8) = local_4110;
              local_4110 = 0;
            }
            if (local_4050 != (undefined8 *******)0x0) {
              (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
            }
            uVar23 = uVar23 + 1;
          } while (local_4190 != uVar23);
        }
        uVar23 = local_4238;
        if (local_4238 != 0) {
          lVar17 = *(longlong *)(local_40a8 + -8 + local_41a8);
          LOCK();
          piVar1 = (int *)(lVar17 + 100);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x30))();
          }
        }
        local_4088 = (undefined8 ******)&PTR_LAB_140de3150;
        local_4080 = &local_4108;
        local_42b0 = local_4288;
        local_42b8 = &local_4088;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"FinalizeIslands",DAT_14151f57c);
        uVar28 = local_4298;
        lVar17 = *(longlong *)(lVar5 + 0x1740);
        if (lVar17 == local_4110) {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(lVar17 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1740) = local_4110;
          local_4110 = 0;
        }
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        lVar17 = *(longlong *)(lVar5 + 0x1738);
        LOCK();
        piVar1 = (int *)(lVar17 + 100);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x30))();
        }
        local_4088 = (undefined8 ******)&PTR_LAB_140de3180;
        local_4080 = &local_4108;
        local_42b0 = 1;
        local_42b8 = &local_4088;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"ContactRemovedCallbacks",DAT_14151f580);
        lVar17 = *(longlong *)(lVar5 + 0x1a80);
        if (lVar17 == local_4110) {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(lVar17 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1a80) = local_4110;
          local_4110 = 0;
        }
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        local_4088 = (undefined8 ******)&PTR_LAB_140de31b0;
        local_4080 = &local_4108;
        local_42b0 = 2;
        local_42b8 = &local_4088;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"BodySetIslandIndex",DAT_14151f584);
        lVar17 = *(longlong *)(lVar5 + 0x1748);
        if (lVar17 == local_4110) {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(lVar17 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1748) = local_4110;
          local_4110 = 0;
        }
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        if (uVar23 != local_41b8) {
          local_4078 = local_40a8 + local_41a8 + 0x1cb0;
          local_4088 = (undefined8 ******)&PTR_LAB_140de31e0;
          local_4080 = pppppppuVar29;
          local_42b0 = 3;
          local_42b8 = &local_4088;
          local_4050 = &local_4088;
          (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"StartNextStep",DAT_14151f588);
          lVar17 = *(longlong *)(lVar5 + 0x1ca8);
          if (lVar17 == local_4110) {
            if (lVar17 != 0) {
              LOCK();
              piVar1 = (int *)(local_4110 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                          (*(longlong **)(local_4110 + 0x10),local_4110);
              }
            }
          }
          else {
            if (lVar17 != 0) {
              LOCK();
              piVar1 = (int *)(lVar17 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
              }
            }
            *(longlong *)(lVar5 + 0x1ca8) = local_4110;
            local_4110 = 0;
          }
          if (local_4050 != (undefined8 *******)0x0) {
            (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
          }
        }
        puVar3 = (uint *)(lVar5 + 0x1750);
        lVar17 = lVar5 + 0x1758;
        uVar10 = *(uint *)(lVar5 + 0x1750);
        uVar23 = (ulonglong)uVar10;
        if (uVar10 < (uint)uVar28) {
          puVar24 = (uint *)(local_4200 + (longlong)puVar3);
          if ((uint *)(local_4200 + (longlong)puVar3) < puVar3 + uVar23 * 2 + 4) {
            puVar24 = puVar3 + uVar23 * 2 + 4;
          }
          memset((void *)(lVar17 + uVar23 * 8),0,
                 ((longlong)puVar24 + (-9 - (longlong)(puVar3 + uVar23 * 2)) & 0xfffffffffffffff8U)
                 + 8);
          uVar10 = *puVar3;
          uVar23 = (ulonglong)uVar10;
        }
        if ((uint)uVar28 < uVar10) {
          plVar19 = (longlong *)(lVar5 + (local_4290 + 0x2eb) * 8);
          do {
            lVar7 = *plVar19;
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(lVar7 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))();
              }
            }
            plVar19 = plVar19 + 1;
          } while (plVar19 < (longlong *)(lVar17 + uVar23 * 8));
        }
        *puVar3 = (uint)local_4298;
        if (0 < (int)local_4284) {
          lVar7 = local_42a0 + local_41f0;
          uVar23 = 0;
          do {
            local_4088 = (undefined8 ******)&PTR_LAB_140de3210;
            local_42b0 = local_4220;
            local_42b8 = &local_4088;
            local_4080 = &local_4108;
            local_4078 = lVar5;
            local_4050 = &local_4088;
            (**(code **)(*param_5 + 0x10))
                      (param_5,&local_4110,"SolveVelocityConstraints",DAT_14151f58c);
            lVar18 = *(longlong *)(lVar7 + uVar23 * 8);
            if (lVar18 == local_4110) {
              if (lVar18 != 0) {
                LOCK();
                piVar1 = (int *)(local_4110 + 0x60);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                            (*(longlong **)(local_4110 + 0x10),local_4110);
                }
              }
            }
            else {
              if (lVar18 != 0) {
                LOCK();
                piVar1 = (int *)(lVar18 + 0x60);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x40))();
                }
              }
              *(longlong *)(lVar7 + uVar23 * 8) = local_4110;
              local_4110 = 0;
            }
            if (local_4050 != (undefined8 *******)0x0) {
              (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
            }
            uVar23 = uVar23 + 1;
          } while (local_4290 != uVar23);
        }
        static_void_jph_jobsystem_jobhandle_sremovede(local_41a0,*(undefined4 *)(lVar5 + 0x1630),1);
        static_void_jph_jobsystem_jobhandle_sremovede(local_4198,*(undefined4 *)(lVar5 + 0x1520),1);
        lVar7 = *(longlong *)(lVar5 + 0x1740);
        LOCK();
        piVar1 = (int *)(lVar7 + 100);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x30))();
        }
        local_4088 = (undefined8 ******)&PTR_LAB_140de3240;
        local_42b0 = local_4228;
        local_42b8 = &local_4088;
        local_4080 = &local_4108;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"PreIntegrateVelocity",DAT_14151f590);
        lVar7 = *(longlong *)(lVar5 + 0x1858);
        if (lVar7 == local_4110) {
          if (lVar7 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar7 != 0) {
            LOCK();
            piVar1 = (int *)(lVar7 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1858) = local_4110;
          local_4110 = 0;
        }
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        lVar7 = *(longlong *)(lVar5 + 0x1628);
        LOCK();
        piVar1 = (int *)(lVar7 + 100);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x30))();
        }
        static_void_jph_jobsystem_jobhandle_sremovede(lVar17,*(undefined4 *)(lVar5 + 0x1750),1);
        puVar3 = (uint *)(lVar5 + 0x1860);
        lVar17 = lVar5 + 0x1868;
        uVar23 = (ulonglong)*(uint *)(lVar5 + 0x1860);
        if (*(uint *)(lVar5 + 0x1860) < (uint)local_4258) {
          puVar24 = (uint *)(local_4150 + (longlong)puVar3);
          if ((uint *)(local_4150 + (longlong)puVar3) < puVar3 + uVar23 * 2 + 4) {
            puVar24 = puVar3 + uVar23 * 2 + 4;
          }
          memset((void *)(lVar17 + uVar23 * 8),0,
                 ((longlong)puVar24 + (-9 - (longlong)(puVar3 + uVar23 * 2)) & 0xfffffffffffffff8U)
                 + 8);
          uVar23 = (ulonglong)*puVar3;
        }
        if ((uint)local_4258 < (uint)uVar23) {
          plVar19 = (longlong *)(lVar5 + (local_4188 + 0x30d) * 8);
          do {
            lVar7 = *plVar19;
            if (lVar7 != 0) {
              LOCK();
              piVar1 = (int *)(lVar7 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))();
              }
            }
            plVar19 = plVar19 + 1;
          } while (plVar19 < (longlong *)(lVar17 + uVar23 * 8));
        }
        *puVar3 = (uint)local_4258;
        lVar7 = local_42a0 + local_41e0;
        uVar23 = 0;
        do {
          local_4088 = (undefined8 ******)&PTR_LAB_140de3270;
          local_42b0 = 2;
          local_42b8 = &local_4088;
          local_4080 = &local_4108;
          local_4078 = lVar5;
          local_4050 = &local_4088;
          (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"IntegrateVelocity",DAT_14151f594);
          lVar18 = *(longlong *)(lVar7 + uVar23 * 8);
          if (lVar18 == local_4110) {
            if (lVar18 != 0) {
              LOCK();
              piVar1 = (int *)(local_4110 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                          (*(longlong **)(local_4110 + 0x10),local_4110);
              }
            }
          }
          else {
            if (lVar18 != 0) {
              LOCK();
              piVar1 = (int *)(lVar18 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x40))();
              }
            }
            *(longlong *)(lVar7 + uVar23 * 8) = local_4110;
            local_4110 = 0;
          }
          if (local_4050 != (undefined8 *******)0x0) {
            (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
          }
          uVar23 = uVar23 + 1;
        } while (local_4188 != uVar23);
        lVar7 = *(longlong *)(lVar5 + 0x1858);
        LOCK();
        piVar1 = (int *)(lVar7 + 100);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x30))();
        }
        local_4088 = (undefined8 ******)&PTR_LAB_140de32a0;
        local_42b0 = local_422c;
        local_42b8 = &local_4088;
        local_4080 = &local_4108;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"PostIntegrateVelocity",DAT_14151f598);
        uVar23 = local_4298;
        lVar7 = *(longlong *)(lVar5 + 0x1968);
        if (lVar7 == local_4110) {
          if (lVar7 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar7 != 0) {
            LOCK();
            piVar1 = (int *)(lVar7 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1968) = local_4110;
          local_4110 = 0;
        }
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        static_void_jph_jobsystem_jobhandle_sremovede(lVar17,*(undefined4 *)(lVar5 + 0x1860),1);
        local_4088 = (undefined8 ******)&PTR_LAB_140de32d0;
        local_42b0 = 2;
        local_42b8 = &local_4088;
        local_4080 = &local_4108;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"ResolveCCDContacts",DAT_14151f59c);
        lVar17 = *(longlong *)(lVar5 + 0x1970);
        if (lVar17 == local_4110) {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar17 != 0) {
            LOCK();
            piVar1 = (int *)(lVar17 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1970) = local_4110;
          local_4110 = 0;
        }
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        lVar17 = *(longlong *)(lVar5 + 0x1968);
        LOCK();
        piVar1 = (int *)(lVar17 + 100);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x30))();
        }
        puVar3 = (uint *)(lVar5 + 0x1978);
        lVar7 = lVar5 + 0x1980;
        uVar28 = (ulonglong)*(uint *)(lVar5 + 0x1978);
        if (*(uint *)(lVar5 + 0x1978) < (uint)uVar23) {
          puVar24 = (uint *)(local_4200 + (longlong)puVar3);
          if ((uint *)(local_4200 + (longlong)puVar3) < puVar3 + uVar28 * 2 + 4) {
            puVar24 = puVar3 + uVar28 * 2 + 4;
          }
          memset((void *)(lVar7 + uVar28 * 8),0,
                 ((longlong)puVar24 + (-9 - (longlong)(puVar3 + uVar28 * 2)) & 0xfffffffffffffff8U)
                 + 8);
          uVar28 = (ulonglong)*puVar3;
        }
        if ((uint)uVar23 < (uint)uVar28) {
          plVar19 = (longlong *)(lVar5 + (local_4290 + 0x330) * 8);
          do {
            lVar17 = *plVar19;
            if (lVar17 != 0) {
              LOCK();
              piVar1 = (int *)(lVar17 + 0x60);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x40))();
              }
            }
            plVar19 = plVar19 + 1;
          } while (plVar19 < (longlong *)(lVar7 + uVar28 * 8));
        }
        lVar17 = local_4118;
        *puVar3 = (uint)local_4298;
        if (0 < (int)local_4284) {
          local_42a0 = local_42a0 + local_4118;
          uVar23 = 0;
          do {
            local_4088 = (undefined8 ******)&PTR_LAB_140de3300;
            local_4080 = &local_4108;
            local_42b0 = 3;
            local_42b8 = &local_4088;
            local_4078 = lVar5;
            local_4050 = &local_4088;
            (**(code **)(*param_5 + 0x10))
                      (param_5,&local_4110,"SolvePositionConstraints",DAT_14151f5a0);
            lVar18 = *(longlong *)(local_42a0 + uVar23 * 8);
            if (lVar18 == local_4110) {
              if (lVar18 != 0) {
                LOCK();
                piVar1 = (int *)(local_4110 + 0x60);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                            (*(longlong **)(local_4110 + 0x10),local_4110);
                }
              }
            }
            else {
              if (lVar18 != 0) {
                LOCK();
                piVar1 = (int *)(lVar18 + 0x60);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x40))();
                }
              }
              *(longlong *)(local_42a0 + uVar23 * 8) = local_4110;
              local_4110 = 0;
            }
            if (local_4050 != (undefined8 *******)0x0) {
              (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
            }
            uVar23 = uVar23 + 1;
          } while (local_4290 != uVar23);
        }
        lVar18 = *(longlong *)(lVar5 + 0x1970);
        LOCK();
        piVar1 = (int *)(lVar18 + 100);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x30))();
        }
        uVar23 = local_4298;
        lVar18 = *(longlong *)(lVar5 + 0x1748);
        LOCK();
        piVar1 = (int *)(lVar18 + 100);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x30))();
        }
        local_4088 = (undefined8 ******)&PTR_LAB_140de3330;
        local_4080 = &local_4108;
        local_42b0 = (uint)uVar23;
        local_42b8 = &local_4088;
        local_4078 = lVar5;
        local_4050 = &local_4088;
        (**(code **)(*param_5 + 0x10))(param_5,&local_4110,"SoftBodyPrepare",DAT_14151f5ac);
        lVar18 = *(longlong *)(lVar5 + 0x1a88);
        if (lVar18 == local_4110) {
          if (lVar18 != 0) {
            LOCK();
            piVar1 = (int *)(local_4110 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_4110 + 0x10) + 0x40))
                        (*(longlong **)(local_4110 + 0x10),local_4110);
            }
          }
        }
        else {
          if (lVar18 != 0) {
            LOCK();
            piVar1 = (int *)(lVar18 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar18 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(lVar5 + 0x1a88) = local_4110;
          local_4110 = 0;
        }
        if (local_4050 != (undefined8 *******)0x0) {
          (*(code *)(*local_4050)[4])(local_4050,local_4050 != &local_4088);
        }
        uVar12 = static_void_jph_jobsystem_jobhandle_sremovede(lVar7,*puVar3,1);
        uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
        uVar28 = local_4238 + 1;
        local_41c0 = local_41c0 + 0x1cb0;
        local_41c8 = local_41c8 + 0x1cb0;
        local_41d0 = local_41d0 + 0x1cb0;
        local_41d8 = local_41d8 + 0x1cb0;
        local_41e8 = local_41e8 + 0x1cb0;
        local_41f0 = local_41f0 + 0x1cb0;
        local_41e0 = local_41e0 + 0x1cb0;
        lVar17 = lVar17 + 0x1cb0;
        param_1 = local_41b0;
      } while (uVar28 != local_4120);
    }
    plVar19 = local_40f0;
    if (local_4278 != (undefined1 (*) [16])0x0) {
      uVar23 = rdtsc();
      auVar8 = vpinsrq_avx(auVar32._0_16_,uVar23 & 0xffffffff00000000 | CONCAT44(uVar14,(int)uVar23)
                           ,1);
      auVar33 = vmovntdq_avx(SUB6416(ZEXT864(0x141338a4b),0));
      *local_4278 = auVar33;
      auVar33 = vmovntdq_avx(auVar8);
      local_4278[1] = auVar33;
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar23 = *local_4248;
    if (uVar23 == 0) {
      pauVar20 = (undefined1 (*) [16])0x0;
    }
    else {
      uVar10 = *(uint *)(uVar23 + 0x200020);
      if ((ulonglong)uVar10 < 0x10000) {
        *(uint *)(uVar23 + 0x200020) = uVar10 + 1;
        pauVar20 = (undefined1 (*) [16])(uVar23 + (ulonglong)uVar10 * 0x20 + 0x20);
        uVar28 = rdtsc();
        auVar32 = ZEXT864(uVar28 & 0xffffffff00000000 | CONCAT44((int)(uVar23 >> 0x20),(int)uVar28))
        ;
      }
      else {
        if (DAT_14151fc10 == '\0') {
          DAT_14151fc10 = '\x01';
          (*(code *)PTR_vfunction4_1414f67c8)
                    ("ProfileMeasurement: Too many samples, some data will be lost!");
        }
        pauVar20 = (undefined1 (*) [16])0x0;
      }
    }
    local_4088 = (undefined8 ******)((ulonglong)local_4088 & 0xffffffff00000000);
    uVar10 = 0;
    if (local_40b8 != 0) {
      lVar17 = local_40b8 * 0x1cb0 + local_40a8;
      do {
        lVar5 = *(longlong *)(local_40a8 + 0x1200);
        if (lVar5 != 0) {
          uVar23 = (ulonglong)local_4088 & 0xffffffff;
          local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 1);
          (&local_4080)[uVar23] = (undefined8 *******)lVar5;
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        uVar23 = (ulonglong)*(uint *)(local_40a8 + 0x1208);
        if (uVar23 != 0) {
          plVar16 = (longlong *)(local_40a8 + 0x1210);
          uVar28 = uVar23 * 8 - 8;
          if ((uVar28 & 8) == 0) {
            uVar26 = (ulonglong)local_4088 & 0xffffffff;
            local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 1);
            lVar5 = *plVar16;
            (&local_4080)[uVar26] = (undefined8 *******)lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
              UNLOCK();
            }
            plVar16 = (longlong *)(local_40a8 + 0x1218);
          }
          if (uVar28 != 0) {
            do {
              uVar10 = (int)local_4088 + 1;
              lVar5 = *plVar16;
              (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 2);
              lVar5 = plVar16[1];
              (&local_4080)[uVar10] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              plVar16 = plVar16 + 2;
            } while (plVar16 != (longlong *)(local_40a8 + uVar23 * 8 + 0x1210));
          }
        }
        uVar23 = (ulonglong)*(uint *)(local_40a8 + 0x1310);
        if (uVar23 != 0) {
          plVar16 = (longlong *)(local_40a8 + 0x1318);
          uVar28 = uVar23 * 8 - 8;
          if ((uVar28 & 8) == 0) {
            uVar26 = (ulonglong)local_4088 & 0xffffffff;
            local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 1);
            lVar5 = *plVar16;
            (&local_4080)[uVar26] = (undefined8 *******)lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
              UNLOCK();
            }
            plVar16 = (longlong *)(local_40a8 + 0x1320);
          }
          if (uVar28 != 0) {
            do {
              uVar10 = (int)local_4088 + 1;
              lVar5 = *plVar16;
              (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 2);
              lVar5 = plVar16[1];
              (&local_4080)[uVar10] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              plVar16 = plVar16 + 2;
            } while (plVar16 != (longlong *)(local_40a8 + uVar23 * 8 + 0x1318));
          }
        }
        uVar23 = (ulonglong)*(uint *)(local_40a8 + 0x1418);
        if (uVar23 != 0) {
          plVar16 = (longlong *)(local_40a8 + 0x1420);
          uVar28 = uVar23 * 8 - 8;
          if ((uVar28 & 8) == 0) {
            uVar26 = (ulonglong)local_4088 & 0xffffffff;
            local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 1);
            lVar5 = *plVar16;
            (&local_4080)[uVar26] = (undefined8 *******)lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
              UNLOCK();
            }
            plVar16 = (longlong *)(local_40a8 + 0x1428);
          }
          if (uVar28 != 0) {
            do {
              uVar10 = (int)local_4088 + 1;
              lVar5 = *plVar16;
              (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 2);
              lVar5 = plVar16[1];
              (&local_4080)[uVar10] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              plVar16 = plVar16 + 2;
            } while (plVar16 != (longlong *)(local_40a8 + uVar23 * 8 + 0x1420));
          }
        }
        uVar23 = (ulonglong)*(uint *)(local_40a8 + 0x1520);
        if (uVar23 != 0) {
          plVar16 = (longlong *)(local_40a8 + 0x1528);
          uVar28 = uVar23 * 8 - 8;
          if ((uVar28 & 8) == 0) {
            uVar26 = (ulonglong)local_4088 & 0xffffffff;
            local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 1);
            lVar5 = *plVar16;
            (&local_4080)[uVar26] = (undefined8 *******)lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
              UNLOCK();
            }
            plVar16 = (longlong *)(local_40a8 + 0x1530);
          }
          if (uVar28 != 0) {
            do {
              uVar10 = (int)local_4088 + 1;
              lVar5 = *plVar16;
              (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 2);
              lVar5 = plVar16[1];
              (&local_4080)[uVar10] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              plVar16 = plVar16 + 2;
            } while (plVar16 != (longlong *)(local_40a8 + uVar23 * 8 + 0x1528));
          }
        }
        lVar5 = *(longlong *)(local_40a8 + 0x1628);
        if (lVar5 != 0) {
          uVar23 = (ulonglong)local_4088 & 0xffffffff;
          local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 1);
          (&local_4080)[uVar23] = (undefined8 *******)lVar5;
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        uVar23 = (ulonglong)*(uint *)(local_40a8 + 0x1630);
        if (uVar23 != 0) {
          plVar16 = (longlong *)(local_40a8 + 0x1638);
          uVar28 = uVar23 * 8 - 8;
          if ((uVar28 & 8) == 0) {
            uVar26 = (ulonglong)local_4088 & 0xffffffff;
            local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 1);
            lVar5 = *plVar16;
            (&local_4080)[uVar26] = (undefined8 *******)lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
              UNLOCK();
            }
            plVar16 = (longlong *)(local_40a8 + 0x1640);
          }
          if (uVar28 != 0) {
            do {
              uVar10 = (int)local_4088 + 1;
              lVar5 = *plVar16;
              (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 2);
              lVar5 = plVar16[1];
              (&local_4080)[uVar10] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              plVar16 = plVar16 + 2;
            } while (plVar16 != (longlong *)(local_40a8 + uVar23 * 8 + 0x1638));
          }
        }
        iVar4 = (int)local_4088;
        lVar5 = *(longlong *)(local_40a8 + 0x1738);
        (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        uVar10 = (int)local_4088 + 2;
        lVar5 = *(longlong *)(local_40a8 + 0x1740);
        (&local_4080)[(int)local_4088 + 1] = (undefined8 *******)lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        uVar22 = (int)local_4088 + 3;
        local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,uVar22);
        lVar5 = *(longlong *)(local_40a8 + 0x1748);
        (&local_4080)[uVar10] = (undefined8 *******)lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        uVar23 = (ulonglong)*(uint *)(local_40a8 + 0x1750);
        if (uVar23 != 0) {
          plVar16 = (longlong *)(local_40a8 + 0x1758);
          uVar28 = uVar23 * 8 - 8;
          if ((uVar28 & 8) == 0) {
            local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,iVar4 + 4);
            lVar5 = *plVar16;
            (&local_4080)[uVar22] = (undefined8 *******)lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
              UNLOCK();
            }
            plVar16 = (longlong *)(local_40a8 + 0x1760);
          }
          if (uVar28 != 0) {
            do {
              uVar10 = (int)local_4088 + 1;
              lVar5 = *plVar16;
              (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 2);
              lVar5 = plVar16[1];
              (&local_4080)[uVar10] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              plVar16 = plVar16 + 2;
            } while (plVar16 != (longlong *)(local_40a8 + uVar23 * 8 + 0x1758));
          }
        }
        iVar4 = (int)local_4088;
        uVar23 = (ulonglong)local_4088 & 0xffffffff;
        uVar10 = (int)local_4088 + 1;
        local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,uVar10);
        lVar5 = *(longlong *)(local_40a8 + 0x1858);
        (&local_4080)[uVar23] = (undefined8 *******)lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        uVar23 = (ulonglong)*(uint *)(local_40a8 + 0x1860);
        if (uVar23 != 0) {
          plVar16 = (longlong *)(local_40a8 + 0x1868);
          uVar28 = uVar23 * 8 - 8;
          if ((uVar28 & 8) == 0) {
            local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,iVar4 + 2);
            lVar5 = *plVar16;
            (&local_4080)[uVar10] = (undefined8 *******)lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
              UNLOCK();
            }
            plVar16 = (longlong *)(local_40a8 + 0x1870);
          }
          if (uVar28 != 0) {
            do {
              uVar10 = (int)local_4088 + 1;
              lVar5 = *plVar16;
              (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 2);
              lVar5 = plVar16[1];
              (&local_4080)[uVar10] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              plVar16 = plVar16 + 2;
            } while (plVar16 != (longlong *)(local_40a8 + uVar23 * 8 + 0x1868));
          }
        }
        iVar4 = (int)local_4088;
        uVar10 = (int)local_4088 + 1;
        lVar5 = *(longlong *)(local_40a8 + 0x1968);
        (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        uVar22 = (int)local_4088 + 2;
        local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,uVar22);
        lVar5 = *(longlong *)(local_40a8 + 0x1970);
        (&local_4080)[uVar10] = (undefined8 *******)lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        uVar23 = (ulonglong)*(uint *)(local_40a8 + 0x1978);
        if (uVar23 != 0) {
          plVar16 = (longlong *)(local_40a8 + 0x1980);
          uVar28 = uVar23 * 8 - 8;
          if ((uVar28 & 8) == 0) {
            local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,iVar4 + 3);
            lVar5 = *plVar16;
            (&local_4080)[uVar22] = (undefined8 *******)lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
              UNLOCK();
            }
            plVar16 = (longlong *)(local_40a8 + 0x1988);
          }
          if (uVar28 != 0) {
            do {
              uVar10 = (int)local_4088 + 1;
              lVar5 = *plVar16;
              (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,(int)local_4088 + 2);
              lVar5 = plVar16[1];
              (&local_4080)[uVar10] = (undefined8 *******)lVar5;
              if (lVar5 != 0) {
                LOCK();
                *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
                UNLOCK();
              }
              plVar16 = plVar16 + 2;
            } while (plVar16 != (longlong *)(local_40a8 + uVar23 * 8 + 0x1980));
          }
        }
        uVar10 = (int)local_4088 + 1;
        lVar5 = *(longlong *)(local_40a8 + 0x1a80);
        (&local_4080)[(ulonglong)local_4088 & 0xffffffff] = (undefined8 *******)lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        lVar5 = *(longlong *)(local_40a8 + 0x1a88);
        if (lVar5 != 0) {
          uVar23 = (ulonglong)uVar10;
          uVar10 = (int)local_4088 + 2;
          (&local_4080)[uVar23] = (undefined8 *******)lVar5;
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        lVar5 = *(longlong *)(local_40a8 + 0x1ca8);
        if (lVar5 != 0) {
          uVar23 = (ulonglong)uVar10;
          uVar10 = uVar10 + 1;
          (&local_4080)[uVar23] = (undefined8 *******)lVar5;
          LOCK();
          *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
          UNLOCK();
        }
        local_4088 = (undefined8 ******)CONCAT44(local_4088._4_4_,uVar10);
        local_40a8 = local_40a8 + 0x1cb0;
      } while (local_40a8 != lVar17);
    }
    (**(code **)(*plVar19 + 8))(plVar19,&local_4080,uVar10);
    auVar33 = auVar32._0_16_;
    uVar23 = (ulonglong)local_4088 & 0xffffffff;
    if (uVar23 != 0) {
      pppppppuVar21 = &local_4088 + uVar23;
      pppppppuVar29 = &local_4088;
      do {
        ppppppuVar6 = pppppppuVar29[1];
        if (ppppppuVar6 != (undefined8 ******)0x0) {
          LOCK();
          ppppppuVar2 = ppppppuVar6 + 0xc;
          *(int *)ppppppuVar2 = *(int *)ppppppuVar2 + -1;
          UNLOCK();
          if (*(int *)ppppppuVar2 == 0) {
            uVar23 = (*(code *)(*ppppppuVar6[2])[8])();
          }
        }
        auVar33 = auVar32._0_16_;
        pppppppuVar29 = pppppppuVar29 + 1;
      } while (pppppppuVar29 < pppppppuVar21);
    }
    if (pauVar20 != (undefined1 (*) [16])0x0) {
      uVar28 = rdtsc();
      auVar8 = vpinsrq_avx(auVar33,uVar28 & 0xffffffff00000000 |
                                   CONCAT44((int)(uVar23 >> 0x20),(int)uVar28),1);
      auVar33 = vmovntdq_avx(SUB6416(ZEXT864(0x14133ca2b),0));
      *pauVar20 = auVar33;
      auVar33 = vmovntdq_avx(auVar8);
      pauVar20[1] = auVar33;
    }
    (**(code **)(*param_5 + 0x28))(param_5,plVar19);
    (**(code **)(*param_5 + 0x20))(param_5,plVar19);
    plVar19 = local_4240;
    void_jph_largeislandsplitter_resettempallocat(param_1 + 0x8c,local_4240);
    void_jph_islandbuilder_resetislandstempalloca(local_4208,plVar19);
    FUN_1400e1a40(param_1 + 0x57);
    (**(code **)(*plVar19 + 0x10))(plVar19,local_40d8,*(int *)(param_1 + 0x71) << 3);
    local_40d8 = 0;
    (**(code **)(*plVar19 + 0x10))(plVar19,local_40d0,*(int *)(param_1 + 0x4c) << 3);
    local_40d0 = 0;
    (*(code *)(*param_1[0x41])[0xe])();
    _Mtx_unlock(param_1 + 0x74);
    void_jph_mutexarrayjph_sharedmutex_unlockall(local_4210);
    _Mtx_unlock(local_4218);
    FUN_140375630(&local_4108);
    auVar33 = in_ZMM7._0_16_;
    pauVar20 = local_4168;
    uVar14 = extraout_var_00;
    goto joined_r0x0001400a4421;
  }
  profilemeasurement_too_many_samples_some_data(pppppppuVar29);
  (*(code *)(*param_1[0x41])[0xb])();
  (*(code *)(*param_1[0x41])[0xc])(param_1[0x41],&local_4088);
  (*(code *)(*param_1[0x41])[0xd])(param_1[0x41],&local_4088);
  (*(code *)(*param_1[0x41])[0xe])();
  if (0.0 < auVar31._0_4_) {
    void_jph_contactconstraintmanager_finalizecon(param_1 + 0x57,0,0);
  }
  void_jph_mutexarrayjph_sharedmutex_unlockall(pppppppuVar29);
  auVar33 = in_ZMM7._0_16_;
  local_40e0 = 0;
  uVar14 = extraout_var;
joined_r0x0001400a4421:
  if (pauVar20 != (undefined1 (*) [16])0x0) {
    uVar23 = rdtsc();
    auVar8 = vpinsrq_avx(auVar33,uVar23 & 0xffffffff00000000 | CONCAT44(uVar14,(int)uVar23),1);
    auVar33 = vmovntdq_avx(SUB6416(ZEXT864(0x141398fb7),0));
    *pauVar20 = auVar33;
    auVar33 = vmovntdq_avx(auVar8);
    pauVar20[1] = auVar33;
  }
  if (DAT_1414ef3c0 == (local_80 ^ (ulonglong)auStack_42d8)) {
    return local_40e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_80 ^ (ulonglong)auStack_42d8);
}

