/**
 * Function: Unwind@1402c5330
 * Address:  1402c5330
 * Signature: undefined Unwind@1402c5330(void)
 * Body size: 131 bytes
 */


void Unwind_1402c5330(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xc90);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_2 + 0xca0) - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
  }
  return;
}

