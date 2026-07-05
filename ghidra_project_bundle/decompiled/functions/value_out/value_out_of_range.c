/**
 * Function: value_out_of_range
 * Address:  1406b1750
 * Signature: undefined value_out_of_range(void)
 * Body size: 546 bytes
 */


undefined8 value_out_of_range(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_288 [32];
  undefined1 local_268 [544];
  undefined1 auStack_48 [7];
  byte bStack_41;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_288;
  iVar1 = FUN_1404731e0();
  if (iVar1 == 1) {
    iVar1 = 1;
    uVar2 = FUN_1406b7830(param_1,1);
    if (0x10ffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(param_1,1,"value out of range");
    }
    lVar3 = 7;
    if (0x7f < uVar2) {
      uVar4 = 0x3f;
      lVar3 = 0x700000000;
      lVar6 = 0;
      do {
        lVar3 = lVar3 + -0x100000000;
        (&bStack_41)[lVar6] = (byte)uVar2 & 0x3f | 0x80;
        uVar2 = uVar2 >> 6;
        uVar4 = uVar4 >> 1;
        lVar6 = lVar6 + -1;
      } while (uVar4 < uVar2);
      iVar1 = 1 - (int)lVar6;
      uVar2 = uVar2 | ~uVar4 * 2;
      lVar3 = lVar3 >> 0x20;
    }
    auStack_48[lVar3] = (char)uVar2;
    FUN_1404741b0(param_1,(longlong)&local_40 + (longlong)-iVar1,(longlong)iVar1);
  }
  else {
    FUN_1406b80b0(param_1,local_268);
    if (0 < iVar1) {
      iVar5 = 1;
      do {
        uVar2 = FUN_1406b7830(param_1,iVar5);
        if (0x10ffff < uVar2) {
                    /* WARNING: Subroutine does not return */
          invalid_argument_d_s(param_1,iVar5,"value out of range");
        }
        if (uVar2 < 0x80) {
          iVar7 = 1;
          lVar3 = 7;
        }
        else {
          uVar4 = 0x3f;
          lVar6 = 0;
          lVar3 = 0x700000000;
          do {
            lVar3 = lVar3 + -0x100000000;
            (&bStack_41)[lVar6] = (byte)uVar2 & 0x3f | 0x80;
            uVar2 = uVar2 >> 6;
            uVar4 = uVar4 >> 1;
            lVar6 = lVar6 + -1;
          } while (uVar4 < uVar2);
          iVar7 = 1 - (int)lVar6;
          uVar2 = uVar2 | ~uVar4 * 2;
          lVar3 = lVar3 >> 0x20;
        }
        auStack_48[lVar3] = (char)uVar2;
        buffer_too_large(local_268,(longlong)&local_40 + (longlong)-iVar7);
        bVar8 = iVar5 != iVar1;
        iVar5 = iVar5 + 1;
      } while (bVar8);
    }
    FUN_1406b82d0(local_268);
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_288)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_288);
}

