/**
 * Function: Unwind@1405b6bd0
 * Address:  1405b6bd0
 * Signature: undefined Unwind@1405b6bd0(void)
 * Body size: 243 bytes
 */


void Unwind_1405b6bd0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(ulonglong *)(param_2 + 0x168);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x150);
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_1405b6caa;
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0xf;
  *(undefined1 *)(param_2 + 0x150) = 0;
  uVar1 = *(ulonglong *)(param_2 + 0x148);
  if (0xf < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x130);
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_1405b6caa:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  return;
}

