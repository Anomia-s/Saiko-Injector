/**
 * Function: Unwind@140726dc0
 * Address:  140726dc0
 * Signature: undefined Unwind@140726dc0(void)
 * Body size: 75 bytes
 */


void Unwind_140726dc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

