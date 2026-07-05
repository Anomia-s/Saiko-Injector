/**
 * Function: truncated_ms_adpcm_block
 * Address:  140168440
 * Signature: undefined truncated_ms_adpcm_block(void)
 * Body size: 276 bytes
 */


ulonglong truncated_ms_adpcm_block(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  uVar6 = param_2;
  if (param_2 >> 0x20 == 0) {
    uVar6 = param_2 & 0xffffffff;
  }
  uVar3 = uVar6 / *(ushort *)(param_1 + 0x30);
  uVar6 = uVar6 % (ulonglong)*(ushort *)(param_1 + 0x30);
  uVar2 = (ulonglong)*(ushort *)(param_1 + 0x24) * 7;
  if (*(int *)(param_1 + 0x6c) - 1U < 2) {
    if ((param_2 < uVar2) || (uVar6 != 0)) {
      uVar6 = FUN_1400fbed0("Truncated MS ADPCM block");
      return uVar6;
    }
    uVar3 = uVar3 * *(uint *)(param_1 + 0x38);
    *(ulonglong *)(param_1 + 0x58) = uVar3;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38);
    uVar3 = uVar3 * uVar1;
    *(ulonglong *)(param_1 + 0x58) = uVar3;
    if (((uVar6 != 0) && (*(int *)(param_1 + 0x6c) == 3)) && (uVar2 <= uVar6)) {
      uVar5 = (int)((ulonglong)(uint)(((int)uVar6 - (int)uVar2) * 8) /
                   ((ulonglong)*(ushort *)(param_1 + 0x32) * (ulonglong)*(ushort *)(param_1 + 0x24))
                   ) + 2;
      if (uVar1 <= uVar5) {
        uVar5 = uVar1;
      }
      uVar3 = uVar3 + uVar5;
      *(ulonglong *)(param_1 + 0x58) = uVar3;
    }
  }
  puVar7 = (ulonglong *)(param_1 + 0x58);
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  if (*(int *)(param_1 + 0x50) == 2) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x54);
    if ((*(int *)(param_1 + 0x70) != 2) || ((longlong)uVar6 <= (longlong)uVar3)) {
      if ((longlong)uVar6 < (longlong)uVar3) {
        *puVar7 = uVar6;
        uVar6 = CONCAT71(uVar4,1);
        goto LAB_14016854b;
      }
      goto LAB_14016853f;
    }
    FUN_1400fbed0("Invalid number of sample frames in WAVE fact chunk (too many)");
    *puVar7 = 0xffffffffffffffff;
  }
  else {
LAB_14016853f:
    *puVar7 = uVar3;
    uVar6 = CONCAT71(uVar4,1);
    if (-1 < (longlong)uVar3) goto LAB_14016854b;
  }
  uVar6 = 0;
LAB_14016854b:
  return uVar6 & 0xffffffff;
}

