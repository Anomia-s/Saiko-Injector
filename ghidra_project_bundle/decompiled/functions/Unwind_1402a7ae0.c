/**
 * Function: Unwind@1402a7ae0
 * Address:  1402a7ae0
 * Signature: undefined Unwind@1402a7ae0(void)
 * Body size: 40 bytes
 */


void Unwind_1402a7ae0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    _Mtx_unlock(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}

