/**
 * Function: Unwind@14007a120
 * Address:  14007a120
 * Signature: undefined Unwind@14007a120(void)
 * Body size: 66 bytes
 */


void Unwind_14007a120(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x28));
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  return;
}

