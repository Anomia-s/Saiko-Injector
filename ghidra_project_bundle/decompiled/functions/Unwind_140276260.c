/**
 * Function: Unwind@140276260
 * Address:  140276260
 * Signature: undefined Unwind@140276260(void)
 * Body size: 152 bytes
 */


void Unwind_140276260(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  puVar6 = *(undefined8 **)(param_2 + 0x40);
  piVar7 = (int *)*puVar6;
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      free((void *)*puVar6);
    }
  }
  FUN_140266850(uVar1);
  FUN_140276300(uVar2);
  FUN_140266850(uVar3);
  piVar7 = *(int **)(lVar4 + 0x38);
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      free(*(void **)(lVar4 + 0x38));
    }
  }
  FUN_140276360(lVar4 + 0x20);
  FUN_140276360(uVar5);
  return;
}

