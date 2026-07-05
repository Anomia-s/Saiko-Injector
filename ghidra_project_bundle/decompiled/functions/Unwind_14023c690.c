/**
 * Function: Unwind@14023c690
 * Address:  14023c690
 * Signature: undefined Unwind@14023c690(void)
 * Body size: 103 bytes
 */


void Unwind_14023c690(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0xa8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0xa8));
    }
  }
  QString::~QString((QString *)(param_2 + 0xc0));
  QString::~QString((QString *)(param_2 + 0x100));
  return;
}

