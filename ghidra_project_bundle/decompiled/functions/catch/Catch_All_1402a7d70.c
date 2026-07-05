/**
 * Function: Catch_All@1402a7d70
 * Address:  1402a7d70
 * Signature: undefined Catch_All@1402a7d70(void)
 * Body size: 73 bytes
 */


undefined8 Catch_All_1402a7d70(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  pvVar1 = (void *)(param_2 + 0x20);
  __ExceptionPtrCreate(pvVar1);
  __ExceptionPtrCurrentException(pvVar1);
  FUN_1402a8720(*(undefined8 *)(param_2 + 0x38),pvVar1,0);
  return 0x1402a7d02;
}

