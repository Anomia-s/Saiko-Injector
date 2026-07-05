/**
 * Function: Unwind@140010d10
 * Address:  140010d10
 * Signature: undefined Unwind@140010d10(void)
 * Body size: 95 bytes
 */


void Unwind_140010d10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0x160);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x48));
    *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x160) = 0;
  }
  return;
}

