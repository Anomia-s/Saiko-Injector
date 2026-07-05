/**
 * Function: virtual_void_jph_broadphasequadtree_castaabox
 * Address:  14038c290
 * Signature: undefined virtual_void_jph_broadphasequadtree_castaabox(void)
 * Body size: 692 bytes
 */


void virtual_void_jph_broadphasequadtree_castaabox
               (longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
               undefined8 param_5)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  undefined4 uVar9;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  byte bVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_ZMM6 [64];
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 (*local_b0) [16];
  uint uVar14;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar8 = *(ulonglong *)(lVar12 + 0x170);
  if (uVar8 != 0) {
    uVar14 = *(uint *)(uVar8 + 0x200020);
    if ((ulonglong)uVar14 < 0x10000) {
      *(uint *)(uVar8 + 0x200020) = uVar14 + 1;
      local_b0 = (undefined1 (*) [16])(uVar8 + (ulonglong)uVar14 * 0x20 + 0x20);
      uVar10 = rdtsc();
      uVar8 = CONCAT44((int)((ulonglong)local_b0 >> 0x20),(int)uVar10);
      uVar10 = uVar10 & 0xffffffff00000000 | uVar8;
      in_ZMM6 = ZEXT864(uVar10);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar10;
      iVar3 = *(int *)(param_1 + 0x110);
      goto joined_r0x00014038c385;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar8 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar16 = in_ZMM6._0_16_;
  local_b0 = (undefined1 (*) [16])0x0;
  iVar3 = *(int *)(param_1 + 0x110);
joined_r0x00014038c385:
  uVar9 = (undefined4)(uVar8 >> 0x20);
  if (iVar3 != 0) {
    plVar1 = (longlong *)(lVar12 + 0x170);
    uVar14 = 0;
    fVar17 = -3.4028235e+38;
    auVar18 = ZEXT1664((undefined1  [16])0x0);
    do {
      lVar12 = *(longlong *)(param_1 + 0x108);
      if ((*(int *)(lVar12 + 0x40 + (ulonglong)(uVar14 << 7)) != 0) &&
         (cVar6 = (**(code **)(*param_4 + 8))(param_4,uVar14), cVar6 != '\0')) {
        lVar12 = lVar12 + (ulonglong)(uVar14 << 7);
        uVar8 = *(ulonglong *)(lVar12 + 0x58);
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x169) == '\0') {
          __dyn_tls_on_demand_init();
          lVar7 = *plVar1;
          if (lVar7 != 0) goto LAB_14038c437;
LAB_14038c49a:
          pauVar11 = (undefined1 (*) [16])0x0;
        }
        else {
          lVar7 = *plVar1;
          if (lVar7 == 0) goto LAB_14038c49a;
LAB_14038c437:
          uVar4 = *(uint *)(lVar7 + 0x200020);
          if (0xffff < (ulonglong)uVar4) {
            if (DAT_14151fc10 == '\0') {
              DAT_14151fc10 = '\x01';
              (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
            }
            goto LAB_14038c49a;
          }
          *(uint *)(lVar7 + 0x200020) = uVar4 + 1;
          pauVar11 = (undefined1 (*) [16])(lVar7 + (ulonglong)uVar4 * 0x20 + 0x20);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar8;
          auVar16 = vpblendw_avx(auVar15,in_ZMM10._0_16_,0xf0);
          auVar16 = vpblendw_avx(auVar16,auVar18._0_16_,0x30);
          in_ZMM10 = ZEXT1664(auVar16);
          uVar8 = rdtsc();
          auVar16 = vpinsrq_avx(in_ZMM9._0_16_,
                                uVar8 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar8),0);
          in_ZMM9 = ZEXT1664(auVar16);
        }
        uVar8 = profilemeasurement_too_many_samples_some_data
                          (lVar12,param_2,param_3,param_5,param_1 + 0x18);
        auVar16 = in_ZMM6._0_16_;
        fVar2 = *(float *)(param_3 + 8);
        if (pauVar11 != (undefined1 (*) [16])0x0) {
          uVar10 = rdtsc();
          uVar8 = CONCAT44((int)(uVar8 >> 0x20),(int)uVar10);
          auVar5 = vpinsrq_avx(in_ZMM9._0_16_,uVar10 & 0xffffffff00000000 | uVar8,1);
          in_ZMM9 = ZEXT1664(auVar5);
          auVar15 = vmovntdq_avx(in_ZMM10._0_16_);
          *pauVar11 = auVar15;
          auVar15 = vmovntdq_avx(auVar5);
          pauVar11[1] = auVar15;
        }
        uVar9 = (undefined4)(uVar8 >> 0x20);
        if (fVar2 <= fVar17) break;
      }
      auVar16 = in_ZMM6._0_16_;
      bVar13 = (char)uVar14 + 1;
      uVar14 = (uint)bVar13;
      uVar9 = 0;
    } while ((uint)bVar13 < *(uint *)(param_1 + 0x110));
  }
  if (local_b0 != (undefined1 (*) [16])0x0) {
    uVar8 = rdtsc();
    auVar15 = vpinsrq_avx(auVar16,uVar8 & 0xffffffff00000000 | CONCAT44(uVar9,(int)uVar8),1);
    auVar16 = vmovntdq_avx(SUB6416(ZEXT864(0x14132bc8b),0));
    *local_b0 = auVar16;
    auVar16 = vmovntdq_avx(auVar15);
    local_b0[1] = auVar16;
  }
  return;
}

