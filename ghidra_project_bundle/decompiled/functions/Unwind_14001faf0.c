/**
 * Function: Unwind@14001faf0
 * Address:  14001faf0
 * Signature: undefined Unwind@14001faf0(void)
 * Body size: 65 bytes
 */


void Unwind_14001faf0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x20) != (void *)(param_2 + 0x40)) {
    free(*(void **)(param_2 + 0x20));
  }
  return;
}

