/**
 * Function: Unwind@14072f130
 * Address:  14072f130
 * Signature: undefined Unwind@14072f130(void)
 * Body size: 48 bytes
 */


void Unwind_14072f130(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  return;
}

