/**
 * Function: static_void_jph_heightfieldshape_scollideconv
 * Address:  140322730
 * Signature: undefined static_void_jph_heightfieldshape_scollideconv(void)
 * Body size: 489 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void static_void_jph_heightfieldshape_scollideconv
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined4 extraout_var;
  undefined1 (*pauVar6) [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_2288 [32];
  undefined8 local_2268;
  undefined8 local_2260;
  undefined8 local_2258;
  undefined8 local_2250;
  undefined8 local_2248;
  undefined8 local_2238;
  undefined8 uStack_2230;
  undefined8 local_2228;
  undefined8 uStack_2220;
  undefined1 local_2218 [8608];
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x140322746;
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_2288;
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
      pauVar6 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      goto LAB_14032283a;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_14032283a:
  local_2228 = *param_4;
  uStack_2220 = param_4[1];
  local_2238 = *param_3;
  uStack_2230 = param_3[1];
  local_2248 = param_10;
  local_2250 = param_9;
  local_2258 = param_7;
  local_2260 = param_6;
  local_2268 = param_5;
  FUN_1405ba270(local_2218,param_1,&local_2238,&local_2228);
  local_70 = *param_8;
  local_78 = param_2;
  FUN_140322920(param_2,local_2218);
  if (pauVar6 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14139b95d),0));
    *pauVar6 = auVar1;
    auVar1 = vmovntdq_avx(auVar5);
    pauVar6[1] = auVar1;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_2288)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_2288);
}

