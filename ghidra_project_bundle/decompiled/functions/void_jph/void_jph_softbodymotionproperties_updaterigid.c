/**
 * Function: void_jph_softbodymotionproperties_updaterigid
 * Address:  140386490
 * Signature: undefined void_jph_softbodymotionproperties_updaterigid(void)
 * Body size: 878 bytes
 */


void void_jph_softbodymotionproperties_updaterigid
               (longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar17 [64];
  undefined1 auStack_c8 [32];
  undefined1 (*local_a8) [16];
  longlong local_a0;
  undefined1 local_98 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_70;
  undefined1 local_68 [16];
  
  local_68 = in_ZMM6._0_16_;
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar9 != 0) {
    uVar2 = *(uint *)(lVar9 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(lVar9 + 0x200020) = uVar2 + 1;
      pauVar14 = (undefined1 (*) [16])(lVar9 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar10 = rdtsc();
      in_ZMM6 = ZEXT864(uVar10 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar10));
      lVar9 = *(longlong *)(param_1 + 0x138);
      goto joined_r0x000140386574;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar14 = (undefined1 (*) [16])0x0;
  lVar9 = *(longlong *)(param_1 + 0x138);
joined_r0x000140386574:
  if (lVar9 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x148);
    lVar11 = 0;
    local_a8 = pauVar14;
    local_a0 = param_1;
    do {
      if (*(char *)(lVar3 + 0x70 + lVar11) == '\x01') {
        auVar8 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + 0xd0 + lVar11),
                            *(undefined1 (*) [16])(lVar3 + 0xf0 + lVar11));
        auVar6 = vshufps_avx(auVar8,auVar8,0);
        auVar16 = *(undefined1 (*) [16])(param_2 + 0x30);
        auVar5 = *(undefined1 (*) [16])(param_2 + 0x40);
        auVar7 = vshufps_avx(auVar8,auVar8,0x55);
        auVar8 = vshufps_avx(auVar8,auVar8,0xaa);
        local_88 = *(float *)(param_2 + 0x20) * auVar6._0_4_ + auVar16._0_4_ * auVar7._0_4_ +
                   auVar8._0_4_ * auVar5._0_4_;
        fStack_84 = *(float *)(param_2 + 0x24) * auVar6._4_4_ + auVar16._4_4_ * auVar7._4_4_ +
                    auVar8._4_4_ * auVar5._4_4_;
        fStack_80 = *(float *)(param_2 + 0x28) * auVar6._8_4_ + auVar16._8_4_ * auVar7._8_4_ +
                    auVar8._8_4_ * auVar5._8_4_;
        fStack_7c = *(float *)(param_2 + 0x2c) * auVar6._12_4_ + auVar16._12_4_ * auVar7._12_4_ +
                    auVar8._12_4_ * auVar5._12_4_;
        auVar8 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + 0xc0 + lVar11),
                            *(undefined1 (*) [16])(lVar3 + 0xe0 + lVar11));
        auVar6 = vshufps_avx(auVar8,auVar8,0);
        auVar7 = vshufps_avx(auVar8,auVar8,0x55);
        auVar8 = vshufps_avx(auVar8,auVar8,0xaa);
        local_98._0_4_ =
             auVar5._0_4_ * auVar8._0_4_ +
             *(float *)(param_2 + 0x20) * auVar6._0_4_ + auVar16._0_4_ * auVar7._0_4_;
        local_98._4_4_ =
             auVar5._4_4_ * auVar8._4_4_ +
             *(float *)(param_2 + 0x24) * auVar6._4_4_ + auVar16._4_4_ * auVar7._4_4_;
        local_98._8_4_ =
             auVar5._8_4_ * auVar8._8_4_ +
             *(float *)(param_2 + 0x28) * auVar6._8_4_ + auVar16._8_4_ * auVar7._8_4_;
        local_98._12_4_ =
             auVar5._12_4_ * auVar8._12_4_ +
             *(float *)(param_2 + 0x2c) * auVar6._12_4_ + auVar16._12_4_ * auVar7._12_4_;
        FUN_1400c6530(param_3,lVar3 + 0x58 + lVar11,local_98,&local_88);
      }
      param_1 = local_a0;
      pauVar14 = local_a8;
      lVar11 = lVar11 + 0x100;
    } while (lVar9 * 0x100 != lVar11);
    if (*(longlong *)(local_a0 + 0x138) != 0) {
      uVar10 = *(ulonglong *)(local_a0 + 0x148);
      uVar15 = *(longlong *)(local_a0 + 0x138) * 0x100 + uVar10;
      auVar17 = ZEXT1264(ZEXT812(0));
      do {
        uVar13 = *(ulonglong *)(uVar10 + 0x50);
        if (uVar13 != 0) {
          if (*(longlong *)(uVar10 + 0x40) != 0) {
            uVar12 = *(longlong *)(uVar10 + 0x40) * 0x60 + uVar13;
            do {
              puVar4 = *(undefined8 **)(uVar13 + 0x50);
              if (puVar4 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar4 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar4)(puVar4,1);
                }
              }
              uVar13 = uVar13 + 0x60;
            } while (uVar13 < uVar12);
            uVar13 = *(ulonglong *)(uVar10 + 0x50);
          }
          *(undefined8 *)(uVar10 + 0x40) = 0;
          (*DAT_14151f538)(uVar13);
          *(undefined1 (*) [16])(uVar10 + 0x48) = auVar17._0_16_;
        }
        uVar10 = uVar10 + 0x100;
      } while (uVar10 < uVar15);
    }
  }
  auVar16 = in_ZMM6._0_16_;
  *(undefined8 *)(param_1 + 0x138) = 0;
  lVar9 = *(longlong *)(param_1 + 0x150);
  if (lVar9 != 0) {
    uVar10 = *(ulonglong *)(param_1 + 0x160);
    uVar15 = lVar9 * 0x60 + uVar10;
    auVar17 = ZEXT1264(ZEXT812(0));
    do {
      uVar13 = *(ulonglong *)(uVar10 + 0x50);
      if (uVar13 != 0) {
        if (*(longlong *)(uVar10 + 0x40) != 0) {
          uVar12 = *(longlong *)(uVar10 + 0x40) * 0x60 + uVar13;
          do {
            puVar4 = *(undefined8 **)(uVar13 + 0x50);
            if (puVar4 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar4 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar4)(puVar4,1);
              }
            }
            uVar13 = uVar13 + 0x60;
          } while (uVar13 < uVar12);
          uVar13 = *(ulonglong *)(uVar10 + 0x50);
        }
        *(undefined8 *)(uVar10 + 0x40) = 0;
        lVar9 = (*DAT_14151f538)(uVar13);
        *(undefined1 (*) [16])(uVar10 + 0x48) = auVar17._0_16_;
      }
      auVar16 = in_ZMM6._0_16_;
      uVar10 = uVar10 + 0x60;
    } while (uVar10 < uVar15);
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (pauVar14 != (undefined1 (*) [16])0x0) {
    uVar10 = rdtsc();
    auVar5 = vpinsrq_avx(auVar16,uVar10 & 0xffffffff00000000 |
                                 CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar10),1);
    auVar16 = vmovntdq_avx(SUB6416(ZEXT864(0x14139bd0e),0));
    *pauVar14 = auVar16;
    auVar16 = vmovntdq_avx(auVar5);
    pauVar14[1] = auVar16;
  }
  if (DAT_1414ef3c0 == (local_70 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_70 ^ (ulonglong)auStack_c8);
}

