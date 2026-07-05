/**
 * Function: Unwind@140036270
 * Address:  140036270
 * Signature: undefined Unwind@140036270(void)
 * Body size: 202 bytes
 */


void Unwind_140036270(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 600;
  do {
    uVar1 = *(ulonglong *)(param_2 + 0x98 + lVar5);
    if (0xf < uVar1) {
      lVar2 = *(longlong *)(param_2 + 0x80 + lVar5);
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
    *(undefined8 *)(param_2 + 0x90 + lVar5) = 0;
    *(undefined8 *)(param_2 + 0x98 + lVar5) = 0xf;
    *(undefined1 *)(param_2 + 0x80 + lVar5) = 0;
    lVar5 = lVar5 + -0x28;
  } while (lVar5 != -0x28);
  *(longlong *)(param_2 + 0x340) = param_2 + 0x2d8;
  *(undefined1 *)(param_2 + 0x367) = 1;
  return;
}

