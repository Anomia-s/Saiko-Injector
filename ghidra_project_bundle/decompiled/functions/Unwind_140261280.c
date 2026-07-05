/**
 * Function: Unwind@140261280
 * Address:  140261280
 * Signature: undefined Unwind@140261280(void)
 * Body size: 114 bytes
 */


void Unwind_140261280(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x60));
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  FUN_140262a20(0);
  FUN_140006e40(param_2 + 0xa8);
  return;
}

