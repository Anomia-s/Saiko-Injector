/**
 * Function: virtual_bool_jph_convexshape_castrayconst_ray
 * Address:  1400ed620
 * Signature: ulonglong __thiscall virtual_bool_jph_convexshape_castrayconst_ray(void * this, undefined8 * param_1, undefined4 * param_2, longlong param_3)
 * Body size: 457 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong __thiscall
virtual_bool_jph_convexshape_castrayconst_ray
          (void *this,undefined8 *param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 in_ZMM6 [64];
  undefined1 auStack_11b8 [32];
  undefined8 local_1198;
  longlong local_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined4 local_1168;
  undefined4 uStack_1164;
  undefined4 uStack_1160;
  undefined4 uStack_115c;
  undefined1 local_1158 [192];
  undefined4 local_1098;
  undefined1 local_1088 [4168];
  ulonglong local_40;
  undefined1 local_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = 0x1400ed62f;
  local_38 = in_ZMM6._0_16_;
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_11b8;
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
      pauVar8 = (undefined1 (*) [16])(lVar3 + (ulonglong)uVar2 * 0x20 + 0x20);
      uVar6 = rdtsc();
      in_ZMM6 = ZEXT864(uVar6 & 0xffffffff00000000 |
                        CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar6));
      goto LAB_1400ed6fb;
    }
    if (DAT_14151fc10 == '\0') {
      DAT_14151fc10 = '\x01';
      (*(code *)PTR_vfunction4_1414f67c8)
                ("ProfileMeasurement: Too many samples, some data will be lost!");
    }
  }
  pauVar8 = (undefined1 (*) [16])0x0;
LAB_1400ed6fb:
  local_1168 = 0x3f800000;
  uStack_1164 = 0x3f800000;
  uStack_1160 = 0x3f800000;
  uStack_115c = 0x3f800000;
  local_1198 = (**(code **)(*(longlong *)this + 0x128))(0x3f8000003f800000,1,local_1088,&local_1168)
  ;
  local_1098 = 0;
  local_1190 = param_3 + 4;
  local_1178 = param_1[2];
  uStack_1170 = param_1[3];
  local_1188 = *param_1;
  uStack_1180 = param_1[1];
  uVar6 = FUN_1400ed7f0(local_1158,&local_1188,&local_1178,0x38d1b717);
  if ((char)uVar6 != '\0') {
    *(undefined4 *)(param_3 + 8) = *param_2;
  }
  uVar7 = uVar6;
  if (pauVar8 != (undefined1 (*) [16])0x0) {
    uVar7 = uVar6 & 0xffffffff;
    uVar4 = rdtsc();
    auVar5 = vpinsrq_avx(in_ZMM6._0_16_,
                         uVar4 & 0xffffffff00000000 | CONCAT44((int)(uVar6 >> 0x20),(int)uVar4),1);
    auVar1 = vmovntdq_avx(SUB6416(ZEXT864(0x14132b7d2),0));
    *pauVar8 = auVar1;
    auVar1 = vmovntdq_avx(auVar5);
    pauVar8[1] = auVar1;
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_11b8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_11b8);
}

