/**
 * Function: Unwind@1404b5670
 * Address:  1404b5670
 * Signature: undefined Unwind@1404b5670(void)
 * Body size: 84 bytes
 */


void Unwind_1404b5670(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x538);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x538) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

