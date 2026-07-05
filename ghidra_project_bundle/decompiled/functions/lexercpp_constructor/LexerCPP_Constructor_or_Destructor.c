/**
 * Function: LexerCPP_Constructor_or_Destructor
 * Address:  14091c340
 * Signature: void __fastcall LexerCPP_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 1001 bytes
 */


void LexerCPP::LexerCPP_Constructor_or_Destructor(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_1 = &vftable;
  uVar3 = param_1[0x354];
  if (0xf < uVar3) {
    lVar4 = param_1[0x351];
    uVar1 = uVar3 + 1;
    lVar2 = lVar4;
    if (0xfff < uVar1) {
      lVar2 = *(longlong *)(lVar4 + -8);
      if (0x1f < (ulonglong)((lVar4 + -8) - lVar2)) goto LAB_14091c710;
      uVar1 = uVar3 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar2,uVar1);
  }
  param_1[0x353] = 0;
  param_1[0x354] = 0xf;
  *(undefined1 *)(param_1 + 0x351) = 0;
  FUN_14091bcf0(param_1 + 0x34e);
  FUN_1406d9a20(param_1 + 0x347);
  if (param_1[0x344] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x344] = 0;
  *(undefined4 *)(param_1 + 0x343) = 0;
  if (param_1[0x342] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x342] = 0;
  *(undefined4 *)(param_1 + 0x341) = 0;
  if (param_1[0x340] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0x340] = 0;
  *(undefined4 *)(param_1 + 0x33f) = 0;
  Scintilla::OptionSet<_anon_B7B1C2DC::OptionsCPP>::
  OptionSet<_anon_B7B1C2DC::OptionsCPP>_Constructor_or_Destructor(param_1 + 0x333);
  uVar3 = param_1[0x331];
  if (0xf < uVar3) {
    lVar4 = param_1[0x32e];
    uVar1 = uVar3 + 1;
    lVar2 = lVar4;
    if (0xfff < uVar1) {
      lVar2 = *(longlong *)(lVar4 + -8);
      if (0x1f < (ulonglong)((lVar4 + -8) - lVar2)) goto LAB_14091c710;
      uVar1 = uVar3 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar2,uVar1);
  }
  param_1[0x330] = 0;
  param_1[0x331] = 0xf;
  *(undefined1 *)(param_1 + 0x32e) = 0;
  uVar3 = param_1[0x32d];
  if (0xf < uVar3) {
    lVar4 = param_1[0x32a];
    uVar1 = uVar3 + 1;
    lVar2 = lVar4;
    if (0xfff < uVar1) {
      lVar2 = *(longlong *)(lVar4 + -8);
      if (0x1f < (ulonglong)((lVar4 + -8) - lVar2)) goto LAB_14091c710;
      uVar1 = uVar3 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar2,uVar1);
  }
  param_1[0x32c] = 0;
  param_1[0x32d] = 0xf;
  *(undefined1 *)(param_1 + 0x32a) = 0;
  FUN_140916650(param_1 + 0x326,param_1 + 0x326);
  thunk_FUN_140b68ba8(param_1[0x326],0x80);
  FUN_140a8b880(param_1 + 0x2a3);
  FUN_140a8b880(param_1 + 0x220);
  FUN_140a8b880(param_1 + 0x19d);
  FUN_140a8b880(param_1 + 0x11a);
  FUN_140a8b880(param_1 + 0x97);
  FUN_140a8b880();
  lVar4 = param_1[0x11];
  if (lVar4 != 0) {
    lVar2 = param_1[0x12];
    if (lVar4 != lVar2) {
      do {
        FUN_140912550();
        lVar4 = lVar4 + 0x70;
      } while (lVar4 != lVar2);
      lVar4 = param_1[0x11];
    }
    uVar3 = param_1[0x13] - lVar4;
    lVar2 = lVar4;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar4 + -8);
      if (0x1f < (ulonglong)((lVar4 + -8) - lVar2)) goto LAB_14091c710;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar4 = param_1[0xe];
  if (lVar4 != 0) {
    uVar3 = param_1[0x10] - lVar4;
    lVar2 = lVar4;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar4 + -8);
      if (0x1f < (ulonglong)((lVar4 + -8) - lVar2)) {
LAB_14091c710:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  if (param_1[0xd] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_1[7] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (param_1[5] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_1[3] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

