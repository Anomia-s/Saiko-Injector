/**
 * Function: Unwind@140706660
 * Address:  140706660
 * Signature: undefined Unwind@140706660(void)
 * Body size: 78 bytes
 */


void Unwind_140706660(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0xb0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

