/**
 * Function: Unwind@140558080
 * Address:  140558080
 * Signature: undefined Unwind@140558080(void)
 * Body size: 66 bytes
 */


void Unwind_140558080(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x80));
  }
  return;
}

