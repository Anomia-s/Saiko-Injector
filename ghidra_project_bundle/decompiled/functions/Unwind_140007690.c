/**
 * Function: Unwind@140007690
 * Address:  140007690
 * Signature: void __fastcall Unwind@140007690(undefined8 param_1, longlong param_2)
 * Body size: 63 bytes
 */


void Unwind_140007690(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = &std::exception::vftable;
  __std_exception_destroy(*(undefined8 *)(param_2 + 0x28));
  return;
}

