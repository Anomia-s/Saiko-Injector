/**
 * Function: Unwind@140795020
 * Address:  140795020
 * Signature: undefined Unwind@140795020(void)
 * Body size: 103 bytes
 */


void Unwind_140795020(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 200) + *(longlong *)(lVar1 + 0x3d0);
  if (lVar2 != *(longlong *)(lVar1 + 0x3d8)) {
    *(longlong *)(lVar1 + 0x3d8) = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0xd0) + *(longlong *)(lVar1 + 0x2f8);
  if (lVar2 != *(longlong *)(lVar1 + 0x300)) {
    *(longlong *)(lVar1 + 0x300) = lVar2;
  }
  return;
}

