/**
 * Function: invalid_ms_adpcm_bits_per_sample_of_u
 * Address:  140168110
 * Signature: undefined invalid_ms_adpcm_bits_per_sample_of_u(void)
 * Body size: 554 bytes
 */


undefined8 invalid_ms_adpcm_bits_per_sample_of_u(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)*(ushort *)(param_1 + 0x24);
  uVar4 = (ulonglong)*(ushort *)(param_1 + 0x30) + uVar12 * -7;
  uVar2 = *(ushort *)(param_1 + 0x32);
  uVar5 = uVar4 * 8;
  if ((uVar4 & 0x1fffffffffffffff) >> 0x1d == 0) {
    uVar5 = uVar5 & 0xffffffff;
  }
  uVar4 = uVar5 % (uVar12 * uVar2);
  if (*(ushort *)(param_1 + 0x24) < 3) {
    uVar5 = uVar5 / (uVar12 * uVar2);
    if (uVar2 == 4) {
      if ((ulonglong)*(ushort *)(param_1 + 0x30) < uVar12 * 7) {
        uVar6 = FUN_1400fbed0("Invalid MS ADPCM block size (nBlockAlign)",uVar4);
      }
      else if (*(short *)(param_1 + 0x20) == -2) {
        uVar6 = FUN_1400fbed0("MS ADPCM with the extensible header is not supported",uVar4);
      }
      else if (*(ulonglong *)(param_1 + 0x18) < 0x16) {
        uVar6 = FUN_1400fbed0("Could not read MS ADPCM format header",uVar4);
      }
      else {
        *(uint *)(param_1 + 0x38) = (uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0x12);
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x10) + 0x14);
        uVar10 = 0x100;
        if (uVar2 < 0x100) {
          uVar10 = (uint)uVar2;
        }
        uVar8 = uVar10 * 4;
        if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)uVar8 + 0x16) {
          uVar6 = FUN_1400fbed0("Could not read custom coefficients in MS ADPCM format header");
        }
        else if ((uint)*(ushort *)(param_1 + 0x34) < uVar8 + 4) {
          uVar6 = FUN_1400fbed0("Invalid MS ADPCM format header (too small)");
        }
        else if (uVar2 < 7) {
          uVar6 = FUN_1400fbed0("Missing required coefficients in MS ADPCM format header");
        }
        else {
          puVar7 = (undefined2 *)FUN_140160c40((ulonglong)uVar8 + 0x18);
          *(undefined2 **)(param_1 + 0x60) = puVar7;
          if (puVar7 == (undefined2 *)0x0) {
            uVar6 = 0;
          }
          else {
            *(undefined2 **)(puVar7 + 4) = puVar7 + 8;
            *puVar7 = (short)uVar10;
            psVar11 = &DAT_140decd00;
            uVar4 = 0;
            do {
              bVar1 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x17 + uVar4 * 2);
              iVar9 = (uint)bVar1 * 0x100;
              iVar3 = iVar9 + -0x10000;
              if (-1 < (char)bVar1) {
                iVar3 = iVar9;
              }
              iVar3 = iVar3 + (uint)*(byte *)(*(longlong *)(param_1 + 0x10) + 0x16 + uVar4 * 2);
              if ((uVar4 < 0xe) && (iVar3 != *psVar11)) {
                uVar6 = FUN_1400fbed0("Wrong preset coefficients in MS ADPCM format header");
                return uVar6;
              }
              *(short *)(*(longlong *)(puVar7 + 4) + uVar4 * 2) = (short)iVar3;
              uVar4 = uVar4 + 1;
              psVar11 = psVar11 + 1;
            } while (uVar10 * 2 != uVar4);
            iVar3 = *(int *)(param_1 + 0x38);
            if (iVar3 == 0) {
              iVar3 = (int)uVar5 + 2;
              *(int *)(param_1 + 0x38) = iVar3;
            }
            if (iVar3 - 2 <= uVar5 && iVar3 != 1) {
              uVar6 = truncated_ms_adpcm_block(param_1,param_2);
              return uVar6;
            }
            uVar6 = FUN_1400fbed0("Invalid number of samples per MS ADPCM block (wSamplesPerBlock)")
            ;
          }
        }
      }
    }
    else {
      uVar6 = FUN_1400fbed0("Invalid MS ADPCM bits per sample of %u",uVar2);
    }
  }
  else {
    uVar6 = FUN_1400fbed0("Invalid number of channels",uVar4);
  }
  return uVar6;
}

