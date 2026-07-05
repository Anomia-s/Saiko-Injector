/**
 * Function: Unwind@1401c4e60
 * Address:  1401c4e60
 * Signature: undefined Unwind@1401c4e60(void)
 * Body size: 61 bytes
 */


void Unwind_1401c4e60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(param_2 + 0xaf) == '\x01') &&
     (plVar1 = *(longlong **)(param_2 + 0x60), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x28));
  }
  return;
}

