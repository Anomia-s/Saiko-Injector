/**
 * Function: Unwind@140747830
 * Address:  140747830
 * Signature: undefined Unwind@140747830(void)
 * Body size: 84 bytes
 */


void Unwind_140747830(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x330);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x330) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

