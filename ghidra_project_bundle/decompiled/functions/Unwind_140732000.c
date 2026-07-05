/**
 * Function: Unwind@140732000
 * Address:  140732000
 * Signature: undefined Unwind@140732000(void)
 * Body size: 58 bytes
 */


void Unwind_140732000(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

