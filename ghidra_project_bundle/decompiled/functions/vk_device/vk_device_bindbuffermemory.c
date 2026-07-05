/**
 * Function: vk_device_bindbuffermemory
 * Address:  1406ffdf0
 * Signature: ulonglong __thiscall vk_device_bindbuffermemory(void * this, longlong param_1, longlong * param_2)
 * Body size: 1838 bytes
 */


ulonglong __thiscall vk_device_bindbuffermemory(void *this,longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  int local_70 [2];
  undefined **local_68;
  InvalidExternalHandleError local_60;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x90) == 0) && (*(char *)(param_1 + 0x6c) == '\x01')) {
    iVar2 = (*DAT_1416b6e00)(*(undefined8 *)((longlong)this + 0xa0),*(undefined8 *)(param_1 + 0x80),
                             param_2[3]);
    if (iVar2 != 0) {
      if (iVar2 < -0x3b9ad5b9) {
        if (iVar2 < -0x3b9bd788) {
          if (iVar2 < -0x3b9eae18) {
            if (iVar2 < -0x3b9f59f8) {
              if (iVar2 == -0x3ba228b8) {
                vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                          ((NotEnoughSpaceKHRError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((NotEnoughSpaceKHRError *)&local_60,(ThrowInfo *)&DAT_14147b330);
              }
              if (iVar2 == -0x3b9ff250) {
                vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                          ((CompressionExhaustedEXTError *)&local_60,"vk::Device::bindBufferMemory")
                ;
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((CompressionExhaustedEXTError *)&local_60,
                                   (ThrowInfo *)&DAT_14147b2e0);
              }
            }
            else {
              if (iVar2 == -0x3b9f59f8) {
                vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                          ((InvalidVideoStdParametersKHRError *)&local_60,
                           "vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((InvalidVideoStdParametersKHRError *)&local_60,
                                   (ThrowInfo *)&DAT_14147b290);
              }
              if (iVar2 == -0x3b9eb5e8) {
                vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                          ((InvalidOpaqueCaptureAddressError *)&local_60,
                           "vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((InvalidOpaqueCaptureAddressError *)&local_60,
                                   (ThrowInfo *)&DAT_14147ade0);
              }
            }
          }
          else if (iVar2 < -0x3b9d3ee8) {
            if (iVar2 == -0x3b9eae18) {
              vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                        ((FullScreenExclusiveModeLostEXTError *)&local_60,
                         "vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((FullScreenExclusiveModeLostEXTError *)&local_60,
                                 (ThrowInfo *)&DAT_14147b240);
            }
            if (iVar2 == -0x3b9d71b1) {
              vk::NotPermittedError::NotPermittedError
                        ((NotPermittedError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((NotPermittedError *)&local_60,(ThrowInfo *)&DAT_14147ae30);
            }
          }
          else {
            if (iVar2 == -0x3b9d3ee8) {
              vk::FragmentationError::FragmentationError
                        ((FragmentationError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((FragmentationError *)&local_60,(ThrowInfo *)&DAT_14147ad90);
            }
            if (iVar2 == -0x3b9d3330) {
              vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
              InvalidDrmFormatModifierPlaneLayoutEXTError
                        ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_60,
                         "vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_60,
                                 (ThrowInfo *)&DAT_14147b1f0);
            }
            if (iVar2 == -0x3b9be343) {
              vk::InvalidExternalHandleError::InvalidExternalHandleError
                        (&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_60,(ThrowInfo *)&DAT_14147ad40);
            }
          }
        }
        else if (iVar2 < -0x3b9af8e0) {
          switch(iVar2) {
          case -0x3b9b23dd:
            vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                      ((VideoStdVersionNotSupportedKHRError *)&local_60,
                       "vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((VideoStdVersionNotSupportedKHRError *)&local_60,
                               (ThrowInfo *)&DAT_14147b1a0);
          case -0x3b9b23dc:
            vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                      ((VideoProfileCodecNotSupportedKHRError *)&local_60,
                       "vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((VideoProfileCodecNotSupportedKHRError *)&local_60,
                               (ThrowInfo *)&DAT_14147b150);
          case -0x3b9b23db:
            vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                      ((VideoProfileFormatNotSupportedKHRError *)&local_60,
                       "vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((VideoProfileFormatNotSupportedKHRError *)&local_60,
                               (ThrowInfo *)&DAT_14147b100);
          case -0x3b9b23da:
            vk::VideoProfileOperationNotSupportedKHRError::VideoProfileOperationNotSupportedKHRError
                      ((VideoProfileOperationNotSupportedKHRError *)&local_60,
                       "vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((VideoProfileOperationNotSupportedKHRError *)&local_60,
                               (ThrowInfo *)&DAT_14147b0b0);
          case -0x3b9b23d9:
            vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                      ((VideoPictureLayoutNotSupportedKHRError *)&local_60,
                       "vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((VideoPictureLayoutNotSupportedKHRError *)&local_60,
                               (ThrowInfo *)&DAT_14147b060);
          case -0x3b9b23d8:
            vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                      ((ImageUsageNotSupportedKHRError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((ImageUsageNotSupportedKHRError *)&local_60,
                               (ThrowInfo *)&DAT_14147b010);
          }
          if (iVar2 == -0x3b9bd788) {
            vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                      ((OutOfPoolMemoryError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((OutOfPoolMemoryError *)&local_60,(ThrowInfo *)&DAT_14147acf0);
          }
        }
        else {
          if (iVar2 == -0x3b9af8e0) {
            vk::InvalidShaderNVError::InvalidShaderNVError
                      ((InvalidShaderNVError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((InvalidShaderNVError *)&local_60,(ThrowInfo *)&DAT_14147afc0);
          }
          if (iVar2 == -0x3b9af4f9) {
            vk::ValidationFailedError::ValidationFailedError
                      ((ValidationFailedError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((ValidationFailedError *)&local_60,(ThrowInfo *)&DAT_14147aca0);
          }
        }
      }
      else if (iVar2 < -1000000000) {
        if (iVar2 == -0x3b9ad5b9) {
          vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                    ((IncompatibleDisplayKHRError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((IncompatibleDisplayKHRError *)&local_60,(ThrowInfo *)&DAT_14147af70);
        }
        if (iVar2 == -0x3b9acdec) {
          vk::OutOfDateKHRError::OutOfDateKHRError
                    ((OutOfDateKHRError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((OutOfDateKHRError *)&local_60,(ThrowInfo *)&DAT_14147af20);
        }
        if (iVar2 == -0x3b9aca01) {
          vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                    ((NativeWindowInUseKHRError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((NativeWindowInUseKHRError *)&local_60,(ThrowInfo *)&DAT_14147aed0);
        }
      }
      else {
        switch(iVar2) {
        case -0xd:
          vk::UnknownError::UnknownError((UnknownError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((UnknownError *)&local_60,(ThrowInfo *)&DAT_14147ac50);
        case -0xc:
          vk::FragmentedPoolError::FragmentedPoolError
                    ((FragmentedPoolError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((FragmentedPoolError *)&local_60,(ThrowInfo *)&DAT_14147ac00);
        case -0xb:
          vk::FormatNotSupportedError::FormatNotSupportedError
                    ((FormatNotSupportedError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((FormatNotSupportedError *)&local_60,(ThrowInfo *)&DAT_14147abb0);
        case -10:
          vk::TooManyObjectsError::TooManyObjectsError
                    ((TooManyObjectsError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((TooManyObjectsError *)&local_60,(ThrowInfo *)&DAT_14147ab60);
        case -9:
          vk::IncompatibleDriverError::IncompatibleDriverError
                    ((IncompatibleDriverError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((IncompatibleDriverError *)&local_60,(ThrowInfo *)&DAT_14147ab10);
        case -8:
          vk::FeatureNotPresentError::FeatureNotPresentError
                    ((FeatureNotPresentError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((FeatureNotPresentError *)&local_60,(ThrowInfo *)&DAT_14147aac0);
        case -7:
          vk::ExtensionNotPresentError::ExtensionNotPresentError
                    ((ExtensionNotPresentError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((ExtensionNotPresentError *)&local_60,(ThrowInfo *)&DAT_14147aa70);
        case -6:
          vk::LayerNotPresentError::LayerNotPresentError
                    ((LayerNotPresentError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((LayerNotPresentError *)&local_60,(ThrowInfo *)&DAT_14147aa20);
        case -5:
          vk::MemoryMapFailedError::MemoryMapFailedError
                    ((MemoryMapFailedError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((MemoryMapFailedError *)&local_60,(ThrowInfo *)&DAT_14147a9d0);
        case -4:
          vk::DeviceLostError::DeviceLostError
                    ((DeviceLostError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((DeviceLostError *)&local_60,(ThrowInfo *)&DAT_14147a980);
        case -3:
          vk::InitializationFailedError::InitializationFailedError
                    ((InitializationFailedError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((InitializationFailedError *)&local_60,(ThrowInfo *)&DAT_14147a930);
        case -2:
          vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                    ((OutOfDeviceMemoryError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((OutOfDeviceMemoryError *)&local_60,(ThrowInfo *)&DAT_14147a8e0);
        case -1:
          vk::OutOfHostMemoryError::OutOfHostMemoryError
                    ((OutOfHostMemoryError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((OutOfHostMemoryError *)&local_60,(ThrowInfo *)&DAT_14147a890);
        }
        if (iVar2 == -1000000000) {
          vk::SurfaceLostKHRError::SurfaceLostKHRError
                    ((SurfaceLostKHRError *)&local_60,"vk::Device::bindBufferMemory");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((SurfaceLostKHRError *)&local_60,(ThrowInfo *)&DAT_14147ae80);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x140) < DAT_1416f2950) && (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1))
      {
        _Init_thread_footer(&DAT_1416f2950);
      }
      local_68 = &PTR_vftable_1415056b0;
      local_70[0] = iVar2;
      vk::SystemError::SystemError((SystemError *)&local_60,local_70);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((SystemError *)&local_60,(ThrowInfo *)&DAT_14147b360);
    }
    (**(code **)(*param_2 + 8))(param_2);
    plVar1 = *(longlong **)(param_1 + 0x90);
    *(longlong **)(param_1 + 0x90) = param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(char *)((longlong)this + 0xbb) == '\x01') {
      local_60.offset_0x8 = *(undefined8 *)(param_1 + 0x80);
      local_60.vftablePtr._0_4_ = 0x3b9e8321;
      local_60.vftablePtr = (InvalidExternalHandleError_vftable_for_system_error *)0x0;
      uVar3 = (*DAT_1416b7298)(*(undefined8 *)((longlong)this + 0xa0),&local_60);
      *(undefined8 *)(param_1 + 0x88) = uVar3;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}

