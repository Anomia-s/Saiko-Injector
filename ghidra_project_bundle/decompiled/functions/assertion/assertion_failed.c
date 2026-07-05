/**
 * Function: assertion_failed
 * Address:  1406a81d0
 * Signature: undefined assertion_failed(void)
 * Body size: 89 bytes
 */


void assertion_failed(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  missing_argument_d(param_1,1);
  iVar2 = FUN_140473af0(param_1,1);
  if (iVar2 != 0) {
    FUN_1404731e0(param_1);
    return;
  }
  uVar1 = FUN_1406b75a0(param_1,2,"assertion failed!",0);
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,&DAT_141339891,uVar1);
}

