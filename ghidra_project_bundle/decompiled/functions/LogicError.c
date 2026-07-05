/**
 * Function: LogicError
 * Address:  140716e70
 * Signature: LogicError * __thiscall LogicError(LogicError * this, longlong param_1)
 * Body size: 82 bytes
 */


LogicError * __thiscall vk::LogicError::LogicError(LogicError *this,longlong param_1)

{
                    /* inlined constructor: vk::Error::Error */
  this->vftablePtr = (LogicError_vftable0 *)&Error::vftable;
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (LogicError_vftable1 *)&std::exception::vftable;
  this->offset_0x8 = 0;
  this->offset_0x10 = 0;
  __std_exception_copy(param_1 + 0x10,&this->offset_0x8);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  return this;
}

