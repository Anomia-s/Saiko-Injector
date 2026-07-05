/**
 * Function: Unwind@14023c470
 * Address:  14023c470
 * Signature: undefined Unwind@14023c470(void)
 * Body size: 99 bytes
 */


void Unwind_14023c470(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  int *piVar3;
  
  bVar1 = *(byte *)(param_2 + 0xfe);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  piVar3 = *(int **)(param_2 + 0xd8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      free(*(void **)(param_2 + 0xd8));
    }
  }
  *(undefined8 *)(param_2 + 0x98) = uVar2;
  *(byte *)(param_2 + 0xfd) = bVar1 & 1;
  return;
}

