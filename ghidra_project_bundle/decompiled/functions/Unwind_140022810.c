/**
 * Function: Unwind@140022810
 * Address:  140022810
 * Signature: undefined Unwind@140022810(void)
 * Body size: 65 bytes
 */


void Unwind_140022810(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x20) != (void *)(param_2 + 0x40)) {
    free(*(void **)(param_2 + 0x20));
  }
  return;
}

