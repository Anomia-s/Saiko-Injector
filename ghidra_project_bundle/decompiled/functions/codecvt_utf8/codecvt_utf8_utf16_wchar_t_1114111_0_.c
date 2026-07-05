/**
 * Function: codecvt_utf8_utf16<wchar_t,1114111,0>
 * Address:  14000f4f0
 * Signature: codecvt_utf8_utf16<wchar_t,1114111,0> * __thiscall codecvt_utf8_utf16<wchar_t,1114111,0>(codecvt_utf8_utf16<wchar_t,1114111,0> * this)
 * Body size: 175 bytes
 */


codecvt_utf8_utf16<wchar_t,1114111,0> * __thiscall
std::codecvt_utf8_utf16<wchar_t,1114111,0>::codecvt_utf8_utf16<wchar_t,1114111,0>
          (codecvt_utf8_utf16<wchar_t,1114111,0> *this)

{
  _Crt_new_delete _Var1;
  codecvt<wchar_t,char,_Mbstatet> *this_00;
  
                    /* inlined constructor:
                       std::wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>::wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
                        */
  this->vftablePtr =
       (codecvt_utf8_utf16<wchar_t,1114111,0>_vftable *)
       &wstring_convert<std::codecvt_utf8_utf16<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
        ::vftable;
  _Var1 = (_Crt_new_delete)std::locale::_Init(true);
  this[1]._Crt_new_delete = _Var1;
  this[2].vftablePtr = (codecvt_utf8_utf16<wchar_t,1114111,0>_vftable *)0x0;
  this[2]._Crt_new_delete = (_Crt_new_delete)0x0;
  this[3].vftablePtr = (codecvt_utf8_utf16<wchar_t,1114111,0>_vftable *)0x0;
  this[3]._Crt_new_delete = (_Crt_new_delete)0xf;
  this[4].vftablePtr = (codecvt_utf8_utf16<wchar_t,1114111,0>_vftable *)0x0;
  this[4]._Crt_new_delete = (_Crt_new_delete)0x0;
  this[5].vftablePtr = (codecvt_utf8_utf16<wchar_t,1114111,0>_vftable *)0x0;
  this[5]._Crt_new_delete = (_Crt_new_delete)0x7;
  *(undefined2 *)&this[6]._Crt_new_delete = 0;
  this[6]._Crt_new_delete.field_0x2 = 0;
  this_00 = (codecvt<wchar_t,char,_Mbstatet> *)FUN_140b65d30(0x40);
  std::codecvt<wchar_t,char,_Mbstatet>::codecvt<wchar_t,char,_Mbstatet>(this_00,0);
  (this_00->codecvt_base).facet._Facet_base = (_Facet_base)&vftable;
  FUN_14000f750(this);
  return this;
}

