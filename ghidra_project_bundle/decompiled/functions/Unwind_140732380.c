/**
 * Function: Unwind@140732380
 * Address:  140732380
 * Signature: undefined Unwind@140732380(void)
 * Body size: 66 bytes
 */


void Unwind_140732380(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

