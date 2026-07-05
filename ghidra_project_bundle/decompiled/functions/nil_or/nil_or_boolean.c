/**
 * Function: nil_or_boolean
 * Address:  1406a8390
 * Signature: undefined nil_or_boolean(void)
 * Body size: 119 bytes
 */


undefined8 nil_or_boolean(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_140473550(param_1,1);
  if (iVar1 + 1U < 3) {
    iVar1 = FUN_140473af0(param_1,1);
    FUN_1404754e0(param_1,0,0x81);
    if (iVar1 != 0) {
      FUN_1404748d0(param_1,0,0);
      FUN_140474ee0(param_1,0xfffffffe);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s_expected_got_s(param_1,1,"nil or boolean");
}

