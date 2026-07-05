/**
 * Function: Unwind@140009450
 * Address:  140009450
 * Signature: void __fastcall Unwind@140009450(undefined8 param_1, longlong param_2)
 * Body size: 58 bytes
 */


void Unwind_140009450(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x28) = &std::exception::vftable;
  __std_exception_destroy(*(undefined8 *)(param_2 + 0x20));
  return;
}

