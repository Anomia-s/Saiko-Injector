/**
 * Function: Unwind@140740370
 * Address:  140740370
 * Signature: undefined Unwind@140740370(void)
 * Body size: 62 bytes
 */


void Unwind_140740370(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

