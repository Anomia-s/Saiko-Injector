/**
 * Function: Unwind@14053f1f0
 * Address:  14053f1f0
 * Signature: undefined Unwind@14053f1f0(void)
 * Body size: 78 bytes
 */


void Unwind_14053f1f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  plVar2 = (longlong *)**(longlong **)(param_2 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    **(longlong **)(param_2 + 0x38) = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != (longlong *)0x0) {
    *plVar1 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

