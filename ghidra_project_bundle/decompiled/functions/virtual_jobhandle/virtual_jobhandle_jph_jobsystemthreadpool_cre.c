/**
 * Function: virtual_jobhandle_jph_jobsystemthreadpool_cre
 * Address:  1400a2a10
 * Signature: undefined virtual_jobhandle_jph_jobsystemthreadpool_cre(void)
 * Body size: 515 bytes
 */


longlong *
virtual_jobhandle_jph_jobsystemthreadpool_cre
          (longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,int param_6)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 *local_90;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_64;
  ulonglong local_60;
  undefined1 local_58 [16];
  
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  local_70 = param_3;
  local_64 = param_4;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar5 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar5 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar5 + 1;
      pauVar8 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar5 * 0x20 + 0x20);
      uVar6 = rdtsc();
      in_ZMM6 = ZEXT864(uVar6 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar6));
      goto LAB_1400a2ae1;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar8 = (undefined1 (*) [16])0x0;
LAB_1400a2ae1:
  local_98 = param_5;
  local_90 = &param_6;
  local_78 = param_1;
  uVar5 = FUN_1400a2c20(param_1 + 0xc0,&local_70,&local_64,&local_78);
  if (uVar5 == 0xffffffff) {
    local_80 = param_2;
    do {
      local_78 = 100;
      FUN_140011270(&local_78);
      local_98 = param_5;
      local_90 = &param_6;
      local_78 = param_1;
      uVar5 = FUN_1400a2c20(param_1 + 0xc0,&local_70,&local_64,&local_78);
      param_2 = local_80;
    } while (uVar5 == 0xffffffff);
  }
  auVar9 = in_ZMM6._0_16_;
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0xd8) +
           (ulonglong)(uVar5 >> (*(byte *)(param_1 + 0xc4) & 0x1f)) * 8);
  uVar6 = (ulonglong)(uVar5 & *(uint *)(param_1 + 200));
  lVar7 = uVar6 * 0x70 + lVar2;
  *param_2 = lVar7;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar7 + 0x60);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_6 == 0) {
    uVar6 = virtual_void_jph_jobsystemthreadpool_queuejob(param_1);
    auVar9 = in_ZMM6._0_16_;
  }
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar4 = vpinsrq_avx(auVar9,uVar3 & 0xffffffff00000000 |
                                CONCAT44((int)(uVar6 >> 0x20),(int)uVar3),1);
    auVar9 = vmovntdq_avx(SUB6416(ZEXT864(0x14139887e),0));
    *pauVar8 = auVar9;
    auVar9 = vmovntdq_avx(auVar4);
    pauVar8[1] = auVar9;
  }
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_b8);
  }
  return param_2;
}

