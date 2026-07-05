/**
 * Function: Unwind@1406e0420
 * Address:  1406e0420
 * Signature: undefined Unwind@1406e0420(void)
 * Body size: 102 bytes
 */


void Unwind_1406e0420(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x18);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x10) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

