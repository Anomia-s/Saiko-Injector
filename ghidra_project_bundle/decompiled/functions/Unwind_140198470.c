/**
 * Function: Unwind@140198470
 * Address:  140198470
 * Signature: undefined Unwind@140198470(void)
 * Body size: 53 bytes
 */


void Unwind_140198470(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0xe8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

