/**
 * Function: Unwind@1401f92f0
 * Address:  1401f92f0
 * Signature: undefined Unwind@1401f92f0(void)
 * Body size: 197 bytes
 */


void Unwind_1401f92f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x340);
  lVar4 = *(longlong *)(param_2 + 0x348);
  lVar2 = *(longlong *)(param_2 + 0x350);
  if (lVar2 != 0) {
    if ((0xfff < (ulonglong)(*(longlong *)(param_2 + 0x358) - lVar2)) &&
       (0x1f < (ulonglong)((lVar2 + -8) - *(longlong *)(lVar2 + -8)))) goto LAB_1401f939c;
    thunk_FUN_140b68ba8();
  }
  if (lVar1 != 0) {
    uVar3 = lVar4 - lVar1;
    lVar4 = lVar1;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar4)) {
LAB_1401f939c:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  return;
}

