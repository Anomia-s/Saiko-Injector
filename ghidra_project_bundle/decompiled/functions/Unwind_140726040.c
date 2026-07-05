/**
 * Function: Unwind@140726040
 * Address:  140726040
 * Signature: undefined Unwind@140726040(void)
 * Body size: 78 bytes
 */


void Unwind_140726040(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x68) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

