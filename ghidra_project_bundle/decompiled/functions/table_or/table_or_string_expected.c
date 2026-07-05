/**
 * Function: table_or_string_expected
 * Address:  1406a8660
 * Signature: undefined table_or_string_expected(void)
 * Body size: 80 bytes
 */


undefined8 table_or_string_expected(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_140473550(param_1,1);
  if (iVar1 - 5U < 2) {
    uVar2 = FUN_140473d90(param_1,1);
    FUN_140474150(param_1,uVar2);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s(param_1,1,"table or string expected");
}

