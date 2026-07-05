/**
 * Function: RegexError
 * Address:  140810580
 * Signature: RegexError * __thiscall RegexError(RegexError * this, longlong param_1)
 * Body size: 60 bytes
 */


RegexError * __thiscall Scintilla::RegexError::RegexError(RegexError *this,longlong param_1)

{
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (RegexError_vftable *)&std::exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  return this;
}

