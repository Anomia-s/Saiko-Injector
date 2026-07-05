/**
 * Function: update_bounds
 * Address:  1400ad300
 * Signature: undefined update_bounds(void)
 * Body size: 915 bytes
 */


void update_bounds(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 extraout_var;
  char *pcVar5;
  void *pvVar6;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  uint *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 auVar14 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar18 [64];
  undefined1 auStack_b8 [40];
  uint *local_90;
  uint *local_88;
  ulonglong local_80;
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  undefined4 uVar7;
  
  local_58 = in_ZMM8._0_16_;
  local_78 = in_ZMM6._0_16_;
  local_80 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  FUN_1403752d0(param_1 + 0x3f0,param_2,&local_88,&local_90);
  cVar1 = *(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x169);
  if (*(char *)(param_4 + 9) == '\x01') {
    if (cVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar10 = *(ulonglong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x170);
    if (uVar10 == 0) {
LAB_1400ad472:
      pauVar13 = (undefined1 (*) [16])0x0;
    }
    else {
      uVar2 = *(uint *)(uVar10 + 0x200020);
      if (0xffff < (ulonglong)uVar2) {
        if (DAT_14151fc10 == '\0') {
          DAT_14151fc10 = '\x01';
          uVar10 = (*(code *)PTR_vfunction4_1414f67c8)
                             ("ProfileMeasurement: Too many samples, some data will be lost!");
        }
        goto LAB_1400ad472;
      }
      *(uint *)(uVar10 + 0x200020) = uVar2 + 1;
      pauVar13 = (undefined1 (*) [16])(uVar10 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar8 = rdtsc();
      uVar10 = CONCAT44((int)(uVar10 >> 0x20),(int)uVar8);
      in_ZMM8 = ZEXT864(uVar8 & 0xffffffff00000000 | uVar10);
    }
    bVar11 = *(byte *)(param_1 + 0x2b5);
    if (local_88 < local_90) {
      auVar15 = ZEXT464((uint)*(float *)(param_1 + 0x2a8));
      auVar16 = ZEXT464((uint)(*(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x2ac)));
      auVar18 = ZEXT1264(ZEXT812(0));
      puVar12 = local_88;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(*puVar12 & 0x7fffff) * 8);
        FUN_140377f30(lVar3);
        bVar4 = FUN_1403786a0(lVar3,*(undefined4 *)(param_3 + 0x20),auVar16._0_8_,auVar15._0_8_);
        bVar11 = bVar11 & bVar4;
        uVar10 = *(ulonglong *)(lVar3 + 0x48);
        puVar12 = puVar12 + 1;
        *(undefined1 (*) [16])(uVar10 + 0x40) = auVar18._0_16_;
        *(undefined8 *)(uVar10 + 0x50) = 0;
      } while (puVar12 < local_90);
    }
    puVar12 = local_88;
    auVar17 = in_ZMM8._0_16_;
    uVar7 = (undefined4)(uVar10 >> 0x20);
    if (bVar11 == 1) {
      uVar10 = (ulonglong)((longlong)local_90 - (longlong)local_88) >> 2;
      iVar9 = (int)uVar10;
      if (iVar9 < 0x81) {
        pvVar6 = (void *)param_5[2];
        if (0x200 < (int)((ulonglong)((longlong)pvVar6 - param_5[1]) >> 2) + iVar9) {
          FUN_1400e4860(*param_5,param_5[1]);
          pvVar6 = (void *)param_5[1];
          param_5[2] = pvVar6;
        }
        pvVar6 = memcpy(pvVar6,puVar12,(longlong)iVar9 * 4);
        auVar17 = in_ZMM8._0_16_;
        uVar7 = (undefined4)((ulonglong)pvVar6 >> 0x20);
        param_5[2] = param_5[2] + (longlong)iVar9 * 4;
      }
      else {
        FUN_1400e4860(*param_5,local_88,uVar10 & 0xffffffff);
        auVar17 = in_ZMM8._0_16_;
        uVar7 = extraout_var;
      }
    }
    if (pauVar13 == (undefined1 (*) [16])0x0) goto LAB_1400ad5c7;
    uVar10 = rdtsc();
    auVar17 = vpinsrq_avx(auVar17,uVar10 & 0xffffffff00000000 | CONCAT44(uVar7,(int)uVar10),1);
    pcVar5 = "Check Sleeping";
  }
  else {
    if (cVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar10 = *(ulonglong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x170);
    if (uVar10 == 0) {
LAB_1400ad56a:
      auVar17 = in_ZMM6._0_16_;
      pauVar13 = (undefined1 (*) [16])0x0;
      puVar12 = local_88;
      if (local_88 < local_90) {
LAB_1400ad580:
        do {
          uVar10 = FUN_140377f30(*(undefined8 *)
                                  (*(longlong *)(param_1 + 0x20) +
                                  (ulonglong)(*puVar12 & 0x7fffff) * 8));
          auVar17 = in_ZMM6._0_16_;
          puVar12 = puVar12 + 1;
        } while (puVar12 < local_90);
      }
    }
    else {
      uVar2 = *(uint *)(uVar10 + 0x200020);
      if (0xffff < (ulonglong)uVar2) {
        if (DAT_14151fc10 == '\0') {
          DAT_14151fc10 = '\x01';
          uVar10 = (*(code *)PTR_vfunction4_1414f67c8)
                             ("ProfileMeasurement: Too many samples, some data will be lost!");
        }
        goto LAB_1400ad56a;
      }
      *(uint *)(uVar10 + 0x200020) = uVar2 + 1;
      pauVar13 = (undefined1 (*) [16])(uVar10 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar8 = rdtsc();
      uVar10 = CONCAT44((int)(uVar10 >> 0x20),(int)uVar8);
      uVar8 = uVar8 & 0xffffffff00000000 | uVar10;
      in_ZMM6 = ZEXT864(uVar8);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar8;
      puVar12 = local_88;
      if (local_88 < local_90) goto LAB_1400ad580;
    }
    if (pauVar13 == (undefined1 (*) [16])0x0) goto LAB_1400ad5c7;
    uVar8 = rdtsc();
    auVar17 = vpinsrq_avx(auVar17,uVar8 & 0xffffffff00000000 |
                                  CONCAT44((int)(uVar10 >> 0x20),(int)uVar8),1);
    pcVar5 = "Update Bounds";
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = pcVar5;
  auVar14 = vmovntdq_avx(auVar14);
  *pauVar13 = auVar14;
  auVar17 = vmovntdq_avx(auVar17);
  pauVar13[1] = auVar17;
LAB_1400ad5c7:
  (**(code **)(**(longlong **)(param_1 + 0x208) + 0x98))
            (*(longlong **)(param_1 + 0x208),local_88,
             (ulonglong)((longlong)local_90 - (longlong)local_88) >> 2,0);
  if (DAT_1414ef3c0 != (local_80 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_80 ^ (ulonglong)auStack_b8);
  }
  return;
}

