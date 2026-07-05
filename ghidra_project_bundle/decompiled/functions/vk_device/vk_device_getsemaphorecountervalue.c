/**
 * Function: vk_device_getsemaphorecountervalue
 * Address:  1406f10c0
 * Signature: undefined8 __thiscall vk_device_getsemaphorecountervalue(void * this)
 * Body size: 1781 bytes
 */


undefined8 __thiscall vk_device_getsemaphorecountervalue(void *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50 [2];
  undefined **local_48;
  InvalidExternalHandleError local_40;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*(longlong *)this + 0x228))();
  iVar1 = (*DAT_1416b7280)(*(undefined8 *)((longlong)this + 0xa0),uVar2,&local_58);
  if (iVar1 == 0) {
    if (DAT_1414ef3c0 != (local_10 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_10 ^ (ulonglong)auStack_78);
    }
    return local_58;
  }
  if (iVar1 < -0x3b9ad5b9) {
    if (iVar1 < -0x3b9bd788) {
      if (iVar1 < -0x3b9eae18) {
        if (iVar1 < -0x3b9f59f8) {
          if (iVar1 == -0x3ba228b8) {
            vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                      ((NotEnoughSpaceKHRError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((NotEnoughSpaceKHRError *)&local_40,(ThrowInfo *)&DAT_14147b330);
          }
          if (iVar1 == -0x3b9ff250) {
            vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                      ((CompressionExhaustedEXTError *)&local_40,
                       "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((CompressionExhaustedEXTError *)&local_40,(ThrowInfo *)&DAT_14147b2e0
                              );
          }
        }
        else {
          if (iVar1 == -0x3b9f59f8) {
            vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                      ((InvalidVideoStdParametersKHRError *)&local_40,
                       "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((InvalidVideoStdParametersKHRError *)&local_40,
                               (ThrowInfo *)&DAT_14147b290);
          }
          if (iVar1 == -0x3b9eb5e8) {
            vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                      ((InvalidOpaqueCaptureAddressError *)&local_40,
                       "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((InvalidOpaqueCaptureAddressError *)&local_40,
                               (ThrowInfo *)&DAT_14147ade0);
          }
        }
      }
      else if (iVar1 < -0x3b9d3ee8) {
        if (iVar1 == -0x3b9eae18) {
          vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                    ((FullScreenExclusiveModeLostEXTError *)&local_40,
                     "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((FullScreenExclusiveModeLostEXTError *)&local_40,
                             (ThrowInfo *)&DAT_14147b240);
        }
        if (iVar1 == -0x3b9d71b1) {
          vk::NotPermittedError::NotPermittedError
                    ((NotPermittedError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((NotPermittedError *)&local_40,(ThrowInfo *)&DAT_14147ae30);
        }
      }
      else {
        if (iVar1 == -0x3b9d3ee8) {
          vk::FragmentationError::FragmentationError
                    ((FragmentationError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((FragmentationError *)&local_40,(ThrowInfo *)&DAT_14147ad90);
        }
        if (iVar1 == -0x3b9d3330) {
          vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
          InvalidDrmFormatModifierPlaneLayoutEXTError
                    ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_40,
                     "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_40,
                             (ThrowInfo *)&DAT_14147b1f0);
        }
        if (iVar1 == -0x3b9be343) {
          vk::InvalidExternalHandleError::InvalidExternalHandleError
                    (&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_40,(ThrowInfo *)&DAT_14147ad40);
        }
      }
    }
    else if (iVar1 < -0x3b9af8e0) {
      switch(iVar1) {
      case -0x3b9b23dd:
        vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                  ((VideoStdVersionNotSupportedKHRError *)&local_40,
                   "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((VideoStdVersionNotSupportedKHRError *)&local_40,
                           (ThrowInfo *)&DAT_14147b1a0);
      case -0x3b9b23dc:
        vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                  ((VideoProfileCodecNotSupportedKHRError *)&local_40,
                   "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((VideoProfileCodecNotSupportedKHRError *)&local_40,
                           (ThrowInfo *)&DAT_14147b150);
      case -0x3b9b23db:
        vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                  ((VideoProfileFormatNotSupportedKHRError *)&local_40,
                   "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((VideoProfileFormatNotSupportedKHRError *)&local_40,
                           (ThrowInfo *)&DAT_14147b100);
      case -0x3b9b23da:
        vk::VideoProfileOperationNotSupportedKHRError::VideoProfileOperationNotSupportedKHRError
                  ((VideoProfileOperationNotSupportedKHRError *)&local_40,
                   "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((VideoProfileOperationNotSupportedKHRError *)&local_40,
                           (ThrowInfo *)&DAT_14147b0b0);
      case -0x3b9b23d9:
        vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                  ((VideoPictureLayoutNotSupportedKHRError *)&local_40,
                   "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((VideoPictureLayoutNotSupportedKHRError *)&local_40,
                           (ThrowInfo *)&DAT_14147b060);
      case -0x3b9b23d8:
        vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                  ((ImageUsageNotSupportedKHRError *)&local_40,
                   "vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((ImageUsageNotSupportedKHRError *)&local_40,(ThrowInfo *)&DAT_14147b010);
      }
      if (iVar1 == -0x3b9bd788) {
        vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                  ((OutOfPoolMemoryError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((OutOfPoolMemoryError *)&local_40,(ThrowInfo *)&DAT_14147acf0);
      }
    }
    else {
      if (iVar1 == -0x3b9af8e0) {
        vk::InvalidShaderNVError::InvalidShaderNVError
                  ((InvalidShaderNVError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((InvalidShaderNVError *)&local_40,(ThrowInfo *)&DAT_14147afc0);
      }
      if (iVar1 == -0x3b9af4f9) {
        vk::ValidationFailedError::ValidationFailedError
                  ((ValidationFailedError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((ValidationFailedError *)&local_40,(ThrowInfo *)&DAT_14147aca0);
      }
    }
  }
  else if (iVar1 < -1000000000) {
    if (iVar1 == -0x3b9ad5b9) {
      vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                ((IncompatibleDisplayKHRError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((IncompatibleDisplayKHRError *)&local_40,(ThrowInfo *)&DAT_14147af70);
    }
    if (iVar1 == -0x3b9acdec) {
      vk::OutOfDateKHRError::OutOfDateKHRError
                ((OutOfDateKHRError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((OutOfDateKHRError *)&local_40,(ThrowInfo *)&DAT_14147af20);
    }
    if (iVar1 == -0x3b9aca01) {
      vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                ((NativeWindowInUseKHRError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((NativeWindowInUseKHRError *)&local_40,(ThrowInfo *)&DAT_14147aed0);
    }
  }
  else {
    switch(iVar1) {
    case -0xd:
      vk::UnknownError::UnknownError
                ((UnknownError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((UnknownError *)&local_40,(ThrowInfo *)&DAT_14147ac50);
    case -0xc:
      vk::FragmentedPoolError::FragmentedPoolError
                ((FragmentedPoolError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((FragmentedPoolError *)&local_40,(ThrowInfo *)&DAT_14147ac00);
    case -0xb:
      vk::FormatNotSupportedError::FormatNotSupportedError
                ((FormatNotSupportedError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((FormatNotSupportedError *)&local_40,(ThrowInfo *)&DAT_14147abb0);
    case -10:
      vk::TooManyObjectsError::TooManyObjectsError
                ((TooManyObjectsError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((TooManyObjectsError *)&local_40,(ThrowInfo *)&DAT_14147ab60);
    case -9:
      vk::IncompatibleDriverError::IncompatibleDriverError
                ((IncompatibleDriverError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((IncompatibleDriverError *)&local_40,(ThrowInfo *)&DAT_14147ab10);
    case -8:
      vk::FeatureNotPresentError::FeatureNotPresentError
                ((FeatureNotPresentError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((FeatureNotPresentError *)&local_40,(ThrowInfo *)&DAT_14147aac0);
    case -7:
      vk::ExtensionNotPresentError::ExtensionNotPresentError
                ((ExtensionNotPresentError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((ExtensionNotPresentError *)&local_40,(ThrowInfo *)&DAT_14147aa70);
    case -6:
      vk::LayerNotPresentError::LayerNotPresentError
                ((LayerNotPresentError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((LayerNotPresentError *)&local_40,(ThrowInfo *)&DAT_14147aa20);
    case -5:
      vk::MemoryMapFailedError::MemoryMapFailedError
                ((MemoryMapFailedError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((MemoryMapFailedError *)&local_40,(ThrowInfo *)&DAT_14147a9d0);
    case -4:
      vk::DeviceLostError::DeviceLostError
                ((DeviceLostError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((DeviceLostError *)&local_40,(ThrowInfo *)&DAT_14147a980);
    case -3:
      vk::InitializationFailedError::InitializationFailedError
                ((InitializationFailedError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((InitializationFailedError *)&local_40,(ThrowInfo *)&DAT_14147a930);
    case -2:
      vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                ((OutOfDeviceMemoryError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((OutOfDeviceMemoryError *)&local_40,(ThrowInfo *)&DAT_14147a8e0);
    case -1:
      vk::OutOfHostMemoryError::OutOfHostMemoryError
                ((OutOfHostMemoryError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((OutOfHostMemoryError *)&local_40,(ThrowInfo *)&DAT_14147a890);
    }
    if (iVar1 == -1000000000) {
      vk::SurfaceLostKHRError::SurfaceLostKHRError
                ((SurfaceLostKHRError *)&local_40,"vk::Device::getSemaphoreCounterValue");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((SurfaceLostKHRError *)&local_40,(ThrowInfo *)&DAT_14147ae80);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_1416f2950) && (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
    _Init_thread_footer(&DAT_1416f2950);
  }
  local_48 = &PTR_vftable_1415056b0;
  local_50[0] = iVar1;
  vk::SystemError::SystemError((SystemError *)&local_40,local_50);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((SystemError *)&local_40,(ThrowInfo *)&DAT_14147b360);
}

