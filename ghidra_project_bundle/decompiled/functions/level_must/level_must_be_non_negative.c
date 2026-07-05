/**
 * Function: level_must_be_non_negative
 * Address:  1406a8ad0
 * Signature: undefined level_must_be_non_negative(void)
 * Body size: 286 bytes
 */


void level_must_be_non_negative(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_178 [40];
  undefined1 local_150 [312];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_178;
  iVar1 = FUN_140473550(param_1,1);
  if (iVar1 == 7) {
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_178)) {
      FUN_1404734c0(param_1,1);
      return;
    }
  }
  else {
    if (param_2 == 0) {
      iVar1 = FUN_1406b7830(param_1,1);
    }
    else {
      iVar1 = FUN_1406b78a0(param_1,1,1);
    }
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(param_1,1,"level must be non-negative");
    }
    iVar2 = FUN_1406c0cc0(param_1,iVar1,&DAT_141349520,local_150);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(param_1,1,"invalid level");
    }
    iVar2 = FUN_140473550(param_1,0xffffffff);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"no function environment for tail call at level %d",iVar1);
    }
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_178)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_178);
}

