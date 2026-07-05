/**
 * Function: Unwind@140025d70
 * Address:  140025d70
 * Signature: undefined Unwind@140025d70(void)
 * Body size: 71 bytes
 */


void Unwind_140025d70(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x40) != (void *)(param_2 + 0x60)) {
    free(*(void **)(param_2 + 0x40));
  }
  return;
}

