/**
 * Function: haptic_unknown_direction_type
 * Address:  1406541c0
 * Signature: undefined haptic_unknown_direction_type(void)
 * Body size: 200 bytes
 */


undefined8 haptic_unknown_direction_type(longlong param_1,undefined1 *param_2,int param_3)

{
  undefined4 *_Dst;
  undefined8 uVar1;
  
  if (param_3 == 0) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x40;
    *(undefined8 *)(param_1 + 0x28) = 0;
    return 1;
  }
  _Dst = (undefined4 *)FUN_140160c40((longlong)param_3 << 2);
  if (_Dst == (undefined4 *)0x0) {
    return 0;
  }
  memset(_Dst,0,(longlong)param_3 << 2);
  *(undefined4 **)(param_1 + 0x28) = _Dst;
  switch(*param_2) {
  case 0:
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x20;
    *_Dst = *(undefined4 *)(param_2 + 4);
    break;
  case 1:
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x10;
    goto LAB_140654254;
  case 2:
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x40;
LAB_140654254:
    *_Dst = *(undefined4 *)(param_2 + 4);
    if (param_3 < 2) {
      return 1;
    }
    _Dst[1] = *(undefined4 *)(param_2 + 8);
    if (param_3 != 2) {
      _Dst[2] = *(undefined4 *)(param_2 + 0xc);
      return 1;
    }
    return 1;
  case 3:
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x10;
    *_Dst = 0;
    break;
  default:
    uVar1 = FUN_1400fbed0("Haptic: Unknown direction type.");
    return uVar1;
  }
  return 1;
}

