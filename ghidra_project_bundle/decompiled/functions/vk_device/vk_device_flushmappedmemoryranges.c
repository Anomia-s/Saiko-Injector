/**
 * Function: vk_device_flushmappedmemoryranges
 * Address:  1406fe7c0
 * Signature: undefined vk_device_flushmappedmemoryranges(void)
 * Body size: 1961 bytes
 */


void vk_device_flushmappedmemoryranges(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int local_98 [2];
  undefined **local_90;
  undefined4 *local_88;
  undefined4 *puStack_80;
  undefined4 *local_78;
  InvalidExternalHandleError local_68;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_88 = (undefined4 *)0x0;
  puStack_80 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  plVar1 = *(longlong **)(param_1 + 0xa00);
  plVar5 = plVar1;
  while (plVar5 = (longlong *)*plVar5, plVar5 != plVar1) {
    iVar2 = *(int *)((longlong)plVar5 + 0x1c);
    if ((iVar2 <= *(int *)(plVar5 + 4)) && (*(char *)((longlong)plVar5 + 0x24) == '\x01')) {
      local_68.offset_0x8 = *(undefined8 *)(plVar5[2] + 0x18);
      local_68.offset_0x18 = *(longlong *)(plVar5[2] + 0x30);
      local_68.offset_0x10 = iVar2 * local_68.offset_0x18;
      local_68.offset_0x18 = ((*(int *)(plVar5 + 4) - iVar2) + 1) * local_68.offset_0x18;
      local_68.vftablePtr =
           (InvalidExternalHandleError_vftable_for_Error *)CONCAT44(local_68.vftablePtr._4_4_,6);
      local_68.vftablePtr = (InvalidExternalHandleError_vftable_for_system_error *)0x0;
      if (puStack_80 == local_78) {
        FUN_140197fb0(&local_88,puStack_80,&local_68);
      }
      else {
        *(longlong *)(puStack_80 + 8) = local_68.offset_0x18;
        *(undefined8 *)(puStack_80 + 4) = local_68.offset_0x8;
        *(longlong *)(puStack_80 + 6) = local_68.offset_0x10;
        *puStack_80 = 6;
        puStack_80[1] = local_68.vftablePtr._4_4_;
        puStack_80[2] = 0;
        puStack_80[3] = 0;
        puStack_80 = puStack_80 + 10;
      }
    }
  }
  if ((local_88 == puStack_80) ||
     (iVar2 = (*DAT_1416b6de8)(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),
                               (int)((ulonglong)((longlong)puStack_80 - (longlong)local_88) >> 3) *
                               -0x33333333), iVar2 == 0)) {
    if (local_88 != (undefined4 *)0x0) {
      uVar3 = (longlong)local_78 - (longlong)local_88;
      puVar4 = local_88;
      if (0xfff < uVar3) {
        puVar4 = *(undefined4 **)(local_88 + -2);
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar3 = uVar3 + 0x27;
      }
      thunk_FUN_140b68ba8(puVar4,uVar3);
    }
    return;
  }
  if (iVar2 < -0x3b9ad5b9) {
    if (iVar2 < -0x3b9bd788) {
      if (iVar2 < -0x3b9eae18) {
        if (iVar2 < -0x3b9f59f8) {
          if (iVar2 == -0x3ba228b8) {
            vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                      ((NotEnoughSpaceKHRError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b330);
          }
          if (iVar2 == -0x3b9ff250) {
            vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                      ((CompressionExhaustedEXTError *)&local_68,
                       "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b2e0);
          }
        }
        else {
          if (iVar2 == -0x3b9f59f8) {
            vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                      ((InvalidVideoStdParametersKHRError *)&local_68,
                       "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b290);
          }
          if (iVar2 == -0x3b9eb5e8) {
            vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                      ((InvalidOpaqueCaptureAddressError *)&local_68,
                       "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ade0);
          }
        }
      }
      else if (iVar2 < -0x3b9d3ee8) {
        if (iVar2 == -0x3b9eae18) {
          vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                    ((FullScreenExclusiveModeLostEXTError *)&local_68,
                     "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b240);
        }
        if (iVar2 == -0x3b9d71b1) {
          vk::NotPermittedError::NotPermittedError
                    ((NotPermittedError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ae30);
        }
      }
      else {
        if (iVar2 == -0x3b9d3ee8) {
          vk::FragmentationError::FragmentationError
                    ((FragmentationError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ad90);
        }
        if (iVar2 == -0x3b9d3330) {
          vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
          InvalidDrmFormatModifierPlaneLayoutEXTError
                    ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_68,
                     "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b1f0);
        }
        if (iVar2 == -0x3b9be343) {
          vk::InvalidExternalHandleError::InvalidExternalHandleError
                    (&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ad40);
        }
      }
    }
    else if (iVar2 < -0x3b9af8e0) {
      switch(iVar2) {
      case -0x3b9b23dd:
        vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                  ((VideoStdVersionNotSupportedKHRError *)&local_68,
                   "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b1a0);
      case -0x3b9b23dc:
        vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                  ((VideoProfileCodecNotSupportedKHRError *)&local_68,
                   "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b150);
      case -0x3b9b23db:
        vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                  ((VideoProfileFormatNotSupportedKHRError *)&local_68,
                   "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b100);
      case -0x3b9b23da:
        vk::VideoProfileOperationNotSupportedKHRError::VideoProfileOperationNotSupportedKHRError
                  ((VideoProfileOperationNotSupportedKHRError *)&local_68,
                   "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b0b0);
      case -0x3b9b23d9:
        vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                  ((VideoPictureLayoutNotSupportedKHRError *)&local_68,
                   "vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b060);
      case -0x3b9b23d8:
        vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                  ((ImageUsageNotSupportedKHRError *)&local_68,"vk::Device::flushMappedMemoryRanges"
                  );
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b010);
      }
      if (iVar2 == -0x3b9bd788) {
        vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                  ((OutOfPoolMemoryError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147acf0);
      }
    }
    else {
      if (iVar2 == -0x3b9af8e0) {
        vk::InvalidShaderNVError::InvalidShaderNVError
                  ((InvalidShaderNVError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147afc0);
      }
      if (iVar2 == -0x3b9af4f9) {
        vk::ValidationFailedError::ValidationFailedError
                  ((ValidationFailedError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147aca0);
      }
    }
  }
  else if (iVar2 < -1000000000) {
    if (iVar2 == -0x3b9ad5b9) {
      vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                ((IncompatibleDisplayKHRError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147af70);
    }
    if (iVar2 == -0x3b9acdec) {
      vk::OutOfDateKHRError::OutOfDateKHRError
                ((OutOfDateKHRError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147af20);
    }
    if (iVar2 == -0x3b9aca01) {
      vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                ((NativeWindowInUseKHRError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147aed0);
    }
  }
  else {
    switch(iVar2) {
    case -0xd:
      vk::UnknownError::UnknownError
                ((UnknownError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ac50);
    case -0xc:
      vk::FragmentedPoolError::FragmentedPoolError
                ((FragmentedPoolError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ac00);
    case -0xb:
      vk::FormatNotSupportedError::FormatNotSupportedError
                ((FormatNotSupportedError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147abb0);
    case -10:
      vk::TooManyObjectsError::TooManyObjectsError
                ((TooManyObjectsError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ab60);
    case -9:
      vk::IncompatibleDriverError::IncompatibleDriverError
                ((IncompatibleDriverError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ab10);
    case -8:
      vk::FeatureNotPresentError::FeatureNotPresentError
                ((FeatureNotPresentError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147aac0);
    case -7:
      vk::ExtensionNotPresentError::ExtensionNotPresentError
                ((ExtensionNotPresentError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147aa70);
    case -6:
      vk::LayerNotPresentError::LayerNotPresentError
                ((LayerNotPresentError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147aa20);
    case -5:
      vk::MemoryMapFailedError::MemoryMapFailedError
                ((MemoryMapFailedError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147a9d0);
    case -4:
      vk::DeviceLostError::DeviceLostError
                ((DeviceLostError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147a980);
    case -3:
      vk::InitializationFailedError::InitializationFailedError
                ((InitializationFailedError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147a930);
    case -2:
      vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                ((OutOfDeviceMemoryError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147a8e0);
    case -1:
      vk::OutOfHostMemoryError::OutOfHostMemoryError
                ((OutOfHostMemoryError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147a890);
    }
    if (iVar2 == -1000000000) {
      vk::SurfaceLostKHRError::SurfaceLostKHRError
                ((SurfaceLostKHRError *)&local_68,"vk::Device::flushMappedMemoryRanges");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147ae80);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_1416f2950) && (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
    _Init_thread_footer(&DAT_1416f2950);
  }
                    /* inlined constructor: vk::Error::Error
                       inlined constructor: vk::SystemError::SystemError */
  local_68.vftablePtr = (InvalidExternalHandleError_vftable_for_Error *)&vk::Error::vftable;
  local_90 = &PTR_vftable_1415056b0;
  local_98[0] = iVar2;
  FUN_1405394b0(&local_68.vftablePtr,local_98,"vk::Device::flushMappedMemoryRanges");
  local_68.vftablePtr =
       (InvalidExternalHandleError_vftable_for_Error *)&vk::SystemError::vftable_for_Error;
  local_68.vftablePtr =
       (InvalidExternalHandleError_vftable_for_system_error *)
       &vk::SystemError::vftable_for_system_error;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_68,(ThrowInfo *)&DAT_14147b360);
}

