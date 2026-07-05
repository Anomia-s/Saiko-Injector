/**
 * Function: nodecodecquadtreehalffloat_internal_error_off
 * Address:  14030ae20
 * Signature: undefined nodecodecquadtreehalffloat_internal_error_off(void)
 * Body size: 165 bytes
 */


undefined8
nodecodecquadtreehalffloat_internal_error_off
          (ulonglong *param_1,undefined4 *param_2,undefined1 (*param_3) [16],ulonglong param_4,
          ulonglong param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  
  if ((*(uint *)(param_3[2] + 0xc) & *(uint *)(param_3[2] + 8)) == 0xffffffff) {
    param_4 = param_5;
  }
  if ((param_4 & 3) == 0) {
    if (param_4 < 0x3ffffffd) {
      if (param_5 == 0xffffffffffffffff) {
        param_5 = *param_1;
      }
      *param_2 = *(undefined4 *)*param_3;
      auVar2 = vpermilps_avx(*param_3,0xe9);
      uVar1 = vmovlps_avx(auVar2);
      *(undefined8 *)(param_2 + 1) = uVar1;
      param_2[3] = *(undefined4 *)param_3[1];
      auVar2 = vpermilps_avx(param_3[1],0xe9);
      uVar1 = vmovlps_avx(auVar2);
      *(undefined8 *)(param_2 + 4) = uVar1;
      param_2[6] = *(int *)(param_3[2] + 4) << 0x1c | (uint)(param_4 >> 2);
      *(char *)(param_2 + 7) = ' ' - (char)LZCOUNT((int)(param_5 >> 2));
      if (*(uint *)(param_3[2] + 4) < 0xf) {
        return 1;
      }
      pcVar3 = "NodeCodecQuadTreeHalfFloat: Too many triangles";
    }
    else {
      pcVar3 = "NodeCodecQuadTreeHalfFloat: Offset too large. Too much data.";
    }
  }
  else {
    pcVar3 = "NodeCodecQuadTreeHalfFloat: Internal Error: Offset has non-significant bits set";
  }
  *param_6 = pcVar3;
  return 0;
}

