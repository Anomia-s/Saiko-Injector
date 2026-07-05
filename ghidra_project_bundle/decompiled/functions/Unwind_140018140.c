/**
 * Function: Unwind@140018140
 * Address:  140018140
 * Signature: undefined Unwind@140018140(void)
 * Body size: 65 bytes
 */


void Unwind_140018140(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x28) != (void *)(param_2 + 0x48)) {
    free(*(void **)(param_2 + 0x28));
  }
  return;
}

