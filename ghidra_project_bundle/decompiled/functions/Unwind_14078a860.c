/**
 * Function: Unwind@14078a860
 * Address:  14078a860
 * Signature: undefined Unwind@14078a860(void)
 * Body size: 89 bytes
 */


void Unwind_14078a860(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x150) + *(longlong *)(*(longlong *)(param_2 + 0x158) + 0x3d0);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x158) + 0x3d8)) {
    *(longlong *)(*(longlong *)(param_2 + 0x158) + 0x3d8) = lVar1;
  }
  return;
}

