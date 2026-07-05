/**
 * Function: Unwind@1404d2eb0
 * Address:  1404d2eb0
 * Signature: undefined Unwind@1404d2eb0(void)
 * Body size: 77 bytes
 */


void Unwind_1404d2eb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x80));
    *(undefined8 *)(param_2 + 0xb8) = 0;
  }
  return;
}

