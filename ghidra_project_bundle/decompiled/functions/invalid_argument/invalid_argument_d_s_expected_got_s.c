/**
 * Function: invalid_argument_d_s_expected_got_s
 * Address:  1406b73f0
 * Signature: noreturn undefined invalid_argument_d_s_expected_got_s(void)
 * Body size: 244 bytes
 */


void invalid_argument_d_s_expected_got_s(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *_Str1;
  
  if ((((*(ulonglong *)(param_1 + 0x40) < *(ulonglong *)(param_1 + 0x20)) &&
       (lVar2 = **(longlong **)(*(ulonglong *)(param_1 + 0x20) + 8), lVar2 != 0)) &&
      (*(char *)(lVar2 + 3) != '\0')) && (_Str1 = *(char **)(lVar2 + 0x28), _Str1 != (char *)0x0)) {
    iVar1 = strcmp(_Str1,"__namecall");
    if ((iVar1 == 0) &&
       (_Str1 = (char *)(*(longlong *)(param_1 + 0x70) + 0x18), *(longlong *)(param_1 + 0x70) == 0))
    {
      _Str1 = (char *)0x0;
    }
  }
  else {
    _Str1 = (char *)0x0;
  }
  lVar2 = FUN_140472e80(param_1,param_2);
  if (lVar2 != 0) {
    uVar3 = FUN_1406bbe50(param_1,lVar2);
    if (_Str1 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"invalid argument #%d to \'%s\' (%s expected, got %s)",param_2,_Str1,
                    param_3,uVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"invalid argument #%d (%s expected, got %s)",param_2,param_3,uVar3);
  }
  if (_Str1 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"missing argument #%d to \'%s\' (%s expected)",param_2,_Str1,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"missing argument #%d (%s expected)",param_2,param_3);
}

