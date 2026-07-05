/**
 * Function: Unwind@140706710
 * Address:  140706710
 * Signature: undefined Unwind@140706710(void)
 * Body size: 84 bytes
 */


void Unwind_140706710(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x240);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x240) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

