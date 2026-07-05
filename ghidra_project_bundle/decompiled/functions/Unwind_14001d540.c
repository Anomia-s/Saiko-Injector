/**
 * Function: Unwind@14001d540
 * Address:  14001d540
 * Signature: undefined Unwind@14001d540(void)
 * Body size: 80 bytes
 */


void Unwind_14001d540(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x40) != (void *)(param_2 + 0x60)) {
    free(*(void **)(param_2 + 0x40));
  }
  return;
}

