/**
 * Function: Unwind@1401f34f0
 * Address:  1401f34f0
 * Signature: undefined Unwind@1401f34f0(void)
 * Body size: 51 bytes
 */


void Unwind_1401f34f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x68);
  FUN_1400019f0(puVar1 + 0xa4);
  httplib::ClientImpl::ClientImpl_Constructor_or_Destructor(puVar1);
  return;
}

