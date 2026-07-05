/**
 * Function: vk_device_createaccelerationstructurekhr
 * Address:  14070b200
 * Signature: undefined8 * __thiscall vk_device_createaccelerationstructurekhr(void * this, undefined8 * param_1, undefined8 * param_2)
 * Body size: 5008 bytes
 */


undefined8 * __thiscall
vk_device_createaccelerationstructurekhr(void *this,undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  size_t _Size;
  undefined4 local_258 [2];
  undefined8 local_250;
  LogicError_vftable0 *pLStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230 [2];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  int local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  int local_1e0 [2];
  undefined **local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  LogicError_vftable0 *local_1a8;
  uint local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  LogicError_vftable0 *local_178;
  exception_vftable *local_170;
  longlong lStack_168;
  undefined8 local_160;
  ulonglong uStack_158;
  ulonglong local_150;
  undefined5 local_148;
  undefined4 uStack_143;
  undefined1 uStack_13f;
  undefined2 uStack_13e;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_124;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong local_f8;
  undefined4 *puStack_f0;
  longlong local_e8;
  undefined4 *local_d8;
  undefined4 *puStack_d0;
  longlong local_c8;
  undefined4 local_b4;
  longlong *local_b0;
  longlong local_a8;
  undefined4 *puStack_a0;
  undefined4 *local_98;
  InvalidExternalHandleError local_90;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  puVar4 = (undefined8 *)FUN_140b65d30(0xb0);
  *(undefined4 *)(puVar4 + 1) = 1;
  *puVar4 = &nvrhi::vulkan::AccelStruct::vftable;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  *(undefined1 *)(puVar4 + 0xc) = 0;
  puVar4[0x10] = 0xf;
  puVar10 = puVar4 + 0x11;
  *(undefined2 *)(puVar4 + 0x11) = 1;
  *(undefined1 *)((longlong)puVar4 + 0x8a) = 0;
  *(undefined2 *)(puVar4 + 0x12) = 0;
  puVar4[0x13] = 0xffffffffffffffff;
  puVar4[0x14] = 0;
  puVar4[0x15] = (longlong)this + 0x90;
  puVar4[8] = *param_2;
  local_b0 = this;
  if (puVar4 + 8 == param_2) {
    *(undefined1 *)(puVar4 + 0xc) = *(undefined1 *)(param_2 + 4);
  }
  else {
    _Src = (void *)param_2[1];
    _Size = param_2[2] - (longlong)_Src;
    local_188 = param_1;
    local_180 = puVar10;
    if (_Size == 0) {
      uVar6 = 0xf;
      lVar11 = 0;
    }
    else {
      FUN_1406eca80(puVar4 + 9,((longlong)_Size >> 5) * -0x3333333333333333);
      _Dst = (void *)puVar4[9];
      memmove(_Dst,_Src,_Size);
      lVar11 = (longlong)_Dst + _Size;
      uVar6 = puVar4[0x10];
    }
    puVar4[10] = lVar11;
    *(undefined1 *)(puVar4 + 0xc) = *(undefined1 *)(param_2 + 4);
    uVar12 = param_2[7];
    if ((ulonglong)param_2[8] < 0x10) {
      puVar10 = param_2 + 5;
    }
    else {
      puVar10 = (undefined8 *)param_2[5];
    }
    if (uVar6 < uVar12) {
      FUN_1400069b0(puVar4 + 0xd,uVar12);
      puVar10 = local_180;
      param_1 = local_188;
    }
    else {
      puVar16 = puVar4 + 0xd;
      if (0xf < uVar6) {
        puVar16 = (undefined8 *)puVar4[0xd];
      }
      puVar4[0xf] = uVar12;
      memmove(puVar16,puVar10,uVar12);
      *(undefined1 *)((longlong)puVar16 + uVar12) = 0;
      puVar10 = local_180;
      param_1 = local_188;
    }
  }
  *(undefined2 *)puVar10 = *(undefined2 *)(param_2 + 9);
  *(undefined1 *)((longlong)puVar10 + 2) = *(undefined1 *)((longlong)param_2 + 0x4a);
  *(byte *)(puVar4 + 0x12) = *(byte *)(param_2 + 4) & 1;
  local_118 = 0;
  lStack_110 = 0;
  local_108 = 0;
  local_f8 = 0;
  puStack_f0 = (undefined4 *)0x0;
  local_e8 = 0;
  local_d8 = (undefined4 *)0x0;
  puStack_d0 = (undefined4 *)0x0;
  local_c8 = 0;
  local_a8 = 0;
  puStack_a0 = (undefined4 *)0x0;
  local_98 = (undefined4 *)0x0;
  local_230[0] = 0x3b9d13f0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  if (*(char *)((longlong)param_2 + 0x49) == '\x01') {
    local_178._0_4_ = 0x3b9d13f6;
    local_170 = (exception_vftable *)0x0;
    local_160 = CONCAT44(local_160._4_4_,0x3b9d13f5);
    uStack_158 = 0;
    local_150 = local_150 & 0xffffffff00000000;
    local_148 = 0;
    uStack_143 = 0;
    uStack_13f = 0;
    uStack_13e = 0;
    uStack_13c = 0;
    local_138 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    lStack_168 = CONCAT44(lStack_168._4_4_,2);
    FUN_1407164b0(&local_118,0,&local_178);
    *(undefined4 *)(local_118 + 0x18) = 0x3b9d13f4;
    *(undefined8 *)(local_118 + 0x20) = 0;
    *(undefined4 *)(local_118 + 0x28) = 0;
    *(undefined8 *)(local_118 + 0x30) = 0;
    local_178 = (LogicError_vftable0 *)CONCAT44(local_178._4_4_,*(undefined4 *)param_2);
    if (puStack_a0 == local_98) {
      FUN_1401e93d0(&local_a8,puStack_a0,&local_178);
    }
    else {
      *puStack_a0 = *(undefined4 *)param_2;
      puStack_a0 = puStack_a0 + 1;
    }
    uVar2 = 0;
  }
  else {
    if (param_2[2] - param_2[1] == 0) {
      uVar6 = 0;
    }
    else {
      FUN_140716690(&local_118,((longlong)(param_2[2] - param_2[1]) >> 5) * -0x3333333333333333,
                    &local_178);
      uVar6 = ((longlong)(param_2[2] - param_2[1]) >> 5) * -0x3333333333333333;
    }
    lVar11 = (longlong)puStack_f0 - local_f8 >> 3;
    uVar12 = lVar11 * -0x71c71c71c71c71c7;
    if (uVar6 < uVar12) {
      puStack_f0 = (undefined4 *)(local_f8 + uVar6 * 0x48);
    }
    else if (uVar12 < uVar6) {
      if ((ulonglong)((local_e8 - local_f8 >> 3) * -0x71c71c71c71c71c7) < uVar6) {
        FUN_140716920(&local_f8,uVar6,&local_178);
      }
      else {
        uVar9 = uVar6 + lVar11 * 0x71c71c71c71c71c7;
        if (uVar9 != 0) {
          if ((uVar9 & 3) != 0) {
            uVar15 = 0;
            do {
              *puStack_f0 = 0x3ba0d4e9;
              *(undefined8 *)(puStack_f0 + 2) = 0;
              puStack_f0[4] = 0;
              *(undefined8 *)(puStack_f0 + 6) = 0;
              *(undefined8 *)(puStack_f0 + 8) = 0;
              *(undefined8 *)(puStack_f0 + 10) = 0;
              *(undefined8 *)(puStack_f0 + 0xc) = 0;
              *(undefined8 *)(puStack_f0 + 0xe) = 0;
              *(undefined8 *)(puStack_f0 + 0x10) = 0;
              puStack_f0 = puStack_f0 + 0x12;
              uVar15 = uVar15 + 1;
            } while ((uVar9 & 3) != uVar15);
            uVar9 = uVar9 - uVar15;
          }
          if (uVar12 - uVar6 < 0xfffffffffffffffd) {
            do {
              *puStack_f0 = 0x3ba0d4e9;
              *(undefined8 *)(puStack_f0 + 2) = 0;
              puStack_f0[4] = 0;
              *(undefined8 *)(puStack_f0 + 6) = 0;
              *(undefined8 *)(puStack_f0 + 8) = 0;
              *(undefined8 *)(puStack_f0 + 10) = 0;
              *(undefined8 *)(puStack_f0 + 0xc) = 0;
              *(undefined8 *)(puStack_f0 + 0xe) = 0;
              *(undefined8 *)(puStack_f0 + 0x10) = 0;
              puStack_f0[0x12] = 0x3ba0d4e9;
              *(undefined8 *)(puStack_f0 + 0x14) = 0;
              puStack_f0[0x16] = 0;
              *(undefined8 *)(puStack_f0 + 0x18) = 0;
              *(undefined8 *)(puStack_f0 + 0x1a) = 0;
              *(undefined8 *)(puStack_f0 + 0x1c) = 0;
              *(undefined8 *)(puStack_f0 + 0x1e) = 0;
              *(undefined8 *)(puStack_f0 + 0x20) = 0;
              *(undefined8 *)(puStack_f0 + 0x22) = 0;
              puStack_f0[0x24] = 0x3ba0d4e9;
              *(undefined8 *)(puStack_f0 + 0x26) = 0;
              puStack_f0[0x28] = 0;
              *(undefined8 *)(puStack_f0 + 0x2a) = 0;
              *(undefined8 *)(puStack_f0 + 0x2c) = 0;
              *(undefined8 *)(puStack_f0 + 0x2e) = 0;
              *(undefined8 *)(puStack_f0 + 0x30) = 0;
              *(undefined8 *)(puStack_f0 + 0x32) = 0;
              *(undefined8 *)(puStack_f0 + 0x34) = 0;
              puStack_f0[0x36] = 0x3ba0d4e9;
              *(undefined8 *)(puStack_f0 + 0x38) = 0;
              puStack_f0[0x3a] = 0;
              *(undefined8 *)(puStack_f0 + 0x3c) = 0;
              *(undefined8 *)(puStack_f0 + 0x3e) = 0;
              *(undefined8 *)(puStack_f0 + 0x40) = 0;
              *(undefined8 *)(puStack_f0 + 0x42) = 0;
              *(undefined8 *)(puStack_f0 + 0x44) = 0;
              *(undefined8 *)(puStack_f0 + 0x46) = 0;
              puStack_f0 = puStack_f0 + 0x48;
              uVar9 = uVar9 - 4;
            } while (uVar9 != 0);
          }
        }
      }
    }
    lVar11 = (longlong)(param_2[2] - param_2[1]) >> 5;
    uVar6 = lVar11 * -0x3333333333333333;
    lVar13 = (longlong)puStack_d0 - (longlong)local_d8 >> 5;
    if (uVar6 < (ulonglong)(lVar13 * -0x5555555555555555)) {
      puStack_d0 = local_d8 + lVar11 * -0xcccccccccccccc8;
    }
    else if (uVar6 + lVar13 * 0x5555555555555555 != 0) {
      lVar11 = local_c8 - (longlong)local_d8 >> 5;
      if (uVar6 < (ulonglong)(lVar11 * -0x5555555555555555) ||
          uVar6 + lVar11 * 0x5555555555555555 == 0) {
        uVar12 = uVar6 + lVar13 * 0x5555555555555555;
        if (uVar12 != 0) {
          puVar7 = local_d8;
          if ((uVar12 & 1) != 0) {
            *puStack_d0 = 0x3ba155d1;
            *(undefined8 *)(puStack_d0 + 2) = 0;
            puStack_d0[4] = 0;
            *(undefined8 *)(puStack_d0 + 6) = 0;
            *(undefined8 *)(puStack_d0 + 8) = 0;
            puStack_d0[10] = 0;
            *(undefined8 *)(puStack_d0 + 0xc) = 0;
            *(undefined8 *)(puStack_d0 + 0xe) = 0;
            puStack_d0[0x10] = 0;
            *(undefined8 *)(puStack_d0 + 0x12) = 0;
            *(undefined8 *)(puStack_d0 + 0x14) = 0;
            *(undefined8 *)(puStack_d0 + 0x16) = 0;
            puStack_d0 = puStack_d0 + 0x18;
            uVar12 = uVar12 - 1;
            puVar7 = puStack_d0;
          }
          puVar8 = puStack_d0;
          uVar6 = uVar6 - (lVar13 * -0x5555555555555555 + 1U);
          while (puStack_d0 = puVar7, uVar6 != 0) {
            *puVar8 = 0x3ba155d1;
            *(undefined8 *)(puVar8 + 2) = 0;
            puVar8[4] = 0;
            *(undefined8 *)(puVar8 + 6) = 0;
            *(undefined8 *)(puVar8 + 8) = 0;
            puVar8[10] = 0;
            *(undefined8 *)(puVar8 + 0xc) = 0;
            *(undefined8 *)(puVar8 + 0xe) = 0;
            puVar8[0x10] = 0;
            *(undefined8 *)(puVar8 + 0x12) = 0;
            *(undefined8 *)(puVar8 + 0x14) = 0;
            *(undefined8 *)(puVar8 + 0x16) = 0;
            puVar8[0x18] = 0x3ba155d1;
            *(undefined8 *)(puVar8 + 0x1a) = 0;
            puVar8[0x1c] = 0;
            *(undefined8 *)(puVar8 + 0x1e) = 0;
            *(undefined8 *)(puVar8 + 0x20) = 0;
            puVar8[0x22] = 0;
            *(undefined8 *)(puVar8 + 0x24) = 0;
            *(undefined8 *)(puVar8 + 0x26) = 0;
            puVar8[0x28] = 0;
            *(undefined8 *)(puVar8 + 0x2a) = 0;
            *(undefined8 *)(puVar8 + 0x2c) = 0;
            *(undefined8 *)(puVar8 + 0x2e) = 0;
            puVar8 = puVar8 + 0x30;
            uVar12 = uVar12 - 2;
            puVar7 = puVar8;
            uVar6 = uVar12;
          }
        }
      }
      else {
        FUN_140716be0(&local_d8,uVar6,&local_178);
      }
    }
    lVar11 = (longlong)(param_2[2] - param_2[1]) >> 5;
    uVar6 = lVar11 * -0x3333333333333333;
    uVar12 = (longlong)puStack_a0 - local_a8 >> 2;
    lVar13 = uVar6 - uVar12;
    if (uVar6 < uVar12) {
      puStack_a0 = (undefined4 *)(local_a8 + lVar11 * 0x3333333333333334);
    }
    else if (lVar13 != 0) {
      uVar12 = (longlong)local_98 - local_a8 >> 2;
      if (uVar6 < uVar12 || uVar6 - uVar12 == 0) {
        puVar7 = puStack_a0 + lVar13;
        memset(puStack_a0,0,lVar13 * 4);
        puStack_a0 = puVar7;
      }
      else {
        FUN_140060a90(&local_a8,uVar6,&local_178);
      }
    }
    for (uVar6 = 0;
        uVar6 < (ulonglong)(((longlong)(param_2[2] - param_2[1]) >> 5) * -0x3333333333333333);
        uVar6 = uVar6 + 1) {
      unsupported_lss_primitive_format_type
                (param_2[1] + uVar6 * 0xa0,uVar6 * 0x60 + local_118,uVar6 * 0x48 + local_f8,
                 local_d8 + uVar6 * 0x18,uVar6 * 4 + local_a8,0,(longlong)this + 0x90,0,0);
    }
    uVar2 = 1;
  }
  uStack_220 = CONCAT44(uStack_220._4_4_,uVar2);
  local_218 = 0;
  local_200 = (int)((ulonglong)(lStack_110 - local_118) >> 5) * -0x55555555;
  local_1f8 = local_118;
  FUN_1406f2670(&local_b4,*(undefined1 *)(param_2 + 4));
  uStack_220 = CONCAT44(local_b4,(undefined4)uStack_220);
  if (local_200 != (int)((ulonglong)((longlong)puStack_a0 - local_a8) >> 2)) {
    local_178 = (LogicError_vftable0 *)&vk::Error::vftable;
    local_170 = &std::exception::vftable;
    lStack_168 = 0;
    local_160 = 0;
    local_1d0 = (longlong *)0x14132da36;
    local_1c8 = CONCAT71(local_1c8._1_7_,1);
    __std_exception_copy(&local_1d0,&lStack_168);
    local_178 = &vk::LogicError::vftable;
    local_170 = (exception_vftable *)&vk::LogicError::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_178,(ThrowInfo *)&DAT_1414a94d8);
  }
  local_258[0] = 0x3b9d1404;
  local_250 = 0;
  pLStack_248 = (LogicError_vftable0 *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  (*DAT_1416b7a18)(local_b0[0x14],1,local_230,local_a8,local_258);
  local_160 = 0;
  uStack_158 = 0;
  local_170 = (exception_vftable *)0x0;
  lStack_168 = 0;
  local_150 = 0xf;
  local_148 = 0;
  uStack_143 = 0;
  uStack_13f = 0;
  uStack_13e = 0;
  uStack_13c._0_1_ = 0;
  local_138 = CONCAT26(local_138._6_2_,1);
  uStack_130 = 0;
  local_178 = pLStack_248;
  plVar14 = param_2 + 5;
  if (&lStack_168 != plVar14) {
    uVar6 = param_2[7];
    if (0xf < (ulonglong)param_2[8]) {
      plVar14 = (longlong *)param_2[5];
    }
    if (uVar6 < 0x10) {
      uStack_158 = uVar6;
      memmove(&lStack_168,plVar14,uVar6);
      *(undefined1 *)((longlong)&lStack_168 + uVar6) = 0;
    }
    else {
      FUN_1400069b0(&lStack_168,uVar6);
    }
  }
  uVar2 = 0x80000;
  if (*(char *)((longlong)param_2 + 0x49) != '\0') {
    uVar2 = 0x10000;
  }
  local_138._0_5_ = CONCAT14(1,uVar2);
  uStack_13f = 1;
  uStack_13c = CONCAT31(uStack_13c._1_3_,*(undefined1 *)((longlong)param_2 + 0x4a));
  (**(code **)(*local_b0 + 0x88))(local_b0,&local_1d0,&local_178);
  plVar1 = local_1d0;
  plVar17 = puVar4 + 2;
  local_1d0 = (longlong *)0x0;
  plVar14 = (longlong *)*plVar17;
  *plVar17 = (longlong)plVar1;
  if ((plVar14 != (longlong *)0x0) &&
     ((**(code **)(*plVar14 + 0x10))(), plVar14 = local_1d0, local_1d0 != (longlong *)0x0)) {
    local_1d0 = (longlong *)0x0;
    (**(code **)(*plVar14 + 0x10))();
  }
  local_1a0 = *(byte *)((longlong)param_2 + 0x49) ^ 1;
  local_1b8 = *(undefined8 *)(*plVar17 + 0x80);
  local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,0x3b9d1401);
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b0 = 0;
  local_1a8 = pLStack_248;
  local_198 = 0;
  local_190 = 0;
  iVar3 = (*DAT_1416b79a0)(local_b0[0x14],&local_1d0);
  if (iVar3 != 0) {
    if (iVar3 < -0x3b9ad5b9) {
      if (iVar3 < -0x3b9bd788) {
        if (iVar3 < -0x3b9eae18) {
          if (iVar3 < -0x3b9f59f8) {
            if (iVar3 == -0x3ba228b8) {
              vk::NotEnoughSpaceKHRError::NotEnoughSpaceKHRError
                        ((NotEnoughSpaceKHRError *)&local_90,
                         "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b330);
            }
            if (iVar3 == -0x3b9ff250) {
              vk::CompressionExhaustedEXTError::CompressionExhaustedEXTError
                        ((CompressionExhaustedEXTError *)&local_90,
                         "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b2e0);
            }
          }
          else {
            if (iVar3 == -0x3b9f59f8) {
              vk::InvalidVideoStdParametersKHRError::InvalidVideoStdParametersKHRError
                        ((InvalidVideoStdParametersKHRError *)&local_90,
                         "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b290);
            }
            if (iVar3 == -0x3b9eb5e8) {
              vk::InvalidOpaqueCaptureAddressError::InvalidOpaqueCaptureAddressError
                        ((InvalidOpaqueCaptureAddressError *)&local_90,
                         "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ade0);
            }
          }
        }
        else if (iVar3 < -0x3b9d3ee8) {
          if (iVar3 == -0x3b9eae18) {
            vk::FullScreenExclusiveModeLostEXTError::FullScreenExclusiveModeLostEXTError
                      ((FullScreenExclusiveModeLostEXTError *)&local_90,
                       "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b240);
          }
          if (iVar3 == -0x3b9d71b1) {
            vk::NotPermittedError::NotPermittedError
                      ((NotPermittedError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ae30);
          }
        }
        else {
          if (iVar3 == -0x3b9d3ee8) {
            vk::FragmentationError::FragmentationError
                      ((FragmentationError *)&local_90,"vk::Device::createAccelerationStructureKHR")
            ;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ad90);
          }
          if (iVar3 == -0x3b9d3330) {
            vk::InvalidDrmFormatModifierPlaneLayoutEXTError::
            InvalidDrmFormatModifierPlaneLayoutEXTError
                      ((InvalidDrmFormatModifierPlaneLayoutEXTError *)&local_90,
                       "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b1f0);
          }
          if (iVar3 == -0x3b9be343) {
            vk::InvalidExternalHandleError::InvalidExternalHandleError
                      (&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ad40);
          }
        }
      }
      else if (iVar3 < -0x3b9af8e0) {
        switch(iVar3) {
        case -0x3b9b23dd:
          vk::VideoStdVersionNotSupportedKHRError::VideoStdVersionNotSupportedKHRError
                    ((VideoStdVersionNotSupportedKHRError *)&local_90,
                     "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b1a0);
        case -0x3b9b23dc:
          vk::VideoProfileCodecNotSupportedKHRError::VideoProfileCodecNotSupportedKHRError
                    ((VideoProfileCodecNotSupportedKHRError *)&local_90,
                     "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b150);
        case -0x3b9b23db:
          vk::VideoProfileFormatNotSupportedKHRError::VideoProfileFormatNotSupportedKHRError
                    ((VideoProfileFormatNotSupportedKHRError *)&local_90,
                     "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b100);
        case -0x3b9b23da:
          vk::VideoProfileOperationNotSupportedKHRError::VideoProfileOperationNotSupportedKHRError
                    ((VideoProfileOperationNotSupportedKHRError *)&local_90,
                     "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b0b0);
        case -0x3b9b23d9:
          vk::VideoPictureLayoutNotSupportedKHRError::VideoPictureLayoutNotSupportedKHRError
                    ((VideoPictureLayoutNotSupportedKHRError *)&local_90,
                     "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b060);
        case -0x3b9b23d8:
          vk::ImageUsageNotSupportedKHRError::ImageUsageNotSupportedKHRError
                    ((ImageUsageNotSupportedKHRError *)&local_90,
                     "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b010);
        }
        if (iVar3 == -0x3b9bd788) {
          vk::OutOfPoolMemoryError::OutOfPoolMemoryError
                    ((OutOfPoolMemoryError *)&local_90,"vk::Device::createAccelerationStructureKHR")
          ;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147acf0);
        }
      }
      else {
        if (iVar3 == -0x3b9af8e0) {
          vk::InvalidShaderNVError::InvalidShaderNVError
                    ((InvalidShaderNVError *)&local_90,"vk::Device::createAccelerationStructureKHR")
          ;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147afc0);
        }
        if (iVar3 == -0x3b9af4f9) {
          vk::ValidationFailedError::ValidationFailedError
                    ((ValidationFailedError *)&local_90,"vk::Device::createAccelerationStructureKHR"
                    );
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aca0);
        }
      }
    }
    else if (iVar3 < -1000000000) {
      if (iVar3 == -0x3b9ad5b9) {
        vk::IncompatibleDisplayKHRError::IncompatibleDisplayKHRError
                  ((IncompatibleDisplayKHRError *)&local_90,
                   "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147af70);
      }
      if (iVar3 == -0x3b9acdec) {
        vk::OutOfDateKHRError::OutOfDateKHRError
                  ((OutOfDateKHRError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147af20);
      }
      if (iVar3 == -0x3b9aca01) {
        vk::NativeWindowInUseKHRError::NativeWindowInUseKHRError
                  ((NativeWindowInUseKHRError *)&local_90,
                   "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aed0);
      }
    }
    else {
      switch(iVar3) {
      case -0xd:
        vk::UnknownError::UnknownError
                  ((UnknownError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ac50);
      case -0xc:
        vk::FragmentedPoolError::FragmentedPoolError
                  ((FragmentedPoolError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ac00);
      case -0xb:
        vk::FormatNotSupportedError::FormatNotSupportedError
                  ((FormatNotSupportedError *)&local_90,"vk::Device::createAccelerationStructureKHR"
                  );
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147abb0);
      case -10:
        vk::TooManyObjectsError::TooManyObjectsError
                  ((TooManyObjectsError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ab60);
      case -9:
        vk::IncompatibleDriverError::IncompatibleDriverError
                  ((IncompatibleDriverError *)&local_90,"vk::Device::createAccelerationStructureKHR"
                  );
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ab10);
      case -8:
        vk::FeatureNotPresentError::FeatureNotPresentError
                  ((FeatureNotPresentError *)&local_90,"vk::Device::createAccelerationStructureKHR")
        ;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aac0);
      case -7:
        vk::ExtensionNotPresentError::ExtensionNotPresentError
                  ((ExtensionNotPresentError *)&local_90,
                   "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aa70);
      case -6:
        vk::LayerNotPresentError::LayerNotPresentError
                  ((LayerNotPresentError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147aa20);
      case -5:
        vk::MemoryMapFailedError::MemoryMapFailedError
                  ((MemoryMapFailedError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a9d0);
      case -4:
        vk::DeviceLostError::DeviceLostError
                  ((DeviceLostError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a980);
      case -3:
        vk::InitializationFailedError::InitializationFailedError
                  ((InitializationFailedError *)&local_90,
                   "vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a930);
      case -2:
        vk::OutOfDeviceMemoryError::OutOfDeviceMemoryError
                  ((OutOfDeviceMemoryError *)&local_90,"vk::Device::createAccelerationStructureKHR")
        ;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a8e0);
      case -1:
        vk::OutOfHostMemoryError::OutOfHostMemoryError
                  ((OutOfHostMemoryError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147a890);
      }
      if (iVar3 == -1000000000) {
        vk::SurfaceLostKHRError::SurfaceLostKHRError
                  ((SurfaceLostKHRError *)&local_90,"vk::Device::createAccelerationStructureKHR");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147ae80);
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x140) < DAT_1416f2950) && (FUN_140b6864c(&DAT_1416f2950), DAT_1416f2950 == -1)) {
      _Init_thread_footer(&DAT_1416f2950);
    }
    local_90.vftablePtr = (InvalidExternalHandleError_vftable_for_Error *)&vk::Error::vftable;
    local_1d8 = &PTR_vftable_1415056b0;
    local_1e0[0] = iVar3;
    FUN_1405394b0(&local_90.vftablePtr,local_1e0,"vk::Device::createAccelerationStructureKHR");
    local_90.vftablePtr =
         (InvalidExternalHandleError_vftable_for_Error *)&vk::SystemError::vftable_for_Error;
    local_90.vftablePtr =
         (InvalidExternalHandleError_vftable_for_system_error *)
         &vk::SystemError::vftable_for_system_error;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_90,(ThrowInfo *)&DAT_14147b360);
  }
  puVar4[6] = local_190;
  if (*(char *)((longlong)param_2 + 0x4a) == '\0') {
    local_90.vftablePtr =
         (InvalidExternalHandleError_vftable_for_Error *)
         CONCAT44(local_90.vftablePtr._4_4_,0x3b9d13f2);
    local_90.vftablePtr = (InvalidExternalHandleError_vftable_for_system_error *)0x0;
    local_90.offset_0x8 = local_190;
    uVar5 = (*DAT_1416b7a00)(local_b0[0x14],&local_90);
    puVar4[7] = uVar5;
  }
  if (0xf < local_150) {
    uVar6 = local_150 + 1;
    lVar11 = lStack_168;
    if (0xfff < uVar6) {
      lVar11 = *(longlong *)(lStack_168 + -8);
      if (0x1f < (ulonglong)((lStack_168 + -8) - lVar11)) goto LAB_14070bdc3;
      uVar6 = local_150 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar11,uVar6);
  }
  if (local_a8 != 0) {
    uVar6 = (longlong)local_98 - local_a8;
    lVar11 = local_a8;
    if (0xfff < uVar6) {
      lVar11 = *(longlong *)(local_a8 + -8);
      if (0x1f < (ulonglong)((local_a8 + -8) - lVar11)) goto LAB_14070bdc3;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar11,uVar6);
  }
  if (local_d8 != (undefined4 *)0x0) {
    uVar6 = local_c8 - (longlong)local_d8;
    puVar7 = local_d8;
    if (0xfff < uVar6) {
      puVar7 = *(undefined4 **)(local_d8 + -2);
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)puVar7))) goto LAB_14070bdc3;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(puVar7,uVar6);
  }
  if (local_f8 != 0) {
    uVar6 = local_e8 - local_f8;
    lVar11 = local_f8;
    if (0xfff < uVar6) {
      lVar11 = *(longlong *)(local_f8 + -8);
      if (0x1f < (ulonglong)((local_f8 + -8) - lVar11)) goto LAB_14070bdc3;
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar11,uVar6);
  }
  if (local_118 != 0) {
    uVar6 = local_108 - local_118;
    lVar11 = local_118;
    if (0xfff < uVar6) {
      lVar11 = *(longlong *)(local_118 + -8);
      if (0x1f < (ulonglong)((local_118 + -8) - lVar11)) {
LAB_14070bdc3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar11,uVar6);
  }
  puVar16 = (undefined8 *)puVar4[10];
  for (puVar10 = (undefined8 *)puVar4[9]; puVar10 != puVar16; puVar10 = puVar10 + 0x14) {
    *puVar10 = 0;
    puVar10[1] = 0;
  }
  *param_1 = puVar4;
  return param_1;
}

