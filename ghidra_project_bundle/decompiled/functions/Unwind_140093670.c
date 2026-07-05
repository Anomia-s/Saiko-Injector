/**
 * Function: Unwind@140093670
 * Address:  140093670
 * Signature: undefined Unwind@140093670(void)
 * Body size: 74 bytes
 */


void Unwind_140093670(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if ((*(char *)(param_2 + 0xd7) == '\x01') &&
     (piVar1 = *(int **)(param_2 + 0xb8), piVar1 != (int *)0x0)) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0xb8));
    }
  }
  QString::~QString((QString *)(param_2 + 0xa0));
  return;
}

