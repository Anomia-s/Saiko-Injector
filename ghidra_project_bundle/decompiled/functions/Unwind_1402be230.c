/**
 * Function: Unwind@1402be230
 * Address:  1402be230
 * Signature: undefined Unwind@1402be230(void)
 * Body size: 86 bytes
 */


void Unwind_1402be230(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_2 + 0x8c) == 0) && (piVar1 = *(int **)(param_2 + 0x98), piVar1 != (int *)0x0))
  {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x98));
    }
  }
  QString::~QString((QString *)(param_2 + 0x68));
  return;
}

