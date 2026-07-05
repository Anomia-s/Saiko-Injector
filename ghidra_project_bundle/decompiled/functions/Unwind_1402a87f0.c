/**
 * Function: Unwind@1402a87f0
 * Address:  1402a87f0
 * Signature: undefined Unwind@1402a87f0(void)
 * Body size: 51 bytes
 */


void Unwind_1402a87f0(undefined8 param_1,longlong param_2)

{
  __ExceptionPtrDestroy((void *)(param_2 + 0x20));
  if (*(char *)(param_2 + 0x48) != '\0') {
    _Mtx_unlock(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}

