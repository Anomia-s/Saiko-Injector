/**
 * Function: Unwind@140730d70
 * Address:  140730d70
 * Signature: undefined Unwind@140730d70(void)
 * Body size: 96 bytes
 */


void Unwind_140730d70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2f0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x2f0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

