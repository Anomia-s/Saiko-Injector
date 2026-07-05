/**
 * Function: utf16fromutf8_attempted_write_beyond_end
 * Address:  140a44070
 * Signature: undefined utf16fromutf8_attempted_write_beyond_end(void)
 * Body size: 367 bytes
 */


ulonglong utf16fromutf8_attempted_write_beyond_end
                    (longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  void *local_20;
  
  local_20 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_58);
  uVar4 = 0;
  if (param_2 != 0) {
    uVar8 = 0;
    do {
      bVar2 = *(byte *)(param_1 + uVar8);
      uVar6 = (uint)bVar2;
      uVar7 = (ulonglong)uVar6;
      bVar3 = (&DAT_1412ac1e0)[uVar7];
      if (param_2 < uVar8 + bVar3) {
        if (uVar4 < param_4) {
          *(ushort *)(param_3 + uVar4 * 2) = (ushort)bVar2;
          uVar4 = uVar4 + 1;
        }
        break;
      }
      if (param_4 < (uVar4 - (uVar7 - 0xf5 < 0xfffffffffffffffb)) + 2) {
        std::runtime_error::runtime_error
                  ((runtime_error *)&stack0xffffffffffffffc8,
                   "UTF16FromUTF8: attempted write beyond end");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((runtime_error *)&stack0xffffffffffffffc8,(ThrowInfo *)&DAT_141457fb0);
      }
      if (bVar3 == 3) {
        uVar6 = (*(byte *)(param_1 + 1 + uVar8) & 0x3f) << 6 | (uint)(ushort)bVar2 << 0xc;
        bVar2 = *(byte *)(param_1 + 2 + uVar8);
        uVar8 = uVar8 + 3;
LAB_140a440b3:
        uVar7 = (ulonglong)(bVar2 & 0x3f | uVar6);
      }
      else {
        if (bVar3 == 2) {
          uVar6 = (uVar6 & 0x1f) << 6;
          bVar2 = *(byte *)(param_1 + 1 + uVar8);
          uVar8 = uVar8 + 2;
          goto LAB_140a440b3;
        }
        if (bVar3 == 1) {
          uVar8 = uVar8 + 1;
        }
        else {
          pbVar1 = (byte *)(param_1 + 1 + uVar8);
          uVar5 = (*(byte *)(param_1 + 2 + uVar8) & 0x3f) * 0x40;
          bVar2 = *(byte *)(param_1 + 3 + uVar8);
          uVar8 = uVar8 + 4;
          *(short *)(param_3 + uVar4 * 2) =
               (short)(((*pbVar1 & 0x3f) << 0xc | (uVar6 & 7) << 0x12) + uVar5 + 0x3ff0000 >> 10) +
               -0x2800;
          uVar4 = uVar4 + 1;
          uVar7 = (ulonglong)(bVar2 & 0x3f | uVar5 | 0xdc00);
        }
      }
      *(short *)(param_3 + uVar4 * 2) = (short)uVar7;
      uVar4 = uVar4 + 1;
    } while (uVar8 < param_2);
  }
  if (DAT_1414ef3c0 == ((ulonglong)local_20 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0((ulonglong)local_20 ^ (ulonglong)auStack_58);
}

