/**
 * Function: Unwind@14007d490
 * Address:  14007d490
 * Signature: undefined Unwind@14007d490(void)
 * Body size: 66 bytes
 */


void Unwind_14007d490(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  return;
}

