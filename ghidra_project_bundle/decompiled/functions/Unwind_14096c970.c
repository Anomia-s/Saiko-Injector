/**
 * Function: Unwind@14096c970
 * Address:  14096c970
 * Signature: undefined Unwind@14096c970(void)
 * Body size: 78 bytes
 */


void Unwind_14096c970(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x68) + 8) != 0) {
    thunk_FUN_140b68ba8();
  }
  puVar1 = *(undefined4 **)(param_2 + 0x68);
  *(undefined8 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  return;
}

