/**
 * Function: Unwind@140b544a0
 * Address:  140b544a0
 * Signature: undefined Unwind@140b544a0(void)
 * Body size: 42 bytes
 */


void Unwind_140b544a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    _Mtx_unlock(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}

