/**
 * Function: Unwind@1407a0720
 * Address:  1407a0720
 * Signature: undefined Unwind@1407a0720(void)
 * Body size: 52 bytes
 */


void Unwind_1407a0720(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (*plVar1 != 0) {
    FUN_140b68ba8();
    *plVar1 = 0;
    plVar1[1] = 0;
  }
  return;
}

