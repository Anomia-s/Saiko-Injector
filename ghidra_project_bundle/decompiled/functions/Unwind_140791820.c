/**
 * Function: Unwind@140791820
 * Address:  140791820
 * Signature: undefined Unwind@140791820(void)
 * Body size: 140 bytes
 */


void Unwind_140791820(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x108);
  lVar2 = *(longlong *)(param_2 + 200) + *(longlong *)(lVar1 + 0x3d0);
  if (lVar2 != *(longlong *)(lVar1 + 0x3d8)) {
    *(longlong *)(lVar1 + 0x3d8) = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0xb0) + *(longlong *)(lVar1 + 0x3a0);
  if (lVar2 != *(longlong *)(lVar1 + 0x3a8)) {
    *(longlong *)(lVar1 + 0x3a8) = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0xa8) + *(longlong *)(lVar1 + 0x388);
  if (lVar2 != *(longlong *)(lVar1 + 0x390)) {
    *(longlong *)(*(longlong *)(param_2 + 0x108) + 0x390) = lVar2;
  }
  return;
}

