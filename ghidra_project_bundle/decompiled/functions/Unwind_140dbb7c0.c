/**
 * Function: Unwind@140dbb7c0
 * Address:  140dbb7c0
 * Signature: undefined Unwind@140dbb7c0(void)
 * Body size: 141 bytes
 */


void Unwind_140dbb7c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140004b30(param_2 + 0x550);
  plVar3 = *(longlong **)(param_2 + 0x598);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x588);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  FUN_140006e40(param_2 + 0x570);
  return;
}

