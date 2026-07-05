/**
 * Function: Unwind@140016e60
 * Address:  140016e60
 * Signature: undefined Unwind@140016e60(void)
 * Body size: 65 bytes
 */


void Unwind_140016e60(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x30) != (void *)(param_2 + 0x50)) {
    free(*(void **)(param_2 + 0x30));
  }
  return;
}

