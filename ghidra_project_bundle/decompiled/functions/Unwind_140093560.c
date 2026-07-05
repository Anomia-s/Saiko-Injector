/**
 * Function: Unwind@140093560
 * Address:  140093560
 * Signature: undefined Unwind@140093560(void)
 * Body size: 68 bytes
 */


void Unwind_140093560(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0xb8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0xb8));
    }
  }
  QString::~QString((QString *)(param_2 + 0x68));
  return;
}

