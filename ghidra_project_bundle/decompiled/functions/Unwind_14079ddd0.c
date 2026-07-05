/**
 * Function: Unwind@14079ddd0
 * Address:  14079ddd0
 * Signature: undefined Unwind@14079ddd0(void)
 * Body size: 50 bytes
 */


void Unwind_14079ddd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x20));
  }
  return;
}

