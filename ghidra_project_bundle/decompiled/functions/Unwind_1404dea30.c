/**
 * Function: Unwind@1404dea30
 * Address:  1404dea30
 * Signature: undefined Unwind@1404dea30(void)
 * Body size: 118 bytes
 */


void Unwind_1404dea30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x788);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x788) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

