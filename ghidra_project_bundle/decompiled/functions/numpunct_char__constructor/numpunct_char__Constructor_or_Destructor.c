/**
 * Function: numpunct<char>_Constructor_or_Destructor
 * Address:  140015630
 * Signature: undefined8 __fastcall numpunct<char>_Constructor_or_Destructor(longlong * param_1, longlong param_2)
 * Body size: 173 bytes
 */


undefined8
std::numpunct<char>::numpunct<char>_Constructor_or_Destructor(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  facet *pfVar2;
  char *pcVar3;
  _Locinfo local_90 [104];
  facet *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_28 = (facet *)FUN_140b65d30(0x30);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)(lVar1 + 0x30);
      if (*(char **)(lVar1 + 0x28) != (char *)0x0) {
        pcVar3 = *(char **)(lVar1 + 0x28);
      }
    }
    std::_Locinfo::_Locinfo(local_90,pcVar3);
    pfVar2 = local_28;
    std::locale::facet::facet(local_28,0);
    pfVar2->_Facet_base = (_Facet_base)&vftable;
    FUN_140015740(pfVar2,local_90,1);
    *param_1 = (longlong)local_28;
    std::_Locinfo::~_Locinfo(local_90);
  }
  return 4;
}

