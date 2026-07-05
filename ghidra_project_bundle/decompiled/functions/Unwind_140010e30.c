/**
 * Function: Unwind@140010e30
 * Address:  140010e30
 * Signature: undefined Unwind@140010e30(void)
 * Body size: 95 bytes
 */


void Unwind_140010e30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x30));
    *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x90) = 0;
  }
  return;
}

