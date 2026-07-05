/**
 * Function: Unwind@1407908c0
 * Address:  1407908c0
 * Signature: undefined Unwind@1407908c0(void)
 * Body size: 89 bytes
 */


void Unwind_1407908c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x170) + *(longlong *)(*(longlong *)(param_2 + 0x178) + 0x3d0);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x178) + 0x3d8)) {
    *(longlong *)(*(longlong *)(param_2 + 0x178) + 0x3d8) = lVar1;
  }
  return;
}

