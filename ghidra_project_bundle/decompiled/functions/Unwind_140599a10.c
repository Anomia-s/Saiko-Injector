/**
 * Function: Unwind@140599a10
 * Address:  140599a10
 * Signature: undefined Unwind@140599a10(void)
 * Body size: 51 bytes
 */


void Unwind_140599a10(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x40);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x40));
    }
  }
  return;
}

