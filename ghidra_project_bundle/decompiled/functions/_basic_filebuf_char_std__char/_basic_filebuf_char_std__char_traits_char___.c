/**
 * Function: ~basic_filebuf<char,std::char_traits<char>_>
 * Address:  1401f64f0
 * Signature: void __thiscall ~basic_filebuf<char,std::char_traits<char>_>(basic_filebuf<char,std::char_traits<char>_> * this)
 * Body size: 122 bytes
 */


void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  this->vftablePtr = &vftable;
  if (((this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x78 == 0) ||
     (plVar3 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x10,
     (undefined1 *)*plVar3 != &(this->basic_filebuf<char,std::char_traits<char>_>_data).field_0x68))
  {
    cVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x74;
  }
  else {
    iVar2 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x88;
    lVar4 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x80;
    *plVar3 = lVar4;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x30 = lVar4;
    *(this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x48 = iVar2 - (int)lVar4;
    cVar1 = (this->basic_filebuf<char,std::char_traits<char>_>_data).offset_0x74;
  }
  if (cVar1 == '\x01') {
    FUN_1400e6190();
  }
                    /* WARNING: Could not recover jumptable at 0x0001401f653b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  return;
}

