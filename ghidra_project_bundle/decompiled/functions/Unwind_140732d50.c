/**
 * Function: Unwind@140732d50
 * Address:  140732d50
 * Signature: undefined Unwind@140732d50(void)
 * Body size: 75 bytes
 */


void Unwind_140732d50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2c8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x2c8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

