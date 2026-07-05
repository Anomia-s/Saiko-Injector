/**
 * Function: Unwind@140023ad0
 * Address:  140023ad0
 * Signature: undefined Unwind@140023ad0(void)
 * Body size: 65 bytes
 */


void Unwind_140023ad0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x28) != (void *)(param_2 + 0x48)) {
    free(*(void **)(param_2 + 0x28));
  }
  return;
}

