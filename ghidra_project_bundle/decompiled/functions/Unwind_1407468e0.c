/**
 * Function: Unwind@1407468e0
 * Address:  1407468e0
 * Signature: undefined Unwind@1407468e0(void)
 * Body size: 69 bytes
 */


void Unwind_1407468e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    **(undefined8 **)(param_2 + 0x58) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

