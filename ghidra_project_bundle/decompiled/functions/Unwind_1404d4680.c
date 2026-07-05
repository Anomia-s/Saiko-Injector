/**
 * Function: Unwind@1404d4680
 * Address:  1404d4680
 * Signature: undefined Unwind@1404d4680(void)
 * Body size: 103 bytes
 */


void Unwind_1404d4680(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x40) + 0x10))();
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  return;
}

