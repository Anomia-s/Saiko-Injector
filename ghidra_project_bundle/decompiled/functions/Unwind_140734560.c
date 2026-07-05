/**
 * Function: Unwind@140734560
 * Address:  140734560
 * Signature: undefined Unwind@140734560(void)
 * Body size: 54 bytes
 */


void Unwind_140734560(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

