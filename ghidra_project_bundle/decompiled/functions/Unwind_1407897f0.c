/**
 * Function: Unwind@1407897f0
 * Address:  1407897f0
 * Signature: undefined Unwind@1407897f0(void)
 * Body size: 89 bytes
 */


void Unwind_1407897f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x1a0) + *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x3d0);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x3d8)) {
    *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x3d8) = lVar1;
  }
  return;
}

