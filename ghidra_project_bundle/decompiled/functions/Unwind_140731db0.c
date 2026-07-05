/**
 * Function: Unwind@140731db0
 * Address:  140731db0
 * Signature: undefined Unwind@140731db0(void)
 * Body size: 53 bytes
 */


void Unwind_140731db0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

