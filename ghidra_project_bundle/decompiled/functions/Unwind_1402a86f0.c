/**
 * Function: Unwind@1402a86f0
 * Address:  1402a86f0
 * Signature: undefined Unwind@1402a86f0(void)
 * Body size: 42 bytes
 */


void Unwind_1402a86f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    _Mtx_unlock(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}

