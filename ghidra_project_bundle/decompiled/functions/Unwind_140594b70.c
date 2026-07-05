/**
 * Function: Unwind@140594b70
 * Address:  140594b70
 * Signature: undefined Unwind@140594b70(void)
 * Body size: 66 bytes
 */


void Unwind_140594b70(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 200);
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    FUN_140b68ba8(*(undefined8 *)(param_2 + 200));
  }
  QString::~QString((QString *)(param_2 + 0xb0));
  return;
}

