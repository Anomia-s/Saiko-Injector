/**
 * Function: Unwind@140085d10
 * Address:  140085d10
 * Signature: undefined Unwind@140085d10(void)
 * Body size: 113 bytes
 */


void Unwind_140085d10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x30));
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  FUN_140085e20(param_2 + 0x70);
  if (*(longlong *)(param_2 + 0x90) != 0) {
    piVar2 = *(int **)(param_2 + 0x90);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_140b68ba8(*(undefined8 *)(param_2 + 0x90));
    }
  }
  return;
}

