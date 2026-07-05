/**
 * Function: Unwind@14073b730
 * Address:  14073b730
 * Signature: undefined Unwind@14073b730(void)
 * Body size: 135 bytes
 */


void Unwind_14073b730(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_2 + 200) == (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x130);
    plVar2 = *(longlong **)(param_2 + 0x138);
  }
  else {
    (**(code **)(**(longlong **)(param_2 + 200) + 0x10))();
    plVar1 = *(longlong **)(param_2 + 0x130);
    plVar2 = *(longlong **)(param_2 + 0x138);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return;
}

