/**
 * Function: NotPermittedError
 * Address:  1405379c0
 * Signature: NotPermittedError * __thiscall NotPermittedError(NotPermittedError * this, longlong param_1)
 * Body size: 103 bytes
 */


NotPermittedError * __thiscall
vk::NotPermittedError::NotPermittedError(NotPermittedError *this,longlong param_1)

{
  undefined8 uVar1;
  
                    /* inlined constructor: vk::Error::Error */
  this->vftablePtr = (NotPermittedError_vftable_for_Error *)&Error::vftable;
                    /* inlined constructor: std::exception::exception
                       inlined constructor: std::_System_error::_System_error */
  this->vftablePtr = (NotPermittedError_vftable_for_system_error *)&std::exception::vftable;
  this->offset_0x8 = 0;
  this->offset_0x10 = 0;
  __std_exception_copy(param_1 + 0x10,&this->offset_0x8);
  this->vftablePtr = (NotPermittedError_vftable_for_system_error *)&std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  this->offset_0x18 = *(undefined8 *)(param_1 + 0x20);
  this->offset_0x20 = uVar1;
  this->vftablePtr = &vftable_for_Error;
  this->vftablePtr = &vftable_for_system_error;
  return this;
}

