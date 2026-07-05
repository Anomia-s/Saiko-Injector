/**
 * Function: Unwind@14022ec00
 * Address:  14022ec00
 * Signature: undefined Unwind@14022ec00(void)
 * Body size: 171 bytes
 */


void Unwind_14022ec00(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_2 + 0x360);
  do {
    if ((longlong *)(param_2 + 0x30) == plVar3) {
      return;
    }
    uVar1 = plVar3[-1];
    if (7 < uVar1) {
      lVar2 = plVar3[-4];
      uVar4 = uVar1 * 2 + 2;
      lVar5 = lVar2;
      if (0xfff < uVar4) {
        lVar5 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = uVar1 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar5,uVar4);
    }
    plVar3[-2] = 0;
    plVar3[-1] = 7;
    *(undefined2 *)(plVar3 + -4) = 0;
    plVar3 = plVar3 + -4;
  } while( true );
}

