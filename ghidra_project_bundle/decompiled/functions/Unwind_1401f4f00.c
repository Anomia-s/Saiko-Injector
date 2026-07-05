/**
 * Function: Unwind@1401f4f00
 * Address:  1401f4f00
 * Signature: undefined Unwind@1401f4f00(void)
 * Body size: 91 bytes
 */


void Unwind_1401f4f00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 200);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x90));
    *(undefined8 *)(param_2 + 200) = 0;
  }
  FUN_140004b30(param_2 + 400);
  return;
}

