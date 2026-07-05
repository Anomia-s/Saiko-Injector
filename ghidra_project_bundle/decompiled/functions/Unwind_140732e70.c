/**
 * Function: Unwind@140732e70
 * Address:  140732e70
 * Signature: undefined Unwind@140732e70(void)
 * Body size: 48 bytes
 */


void Unwind_140732e70(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  return;
}

