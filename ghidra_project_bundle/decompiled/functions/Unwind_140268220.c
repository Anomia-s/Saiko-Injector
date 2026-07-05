/**
 * Function: Unwind@140268220
 * Address:  140268220
 * Signature: undefined Unwind@140268220(void)
 * Body size: 137 bytes
 */


void Unwind_140268220(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x140));
    *(undefined8 *)(param_2 + 0x178) = 0;
  }
  return;
}

