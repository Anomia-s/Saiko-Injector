/**
 * Function: Unwind@1407139c0
 * Address:  1407139c0
 * Signature: undefined Unwind@1407139c0(void)
 * Body size: 120 bytes
 */


void Unwind_1407139c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x70);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x70) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1400017d0(*(undefined8 *)(param_2 + 0x38));
  FUN_1400017d0(*(undefined8 *)(param_2 + 0x30));
  FUN_1400017d0(*(undefined8 *)(param_2 + 0x28));
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

