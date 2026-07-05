/**
 * Function: void_jph_physicssystem_jobsoftbodypreparephys
 * Address:  1400adbb0
 * Signature: undefined void_jph_physicssystem_jobsoftbodypreparephys(void)
 * Body size: 1728 bytes
 */


void void_jph_physicssystem_jobsoftbodypreparephys
               (longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong *plVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auVar15 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_108 [32];
  longlong *local_e8;
  uint local_e0;
  uint *local_d0;
  undefined1 (*local_c8) [16];
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  longlong *local_70;
  ulonglong local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170)
  ;
  if (lVar12 != 0) {
    uVar5 = *(uint *)(lVar12 + 0x200020);
    if ((ulonglong)uVar5 < 0x10000) {
      *(uint *)(lVar12 + 0x200020) = uVar5 + 1;
      local_c8 = (undefined1 (*) [16])(lVar12 + (ulonglong)uVar5 * 0x20 + 0x20);
      uVar9 = rdtsc();
      in_ZMM6 = ZEXT864(uVar9 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)local_c8 >> 0x20),(int)uVar9));
      goto LAB_1400adc85;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  local_c8 = (undefined1 (*) [16])0x0;
LAB_1400adc85:
  local_a8 = (undefined1  [16])0x0;
  local_98 = 0;
  void_jph_bodymanager_getactivebodiesebodytype(param_1 + 0x10,1,local_a8);
  local_d0 = (uint *)local_a8._0_8_;
  if ((uint *)local_a8._0_8_ == (uint *)0x0) {
    lVar12 = *(longlong *)(param_3 + 0x1ca8);
    uVar7 = 0;
    if (lVar12 != 0) {
      LOCK();
      piVar1 = (int *)(lVar12 + 100);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x30))();
        uVar7 = extraout_var_00;
      }
    }
  }
  else {
    FUN_1400b2300(local_98,local_98 + local_a8._0_8_ * 4);
    *(undefined4 *)(param_2 + 0x68) = local_a8._0_4_;
    plVar6 = (longlong *)
             (**(code **)(**(longlong **)(param_2 + 8) + 8))
                       (*(longlong **)(param_2 + 8),local_a8._0_4_ * 0xd0);
    *(longlong **)(param_2 + 0x70) = plVar6;
    uVar7 = 0;
    if ((ulonglong)*(uint *)(param_2 + 0x68) != 0) {
      plVar11 = plVar6 + (ulonglong)*(uint *)(param_2 + 0x68) * 0x1a;
      plVar14 = plVar6;
      do {
        plVar14[0x11] = 0;
        plVar14[0x12] = 0;
        plVar14[0x13] = 0;
        plVar14[0x14] = 0;
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        local_e8 = plVar14;
        void_jph_softbodymotionproperties_initializeu
                  (*(undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x20) +
                      (ulonglong)
                      (*(uint *)(local_98 +
                                ((longlong)plVar6 - *(longlong *)(param_2 + 0x70) >> 2) *
                                0x4ec4ec4ec4ec4ec5) & 0x7fffff) * 8) + 0x48));
        plVar14 = plVar14 + 0x1a;
        plVar6 = plVar6 + 0x1a;
        uVar7 = extraout_var;
      } while (plVar14 < plVar11);
    }
  }
  if (local_98 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_a8._8_8_;
    local_a8 = auVar15 << 0x40;
    (*DAT_14151f538)();
    uVar7 = extraout_var_01;
  }
  auVar15 = in_ZMM6._0_16_;
  if (local_d0 != (uint *)0x0) {
    *(undefined4 *)(param_2 + 0x78) = 0;
    uVar5 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    uVar9 = 0x20;
    if ((int)uVar5 < 0x20) {
      uVar9 = (ulonglong)uVar5;
    }
    local_a8._8_8_ = param_2;
    local_a8._0_8_ = &PTR_LAB_140de33c0;
    uVar8 = (uint)uVar9;
    local_e8 = (longlong *)local_a8;
    local_e0 = uVar8;
    local_98 = param_3;
    local_70 = (longlong *)local_a8;
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
              (*(longlong **)(param_2 + 0x10),&local_b0,"SoftBodyFinalize",DAT_14151f5b8);
    lVar12 = *(longlong *)(param_3 + 0x1ca0);
    if (lVar12 == local_b0) {
      if (lVar12 != 0) {
        LOCK();
        piVar1 = (int *)(local_b0 + 0x60);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(local_b0 + 0x10) + 0x40))
                    (*(longlong **)(local_b0 + 0x10),local_b0);
        }
      }
    }
    else {
      if (lVar12 != 0) {
        LOCK();
        piVar1 = (int *)(lVar12 + 0x60);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x40))();
        }
      }
      *(longlong *)(param_3 + 0x1ca0) = local_b0;
      local_b0 = 0;
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x20))(local_70,local_70 != (longlong *)local_a8);
    }
    (**(code **)**(undefined8 **)(param_2 + 0x18))
              (*(undefined8 **)(param_2 + 0x18),(longlong *)(param_3 + 0x1ca0));
    puVar2 = (uint *)(param_3 + 0x1b98);
    lVar12 = param_3 + 0x1ba0;
    uVar13 = (ulonglong)*(uint *)(param_3 + 0x1b98);
    local_d0 = puVar2;
    if (*(uint *)(param_3 + 0x1b98) < uVar8) {
      puVar10 = puVar2 + uVar9 * 2 + 2;
      if (puVar2 + uVar9 * 2 + 2 < puVar2 + uVar13 * 2 + 4) {
        puVar10 = puVar2 + uVar13 * 2 + 4;
      }
      memset((void *)(uVar13 * 8 + lVar12),0,
             ((longlong)puVar10 + (-9 - (longlong)(puVar2 + uVar13 * 2)) & 0xfffffffffffffff8U) + 8)
      ;
      uVar13 = (ulonglong)*puVar2;
    }
    if (uVar8 < (uint)uVar13) {
      plVar6 = (longlong *)(param_3 + uVar9 * 8 + 0x1ba0);
      do {
        lVar3 = *plVar6;
        if (lVar3 != 0) {
          LOCK();
          piVar1 = (int *)(lVar3 + 0x60);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x40))();
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 < (longlong *)(uVar13 * 8 + lVar12));
    }
    *local_d0 = uVar8;
    uVar13 = uVar9;
    if (0 < (int)uVar5) {
      local_c0 = CONCAT44(local_c0._4_4_,uVar5);
      uVar13 = 0;
      local_b8 = lVar12;
      do {
        local_a8._8_8_ = param_3;
        local_a8._0_8_ = &PTR_LAB_140de33f0;
        local_98 = CONCAT44(local_98._4_4_,(int)uVar13);
        local_e8 = (longlong *)local_a8;
        local_e0 = uVar8;
        local_70 = (longlong *)local_a8;
        (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
                  (*(longlong **)(param_2 + 0x10),&local_b0,"SoftBodySimulate",DAT_14151f5b4);
        lVar12 = *(longlong *)(param_3 + 0x1ba0 + uVar13 * 8);
        if (lVar12 == local_b0) {
          if (lVar12 != 0) {
            LOCK();
            piVar1 = (int *)(local_b0 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_b0 + 0x10) + 0x40))
                        (*(longlong **)(local_b0 + 0x10),local_b0);
            }
          }
        }
        else {
          if (lVar12 != 0) {
            LOCK();
            piVar1 = (int *)(lVar12 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(param_3 + 0x1ba0 + uVar13 * 8) = local_b0;
          local_b0 = 0;
        }
        if (local_70 != (longlong *)0x0) {
          (**(code **)(*local_70 + 0x20))(local_70,local_70 != (longlong *)local_a8);
        }
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
      uVar13 = (ulonglong)*local_d0;
      lVar12 = local_b8;
      uVar5 = (uint)local_c0;
    }
    (**(code **)(**(longlong **)(param_2 + 0x18) + 8))(*(longlong **)(param_2 + 0x18),lVar12,uVar13)
    ;
    puVar2 = (uint *)(param_3 + 0x1a90);
    lVar12 = param_3 + 0x1a98;
    uVar13 = (ulonglong)*(uint *)(param_3 + 0x1a90);
    local_d0 = puVar2;
    if (*(uint *)(param_3 + 0x1a90) < uVar8) {
      puVar10 = puVar2 + uVar9 * 2 + 2;
      if (puVar2 + uVar9 * 2 + 2 < puVar2 + uVar13 * 2 + 4) {
        puVar10 = puVar2 + uVar13 * 2 + 4;
      }
      memset((void *)(uVar13 * 8 + lVar12),0,
             ((longlong)puVar10 + (-9 - (longlong)(puVar2 + uVar13 * 2)) & 0xfffffffffffffff8U) + 8)
      ;
      uVar13 = (ulonglong)*puVar2;
    }
    if (uVar8 < (uint)uVar13) {
      plVar6 = (longlong *)(param_3 + uVar9 * 8 + 0x1a98);
      do {
        lVar3 = *plVar6;
        if (lVar3 != 0) {
          LOCK();
          piVar1 = (int *)(lVar3 + 0x60);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x40))();
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 < (longlong *)(uVar13 * 8 + lVar12));
    }
    *local_d0 = uVar8;
    if (0 < (int)uVar5) {
      uVar13 = 0;
      local_c0 = lVar12;
      do {
        local_a8._8_8_ = param_2;
        local_a8._0_8_ = &PTR_LAB_140de3420;
        local_e0 = 0;
        local_e8 = (longlong *)local_a8;
        local_98 = param_3;
        local_70 = (longlong *)local_a8;
        (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))
                  (*(longlong **)(param_2 + 0x10),&local_b0,"SoftBodyCollide",DAT_14151f5b0);
        lVar12 = *(longlong *)(param_3 + 0x1a98 + uVar13 * 8);
        if (lVar12 == local_b0) {
          if (lVar12 != 0) {
            LOCK();
            piVar1 = (int *)(local_b0 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(local_b0 + 0x10) + 0x40))
                        (*(longlong **)(local_b0 + 0x10),local_b0);
            }
          }
        }
        else {
          if (lVar12 != 0) {
            LOCK();
            piVar1 = (int *)(lVar12 + 0x60);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x40))();
            }
          }
          *(longlong *)(param_3 + 0x1a98 + uVar13 * 8) = local_b0;
          local_b0 = 0;
        }
        if (local_70 != (longlong *)0x0) {
          (**(code **)(*local_70 + 0x20))(local_70,local_70 != (longlong *)local_a8);
        }
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
      uVar8 = *local_d0;
      lVar12 = local_c0;
    }
    (**(code **)(**(longlong **)(param_2 + 0x18) + 8))(*(longlong **)(param_2 + 0x18),lVar12,uVar8);
    auVar15 = in_ZMM6._0_16_;
    uVar7 = extraout_var_02;
  }
  if (local_c8 != (undefined1 (*) [16])0x0) {
    uVar9 = rdtsc();
    auVar4 = vpinsrq_avx(auVar15,uVar9 & 0xffffffff00000000 | CONCAT44(uVar7,(int)uVar9),1);
    auVar15 = vmovntdq_avx(SUB6416(ZEXT864(0x141398f55),0));
    *local_c8 = auVar15;
    auVar15 = vmovntdq_avx(auVar4);
    local_c8[1] = auVar15;
  }
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_108);
  }
  return;
}

