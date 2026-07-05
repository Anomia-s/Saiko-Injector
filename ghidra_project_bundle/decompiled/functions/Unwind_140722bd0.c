/**
 * Function: Unwind@140722bd0
 * Address:  140722bd0
 * Signature: undefined Unwind@140722bd0(void)
 * Body size: 108 bytes
 */


void Unwind_140722bd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x58);
  plVar2 = *(longlong **)(lVar1 + 0xe0);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = *(longlong **)(lVar1 + 200);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(lVar1 + 200) = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_140198540(*(undefined8 *)(param_2 + 0x30));
  FUN_140198540(*(undefined8 *)(param_2 + 0x50));
  return;
}

