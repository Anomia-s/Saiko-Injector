/**
 * Function: Unwind@14003eab0
 * Address:  14003eab0
 * Signature: void __fastcall Unwind@14003eab0(undefined8 param_1, longlong param_2)
 * Body size: 80 bytes
 */


void Unwind_14003eab0(undefined8 param_1,longlong param_2)

{
  FUN_140003680(*(undefined8 *)(param_2 + 0x48));
  FUN_140003680(*(undefined8 *)(param_2 + 0x38));
  **(undefined8 **)(param_2 + 0x50) = &std::exception::vftable;
  __std_exception_destroy(*(undefined8 *)(param_2 + 0x40));
  return;
}

