/**
 * Function: Unwind@14057d860
 * Address:  14057d860
 * Signature: undefined Unwind@14057d860(void)
 * Body size: 76 bytes
 */


void Unwind_14057d860(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  QVariant::~QVariant((QVariant *)(param_2 + 0x48));
  piVar1 = *(int **)(param_2 + 0x70);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x70) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

