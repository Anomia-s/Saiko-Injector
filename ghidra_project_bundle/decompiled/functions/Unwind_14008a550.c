/**
 * Function: Unwind@14008a550
 * Address:  14008a550
 * Signature: undefined Unwind@14008a550(void)
 * Body size: 81 bytes
 */


void Unwind_14008a550(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x1f8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free(*(void **)(param_2 + 0x1f8));
    }
  }
  QJsonObject::~QJsonObject((QJsonObject *)(param_2 + 0x1c8));
  return;
}

