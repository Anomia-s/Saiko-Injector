/**
 * Function: Unwind@140730b90
 * Address:  140730b90
 * Signature: undefined Unwind@140730b90(void)
 * Body size: 90 bytes
 */


void Unwind_140730b90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

