/**
 * Function: Unwind@140266120
 * Address:  140266120
 * Signature: undefined Unwind@140266120(void)
 * Body size: 60 bytes
 */


void Unwind_140266120(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if ((*(char *)(param_2 + 0x8e) == '\x01') &&
     (piVar1 = *(int **)(param_2 + 0x70), piVar1 != (int *)0x0)) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x70));
    }
  }
  return;
}

