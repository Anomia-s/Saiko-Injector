/**
 * Function: Unwind@140525680
 * Address:  140525680
 * Signature: undefined Unwind@140525680(void)
 * Body size: 54 bytes
 */


void Unwind_140525680(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  return;
}

