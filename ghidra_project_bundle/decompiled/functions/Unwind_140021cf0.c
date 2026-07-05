/**
 * Function: Unwind@140021cf0
 * Address:  140021cf0
 * Signature: undefined Unwind@140021cf0(void)
 * Body size: 140 bytes
 */


void Unwind_140021cf0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x58) != (void *)(param_2 + 0x78)) {
    free(*(void **)(param_2 + 0x58));
  }
  if (*(void **)(param_2 + 0x120) != (void *)(param_2 + 0x140)) {
    free(*(void **)(param_2 + 0x120));
  }
  if (*(void **)(param_2 + 0x1d0) != (void *)(param_2 + 0x1f0)) {
    free(*(void **)(param_2 + 0x1d0));
  }
  if (*(void **)(param_2 + 0x288) != (void *)(param_2 + 0x2a8)) {
    free(*(void **)(param_2 + 0x288));
  }
  return;
}

