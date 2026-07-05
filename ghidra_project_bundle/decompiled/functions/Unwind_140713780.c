/**
 * Function: Unwind@140713780
 * Address:  140713780
 * Signature: undefined Unwind@140713780(void)
 * Body size: 66 bytes
 */


void Unwind_140713780(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0xe0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xe0) + 0x10))();
  }
  return;
}

