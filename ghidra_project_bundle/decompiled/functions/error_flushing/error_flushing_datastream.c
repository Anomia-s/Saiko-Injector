/**
 * Function: error_flushing_datastream
 * Address:  1400f86b0
 * Signature: undefined error_flushing_datastream(void)
 * Body size: 40 bytes
 */


undefined4 error_flushing_datastream(undefined8 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = FlushFileBuffers((HANDLE)*param_1);
  if (BVar1 != 0) {
    return 1;
  }
  uVar2 = FUN_1403d7710("Error flushing datastream");
  return uVar2;
}

