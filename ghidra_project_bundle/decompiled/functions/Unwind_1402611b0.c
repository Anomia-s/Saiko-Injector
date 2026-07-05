/**
 * Function: Unwind@1402611b0
 * Address:  1402611b0
 * Signature: undefined Unwind@1402611b0(void)
 * Body size: 114 bytes
 */


void Unwind_1402611b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x60));
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  FUN_140262a20(0);
  FUN_140006e40(param_2 + 0xa8);
  return;
}

