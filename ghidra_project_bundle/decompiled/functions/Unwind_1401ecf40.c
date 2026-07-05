/**
 * Function: Unwind@1401ecf40
 * Address:  1401ecf40
 * Signature: undefined Unwind@1401ecf40(void)
 * Body size: 146 bytes
 */


void Unwind_1401ecf40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + 0x328);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x88));
    *(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x328) = 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + 0x2d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0xa0));
    *(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x2d0) = 0;
  }
  return;
}

