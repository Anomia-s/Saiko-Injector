/**
 * Function: virtual_void_jph_broadphasequadtree_collidesp
 * Address:  14038b680
 * Signature: undefined virtual_void_jph_broadphasequadtree_collidesp(void)
 * Body size: 1060 bytes
 */


void virtual_void_jph_broadphasequadtree_collidesp
               (longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
               longlong *param_5,undefined8 param_6)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  byte bVar9;
  longlong lVar11;
  PSRWLOCK SRWLock;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_ZMM7 [64];
  float fVar15;
  undefined1 auVar16 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  undefined1 (*local_e8) [16];
  longlong *local_e0;
  PSRWLOCK local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  undefined1 local_98 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint uVar10;
  
  local_58 = in_ZMM11._0_16_;
  local_68 = in_ZMM10._0_16_;
  local_98 = in_ZMM7._0_16_;
  local_b0 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  local_d0 = param_2;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar11 = *(longlong *)(lVar7 + 0x170);
  if (lVar11 == 0) {
LAB_14038b779:
    local_e8 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar10 = *(uint *)(lVar11 + 0x200020);
    if (0xffff < (ulonglong)uVar10) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_14038b779;
    }
    *(uint *)(lVar11 + 0x200020) = uVar10 + 1;
    local_e8 = (undefined1 (*) [16])(lVar11 + (ulonglong)uVar10 * 0x20 + 0x20);
    uVar3 = rdtsc();
    in_ZMM7 = ZEXT864(uVar3 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)local_e8 >> 0x20),(int)uVar3));
  }
  local_e0 = (longlong *)(lVar7 + 0x170);
  SRWLock = (PSRWLOCK)(param_1 + (ulonglong)*(uint *)(param_1 + 0x130) * 8 + 0x120);
  iVar6 = FUN_140b689e4(SRWLock);
  if (iVar6 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
      __dyn_tls_on_demand_init();
      lVar7 = *local_e0;
    }
    else {
      lVar7 = *local_e0;
    }
    if (lVar7 != 0) {
      uVar10 = *(uint *)(lVar7 + 0x200020);
      if ((ulonglong)uVar10 < 0x10000) {
        *(uint *)(lVar7 + 0x200020) = uVar10 + 1;
        lVar11 = (ulonglong)uVar10 * 0x20;
        uVar3 = rdtsc();
        AcquireSRWLockShared(SRWLock);
        uVar4 = rdtsc();
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar3;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4);
        auVar14 = vpunpcklqdq_avx(auVar12,auVar14);
        auVar12 = vpinsrd_avx(SUB6416(ZEXT864(0x141344eed),0),0xff00ffff,2);
        auVar12 = vmovntdq_avx(auVar12);
        *(undefined1 (*) [16])(lVar7 + 0x20 + lVar11) = auVar12;
        auVar12 = vmovntdq_avx(auVar14);
        *(undefined1 (*) [16])(lVar7 + 0x30 + lVar11) = auVar12;
        goto LAB_14038b889;
      }
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
    }
    AcquireSRWLockShared(SRWLock);
  }
LAB_14038b889:
  local_d8 = SRWLock;
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar10 = 0;
    fVar15 = -3.4028235e+38;
    auVar16 = ZEXT1664((undefined1  [16])0x0);
    do {
      lVar7 = *(longlong *)(param_1 + 0x108);
      if ((*(int *)(lVar7 + 0x40 + (ulonglong)(uVar10 << 7)) != 0) &&
         (cVar5 = (**(code **)(*param_5 + 8))(param_5,uVar10), cVar5 != '\0')) {
        lVar7 = lVar7 + (ulonglong)(uVar10 << 7);
        uVar3 = *(ulonglong *)(lVar7 + 0x58);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x169) == '\0') {
          __dyn_tls_on_demand_init();
          lVar11 = *local_e0;
          if (lVar11 != 0) goto LAB_14038b946;
LAB_14038b9a9:
          pauVar8 = (undefined1 (*) [16])0x0;
        }
        else {
          lVar11 = *local_e0;
          if (lVar11 == 0) goto LAB_14038b9a9;
LAB_14038b946:
          uVar2 = *(uint *)(lVar11 + 0x200020);
          if (0xffff < (ulonglong)uVar2) {
            if (DAT_14151fc10 == '\0') {
              DAT_14151fc10 = '\x01';
              (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
            }
            goto LAB_14038b9a9;
          }
          *(uint *)(lVar11 + 0x200020) = uVar2 + 1;
          pauVar8 = (undefined1 (*) [16])(lVar11 + (ulonglong)uVar2 * 0x20 + 0x20);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar3;
          auVar12 = vpblendw_avx(auVar13,in_ZMM11._0_16_,0xf0);
          auVar12 = vpblendw_avx(auVar12,auVar16._0_16_,0x30);
          in_ZMM11 = ZEXT1664(auVar12);
          uVar3 = rdtsc();
          auVar12 = vpinsrq_avx(in_ZMM10._0_16_,
                                uVar3 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar3),0);
          in_ZMM10 = ZEXT1664(auVar12);
        }
        local_c8 = *local_d0;
        uStack_c0 = local_d0[1];
        local_f8 = param_6;
        local_f0 = param_1 + 0x18;
        profilemeasurement_too_many_samples_some_data(lVar7,&local_c8,param_3,param_4);
        fVar1 = *(float *)(param_4 + 8);
        if (pauVar8 != (undefined1 (*) [16])0x0) {
          uVar3 = rdtsc();
          auVar14 = vpinsrq_avx(in_ZMM10._0_16_,
                                uVar3 & 0xffffffff00000000 | CONCAT44(extraout_var_00,(int)uVar3),1)
          ;
          in_ZMM10 = ZEXT1664(auVar14);
          auVar12 = vmovntdq_avx(in_ZMM11._0_16_);
          *pauVar8 = auVar12;
          auVar12 = vmovntdq_avx(auVar14);
          pauVar8[1] = auVar12;
        }
        if (fVar1 <= fVar15) break;
      }
      bVar9 = (char)uVar10 + 1;
      uVar10 = (uint)bVar9;
    } while ((uint)bVar9 < *(uint *)(param_1 + 0x110));
  }
  ReleaseSRWLockShared(local_d8);
  if (local_e8 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar14 = vpinsrq_avx(in_ZMM7._0_16_,
                          uVar3 & 0xffffffff00000000 | CONCAT44(extraout_var_01,(int)uVar3),1);
    auVar12 = vmovntdq_avx(SUB6416(ZEXT864(0x14132bd2e),0));
    *local_e8 = auVar12;
    auVar12 = vmovntdq_avx(auVar14);
    local_e8[1] = auVar12;
  }
  if (DAT_1414ef3c0 == (local_b0 ^ (ulonglong)auStack_118)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_b0 ^ (ulonglong)auStack_118);
}

