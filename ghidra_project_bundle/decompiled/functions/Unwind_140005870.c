/**
 * Function: Unwind@140005870
 * Address:  140005870
 * Signature: void __fastcall Unwind@140005870(undefined8 param_1, longlong param_2)
 * Body size: 54 bytes
 */


void Unwind_140005870(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x40) = &std::exception::vftable;
  __std_exception_destroy(*(undefined8 *)(param_2 + 0x28));
  return;
}

