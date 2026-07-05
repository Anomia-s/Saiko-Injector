/**
 * Function: Unwind@14078bf50
 * Address:  14078bf50
 * Signature: undefined Unwind@14078bf50(void)
 * Body size: 103 bytes
 */


void Unwind_14078bf50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 200) + *(longlong *)(lVar1 + 0x3d0);
  if (lVar2 != *(longlong *)(lVar1 + 0x3d8)) {
    *(longlong *)(lVar1 + 0x3d8) = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0xa8) + *(longlong *)(lVar1 + 0x238);
  if (lVar2 != *(longlong *)(lVar1 + 0x240)) {
    *(longlong *)(lVar1 + 0x240) = lVar2;
  }
  return;
}

