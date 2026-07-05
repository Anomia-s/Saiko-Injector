/**
 * Function: Unwind@14001f430
 * Address:  14001f430
 * Signature: undefined Unwind@14001f430(void)
 * Body size: 61 bytes
 */


void Unwind_14001f430(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x28) != (void *)(param_2 + 0x48)) {
    free(*(void **)(param_2 + 0x28));
  }
  return;
}

