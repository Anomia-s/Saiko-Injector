/**
 * Function: Unwind@14071be70
 * Address:  14071be70
 * Signature: undefined Unwind@14071be70(void)
 * Body size: 84 bytes
 */


void Unwind_14071be70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x130);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x130) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

