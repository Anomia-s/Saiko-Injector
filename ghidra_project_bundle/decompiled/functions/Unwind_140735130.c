/**
 * Function: Unwind@140735130
 * Address:  140735130
 * Signature: undefined Unwind@140735130(void)
 * Body size: 151 bytes
 */


void Unwind_140735130(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x78);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x78) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140740440(*(undefined8 *)(param_2 + 0x38));
  FUN_140740440(*(undefined8 *)(param_2 + 0x30));
  FUN_140740440(*(undefined8 *)(param_2 + 0x28));
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x20);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

