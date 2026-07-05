/**
 * Function: Unwind@14029b9b0
 * Address:  14029b9b0
 * Signature: undefined Unwind@14029b9b0(void)
 * Body size: 80 bytes
 */


void Unwind_14029b9b0(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0xb7) & 1) != 0) {
    _Mtx_unlock(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}

