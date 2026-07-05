/**
 * Function: Unwind@1400321e0
 * Address:  1400321e0
 * Signature: undefined Unwind@1400321e0(void)
 * Body size: 126 bytes
 */


void Unwind_1400321e0(undefined8 param_1,longlong param_2)

{
  void *_Memory;
  
  FUN_140032a70(*(undefined8 *)(param_2 + 0x108));
  FUN_140032a70(*(undefined8 *)(param_2 + 0x138));
  _Memory = *(void **)(*(longlong *)(param_2 + 0x160) + 0x20);
  if (_Memory != *(void **)(param_2 + 0x98)) {
    free(_Memory);
  }
  FUN_140004b30(*(undefined8 *)(param_2 + 0x160));
  FUN_140004b30(*(undefined8 *)(param_2 + 0x100));
  return;
}

