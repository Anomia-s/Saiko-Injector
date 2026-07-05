/**
 * Function: Unwind@140299d50
 * Address:  140299d50
 * Signature: undefined Unwind@140299d50(void)
 * Body size: 68 bytes
 */


void Unwind_140299d50(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x58));
    }
  }
  QString::~QString((QString *)(param_2 + 0x40));
  return;
}

