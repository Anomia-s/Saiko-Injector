/**
 * Function: Unwind@1407564e0
 * Address:  1407564e0
 * Signature: undefined Unwind@1407564e0(void)
 * Body size: 65 bytes
 */


void Unwind_1407564e0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x40) != (void *)(param_2 + 0x48)) {
    free(*(void **)(param_2 + 0x40));
  }
  return;
}

