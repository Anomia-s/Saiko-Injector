/**
 * Function: terminateprocess_failed
 * Address:  14045c5b0
 * Signature: undefined terminateprocess_failed(void)
 * Body size: 49 bytes
 */


undefined8 terminateprocess_failed(longlong param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  BVar1 = TerminateProcess((HANDLE)**(undefined8 **)(param_1 + 0x10),1);
  if (BVar1 != 0) {
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
  }
  uVar2 = FUN_1403d7710("TerminateProcess failed");
  return uVar2;
}

