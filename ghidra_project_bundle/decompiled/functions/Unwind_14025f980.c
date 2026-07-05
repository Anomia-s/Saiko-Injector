/**
 * Function: Unwind@14025f980
 * Address:  14025f980
 * Signature: undefined Unwind@14025f980(void)
 * Body size: 51 bytes
 */


void Unwind_14025f980(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(char *)(param_2 + 0x40) == '\0') {
    piVar1 = *(int **)(param_2 + 0x48);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x48));
    }
  }
  return;
}

