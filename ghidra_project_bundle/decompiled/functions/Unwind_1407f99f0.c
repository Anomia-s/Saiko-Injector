/**
 * Function: Unwind@1407f99f0
 * Address:  1407f99f0
 * Signature: undefined Unwind@1407f99f0(void)
 * Body size: 73 bytes
 */


void Unwind_1407f99f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 200);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,1);
  }
  FUN_1407f8f80(*(undefined8 *)(param_2 + 0x38));
  return;
}

