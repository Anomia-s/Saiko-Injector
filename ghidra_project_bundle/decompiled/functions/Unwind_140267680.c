/**
 * Function: Unwind@140267680
 * Address:  140267680
 * Signature: undefined Unwind@140267680(void)
 * Body size: 134 bytes
 */


void Unwind_140267680(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if ((*(char *)(param_2 + 0x287) == '\x01') &&
     (piVar1 = *(int **)(param_2 + 0x240), piVar1 != (int *)0x0)) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x240));
    }
  }
  return;
}

