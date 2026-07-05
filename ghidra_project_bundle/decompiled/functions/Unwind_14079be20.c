/**
 * Function: Unwind@14079be20
 * Address:  14079be20
 * Signature: undefined Unwind@14079be20(void)
 * Body size: 103 bytes
 */


void Unwind_14079be20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 0x68) + *(longlong *)(lVar1 + 0x358);
  if (lVar2 != *(longlong *)(lVar1 + 0x360)) {
    *(longlong *)(lVar1 + 0x360) = lVar2;
  }
  lVar2 = *(longlong *)(param_2 + 0x60) + *(longlong *)(lVar1 + 0x340);
  if (lVar2 != *(longlong *)(lVar1 + 0x348)) {
    *(longlong *)(lVar1 + 0x348) = lVar2;
  }
  return;
}

