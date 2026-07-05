/**
 * Function: virtual_void_jph_broadphasequadtree_collidepo
 * Address:  14038bab0
 * Signature: undefined virtual_void_jph_broadphasequadtree_collidepo(void)
 * Body size: 1027 bytes
 */


void virtual_void_jph_broadphasequadtree_collidepo
               (longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
               undefined8 param_5)

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
  undefined1 (*pauVar7) [16];
  PSRWLOCK SRWLock;
  byte bVar8;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_ZMM6 [64];
  float fVar15;
  undefined1 auVar16 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined1 (*local_d8) [16];
  longlong *local_d0;
  PSRWLOCK local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  undefined1 local_98 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint uVar9;
  
  local_58 = in_ZMM10._0_16_;
  local_68 = in_ZMM9._0_16_;
  local_98 = in_ZMM6._0_16_;
  local_a0 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  local_c0 = param_2;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar10 = *(longlong *)(lVar11 + 0x170);
  if (lVar10 == 0) {
LAB_14038bb9f:
    local_d8 = (undefined1 (*) [16])0x0;
  }
  else {
    uVar9 = *(uint *)(lVar10 + 0x200020);
    if (0xffff < (ulonglong)uVar9) {
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
      goto LAB_14038bb9f;
    }
    *(uint *)(lVar10 + 0x200020) = uVar9 + 1;
    local_d8 = (undefined1 (*) [16])(lVar10 + (ulonglong)uVar9 * 0x20 + 0x20);
    uVar3 = rdtsc();
    in_ZMM6 = ZEXT864(uVar3 & 0xffffffff00000000 |
                      CONCAT44((int)((ulonglong)local_d8 >> 0x20),(int)uVar3));
  }
  local_d0 = (longlong *)(lVar11 + 0x170);
  SRWLock = (PSRWLOCK)(param_1 + (ulonglong)*(uint *)(param_1 + 0x130) * 8 + 0x120);
  iVar6 = FUN_140b689e4(SRWLock);
  if (iVar6 == 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x169) == '\0') {
      __dyn_tls_on_demand_init();
      lVar11 = *local_d0;
    }
    else {
      lVar11 = *local_d0;
    }
    if (lVar11 != 0) {
      uVar9 = *(uint *)(lVar11 + 0x200020);
      if ((ulonglong)uVar9 < 0x10000) {
        *(uint *)(lVar11 + 0x200020) = uVar9 + 1;
        lVar10 = (ulonglong)uVar9 * 0x20;
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
        *(undefined1 (*) [16])(lVar11 + 0x20 + lVar10) = auVar12;
        auVar12 = vmovntdq_avx(auVar14);
        *(undefined1 (*) [16])(lVar11 + 0x30 + lVar10) = auVar12;
        goto LAB_14038bcaf;
      }
      if (DAT_14151fc10 == '\0') {
        DAT_14151fc10 = '\x01';
        (*(code *)PTR_vfunction4_1414f67c8)
                  ("ProfileMeasurement: Too many samples, some data will be lost!");
      }
    }
    AcquireSRWLockShared(SRWLock);
  }
LAB_14038bcaf:
  local_c8 = SRWLock;
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar9 = 0;
    fVar15 = -3.4028235e+38;
    auVar16 = ZEXT1664((undefined1  [16])0x0);
    do {
      lVar11 = *(longlong *)(param_1 + 0x108);
      if ((*(int *)(lVar11 + 0x40 + (ulonglong)(uVar9 << 7)) != 0) &&
         (cVar5 = (**(code **)(*param_4 + 8))(param_4,uVar9), cVar5 != '\0')) {
        lVar11 = lVar11 + (ulonglong)(uVar9 << 7);
        uVar3 = *(ulonglong *)(lVar11 + 0x58);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x169) == '\0') {
          __dyn_tls_on_demand_init();
          lVar10 = *local_d0;
          if (lVar10 != 0) goto LAB_14038bd68;
LAB_14038bdcb:
          pauVar7 = (undefined1 (*) [16])0x0;
        }
        else {
          lVar10 = *local_d0;
          if (lVar10 == 0) goto LAB_14038bdcb;
LAB_14038bd68:
          uVar2 = *(uint *)(lVar10 + 0x200020);
          if (0xffff < (ulonglong)uVar2) {
            if (DAT_14151fc10 == '\0') {
              DAT_14151fc10 = '\x01';
              (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
            }
            goto LAB_14038bdcb;
          }
          *(uint *)(lVar10 + 0x200020) = uVar2 + 1;
          pauVar7 = (undefined1 (*) [16])(lVar10 + (ulonglong)uVar2 * 0x20 + 0x20);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar3;
          auVar12 = vpblendw_avx(auVar13,in_ZMM10._0_16_,0xf0);
          auVar12 = vpblendw_avx(auVar12,auVar16._0_16_,0x30);
          in_ZMM10 = ZEXT1664(auVar12);
          uVar3 = rdtsc();
          auVar12 = vpinsrq_avx(in_ZMM9._0_16_,
                                uVar3 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)lVar10 >> 0x20),(int)uVar3),0);
          in_ZMM9 = ZEXT1664(auVar12);
        }
        local_b8 = *local_c0;
        uStack_b0 = local_c0[1];
        local_e8 = param_1 + 0x18;
        profilemeasurement_too_many_samples_some_data(lVar11,&local_b8,param_3,param_5);
        fVar1 = *(float *)(param_3 + 8);
        if (pauVar7 != (undefined1 (*) [16])0x0) {
          uVar3 = rdtsc();
          auVar14 = vpinsrq_avx(in_ZMM9._0_16_,
                                uVar3 & 0xffffffff00000000 | CONCAT44(extraout_var_00,(int)uVar3),1)
          ;
          in_ZMM9 = ZEXT1664(auVar14);
          auVar12 = vmovntdq_avx(in_ZMM10._0_16_);
          *pauVar7 = auVar12;
          auVar12 = vmovntdq_avx(auVar14);
          pauVar7[1] = auVar12;
        }
        if (fVar1 <= fVar15) break;
      }
      bVar8 = (char)uVar9 + 1;
      uVar9 = (uint)bVar8;
    } while ((uint)bVar8 < *(uint *)(param_1 + 0x110));
  }
  ReleaseSRWLockShared(local_c8);
  if (local_d8 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar14 = vpinsrq_avx(in_ZMM6._0_16_,
                          uVar3 & 0xffffffff00000000 | CONCAT44(extraout_var_01,(int)uVar3),1);
    auVar12 = vmovntdq_avx(SUB6416(ZEXT864(0x14132bdcf),0));
    *local_d8 = auVar12;
    auVar12 = vmovntdq_avx(auVar14);
    local_d8[1] = auVar12;
  }
  if (DAT_1414ef3c0 == (local_a0 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_a0 ^ (ulonglong)auStack_108);
}

