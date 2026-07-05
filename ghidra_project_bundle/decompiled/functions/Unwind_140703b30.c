/**
 * Function: Unwind@140703b30
 * Address:  140703b30
 * Signature: undefined Unwind@140703b30(void)
 * Body size: 84 bytes
 */


void Unwind_140703b30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x400);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x400) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

