/**
 * Function: missing_argument_d
 * Address:  1406b7700
 * Signature: undefined missing_argument_d(void)
 * Body size: 46 bytes
 */


void missing_argument_d(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140473550();
  if (iVar1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"missing argument #%d",param_2);
}

