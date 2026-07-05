/**
 * Function: Unwind@140005670
 * Address:  140005670
 * Signature: void __fastcall Unwind@140005670(undefined8 param_1, longlong param_2)
 * Body size: 51 bytes
 */


void Unwind_140005670(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x70);
  *puVar1 = &std::exception::vftable;
  __std_exception_destroy(puVar1 + 1);
  return;
}

