/**
 * Function: Unwind@14028b990
 * Address:  14028b990
 * Signature: undefined Unwind@14028b990(void)
 * Body size: 70 bytes
 */


void Unwind_14028b990(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0xe0));
    }
  }
  return;
}

