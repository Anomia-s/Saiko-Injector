/**
 * Function: Unwind@140246040
 * Address:  140246040
 * Signature: undefined Unwind@140246040(void)
 * Body size: 67 bytes
 */


void Unwind_140246040(undefined8 param_1,longlong param_2)

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

