/**
 * Function: Unwind@140558a00
 * Address:  140558a00
 * Signature: undefined Unwind@140558a00(void)
 * Body size: 66 bytes
 */


void Unwind_140558a00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x80));
  }
  return;
}

