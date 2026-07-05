/**
 * Function: Unwind@1407ce540
 * Address:  1407ce540
 * Signature: undefined Unwind@1407ce540(void)
 * Body size: 48 bytes
 */


void Unwind_1407ce540(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

