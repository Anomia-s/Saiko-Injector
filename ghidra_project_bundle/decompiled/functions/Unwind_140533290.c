/**
 * Function: Unwind@140533290
 * Address:  140533290
 * Signature: undefined Unwind@140533290(void)
 * Body size: 200 bytes
 */


void Unwind_140533290(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_2 + 0x798);
  if ((longlong *)(param_2 + 0x2a0) != *(longlong **)(param_2 + 0x798) &&
      (*(byte *)(param_2 + 0x7a7) & 1) == 0) {
    do {
      plVar1 = plVar6 + -5;
      uVar2 = plVar6[-2];
      if (0xf < uVar2) {
        lVar3 = *plVar1;
        uVar4 = uVar2 + 1;
        lVar5 = lVar3;
        if (0xfff < uVar4) {
          lVar5 = *(longlong *)(lVar3 + -8);
          if (0x1f < (ulonglong)((lVar3 + -8) - lVar5)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar4 = uVar2 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar5,uVar4);
      }
      plVar6[-3] = 0;
      plVar6[-2] = 0xf;
      *(undefined1 *)(plVar6 + -5) = 0;
      plVar6 = plVar1;
    } while (plVar1 != (longlong *)(param_2 + 0x2a0));
  }
  return;
}

