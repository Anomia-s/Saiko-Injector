/**
 * Function: Unwind@14078ea10
 * Address:  14078ea10
 * Signature: undefined Unwind@14078ea10(void)
 * Body size: 77 bytes
 */


void Unwind_14078ea10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x60) + *(longlong *)(*(longlong *)(param_2 + 0x68) + 0x3d0);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x68) + 0x3d8)) {
    *(longlong *)(*(longlong *)(param_2 + 0x68) + 0x3d8) = lVar1;
  }
  return;
}

