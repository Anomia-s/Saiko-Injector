/**
 * Function: Unwind@140789850
 * Address:  140789850
 * Signature: undefined Unwind@140789850(void)
 * Body size: 89 bytes
 */


void Unwind_140789850(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x198) + *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x2b0);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x2b8)) {
    *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x2b8) = lVar1;
  }
  return;
}

