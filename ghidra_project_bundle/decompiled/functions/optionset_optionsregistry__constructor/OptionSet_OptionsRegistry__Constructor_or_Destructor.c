/**
 * Function: OptionSet<OptionsRegistry>_Constructor_or_Destructor
 * Address:  1409e0740
 * Signature: void __fastcall OptionSet<OptionsRegistry>_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 244 bytes
 */


void Scintilla::OptionSet<OptionsRegistry>::OptionSet<OptionsRegistry>_Constructor_or_Destructor
               (undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_1 = &vftable;
  uVar1 = param_1[10];
  if (0xf < uVar1) {
    lVar2 = param_1[7];
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_1409e081b;
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar1 = param_1[6];
  if (0xf < uVar1) {
    lVar2 = param_1[3];
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_1409e081b:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_1408d1d80(param_1 + 1,param_1 + 1,*(undefined8 *)(param_1[1] + 8));
  thunk_FUN_140b68ba8(param_1[1],0x68);
  return;
}

