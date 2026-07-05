/**
 * Function: vk_device_waitidle
 * Address:  140533860
 * Signature: ulonglong __thiscall vk_device_waitidle(void * this)
 * Body size: 1654 bytes
 */


ulonglong __thiscall vk_device_waitidle(void *this)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  int local_60 [2];
  undefined **local_58;
  undefined4 local_4c;
  InvalidExternalHandleError local_48;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = (*DAT_1416b6dc0)(*(undefined8 *)((longlong)this + 0xa0));
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  local_4c = (undefined4)uVar2;
  iVar3 = (int)uVar1;
  if (iVar3 == 0) {
    return uVar2 & 0xffffffff;
  }
  if (iVar3 < -0x3b9ad5b9) {
    if (iVar3 < -0x3b9bd788) {
      if (iVar3 < -0x3b9eae18) {
        if (iVar3 < -0x3b9f59f8) {
          if (iVar3 == -0x3ba228b8) {
            vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                      ((NotEnoughSpaceKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b330);
          }
          if (iVar3 == -0x3b9ff250) {
            vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                      ((CompressionExhaustedEXTError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b2e0);
          }
        }
        else {
          if (iVar3 == -0x3b9f59f8) {
            vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                      ((InvalidVideoStdParametersKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b290);
          }
          if (iVar3 == -0x3b9eb5e8) {
            vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                      ((InvalidOpaqueCaptureAddressError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147ade0);
          }
        }
      }
      else if (iVar3 < -0x3b9d3ee8) {
        if (iVar3 == -0x3b9eae18) {
          vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                    ((FullScreenExclusiveModeLostEXTError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b240);
        }
        if (iVar3 == -0x3b9d71b1) {
          vk::NotPermittedError::NotPermittedError
                    ((NotPermittedError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147ae30);
        }
      }
      else {
        if (iVar3 == -0x3b9d3ee8) {
          vk::FragmentationError::FragmentationError
                    ((FragmentationError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147ad90);
        }
        if (iVar3 == -0x3b9d3330) {
          vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
          InvalidDrmFormatModifierPlaneLayoutEXTError
                    ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_48,"vk::Device::waitIdle"
                    );
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b1f0);
        }
        if (iVar3 == -0x3b9be343) {
          vk::InvalidExternalHandleError::InvalidExternalHandleError
                    (&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147ad40);
        }
      }
    }
    else if (iVar3 < -0x3b9af8e0) {
      switch(iVar3) {
      case -0x3b9b23dd:
        vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                  ((VideoStdVersionNotSupportedKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b1a0);
      case -0x3b9b23dc:
        vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                  ((VideoProfileCodecNotSupportedKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b150);
      case -0x3b9b23db:
        vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                  ((VideoProfileFormatNotSupportedKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b100);
      case -0x3b9b23da:
        vk::VideoProfileOperationNotSupportedKHRError::VideoProfileOperationNotSupportedKHRError
                  ((VideoProfileOperationNotSupportedKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b0b0);
      case -0x3b9b23d9:
        vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                  ((VideoPictureLayoutNotSupportedKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b060);
      case -0x3b9b23d8:
        vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                  ((ImageUsageNotSupportedKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b010);
      }
      if (iVar3 == -0x3b9bd788) {
        vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                  ((OutOfPoolMemoryError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147acf0);
      }
    }
    else {
      if (iVar3 == -0x3b9af8e0) {
        vk::InvalidShaderNVError::InvalidShaderNVError
                  ((InvalidShaderNVError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147afc0);
      }
      if (iVar3 == -0x3b9af4f9) {
        vk::ValidationFailedError::ValidationFailedError
                  ((ValidationFailedError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147aca0);
      }
    }
  }
  else if (iVar3 < -1000000000) {
    if (iVar3 == -0x3b9ad5b9) {
      vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                ((IncompatibleDisplayKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147af70);
    }
    if (iVar3 == -0x3b9acdec) {
      vk::OutOfDateKHRError::OutOfDateKHRError
                ((OutOfDateKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147af20);
    }
    if (iVar3 == -0x3b9aca01) {
      vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                ((NativeWindowInUseKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147aed0);
    }
  }
  else {
    switch(iVar3) {
    case -0xd:
      vk::UnknownError::UnknownError((UnknownError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147ac50);
    case -0xc:
      vk::FragmentedPoolError::FragmentedPoolError
                ((FragmentedPoolError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147ac00);
    case -0xb:
      vk::FormatNotSupportedError::FormatNotSupportedError
                ((FormatNotSupportedError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147abb0);
    case -10:
      vk::TooManyObjectsError::TooManyObjectsError
                ((TooManyObjectsError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147ab60);
    case -9:
      vk::IncompatibleDriverError::IncompatibleDriverError
                ((IncompatibleDriverError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147ab10);
    case -8:
      vk::FeatureNotPresentError::FeatureNotPresentError
                ((FeatureNotPresentError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147aac0);
    case -7:
      vk::ExtensionNotPresentError::ExtensionNotPresentError
                ((ExtensionNotPresentError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147aa70);
    case -6:
      vk::LayerNotPresentError::LayerNotPresentError
                ((LayerNotPresentError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147aa20);
    case -5:
      vk::MemoryMapFailedError::MemoryMapFailedError
                ((MemoryMapFailedError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147a9d0);
    case -4:
      vk::DeviceLostError::DeviceLostError((DeviceLostError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147a980);
    case -3:
      vk::InitializationFailedError::InitializationFailedError
                ((InitializationFailedError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147a930);
    case -2:
      vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                ((OutOfDeviceMemoryError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147a8e0);
    case -1:
      vk::OutOfHostMemoryError::OutOfHostMemoryError
                ((OutOfHostMemoryError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147a890);
    }
    if (iVar3 == -1000000000) {
      vk::SurfaceLostKHRError::SurfaceLostKHRError
                ((SurfaceLostKHRError *)&local_48,"vk::Device::waitIdle");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147ae80);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_1416f2950) && (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
    _Init_thread_footer(&DAT_1416f2950);
  }
  local_48.vftablePtr = (InvalidExternalHandleError_vftable_for_Error *)&vk::Error::vftable;
  local_58 = &PTR_vftable_1415056b0;
  local_60[0] = iVar3;
  FUN_1405394b0(&local_48.vftablePtr,local_60,"vk::Device::waitIdle");
  local_48.vftablePtr =
       (InvalidExternalHandleError_vftable_for_Error *)&vk::SystemError::vftable_for_Error;
  local_48.vftablePtr =
       (InvalidExternalHandleError_vftable_for_system_error *)
       &vk::SystemError::vftable_for_system_error;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_48,(ThrowInfo *)&DAT_14147b360);
}

