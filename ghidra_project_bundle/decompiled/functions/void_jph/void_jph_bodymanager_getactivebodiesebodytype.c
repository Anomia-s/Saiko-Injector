/**
 * Function: void_jph_bodymanager_getactivebodiesebodytype
 * Address:  1400e49d0
 * Signature: undefined void_jph_bodymanager_getactivebodiesebodytype(void)
 * Body size: 466 bytes
 */


void void_jph_bodymanager_getactivebodiesebodytype
               (longlong param_1,ulonglong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined4 extraout_var;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  undefined1 in_ZMM6 [64];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar3 != 0) {
    uVar2 = *(uint *)(lVar3 + 0x200020);
    if ((ulonglong)uVar2 < 0x10000) {
      *(uint *)(lVar3 + 0x200020) = uVar2 + 1;
      pauVar9 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar10 = rdtsc();
      in_ZMM6 = ZEXT864(uVar10 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar10));
      goto LAB_1400e4a8c;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar9 = (undefined1 (*) [16])0x0;
LAB_1400e4a8c:
  profilemeasurement_too_many_samples_some_data(&local_48,param_1 + 0xa0);
  lVar4 = *(longlong *)(param_1 + 0xf0 + (param_2 & 0xff) * 8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x100 + (param_2 & 0xff) * 4);
  lVar3 = uVar10 * 4;
  *param_3 = 0;
  if ((ulonglong)param_3[1] < uVar10) {
    lVar7 = (*DAT_14151f530)(param_3[2],param_3[1] << 2,lVar3);
    param_3[2] = lVar7;
    param_3[1] = uVar10;
  }
  if (uVar10 != 0) {
    lVar7 = param_3[2];
    if (lVar7 == 0) {
      *param_3 = *param_3 + (lVar3 - 4U >> 2) + 1;
    }
    else {
      lVar8 = 0;
      while( true ) {
        lVar5 = *param_3;
        *param_3 = lVar5 + 1;
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + lVar5 * 4) = *(undefined4 *)(lVar4 + lVar8);
        }
        if (lVar3 + -4 == lVar8) break;
        lVar7 = param_3[2];
        lVar8 = lVar8 + 4;
      }
    }
  }
  _Mtx_unlock(local_48);
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    uVar10 = rdtsc();
    auVar6 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar10 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar10),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14132bb11),0));
    *pauVar9 = auVar1;
    auVar1 = vmovntdq_avx(auVar6);
    pauVar9[1] = auVar1;
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_68);
}

