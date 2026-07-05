/**
 * Function: cannot_change_a_protected_metatable
 * Address:  1406a8830
 * Signature: undefined cannot_change_a_protected_metatable(void)
 * Body size: 146 bytes
 */


undefined8 cannot_change_a_protected_metatable(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_140473550(param_1,2);
  FUN_1406b76d0(param_1,1,6);
  if ((iVar1 != 0) && (iVar1 != 6)) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s_expected_got_s(param_1,2,"nil or table");
  }
  iVar1 = FUN_1406b7a10(param_1,1,"__metatable");
  if (iVar1 == 0) {
    FUN_1404731f0(param_1,2);
    FUN_140474ee0(param_1,1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"cannot change a protected metatable");
}

