/**
 * Function: Unwind@14022ecb0
 * Address:  14022ecb0
 * Signature: undefined Unwind@14022ecb0(void)
 * Body size: 301 bytes
 */


void Unwind_14022ecb0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(ulonglong *)(param_2 + 0x88);
  if (7 < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x70);
    uVar3 = uVar1 * 2 + 2;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_14022edc4;
      uVar3 = uVar1 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 7;
  *(undefined2 *)(param_2 + 0x70) = 0;
  uVar1 = *(ulonglong *)(param_2 + 0x68);
  if (7 < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x50);
    uVar3 = uVar1 * 2 + 2;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_14022edc4;
      uVar3 = uVar1 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 7;
  *(undefined2 *)(param_2 + 0x50) = 0;
  uVar1 = *(ulonglong *)(param_2 + 0x48);
  if (7 < uVar1) {
    lVar2 = *(longlong *)(param_2 + 0x30);
    uVar3 = uVar1 * 2 + 2;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_14022edc4:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  return;
}

