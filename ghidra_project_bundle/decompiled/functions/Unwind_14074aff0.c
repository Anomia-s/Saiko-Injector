/**
 * Function: Unwind@14074aff0
 * Address:  14074aff0
 * Signature: undefined Unwind@14074aff0(void)
 * Body size: 65 bytes
 */


void Unwind_14074aff0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x50);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x50));
    }
  }
  QString::~QString((QString *)(param_2 + 0x28));
  return;
}

