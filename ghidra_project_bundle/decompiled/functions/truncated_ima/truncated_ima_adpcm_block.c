/**
 * Function: truncated_ima_adpcm_block
 * Address:  140168560
 * Signature: undefined truncated_ima_adpcm_block(void)
 * Body size: 323 bytes
 */


ulonglong truncated_ima_adpcm_block(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar8 = (ulonglong)*(ushort *)(param_1 + 0x24) * 4;
  uVar5 = (ulonglong)*(ushort *)(param_1 + 0x30);
  if (param_2 >> 0x20 == 0) {
    uVar3 = (param_2 & 0xffffffff) / uVar5;
    uVar5 = (param_2 & 0xffffffff) % uVar5;
    iVar10 = *(int *)(param_1 + 0x6c);
    if (1 < iVar10 - 1U) goto LAB_1401685d2;
LAB_140168596:
    if ((param_2 < uVar8) || (uVar5 != 0)) {
      uVar5 = FUN_1400fbed0("Truncated IMA ADPCM block");
      return uVar5;
    }
    uVar3 = uVar3 * *(uint *)(param_1 + 0x38);
    *(ulonglong *)(param_1 + 0x58) = uVar3;
  }
  else {
    uVar3 = param_2 / uVar5;
    uVar5 = param_2 % uVar5;
    iVar10 = *(int *)(param_1 + 0x6c);
    if (iVar10 - 1U < 2) goto LAB_140168596;
LAB_1401685d2:
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x38);
    uVar3 = uVar3 * uVar9;
    *(ulonglong *)(param_1 + 0x58) = uVar3;
    if (((uVar5 != 0) && (iVar10 == 3)) && (uVar8 - 2 < uVar5)) {
      uVar7 = 1;
      if (uVar8 < uVar5) {
        uVar1 = (int)uVar5 + (uint)*(ushort *)(param_1 + 0x24) * -4 & 0xffff;
        uVar2 = uVar1 % (uint)(ushort)uVar8;
        uVar5 = 0;
        if (uVar8 - 4 < (ulonglong)(ushort)uVar2) {
          uVar5 = (ulonglong)(uVar2 * 2 & 6);
        }
        uVar7 = uVar5 + (ulonglong)(ushort)(uVar1 / (ushort)uVar8) * 8 + 1;
      }
      if (uVar7 < uVar9) {
        uVar9 = uVar7;
      }
      uVar3 = uVar3 + uVar9;
      *(ulonglong *)(param_1 + 0x58) = uVar3;
    }
  }
  puVar6 = (ulonglong *)(param_1 + 0x58);
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  if (*(int *)(param_1 + 0x50) == 2) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x54);
    if ((*(int *)(param_1 + 0x70) != 2) || ((longlong)uVar5 <= (longlong)uVar3)) {
      if ((longlong)uVar5 < (longlong)uVar3) {
        *puVar6 = uVar5;
        uVar5 = CONCAT71(uVar4,1);
        goto LAB_14016869a;
      }
      goto LAB_14016868e;
    }
    FUN_1400fbed0("Invalid number of sample frames in WAVE fact chunk (too many)");
    *puVar6 = 0xffffffffffffffff;
  }
  else {
LAB_14016868e:
    *puVar6 = uVar3;
    uVar5 = CONCAT71(uVar4,1);
    if (-1 < (longlong)uVar3) goto LAB_14016869a;
  }
  uVar5 = 0;
LAB_14016869a:
  return uVar5 & 0xffffffff;
}

