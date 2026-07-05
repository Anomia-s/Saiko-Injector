/**
 * Function: Unwind@140799420
 * Address:  140799420
 * Signature: undefined Unwind@140799420(void)
 * Body size: 80 bytes
 */


void Unwind_140799420(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x70) + *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x310);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x318)) {
    *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x318) = lVar1;
  }
  return;
}

