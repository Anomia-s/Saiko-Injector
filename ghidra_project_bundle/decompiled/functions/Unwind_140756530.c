/**
 * Function: Unwind@140756530
 * Address:  140756530
 * Signature: undefined Unwind@140756530(void)
 * Body size: 65 bytes
 */


void Unwind_140756530(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x40) != (void *)(param_2 + 0x48)) {
    free(*(void **)(param_2 + 0x40));
  }
  return;
}

