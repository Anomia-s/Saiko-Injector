/**
 * Function: Unwind@1401edf70
 * Address:  1401edf70
 * Signature: undefined Unwind@1401edf70(void)
 * Body size: 64 bytes
 */


void Unwind_1401edf70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x28));
  }
  return;
}

