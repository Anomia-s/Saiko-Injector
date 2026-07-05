/**
 * Function: Unwind@140748350
 * Address:  140748350
 * Signature: undefined Unwind@140748350(void)
 * Body size: 78 bytes
 */


void Unwind_140748350(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

