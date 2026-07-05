/**
 * Function: Unwind@1400236f0
 * Address:  1400236f0
 * Signature: undefined Unwind@1400236f0(void)
 * Body size: 65 bytes
 */


void Unwind_1400236f0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x28) != (void *)(param_2 + 0x48)) {
    free(*(void **)(param_2 + 0x28));
  }
  return;
}

