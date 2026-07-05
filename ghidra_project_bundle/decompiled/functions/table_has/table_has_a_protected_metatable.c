/**
 * Function: table_has_a_protected_metatable
 * Address:  1406aa0d0
 * Signature: undefined table_has_a_protected_metatable(void)
 * Body size: 168 bytes
 */


undefined8 table_has_a_protected_metatable(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  FUN_1406b76d0(param_1,1,6);
  iVar1 = FUN_1406b7a10(param_1,1,"__metatable");
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,1,"table has a protected metatable");
  }
  local_20 = FUN_1406bfbf0(param_1,**(undefined8 **)(param_1 + 0x10));
  local_14 = 6;
  FUN_140472ee0(param_1,&local_20);
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_48)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_48);
}

