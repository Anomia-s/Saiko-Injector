/**
 * Function: virtual_void_jph_jobsystemthreadpool_queuejob
 * Address:  1400a30b0
 * Signature: undefined virtual_void_jph_jobsystemthreadpool_queuejob(void)
 * Body size: 1123 bytes
 */


void virtual_void_jph_jobsystemthreadpool_queuejob(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar10;
  DWORD dwMilliseconds;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 in_ZMM6 [64];
  undefined4 uVar9;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar6 != 0) {
    uVar15 = *(uint *)(uVar6 + 0x200020);
    if ((ulonglong)uVar15 < 0x10000) {
      *(uint *)(uVar6 + 0x200020) = uVar15 + 1;
      pauVar13 = (undefined1 (*) [16])(uVar6 + (ulonglong)uVar15 * 0x20 + 0x20);
      uVar11 = rdtsc();
      uVar6 = CONCAT44((int)(uVar6 >> 0x20),(int)uVar11);
      uVar11 = uVar11 & 0xffffffff00000000 | uVar6;
      in_ZMM6 = ZEXT864(uVar11);
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar11;
      lVar4 = *(longlong *)(param_1 + 0x180);
      goto joined_r0x0001400a317b;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar6 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar18 = in_ZMM6._0_16_;
  pauVar13 = (undefined1 (*) [16])0x0;
  lVar4 = *(longlong *)(param_1 + 0x180);
joined_r0x0001400a317b:
  uVar9 = (undefined4)(uVar6 >> 0x20);
  if (lVar4 != 0) {
    uVar15 = (uint)lVar4;
    if (param_3 != 0) {
      plVar2 = param_2 + param_3;
      do {
        lVar4 = *param_2;
        LOCK();
        piVar1 = (int *)(lVar4 + 0x60);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        uVar15 = *(uint *)(param_1 + 0x21c0);
        if (*(longlong *)(param_1 + 0x180) != 0) {
          uVar6 = 0;
          do {
            uVar10 = *(uint *)(*(longlong *)(param_1 + 0x2198) + uVar6 * 4);
            if (uVar10 < uVar15) {
              uVar15 = uVar10;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ulonglong *)(param_1 + 0x180));
        }
LAB_1400a325e:
        do {
          uVar10 = *(uint *)(param_1 + 0x21c0);
          if (0x3ff < uVar10 - uVar15) {
            uVar15 = *(uint *)(param_1 + 0x21c0);
            if (*(longlong *)(param_1 + 0x180) != 0) {
              uVar6 = 0;
              do {
                uVar10 = *(uint *)(*(longlong *)(param_1 + 0x2198) + uVar6 * 4);
                if (uVar10 < uVar15) {
                  uVar15 = uVar10;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(ulonglong *)(param_1 + 0x180));
            }
            uVar10 = *(uint *)(param_1 + 0x21c0);
            if (0x3ff < uVar10 - uVar15) {
              FUN_140373030(param_1 + 0x2200);
              uVar6 = _Query_perf_frequency();
              uVar11 = _Query_perf_counter();
              if (uVar6 == 24000000) {
                uVar6 = ((longlong)uVar11 / 24000000) * 1000000000;
                lVar16 = (((longlong)uVar11 % 24000000) * 1000000000) / 24000000;
              }
              else {
                if (uVar6 == 10000000) {
                  lVar16 = uVar11 * 100;
                  goto LAB_1400a338f;
                }
                if ((uVar11 | uVar6) >> 0x20 == 0) {
                  uVar7 = (uVar11 & 0xffffffff) / (uVar6 & 0xffffffff);
                  uVar11 = (uVar11 & 0xffffffff) % (uVar6 & 0xffffffff);
                }
                else {
                  uVar7 = (longlong)uVar11 / (longlong)uVar6;
                  uVar11 = (longlong)uVar11 % (longlong)uVar6;
                }
                uVar11 = uVar11 * 1000000000;
                if ((uVar6 | uVar11) >> 0x20 == 0) {
                  uVar6 = (uVar11 & 0xffffffff) / (uVar6 & 0xffffffff);
                }
                else {
                  uVar6 = (longlong)uVar11 / (longlong)uVar6;
                }
                lVar16 = uVar7 * 1000000000;
              }
              lVar16 = lVar16 + uVar6;
LAB_1400a338f:
              if (0x7ffffffffffe795e < lVar16) {
                lVar16 = 0x7ffffffffffe795f;
              }
              lVar16 = lVar16 + 100000;
              do {
                uVar6 = _Query_perf_frequency();
                uVar11 = _Query_perf_counter();
                if (uVar6 == 24000000) {
                  uVar6 = ((longlong)uVar11 / 24000000) * 1000000000;
                  lVar12 = (((longlong)uVar11 % 24000000) * 1000000000) / 24000000;
LAB_1400a3483:
                  lVar14 = lVar16 - (lVar12 + uVar6);
                  if (lVar14 == 0 || lVar16 < (longlong)(lVar12 + uVar6)) goto LAB_1400a325e;
                }
                else {
                  if (uVar6 != 10000000) {
                    if ((uVar11 | uVar6) >> 0x20 == 0) {
                      uVar7 = (uVar11 & 0xffffffff) / (uVar6 & 0xffffffff);
                      uVar11 = (uVar11 & 0xffffffff) % (uVar6 & 0xffffffff);
                    }
                    else {
                      uVar7 = (longlong)uVar11 / (longlong)uVar6;
                      uVar11 = (longlong)uVar11 % (longlong)uVar6;
                    }
                    uVar11 = uVar11 * 1000000000;
                    if ((uVar6 | uVar11) >> 0x20 == 0) {
                      uVar6 = (uVar11 & 0xffffffff) / (uVar6 & 0xffffffff);
                    }
                    else {
                      uVar6 = (longlong)uVar11 / (longlong)uVar6;
                    }
                    lVar12 = uVar7 * 1000000000;
                    goto LAB_1400a3483;
                  }
                  lVar14 = lVar16 + uVar11 * -100;
                  if (lVar14 == 0 || lVar16 < (longlong)(uVar11 * 100)) goto LAB_1400a325e;
                }
                dwMilliseconds = 86400000;
                if (lVar14 < 0x4e94914f0001) {
                  dwMilliseconds =
                       (uint)((lVar14 / 1000000) * 1000000 < lVar14) + (int)(lVar14 / 1000000);
                }
                Sleep(dwMilliseconds);
              } while( true );
            }
          }
          plVar3 = (longlong *)(param_1 + 0x198 + (ulonglong)(uVar10 & 0x3ff) * 8);
          LOCK();
          bVar17 = *plVar3 == 0;
          if (bVar17) {
            *plVar3 = lVar4;
          }
          UNLOCK();
          LOCK();
          if (uVar10 == *(uint *)(param_1 + 0x21c0)) {
            *(uint *)(param_1 + 0x21c0) = uVar10 + 1;
          }
          UNLOCK();
        } while (!bVar17);
        param_2 = param_2 + 1;
      } while (param_2 < plVar2);
      uVar15 = (uint)*(undefined8 *)(param_1 + 0x180);
    }
    if (param_3 < uVar15) {
      uVar15 = param_3;
    }
    uVar8 = FUN_140373030(param_1 + 0x2200,uVar15);
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    auVar18 = in_ZMM6._0_16_;
  }
  if (pauVar13 != (undefined1 (*) [16])0x0) {
    uVar6 = rdtsc();
    auVar5 = vpinsrq_avx(auVar18,uVar6 & 0xffffffff00000000 | CONCAT44(uVar9,(int)uVar6),1);
    auVar18 = vmovntdq_avx(SUB6416(ZEXT864(0x1413952ad),0));
    *pauVar13 = auVar18;
    auVar18 = vmovntdq_avx(auVar5);
    pauVar13[1] = auVar18;
  }
  return;
}

