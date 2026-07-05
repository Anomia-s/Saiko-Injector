/**
 * Function: format_facet<std::locale>_Constructor_or_Destructor
 * Address:  140014fc0
 * Signature: void __fastcall format_facet<std::locale>_Constructor_or_Destructor(facet * param_1)
 * Body size: 303 bytes
 */


void fmtquill::v12::format_facet<std::locale>::format_facet<std::locale>_Constructor_or_Destructor
               (facet *param_1)

{
  _Crt_new_delete _Var1;
  _Facet_base _Var2;
  ulonglong uVar3;
  _Facet_base _Var4;
  
  param_1->_Facet_base = (_Facet_base)&vftable;
  _Var1 = param_1[6]._Crt_new_delete;
  if (0xf < (ulonglong)_Var1) {
    _Var2 = param_1[5]._Facet_base;
    uVar3 = (longlong)_Var1 + 1;
    _Var4 = _Var2;
    if (0xfff < uVar3) {
      _Var4 = *(_Facet_base *)((longlong)_Var2 + -8);
      if (0x1f < (ulonglong)(((longlong)_Var2 + -8) - (longlong)_Var4)) goto LAB_1400150d6;
      uVar3 = (longlong)_Var1 + 0x28;
    }
    thunk_FUN_140b68ba8(_Var4,uVar3);
  }
  param_1[6]._Facet_base = (_Facet_base)0x0;
  param_1[6]._Crt_new_delete = (_Crt_new_delete)0xf;
  *(undefined1 *)&param_1[5]._Facet_base = 0;
  _Var1 = param_1[4]._Crt_new_delete;
  if (0xf < (ulonglong)_Var1) {
    _Var2 = param_1[3]._Facet_base;
    uVar3 = (longlong)_Var1 + 1;
    _Var4 = _Var2;
    if (0xfff < uVar3) {
      _Var4 = *(_Facet_base *)((longlong)_Var2 + -8);
      if (0x1f < (ulonglong)(((longlong)_Var2 + -8) - (longlong)_Var4)) goto LAB_1400150d6;
      uVar3 = (longlong)_Var1 + 0x28;
    }
    thunk_FUN_140b68ba8(_Var4,uVar3);
  }
  param_1[4]._Facet_base = (_Facet_base)0x0;
  param_1[4]._Crt_new_delete = (_Crt_new_delete)0xf;
  *(undefined1 *)&param_1[3]._Facet_base = 0;
  _Var1 = param_1[2]._Crt_new_delete;
  if (0xf < (ulonglong)_Var1) {
    _Var2 = param_1[1]._Facet_base;
    uVar3 = (longlong)_Var1 + 1;
    _Var4 = _Var2;
    if (0xfff < uVar3) {
      _Var4 = *(_Facet_base *)((longlong)_Var2 + -8);
      if (0x1f < (ulonglong)(((longlong)_Var2 + -8) - (longlong)_Var4)) {
LAB_1400150d6:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = (longlong)_Var1 + 0x28;
    }
    thunk_FUN_140b68ba8(_Var4,uVar3);
  }
  param_1[2]._Facet_base = (_Facet_base)0x0;
  param_1[2]._Crt_new_delete = (_Crt_new_delete)0xf;
  *(undefined1 *)&param_1[1]._Facet_base = 0;
                    /* WARNING: Could not recover jumptable at 0x0001400150cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::locale::facet::~facet(param_1);
  return;
}

