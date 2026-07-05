/**
 * Function: Unwind@140727290
 * Address:  140727290
 * Signature: undefined Unwind@140727290(void)
 * Body size: 75 bytes
 */


void Unwind_140727290(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

