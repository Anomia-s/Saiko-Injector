/**
 * Function: Unwind@14026d4b0
 * Address:  14026d4b0
 * Signature: undefined Unwind@14026d4b0(void)
 * Body size: 57 bytes
 */


void Unwind_14026d4b0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if ((*(char *)(param_2 + 0x5e) == '\x01') &&
     (piVar1 = *(int **)(param_2 + 0x40), piVar1 != (int *)0x0)) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x40));
    }
  }
  return;
}

