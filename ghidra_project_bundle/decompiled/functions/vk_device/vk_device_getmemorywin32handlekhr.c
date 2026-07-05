/**
 * Function: vk_device_getmemorywin32handlekhr
 * Address:  1406f76a0
 * Signature: longlong * __thiscall vk_device_getmemorywin32handlekhr(void * this, longlong * param_1, longlong param_2)
 * Body size: 2028 bytes
 */


longlong * __thiscall
vk_device_getmemorywin32handlekhr(void *this,longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  Texture *pTVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98 [2];
  undefined **local_90;
  undefined8 local_88;
  InvalidExternalHandleError local_80;
  Texture *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = (Texture *)FUN_140b65d30(0x1c8);
  lVar1 = (longlong)this + 0x90;
  nvrhi::vulkan::Texture::Texture(local_50,lVar1,(longlong)this + 0x610);
  pTVar3 = local_50;
  FUN_1406f8120(local_50,param_2);
  puVar2 = &(pTVar3->Texture_data).offset_0xe8;
  iVar4 = (*DAT_1416b6ed0)(*(undefined8 *)((longlong)this + 0xa0),
                           &(pTVar3->Texture_data).offset_0x78,
                           *(undefined8 *)((longlong)this + 0xa8),puVar2);
  if (iVar4 == 0) {
    lVar6 = param_2 + 0x20;
    lVar5 = lVar6;
    if (0xf < *(ulonglong *)(param_2 + 0x38)) {
      lVar5 = *(longlong *)(param_2 + 0x20);
    }
    vk_device_setdebugutilsobjectnameext(lVar1,*puVar2,10,10,lVar5);
    if ((*(char *)(param_2 + 0x4c) != '\0') || (*(char *)(param_2 + 0x4d) != '\0'))
    goto LAB_1406f7809;
    iVar4 = vk_device_bindimagememory((longlong)this + 0x610,local_50);
    pTVar3 = local_50;
    if (iVar4 == 0) {
      if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
        local_a8 = *(undefined8 *)&local_50->field_0x18;
        local_b8[0] = 0x3b9be72b;
        local_b0 = 0;
        local_a0 = 2;
        iVar4 = (*DAT_1416b7730)(*(undefined8 *)((longlong)this + 0xa0),local_b8,&local_88);
        if (iVar4 != 0) {
          if (iVar4 < -0x3b9ad5b9) {
            if (iVar4 < -0x3b9bd788) {
              if (iVar4 < -0x3b9eae18) {
                if (iVar4 < -0x3b9f59f8) {
                  if (iVar4 == -0x3ba228b8) {
                    vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                              ((NotEnoughSpaceKHRError *)&local_80,
                               "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                    _CxxThrowException((NotEnoughSpaceKHRError *)&local_80,
                                       (ThrowInfo *)&DAT_14147b330);
                  }
                  if (iVar4 == -0x3b9ff250) {
                    vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                              ((CompressionExhaustedEXTError *)&local_80,
                               "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                    _CxxThrowException((CompressionExhaustedEXTError *)&local_80,
                                       (ThrowInfo *)&DAT_14147b2e0);
                  }
                }
                else {
                  if (iVar4 == -0x3b9f59f8) {
                    vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                              ((InvalidVideoStdParametersKHRError *)&local_80,
                               "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                    _CxxThrowException((InvalidVideoStdParametersKHRError *)&local_80,
                                       (ThrowInfo *)&DAT_14147b290);
                  }
                  if (iVar4 == -0x3b9eb5e8) {
                    vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                              ((InvalidOpaqueCaptureAddressError *)&local_80,
                               "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                    _CxxThrowException((InvalidOpaqueCaptureAddressError *)&local_80,
                                       (ThrowInfo *)&DAT_14147ade0);
                  }
                }
              }
              else if (iVar4 < -0x3b9d3ee8) {
                if (iVar4 == -0x3b9eae18) {
                  vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                            ((FullScreenExclusiveModeLostEXTError *)&local_80,
                             "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((FullScreenExclusiveModeLostEXTError *)&local_80,
                                     (ThrowInfo *)&DAT_14147b240);
                }
                if (iVar4 == -0x3b9d71b1) {
                  vk::NotPermittedError::NotPermittedError
                            ((NotPermittedError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((NotPermittedError *)&local_80,(ThrowInfo *)&DAT_14147ae30);
                }
              }
              else {
                if (iVar4 == -0x3b9d3ee8) {
                  vk::FragmentationError::FragmentationError
                            ((FragmentationError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((FragmentationError *)&local_80,(ThrowInfo *)&DAT_14147ad90);
                }
                if (iVar4 == -0x3b9d3330) {
                  vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
                  InvalidDrmFormatModifierPlaneLayoutEXTError
                            ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_80,
                             "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_80,
                                     (ThrowInfo *)&DAT_14147b1f0);
                }
                if (iVar4 == -0x3b9be343) {
                  vk::InvalidExternalHandleError::InvalidExternalHandleError
                            (&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException(&local_80,(ThrowInfo *)&DAT_14147ad40);
                }
              }
            }
            else if (iVar4 < -0x3b9af8e0) {
              switch(iVar4) {
              case -0x3b9b23dd:
                vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                          ((VideoStdVersionNotSupportedKHRError *)&local_80,
                           "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((VideoStdVersionNotSupportedKHRError *)&local_80,
                                   (ThrowInfo *)&DAT_14147b1a0);
              case -0x3b9b23dc:
                vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                          ((VideoProfileCodecNotSupportedKHRError *)&local_80,
                           "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((VideoProfileCodecNotSupportedKHRError *)&local_80,
                                   (ThrowInfo *)&DAT_14147b150);
              case -0x3b9b23db:
                vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                          ((VideoProfileFormatNotSupportedKHRError *)&local_80,
                           "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((VideoProfileFormatNotSupportedKHRError *)&local_80,
                                   (ThrowInfo *)&DAT_14147b100);
              case -0x3b9b23da:
                vk::VideoProfileOperationNotSupportedKHRError::
                VideoProfileOperationNotSupportedKHRError
                          ((VideoProfileOperationNotSupportedKHRError *)&local_80,
                           "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((VideoProfileOperationNotSupportedKHRError *)&local_80,
                                   (ThrowInfo *)&DAT_14147b0b0);
              case -0x3b9b23d9:
                vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                          ((VideoPictureLayoutNotSupportedKHRError *)&local_80,
                           "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((VideoPictureLayoutNotSupportedKHRError *)&local_80,
                                   (ThrowInfo *)&DAT_14147b060);
              case -0x3b9b23d8:
                vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                          ((ImageUsageNotSupportedKHRError *)&local_80,
                           "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((ImageUsageNotSupportedKHRError *)&local_80,
                                   (ThrowInfo *)&DAT_14147b010);
              }
              if (iVar4 == -0x3b9bd788) {
                vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                          ((OutOfPoolMemoryError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((OutOfPoolMemoryError *)&local_80,(ThrowInfo *)&DAT_14147acf0);
              }
            }
            else {
              if (iVar4 == -0x3b9af8e0) {
                vk::InvalidShaderNVError::InvalidShaderNVError
                          ((InvalidShaderNVError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((InvalidShaderNVError *)&local_80,(ThrowInfo *)&DAT_14147afc0);
              }
              if (iVar4 == -0x3b9af4f9) {
                vk::ValidationFailedError::ValidationFailedError
                          ((ValidationFailedError *)&local_80,"vk::Device::getMemoryWin32HandleKHR")
                ;
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((ValidationFailedError *)&local_80,(ThrowInfo *)&DAT_14147aca0);
              }
            }
          }
          else if (iVar4 < -1000000000) {
            if (iVar4 == -0x3b9ad5b9) {
              vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                        ((IncompatibleDisplayKHRError *)&local_80,
                         "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((IncompatibleDisplayKHRError *)&local_80,
                                 (ThrowInfo *)&DAT_14147af70);
            }
            if (iVar4 == -0x3b9acdec) {
              vk::OutOfDateKHRError::OutOfDateKHRError
                        ((OutOfDateKHRError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((OutOfDateKHRError *)&local_80,(ThrowInfo *)&DAT_14147af20);
            }
            if (iVar4 == -0x3b9aca01) {
              vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                        ((NativeWindowInUseKHRError *)&local_80,
                         "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((NativeWindowInUseKHRError *)&local_80,(ThrowInfo *)&DAT_14147aed0)
              ;
            }
          }
          else {
            switch(iVar4) {
            case -0xd:
              vk::UnknownError::UnknownError
                        ((UnknownError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((UnknownError *)&local_80,(ThrowInfo *)&DAT_14147ac50);
            case -0xc:
              vk::FragmentedPoolError::FragmentedPoolError
                        ((FragmentedPoolError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((FragmentedPoolError *)&local_80,(ThrowInfo *)&DAT_14147ac00);
            case -0xb:
              vk::FormatNotSupportedError::FormatNotSupportedError
                        ((FormatNotSupportedError *)&local_80,"vk::Device::getMemoryWin32HandleKHR")
              ;
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((FormatNotSupportedError *)&local_80,(ThrowInfo *)&DAT_14147abb0);
            case -10:
              vk::TooManyObjectsError::TooManyObjectsError
                        ((TooManyObjectsError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((TooManyObjectsError *)&local_80,(ThrowInfo *)&DAT_14147ab60);
            case -9:
              vk::IncompatibleDriverError::IncompatibleDriverError
                        ((IncompatibleDriverError *)&local_80,"vk::Device::getMemoryWin32HandleKHR")
              ;
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((IncompatibleDriverError *)&local_80,(ThrowInfo *)&DAT_14147ab10);
            case -8:
              vk::FeatureNotPresentError::FeatureNotPresentError
                        ((FeatureNotPresentError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((FeatureNotPresentError *)&local_80,(ThrowInfo *)&DAT_14147aac0);
            case -7:
              vk::ExtensionNotPresentError::ExtensionNotPresentError
                        ((ExtensionNotPresentError *)&local_80,"vk::Device::getMemoryWin32HandleKHR"
                        );
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((ExtensionNotPresentError *)&local_80,(ThrowInfo *)&DAT_14147aa70);
            case -6:
              vk::LayerNotPresentError::LayerNotPresentError
                        ((LayerNotPresentError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((LayerNotPresentError *)&local_80,(ThrowInfo *)&DAT_14147aa20);
            case -5:
              vk::MemoryMapFailedError::MemoryMapFailedError
                        ((MemoryMapFailedError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((MemoryMapFailedError *)&local_80,(ThrowInfo *)&DAT_14147a9d0);
            case -4:
              vk::DeviceLostError::DeviceLostError
                        ((DeviceLostError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((DeviceLostError *)&local_80,(ThrowInfo *)&DAT_14147a980);
            case -3:
              vk::InitializationFailedError::InitializationFailedError
                        ((InitializationFailedError *)&local_80,
                         "vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((InitializationFailedError *)&local_80,(ThrowInfo *)&DAT_14147a930)
              ;
            case -2:
              vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                        ((OutOfDeviceMemoryError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((OutOfDeviceMemoryError *)&local_80,(ThrowInfo *)&DAT_14147a8e0);
            case -1:
              vk::OutOfHostMemoryError::OutOfHostMemoryError
                        ((OutOfHostMemoryError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((OutOfHostMemoryError *)&local_80,(ThrowInfo *)&DAT_14147a890);
            }
            if (iVar4 == -1000000000) {
              vk::SurfaceLostKHRError::SurfaceLostKHRError
                        ((SurfaceLostKHRError *)&local_80,"vk::Device::getMemoryWin32HandleKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((SurfaceLostKHRError *)&local_80,(ThrowInfo *)&DAT_14147ae80);
            }
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x140)
               < DAT_1416f2950) && (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
            _Init_thread_footer(&DAT_1416f2950);
          }
          local_90 = &PTR_vftable_1415056b0;
          local_98[0] = iVar4;
          vk::SystemError::SystemError((SystemError *)&local_80,local_98);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((SystemError *)&local_80,(ThrowInfo *)&DAT_14147b360);
        }
        (pTVar3->Texture_data).offset_0xf8 = local_88;
      }
      pTVar3 = local_50;
      if (0xf < *(ulonglong *)(param_2 + 0x38)) {
        lVar6 = *(longlong *)(param_2 + 0x20);
      }
      vk_device_setdebugutilsobjectnameext(lVar1,*(undefined8 *)&local_50->field_0x18,8,8,lVar6);
      local_50 = pTVar3;
      goto LAB_1406f7809;
    }
  }
  local_50 = (Texture *)0x0;
LAB_1406f7809:
  *param_1 = (longlong)local_50;
  return param_1;
}

