/**
 * Function: Unwind@1401ecfe0
 * Address:  1401ecfe0
 * Signature: undefined Unwind@1401ecfe0(void)
 * Body size: 99 bytes
 */


void Unwind_1401ecfe0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + 0x290);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x98));
    *(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x290) = 0;
  }
  return;
}

