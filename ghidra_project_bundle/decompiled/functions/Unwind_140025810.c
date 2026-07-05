/**
 * Function: Unwind@140025810
 * Address:  140025810
 * Signature: undefined Unwind@140025810(void)
 * Body size: 65 bytes
 */


void Unwind_140025810(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x20) != (void *)(param_2 + 0x40)) {
    free(*(void **)(param_2 + 0x20));
  }
  return;
}

