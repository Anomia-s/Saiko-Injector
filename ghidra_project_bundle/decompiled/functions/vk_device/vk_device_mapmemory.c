/**
 * Function: vk_device_mapmemory
 * Address:  1406fc590
 * Signature: undefined8 * __thiscall vk_device_mapmemory(void * this, undefined8 * param_1, ulonglong * param_2)
 * Body size: 5046 bytes
 */


undefined8 * __thiscall vk_device_mapmemory(void *this,undefined8 *param_1,ulonglong *param_2)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  __uint64 _Var10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong *puVar17;
  __uint64 *p_Var18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  char *pcVar23;
  ulonglong uVar24;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f8 [2];
  undefined4 *local_1f0;
  undefined4 local_1e8;
  ulonglong local_1e0;
  uint local_1d8;
  undefined8 local_1d4;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  InvalidExternalHandleError local_198;
  undefined8 local_168;
  undefined8 local_160 [3];
  longlong *local_148;
  ulonglong *local_140;
  int *local_130;
  ulonglong local_118;
  uint local_110;
  ios_base local_100 [6];
  longlong local_a0;
  undefined8 *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined **ppuStack_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if ((((*(char *)((longlong)param_2 + 0x3b) == '\x01') && (*(int *)((longlong)param_2 + 0xc) == 0))
      || ((*(char *)((longlong)param_2 + 0x3b) != '\0' &&
          (*(char *)((longlong)param_2 + 0x36) == '\0')))) || (*param_2 == 0)) {
    *param_1 = 0;
    return param_1;
  }
  local_98 = param_1;
  plVar5 = (longlong *)FUN_140b65d30(0x120);
  *(undefined1 *)(plVar5 + 2) = 1;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 1) = 1;
  local_90 = (ulonglong *)(plVar5 + 6);
  plVar5[4] = (longlong)local_90;
  *(undefined4 *)(plVar5 + 5) = 0;
  *plVar5 = (longlong)&nvrhi::vulkan::Buffer::vftable;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0xf;
  plVar5[0xc] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x65) = 0;
  *(undefined4 *)(plVar5 + 0xe) = 1;
  *(undefined2 *)((longlong)plVar5 + 0x74) = 0;
  *(undefined4 *)(plVar5 + 0xf) = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  local_198.vftablePtr._0_4_ = 0;
  local_68 = plVar5;
  FUN_14000ad50(plVar5 + 0x13,&local_198,local_1f8);
  local_1b8 = (longlong)this + 0x610;
  local_a0 = (longlong)this + 0x90;
  local_68[0x21] = 0;
  local_68[0x1b] = 0;
  local_68[0x1c] = 0;
  local_68[0x1d] = 0;
  local_68[0x1e] = 0;
  *(undefined8 *)((longlong)local_68 + 0xf5) = 0;
  *(undefined8 *)((longlong)local_68 + 0xfd) = 0;
  local_68[0x22] = local_a0;
  local_68[0x23] = local_1b8;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar19 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)local_90 = (int)*param_2;
  *(undefined4 *)((longlong)local_90 + 4) = uVar1;
  *(int *)(local_90 + 1) = (int)uVar19;
  *(undefined4 *)((longlong)local_90 + 0xc) = uVar2;
  if (local_90 != param_2) {
    uVar19 = param_2[4];
    if (param_2[5] < 0x10) {
      puVar17 = param_2 + 2;
      uVar24 = local_68[0xb];
    }
    else {
      puVar17 = (ulonglong *)param_2[2];
      uVar24 = local_68[0xb];
    }
    if (uVar24 < uVar19) {
      FUN_1400069b0(plVar5 + 8,uVar19);
    }
    else {
      plVar20 = plVar5 + 8;
      if (0xf < uVar24) {
        plVar20 = (longlong *)local_68[8];
      }
      local_68[10] = uVar19;
      memmove(plVar20,puVar17,uVar19);
      *(undefined1 *)((longlong)plVar20 + uVar19) = 0;
    }
  }
  uVar19 = param_2[6];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar24 = param_2[7];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar11 = param_2[8];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar4 = param_2[9];
  *(undefined4 *)((longlong)plVar5 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(plVar5 + 0xe) = (int)uVar11;
  *(undefined4 *)((longlong)plVar5 + 0x74) = uVar3;
  *(int *)(plVar5 + 0xf) = (int)uVar4;
  *(int *)(plVar5 + 0xc) = (int)uVar19;
  *(undefined4 *)((longlong)plVar5 + 100) = uVar1;
  *(int *)(plVar5 + 0xd) = (int)uVar24;
  *(undefined4 *)((longlong)plVar5 + 0x6c) = uVar2;
  uVar16 = (uint)*(byte *)((longlong)param_2 + 0x37) << 8 |
           (uint)*(byte *)((longlong)param_2 + 0x35) << 6 |
           (uint)*(byte *)((longlong)param_2 + 0x34) << 7;
  iVar13 = (uint)*(byte *)((longlong)param_2 + 0x36) * 0x10;
  uVar22 = iVar13 + 0x23 + uVar16;
  uVar16 = iVar13 + uVar16 + 3;
  if ((*(byte *)((longlong)param_2 + 0x33) & 1) != 0) {
    uVar16 = uVar22;
  }
  if ((*(byte *)((longlong)param_2 + 0x31) & 1) != 0) {
    uVar16 = uVar22;
  }
  if ((int)param_2[1] != 0) {
    uVar16 = uVar22;
  }
  uVar22 = 0;
  if (*(char *)((longlong)param_2 + 0x32) != '\0') {
    uVar22 = (uint)*(byte *)((longlong)param_2 + 0x31) * 8 + 4;
  }
  uVar22 = (uint)*(byte *)((longlong)this + 0xbb) << 0x11 |
           (uint)*(byte *)((longlong)param_2 + 0x3a) << 10 |
           (uint)*(byte *)((longlong)param_2 + 0x39) << 0x14 |
           (uint)(byte)param_2[7] << 0x13 | uVar22;
  uVar19 = *param_2;
  if (*(char *)((longlong)param_2 + 0x3b) == '\x01') {
    plVar20 = plVar5 + 0x1b;
    uVar24 = *(ulonglong *)((longlong)this + 0x3e0);
    if (*(ulonglong *)((longlong)this + 0x3e0) < *(ulonglong *)((longlong)this + 0x330)) {
      uVar24 = *(ulonglong *)((longlong)this + 0x330);
    }
    uVar19 = -uVar24 & (uVar19 + uVar24) - 1;
    local_68[6] = uVar19;
    puVar17 = (ulonglong *)(ulonglong)*(uint *)((longlong)param_2 + 0xc);
    lVar15 = local_68[0x1b];
    puVar12 = (undefined8 *)local_68[0x1c];
    puVar14 = (ulonglong *)((longlong)puVar12 - lVar15 >> 3);
    lVar21 = (longlong)puVar17 - (longlong)puVar14;
    if (puVar17 < puVar14) {
      puVar12 = (undefined8 *)(lVar15 + (longlong)puVar17 * 8);
LAB_1406fc893:
      local_68[0x1c] = (longlong)puVar12;
LAB_1406fc8f4:
      puVar6 = (undefined8 *)*plVar20;
      plVar20 = local_68;
    }
    else {
      if (puVar17 < puVar14 || lVar21 == 0) goto LAB_1406fc8f4;
      if (puVar17 <= (ulonglong *)(local_68[0x1d] - lVar15 >> 3)) {
        local_1b0 = plVar20;
        local_90 = puVar17;
        memset(puVar12,0,lVar21 * 8);
        puVar12 = puVar12 + lVar21;
        puVar17 = local_90;
        plVar20 = local_1b0;
        goto LAB_1406fc893;
      }
      FUN_1407005c0(plVar20,puVar17,&local_198);
      puVar12 = (undefined8 *)local_68[0x1c];
      puVar6 = (undefined8 *)*plVar20;
      plVar20 = local_68;
    }
    for (; puVar6 != puVar12; puVar6 = puVar6 + 1) {
      LOCK();
      *puVar6 = 0;
      UNLOCK();
    }
    uVar19 = uVar19 * (longlong)puVar17;
    *(undefined1 *)((longlong)plVar20 + 0x75) = 2;
  }
  else if (uVar19 < 0x10000) {
    uVar19 = (ulonglong)((int)uVar19 + 3U & 0x1fffc);
  }
  p_Var18 = (__uint64 *)(plVar5 + 0x10);
  local_1f8[0] = 0xc;
  local_1f0 = (undefined4 *)0x0;
  local_1e8 = 0;
  local_1d4 = 0;
  local_1c8 = 0;
  local_210[0] = 0x3b9be340;
  local_208 = 0;
  local_200 = 2;
  if ((int)param_2[9] == 1) {
    local_1f0 = local_210;
  }
  local_1e0 = uVar19;
  local_1d8 = uVar22 | uVar16;
  iVar13 = (*DAT_1416b6eb0)(*(undefined8 *)((longlong)this + 0xa0),local_1f8,
                            *(undefined8 *)((longlong)this + 0xa8),p_Var18);
  if (iVar13 != 0) {
    *local_98 = 0;
    return local_98;
  }
  puVar17 = param_2 + 2;
  puVar14 = puVar17;
  if (0xf < param_2[5]) {
    puVar14 = (ulonglong *)param_2[2];
  }
  vk_device_setdebugutilsobjectnameext(local_a0,*p_Var18,9,9,puVar14);
  plVar5 = local_68;
  if (*(char *)((longlong)param_2 + 0x3c) == '\0') {
    iVar13 = vk_device_bindbuffermemory(local_1b8,local_68,uVar22 >> 0x11 & 1);
    plVar5 = local_68;
    if (iVar13 != 0) {
      plVar5 = (longlong *)0x0;
      goto LAB_1406fca28;
    }
    puVar14 = puVar17;
    if (0xf < param_2[5]) {
      puVar14 = (ulonglong *)param_2[2];
    }
    vk_device_setdebugutilsobjectnameext(local_a0,local_68[3],8,8,puVar14);
    if (*(char *)((longlong)param_2 + 0x3b) == '\x01') {
      iVar13 = (*DAT_1416b6dd8)(*(undefined8 *)((longlong)this + 0xa0),plVar5[3],0,uVar19,
                                (ulonglong)puVar14 & 0xffffffff00000000,&local_1a8);
      if (iVar13 != 0) {
        if (iVar13 < -0x3b9ad5b9) {
          if (iVar13 < -0x3b9bd788) {
            if (iVar13 < -0x3b9eae18) {
              if (iVar13 < -0x3b9f59f8) {
                if (iVar13 == -0x3ba228b8) {
                  pcVar23 = "vk::Device::mapMemory";
                  goto LAB_1406fd650;
                }
                if (iVar13 == -0x3b9ff250) {
                  pcVar23 = "vk::Device::mapMemory";
                  goto LAB_1406fd238;
                }
              }
              else {
                if (iVar13 == -0x3b9f59f8) {
                  pcVar23 = "vk::Device::mapMemory";
                  goto LAB_1406fd6b6;
                }
                if (iVar13 == -0x3b9eb5e8) {
                  pcVar23 = "vk::Device::mapMemory";
                  goto LAB_1406fd349;
                }
              }
            }
            else if (iVar13 < -0x3b9d3ee8) {
              if (iVar13 == -0x3b9eae18) {
                pcVar23 = "vk::Device::mapMemory";
                goto LAB_1406fd694;
              }
              if (iVar13 == -0x3b9d71b1) {
                pcVar23 = "vk::Device::mapMemory";
                goto LAB_1406fd30f;
              }
            }
            else {
              if (iVar13 == -0x3b9d3ee8) {
                pcVar23 = "vk::Device::mapMemory";
                goto LAB_1406fd562;
              }
              if (iVar13 == -0x3b9d3330) {
                pcVar23 = "vk::Device::mapMemory";
                goto LAB_1406fd584;
              }
              if (iVar13 == -0x3b9be343) {
                pcVar23 = "vk::Device::mapMemory";
                goto LAB_1406fd03d;
              }
            }
          }
          else if (iVar13 < -0x3b9af8e0) {
            switch(iVar13) {
            case -0x3b9b23dd:
              pcVar23 = "vk::Device::mapMemory";
              goto LAB_1406fd152;
            case -0x3b9b23dc:
              pcVar23 = "vk::Device::mapMemory";
              goto LAB_1406fd5a6;
            case -0x3b9b23db:
              pcVar23 = "vk::Device::mapMemory";
              goto LAB_1406fd5c8;
            case -0x3b9b23da:
              pcVar23 = "vk::Device::mapMemory";
              goto LAB_1406fd5ea;
            case -0x3b9b23d9:
              pcVar23 = "vk::Device::mapMemory";
              goto LAB_1406fd60c;
            case -0x3b9b23d8:
              pcVar23 = "vk::Device::mapMemory";
              goto LAB_1406fd62e;
            default:
              if (iVar13 == -0x3b9bd788) {
                pcVar23 = "vk::Device::mapMemory";
                goto LAB_1406fd419;
              }
            }
          }
          else {
            if (iVar13 == -0x3b9af8e0) {
              pcVar23 = "vk::Device::mapMemory";
              goto LAB_1406fd672;
            }
            if (iVar13 == -0x3b9af4f9) {
              pcVar23 = "vk::Device::mapMemory";
              goto LAB_1406fd293;
            }
          }
        }
        else if (iVar13 < -1000000000) {
          if (iVar13 == -0x3b9ad5b9) {
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd37d;
          }
          if (iVar13 == -0x3b9acdec) {
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd39f;
          }
          if (iVar13 == -0x3b9aca01) {
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd1c5;
          }
        }
        else {
          switch(iVar13) {
          case -0xd:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd0d1;
          case -0xc:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd768;
          case -0xb:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd78a;
          case -10:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd7ac;
          case -9:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd7ce;
          case -8:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd7f0;
          case -7:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd812;
          case -6:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd834;
          case -5:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd856;
          case -4:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd878;
          case -3:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd89a;
          case -2:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd8bc;
          case -1:
            pcVar23 = "vk::Device::mapMemory";
            goto LAB_1406fd8de;
          default:
            if (iVar13 == -1000000000) {
              pcVar23 = "vk::Device::mapMemory";
              goto LAB_1406fd3de;
            }
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x140) < DAT_1416f2950) &&
           (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
          _Init_thread_footer(&DAT_1416f2950);
        }
        local_88 = CONCAT44(local_88._4_4_,iVar13);
        ppuStack_80 = &PTR_vftable_1415056b0;
        plVar5 = &local_88;
        goto LAB_1406fd4c3;
      }
      plVar5[0x1e] = CONCAT44(local_1a8._4_4_,(int)local_1a8);
    }
    if (*(char *)((longlong)this + 0xbb) == '\x01') {
      local_198.offset_0x8 = *p_Var18;
      local_198.vftablePtr._0_4_ = 0x3b9e8321;
      local_198.vftablePtr = (InvalidExternalHandleError_vftable_for_system_error *)0x0;
      lVar15 = (*DAT_1416b7298)(*(undefined8 *)((longlong)this + 0xa0),&local_198);
      local_68[0x11] = lVar15;
      plVar5 = local_68;
    }
    if ((int)param_2[9] == 1) {
      local_78 = plVar5[3];
      local_88 = CONCAT44(local_88._4_4_,0x3b9be72b);
      ppuStack_80 = (undefined **)0x0;
      local_70 = CONCAT44(local_70._4_4_,2);
      iVar13 = (*DAT_1416b7730)(*(undefined8 *)((longlong)this + 0xa0),&local_88,&local_1c0);
      if (iVar13 != 0) {
        if (iVar13 < -0x3b9ad5b9) {
          if (iVar13 < -0x3b9bd788) {
            if (iVar13 < -0x3b9eae18) {
              if (iVar13 < -0x3b9f59f8) {
                if (iVar13 == -0x3ba228b8) {
                  pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd650:
                  vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                            ((NotEnoughSpaceKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((NotEnoughSpaceKHRError *)&local_198,
                                     (ThrowInfo *)&DAT_14147b330);
                }
                if (iVar13 == -0x3b9ff250) {
                  pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd238:
                  vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                            ((CompressionExhaustedEXTError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((CompressionExhaustedEXTError *)&local_198,
                                     (ThrowInfo *)&DAT_14147b2e0);
                }
              }
              else {
                if (iVar13 == -0x3b9f59f8) {
                  pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd6b6:
                  vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                            ((InvalidVideoStdParametersKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((InvalidVideoStdParametersKHRError *)&local_198,
                                     (ThrowInfo *)&DAT_14147b290);
                }
                if (iVar13 == -0x3b9eb5e8) {
                  pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd349:
                  vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                            ((InvalidOpaqueCaptureAddressError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException((InvalidOpaqueCaptureAddressError *)&local_198,
                                     (ThrowInfo *)&DAT_14147ade0);
                }
              }
            }
            else if (iVar13 < -0x3b9d3ee8) {
              if (iVar13 == -0x3b9eae18) {
                pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd694:
                vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                          ((FullScreenExclusiveModeLostEXTError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((FullScreenExclusiveModeLostEXTError *)&local_198,
                                   (ThrowInfo *)&DAT_14147b240);
              }
              if (iVar13 == -0x3b9d71b1) {
                pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd30f:
                vk::NotPermittedError::NotPermittedError((NotPermittedError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((NotPermittedError *)&local_198,(ThrowInfo *)&DAT_14147ae30);
              }
            }
            else {
              if (iVar13 == -0x3b9d3ee8) {
                pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd562:
                vk::FragmentationError::FragmentationError((FragmentationError *)&local_198,pcVar23)
                ;
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((FragmentationError *)&local_198,(ThrowInfo *)&DAT_14147ad90);
              }
              if (iVar13 == -0x3b9d3330) {
                pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd584:
                vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
                InvalidDrmFormatModifierPlaneLayoutEXTError
                          ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_198,
                                   (ThrowInfo *)&DAT_14147b1f0);
              }
              if (iVar13 == -0x3b9be343) {
                pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd03d:
                vk::InvalidExternalHandleError::InvalidExternalHandleError(&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException(&local_198,(ThrowInfo *)&DAT_14147ad40);
              }
            }
          }
          else if (iVar13 < -0x3b9af8e0) {
            switch(iVar13) {
            case -0x3b9b23dd:
              pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd152:
              vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                        ((VideoStdVersionNotSupportedKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoStdVersionNotSupportedKHRError *)&local_198,
                                 (ThrowInfo *)&DAT_14147b1a0);
            case -0x3b9b23dc:
              pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd5a6:
              vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                        ((VideoProfileCodecNotSupportedKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoProfileCodecNotSupportedKHRError *)&local_198,
                                 (ThrowInfo *)&DAT_14147b150);
            case -0x3b9b23db:
              pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd5c8:
              vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                        ((VideoProfileFormatNotSupportedKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoProfileFormatNotSupportedKHRError *)&local_198,
                                 (ThrowInfo *)&DAT_14147b100);
            case -0x3b9b23da:
              pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd5ea:
              vk::VideoProfileOperationNotSupportedKHRError::
              VideoProfileOperationNotSupportedKHRError
                        ((VideoProfileOperationNotSupportedKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoProfileOperationNotSupportedKHRError *)&local_198,
                                 (ThrowInfo *)&DAT_14147b0b0);
            case -0x3b9b23d9:
              pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd60c:
              vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                        ((VideoPictureLayoutNotSupportedKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((VideoPictureLayoutNotSupportedKHRError *)&local_198,
                                 (ThrowInfo *)&DAT_14147b060);
            case -0x3b9b23d8:
              pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd62e:
              vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                        ((ImageUsageNotSupportedKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((ImageUsageNotSupportedKHRError *)&local_198,
                                 (ThrowInfo *)&DAT_14147b010);
            default:
              if (iVar13 == -0x3b9bd788) {
                pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd419:
                vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                          ((OutOfPoolMemoryError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((OutOfPoolMemoryError *)&local_198,(ThrowInfo *)&DAT_14147acf0);
              }
            }
          }
          else {
            if (iVar13 == -0x3b9af8e0) {
              pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd672:
              vk::InvalidShaderNVError::InvalidShaderNVError
                        ((InvalidShaderNVError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((InvalidShaderNVError *)&local_198,(ThrowInfo *)&DAT_14147afc0);
            }
            if (iVar13 == -0x3b9af4f9) {
              pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd293:
              vk::ValidationFailedError::ValidationFailedError
                        ((ValidationFailedError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((ValidationFailedError *)&local_198,(ThrowInfo *)&DAT_14147aca0);
            }
          }
        }
        else if (iVar13 < -1000000000) {
          if (iVar13 == -0x3b9ad5b9) {
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd37d:
            vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                      ((IncompatibleDisplayKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((IncompatibleDisplayKHRError *)&local_198,(ThrowInfo *)&DAT_14147af70
                              );
          }
          if (iVar13 == -0x3b9acdec) {
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd39f:
            vk::OutOfDateKHRError::OutOfDateKHRError((OutOfDateKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((OutOfDateKHRError *)&local_198,(ThrowInfo *)&DAT_14147af20);
          }
          if (iVar13 == -0x3b9aca01) {
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd1c5:
            vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                      ((NativeWindowInUseKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((NativeWindowInUseKHRError *)&local_198,(ThrowInfo *)&DAT_14147aed0);
          }
        }
        else {
          switch(iVar13) {
          case -0xd:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd0d1:
            vk::UnknownError::UnknownError((UnknownError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((UnknownError *)&local_198,(ThrowInfo *)&DAT_14147ac50);
          case -0xc:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd768:
            vk::FragmentedPoolError::FragmentedPoolError((FragmentedPoolError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((FragmentedPoolError *)&local_198,(ThrowInfo *)&DAT_14147ac00);
          case -0xb:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd78a:
            vk::FormatNotSupportedError::FormatNotSupportedError
                      ((FormatNotSupportedError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((FormatNotSupportedError *)&local_198,(ThrowInfo *)&DAT_14147abb0);
          case -10:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd7ac:
            vk::TooManyObjectsError::TooManyObjectsError((TooManyObjectsError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((TooManyObjectsError *)&local_198,(ThrowInfo *)&DAT_14147ab60);
          case -9:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd7ce:
            vk::IncompatibleDriverError::IncompatibleDriverError
                      ((IncompatibleDriverError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((IncompatibleDriverError *)&local_198,(ThrowInfo *)&DAT_14147ab10);
          case -8:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd7f0:
            vk::FeatureNotPresentError::FeatureNotPresentError
                      ((FeatureNotPresentError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((FeatureNotPresentError *)&local_198,(ThrowInfo *)&DAT_14147aac0);
          case -7:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd812:
            vk::ExtensionNotPresentError::ExtensionNotPresentError
                      ((ExtensionNotPresentError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((ExtensionNotPresentError *)&local_198,(ThrowInfo *)&DAT_14147aa70);
          case -6:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd834:
            vk::LayerNotPresentError::LayerNotPresentError
                      ((LayerNotPresentError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((LayerNotPresentError *)&local_198,(ThrowInfo *)&DAT_14147aa20);
          case -5:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd856:
            vk::MemoryMapFailedError::MemoryMapFailedError
                      ((MemoryMapFailedError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((MemoryMapFailedError *)&local_198,(ThrowInfo *)&DAT_14147a9d0);
          case -4:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd878:
            vk::DeviceLostError::DeviceLostError((DeviceLostError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((DeviceLostError *)&local_198,(ThrowInfo *)&DAT_14147a980);
          case -3:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd89a:
            vk::InitializationFailedError::InitializationFailedError
                      ((InitializationFailedError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((InitializationFailedError *)&local_198,(ThrowInfo *)&DAT_14147a930);
          case -2:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd8bc:
            vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                      ((OutOfDeviceMemoryError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((OutOfDeviceMemoryError *)&local_198,(ThrowInfo *)&DAT_14147a8e0);
          case -1:
            pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd8de:
            vk::OutOfHostMemoryError::OutOfHostMemoryError
                      ((OutOfHostMemoryError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((OutOfHostMemoryError *)&local_198,(ThrowInfo *)&DAT_14147a890);
          default:
            if (iVar13 == -1000000000) {
              pcVar23 = "vk::Device::getMemoryWin32HandleKHR";
LAB_1406fd3de:
              vk::SurfaceLostKHRError::SurfaceLostKHRError
                        ((SurfaceLostKHRError *)&local_198,pcVar23);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException((SurfaceLostKHRError *)&local_198,(ThrowInfo *)&DAT_14147ae80);
            }
          }
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x140) < DAT_1416f2950) &&
           (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
          _Init_thread_footer(&DAT_1416f2950);
        }
        local_1a0 = &PTR_vftable_1415056b0;
        plVar5 = &local_1a8;
        local_1a8._0_4_ = iVar13;
LAB_1406fd4c3:
        vk::SystemError::SystemError((SystemError *)&local_198,(undefined4 *)plVar5);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((SystemError *)&local_198,(ThrowInfo *)&DAT_14147b360);
      }
      plVar5[0x1f] = local_1c0;
    }
  }
  if (*(char *)((longlong)this + 0x600) != '\x01') {
LAB_1406fca28:
    *local_98 = plVar5;
    return local_98;
  }
  uVar19 = *param_2;
  if (uVar19 < 0x100001) {
    uVar24 = uVar19;
    if (0x400 < uVar19) {
      uVar24 = uVar19 >> 10;
    }
    pcVar23 = "B";
    if (0x400 < uVar19) {
      pcVar23 = "KB";
    }
  }
  else {
    uVar24 = uVar19 >> 0x14;
    pcVar23 = "MB";
  }
  FUN_1401e87c0(&local_198,1);
  puVar12 = &local_198.offset_0x8;
  uVar7 = FUN_1400e5ec0(puVar12,"Create buffer: ");
  if (0xf < param_2[5]) {
    puVar17 = (ulonglong *)param_2[2];
  }
  uVar7 = FUN_1400e73f0(uVar7,puVar17,param_2[4]);
  pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar7," Buf:0x");
  lVar15 = (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) =
       *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x800;
  pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,*p_Var18);
  pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9," Gpu:0x");
  lVar15 = (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) =
       *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x800;
  _Var10 = (**(code **)(*local_68 + 0x30))();
  pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,_Var10);
  pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,&DAT_141327652);
  lVar15 = (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) =
       *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x800;
  lVar15 = (**(code **)(*local_68 + 0x30))();
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,lVar15 + *param_2);
  if ((int)param_2[1] == 0) {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(puVar12," (size:");
    lVar15 = (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) =
         *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x200;
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar24);
    uVar7 = FUN_1400e5ec0(pbVar9,pcVar23);
    FUN_1400e5ec0(uVar7,")");
  }
  else {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(puVar12,&DAT_14136c3ce);
    lVar15 = (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) =
         *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x200;
    uVar19 = (ulonglong)(uint)param_2[1];
    if (uVar19 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *param_2;
      if (uVar11 >> 0x20 == 0) {
        uVar11 = (uVar11 & 0xffffffff) / uVar19;
      }
      else {
        uVar11 = uVar11 / uVar19;
      }
    }
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar11);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9," stride:");
    lVar15 = (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) =
         *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x200;
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,(uint)param_2[1]);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,"B size:");
    lVar15 = (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) =
         *(uint *)((longlong)&pbVar8[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x200;
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar24);
    uVar7 = FUN_1400e5ec0(pbVar9,pcVar23);
    FUN_1400e5ec0(uVar7,")");
  }
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_70 = 0xf;
  if (((local_110 & 0x22) == 2) || (uVar19 = *local_140, uVar19 == 0)) {
    if (((local_110 & 4) != 0) || (*local_148 == 0)) goto LAB_1406fcebf;
    puVar12 = &local_168;
    uVar19 = *local_148 + (longlong)*local_130;
  }
  else {
    puVar12 = local_160;
    if (uVar19 < local_118) {
      uVar19 = local_118;
    }
  }
  _Src = *(void **)*puVar12;
  if (_Src != (void *)0x0) {
    uVar19 = uVar19 - (longlong)_Src;
    if (uVar19 < 0x10) {
      local_78 = uVar19;
      memmove(&local_88,_Src,uVar19);
      *(undefined1 *)((longlong)&local_88 + uVar19) = 0;
    }
    else {
      FUN_1400069b0(&local_88,uVar19);
    }
  }
LAB_1406fcebf:
  FUN_140535c10(local_a0,&local_88);
  if (0xf < local_70) {
    uVar19 = local_70 + 1;
    lVar15 = local_88;
    if (0xfff < uVar19) {
      lVar15 = *(longlong *)(local_88 + -8);
      if (0x1f < (ulonglong)((local_88 + -8) - lVar15)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar19 = local_70 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar15,uVar19);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)&local_198.vftablePtr +
   (longlong)*(int *)(CONCAT44(local_198.vftablePtr._4_4_,local_198.vftablePtr._0_4_) + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar13 = *(int *)(CONCAT44(local_198.vftablePtr._4_4_,local_198.vftablePtr._0_4_) + 4);
  *(int *)((longlong)&local_1a0 + (longlong)iVar13 + 4) = iVar13 + -0x98;
  local_198.offset_0x10 =
       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(&local_198.offset_0x10);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_198.offset_0x10);
  std::ios_base::~ios_base(local_100);
  *local_98 = local_68;
  return local_98;
}

