/**
 * Function: static_void_jph_heightfieldshape_scastconvexv
 * Address:  14031d320
 * Signature: undefined static_void_jph_heightfieldshape_scastconvexv(void)
 * Body size: 556 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void static_void_jph_heightfieldshape_scastconvexv
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
               undefined8 param_9)

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
  undefined1 auStack_13a8 [32];
  undefined8 local_1388;
  undefined8 local_1380;
  undefined8 local_1378;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined1 local_1358 [4240];
  undefined8 local_2c8;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x14031d336;
  local_58 = in_ZMM6._0_16_;
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_13a8;
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
      goto LAB_14031d40c;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
LAB_14031d40c:
  local_1368 = *param_4;
  uStack_1360 = param_4[1];
  local_1378 = param_9;
  local_1380 = param_7;
  local_1388 = param_6;
  FUN_1405bd180(local_1358,param_1,param_2,&local_1368);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auVar6 = vsubps_avx(auVar6,auVar1);
  auVar6 = vmaxps_avx(auVar6,auVar1);
  local_2a8 = vcmpps_avx(auVar6,_DAT_140de3630,2);
  auVar7._8_4_ = 0x3f800000;
  auVar7._0_8_ = 0x3f8000003f800000;
  auVar7._12_4_ = 0x3f800000;
  auVar1 = vdivps_avx(auVar7,auVar1);
  local_2b8 = vblendvps_avx(auVar1,auVar7,local_2a8);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar6 = *(undefined1 (*) [16])(param_1 + 0x80);
  local_298._0_4_ = (auVar6._0_4_ + auVar1._0_4_) * 0.5;
  local_298._4_4_ = (auVar6._4_4_ + auVar1._4_4_) * 0.5;
  local_298._8_4_ = (auVar6._8_4_ + auVar1._8_4_) * 0.5;
  local_298._12_4_ = (auVar6._12_4_ + auVar1._12_4_) * 0.5;
  auVar1 = vsubps_avx(auVar6,auVar1);
  local_288._0_4_ = auVar1._0_4_ * 0.5;
  local_288._4_4_ = auVar1._4_4_ * 0.5;
  local_288._8_4_ = auVar1._8_4_ * 0.5;
  local_288._12_4_ = auVar1._12_4_ * 0.5;
  local_278 = *param_8;
  local_2c8 = param_3;
  FUN_14031d550(param_3,local_1358);
  if (pauVar5 != (undefined1 (*) [16])0x0) {
    uVar4 = rdtsc();
    auVar6 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44(extraout_var,(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14139aeef),0));
    *pauVar5 = auVar1;
    auVar1 = vmovntdq_avx(auVar6);
    pauVar5[1] = auVar1;
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_13a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_13a8);
}

