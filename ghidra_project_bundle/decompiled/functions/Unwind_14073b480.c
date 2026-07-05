/**
 * Function: Unwind@14073b480
 * Address:  14073b480
 * Signature: undefined Unwind@14073b480(void)
 * Body size: 96 bytes
 */


void Unwind_14073b480(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_140712f40(param_2 + 0x2b0);
  plVar1 = *(longlong **)(param_2 + 0x220);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x220) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

