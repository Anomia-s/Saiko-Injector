/**
 * Function: Unwind@14008c6f0
 * Address:  14008c6f0
 * Signature: undefined Unwind@14008c6f0(void)
 * Body size: 72 bytes
 */


void Unwind_14008c6f0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x60);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x60));
    }
  }
  QString::~QString((QString *)(param_2 + 0x98));
  return;
}

