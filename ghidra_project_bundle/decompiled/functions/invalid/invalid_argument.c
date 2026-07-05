/**
 * Function: invalid_argument
 * Address:  1401f7b70
 * Signature: invalid_argument * __thiscall invalid_argument(invalid_argument * this, longlong param_1)
 * Body size: 60 bytes
 */


invalid_argument * __thiscall
std::invalid_argument::invalid_argument(invalid_argument *this,longlong param_1)

{
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (invalid_argument_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  return this;
}

