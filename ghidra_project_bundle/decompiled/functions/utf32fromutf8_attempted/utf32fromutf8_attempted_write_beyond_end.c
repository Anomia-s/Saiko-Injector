/**
 * Function: utf32fromutf8_attempted_write_beyond_end
 * Address:  140a44200
 * Signature: undefined utf32fromutf8_attempted_write_beyond_end(void)
 * Body size: 315 bytes
 */


ulonglong utf32fromutf8_attempted_write_beyond_end
                    (longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  void *local_20;
  
  local_20 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_58);
  uVar5 = 0;
  if (param_2 != 0) {
    uVar7 = 0;
    do {
      bVar4 = (&DAT_1412ac1e0)[*(byte *)(param_1 + uVar7)];
      uVar6 = (uint)*(byte *)(param_1 + uVar7);
      if (param_2 < uVar7 + bVar4) {
        if (uVar5 < param_4) {
          *(uint *)(param_3 + uVar5 * 4) = uVar6;
          uVar5 = uVar5 + 1;
        }
        break;
      }
      if (param_4 == uVar5) {
        std::runtime_error::runtime_error
                  ((runtime_error *)&stack0xffffffffffffffc8,
                   "UTF32FromUTF8: attempted write beyond end");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((runtime_error *)&stack0xffffffffffffffc8,(ThrowInfo *)&DAT_141457fb0);
      }
      if (bVar4 == 3) {
        pbVar1 = (byte *)(param_1 + 1 + uVar7);
        pbVar2 = (byte *)(param_1 + 2 + uVar7);
        uVar7 = uVar7 + 3;
        uVar6 = *pbVar2 & 0x3f | (*pbVar1 & 0x3f) << 6 | (uVar6 & 0xf) << 0xc;
      }
      else if (bVar4 == 2) {
        pbVar1 = (byte *)(param_1 + 1 + uVar7);
        uVar7 = uVar7 + 2;
        uVar6 = *pbVar1 & 0x3f | (uVar6 & 0x1f) << 6;
      }
      else if (bVar4 == 1) {
        uVar7 = uVar7 + 1;
      }
      else {
        pbVar1 = (byte *)(param_1 + 1 + uVar7);
        pbVar2 = (byte *)(param_1 + 2 + uVar7);
        pbVar3 = (byte *)(param_1 + 3 + uVar7);
        uVar7 = uVar7 + 4;
        uVar6 = *pbVar3 & 0x3f |
                (*pbVar2 & 0x3f) << 6 | (*pbVar1 & 0x3f) << 0xc | (uVar6 & 7) << 0x12;
      }
      *(uint *)(param_3 + uVar5 * 4) = uVar6;
      uVar5 = uVar5 + 1;
    } while (uVar7 < param_2);
  }
  if (DAT_1414ef3c0 == ((ulonglong)local_20 ^ (ulonglong)auStack_58)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0((ulonglong)local_20 ^ (ulonglong)auStack_58);
}

