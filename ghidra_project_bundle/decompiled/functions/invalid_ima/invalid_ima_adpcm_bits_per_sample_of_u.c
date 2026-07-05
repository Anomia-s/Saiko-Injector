/**
 * Function: invalid_ima_adpcm_bits_per_sample_of_u
 * Address:  140168340
 * Signature: undefined invalid_ima_adpcm_bits_per_sample_of_u(void)
 * Body size: 249 bytes
 */


void invalid_ima_adpcm_bits_per_sample_of_u(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x24);
  uVar2 = *(ushort *)(param_1 + 0x30);
  uVar4 = (ulonglong)uVar2 + (ulonglong)uVar1 * -4;
  uVar3 = *(ushort *)(param_1 + 0x32);
  uVar6 = (ulonglong)uVar1 * (ulonglong)uVar3;
  uVar5 = uVar4 * 8;
  if ((uVar4 & 0x1fffffffffffffff) >> 0x1d == 0) {
    uVar5 = uVar5 & 0xffffffff;
  }
  if (uVar3 != 4) {
    if (uVar3 == 3) {
      FUN_1400fbed0("3-bit IMA ADPCM currently not supported",uVar5 % uVar6);
      return;
    }
    FUN_1400fbed0("Invalid IMA ADPCM bits per sample of %u",(ulonglong)uVar3);
    return;
  }
  uVar5 = uVar5 / uVar6;
  if ((ulonglong)uVar2 < (ulonglong)uVar1 * 4 || (uVar2 & 3) != 0) {
    FUN_1400fbed0("Invalid IMA ADPCM block size (nBlockAlign)");
    return;
  }
  if (((*(short *)(param_1 + 0x20) != -2) && (0x13 < *(ulonglong *)(param_1 + 0x18))) &&
     (1 < *(ushort *)(param_1 + 0x34))) {
    *(uint *)(param_1 + 0x38) = (uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0x12);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    *(int *)(param_1 + 0x38) = (int)uVar5 + 1;
    uVar4 = uVar5 & 0xffffffff;
  }
  else {
    uVar4 = (ulonglong)(*(int *)(param_1 + 0x38) - 1);
  }
  if (uVar4 <= uVar5) {
    truncated_ima_adpcm_block(param_1,param_2);
    return;
  }
  FUN_1400fbed0("Invalid number of samples per IMA ADPCM block (wSamplesPerBlock)");
  return;
}

