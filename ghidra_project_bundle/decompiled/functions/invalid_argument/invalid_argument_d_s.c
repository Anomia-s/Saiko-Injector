/**
 * Function: invalid_argument_d_s
 * Address:  1406b7300
 * Signature: noreturn undefined invalid_argument_d_s(void)
 * Body size: 130 bytes
 */


void invalid_argument_d_s(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  char *_Str1;
  
  if ((((*(ulonglong *)(param_1 + 0x40) < *(ulonglong *)(param_1 + 0x20)) &&
       (lVar1 = **(longlong **)(*(ulonglong *)(param_1 + 0x20) + 8), lVar1 != 0)) &&
      (*(char *)(lVar1 + 3) != '\0')) && (_Str1 = *(char **)(lVar1 + 0x28), _Str1 != (char *)0x0)) {
    iVar2 = strcmp(_Str1,"__namecall");
    if (iVar2 == 0) {
      if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_1406b7333;
      _Str1 = (char *)(*(longlong *)(param_1 + 0x70) + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"invalid argument #%d to \'%s\' (%s)",param_2,_Str1,param_3);
  }
LAB_1406b7333:
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"invalid argument #%d (%s)",param_2,param_3);
}

