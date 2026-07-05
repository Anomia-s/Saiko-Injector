/**
 * Function: collate<char>_Constructor_or_Destructor
 * Address:  1401d1e50
 * Signature: undefined8 __fastcall collate<char>_Constructor_or_Destructor(longlong * param_1, undefined8 param_2)
 * Body size: 270 bytes
 */


undefined8
std::collate<char>::collate<char>_Constructor_or_Destructor(longlong *param_1,undefined8 param_2)

{
  facet *pfVar1;
  ulonglong uVar2;
  char ****ppppcVar3;
  _Locinfo local_c8 [104];
  _Facet_base local_60;
  _Crt_new_delete _Stack_58;
  char ***local_50 [3];
  ulonglong local_38;
  facet *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_30 = (facet *)FUN_140b65d30(0x20);
    FUN_1401d2000(param_2,local_50);
    ppppcVar3 = local_50;
    if (0xf < local_38) {
      ppppcVar3 = (char ****)local_50[0];
    }
    std::_Locinfo::_Locinfo(local_c8,(char *)ppppcVar3);
    pfVar1 = local_30;
    std::locale::facet::facet(local_30,0);
    pfVar1->_Facet_base = (_Facet_base)&vftable;
    std::_Locinfo::_Getcoll(local_c8,(_Collvec *)&local_60);
    local_30[1]._Facet_base = local_60;
    local_30[1]._Crt_new_delete = _Stack_58;
    *param_1 = (longlong)local_30;
    std::_Locinfo::~_Locinfo(local_c8);
    if (0xf < local_38) {
      uVar2 = local_38 + 1;
      ppppcVar3 = (char ****)local_50[0];
      if (0xfff < uVar2) {
        ppppcVar3 = (char ****)local_50[0][-1];
        if (0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)ppppcVar3))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar2 = local_38 + 0x28;
      }
      thunk_FUN_140b68ba8(ppppcVar3,uVar2);
    }
  }
  return 1;
}

