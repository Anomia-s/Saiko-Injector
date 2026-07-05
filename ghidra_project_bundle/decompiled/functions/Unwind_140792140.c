/**
 * Function: Unwind@140792140
 * Address:  140792140
 * Signature: undefined Unwind@140792140(void)
 * Body size: 140 bytes
 */


void Unwind_140792140(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xf8) + *(longlong *)(*(longlong *)(param_2 + 0x170) + 0x3b8);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x170) + 0x3c0)) {
    *(longlong *)(*(longlong *)(param_2 + 0x170) + 0x3c0) = lVar1;
  }
  lVar1 = *(longlong *)(param_2 + 0x168) + *(longlong *)(*(longlong *)(param_2 + 0x170) + 0x2f8);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x170) + 0x300)) {
    *(longlong *)(*(longlong *)(param_2 + 0x170) + 0x300) = lVar1;
  }
  return;
}

