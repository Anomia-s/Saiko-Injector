/**
 * Function: Unwind@1406fe130
 * Address:  1406fe130
 * Signature: undefined Unwind@1406fe130(void)
 * Body size: 62 bytes
 */


void Unwind_1406fe130(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

