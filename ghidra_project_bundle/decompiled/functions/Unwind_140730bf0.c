/**
 * Function: Unwind@140730bf0
 * Address:  140730bf0
 * Signature: undefined Unwind@140730bf0(void)
 * Body size: 90 bytes
 */


void Unwind_140730bf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

