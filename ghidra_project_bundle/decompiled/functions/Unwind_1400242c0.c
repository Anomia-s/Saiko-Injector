/**
 * Function: Unwind@1400242c0
 * Address:  1400242c0
 * Signature: undefined Unwind@1400242c0(void)
 * Body size: 71 bytes
 */


void Unwind_1400242c0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x40) != (void *)(param_2 + 0x60)) {
    free(*(void **)(param_2 + 0x40));
  }
  return;
}

