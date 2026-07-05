/**
 * Function: table_is_already_frozen
 * Address:  1406a9ff0
 * Signature: undefined table_is_already_frozen(void)
 * Body size: 148 bytes
 */


undefined8 table_is_already_frozen(undefined8 param_1)

{
  int iVar1;
  
  FUN_1406b76d0(param_1,1,6);
  iVar1 = FUN_1404749a0(param_1,1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,1,"table is already frozen");
  }
  iVar1 = FUN_1406b7a10(param_1,1,"__metatable");
  if (iVar1 == 0) {
    FUN_140474940(param_1,1,1);
    FUN_1404734c0(param_1,1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s(param_1,1,"table has a protected metatable");
}

