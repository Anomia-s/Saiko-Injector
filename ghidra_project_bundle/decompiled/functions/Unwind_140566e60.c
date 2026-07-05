/**
 * Function: Unwind@140566e60
 * Address:  140566e60
 * Signature: undefined Unwind@140566e60(void)
 * Body size: 93 bytes
 */


void Unwind_140566e60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  
  FUN_140566ec0(*(undefined8 *)(param_2 + 0x70));
  lVar1 = *(longlong *)(param_2 + 0x80);
  piVar2 = *(int **)(lVar1 + 0x38);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      free(*(void **)(lVar1 + 0x38));
    }
  }
  FUN_140276360(*(undefined8 *)(param_2 + 0x68));
  FUN_140084750(*(undefined8 *)(param_2 + 0x60));
  return;
}

