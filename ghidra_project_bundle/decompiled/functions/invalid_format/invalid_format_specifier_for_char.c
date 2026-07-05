/**
 * Function: invalid_format_specifier_for_char
 * Address:  14001cfb0
 * Signature: undefined invalid_format_specifier_for_char(void)
 * Body size: 379 bytes
 */


undefined8 *
invalid_format_specifier_for_char
          (undefined8 *param_1,undefined8 param_2,byte param_3,uint *param_4,undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_41;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined4 local_30;
  void *local_28;
  
  local_28 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_78);
  uVar2 = *param_4;
  bVar3 = (byte)uVar2 & 7;
  if ((bVar3 < 8) && ((0x83U >> (uVar2 & 7) & 1) != 0)) {
    if ((uVar2 & 0x38) == 0x20 || (uVar2 & 0x2c00) != 0) {
      local_41 = 1;
      fmtquill::v12::format_error::format_error
                ((format_error *)&stack0xffffffffffffffc0,"invalid format specifier for char");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((format_error *)&stack0xffffffffffffffc0,(ThrowInfo *)&DAT_141412540);
    }
    if ((bVar3 < 8) && ((0x83U >> bVar3 & 1) != 0)) {
      local_40 = CONCAT11(param_3,(*param_4 & 7) == 1);
      local_50 = (undefined1 *)&stack0xffffffffffffffc0;
      local_58 = 1;
      FUN_140017220(param_1,param_2,param_4,1);
      goto LAB_14001d0da;
    }
    uVar2 = *param_4;
  }
  if ((uVar2 & 0x4000) != 0) {
    _local_40 = (uint)param_3;
    local_30 = 2;
    cVar1 = FUN_140014610(param_2,&stack0xffffffffffffffc0,param_4,param_5);
    if (cVar1 != '\0') {
      *param_1 = param_2;
      goto LAB_14001d0da;
    }
    uVar2 = *param_4;
  }
  FUN_1400147b0(param_1,param_2,
                (ulonglong)param_3 |
                (ulonglong)*(uint *)((longlong)&DAT_140dc1f30 + (ulonglong)(uVar2 >> 8 & 0xc)) <<
                0x20,param_4);
LAB_14001d0da:
  if (DAT_1414ef3c0 != ((ulonglong)local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0((ulonglong)local_28 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

