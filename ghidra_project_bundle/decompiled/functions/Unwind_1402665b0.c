/**
 * Function: Unwind@1402665b0
 * Address:  1402665b0
 * Signature: undefined Unwind@1402665b0(void)
 * Body size: 57 bytes
 */


void Unwind_1402665b0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x40);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x40));
    }
  }
  QFontMetrics::~QFontMetrics((QFontMetrics *)(param_2 + 0x58));
  return;
}

