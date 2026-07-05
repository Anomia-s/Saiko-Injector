/**
 * Function: Unwind@140542330
 * Address:  140542330
 * Signature: undefined Unwind@140542330(void)
 * Body size: 71 bytes
 */


void Unwind_140542330(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x180) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

