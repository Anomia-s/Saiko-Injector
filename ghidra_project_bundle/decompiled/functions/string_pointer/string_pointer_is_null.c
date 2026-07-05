/**
 * Function: string_pointer_is_null
 * Address:  140025dc0
 * Signature: undefined string_pointer_is_null(void)
 * Body size: 269 bytes
 */


undefined8
string_pointer_is_null
          (undefined8 param_1,undefined8 param_2,format_error_vftable *param_3,uint *param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 *local_50;
  undefined1 local_41;
  format_error_vftable *local_40;
  size_t local_38;
  void *local_28;
  
  local_28 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_78);
  local_40 = param_3;
  if ((*param_4 & 7) == 3) {
    local_58 = 2;
    do {
      lVar2 = local_58;
      local_58 = lVar2 + 1;
      bVar1 = (format_error_vftable *)0xf < param_3;
      param_3 = (format_error_vftable *)((ulonglong)param_3 >> 4);
    } while (bVar1);
    local_38 = CONCAT44(local_38._4_4_,(int)lVar2 + -1);
    local_50 = (undefined1 *)&stack0xffffffffffffffc0;
    FUN_14001b230(param_1,param_2,param_4,local_58);
  }
  else {
    if (param_3 == (format_error_vftable *)0x0) {
      local_41 = 1;
      fmtquill::v12::format_error::format_error
                ((format_error *)&stack0xffffffffffffffc0,"string pointer is null");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((format_error *)&stack0xffffffffffffffc0,(ThrowInfo *)&DAT_141412540);
    }
    local_38 = strlen((char *)param_3);
    FUN_140025ed0(param_1,param_2,&stack0xffffffffffffffc0,param_4);
  }
  if (DAT_1414ef3c0 != ((ulonglong)local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0((ulonglong)local_28 ^ (ulonglong)auStack_78);
  }
  return param_1;
}

