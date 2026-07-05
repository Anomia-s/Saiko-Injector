/**
 * Function: Unwind@140220eb0
 * Address:  140220eb0
 * Signature: undefined Unwind@140220eb0(void)
 * Body size: 112 bytes
 */


void Unwind_140220eb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

