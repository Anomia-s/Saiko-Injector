/**
 * Function: Unwind@140727880
 * Address:  140727880
 * Signature: undefined Unwind@140727880(void)
 * Body size: 75 bytes
 */


void Unwind_140727880(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

