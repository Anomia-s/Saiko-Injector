/**
 * Function: vk_queue_bindsparse
 * Address:  1406eef80
 * Signature: undefined vk_queue_bindsparse(void)
 * Body size: 4876 bytes
 */


void vk_queue_bindsparse(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  size_t _Size;
  undefined4 *puVar7;
  longlong *plVar8;
  ulonglong _Size_00;
  ulonglong uVar9;
  longlong lVar10;
  ushort *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  void *pvVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  int iVar23;
  longlong *plVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined8 in_stack_fffffffffffffd88;
  undefined4 uVar34;
  int local_258 [2];
  undefined **local_250;
  undefined8 local_248;
  longlong *local_240;
  ulonglong local_238;
  ulonglong local_230;
  uint local_228 [2];
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  uint local_1f8;
  undefined8 *local_1f0;
  uint local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 *local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *plStack_190;
  longlong *local_188;
  longlong local_178;
  longlong local_170;
  undefined4 *local_168;
  undefined4 *puStack_160;
  undefined4 *local_158;
  undefined4 local_150;
  uint local_14c;
  uint local_148;
  undefined4 local_144;
  int local_140;
  int local_13c;
  longlong *local_138;
  ulonglong local_130;
  longlong local_128;
  longlong local_120;
  void *local_118;
  void *pvStack_110;
  longlong local_108;
  void *local_f8;
  void *pvStack_f0;
  longlong local_e8;
  int local_dc;
  int local_d8;
  int local_d4;
  longlong *local_d0;
  undefined4 *local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  uint local_94;
  InvalidExternalHandleError local_90;
  undefined8 local_60;
  
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffd88 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_a0 = (longlong *)CONCAT44(local_a0._4_4_,param_4);
  local_168 = (undefined4 *)0x0;
  puStack_160 = (undefined4 *)0x0;
  local_158 = (undefined4 *)0x0;
  local_198 = (longlong *)0x0;
  plStack_190 = (longlong *)0x0;
  local_188 = (longlong *)0x0;
  local_170 = param_3;
  FUN_1406f6cf0(&local_150,*(undefined4 *)(param_2 + 0xb8));
  lVar10 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xd4);
  uVar3 = *(undefined4 *)(param_2 + 0xd8);
  uVar4 = *(undefined4 *)(param_2 + 0xd0);
  uVar5 = *(undefined4 *)(param_2 + 0xb4);
  uVar6 = *(undefined4 *)(param_2 + 0xb8);
  local_f8 = (void *)0x0;
  pvStack_f0 = (void *)0x0;
  local_e8 = 0;
  local_128 = param_2;
  local_c0 = param_1;
  (*DAT_1416b6e28)(*(undefined8 *)(lVar10 + 8),uVar6,uVar5,uVar4,CONCAT44(uVar34,uVar3),uVar2,
                   local_228,0);
  pvVar18 = pvStack_f0;
  uVar15 = (ulonglong)local_228[0];
  lVar26 = (longlong)pvStack_f0 - (longlong)local_f8 >> 2;
  lVar13 = uVar15 + lVar26 * 0x3333333333333333;
  if (uVar15 < (ulonglong)(lVar26 * -0x3333333333333333)) {
    pvStack_f0 = (void *)((longlong)local_f8 + uVar15 * 0x14);
  }
  else if (lVar13 != 0) {
    if ((ulonglong)((local_e8 - (longlong)local_f8 >> 2) * -0x3333333333333333) < uVar15) {
      FUN_140060680(&local_f8,uVar15,&local_90);
    }
    else {
      local_d0 = (longlong *)(lVar13 * 0x14);
      memset(pvStack_f0,0,(size_t)local_d0);
      pvStack_f0 = (void *)((longlong)pvVar18 + (longlong)local_d0);
    }
  }
  (*DAT_1416b6e28)(*(undefined8 *)(lVar10 + 8),uVar6,uVar5,uVar4,uVar3,uVar2,local_228,local_f8);
  lVar10 = local_c0;
  uVar15 = (ulonglong)local_228[0];
  uVar20 = ((longlong)pvStack_f0 - (longlong)local_f8 >> 2) * -0x3333333333333333;
  if (uVar15 <= uVar20 && uVar20 - uVar15 != 0) {
    pvStack_f0 = (void *)((longlong)local_f8 + uVar15 * 0x14);
  }
  lVar13 = *(longlong *)(local_c0 + 8);
  uVar28 = *(undefined8 *)(local_128 + 0x110);
  local_118 = (void *)0x0;
  pvStack_110 = (void *)0x0;
  local_108 = 0;
  (*DAT_1416b6e20)(*(undefined8 *)(lVar13 + 0x10),uVar28,local_228,0);
  pvVar18 = pvStack_110;
  uVar15 = (ulonglong)local_228[0];
  lVar27 = (longlong)pvStack_110 - (longlong)local_118 >> 4;
  lVar26 = uVar15 + lVar27 * 0x5555555555555555;
  if (uVar15 < (ulonglong)(lVar27 * -0x5555555555555555)) {
    pvStack_110 = (void *)((longlong)local_118 + uVar15 * 0x30);
  }
  else if (lVar26 != 0) {
    if ((ulonglong)((local_108 - (longlong)local_118 >> 4) * -0x5555555555555555) < uVar15) {
      FUN_140539900(&local_118,uVar15,&local_90);
    }
    else {
      _Size = lVar26 * 0x30;
      memset(pvStack_110,0,_Size);
      pvStack_110 = (void *)((longlong)pvVar18 + _Size);
      lVar10 = local_c0;
    }
  }
  (*DAT_1416b6e20)(*(undefined8 *)(lVar13 + 0x10),uVar28,local_228);
  uVar15 = (ulonglong)local_228[0];
  uVar20 = ((longlong)pvStack_110 - (longlong)local_118 >> 4) * -0x5555555555555555;
  if (uVar15 <= uVar20 && uVar20 - uVar15 != 0) {
    pvStack_110 = (void *)(uVar15 * 0x30 + (longlong)local_118);
  }
  if (local_f8 == pvStack_f0) {
    local_dc = 1;
    local_d8 = 1;
    local_d4 = 1;
    if (local_118 != pvStack_110) goto LAB_1406ef297;
LAB_1406ef2c7:
    local_178 = 0;
  }
  else {
    local_d4 = *(int *)((longlong)local_f8 + 4);
    local_d8 = *(int *)((longlong)local_f8 + 8);
    local_dc = *(int *)((longlong)local_f8 + 0xc);
    if (local_118 == pvStack_110) goto LAB_1406ef2c7;
LAB_1406ef297:
    local_178 = *(longlong *)((longlong)local_118 + 0x20);
  }
  local_230 = (ulonglong)local_a0 & 0xffffffff;
  local_c8 = (undefined4 *)0x0;
  plVar8 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  plVar16 = (longlong *)0x0;
  plVar24 = (longlong *)0x0;
  local_b0 = (undefined4 *)0x0;
  local_b8 = (undefined4 *)0x0;
  for (uVar15 = 0; uVar15 < local_230; uVar15 = uVar15 + 1) {
    lVar13 = *(longlong *)(local_170 + 0x20 + uVar15 * 0x28);
    if (lVar13 == 0) {
      local_120 = 0;
    }
    else {
      local_120 = *(longlong *)(lVar13 + 0x18);
    }
    local_138 = (longlong *)(local_170 + uVar15 * 0x28);
    local_14c = *(uint *)(local_170 + 0x18 + uVar15 * 0x28);
    uVar20 = 0;
    lVar13 = local_120;
    local_130 = uVar15;
    while (uVar25 = (uint)uVar20, uVar25 < local_14c) {
      lVar26 = uVar20 * 0x10;
      iVar23 = *(int *)(local_138[1] + lVar26);
      uVar1 = *(ushort *)(*local_138 + 2 + lVar26);
      local_d0 = plVar8;
      local_a0 = plVar24;
      local_94 = uVar25;
      if (iVar23 == 0) {
        if (lVar13 == 0) {
          uVar28 = 0;
        }
        else {
          uVar28 = *(undefined8 *)(local_138[2] + uVar20 * 8);
        }
        puVar11 = (ushort *)(*local_138 + lVar26);
        lVar26 = local_138[1] + lVar26;
        iVar29 = *(int *)(puVar11 + 2) * local_d4;
        iVar33 = *(int *)(puVar11 + 4) * local_d8;
        iVar23 = *(int *)(puVar11 + 6) * local_d8;
        iVar31 = *(int *)(lVar26 + 4) * local_d4;
        iVar30 = *(int *)(lVar26 + 8) * local_d8;
        iVar32 = *(int *)(lVar26 + 0xc) * local_dc;
        uVar19 = (uint)*puVar11;
        if (local_b0 == local_c8) {
          local_144 = local_150;
          local_b8 = local_168;
          local_c8 = (undefined4 *)((longlong)local_c8 - (longlong)local_168);
          uVar15 = (longlong)local_c8 >> 6;
          local_b0 = (undefined4 *)(uVar15 + 1);
          puVar12 = (undefined4 *)((uVar15 >> 1) + uVar15);
          if (puVar12 <= local_b0) {
            puVar12 = local_b0;
          }
          if (0x3ffffffffffffff - (uVar15 >> 1) < uVar15) {
            puVar12 = (undefined4 *)0x3ffffffffffffff;
          }
          local_148 = uVar19;
          if ((ulonglong)puVar12 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
            std::bad_array_new_length::bad_array_new_length();
          }
          local_238 = (longlong)puVar12 << 6;
          local_248 = uVar28;
          local_240 = plVar16;
          local_140 = iVar29;
          local_13c = iVar33;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else if (puVar12 < (undefined4 *)0x40) {
            puVar12 = (undefined4 *)FUN_140b65d30();
          }
          else {
            lVar10 = FUN_140b65d30(local_238 | 0x27);
            puVar12 = (undefined4 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)(puVar12 + -2) = lVar10;
          }
          puVar17 = local_b8;
          puVar21 = local_c8;
          lVar13 = local_120;
          *(undefined4 *)((longlong)puVar12 + (longlong)local_c8) = local_144;
          *(uint *)((longlong)(puVar12 + 1) + (longlong)local_c8) = local_148;
          *(uint *)((longlong)(puVar12 + 2) + (longlong)local_c8) = (uint)uVar1;
          *(int *)((longlong)(puVar12 + 3) + (longlong)local_c8) = local_140;
          *(int *)((longlong)(puVar12 + 4) + (longlong)local_c8) = local_13c;
          *(int *)((longlong)(puVar12 + 5) + (longlong)local_c8) = iVar23;
          *(int *)((longlong)(puVar12 + 6) + (longlong)local_c8) = iVar31;
          *(int *)((longlong)(puVar12 + 7) + (longlong)local_c8) = iVar30;
          *(int *)((longlong)(puVar12 + 8) + (longlong)local_c8) = iVar32;
          *(longlong *)((longlong)(puVar12 + 10) + (longlong)local_c8) = local_120;
          *(undefined8 *)((longlong)(puVar12 + 0xc) + (longlong)local_c8) = local_248;
          *(undefined4 *)((longlong)(puVar12 + 0xe) + (longlong)local_c8) = 0;
          memmove(puVar12,local_b8,(size_t)local_c8);
          uVar25 = local_94;
          puVar7 = local_b0;
          lVar10 = local_c0;
          uVar15 = local_130;
          if (puVar17 != (undefined4 *)0x0) {
            if ((undefined4 *)0xfff < puVar21) {
              if (0x1f < (ulonglong)
                         ((longlong)puVar17 + (-8 - (longlong)*(undefined4 **)(puVar17 + -2))))
              goto LAB_1406efb76;
              puVar21 = (undefined4 *)((ulonglong)local_c8 | 0x27);
              puVar17 = *(undefined4 **)(puVar17 + -2);
            }
            thunk_FUN_140b68ba8(puVar17,puVar21);
          }
          puStack_160 = puVar12 + (longlong)puVar7 * 0x10;
          local_158 = (undefined4 *)(local_238 + (longlong)puVar12);
          uVar20 = (ulonglong)(uVar25 + 1);
          plVar8 = local_d0;
          plVar16 = local_240;
          plVar24 = local_a0;
          local_168 = puVar12;
          local_c8 = local_158;
          local_b8 = puVar12;
          local_b0 = puStack_160;
        }
        else {
          *local_b0 = local_150;
          local_b0[1] = uVar19;
          local_b0[2] = (uint)uVar1;
          local_b0[3] = iVar29;
          local_b0[4] = iVar33;
          local_b0[5] = iVar23;
          local_b0[6] = iVar31;
          local_b0[7] = iVar30;
          local_b0[8] = iVar32;
          *(longlong *)(local_b0 + 10) = local_120;
          *(undefined8 *)(local_b0 + 0xc) = uVar28;
          local_b0[0xe] = 0;
          puStack_160 = puStack_160 + 0x10;
          uVar20 = (ulonglong)(uVar25 + 1);
          uVar15 = local_130;
          lVar13 = local_120;
          lVar10 = local_c0;
          local_b0 = puStack_160;
        }
      }
      else {
        if (lVar13 == 0) {
          local_a8 = (longlong *)0x0;
        }
        else {
          local_a8 = *(longlong **)(local_138[2] + uVar20 * 8);
        }
        lVar26 = ((ulonglong)uVar1 + 1) * local_178;
        uVar20 = (ulonglong)(uint)(iVar23 << 0x10);
        if (plVar16 == plVar8) {
          _Size_00 = (longlong)plVar8 - (longlong)plVar24;
          uVar9 = ((longlong)_Size_00 >> 3) * -0x3333333333333333;
          uVar15 = uVar9 + 1;
          uVar14 = 0x666666666666666 - (uVar9 >> 1);
          uVar22 = (uVar9 >> 1) + uVar9;
          if (uVar22 <= uVar15) {
            uVar22 = uVar15;
          }
          if (uVar14 <= uVar9 && uVar9 - uVar14 != 0) {
            uVar22 = 0x666666666666666;
          }
          if (0x666666666666666 < uVar22) {
                    /* WARNING: Subroutine does not return */
            std::bad_array_new_length::bad_array_new_length();
          }
          if (uVar22 == 0) {
            plVar24 = (longlong *)0x0;
          }
          else if (uVar22 < 0x67) {
            plVar24 = (longlong *)FUN_140b65d30(uVar22 * 0x28);
          }
          else {
            if (uVar22 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
              std::bad_array_new_length::bad_array_new_length();
            }
            lVar10 = FUN_140b65d30(uVar22 * 0x28 + 0x27);
            plVar24 = (longlong *)(lVar10 + 0x27U & 0xffffffffffffffe0);
            plVar24[-1] = lVar10;
          }
          plVar8 = local_a0;
          *(longlong *)((longlong)plVar24 + _Size_00) = lVar26;
          *(ulonglong *)((longlong)plVar24 + _Size_00 + 8) = uVar20;
          *(longlong *)((longlong)plVar24 + _Size_00 + 0x10) = local_120;
          *(longlong **)((longlong)plVar24 + _Size_00 + 0x18) = local_a8;
          *(undefined4 *)((longlong)plVar24 + _Size_00 + 0x20) = 0;
          memmove(plVar24,local_a0,_Size_00);
          uVar25 = local_94;
          if (plVar8 != (longlong *)0x0) {
            plVar16 = plVar8;
            if (0xfff < _Size_00) {
              plVar16 = (longlong *)plVar8[-1];
              if (0x1f < (ulonglong)((longlong)plVar8 + (-8 - (longlong)plVar16)))
              goto LAB_1406efb76;
              _Size_00 = _Size_00 + 0x27;
            }
            thunk_FUN_140b68ba8(plVar16,_Size_00);
          }
          plStack_190 = plVar24 + uVar15 * 5;
          local_188 = plVar24 + uVar22 * 5;
          uVar20 = (ulonglong)(uVar25 + 1);
          plVar8 = local_188;
          plVar16 = plStack_190;
          uVar15 = local_130;
          lVar13 = local_120;
          lVar10 = local_c0;
          local_198 = plVar24;
          local_a8 = local_188;
        }
        else {
          *plVar16 = lVar26;
          plVar16[1] = uVar20;
          plVar16[2] = lVar13;
          plVar16[3] = (longlong)local_a8;
          *(undefined4 *)(plVar16 + 4) = 0;
          plStack_190 = plStack_190 + 5;
          uVar20 = (ulonglong)(uVar25 + 1);
          plVar16 = plStack_190;
          local_a8 = plVar8;
        }
      }
    }
  }
  local_228[0] = 7;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f0 = (undefined8 *)0x0;
  local_1e0 = (undefined8 *)0x0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = (undefined4 *)0x0;
  if (local_b8 != local_b0) {
    local_1c8 = *(undefined8 *)(local_128 + 0x110);
    local_1c0 = (undefined4)((ulonglong)((longlong)local_b0 - (longlong)local_b8) >> 6);
    local_1b8 = local_b8;
    local_1e0 = &local_1c8;
  }
  local_1e8 = (uint)(local_b8 != local_b0);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (longlong *)0x0;
  if (plVar24 != plVar16) {
    local_1b0 = *(undefined8 *)(local_128 + 0x110);
    local_1a8 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar24) >> 3) * -0x33333333;
    local_1f0 = &local_1b0;
    local_1a0 = plVar24;
  }
  local_1f8 = (uint)(plVar24 != plVar16);
  iVar23 = (*DAT_1416b6e30)(*(undefined8 *)(lVar10 + 0x10),1);
  puVar12 = local_b8;
  if (iVar23 != 0) {
    if (iVar23 < -0x3b9ad5b9) {
      if (iVar23 < -0x3b9bd788) {
        if (iVar23 < -0x3b9eae18) {
          if (iVar23 < -0x3b9f59f8) {
            if (iVar23 == -0x3ba228b8) {
              vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                        ((NotEnoughSpaceKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b330);
            }
            if (iVar23 == -0x3b9ff250) {
              vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                        ((CompressionExhaustedEXTError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b2e0);
            }
          }
          else {
            if (iVar23 == -0x3b9f59f8) {
              vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                        ((InvalidVideoStdParametersKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b290);
            }
            if (iVar23 == -0x3b9eb5e8) {
              vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                        ((InvalidOpaqueCaptureAddressError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ade0);
            }
          }
        }
        else if (iVar23 < -0x3b9d3ee8) {
          if (iVar23 == -0x3b9eae18) {
            vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                      ((FullScreenExclusiveModeLostEXTError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b240);
          }
          if (iVar23 == -0x3b9d71b1) {
            vk::NotPermittedError::NotPermittedError
                      ((NotPermittedError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ae30);
          }
        }
        else {
          if (iVar23 == -0x3b9d3ee8) {
            vk::FragmentationError::FragmentationError
                      ((FragmentationError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ad90);
          }
          if (iVar23 == -0x3b9d3330) {
            vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
            InvalidDrmFormatModifierPlaneLayoutEXTError
                      ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_90,
                       "vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b1f0);
          }
          if (iVar23 == -0x3b9be343) {
            vk::InvalidExternalHandleError::InvalidExternalHandleError
                      (&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ad40);
          }
        }
      }
      else if (iVar23 < -0x3b9af8e0) {
        switch(iVar23) {
        case -0x3b9b23dd:
          vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                    ((VideoStdVersionNotSupportedKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b1a0);
        case -0x3b9b23dc:
          vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                    ((VideoProfileCodecNotSupportedKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b150);
        case -0x3b9b23db:
          vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                    ((VideoProfileFormatNotSupportedKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b100);
        case -0x3b9b23da:
          vk::VideoProfileOperationNotSupportedKHRError::VideoProfileOperationNotSupportedKHRError
                    ((VideoProfileOperationNotSupportedKHRError *)&local_90,"vk::Queue::bindSparse")
          ;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b0b0);
        case -0x3b9b23d9:
          vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                    ((VideoPictureLayoutNotSupportedKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b060);
        case -0x3b9b23d8:
          vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                    ((ImageUsageNotSupportedKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b010);
        }
        if (iVar23 == -0x3b9bd788) {
          vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                    ((OutOfPoolMemoryError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147acf0);
        }
      }
      else {
        if (iVar23 == -0x3b9af8e0) {
          vk::InvalidShaderNVError::InvalidShaderNVError
                    ((InvalidShaderNVError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147afc0);
        }
        if (iVar23 == -0x3b9af4f9) {
          vk::ValidationFailedError::ValidationFailedError
                    ((ValidationFailedError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aca0);
        }
      }
    }
    else if (iVar23 < -1000000000) {
      if (iVar23 == -0x3b9ad5b9) {
        vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                  ((IncompatibleDisplayKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147af70);
      }
      if (iVar23 == -0x3b9acdec) {
        vk::OutOfDateKHRError::OutOfDateKHRError
                  ((OutOfDateKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147af20);
      }
      if (iVar23 == -0x3b9aca01) {
        vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                  ((NativeWindowInUseKHRError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aed0);
      }
    }
    else {
      switch(iVar23) {
      case -0xd:
        vk::UnknownError::UnknownError((UnknownError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ac50);
      case -0xc:
        vk::FragmentedPoolError::FragmentedPoolError
                  ((FragmentedPoolError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ac00);
      case -0xb:
        vk::FormatNotSupportedError::FormatNotSupportedError
                  ((FormatNotSupportedError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147abb0);
      case -10:
        vk::TooManyObjectsError::TooManyObjectsError
                  ((TooManyObjectsError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ab60);
      case -9:
        vk::IncompatibleDriverError::IncompatibleDriverError
                  ((IncompatibleDriverError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ab10);
      case -8:
        vk::FeatureNotPresentError::FeatureNotPresentError
                  ((FeatureNotPresentError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aac0);
      case -7:
        vk::ExtensionNotPresentError::ExtensionNotPresentError
                  ((ExtensionNotPresentError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aa70);
      case -6:
        vk::LayerNotPresentError::LayerNotPresentError
                  ((LayerNotPresentError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aa20);
      case -5:
        vk::MemoryMapFailedError::MemoryMapFailedError
                  ((MemoryMapFailedError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a9d0);
      case -4:
        vk::DeviceLostError::DeviceLostError((DeviceLostError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a980);
      case -3:
        vk::InitializationFailedError::InitializationFailedError
                  ((InitializationFailedError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a930);
      case -2:
        vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                  ((OutOfDeviceMemoryError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a8e0);
      case -1:
        vk::OutOfHostMemoryError::OutOfHostMemoryError
                  ((OutOfHostMemoryError *)&local_90,"vk::Queue::bindSparse");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a890);
      }
      if (iVar23 == -1000000000) {
        vk::SurfaceLostKHRError::SurfaceLostKHRError
                  ((SurfaceLostKHRError *)&local_90,"vk::Queue::bindSparse");
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
    local_250 = &PTR_vftable_1415056b0;
    local_258[0] = iVar23;
    FUN_1405394b0(&local_90.vftablePtr,local_258,"vk::Queue::bindSparse");
    local_90.vftablePtr =
         (InvalidExternalHandleError_vftable_for_Error *)&vk::SystemError::vftable_for_Error;
    local_90.vftablePtr =
         (InvalidExternalHandleError_vftable_for_system_error *)
         &vk::SystemError::vftable_for_system_error;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b360);
  }
  if (local_118 != (void *)0x0) {
    uVar15 = local_108 - (longlong)local_118;
    pvVar18 = local_118;
    if (0xfff < uVar15) {
      pvVar18 = *(void **)((longlong)local_118 + -8);
      if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)pvVar18))) goto LAB_1406efb76;
      uVar15 = uVar15 + 0x27;
    }
    thunk_FUN_140b68ba8(pvVar18,uVar15);
  }
  if (local_f8 != (void *)0x0) {
    uVar15 = local_e8 - (longlong)local_f8;
    pvVar18 = local_f8;
    if (0xfff < uVar15) {
      pvVar18 = *(void **)((longlong)local_f8 + -8);
      if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pvVar18))) goto LAB_1406efb76;
      uVar15 = uVar15 + 0x27;
    }
    thunk_FUN_140b68ba8(pvVar18,uVar15);
  }
  if (plVar24 != (longlong *)0x0) {
    uVar15 = (longlong)local_a8 - (longlong)plVar24;
    plVar8 = plVar24;
    if (0xfff < uVar15) {
      plVar8 = (longlong *)plVar24[-1];
      if (0x1f < (ulonglong)((longlong)plVar24 + (-8 - (longlong)plVar8))) goto LAB_1406efb76;
      uVar15 = uVar15 + 0x27;
    }
    thunk_FUN_140b68ba8(plVar8,uVar15);
    puVar12 = local_168;
  }
  if (puVar12 != (undefined4 *)0x0) {
    uVar15 = (longlong)local_158 - (longlong)puVar12;
    puVar21 = puVar12;
    if (0xfff < uVar15) {
      puVar21 = *(undefined4 **)(puVar12 + -2);
      if (0x1f < (ulonglong)((longlong)puVar12 + (-8 - (longlong)puVar21))) {
LAB_1406efb76:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar15 = uVar15 | 0x27;
    }
    thunk_FUN_140b68ba8(puVar21,uVar15);
  }
  return;
}

