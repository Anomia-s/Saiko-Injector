/**
 * Function: Unwind@14078da80
 * Address:  14078da80
 * Signature: undefined Unwind@14078da80(void)
 * Body size: 143 bytes
 */


void Unwind_14078da80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x1e0) + *(longlong *)(*(longlong *)(param_2 + 0x210) + 0x370);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x210) + 0x378)) {
    *(longlong *)(*(longlong *)(param_2 + 0x210) + 0x378) = lVar1;
  }
  lVar1 = *(longlong *)(param_2 + 400) + *(longlong *)(*(longlong *)(param_2 + 0x210) + 0x2f8);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x210) + 0x300)) {
    *(longlong *)(*(longlong *)(param_2 + 0x210) + 0x300) = lVar1;
  }
  return;
}

