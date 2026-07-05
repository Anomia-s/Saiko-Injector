/**
 * Function: Unwind@1401df420
 * Address:  1401df420
 * Signature: undefined Unwind@1401df420(void)
 * Body size: 97 bytes
 */


void Unwind_1401df420(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140198540(param_2 + 0xd8);
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x118) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x118);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return;
}

