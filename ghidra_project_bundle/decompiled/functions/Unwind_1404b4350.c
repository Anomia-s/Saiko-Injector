/**
 * Function: Unwind@1404b4350
 * Address:  1404b4350
 * Signature: undefined Unwind@1404b4350(void)
 * Body size: 70 bytes
 */


void Unwind_1404b4350(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xa0));
    *(undefined8 *)(param_2 + 0xd8) = 0;
  }
  return;
}

