/**
 * Function: virtual_void_jph_heightfieldshape_castraycons
 * Address:  140318e30
 * Signature: undefined virtual_void_jph_heightfieldshape_castraycons(void)
 * Body size: 476 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void virtual_void_jph_heightfieldshape_castraycons
               (undefined8 param_1,undefined8 *param_2,undefined1 *param_3,undefined8 *param_4,
               undefined8 param_5,longlong *param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8 [2];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268;
  undefined8 local_260;
  undefined8 local_258;
  ulonglong local_40;
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_2d8;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x170);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x200020);
    if ((ulonglong)uVar1 < 0x10000) {
      *(uint *)(lVar2 + 0x200020) = uVar1 + 1;
      pauVar5 = (undefined1 (*) [16])(lVar2 + (ulonglong)uVar1 * 0x20 + 0x20);
      uVar3 = rdtsc();
      in_ZMM6 = ZEXT864(uVar3 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar3));
      goto LAB_140318f0c;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
LAB_140318f0c:
  uVar4 = (**(code **)(*param_6 + 0x10))(param_6,param_1,param_4);
  auVar8 = in_ZMM6._0_16_;
  if ((char)uVar4 != '\0') {
    local_2b8[0] = param_5;
    local_2a8 = *param_2;
    uStack_2a0 = param_2[1];
    local_298 = param_2[2];
    uStack_290 = param_2[3];
    auVar8 = *(undefined1 (*) [16])(param_2 + 2);
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    auVar6 = vsubps_avx(auVar6,auVar8);
    auVar6 = vmaxps_avx(auVar6,auVar8);
    local_278 = vcmpps_avx(auVar6,_DAT_140de3630,2);
    auVar7._8_4_ = 0x3f800000;
    auVar7._0_8_ = 0x3f8000003f800000;
    auVar7._12_4_ = 0x3f800000;
    auVar8 = vdivps_avx(auVar7,auVar8);
    local_288 = vblendvps_avx(auVar8,auVar7,local_278);
    local_268 = *param_3;
    local_258 = *param_4;
    local_260 = param_1;
    uVar4 = FUN_140319010(param_1,local_2b8);
    auVar8 = in_ZMM6._0_16_;
  }
  if (pauVar5 != (undefined1 (*) [16])0x0) {
    uVar3 = rdtsc();
    auVar6 = vpinsrq_avx(auVar8,uVar3 & 0xffffffff00000000 |
                                CONCAT44((int)((ulonglong)uVar4 >> 0x20),(int)uVar3),1);
    auVar8 = vmovntdq_avx(SUB6416(ZEXT864(0x14132c22c),0));
    *pauVar5 = auVar8;
    auVar8 = vmovntdq_avx(auVar6);
    pauVar5[1] = auVar8;
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_2d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_2d8);
}

