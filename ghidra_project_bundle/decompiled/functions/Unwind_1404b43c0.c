/**
 * Function: Unwind@1404b43c0
 * Address:  1404b43c0
 * Signature: undefined Unwind@1404b43c0(void)
 * Body size: 70 bytes
 */


void Unwind_1404b43c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_140198540(param_2 + 0x30);
  plVar1 = *(longlong **)(param_2 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0xf0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

