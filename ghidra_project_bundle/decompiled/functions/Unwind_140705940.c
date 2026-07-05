/**
 * Function: Unwind@140705940
 * Address:  140705940
 * Signature: undefined Unwind@140705940(void)
 * Body size: 51 bytes
 */


void Unwind_140705940(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x70) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

