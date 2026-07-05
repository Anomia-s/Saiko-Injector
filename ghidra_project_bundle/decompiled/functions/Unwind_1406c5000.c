/**
 * Function: Unwind@1406c5000
 * Address:  1406c5000
 * Signature: void __fastcall Unwind@1406c5000(undefined8 param_1, longlong param_2)
 * Body size: 63 bytes
 */


void Unwind_1406c5000(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = &std::exception::vftable;
  __std_exception_destroy(*(undefined8 *)(param_2 + 0x28));
  return;
}

