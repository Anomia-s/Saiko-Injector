/**
 * Function: Unwind@140710140
 * Address:  140710140
 * Signature: undefined Unwind@140710140(void)
 * Body size: 69 bytes
 */


void Unwind_140710140(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 200);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 200) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

