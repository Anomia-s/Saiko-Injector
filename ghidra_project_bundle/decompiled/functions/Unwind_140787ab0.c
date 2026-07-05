/**
 * Function: Unwind@140787ab0
 * Address:  140787ab0
 * Signature: undefined Unwind@140787ab0(void)
 * Body size: 77 bytes
 */


void Unwind_140787ab0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x40) + *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x1f0);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x1f8)) {
    *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x1f8) = lVar1;
  }
  return;
}

