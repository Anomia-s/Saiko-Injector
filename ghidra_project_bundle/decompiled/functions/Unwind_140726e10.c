/**
 * Function: Unwind@140726e10
 * Address:  140726e10
 * Signature: undefined Unwind@140726e10(void)
 * Body size: 75 bytes
 */


void Unwind_140726e10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

