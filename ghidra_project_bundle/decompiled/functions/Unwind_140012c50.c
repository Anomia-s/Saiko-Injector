/**
 * Function: Unwind@140012c50
 * Address:  140012c50
 * Signature: undefined Unwind@140012c50(void)
 * Body size: 57 bytes
 */


void Unwind_140012c50(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x28) != (void *)(param_2 + 0x48)) {
    free(*(void **)(param_2 + 0x28));
  }
  return;
}

