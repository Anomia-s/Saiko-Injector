/**
 * Function: Unwind@1404dabd0
 * Address:  1404dabd0
 * Signature: undefined Unwind@1404dabd0(void)
 * Body size: 61 bytes
 */


void Unwind_1404dabd0(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  return;
}

