/**
 * Function: unsupported_block_alignment
 * Address:  140167f10
 * Signature: undefined unsupported_block_alignment(void)
 * Body size: 287 bytes
 */


undefined8 unsupported_block_alignment(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar4 = *(ushort *)(param_1 + 0x32);
  if (*(short *)(param_1 + 0x22) == 3) {
    bVar8 = uVar4 != 0x20;
    uVar4 = 0x20;
    if (bVar8) {
      uVar6 = FUN_1400fbed0("%u-bit IEEE floating-point format not supported");
      return uVar6;
    }
  }
  else if ((*(short *)(param_1 + 0x22) == 1) && (3 < ((uint)uVar4 << 0x1d | uVar4 - 8 >> 3))) {
    uVar6 = FUN_1400fbed0("%u-bit PCM format not supported");
    return uVar6;
  }
  uVar1 = *(ushort *)(param_1 + 0x30);
  if (((uint)uVar4 * (uint)*(ushort *)(param_1 + 0x24)) % ((uint)uVar1 * 8) != 0) {
    uVar6 = FUN_1400fbed0("Unsupported block alignment");
    return uVar6;
  }
  if (((1 < uVar1) && (*(int *)(param_1 + 0x6c) - 1U < 2)) &&
     ((int)((param_2 & 0xffffffff) % (ulonglong)(uint)uVar1) != 0)) {
    uVar6 = FUN_1400fbed0("Truncated data chunk in WAVE file");
    return uVar6;
  }
  uVar3 = (param_2 & 0xffffffff) / (ulonglong)(uint)uVar1;
  uVar5 = (uint)uVar3;
  if (*(int *)(param_1 + 0x50) == 2) {
    uVar2 = *(uint *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x70) == 2 && uVar5 < uVar2) {
      FUN_1400fbed0("Invalid number of sample frames in WAVE fact chunk (too many)");
      *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
      return 0;
    }
    uVar7 = (ulonglong)uVar2;
    if (uVar2 < uVar5) goto LAB_140168021;
  }
  uVar7 = uVar3;
LAB_140168021:
  *(ulonglong *)(param_1 + 0x58) = uVar7;
  return CONCAT71((int7)(uVar7 >> 8),1);
}

