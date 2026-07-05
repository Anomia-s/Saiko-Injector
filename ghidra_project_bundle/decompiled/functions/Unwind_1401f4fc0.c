/**
 * Function: Unwind@1401f4fc0
 * Address:  1401f4fc0
 * Signature: undefined Unwind@1401f4fc0(void)
 * Body size: 84 bytes
 */


void Unwind_1401f4fc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x108);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xd0));
    *(undefined8 *)(param_2 + 0x108) = 0;
  }
  return;
}

