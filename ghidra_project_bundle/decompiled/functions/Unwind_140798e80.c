/**
 * Function: Unwind@140798e80
 * Address:  140798e80
 * Signature: undefined Unwind@140798e80(void)
 * Body size: 179 bytes
 */


void Unwind_140798e80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x168);
  lVar2 = *(longlong *)(param_2 + 0x158) + *(longlong *)(lVar1 + 0x238);
  if (lVar2 != *(longlong *)(lVar1 + 0x240)) {
    *(longlong *)(lVar1 + 0x240) = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0x140) + *(longlong *)(lVar1 + 0x3d0);
  if (lVar2 != *(longlong *)(lVar1 + 0x3d8)) {
    *(longlong *)(lVar1 + 0x3d8) = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0x148) + *(longlong *)(lVar1 + 0x220);
  if (lVar2 != *(longlong *)(lVar1 + 0x228)) {
    *(longlong *)(lVar1 + 0x228) = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0x138) + *(longlong *)(lVar1 + 0x208);
  if (lVar2 != *(longlong *)(lVar1 + 0x210)) {
    *(longlong *)(*(longlong *)(param_2 + 0x168) + 0x210) = lVar2;
  }
  return;
}

