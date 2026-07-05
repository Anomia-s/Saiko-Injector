/**
 * Function: InitializationFailedError
 * Address:  1405368c0
 * Signature: InitializationFailedError * __thiscall InitializationFailedError(InitializationFailedError * this, longlong param_1)
 * Body size: 103 bytes
 */


InitializationFailedError * __thiscall
vk::InitializationFailedError::InitializationFailedError
          (InitializationFailedError *this,longlong param_1)

{
  undefined8 uVar1;
  
                    /* inlined constructor: vk::Error::Error */
  this->vftablePtr = (InitializationFailedError_vftable_for_Error *)&Error::vftable;
                    /* inlined constructor: std::exception::exception
                       inlined constructor: std::_System_error::_System_error */
  this->vftablePtr = (InitializationFailedError_vftable_for_system_error *)&std::exception::vftable;
  this->offset_0x8 = 0;
  this->offset_0x10 = 0;
  __std_exception_copy(param_1 + 0x10,&this->offset_0x8);
  this->vftablePtr =
       (InitializationFailedError_vftable_for_system_error *)&std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  this->offset_0x18 = *(undefined8 *)(param_1 + 0x20);
  this->offset_0x20 = uVar1;
  this->vftablePtr = &vftable_for_Error;
  this->vftablePtr = &vftable_for_system_error;
  return this;
}

