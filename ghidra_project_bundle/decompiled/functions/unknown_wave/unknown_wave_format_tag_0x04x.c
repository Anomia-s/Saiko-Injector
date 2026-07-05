/**
 * Function: unknown_wave_format_tag_0x04x
 * Address:  140166500
 * Signature: undefined unknown_wave_format_tag_0x04x(void)
 * Body size: 509 bytes
 */


bool unknown_wave_format_tag_0x04x(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (*(short *)(param_1 + 0x24) == 0) {
    uVar3 = FUN_1400fbed0("Invalid number of channels");
    return (bool)uVar3;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar3 = FUN_1400fbed0("Invalid sample rate");
    return (bool)uVar3;
  }
  if (*(int *)(param_1 + 0x28) < 0) {
    uVar3 = FUN_1400fbed0("Sample rate exceeds limit of %d",0x7fffffff);
    return (bool)uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x70);
  if ((iVar2 == 2) && (*(int *)(param_1 + 0x50) == -1)) {
    uVar3 = FUN_1400fbed0("Invalid fact chunk in WAVE file");
    return (bool)uVar3;
  }
  uVar1 = *(ushort *)(param_1 + 0x22);
  if (uVar1 < 0x12) {
    if ((0x200ccU >> (uVar1 & 0x1f) & 1) == 0) {
      if (uVar1 != 1) goto code_r0x000140166604;
    }
    else if ((iVar2 == 2) && (*(int *)(param_1 + 0x50) < 1)) {
      uVar3 = FUN_1400fbed0("Missing fact chunk in WAVE file");
      return (bool)uVar3;
    }
    if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
      uVar3 = FUN_1400fbed0("Missing wBitsPerSample field in WAVE fmt chunk");
      return (bool)uVar3;
    }
    if (*(short *)(param_1 + 0x32) == 0) {
      uVar3 = FUN_1400fbed0("Invalid bits per sample");
      return (bool)uVar3;
    }
    if (*(short *)(param_1 + 0x30) == 0) {
      *(undefined2 *)(param_1 + 0x30) = 1;
    }
    if ((*(int *)(param_1 + 0x50) == 1) &&
       ((iVar2 - 1U < 2 || ((iVar2 == 3 && (*(int *)(param_1 + 0x54) != 0)))))) {
      *(undefined4 *)(param_1 + 0x50) = 2;
    }
  }
code_r0x000140166604:
  switch(uVar1) {
  case 1:
  case 3:
    cVar4 = unsupported_block_alignment();
    break;
  case 2:
    cVar4 = invalid_ms_adpcm_bits_per_sample_of_u();
    break;
  case 6:
  case 7:
    cVar4 = invalid_companded_bits_per_sample_of_u();
    break;
  case 0x11:
    cVar4 = invalid_ima_adpcm_bits_per_sample_of_u();
    break;
  default:
    if ((uVar1 == 0x50) || (uVar1 == 0x55)) {
      uVar3 = FUN_1400fbed0("MPEG formats not supported");
      return (bool)uVar3;
    }
  case 4:
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    if (*(short *)(param_1 + 0x20) == -2) {
      uVar3 = FUN_1400fbed0("Unknown WAVE format GUID: %08x-%04x-%04x-%02x%02x%02x%02x%02x%02x%02x%02x"
                            ,*(undefined4 *)(param_1 + 0x40),*(undefined2 *)(param_1 + 0x44),
                            *(undefined2 *)(param_1 + 0x46),*(undefined1 *)(param_1 + 0x48),
                            *(undefined1 *)(param_1 + 0x49),*(undefined1 *)(param_1 + 0x4a),
                            *(undefined1 *)(param_1 + 0x4b),*(undefined1 *)(param_1 + 0x4c),
                            *(undefined1 *)(param_1 + 0x4d),*(undefined1 *)(param_1 + 0x4e),
                            *(undefined1 *)(param_1 + 0x4f));
      return (bool)uVar3;
    }
    uVar3 = FUN_1400fbed0("Unknown WAVE format tag: 0x%04x",uVar1);
    return (bool)uVar3;
  }
  return cVar4 != '\0';
}

