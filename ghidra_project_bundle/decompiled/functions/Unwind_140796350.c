/**
 * Function: Unwind@140796350
 * Address:  140796350
 * Signature: undefined Unwind@140796350(void)
 * Body size: 122 bytes
 */


void Unwind_140796350(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x210);
  lVar2 = *(longlong *)(param_2 + 0x138) + *(longlong *)(lVar1 + 0x2e0);
  if (lVar2 != *(longlong *)(lVar1 + 0x2e8)) {
    *(longlong *)(lVar1 + 0x2e8) = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0x130) + *(longlong *)(lVar1 + 0x2c8);
  if (lVar2 != *(longlong *)(lVar1 + 0x2d0)) {
    *(longlong *)(lVar1 + 0x2d0) = lVar2;
  }
  return;
}

