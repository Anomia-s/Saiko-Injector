/**
 * Function: Unwind@1401ecdf0
 * Address:  1401ecdf0
 * Signature: undefined Unwind@1401ecdf0(void)
 * Body size: 99 bytes
 */


void Unwind_1401ecdf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + 0x250);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x90));
    *(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x250) = 0;
  }
  return;
}

