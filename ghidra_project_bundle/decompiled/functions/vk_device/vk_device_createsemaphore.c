/**
 * Function: vk_device_createsemaphore
 * Address:  1406ed2f0
 * Signature: undefined vk_device_createsemaphore(void)
 * Body size: 1953 bytes
 */


void vk_device_createsemaphore
               (undefined8 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
               undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  undefined4 local_a8;
  int local_a0 [2];
  undefined **local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  InvalidExternalHandleError local_70;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_78 = param_1;
  lVar2 = FUN_140b65d30(0x20);
  local_90 = local_78 + 0x1d;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  local_78[0x1d] = lVar2;
  local_78[0x1f] = 0;
  local_78[0x20] = 0;
  lVar2 = FUN_140b65d30(0x20);
  local_88 = local_78 + 0x1f;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *local_88 = lVar2;
  local_d8[0] = 0x3b9df29a;
  local_d0 = 0;
  local_c8 = 1;
  local_c0 = 0;
  local_b8[0] = 9;
  local_b0 = local_d8;
  local_a8 = 0;
  local_80 = 0;
  iVar1 = (*DAT_1416b6e60)(*(undefined8 *)(param_2 + 0x10),local_b8,*(undefined8 *)(param_2 + 0x18),
                           &local_80);
  if (iVar1 == 0) {
    *local_78 = local_80;
    return;
  }
  if (iVar1 < -0x3b9ad5b9) {
    if (iVar1 < -0x3b9bd788) {
      if (iVar1 < -0x3b9eae18) {
        if (iVar1 < -0x3b9f59f8) {
          if (iVar1 == -0x3ba228b8) {
            vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                      ((NotEnoughSpaceKHRError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b330);
          }
          if (iVar1 == -0x3b9ff250) {
            vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                      ((CompressionExhaustedEXTError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b2e0);
          }
        }
        else {
          if (iVar1 == -0x3b9f59f8) {
            vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                      ((InvalidVideoStdParametersKHRError *)&local_70,"vk::Device::createSemaphore")
            ;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b290);
          }
          if (iVar1 == -0x3b9eb5e8) {
            vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                      ((InvalidOpaqueCaptureAddressError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147ade0);
          }
        }
      }
      else if (iVar1 < -0x3b9d3ee8) {
        if (iVar1 == -0x3b9eae18) {
          vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                    ((FullScreenExclusiveModeLostEXTError *)&local_70,"vk::Device::createSemaphore")
          ;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b240);
        }
        if (iVar1 == -0x3b9d71b1) {
          vk::NotPermittedError::NotPermittedError
                    ((NotPermittedError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147ae30);
        }
      }
      else {
        if (iVar1 == -0x3b9d3ee8) {
          vk::FragmentationError::FragmentationError
                    ((FragmentationError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147ad90);
        }
        if (iVar1 == -0x3b9d3330) {
          vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
          InvalidDrmFormatModifierPlaneLayoutEXTError
                    ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_70,
                     "vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b1f0);
        }
        if (iVar1 == -0x3b9be343) {
          vk::InvalidExternalHandleError::InvalidExternalHandleError
                    (&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147ad40);
        }
      }
    }
    else if (iVar1 < -0x3b9af8e0) {
      switch(iVar1) {
      case -0x3b9b23dd:
        vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                  ((VideoStdVersionNotSupportedKHRError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b1a0);
      case -0x3b9b23dc:
        vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                  ((VideoProfileCodecNotSupportedKHRError *)&local_70,"vk::Device::createSemaphore")
        ;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b150);
      case -0x3b9b23db:
        vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                  ((VideoProfileFormatNotSupportedKHRError *)&local_70,"vk::Device::createSemaphore"
                  );
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b100);
      case -0x3b9b23da:
        vk::VideoProfileOperationNotSupportedKHRError::VideoProfileOperationNotSupportedKHRError
                  ((VideoProfileOperationNotSupportedKHRError *)&local_70,
                   "vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b0b0);
      case -0x3b9b23d9:
        vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                  ((VideoPictureLayoutNotSupportedKHRError *)&local_70,"vk::Device::createSemaphore"
                  );
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b060);
      case -0x3b9b23d8:
        vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                  ((ImageUsageNotSupportedKHRError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b010);
      }
      if (iVar1 == -0x3b9bd788) {
        vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                  ((OutOfPoolMemoryError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147acf0);
      }
    }
    else {
      if (iVar1 == -0x3b9af8e0) {
        vk::InvalidShaderNVError::InvalidShaderNVError
                  ((InvalidShaderNVError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147afc0);
      }
      if (iVar1 == -0x3b9af4f9) {
        vk::ValidationFailedError::ValidationFailedError
                  ((ValidationFailedError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147aca0);
      }
    }
  }
  else if (iVar1 < -1000000000) {
    if (iVar1 == -0x3b9ad5b9) {
      vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                ((IncompatibleDisplayKHRError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147af70);
    }
    if (iVar1 == -0x3b9acdec) {
      vk::OutOfDateKHRError::OutOfDateKHRError
                ((OutOfDateKHRError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147af20);
    }
    if (iVar1 == -0x3b9aca01) {
      vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                ((NativeWindowInUseKHRError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147aed0);
    }
  }
  else {
    switch(iVar1) {
    case -0xd:
      vk::UnknownError::UnknownError((UnknownError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147ac50);
    case -0xc:
      vk::FragmentedPoolError::FragmentedPoolError
                ((FragmentedPoolError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147ac00);
    case -0xb:
      vk::FormatNotSupportedError::FormatNotSupportedError
                ((FormatNotSupportedError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147abb0);
    case -10:
      vk::TooManyObjectsError::TooManyObjectsError
                ((TooManyObjectsError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147ab60);
    case -9:
      vk::IncompatibleDriverError::IncompatibleDriverError
                ((IncompatibleDriverError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147ab10);
    case -8:
      vk::FeatureNotPresentError::FeatureNotPresentError
                ((FeatureNotPresentError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147aac0);
    case -7:
      vk::ExtensionNotPresentError::ExtensionNotPresentError
                ((ExtensionNotPresentError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147aa70);
    case -6:
      vk::LayerNotPresentError::LayerNotPresentError
                ((LayerNotPresentError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147aa20);
    case -5:
      vk::MemoryMapFailedError::MemoryMapFailedError
                ((MemoryMapFailedError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147a9d0);
    case -4:
      vk::DeviceLostError::DeviceLostError
                ((DeviceLostError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147a980);
    case -3:
      vk::InitializationFailedError::InitializationFailedError
                ((InitializationFailedError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147a930);
    case -2:
      vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                ((OutOfDeviceMemoryError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147a8e0);
    case -1:
      vk::OutOfHostMemoryError::OutOfHostMemoryError
                ((OutOfHostMemoryError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147a890);
    }
    if (iVar1 == -1000000000) {
      vk::SurfaceLostKHRError::SurfaceLostKHRError
                ((SurfaceLostKHRError *)&local_70,"vk::Device::createSemaphore");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147ae80);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_1416f2950) && (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
    _Init_thread_footer(&DAT_1416f2950);
  }
                    /* inlined constructor: vk::Error::Error
                       inlined constructor: vk::SystemError::SystemError */
  local_70.vftablePtr = (InvalidExternalHandleError_vftable_for_Error *)&vk::Error::vftable;
  local_98 = &PTR_vftable_1415056b0;
  local_a0[0] = iVar1;
  FUN_1405394b0(&local_70.vftablePtr,local_a0,"vk::Device::createSemaphore");
  local_70.vftablePtr =
       (InvalidExternalHandleError_vftable_for_Error *)&vk::SystemError::vftable_for_Error;
  local_70.vftablePtr =
       (InvalidExternalHandleError_vftable_for_system_error *)
       &vk::SystemError::vftable_for_system_error;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_70,(ThrowInfo *)&DAT_14147b360);
}

