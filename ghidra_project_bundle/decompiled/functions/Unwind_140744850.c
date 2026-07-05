/**
 * Function: Unwind@140744850
 * Address:  140744850
 * Signature: undefined Unwind@140744850(void)
 * Body size: 78 bytes
 */


void Unwind_140744850(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    *(longlong *)(param_2 + 0x80) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

