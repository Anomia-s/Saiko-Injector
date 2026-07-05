/**
 * Function: Unwind@140734ee0
 * Address:  140734ee0
 * Signature: undefined Unwind@140734ee0(void)
 * Body size: 66 bytes
 */


void Unwind_140734ee0(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0xe0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xe0) + 0x10))();
  }
  return;
}

