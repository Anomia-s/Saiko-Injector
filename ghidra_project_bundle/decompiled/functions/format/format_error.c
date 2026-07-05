/**
 * Function: format_error
 * Address:  1400144d0
 * Signature: format_error * __thiscall format_error(format_error * this, longlong param_1)
 * Body size: 60 bytes
 */


format_error * __thiscall
fmtquill::v12::format_error::format_error(format_error *this,longlong param_1)

{
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (format_error_vftable *)&std::exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  return this;
}

