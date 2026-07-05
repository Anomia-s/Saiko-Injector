/**
 * Function: Unwind@14023c400
 * Address:  14023c400
 * Signature: undefined Unwind@14023c400(void)
 * Body size: 102 bytes
 */


void Unwind_14023c400(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = *(byte *)(param_2 + 0xff);
  piVar2 = *(int **)(param_2 + 0xc0);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      free(*(void **)(param_2 + 0xc0));
    }
  }
  *(longlong *)(param_2 + 0xa0) = param_2 + 0x130;
  *(byte *)(param_2 + 0xfe) = bVar1 & 1;
  return;
}

