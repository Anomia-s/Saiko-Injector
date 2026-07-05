/**
 * Function: Unwind@140244390
 * Address:  140244390
 * Signature: undefined Unwind@140244390(void)
 * Body size: 67 bytes
 */


void Unwind_140244390(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x80));
    }
  }
  return;
}

