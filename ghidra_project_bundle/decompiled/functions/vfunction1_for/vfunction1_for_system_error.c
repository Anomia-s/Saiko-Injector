/**
 * Function: vfunction1_for_system_error
 * Address:  140538c00
 * Signature: undefined8 * __thiscall vfunction1_for_system_error(SystemError * this, int param_1)
 * Body size: 58 bytes
 */


/* vk::SystemError member function inherited by vk::OutOfDeviceMemoryError
   vk::SystemError member function inherited by vk::InitializationFailedError
   vk::SystemError member function inherited by vk::DeviceLostError
   vk::SystemError member function inherited by vk::MemoryMapFailedError
   vk::SystemError member function inherited by vk::LayerNotPresentError
   vk::SystemError member function inherited by vk::ExtensionNotPresentError
   vk::SystemError member function inherited by vk::FeatureNotPresentError
   vk::SystemError member function inherited by vk::IncompatibleDriverError
   vk::SystemError member function inherited by vk::TooManyObjectsError
   vk::SystemError member function inherited by vk::FormatNotSupportedError
   vk::SystemError member function inherited by vk::FragmentedPoolError
   vk::SystemError member function inherited by vk::UnknownError
   vk::SystemError member function inherited by vk::ValidationFailedError
   vk::SystemError member function inherited by vk::OutOfPoolMemoryError
   vk::SystemError member function inherited by vk::InvalidExternalHandleError
   vk::SystemError member function inherited by vk::FragmentationError
   vk::SystemError member function inherited by vk::InvalidOpaqueCaptureAddressError
   vk::SystemError member function inherited by vk::NotPermittedError
   vk::SystemError member function inherited by vk::SurfaceLostKHRError
   vk::SystemError member function inherited by vk::NativeWindowInUseKHRError
   vk::SystemError member function inherited by vk::OutOfDateKHRError
   vk::SystemError member function inherited by vk::IncompatibleDisplayKHRError
   vk::SystemError member function inherited by vk::InvalidShaderNVError
   vk::SystemError member function inherited by vk::ImageUsageNotSupportedKHRError
   vk::SystemError member function inherited by vk::VideoPictureLayoutNotSupportedKHRError
   vk::SystemError member function inherited by vk::VideoProfileOperationNotSupportedKHRError
   vk::SystemError member function inherited by vk::VideoProfileFormatNotSupportedKHRError
   vk::SystemError member function inherited by vk::VideoProfileCodecNotSupportedKHRError
   vk::SystemError member function inherited by vk::VideoStdVersionNotSupportedKHRError
   vk::SystemError member function inherited by vk::InvalidDrmFormatModifierPlaneLayoutEXTError
   vk::SystemError member function inherited by vk::FullScreenExclusiveModeLostEXTError
   vk::SystemError member function inherited by vk::InvalidVideoStdParametersKHRError
   vk::SystemError member function inherited by vk::CompressionExhaustedEXTError
   vk::SystemError member function inherited by vk::NotEnoughSpaceKHRError
   vk::SystemError member function inherited by vk::OutOfHostMemoryError */

undefined8 * __thiscall vk::SystemError::vfunction1_for_system_error(SystemError *this,int param_1)

{
  this->vftablePtr = (SystemError_vftable_for_Error *)&std::exception::vftable;
  __std_exception_destroy(&this->vftablePtr);
  if (param_1 != 0) {
    thunk_FUN_140b68ba8(&this[-1].offset_0x20,0x30);
  }
  return &this[-1].offset_0x20;
}

