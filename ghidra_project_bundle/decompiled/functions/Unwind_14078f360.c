/**
 * Function: Unwind@14078f360
 * Address:  14078f360
 * Signature: undefined Unwind@14078f360(void)
 * Body size: 77 bytes
 */


void Unwind_14078f360(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(param_2 + 0x78) == '\x01') &&
     (plVar1 = *(longlong **)(param_2 + 0x70), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x38));
  }
  return;
}

