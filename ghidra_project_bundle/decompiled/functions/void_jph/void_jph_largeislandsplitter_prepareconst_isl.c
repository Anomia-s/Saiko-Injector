/**
 * Function: void_jph_largeislandsplitter_prepareconst_isl
 * Address:  140373230
 * Signature: undefined void_jph_largeislandsplitter_prepareconst_isl(void)
 * Body size: 605 bytes
 */


void void_jph_largeislandsplitter_prepareconst_isl
               (int *param_1,longlong param_2,int param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_b8 [36];
  int local_94;
  undefined1 (*local_90) [16];
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar8 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (uVar8 != 0) {
    uVar7 = *(uint *)(uVar8 + 0x200020);
    if ((ulonglong)uVar7 < 0x10000) {
      *(uint *)(uVar8 + 0x200020) = uVar7 + 1;
      pauVar9 = (undefined1 (*) [16])(uVar8 + (ulonglong)uVar7 * 0x20 + 0x20);
      uVar6 = rdtsc();
      uVar8 = CONCAT44((int)(uVar8 >> 0x20),(int)uVar6);
      uVar6 = uVar6 & 0xffffffff00000000 | uVar8;
      in_ZMM6 = ZEXT864(uVar6);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar6;
      param_1[8] = 0;
      iVar4 = *(int *)(param_2 + 0x6c);
      goto joined_r0x000140373312;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      uVar8 = (*(code *)PTR_vfunction4_1414f67c8)
                        ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  auVar10 = in_ZMM6._0_16_;
  pauVar9 = (undefined1 (*) [16])0x0;
  param_1[8] = 0;
  iVar4 = *(int *)(param_2 + 0x6c);
joined_r0x000140373312:
  if (iVar4 != 0) {
    uVar7 = 0;
    local_94 = param_3;
    local_90 = pauVar9;
    local_88 = param_4;
    do {
      FUN_140375370(param_2,uVar7,&local_68,&local_70);
      uVar8 = local_70 - local_68;
      FUN_140375310(param_2,uVar7,&local_78,&local_80);
      plVar2 = local_88;
      pauVar9 = local_90;
      auVar10 = in_ZMM6._0_16_;
      uVar3 = (int)((ulonglong)(local_80 - local_78) >> 2) + (int)(uVar8 >> 2);
      if (uVar3 < 0x80) {
        iVar4 = param_1[8];
        break;
      }
      param_1[10] = param_1[10] + 1;
      iVar4 = uVar3 + param_1[8];
      param_1[8] = iVar4;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_2 + 0x6c));
    uVar8 = 0;
    if (iVar4 != 0) {
      *param_1 = local_94;
      uVar5 = (**(code **)(*local_88 + 8))(local_88,local_94 << 2);
      *(undefined8 *)(param_1 + 2) = uVar5;
      iVar4 = param_1[8];
      uVar5 = (**(code **)(*plVar2 + 8))(plVar2,iVar4 << 2);
      *(undefined8 *)(param_1 + 4) = uVar5;
      uVar5 = (**(code **)(*plVar2 + 8))(plVar2,iVar4 << 2);
      *(undefined8 *)(param_1 + 6) = uVar5;
      uVar8 = (**(code **)(*plVar2 + 8))(plVar2,param_1[10] * 0x228);
      auVar10 = in_ZMM6._0_16_;
      *(ulonglong *)(param_1 + 0xc) = uVar8;
      if (param_1[10] != 0) {
        uVar8 = 0x218;
        uVar6 = 0;
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0xc) + uVar8) = 0xffffffff;
          uVar6 = uVar6 + 1;
          uVar8 = uVar8 + 0x228;
        } while (uVar6 < (uint)param_1[10]);
      }
    }
  }
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    uVar6 = rdtsc();
    auVar1 = vpinsrq_avx(auVar10,uVar6 & 0xffffffff00000000 |
                                 CONCAT44((int)(uVar8 >> 0x20),(int)uVar6),1);
    auVar10 = vmovntdq_avx(SUB6416(ZEXT864(0x141398dbb),0));
    *pauVar9 = auVar10;
    auVar10 = vmovntdq_avx(auVar1);
    pauVar9[1] = auVar10;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_b8);
}

