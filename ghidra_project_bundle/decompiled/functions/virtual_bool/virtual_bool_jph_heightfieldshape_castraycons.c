/**
 * Function: virtual_bool_jph_heightfieldshape_castraycons
 * Address:  1403171e0
 * Signature: undefined virtual_bool_jph_heightfieldshape_castraycons(void)
 * Body size: 441 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
virtual_bool_jph_heightfieldshape_castraycons
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8 [2];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258;
  ulonglong local_40;
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_2d8;
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
      pauVar5 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar4 = rdtsc();
      in_ZMM6 = ZEXT864(uVar4 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar4));
      goto LAB_1403172b5;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
LAB_1403172b5:
  local_2a8 = *param_2;
  uStack_2a0 = param_2[1];
  local_298 = param_2[2];
  uStack_290 = param_2[3];
  auVar1 = *(undefined1 (*) [16])(param_2 + 2);
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auVar6 = vsubps_avx(auVar6,auVar1);
  auVar6 = vmaxps_avx(auVar6,auVar1);
  local_278 = vcmpps_avx(auVar6,_DAT_140de3630,2);
  auVar7._8_4_ = 0x3f800000;
  auVar7._0_8_ = 0x3f8000003f800000;
  auVar7._12_4_ = 0x3f800000;
  auVar1 = vdivps_avx(auVar7,auVar1);
  local_288 = vblendvps_avx(auVar1,auVar7,local_278);
  local_260 = *param_3;
  local_258 = 0;
  local_2b8[0] = param_4;
  local_268 = param_1;
  FUN_1403173a0(local_288._0_8_,local_2b8);
  if (pauVar5 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar6 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b9f2),0));
    *pauVar5 = auVar1;
    auVar1 = vmovntdq_avx(auVar6);
    pauVar5[1] = auVar1;
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_2d8)) {
    return local_258;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_2d8);
}

