/**
 * Function: Unwind@140591990
 * Address:  140591990
 * Signature: undefined Unwind@140591990(void)
 * Body size: 66 bytes
 */


void Unwind_140591990(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  QVariant::~QVariant((QVariant *)(param_2 + 0x48));
  piVar1 = *(int **)(param_2 + 0x68);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(longlong *)(param_2 + 0x68) != 0)) {
      FUN_140b68ba8();
    }
  }
  return;
}

