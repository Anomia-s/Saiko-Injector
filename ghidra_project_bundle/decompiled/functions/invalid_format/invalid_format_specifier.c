/**
 * Function: invalid_format_specifier
 * Address:  14001c700
 * Signature: undefined invalid_format_specifier(void)
 * Body size: 145 bytes
 */


longlong invalid_format_specifier(undefined8 *param_1,byte param_2,uint param_3)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  void *local_10;
  
  local_10 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_58);
  if ((param_3 >> (*(uint *)(param_1 + 2) & 0x1f) & 1) == 0) {
    local_29 = 1;
    fmtquill::v12::format_error::format_error
              ((format_error *)&stack0xffffffffffffffd8,"invalid format specifier");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((format_error *)&stack0xffffffffffffffd8,(ThrowInfo *)&DAT_141412540);
  }
  *(uint *)param_1[1] = (uint)param_2 | *(uint *)param_1[1] & 0xfffffff8;
  if (DAT_1414ef3c0 != ((ulonglong)local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0((ulonglong)local_10 ^ (ulonglong)auStack_58);
  }
  return *(longlong *)*param_1 + 1;
}

