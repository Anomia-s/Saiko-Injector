/**
 * Function: Unwind@140025100
 * Address:  140025100
 * Signature: undefined Unwind@140025100(void)
 * Body size: 61 bytes
 */


void Unwind_140025100(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x28) != (void *)(param_2 + 0x48)) {
    free(*(void **)(param_2 + 0x28));
  }
  return;
}

