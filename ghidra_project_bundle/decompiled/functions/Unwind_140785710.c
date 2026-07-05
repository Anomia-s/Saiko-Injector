/**
 * Function: Unwind@140785710
 * Address:  140785710
 * Signature: undefined Unwind@140785710(void)
 * Body size: 122 bytes
 */


void Unwind_140785710(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(ulonglong *)(param_2 + 0x98);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x80);
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  return;
}

