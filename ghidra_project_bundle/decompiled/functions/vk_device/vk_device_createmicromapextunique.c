/**
 * Function: vk_device_createmicromapextunique
 * Address:  14070a520
 * Signature: undefined8 * __thiscall vk_device_createmicromapextunique(void * this, undefined8 * param_1, longlong * param_2)
 * Body size: 3021 bytes
 */


undefined8 * __thiscall
vk_device_createmicromapextunique(void *this,undefined8 *param_1,longlong *param_2)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  size_t _Size;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  void *pvVar13;
  longlong lVar14;
  ulonglong _Size_00;
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  int local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  int local_140 [2];
  undefined **local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong alStack_e0 [4];
  undefined1 local_c0;
  undefined4 uStack_bf;
  undefined4 uStack_bb;
  undefined1 local_b7;
  undefined2 uStack_b6;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_98;
  InvalidExternalHandleError local_90;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_168[0] = 0x3ba0d4e8;
  local_160 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  local_198 = param_2[5];
  local_1a0 = (int)((ulonglong)(param_2[6] - local_198) >> 2) * -0x55555555;
  local_1c8[0] = 0x3ba0d4e0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = (uint)*(byte *)((longlong)param_2 + 0x21);
  local_1b0 = 0;
  local_1a8 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  (*DAT_1416b8090)(*(undefined8 *)((longlong)this + 0xa0),1,local_1c8,local_168);
  puVar9 = (undefined8 *)FUN_140b65d30(0xa0);
  *(undefined4 *)(puVar9 + 1) = 1;
  *puVar9 = &nvrhi::vulkan::OpacityMicromap::vftable;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0xf;
  *(undefined1 *)(puVar9 + 0xb) = 1;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  puVar9[0x11] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x8a) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x92) = 0;
  plVar1 = puVar9 + 7;
  if (plVar1 == param_2) {
    *(short *)(puVar9 + 0xb) = (short)param_2[4];
  }
  else {
    uVar12 = param_2[2];
    plVar11 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar11 = (longlong *)*param_2;
    }
    local_a0 = param_1;
    if (uVar12 < 0x10) {
      puVar9[9] = uVar12;
      memmove(plVar1,plVar11,uVar12);
      *(undefined1 *)((longlong)puVar9 + uVar12 + 0x38) = 0;
    }
    else {
      FUN_1400069b0(plVar1,uVar12);
    }
    *(short *)(puVar9 + 0xb) = (short)param_2[4];
    _Src = (void *)param_2[5];
    _Size_00 = param_2[6] - (longlong)_Src;
    uVar12 = ((longlong)_Size_00 >> 2) * -0x5555555555555555;
    _Dst = (void *)puVar9[0xc];
    if ((ulonglong)(puVar9[0xe] - (longlong)_Dst) < _Size_00) {
      FUN_140714c70(puVar9 + 0xc,uVar12);
      pvVar13 = (void *)puVar9[0xc];
      memmove(pvVar13,_Src,_Size_00);
      pvVar13 = (void *)((longlong)pvVar13 + _Size_00);
    }
    else {
      _Size = puVar9[0xd] - (longlong)_Dst;
      lVar14 = uVar12 + ((longlong)_Size >> 2) * 0x5555555555555555;
      if (uVar12 < (ulonglong)(((longlong)_Size >> 2) * -0x5555555555555555) || lVar14 == 0) {
        pvVar13 = (void *)((longlong)_Dst + _Size_00);
        memmove(_Dst,_Src,_Size_00);
      }
      else {
        memmove(_Dst,_Src,_Size);
        pvVar13 = (void *)puVar9[0xd];
        memmove(pvVar13,(void *)((longlong)_Src + _Size),_Size_00 - _Size);
        pvVar13 = (void *)((longlong)pvVar13 + lVar14 * 0xc);
      }
    }
    puVar9[0xd] = pvVar13;
    param_1 = local_a0;
  }
  lVar14 = param_2[8];
  lVar4 = param_2[9];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x54);
  lVar7 = param_2[0xb];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(int *)(puVar9 + 0x11) = (int)param_2[10];
  *(undefined4 *)((longlong)puVar9 + 0x8c) = uVar5;
  *(int *)(puVar9 + 0x12) = (int)lVar7;
  *(undefined4 *)((longlong)puVar9 + 0x94) = uVar6;
  puVar9[0xf] = lVar14;
  puVar9[0x10] = lVar4;
  *(undefined1 *)((longlong)puVar9 + 0x99) = 0;
  alStack_e0[1] = 0;
  alStack_e0[2] = 0;
  local_e8 = 0;
  alStack_e0[0] = 0;
  alStack_e0[3] = 0xf;
  local_c0 = 0;
  uStack_bb = 0;
  uStack_b6 = 0;
  local_b4 = 0;
  local_a8 = 0;
  uStack_bf = 1;
  local_f0 = CONCAT44(uStack_154,uStack_158);
  local_b0 = 0x80000;
  local_ac = 1;
  local_b7 = 1;
  if (alStack_e0 != param_2) {
    uVar12 = param_2[2];
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    if (uVar12 < 0x10) {
      alStack_e0[2] = uVar12;
      memmove(alStack_e0,param_2,uVar12);
      *(undefined1 *)((longlong)alStack_e0 + uVar12) = 0;
    }
    else {
      FUN_1400069b0(alStack_e0,uVar12);
    }
  }
  local_b4 = 0;
  (**(code **)(*(longlong *)this + 0x88))(this,&local_130,&local_f0);
  plVar11 = local_130;
  plVar10 = puVar9 + 2;
  local_130 = (longlong *)0x0;
  plVar1 = (longlong *)*plVar10;
  *plVar10 = (longlong)plVar11;
  if ((plVar1 != (longlong *)0x0) &&
     ((**(code **)(*plVar1 + 0x10))(), plVar1 = local_130, local_130 != (longlong *)0x0)) {
    local_130 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  local_108 = CONCAT44(uStack_154,uStack_158);
  local_118 = *(undefined8 *)(*plVar10 + 0x80);
  local_f8 = *(undefined8 *)(*plVar10 + 0x88);
  local_130 = (longlong *)CONCAT44(local_130._4_4_,0x3ba0d4e7);
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_100 = 0;
  uVar2 = *(undefined8 *)((longlong)this + 0xa8);
  local_98 = 0;
  iVar8 = (*DAT_1416b8028)(*(undefined8 *)((longlong)this + 0xa0),&local_130,uVar2);
  lVar14 = local_98;
  if (iVar8 == 0) {
    uVar3 = *(undefined8 *)((longlong)this + 0xa0);
    lVar4 = puVar9[6];
    if (lVar4 != local_98) {
      if (lVar4 != 0) {
        (**(code **)(puVar9[5] + 0x1310))(puVar9[3],lVar4,puVar9[4]);
      }
      puVar9[6] = lVar14;
    }
    puVar9[3] = uVar3;
    puVar9[4] = uVar2;
    puVar9[5] = &DAT_1416b6d20;
    *param_1 = puVar9;
    if (0xf < (ulonglong)alStack_e0[3]) {
      uVar12 = alStack_e0[3] + 1;
      lVar14 = alStack_e0[0];
      if (0xfff < uVar12) {
        lVar14 = *(longlong *)(alStack_e0[0] + -8);
        if (0x1f < (ulonglong)((alStack_e0[0] + -8) - lVar14)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar12 = alStack_e0[3] + 0x28;
      }
      thunk_FUN_140b68ba8(lVar14,uVar12);
    }
    return param_1;
  }
  if (iVar8 < -0x3b9ad5b9) {
    if (iVar8 < -0x3b9bd788) {
      if (iVar8 < -0x3b9eae18) {
        if (iVar8 < -0x3b9f59f8) {
          if (iVar8 == -0x3ba228b8) {
            vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                      ((NotEnoughSpaceKHRError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b330);
          }
          if (iVar8 == -0x3b9ff250) {
            vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                      ((CompressionExhaustedEXTError *)&local_90,
                       "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b2e0);
          }
        }
        else {
          if (iVar8 == -0x3b9f59f8) {
            vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                      ((InvalidVideoStdParametersKHRError *)&local_90,
                       "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b290);
          }
          if (iVar8 == -0x3b9eb5e8) {
            vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                      ((InvalidOpaqueCaptureAddressError *)&local_90,
                       "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ade0);
          }
        }
      }
      else if (iVar8 < -0x3b9d3ee8) {
        if (iVar8 == -0x3b9eae18) {
          vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                    ((FullScreenExclusiveModeLostEXTError *)&local_90,
                     "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b240);
        }
        if (iVar8 == -0x3b9d71b1) {
          vk::NotPermittedError::NotPermittedError
                    ((NotPermittedError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ae30);
        }
      }
      else {
        if (iVar8 == -0x3b9d3ee8) {
          vk::FragmentationError::FragmentationError
                    ((FragmentationError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ad90);
        }
        if (iVar8 == -0x3b9d3330) {
          vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
          InvalidDrmFormatModifierPlaneLayoutEXTError
                    ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_90,
                     "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b1f0);
        }
        if (iVar8 == -0x3b9be343) {
          vk::InvalidExternalHandleError::InvalidExternalHandleError
                    (&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ad40);
        }
      }
    }
    else if (iVar8 < -0x3b9af8e0) {
      switch(iVar8) {
      case -0x3b9b23dd:
        vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                  ((VideoStdVersionNotSupportedKHRError *)&local_90,
                   "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b1a0);
      case -0x3b9b23dc:
        vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                  ((VideoProfileCodecNotSupportedKHRError *)&local_90,
                   "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b150);
      case -0x3b9b23db:
        vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                  ((VideoProfileFormatNotSupportedKHRError *)&local_90,
                   "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b100);
      case -0x3b9b23da:
        vk::VideoProfileOperationNotSupportedKHRError::VideoProfileOperationNotSupportedKHRError
                  ((VideoProfileOperationNotSupportedKHRError *)&local_90,
                   "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b0b0);
      case -0x3b9b23d9:
        vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                  ((VideoPictureLayoutNotSupportedKHRError *)&local_90,
                   "vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b060);
      case -0x3b9b23d8:
        vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                  ((ImageUsageNotSupportedKHRError *)&local_90,"vk::Device::createMicromapEXTUnique"
                  );
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b010);
      }
      if (iVar8 == -0x3b9bd788) {
        vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                  ((OutOfPoolMemoryError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147acf0);
      }
    }
    else {
      if (iVar8 == -0x3b9af8e0) {
        vk::InvalidShaderNVError::InvalidShaderNVError
                  ((InvalidShaderNVError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147afc0);
      }
      if (iVar8 == -0x3b9af4f9) {
        vk::ValidationFailedError::ValidationFailedError
                  ((ValidationFailedError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aca0);
      }
    }
  }
  else if (iVar8 < -1000000000) {
    if (iVar8 == -0x3b9ad5b9) {
      vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                ((IncompatibleDisplayKHRError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147af70);
    }
    if (iVar8 == -0x3b9acdec) {
      vk::OutOfDateKHRError::OutOfDateKHRError
                ((OutOfDateKHRError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147af20);
    }
    if (iVar8 == -0x3b9aca01) {
      vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                ((NativeWindowInUseKHRError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aed0);
    }
  }
  else {
    switch(iVar8) {
    case -0xd:
      vk::UnknownError::UnknownError
                ((UnknownError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ac50);
    case -0xc:
      vk::FragmentedPoolError::FragmentedPoolError
                ((FragmentedPoolError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ac00);
    case -0xb:
      vk::FormatNotSupportedError::FormatNotSupportedError
                ((FormatNotSupportedError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147abb0);
    case -10:
      vk::TooManyObjectsError::TooManyObjectsError
                ((TooManyObjectsError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ab60);
    case -9:
      vk::IncompatibleDriverError::IncompatibleDriverError
                ((IncompatibleDriverError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ab10);
    case -8:
      vk::FeatureNotPresentError::FeatureNotPresentError
                ((FeatureNotPresentError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aac0);
    case -7:
      vk::ExtensionNotPresentError::ExtensionNotPresentError
                ((ExtensionNotPresentError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aa70);
    case -6:
      vk::LayerNotPresentError::LayerNotPresentError
                ((LayerNotPresentError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aa20);
    case -5:
      vk::MemoryMapFailedError::MemoryMapFailedError
                ((MemoryMapFailedError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a9d0);
    case -4:
      vk::DeviceLostError::DeviceLostError
                ((DeviceLostError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a980);
    case -3:
      vk::InitializationFailedError::InitializationFailedError
                ((InitializationFailedError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a930);
    case -2:
      vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                ((OutOfDeviceMemoryError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a8e0);
    case -1:
      vk::OutOfHostMemoryError::OutOfHostMemoryError
                ((OutOfHostMemoryError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a890);
    }
    if (iVar8 == -1000000000) {
      vk::SurfaceLostKHRError::SurfaceLostKHRError
                ((SurfaceLostKHRError *)&local_90,"vk::Device::createMicromapEXTUnique");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ae80);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_1416f2950) && (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
    _Init_thread_footer(&DAT_1416f2950);
  }
  local_90.vftablePtr = (InvalidExternalHandleError_vftable_for_Error *)&vk::Error::vftable;
  local_138 = &PTR_vftable_1415056b0;
  local_140[0] = iVar8;
  FUN_1405394b0(&local_90.vftablePtr,local_140,"vk::Device::createMicromapEXTUnique");
  local_90.vftablePtr =
       (InvalidExternalHandleError_vftable_for_Error *)&vk::SystemError::vftable_for_Error;
  local_90.vftablePtr =
       (InvalidExternalHandleError_vftable_for_system_error *)
       &vk::SystemError::vftable_for_system_error;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b360);
}

