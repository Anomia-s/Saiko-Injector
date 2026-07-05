/**
 * Function: Unwind@140792d30
 * Address:  140792d30
 * Signature: undefined Unwind@140792d30(void)
 * Body size: 76 bytes
 */


void Unwind_140792d30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x88);
  lVar2 = *(longlong *)(param_2 + 0x80) + *(longlong *)(lVar1 + 0x2b0);
  if (lVar2 != *(longlong *)(lVar1 + 0x2b8)) {
    *(longlong *)(lVar1 + 0x2b8) = lVar2;
  }
  return;
}

