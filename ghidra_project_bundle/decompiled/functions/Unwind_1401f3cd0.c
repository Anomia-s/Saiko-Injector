/**
 * Function: Unwind@1401f3cd0
 * Address:  1401f3cd0
 * Signature: undefined Unwind@1401f3cd0(void)
 * Body size: 91 bytes
 */


void Unwind_1401f3cd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 200) + 0x198);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x68));
    *(undefined8 *)(*(longlong *)(param_2 + 200) + 0x198) = 0;
  }
  FUN_1401c51e0(*(undefined8 *)(param_2 + 0x60));
  return;
}

