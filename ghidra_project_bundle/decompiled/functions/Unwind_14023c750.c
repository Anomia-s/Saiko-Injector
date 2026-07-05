/**
 * Function: Unwind@14023c750
 * Address:  14023c750
 * Signature: undefined Unwind@14023c750(void)
 * Body size: 94 bytes
 */


void Unwind_14023c750(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0xd8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0xd8));
    }
  }
  QString::~QString((QString *)(param_2 + 0x170));
  return;
}

