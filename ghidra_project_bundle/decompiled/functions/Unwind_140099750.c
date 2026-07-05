/**
 * Function: Unwind@140099750
 * Address:  140099750
 * Signature: undefined Unwind@140099750(void)
 * Body size: 118 bytes
 */


void Unwind_140099750(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_14009be30(*(undefined8 *)(param_2 + 0x68));
  FUN_140099830(*(undefined8 *)(param_2 + 0x60));
  FUN_140099860(*(undefined8 *)(param_2 + 0x58));
  FUN_140099860(*(undefined8 *)(param_2 + 0x50));
  plVar1 = (longlong *)**(longlong **)(param_2 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x70));
    **(undefined8 **)(param_2 + 0x78) = 0;
  }
  FUN_140099930(*(undefined8 *)(param_2 + 0x80));
  return;
}

