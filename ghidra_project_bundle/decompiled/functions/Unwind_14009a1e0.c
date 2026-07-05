/**
 * Function: Unwind@14009a1e0
 * Address:  14009a1e0
 * Signature: undefined Unwind@14009a1e0(void)
 * Body size: 136 bytes
 */


void Unwind_14009a1e0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((*(byte *)(param_2 + 0x3f) & 1) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x30);
    lVar4 = FUN_1401a9cc0();
    if (*(longlong *)(lVar4 + 0x290) == lVar5) {
      lVar4 = FUN_1401a9e60();
      uVar1 = *(ulonglong *)(lVar4 + 0x28);
      lVar5 = lVar4;
      if ((uVar1 & 0xffff) == 0) {
        lVar5 = FUN_1400637c0(lVar4,uVar1);
      }
      lVar2 = *(longlong *)(lVar4 + 0x48);
      uVar6 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar6) = 0x11;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar6) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar3);
      *(ulonglong *)(lVar4 + 0x28) = uVar1 + 1;
    }
  }
  return;
}

