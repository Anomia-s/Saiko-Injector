/**
 * Function: stack_overflow_s
 * Address:  1406b76a0
 * Signature: undefined stack_overflow_s(void)
 * Body size: 46 bytes
 */


void stack_overflow_s(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140472ef0();
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"stack overflow (%s)",param_3);
}

