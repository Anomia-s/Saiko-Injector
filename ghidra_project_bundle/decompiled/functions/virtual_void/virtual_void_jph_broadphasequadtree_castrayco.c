/**
 * Function: virtual_void_jph_broadphasequadtree_castrayco
 * Address:  14038aef0
 * Signature: undefined virtual_void_jph_broadphasequadtree_castrayco(void)
 * Body size: 947 bytes
 */


void virtual_void_jph_broadphasequadtree_castrayco
               (longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
               undefined8 param_5)

{
  longlong *plVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  byte bVar10;
  longlong lVar12;
  PSRWLOCK SRWLock;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_ZMM6 [64];
  float fVar16;
  undefined1 auVar17 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 (*local_b8) [16];
  uint uVar11;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar12 = *(longlong *)(lVar9 + 0x170);
  if (lVar12 == 0) {
LAB_14038afca:
    local_b8 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar11 = *(uint *)(lVar12 + 0x200020);
    if (0xffff < (ulonglong)uVar11) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_14038afca;
    }
    *(uint *)(lVar12 + 0x200020) = uVar11 + 1;
    local_b8 = (undefined1 (*) [16])(lVar12 + (ulonglong)uVar11 * 0x20 + 0x20);
    uVar4 = rdtsc();
    in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)local_b8 >> 0x20),(int)uVar4));
  }
  plVar1 = (longlong *)(lVar9 + 0x170);
  SRWLock = (PSRWLOCK)(param_1 + (ulonglong)*(uint *)(param_1 + 0x130) * 8 + 0x120);
  iVar7 = FUN_140b689e4(SRWLock);
  if (iVar7 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
      __dyn_tls_on_demand_init();
      lVar9 = *plVar1;
    }
    else {
      lVar9 = *plVar1;
    }
    if (lVar9 != 0) {
      uVar11 = *(uint *)(lVar9 + 0x200020);
      if ((ulonglong)uVar11 < 0x10000) {
        *(uint *)(lVar9 + 0x200020) = uVar11 + 1;
        lVar12 = (ulonglong)uVar11 * 0x20;
        uVar4 = rdtsc();
        AcquireSRWLockShared(SRWLock);
        uVar5 = rdtsc();
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar4;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar5 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar5);
        auVar15 = vpunpcklqdq_avx(auVar13,auVar15);
        auVar13 = vpinsrd_avx(SUB6416(ZEXT864(0x141344eed),0),0xff00ffff,2);
        auVar13 = vmovntdq_avx(auVar13);
        *(undefined1 (*) [16])(lVar9 + 0x20 + lVar12) = auVar13;
        auVar13 = vmovntdq_avx(auVar15);
        *(undefined1 (*) [16])(lVar9 + 0x30 + lVar12) = auVar13;
        goto LAB_14038b0da;
      }
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
    }
    AcquireSRWLockShared(SRWLock);
  }
LAB_14038b0da:
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar11 = 0;
    fVar16 = 0.0;
    auVar17 = ZEXT1664((undefined1  [16])0x0);
    do {
      lVar9 = *(longlong *)(param_1 + 0x108);
      if ((*(int *)(lVar9 + 0x40 + (ulonglong)(uVar11 << 7)) != 0) &&
         (cVar6 = (**(code **)(*param_4 + 8))(param_4,uVar11), cVar6 != '\0')) {
        lVar9 = lVar9 + (ulonglong)(uVar11 << 7);
        uVar4 = *(ulonglong *)(lVar9 + 0x58);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x169) == '\0') {
          __dyn_tls_on_demand_init();
          lVar12 = *plVar1;
          if (lVar12 != 0) goto LAB_14038b187;
LAB_14038b1ea:
          pauVar8 = (undefined1 (*) [16])0x0;
        }
        else {
          lVar12 = *plVar1;
          if (lVar12 == 0) goto LAB_14038b1ea;
LAB_14038b187:
          uVar3 = *(uint *)(lVar12 + 0x200020);
          if (0xffff < (ulonglong)uVar3) {
            if (DAT_14151fc10 == '\0') {
              DAT_14151fc10 = '\x01';
              (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
            }
            goto LAB_14038b1ea;
          }
          *(uint *)(lVar12 + 0x200020) = uVar3 + 1;
          pauVar8 = (undefined1 (*) [16])(lVar12 + (ulonglong)uVar3 * 0x20 + 0x20);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar4;
          auVar13 = vpblendw_avx(auVar14,in_ZMM10._0_16_,0xf0);
          auVar13 = vpblendw_avx(auVar13,auVar17._0_16_,0x30);
          in_ZMM10 = ZEXT1664(auVar13);
          uVar4 = rdtsc();
          auVar13 = vpinsrq_avx(in_ZMM9._0_16_,
                                uVar4 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)lVar12 >> 0x20),(int)uVar4),0);
          in_ZMM9 = ZEXT1664(auVar13);
        }
        profilemeasurement_too_many_samples_some_data(lVar9,param_2,param_3,param_5,param_1 + 0x18);
        fVar2 = *(float *)(param_3 + 8);
        if (pauVar8 != (undefined1 (*) [16])0x0) {
          uVar4 = rdtsc();
          auVar15 = vpinsrq_avx(in_ZMM9._0_16_,
                                uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var_00,(int)uVar4),1)
          ;
          in_ZMM9 = ZEXT1664(auVar15);
          auVar13 = vmovntdq_avx(in_ZMM10._0_16_);
          *pauVar8 = auVar13;
          auVar13 = vmovntdq_avx(auVar15);
          pauVar8[1] = auVar13;
        }
        if (fVar2 <= fVar16) break;
      }
      bVar10 = (char)uVar11 + 1;
      uVar11 = (uint)bVar10;
    } while ((uint)bVar10 < *(uint *)(param_1 + 0x110));
  }
  ReleaseSRWLockShared(SRWLock);
  if (local_b8 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar15 = vpinsrq_avx(in_ZMM6._0_16_,
                          uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var_01,(int)uVar4),1);
    auVar13 = vmovntdq_avx(SUB6416(ZEXT864(0x14132bbf4),0));
    *local_b8 = auVar13;
    auVar13 = vmovntdq_avx(auVar15);
    local_b8[1] = auVar13;
  }
  return;
}

