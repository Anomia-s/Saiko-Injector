/**
 * Function: Unwind@140010b70
 * Address:  140010b70
 * Signature: undefined Unwind@140010b70(void)
 * Body size: 95 bytes
 */


void Unwind_140010b70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0x110);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x40));
    *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x110) = 0;
  }
  return;
}

