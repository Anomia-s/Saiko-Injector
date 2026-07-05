/**
 * Function: Unwind@1402c8860
 * Address:  1402c8860
 * Signature: undefined Unwind@1402c8860(void)
 * Body size: 180 bytes
 */


void Unwind_1402c8860(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((*(byte *)(param_2 + 0x2968) & 1) != 0) {
    lVar4 = FUN_1401a9cc0();
    if (*(longlong *)(lVar4 + 0x290) == *(longlong *)(param_2 + 0x28c8)) {
      lVar5 = FUN_1401a9e60();
      uVar1 = *(ulonglong *)(lVar5 + 0x28);
      lVar4 = lVar5;
      if ((uVar1 & 0xffff) == 0) {
        lVar4 = FUN_1400637c0(lVar5,uVar1);
      }
      lVar2 = *(longlong *)(lVar5 + 0x48);
      uVar6 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar6) = 0x11;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar6) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar4 >> 0x20),(int)uVar3);
      *(ulonglong *)(lVar5 + 0x28) = uVar1 + 1;
    }
  }
  return;
}

