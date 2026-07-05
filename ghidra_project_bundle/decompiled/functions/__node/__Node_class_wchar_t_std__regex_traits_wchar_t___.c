/**
 * Function: ~_Node_class<wchar_t,std::regex_traits<wchar_t>_>
 * Address:  140812b40
 * Signature: void __thiscall ~_Node_class<wchar_t,std::regex_traits<wchar_t>_>(_Node_class<wchar_t,std::regex_traits<wchar_t>_> * this)
 * Body size: 233 bytes
 */


void __thiscall
std::_Node_class<wchar_t,std::regex_traits<wchar_t>_>::
~_Node_class<wchar_t,std::regex_traits<wchar_t>_>
          (_Node_class<wchar_t,std::regex_traits<wchar_t>_> *this)

{
  longlong lVar1;
  longlong lVar2;
  
  this->vftablePtr = &vftable;
  lVar2 = (this->_Node_class<wchar_t,std::regex_traits<wchar_t>_>_data).offset_0x18;
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x18);
    free(*(void **)(lVar2 + 0x10));
    thunk_FUN_140b68ba8(lVar2,0x20);
    lVar2 = lVar1;
  }
  lVar2 = (this->_Node_class<wchar_t,std::regex_traits<wchar_t>_>_data).offset_0x20;
  if (lVar2 != 0) {
    thunk_FUN_140b68ba8(lVar2,0x20);
  }
  lVar2 = (this->_Node_class<wchar_t,std::regex_traits<wchar_t>_>_data).offset_0x28;
  if (lVar2 != 0) {
    free(*(void **)(lVar2 + 8));
    thunk_FUN_140b68ba8(lVar2,0x10);
  }
  lVar2 = (this->_Node_class<wchar_t,std::regex_traits<wchar_t>_>_data).offset_0x30;
  if (lVar2 != 0) {
    free(*(void **)(lVar2 + 8));
    thunk_FUN_140b68ba8(lVar2,0x10);
  }
  lVar2 = (this->_Node_class<wchar_t,std::regex_traits<wchar_t>_>_data).offset_0x40;
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x18);
    free(*(void **)(lVar2 + 0x10));
    thunk_FUN_140b68ba8(lVar2,0x20);
    lVar2 = lVar1;
  }
  return;
}

