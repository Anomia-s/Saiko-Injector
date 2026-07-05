/**
 * Function: Unwind@1407269a0
 * Address:  1407269a0
 * Signature: undefined Unwind@1407269a0(void)
 * Body size: 63 bytes
 */


void Unwind_1407269a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x120) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

