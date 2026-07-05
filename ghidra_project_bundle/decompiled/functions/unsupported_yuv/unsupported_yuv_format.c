/**
 * Function: unsupported_yuv_format
 * Address:  14043f2b0
 * Signature: undefined unsupported_yuv_format(void)
 * Body size: 131 bytes
 */


undefined8 unsupported_yuv_format(int *param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 < 0x32315659) {
    if ((iVar1 == 0x3132564e) || (iVar1 == 0x3231564e)) {
LAB_14043f2db:
      if ((param_2 != (int *)0x0) &&
         ((((*param_2 != 0 || (param_2[1] != 0)) || (param_2[2] != param_1[3])) ||
          (param_2[3] != param_1[4])))) {
        uVar2 = FUN_1400fbed0("YV12, IYUV, NV12, NV21 textures only support full surface locks");
        return uVar2;
      }
      *param_3 = *(undefined8 *)(param_1 + 0xc);
      iVar1 = param_1[8];
      *param_4 = iVar1;
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  else if ((iVar1 == 0x56555949) || (iVar1 == 0x32315659)) goto LAB_14043f2db;
  uVar2 = FUN_1400fbed0("Unsupported YUV format");
  return uVar2;
}

