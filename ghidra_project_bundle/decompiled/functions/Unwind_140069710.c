/**
 * Function: Unwind@140069710
 * Address:  140069710
 * Signature: undefined Unwind@140069710(void)
 * Body size: 75 bytes
 */


void Unwind_140069710(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  plVar2 = *(longlong **)(lVar1 + 0x7c0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != *(longlong **)(param_2 + 0x48));
    *(undefined8 *)(lVar1 + 0x7c0) = 0;
  }
  FUN_140081fd0(*(undefined8 *)(param_2 + 0x40));
  return;
}

