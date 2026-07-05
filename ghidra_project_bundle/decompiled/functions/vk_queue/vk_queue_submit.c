/**
 * Function: vk_queue_submit
 * Address:  1406ee1c0
 * Signature: undefined vk_queue_submit(void)
 * Body size: 3194 bytes
 */


undefined8 vk_queue_submit(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  size_t sVar12;
  ulonglong uVar13;
  void *_Dst;
  int local_168 [2];
  undefined **local_160;
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined4 local_148;
  longlong local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 *local_128;
  longlong *plStack_120;
  undefined4 local_118;
  longlong local_110;
  void *local_108;
  undefined4 local_100;
  void *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  void *local_d8;
  longlong lStack_d0;
  void *local_c8;
  void *local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 *local_98;
  InvalidExternalHandleError local_90;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_d8 = (void *)0x0;
  lStack_d0 = 0;
  local_c8 = (void *)0x0;
  lVar11 = param_1[0xf] - param_1[0xe];
  local_98 = (undefined8 *)param_2;
  if (lVar11 == 0) {
    pvVar7 = (void *)0x0;
  }
  else {
    uVar13 = (longlong)(param_1[0xf] - param_1[0xe]) >> 3;
    if (uVar13 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      vector_too_long();
    }
    sVar12 = lVar11 >> 1;
    if (uVar13 < 0x400) {
      pvVar7 = (void *)FUN_140b65d30(sVar12);
    }
    else {
      lVar11 = FUN_140b65d30(sVar12 + 0x27);
      pvVar7 = (void *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar7 - 8) = lVar11;
    }
    local_c8 = (void *)((longlong)pvVar7 + uVar13 * 4);
    local_d8 = pvVar7;
    memset(pvVar7,0,sVar12);
    lStack_d0 = sVar12 + (longlong)pvVar7;
  }
  local_a8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  if (param_3 != 0) {
    local_a8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_b8 = (void *)0x0;
    if (param_3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      vector_too_long();
    }
    sVar12 = param_3 * 8;
    if (param_3 < 0x200) {
      _Dst = (void *)FUN_140b65d30(sVar12);
    }
    else {
      if (0x1ffffffffffffffb < param_3) {
                    /* WARNING: Subroutine does not return */
        std::bad_array_new_length::bad_array_new_length();
      }
      lVar11 = FUN_140b65d30(sVar12 + 0x27);
      _Dst = (void *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar11;
    }
    local_a8 = (void *)((longlong)_Dst + param_3 * 8);
    local_b8 = _Dst;
    memset(_Dst,0,sVar12);
    pvStack_b0 = (void *)((longlong)_Dst + sVar12);
  }
  if (param_1[0xf] != param_1[0xe]) {
    uVar13 = 0;
    do {
      *(undefined4 *)((longlong)pvVar7 + uVar13 * 4) = 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulonglong)((longlong)(param_1[0xf] - param_1[0xe]) >> 3));
  }
  param_1[0x1b] = param_1[0x1b] + 1;
  local_e0 = param_1 + 0x1b;
  for (uVar13 = 0; uVar13 < param_3; uVar13 = uVar13 + 1) {
    lVar11 = *(longlong *)((longlong)local_98 + uVar13 * 8);
    if (*(longlong *)(lVar11 + 0x140) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar11 + 0x140) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar11 + 0x140);
    }
    puVar10 = *(undefined8 **)(lVar11 + 0x138);
    *(undefined8 *)((longlong)local_b8 + uVar13 * 8) = *puVar10;
    local_128 = puVar10;
    plStack_120 = plVar8;
    if (param_1[0x1e] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list too long");
    }
    lVar11 = param_1[0x1d];
    plVar6 = (longlong *)FUN_140b65d30(0x20);
    plVar6[2] = 0;
    plVar6[3] = 0;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8 = plStack_120;
      puVar10 = local_128;
    }
    plVar6[2] = (longlong)puVar10;
    plVar6[3] = (longlong)plVar8;
    param_1[0x1e] = param_1[0x1e] + 1;
    puVar2 = *(undefined8 **)(lVar11 + 8);
    *plVar6 = lVar11;
    plVar6[1] = (longlong)puVar2;
    *(longlong **)(lVar11 + 8) = plVar6;
    *puVar2 = plVar6;
    plVar3 = (longlong *)puVar10[6];
    for (plVar6 = (longlong *)puVar10[5]; plVar6 != plVar3; plVar6 = plVar6 + 1) {
      *(undefined1 *)(*plVar6 + 0x104) = *(undefined1 *)(param_1 + 3);
      *(undefined8 *)(*plVar6 + 0x108) = param_1[0x1b];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
  }
  puVar10 = (undefined8 *)param_1[0x15];
  if (puVar10 == (undefined8 *)param_1[0x16]) {
    FUN_140029790(param_1 + 0x14,puVar10,param_1);
  }
  else {
    *puVar10 = *param_1;
    param_1[0x15] = param_1[0x15] + 8;
  }
  puVar10 = (undefined8 *)param_1[0x18];
  if (puVar10 == (undefined8 *)param_1[0x19]) {
    FUN_140029790(param_1 + 0x17,puVar10,local_e0);
    lVar11 = param_1[0x18];
  }
  else {
    *puVar10 = param_1[0x1b];
    lVar11 = param_1[0x18] + 8;
    param_1[0x18] = lVar11;
  }
  local_130 = param_1[0x17];
  local_158[0] = 0x3b9df29b;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = (undefined4)((ulonglong)(lVar11 - local_130) >> 3);
  lVar11 = param_1[0x11];
  if (lVar11 != param_1[0x12]) {
    local_148 = (undefined4)((ulonglong)(param_1[0x12] - lVar11) >> 3);
    local_140 = lVar11;
  }
  uVar13 = param_1[0xf] - param_1[0xe];
  local_110 = param_1[0xe];
  if (uVar13 == 0) {
    local_110 = 0;
  }
  uVar9 = param_1[0x15] - param_1[0x14];
  local_e8 = param_1[0x14];
  if (uVar9 == 0) {
    local_e8 = 0;
  }
  local_128 = (undefined8 *)CONCAT44(local_128._4_4_,4);
  plStack_120 = (longlong *)local_158;
  local_118 = (undefined4)(uVar13 >> 3);
  local_108 = local_d8;
  local_100 = (undefined4)param_3;
  local_f8 = local_b8;
  local_f0 = (undefined4)(uVar9 >> 3);
  local_98 = param_1;
  iVar5 = (*DAT_1416b6db0)(param_1[2],1);
  if (iVar5 != 0) {
    if (iVar5 < -0x3b9ad5b9) {
      if (iVar5 < -0x3b9bd788) {
        if (iVar5 < -0x3b9eae18) {
          if (iVar5 < -0x3b9f59f8) {
            if (iVar5 == -0x3ba228b8) {
              vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                        ((NotEnoughSpaceKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b330);
            }
            if (iVar5 == -0x3b9ff250) {
              vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                        ((CompressionExhaustedEXTError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b2e0);
            }
          }
          else {
            if (iVar5 == -0x3b9f59f8) {
              vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                        ((InvalidVideoStdParametersKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b290);
            }
            if (iVar5 == -0x3b9eb5e8) {
              vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                        ((InvalidOpaqueCaptureAddressError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ade0);
            }
          }
        }
        else if (iVar5 < -0x3b9d3ee8) {
          if (iVar5 == -0x3b9eae18) {
            vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                      ((FullScreenExclusiveModeLostEXTError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b240);
          }
          if (iVar5 == -0x3b9d71b1) {
            vk::NotPermittedError::NotPermittedError
                      ((NotPermittedError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ae30);
          }
        }
        else {
          if (iVar5 == -0x3b9d3ee8) {
            vk::FragmentationError::FragmentationError
                      ((FragmentationError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ad90);
          }
          if (iVar5 == -0x3b9d3330) {
            vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
            InvalidDrmFormatModifierPlaneLayoutEXTError
                      ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_90,"vk::Queue::submit")
            ;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b1f0);
          }
          if (iVar5 == -0x3b9be343) {
            vk::InvalidExternalHandleError::InvalidExternalHandleError
                      (&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ad40);
          }
        }
      }
      else if (iVar5 < -0x3b9af8e0) {
        switch(iVar5) {
        case -0x3b9b23dd:
          vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                    ((VideoStdVersionNotSupportedKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b1a0);
        case -0x3b9b23dc:
          vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                    ((VideoProfileCodecNotSupportedKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b150);
        case -0x3b9b23db:
          vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                    ((VideoProfileFormatNotSupportedKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b100);
        case -0x3b9b23da:
          vk::VideoProfileOperationNotSupportedKHRError::VideoProfileOperationNotSupportedKHRError
                    ((VideoProfileOperationNotSupportedKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b0b0);
        case -0x3b9b23d9:
          vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                    ((VideoPictureLayoutNotSupportedKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b060);
        case -0x3b9b23d8:
          vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                    ((ImageUsageNotSupportedKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b010);
        }
        if (iVar5 == -0x3b9bd788) {
          vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                    ((OutOfPoolMemoryError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147acf0);
        }
      }
      else {
        if (iVar5 == -0x3b9af8e0) {
          vk::InvalidShaderNVError::InvalidShaderNVError
                    ((InvalidShaderNVError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147afc0);
        }
        if (iVar5 == -0x3b9af4f9) {
          vk::ValidationFailedError::ValidationFailedError
                    ((ValidationFailedError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aca0);
        }
      }
    }
    else if (iVar5 < -1000000000) {
      if (iVar5 == -0x3b9ad5b9) {
        vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                  ((IncompatibleDisplayKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147af70);
      }
      if (iVar5 == -0x3b9acdec) {
        vk::OutOfDateKHRError::OutOfDateKHRError((OutOfDateKHRError *)&local_90,"vk::Queue::submit")
        ;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147af20);
      }
      if (iVar5 == -0x3b9aca01) {
        vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                  ((NativeWindowInUseKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aed0);
      }
    }
    else {
      switch(iVar5) {
      case -0xd:
        vk::UnknownError::UnknownError((UnknownError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ac50);
      case -0xc:
        vk::FragmentedPoolError::FragmentedPoolError
                  ((FragmentedPoolError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ac00);
      case -0xb:
        vk::FormatNotSupportedError::FormatNotSupportedError
                  ((FormatNotSupportedError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147abb0);
      case -10:
        vk::TooManyObjectsError::TooManyObjectsError
                  ((TooManyObjectsError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ab60);
      case -9:
        vk::IncompatibleDriverError::IncompatibleDriverError
                  ((IncompatibleDriverError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ab10);
      case -8:
        vk::FeatureNotPresentError::FeatureNotPresentError
                  ((FeatureNotPresentError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aac0);
      case -7:
        vk::ExtensionNotPresentError::ExtensionNotPresentError
                  ((ExtensionNotPresentError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aa70);
      case -6:
        vk::LayerNotPresentError::LayerNotPresentError
                  ((LayerNotPresentError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aa20);
      case -5:
        vk::MemoryMapFailedError::MemoryMapFailedError
                  ((MemoryMapFailedError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a9d0);
      case -4:
        vk::DeviceLostError::DeviceLostError((DeviceLostError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a980);
      case -3:
        vk::InitializationFailedError::InitializationFailedError
                  ((InitializationFailedError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a930);
      case -2:
        vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                  ((OutOfDeviceMemoryError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a8e0);
      case -1:
        vk::OutOfHostMemoryError::OutOfHostMemoryError
                  ((OutOfHostMemoryError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a890);
      }
      if (iVar5 == -1000000000) {
        vk::SurfaceLostKHRError::SurfaceLostKHRError
                  ((SurfaceLostKHRError *)&local_90,"vk::Queue::submit");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ae80);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x140) < DAT_1416f2950) && (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
      _Init_thread_footer(&DAT_1416f2950);
    }
                    /* inlined constructor: vk::Error::Error
                       inlined constructor: vk::SystemError::SystemError */
    local_90.vftablePtr = (InvalidExternalHandleError_vftable_for_Error *)&vk::Error::vftable;
    local_160 = &PTR_vftable_1415056b0;
    local_168[0] = iVar5;
    FUN_1405394b0(&local_90.vftablePtr,local_168,"vk::Queue::submit");
    local_90.vftablePtr =
         (InvalidExternalHandleError_vftable_for_Error *)&vk::SystemError::vftable_for_Error;
    local_90.vftablePtr =
         (InvalidExternalHandleError_vftable_for_system_error *)
         &vk::SystemError::vftable_for_system_error;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b360);
  }
  if (local_98[0xe] != local_98[0xf]) {
    local_98[0xf] = local_98[0xe];
  }
  if (local_98[0x11] != local_98[0x12]) {
    local_98[0x12] = local_98[0x11];
  }
  if (local_98[0x14] != local_98[0x15]) {
    local_98[0x15] = local_98[0x14];
  }
  if (local_98[0x17] != local_98[0x18]) {
    local_98[0x18] = local_98[0x17];
  }
  uVar4 = *local_e0;
  if (local_b8 != (void *)0x0) {
    uVar13 = (longlong)local_a8 - (longlong)local_b8;
    pvVar7 = local_b8;
    if (0xfff < uVar13) {
      pvVar7 = *(void **)((longlong)local_b8 + -8);
      if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar7))) goto LAB_1406ee791;
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_140b68ba8(pvVar7,uVar13);
  }
  if (local_d8 != (void *)0x0) {
    uVar13 = (longlong)local_c8 - (longlong)local_d8;
    pvVar7 = local_d8;
    if (0xfff < uVar13) {
      pvVar7 = *(void **)((longlong)local_d8 + -8);
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pvVar7))) {
LAB_1406ee791:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_140b68ba8(pvVar7,uVar13);
  }
  return uVar4;
}

