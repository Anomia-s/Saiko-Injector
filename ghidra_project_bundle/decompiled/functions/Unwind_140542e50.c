/**
 * Function: Unwind@140542e50
 * Address:  140542e50
 * Signature: undefined Unwind@140542e50(void)
 * Body size: 61 bytes
 */


void Unwind_140542e50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x78) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

