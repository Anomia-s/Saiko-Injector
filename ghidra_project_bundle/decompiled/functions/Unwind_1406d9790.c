/**
 * Function: Unwind@1406d9790
 * Address:  1406d9790
 * Signature: void __fastcall Unwind@1406d9790(undefined8 param_1, longlong param_2)
 * Body size: 63 bytes
 */


void Unwind_1406d9790(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = &std::exception::vftable;
  __std_exception_destroy(*(undefined8 *)(param_2 + 0x28));
  return;
}

