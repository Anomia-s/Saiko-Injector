/**
 * Function: Unwind@1402a7c60
 * Address:  1402a7c60
 * Signature: undefined Unwind@1402a7c60(void)
 * Body size: 42 bytes
 */


void Unwind_1402a7c60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    _Mtx_unlock(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}

