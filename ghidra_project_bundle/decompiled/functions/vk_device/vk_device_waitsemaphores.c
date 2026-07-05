/**
 * Function: vk_device_waitsemaphores
 * Address:  1406f1800
 * Signature: undefined vk_device_waitsemaphores(void)
 * Body size: 1937 bytes
 */


ulonglong vk_device_waitsemaphores(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_c8 [40];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  ulonglong *local_80;
  uint local_78 [2];
  undefined **local_70;
  InvalidExternalHandleError local_68;
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  if (param_2 - 1 < (ulonglong)param_1[0x1b]) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (((ulonglong)param_1[0x1c] < param_2) &&
       (uVar2 = vk_device_getsemaphorecountervalue(), uVar2 < param_2)) {
      local_30 = *param_1;
      local_a0[0] = 0x3b9df29c;
      local_98 = 0;
      local_90 = 0x100000000;
      local_88 = &local_30;
      local_80 = &local_38;
      local_38 = param_2;
      uVar1 = (*DAT_1416b7288)(*(undefined8 *)(param_1[1] + 0x10),local_a0,param_3);
      if ((uVar1 & 0xfffffffd) != 0) {
        if ((int)uVar1 < -0x3b9ad5b9) {
          if ((int)uVar1 < -0x3b9bd788) {
            if ((int)uVar1 < -0x3b9eae18) {
              if ((int)uVar1 < -0x3b9f59f8) {
                if (uVar1 == 0xc45dd748) {
                  vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                            ((NotEnoughSpaceKHRError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((NotEnoughSpaceKHRError *)&local_68,(ThrowInfo *)&DAT_14147b330
                                    );
                }
                if (uVar1 == 0xc4600db0) {
                  vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                            ((CompressionExhaustedEXTError *)&local_68,"vk::Device::waitSemaphores")
                  ;
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((CompressionExhaustedEXTError *)&local_68,
                                     (ThrowInfo *)&DAT_14147b2e0);
                }
              }
              else {
                if (uVar1 == 0xc460a608) {
                  vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                            ((InvalidVideoStdParametersKHRError *)&local_68,
                             "vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((InvalidVideoStdParametersKHRError *)&local_68,
                                     (ThrowInfo *)&DAT_14147b290);
                }
                if (uVar1 == 0xc4614a18) {
                  vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                            ((InvalidOpaqueCaptureAddressError *)&local_68,
                             "vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((InvalidOpaqueCaptureAddressError *)&local_68,
                                     (ThrowInfo *)&DAT_14147ade0);
                }
              }
            }
            else if ((int)uVar1 < -0x3b9d3ee8) {
              if (uVar1 == 0xc46151e8) {
                vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                          ((FullScreenExclusiveModeLostEXTError *)&local_68,
                           "vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((FullScreenExclusiveModeLostEXTError *)&local_68,
                                   (ThrowInfo *)&DAT_14147b240);
              }
              if (uVar1 == 0xc4628e4f) {
                vk::NotPermittedError::NotPermittedError
                          ((NotPermittedError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((NotPermittedError *)&local_68,(ThrowInfo *)&DAT_14147ae30);
              }
            }
            else {
              if (uVar1 == 0xc462c118) {
                vk::FragmentationError::FragmentationError
                          ((FragmentationError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((FragmentationError *)&local_68,(ThrowInfo *)&DAT_14147ad90);
              }
              if (uVar1 == 0xc462ccd0) {
                vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
                InvalidDrmFormatModifierPlaneLayoutEXTError
                          ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_68,
                           "vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_68,
                                   (ThrowInfo *)&DAT_14147b1f0);
              }
              if (uVar1 == 0xc4641cbd) {
                vk::InvalidExternalHandleError::InvalidExternalHandleError
                          (&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ad40);
              }
            }
          }
          else if ((int)uVar1 < -0x3b9af8e0) {
            switch(uVar1) {
            case 0xc464dc23:
              vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                        ((VideoStdVersionNotSupportedKHRError *)&local_68,
                         "vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoStdVersionNotSupportedKHRError *)&local_68,
                                 (ThrowInfo *)&DAT_14147b1a0);
            case 0xc464dc24:
              vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                        ((VideoProfileCodecNotSupportedKHRError *)&local_68,
                         "vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoProfileCodecNotSupportedKHRError *)&local_68,
                                 (ThrowInfo *)&DAT_14147b150);
            case 0xc464dc25:
              vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                        ((VideoProfileFormatNotSupportedKHRError *)&local_68,
                         "vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoProfileFormatNotSupportedKHRError *)&local_68,
                                 (ThrowInfo *)&DAT_14147b100);
            case 0xc464dc26:
              vk::VideoProfileOperationNotSupportedKHRError::
              VideoProfileOperationNotSupportedKHRError
                        ((VideoProfileOperationNotSupportedKHRError *)&local_68,
                         "vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoProfileOperationNotSupportedKHRError *)&local_68,
                                 (ThrowInfo *)&DAT_14147b0b0);
            case 0xc464dc27:
              vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                        ((VideoPictureLayoutNotSupportedKHRError *)&local_68,
                         "vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoPictureLayoutNotSupportedKHRError *)&local_68,
                                 (ThrowInfo *)&DAT_14147b060);
            case 0xc464dc28:
              vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                        ((ImageUsageNotSupportedKHRError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((ImageUsageNotSupportedKHRError *)&local_68,
                                 (ThrowInfo *)&DAT_14147b010);
            }
            if (uVar1 == 0xc4642878) {
              vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                        ((OutOfPoolMemoryError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((OutOfPoolMemoryError *)&local_68,(ThrowInfo *)&DAT_14147acf0);
            }
          }
          else {
            if (uVar1 == 0xc4650720) {
              vk::InvalidShaderNVError::InvalidShaderNVError
                        ((InvalidShaderNVError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((InvalidShaderNVError *)&local_68,(ThrowInfo *)&DAT_14147afc0);
            }
            if (uVar1 == 0xc4650b07) {
              vk::ValidationFailedError::ValidationFailedError
                        ((ValidationFailedError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((ValidationFailedError *)&local_68,(ThrowInfo *)&DAT_14147aca0);
            }
          }
        }
        else if ((int)uVar1 < -1000000000) {
          if (uVar1 == 0xc4652a47) {
            vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                      ((IncompatibleDisplayKHRError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((IncompatibleDisplayKHRError *)&local_68,(ThrowInfo *)&DAT_14147af70)
            ;
          }
          if (uVar1 == 0xc4653214) {
            vk::OutOfDateKHRError::OutOfDateKHRError
                      ((OutOfDateKHRError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((OutOfDateKHRError *)&local_68,(ThrowInfo *)&DAT_14147af20);
          }
          if (uVar1 == 0xc46535ff) {
            vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                      ((NativeWindowInUseKHRError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((NativeWindowInUseKHRError *)&local_68,(ThrowInfo *)&DAT_14147aed0);
          }
        }
        else {
          switch(uVar1) {
          case 0xfffffff3:
            vk::UnknownError::UnknownError((UnknownError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((UnknownError *)&local_68,(ThrowInfo *)&DAT_14147ac50);
          case 0xfffffff4:
            vk::FragmentedPoolError::FragmentedPoolError
                      ((FragmentedPoolError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((FragmentedPoolError *)&local_68,(ThrowInfo *)&DAT_14147ac00);
          case 0xfffffff5:
            vk::FormatNotSupportedError::FormatNotSupportedError
                      ((FormatNotSupportedError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((FormatNotSupportedError *)&local_68,(ThrowInfo *)&DAT_14147abb0);
          case 0xfffffff6:
            vk::TooManyObjectsError::TooManyObjectsError
                      ((TooManyObjectsError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((TooManyObjectsError *)&local_68,(ThrowInfo *)&DAT_14147ab60);
          case 0xfffffff7:
            vk::IncompatibleDriverError::IncompatibleDriverError
                      ((IncompatibleDriverError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((IncompatibleDriverError *)&local_68,(ThrowInfo *)&DAT_14147ab10);
          case 0xfffffff8:
            vk::FeatureNotPresentError::FeatureNotPresentError
                      ((FeatureNotPresentError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((FeatureNotPresentError *)&local_68,(ThrowInfo *)&DAT_14147aac0);
          case 0xfffffff9:
            vk::ExtensionNotPresentError::ExtensionNotPresentError
                      ((ExtensionNotPresentError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((ExtensionNotPresentError *)&local_68,(ThrowInfo *)&DAT_14147aa70);
          case 0xfffffffa:
            vk::LayerNotPresentError::LayerNotPresentError
                      ((LayerNotPresentError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((LayerNotPresentError *)&local_68,(ThrowInfo *)&DAT_14147aa20);
          case 0xfffffffb:
            vk::MemoryMapFailedError::MemoryMapFailedError
                      ((MemoryMapFailedError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((MemoryMapFailedError *)&local_68,(ThrowInfo *)&DAT_14147a9d0);
          case 0xfffffffc:
            vk::DeviceLostError::DeviceLostError
                      ((DeviceLostError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((DeviceLostError *)&local_68,(ThrowInfo *)&DAT_14147a980);
          case 0xfffffffd:
            vk::InitializationFailedError::InitializationFailedError
                      ((InitializationFailedError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((InitializationFailedError *)&local_68,(ThrowInfo *)&DAT_14147a930);
          case 0xfffffffe:
            vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                      ((OutOfDeviceMemoryError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((OutOfDeviceMemoryError *)&local_68,(ThrowInfo *)&DAT_14147a8e0);
          case 0xffffffff:
            vk::OutOfHostMemoryError::OutOfHostMemoryError
                      ((OutOfHostMemoryError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((OutOfHostMemoryError *)&local_68,(ThrowInfo *)&DAT_14147a890);
          }
          if (uVar1 == 0xc4653600) {
            vk::SurfaceLostKHRError::SurfaceLostKHRError
                      ((SurfaceLostKHRError *)&local_68,"vk::Device::waitSemaphores");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((SurfaceLostKHRError *)&local_68,(ThrowInfo *)&DAT_14147ae80);
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x140) < DAT_1416f2950) &&
           (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
          _Init_thread_footer(&DAT_1416f2950);
        }
        local_70 = &PTR_vftable_1415056b0;
        local_78[0] = uVar1;
        vk::SystemError::SystemError((SystemError *)&local_68,local_78);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((SystemError *)&local_68,(ThrowInfo *)&DAT_14147b360);
      }
      uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),uVar1 == 0);
    }
  }
  else {
    uVar3 = 0;
  }
  if (DAT_1414ef3c0 != (local_28 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_28 ^ (ulonglong)auStack_c8);
  }
  return uVar3 & 0xffffffff;
}

