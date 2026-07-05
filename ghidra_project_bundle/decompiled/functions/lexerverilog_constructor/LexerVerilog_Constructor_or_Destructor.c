/**
 * Function: LexerVerilog_Constructor_or_Destructor
 * Address:  140a255e0
 * Signature: void __fastcall LexerVerilog_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 490 bytes
 */


void LexerVerilog::LexerVerilog_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *param_1 = &vftable;
  FUN_1401c4b60(param_1 + 0x333,param_1 + 0x333,*(undefined8 *)(param_1[0x333] + 8));
  thunk_FUN_140b68ba8(param_1[0x333],0x30);
  FUN_14091bcf0(param_1 + 0x330);
  Scintilla::OptionSet<_anon_61FF082A::OptionsVerilog>::
  OptionSet<_anon_61FF082A::OptionsVerilog>_Constructor_or_Destructor(param_1 + 0x321);
  FUN_140916650(param_1 + 0x31d,param_1 + 0x31d);
  thunk_FUN_140b68ba8(param_1[0x31d],0x80);
  lVar3 = param_1[0x31a];
  if (lVar3 != 0) {
    lVar1 = param_1[0x31b];
    if (lVar3 != lVar1) {
      do {
        FUN_140912550();
        lVar3 = lVar3 + 0x70;
      } while (lVar3 != lVar1);
      lVar3 = param_1[0x31a];
    }
    uVar2 = param_1[0x31c] - lVar3;
    lVar1 = lVar3;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar1)) goto LAB_140a257b1;
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar1,uVar2);
    param_1[0x31a] = 0;
    param_1[0x31b] = 0;
    param_1[0x31c] = 0;
  }
  lVar3 = param_1[0x317];
  if (lVar3 != 0) {
    uVar2 = param_1[0x319] - lVar3;
    lVar1 = lVar3;
    if (0xfff < uVar2) {
      lVar1 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar1)) {
LAB_140a257b1:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar1,uVar2);
    param_1[0x317] = 0;
    param_1[0x318] = 0;
    param_1[0x319] = 0;
  }
  FUN_140a8b880(param_1 + 0x294);
  FUN_140a8b880(param_1 + 0x211);
  FUN_140a8b880(param_1 + 0x18e);
  FUN_140a8b880(param_1 + 0x10b);
  FUN_140a8b880(param_1 + 0x88);
  FUN_140a8b880(param_1 + 5);
  if (param_1[4] != 0) {
    thunk_FUN_140b68ba8();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  httplib::ClientImpl::vfunction4();
  return;
}

