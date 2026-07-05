/**
 * Function: invalid_companded_bits_per_sample_of_u
 * Address:  140168030
 * Signature: undefined invalid_companded_bits_per_sample_of_u(void)
 * Body size: 210 bytes
 */


undefined8 invalid_companded_bits_per_sample_of_u(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (*(short *)(param_1 + 0x32) != 8) {
    uVar5 = FUN_1400fbed0("Invalid companded bits per sample of %u",*(short *)(param_1 + 0x32));
    return uVar5;
  }
  uVar1 = *(ushort *)(param_1 + 0x30);
  if (uVar1 != *(ushort *)(param_1 + 0x24)) {
    uVar5 = FUN_1400fbed0("Unsupported block alignment");
    return uVar5;
  }
  if (((1 < uVar1) && (*(int *)(param_1 + 0x6c) - 1U < 2)) &&
     ((int)((param_2 & 0xffffffff) % (ulonglong)(uint)uVar1) != 0)) {
    uVar5 = FUN_1400fbed0("Truncated data chunk in WAVE file");
    return uVar5;
  }
  uVar3 = (param_2 & 0xffffffff) / (ulonglong)(uint)uVar1;
  uVar4 = (uint)uVar3;
  if (*(int *)(param_1 + 0x50) == 2) {
    uVar2 = *(uint *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x70) == 2 && uVar4 < uVar2) {
      FUN_1400fbed0("Invalid number of sample frames in WAVE fact chunk (too many)");
      *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
      return 0;
    }
    uVar6 = (ulonglong)uVar2;
    if (uVar2 < uVar4) goto LAB_1401680f4;
  }
  uVar6 = uVar3;
LAB_1401680f4:
  *(ulonglong *)(param_1 + 0x58) = uVar6;
  return CONCAT71((int7)(uVar6 >> 8),1);
}

