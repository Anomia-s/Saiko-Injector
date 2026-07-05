/**
 * Function: Unwind@140279520
 * Address:  140279520
 * Signature: undefined Unwind@140279520(void)
 * Body size: 57 bytes
 */


void Unwind_140279520(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x30);
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_140b68ba8();
  }
  return;
}

