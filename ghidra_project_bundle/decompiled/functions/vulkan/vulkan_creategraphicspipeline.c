/**
 * Function: vulkan_creategraphicspipeline
 * Address:  1403ded90
 * Signature: undefined vulkan_creategraphicspipeline(void)
 * Body size: 5906 bytes
 */


undefined8 * vulkan_creategraphicspipeline(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  char *pcVar23;
  uint uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_418 [32];
  undefined8 local_3f8;
  undefined8 *local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e0;
  longlong local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  undefined8 *local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 local_364;
  undefined4 local_360 [2];
  undefined8 local_358;
  undefined8 local_350;
  undefined *local_348;
  undefined8 local_340;
  undefined8 local_338;
  longlong local_330;
  uint local_328;
  undefined4 local_324;
  undefined4 *local_320;
  undefined8 local_318;
  undefined8 local_310;
  uint local_308;
  uint local_304;
  longlong local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  uint local_2ec;
  uint local_2e8;
  undefined4 local_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8 [2];
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 *local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8 [2];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278 [2];
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_258 [2];
  undefined8 local_250;
  uint local_248;
  longlong local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 *local_230;
  undefined4 local_228;
  int local_224;
  longlong local_220;
  uint local_218;
  longlong local_210;
  longlong *local_208;
  uint local_200 [8];
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  undefined4 local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  uint local_1a0;
  longlong local_19c;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_188 [2];
  undefined8 local_180;
  longlong local_178;
  undefined4 *local_170;
  undefined8 local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128 [2];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined8 *local_d8;
  uint *local_d0;
  undefined4 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_418;
  puVar13 = (undefined8 *)FUN_140160c40(0x30);
  lVar14 = FUN_140160c40((ulonglong)*(uint *)(param_2 + 3) * 0xc);
  local_3d0 = FUN_140160c40((ulonglong)*(uint *)(param_2 + 5) << 4);
  lVar15 = FUN_140160c40((ulonglong)*(uint *)(param_2 + 3) << 3);
  local_3c8 = FUN_140160c40((ulonglong)*(uint *)(param_2 + 0x12) << 5);
  uVar2 = *(undefined4 *)(&DAT_140e0c7d0 + (longlong)(int)param_2[10] * 4);
  local_328 = *(uint *)(param_2 + 0x12);
  uVar21 = (ulonglong)local_328;
  bVar1 = *(byte *)(param_2 + 0x13);
  if (uVar21 != 0) {
    lVar20 = param_2[0x11];
    lVar22 = 0;
    uVar25 = 0;
    do {
      iVar12 = *(int *)(lVar20 + lVar22);
      *(undefined4 *)((longlong)local_128 + lVar22) = 0;
      *(undefined4 *)((longlong)local_128 + lVar22 + 4) =
           *(undefined4 *)(&DAT_140e0c920 + (longlong)iVar12 * 4);
      *(undefined4 *)(local_120 + lVar22) = uVar2;
      *(undefined8 *)(local_120 + lVar22 + 4) = 0x100000002;
      *(undefined8 *)(local_118 + lVar22 + 4) = 0x100000002;
      *(undefined8 *)(local_110 + lVar22 + 4) = 0x200000002;
      local_1c8[uVar25 * 2] = (int)uVar25;
      local_1c8[uVar25 * 2 + 1] = 2;
      uVar25 = uVar25 + 1;
      lVar22 = lVar22 + 0x24;
    } while (uVar21 != uVar25);
  }
  iVar12 = *(int *)((longlong)param_2 + 0x94);
  local_340 = 0;
  local_338 = (ulonglong)local_338._4_4_ << 0x20;
  local_330 = 0;
  local_320 = local_1c8;
  local_308 = 0;
  local_300 = 0;
  if ((bVar1 & 1) == 0) {
    local_310 = (uint *)0x0;
    uVar24 = local_328;
  }
  else {
    local_128[uVar21 * 9] = 0;
    local_128[uVar21 * 9 + 1] = *(undefined4 *)(&DAT_140e0c920 + (longlong)iVar12 * 4);
    *(undefined4 *)(local_120 + uVar21 * 0x24) = uVar2;
    *(undefined8 *)(local_120 + uVar21 * 0x24 + 4) = 0x100000002;
    *(undefined8 *)(local_118 + uVar21 * 0x24 + 4) = 0x100000002;
    *(undefined8 *)(local_110 + uVar21 * 0x24 + 4) = 0x300000003;
    local_200[1] = 3;
    local_310 = local_200;
    uVar24 = local_328 + 1;
    local_200[0] = local_328;
  }
  local_318 = 0;
  local_188[0] = 0x26;
  local_180 = 0;
  local_170 = local_128;
  local_178 = (ulonglong)uVar24 << 0x20;
  local_168 = CONCAT44(local_168._4_4_,1);
  local_160 = &local_340;
  local_158 = 0;
  local_150 = 0;
  iVar12 = (**(code **)(param_1 + 0xb10))(*(undefined8 *)(param_1 + 0x570),local_188);
  if (iVar12 == 0) {
    local_3b8 = CONCAT44(uStack_234,local_238);
  }
  else {
    if (*(char *)(param_1 + 0x57c) == '\x01') {
      if (iVar12 < -1000000000) {
        if (iVar12 < -0x3b9acdec) {
          if (iVar12 == -0x3b9eae18) {
            pcVar23 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
            goto LAB_1403df13d;
          }
          if (iVar12 == -0x3b9bd788) {
            pcVar23 = "VK_ERROR_OUT_OF_POOL_MEMORY";
            goto LAB_1403df13d;
          }
        }
        else {
          if (iVar12 == -0x3b9acdec) {
            pcVar23 = "VK_ERROR_OUT_OF_DATE_KHR";
            goto LAB_1403df13d;
          }
          if (iVar12 == -0x3b9aca01) {
            pcVar23 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
            goto LAB_1403df13d;
          }
        }
        goto switchD_1403df051_caseD_fffffff5;
      }
      switch(iVar12) {
      case -0xc:
        pcVar23 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case -10:
        pcVar23 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case -9:
        pcVar23 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case -8:
        pcVar23 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case -7:
        pcVar23 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case -6:
        pcVar23 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case -4:
        pcVar23 = "VK_ERROR_DEVICE_LOST";
        break;
      case -3:
        pcVar23 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case -2:
        pcVar23 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case -1:
        pcVar23 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (iVar12 == -1000000000) {
          pcVar23 = "VK_ERROR_SURFACE_LOST_KHR";
          break;
        }
        if (iVar12 == 0x3b9acdeb) {
          pcVar23 = "VK_SUBOPTIMAL_KHR";
          break;
        }
      case -0xb:
      case -5:
switchD_1403df051_caseD_fffffff5:
        pcVar23 = "Unhandled VkResult!";
      }
LAB_1403df13d:
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,"%s %s","vkCreateRenderPass",pcVar23);
    }
    if (iVar12 < -1000000000) {
      if (iVar12 < -0x3b9acdec) {
        if ((iVar12 != -0x3b9eae18) && (iVar12 != -0x3b9bd788))
        goto switchD_1403df173_caseD_fffffff5;
      }
      else if ((iVar12 != -0x3b9acdec) && (iVar12 != -0x3b9aca01))
      goto switchD_1403df173_caseD_fffffff5;
    }
    else {
      switch(iVar12) {
      case -0xc:
        break;
      case -0xb:
      case -5:
switchD_1403df173_caseD_fffffff5:
        break;
      case -10:
        break;
      case -9:
        break;
      case -8:
        break;
      case -7:
        break;
      case -6:
        break;
      case -4:
        break;
      case -3:
        break;
      case -2:
        break;
      case -1:
        break;
      default:
        if ((iVar12 != -1000000000) && (iVar12 != 0x3b9acdeb))
        goto switchD_1403df173_caseD_fffffff5;
      }
    }
    FUN_1400fbed0("%s %s","vkCreateRenderPass");
    local_3b8 = 0;
  }
  local_360[0] = 0x1b;
  local_358 = 0;
  local_350 = 0x400000000;
  local_348 = &DAT_140e0c7c0;
  lVar20 = *param_2;
  puVar13[3] = lVar20;
  FUN_140106160(lVar20 + 0x24,1);
  local_188[0] = 0x12;
  local_180 = 0;
  local_178 = 0x100000000;
  local_170 = *(undefined4 **)puVar13[3];
  local_168 = ((undefined8 *)puVar13[3])[1];
  local_160 = (undefined8 *)0x0;
  lVar20 = param_2[1];
  puVar13[4] = lVar20;
  FUN_140106160(lVar20 + 0x24,1);
  local_158 = 0x12;
  local_150 = 0;
  local_148 = 0x1000000000;
  local_140 = *(undefined8 *)puVar13[4];
  local_138 = ((undefined8 *)puVar13[4])[1];
  local_130 = 0;
  if (*(char *)(param_1 + 0x57c) == '\x01') {
    if (*(int *)(puVar13[3] + 0x10) != 0) {
      do {
        iVar12 = FUN_14015bb20(&DAT_141503590,"VULKAN_CreateGraphicsPipeline");
      } while (iVar12 == 0);
      if (iVar12 == 1) {
        pcVar8 = (code *)swi(3);
        puVar13 = (undefined8 *)(*pcVar8)();
        return puVar13;
      }
    }
    lVar20 = param_1;
    if (*(int *)(puVar13[4] + 0x10) != 1) {
      do {
        local_3c0 = lVar20;
        iVar12 = FUN_14015bb20(&DAT_1415035c0,"VULKAN_CreateGraphicsPipeline");
        lVar20 = local_3c0;
      } while (iVar12 == 0);
      param_1 = local_3c0;
      if (iVar12 == 1) {
        pcVar8 = (code *)swi(3);
        puVar13 = (undefined8 *)(*pcVar8)();
        return puVar13;
      }
    }
  }
  if ((int)param_2[3] == 0) {
    bVar26 = true;
    uVar21 = 0;
    iVar12 = (int)param_2[5];
  }
  else {
    lVar20 = param_2[2];
    puVar19 = (undefined4 *)(lVar14 + 8);
    lVar22 = 0;
    uVar25 = 0;
    iVar12 = 0;
    do {
      puVar19[-2] = *(undefined4 *)(lVar20 + lVar22);
      *puVar19 = *(undefined4 *)(&DAT_140e0cae0 + (longlong)*(int *)(param_2[2] + 8 + lVar22) * 4);
      puVar19[-1] = *(undefined4 *)(param_2[2] + 4 + lVar22);
      lVar20 = param_2[2];
      iVar12 = iVar12 + (uint)(*(int *)(lVar20 + 8 + lVar22) == 1);
      uVar25 = uVar25 + 1;
      uVar21 = (ulonglong)*(uint *)(param_2 + 3);
      lVar22 = lVar22 + 0x10;
      puVar19 = puVar19 + 3;
    } while (uVar25 < uVar21);
    bVar26 = iVar12 == 0;
    iVar12 = (int)param_2[5];
  }
  local_218 = 0;
  if (iVar12 != 0) {
    lVar20 = 0;
    uVar21 = 0;
    do {
      *(undefined4 *)(local_3d0 + 4 + lVar20) = *(undefined4 *)(param_2[4] + 4 + lVar20);
      *(undefined4 *)(local_3d0 + 8 + lVar20) =
           *(undefined4 *)(&DAT_140e0c7e0 + (longlong)*(int *)(param_2[4] + 8 + lVar20) * 4);
      *(undefined4 *)(local_3d0 + lVar20) = *(undefined4 *)(param_2[4] + lVar20);
      *(undefined4 *)(local_3d0 + 0xc + lVar20) = *(undefined4 *)(param_2[4] + 0xc + lVar20);
      uVar21 = uVar21 + 1;
      local_218 = *(uint *)(param_2 + 5);
      lVar20 = lVar20 + 0x10;
    } while (uVar21 < local_218);
    uVar21 = (ulonglong)*(uint *)(param_2 + 3);
  }
  local_238 = 0x13;
  local_230 = (undefined4 *)0x0;
  local_228 = 0;
  local_224 = (int)uVar21;
  local_210 = local_3d0;
  if (!bVar26) {
    if (local_224 == 0) {
      local_248 = 0;
    }
    else {
      lVar20 = 0;
      uVar25 = 0;
      local_248 = 0;
      do {
        if (*(int *)(param_2[2] + 8 + lVar20) == 1) {
          *(undefined4 *)(lVar15 + (ulonglong)local_248 * 8) = *(undefined4 *)(param_2[2] + lVar20);
          *(undefined4 *)(lVar15 + 4 + (ulonglong)local_248 * 8) =
               *(undefined4 *)(param_2[2] + 0xc + lVar20);
          local_248 = local_248 + 1;
          uVar21 = (ulonglong)*(uint *)(param_2 + 3);
        }
        uVar25 = uVar25 + 1;
        lVar20 = lVar20 + 0x10;
      } while (uVar25 < uVar21);
    }
    local_258[0] = 0x3b9db031;
    local_250 = 0;
    local_230 = local_258;
    local_240 = lVar15;
  }
  local_278[0] = 0x14;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_264 = *(undefined4 *)(&DAT_140e0c860 + (longlong)(int)param_2[6] * 4);
  *(int *)(puVar13 + 1) = (int)param_2[6];
  local_2a8[0] = 0x16;
  local_2a0 = 0;
  local_298 = 0x100000000;
  local_290 = 0;
  local_288 = 1;
  local_280 = 0;
  local_1c8[0] = 0x17;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = *(byte *)((longlong)param_2 + 0x4d) ^ 1;
  local_1b0 = 0;
  local_220 = lVar14;
  if (*(int *)((longlong)param_2 + 0x34) == 0) {
LAB_1403df6e5:
    local_1ac = 0;
  }
  else if ((*(int *)((longlong)param_2 + 0x34) != 1) ||
          (local_1ac = 1, *(char *)(param_1 + 0x58c) == '\0')) {
    if (*(char *)(param_1 + 0x57b) == '\0') {
      FUN_1400fb8f0(9,"Unsupported fill mode requested, using FILL!");
      *(undefined1 *)(param_1 + 0x57b) = 1;
    }
    goto LAB_1403df6e5;
  }
  local_1a8 = *(undefined4 *)(&DAT_140e0c880 + (longlong)(int)param_2[7] * 4);
  local_1a4 = *(undefined4 *)(&DAT_140e0cae0 + (longlong)*(int *)((longlong)param_2 + 0x3c) * 4);
  local_1a0 = (uint)*(byte *)((longlong)param_2 + 0x4c);
  local_19c = param_2[8];
  local_194 = (undefined4)param_2[9];
  local_190 = 0x3f800000;
  local_364 = 0xffffffff;
  if ((char)param_2[0xb] == '\x01') {
    local_364 = *(undefined4 *)((longlong)param_2 + 0x54);
  }
  local_2d8[0] = 0x18;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c4 = *(undefined4 *)(&DAT_140e0c7d0 + (longlong)(int)param_2[10] * 4);
  local_2c0 = 0x3f80000000000000;
  local_2b8 = &local_364;
  local_2b0 = 0;
  local_2f8 = *(undefined4 *)(&DAT_140e0c890 + (longlong)*(int *)((longlong)param_2 + 100) * 4);
  local_2f4 = *(undefined4 *)(&DAT_140e0c890 + (longlong)(int)param_2[0xd] * 4);
  local_2f0 = *(undefined4 *)(&DAT_140e0c890 + (longlong)*(int *)((longlong)param_2 + 0x6c) * 4);
  local_340 = CONCAT44(local_340._4_4_,0x19);
  local_338 = 0;
  local_330 = (ulonglong)*(byte *)((longlong)param_2 + 0x82) << 0x20;
  local_328 = (uint)*(byte *)((longlong)param_2 + 0x83);
  local_324 = *(undefined4 *)(&DAT_140e0c890 + (longlong)*(int *)((longlong)param_2 + 0x5c) * 4);
  local_320 = (undefined4 *)((ulonglong)*(byte *)((longlong)param_2 + 0x84) << 0x20);
  local_318 = CONCAT44(*(undefined4 *)
                        (&DAT_140e0c890 + (longlong)*(int *)((longlong)param_2 + 0x74) * 4),
                       *(undefined4 *)(&DAT_140e0c890 + (longlong)(int)param_2[0xe] * 4));
  local_310 = (uint *)CONCAT44(*(undefined4 *)
                                (&DAT_140e0c890 + (longlong)*(int *)((longlong)param_2 + 0x7c) * 4),
                               *(undefined4 *)(&DAT_140e0c890 + (longlong)(int)param_2[0xf] * 4));
  local_308 = (uint)*(byte *)(param_2 + 0x10);
  local_304 = (uint)*(byte *)((longlong)param_2 + 0x81);
  local_300 = (ulonglong)*(uint *)(&DAT_140e0c890 + (longlong)(int)param_2[0xc] * 4) << 0x20;
  local_2e4 = 0;
  local_2e0 = 0;
  if ((int)param_2[0x12] == 0) {
    local_200[7] = 0;
  }
  else {
    puVar16 = (uint *)(local_3c8 + 0x1c);
    lVar20 = 0x1e;
    uVar21 = 0;
    do {
      lVar22 = param_2[0x11];
      iVar12 = *(int *)(lVar22 + -0x1a + lVar20);
      iVar3 = *(int *)(lVar22 + -0x16 + lVar20);
      iVar4 = *(int *)(lVar22 + -0x12 + lVar20);
      iVar5 = *(int *)(lVar22 + -0xe + lVar20);
      iVar6 = *(int *)(lVar22 + -10 + lVar20);
      iVar7 = *(int *)(lVar22 + -6 + lVar20);
      bVar1 = *(byte *)(lVar22 + lVar20);
      uVar24 = (uint)*(byte *)(lVar22 + -2 + lVar20);
      puVar16[-7] = *(byte *)(lVar22 + -1 + lVar20) & 1;
      puVar16[-6] = *(uint *)(&DAT_140e0c8c0 + (longlong)iVar12 * 4);
      puVar16[-5] = *(uint *)(&DAT_140e0c8c0 + (longlong)iVar3 * 4);
      puVar16[-4] = *(uint *)(&DAT_140e0c900 + (longlong)iVar4 * 4);
      puVar16[-3] = *(uint *)(&DAT_140e0c8c0 + (longlong)iVar5 * 4);
      puVar16[-2] = *(uint *)(&DAT_140e0c8c0 + (longlong)iVar6 * 4);
      puVar16[-1] = *(uint *)(&DAT_140e0c900 + (longlong)iVar7 * 4);
      if ((bVar1 & 1) == 0) {
        uVar24 = 0xf;
      }
      *puVar16 = uVar24;
      uVar21 = uVar21 + 1;
      local_200[7] = *(uint *)(param_2 + 0x12);
      puVar16 = puVar16 + 8;
      lVar20 = lVar20 + 0x24;
      local_3c0 = param_1;
      local_3b0 = puVar13;
    } while (uVar21 < local_200[7]);
  }
  local_200[0] = 0x1a;
  local_200[2] = 0;
  local_200[3] = 0;
  local_200[4] = 0;
  local_1e0 = local_3c8;
  local_1d8 = 0x3f8000003f800000;
  uStack_1d0 = 0x3f8000003f800000;
  local_200[5] = 0;
  local_200[6] = 0;
  lVar20 = puVar13[3];
  lVar22 = puVar13[4];
  local_208 = (longlong *)0x0;
  local_398 = *(undefined4 *)(lVar20 + 0x14);
  uStack_394 = *(undefined4 *)(lVar20 + 0x1c);
  uStack_390 = CONCAT44(*(undefined4 *)(lVar20 + 0x20),*(undefined4 *)(lVar20 + 0x18));
  local_388 = *(undefined4 *)(lVar22 + 0x14);
  uStack_384 = *(undefined4 *)(lVar22 + 0x1c);
  uStack_380 = CONCAT44(*(undefined4 *)(lVar22 + 0x20),*(undefined4 *)(lVar22 + 0x18));
  local_3a8 = lVar14;
  local_3a0 = lVar15;
  local_2ec = local_308;
  local_2e8 = local_304;
  cVar11 = FUN_1403d87a0(*(undefined8 *)(param_1 + 0x800),&local_398,&local_208);
  lVar15 = local_3a0;
  lVar14 = local_3a8;
  if (cVar11 == '\0') {
    local_208 = (longlong *)FUN_140160c70(1,0x48);
    local_3e0 = 0;
    local_3e8 = 0;
    local_3f0 = (undefined8 *)((ulonglong)local_3f0 & 0xffffffff00000000);
    local_3f8._0_4_ = *(undefined4 *)(lVar20 + 0x1c);
    lVar17 = vk_error_out_of_host_memory
                       (param_1,1,*(undefined4 *)(lVar20 + 0x14),*(undefined4 *)(lVar20 + 0x18));
    local_208[1] = lVar17;
    local_3e0 = *(undefined4 *)(lVar20 + 0x20);
    local_3e8 = 0;
    local_3f0 = (undefined8 *)((ulonglong)local_3f0 & 0xffffffff00000000);
    local_3f8._0_4_ = 0;
    lVar17 = vk_error_out_of_host_memory(param_1,1,0,0);
    local_208[2] = lVar17;
    local_3f8._0_4_ = *(undefined4 *)(lVar22 + 0x1c);
    local_3e0 = 0;
    local_3e8 = 0;
    local_3f0 = (undefined8 *)((ulonglong)local_3f0 & 0xffffffff00000000);
    lVar17 = vk_error_out_of_host_memory
                       (param_1,0x10,*(undefined4 *)(lVar22 + 0x14),*(undefined4 *)(lVar22 + 0x18));
    local_208[3] = lVar17;
    local_3e0 = *(undefined4 *)(lVar22 + 0x20);
    local_3e8 = 0;
    local_3f0 = (undefined8 *)((ulonglong)local_3f0 & 0xffffffff00000000);
    local_3f8 = (ulonglong)local_3f8._4_4_ << 0x20;
    lVar17 = vk_error_out_of_host_memory(param_1,0x10,0,0);
    local_208[4] = lVar17;
    local_68 = *(undefined8 *)(local_208[1] + 8);
    local_60 = *(undefined8 *)(local_208[2] + 8);
    local_58 = *(undefined8 *)(local_208[3] + 8);
    local_50 = *(undefined8 *)(lVar17 + 8);
    *(undefined4 *)(local_208 + 5) = *(undefined4 *)(lVar20 + 0x14);
    *(undefined4 *)(local_208 + 6) = *(undefined4 *)(lVar20 + 0x18);
    *(undefined4 *)((longlong)local_208 + 0x2c) = *(undefined4 *)(lVar20 + 0x1c);
    *(undefined4 *)((longlong)local_208 + 0x34) = *(undefined4 *)(lVar20 + 0x20);
    *(undefined4 *)(local_208 + 7) = *(undefined4 *)(lVar22 + 0x14);
    *(undefined4 *)(local_208 + 8) = *(undefined4 *)(lVar22 + 0x18);
    *(undefined4 *)((longlong)local_208 + 0x3c) = *(undefined4 *)(lVar22 + 0x1c);
    *(undefined4 *)((longlong)local_208 + 0x44) = *(undefined4 *)(lVar22 + 0x20);
    local_128[0] = 0x1e;
    local_120 = (undefined1  [8])0x0;
    local_118 = (undefined1  [8])0x400000000;
    local_110 = (undefined1  [8])&local_68;
    local_108 = (undefined4 *)((ulonglong)local_108._4_4_ << 0x20);
    local_100 = (undefined4 *)0x0;
    iVar12 = (**(code **)(param_1 + 0xb08))(*(undefined8 *)(param_1 + 0x570),local_128,0);
    plVar10 = local_208;
    if (iVar12 == 0) {
      puVar18 = (undefined8 *)FUN_140160c40(0x20);
      *puVar18 = CONCAT44(uStack_394,local_398);
      puVar18[1] = uStack_390;
      *(undefined4 *)(puVar18 + 2) = local_388;
      *(undefined4 *)((longlong)puVar18 + 0x14) = uStack_384;
      *(undefined4 *)(puVar18 + 3) = (undefined4)uStack_380;
      *(undefined4 *)((longlong)puVar18 + 0x1c) = uStack_380._4_4_;
      FUN_1403d8280(*(undefined8 *)(param_1 + 0x800),puVar18,local_208);
      goto LAB_1403dfd58;
    }
    if (*local_208 != 0) {
      (**(code **)(param_1 + 0xb88))(*(undefined8 *)(param_1 + 0x570),*local_208,0);
    }
    FUN_140160cf0(plVar10);
    lVar20 = local_3d0;
    if (*(char *)(param_1 + 0x57c) == '\x01') {
      if (iVar12 < -1000000000) {
        if (iVar12 < -0x3b9acdec) {
          if (iVar12 == -0x3b9eae18) {
            pcVar23 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
            goto LAB_1403e02d2;
          }
          if (iVar12 == -0x3b9bd788) {
            pcVar23 = "VK_ERROR_OUT_OF_POOL_MEMORY";
            goto LAB_1403e02d2;
          }
        }
        else {
          if (iVar12 == -0x3b9acdec) {
            pcVar23 = "VK_ERROR_OUT_OF_DATE_KHR";
            goto LAB_1403e02d2;
          }
          if (iVar12 == -0x3b9aca01) {
            pcVar23 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
            goto LAB_1403e02d2;
          }
        }
        goto switchD_1403dfd0f_caseD_fffffff5;
      }
      switch(iVar12) {
      case -0xc:
        pcVar23 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case -10:
        pcVar23 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case -9:
        pcVar23 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case -8:
        pcVar23 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case -7:
        pcVar23 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case -6:
        pcVar23 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case -4:
        pcVar23 = "VK_ERROR_DEVICE_LOST";
        break;
      case -3:
        pcVar23 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case -2:
        pcVar23 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case -1:
        pcVar23 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (iVar12 == -1000000000) {
          pcVar23 = "VK_ERROR_SURFACE_LOST_KHR";
          break;
        }
        if (iVar12 == 0x3b9acdeb) {
          pcVar23 = "VK_SUBOPTIMAL_KHR";
          break;
        }
      case -0xb:
      case -5:
switchD_1403dfd0f_caseD_fffffff5:
        pcVar23 = "Unhandled VkResult!";
      }
LAB_1403e02d2:
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,"%s %s","vkCreatePipelineLayout",pcVar23);
    }
    if (iVar12 < -1000000000) {
      if (iVar12 < -0x3b9acdec) {
        if (iVar12 == -0x3b9eae18) {
          pcVar23 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        }
        else {
          if (iVar12 != -0x3b9bd788) goto switchD_1403e0308_caseD_fffffff5;
          pcVar23 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        }
      }
      else if (iVar12 == -0x3b9acdec) {
        pcVar23 = "VK_ERROR_OUT_OF_DATE_KHR";
      }
      else {
        if (iVar12 != -0x3b9aca01) goto switchD_1403e0308_caseD_fffffff5;
        pcVar23 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      }
    }
    else {
      switch(iVar12) {
      case -0xc:
        pcVar23 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case -0xb:
      case -5:
switchD_1403e0308_caseD_fffffff5:
        pcVar23 = "Unhandled VkResult!";
        break;
      case -10:
        pcVar23 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case -9:
        pcVar23 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case -8:
        pcVar23 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case -7:
        pcVar23 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case -6:
        pcVar23 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case -4:
        pcVar23 = "VK_ERROR_DEVICE_LOST";
        break;
      case -3:
        pcVar23 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case -2:
        pcVar23 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case -1:
        pcVar23 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (iVar12 == -1000000000) {
          pcVar23 = "VK_ERROR_SURFACE_LOST_KHR";
        }
        else {
          if (iVar12 != 0x3b9acdeb) goto switchD_1403e0308_caseD_fffffff5;
          pcVar23 = "VK_SUBOPTIMAL_KHR";
        }
      }
    }
    FUN_1400fbed0("%s %s","vkCreatePipelineLayout",pcVar23);
    puVar13[2] = 0;
    goto LAB_1403e0404;
  }
LAB_1403dfd58:
  uVar9 = local_3b8;
  lVar20 = local_3d0;
  puVar13[2] = local_208;
  if (local_208 == (longlong *)0x0) {
LAB_1403e0404:
    FUN_140160cf0(lVar14);
    FUN_140160cf0(lVar20);
    FUN_140160cf0(local_3c8);
    FUN_140160cf0(lVar15);
    FUN_140160cf0(puVar13);
    if (*(char *)(param_1 + 0x57c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Failed to initialize pipeline resource layout!");
    }
    FUN_1400fbed0(&DAT_141339891,"Failed to initialize pipeline resource layout!");
LAB_1403e0464:
    puVar13 = (undefined8 *)0x0;
LAB_1403e0466:
    if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_418)) {
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_48 ^ (ulonglong)auStack_418);
    }
    return puVar13;
  }
  local_128[0] = 0x1c;
  local_120 = (undefined1  [8])0x0;
  local_118 = (undefined1  [8])0x200000000;
  local_110 = (undefined1  [8])local_188;
  local_108 = &local_238;
  local_100 = local_278;
  local_f8 = 0;
  local_f0 = local_2a8;
  local_e8 = local_1c8;
  local_e0 = local_2d8;
  local_d8 = &local_340;
  local_d0 = local_200;
  local_c8 = local_360;
  local_c0 = *local_208;
  local_b8 = local_3b8;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_3f8 = 0;
  local_3f0 = puVar13;
  iVar12 = (**(code **)(param_1 + 0xae8))(*(undefined8 *)(param_1 + 0x570),0,1,local_128);
  FUN_140160cf0(lVar14);
  FUN_140160cf0(lVar20);
  FUN_140160cf0(local_3c8);
  FUN_140160cf0(lVar15);
  (**(code **)(param_1 + 0xb90))(*(undefined8 *)(param_1 + 0x570),uVar9,0);
  if (iVar12 == 0) {
    FUN_140106140(puVar13 + 5,0);
    if (((*(char *)(param_1 + 0x57c) == '\x01') && (*(char *)(param_1 + 0x58a) == '\x01')) &&
       (cVar11 = FUN_14014fd70((int)param_2[0x14],"SDL.gpu.graphicspipeline.create.name"),
       cVar11 != '\0')) {
      local_398 = 0x3b9cbe00;
      uStack_390 = 0;
      local_378 = FUN_14014ffe0((int)param_2[0x14],"SDL.gpu.graphicspipeline.create.name",0);
      local_388 = 0x13;
      uStack_380 = *puVar13;
      (**(code **)(param_1 + 0x990))(*(undefined8 *)(param_1 + 0x570),&local_398);
    }
    goto LAB_1403e0466;
  }
  FUN_140160cf0(puVar13);
  if (*(char *)(param_1 + 0x57c) != '\x01') {
    if (iVar12 < -1000000000) {
      if (iVar12 < -0x3b9acdec) {
        if (iVar12 == -0x3b9eae18) {
          pcVar23 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        }
        else {
          if (iVar12 != -0x3b9bd788) goto switchD_1403e0188_caseD_fffffff5;
          pcVar23 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        }
      }
      else if (iVar12 == -0x3b9acdec) {
        pcVar23 = "VK_ERROR_OUT_OF_DATE_KHR";
      }
      else {
        if (iVar12 != -0x3b9aca01) goto switchD_1403e0188_caseD_fffffff5;
        pcVar23 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
      }
    }
    else {
      switch(iVar12) {
      case -0xc:
        pcVar23 = "VK_ERROR_FRAGMENTED_POOL";
        break;
      case -0xb:
      case -5:
switchD_1403e0188_caseD_fffffff5:
        pcVar23 = "Unhandled VkResult!";
        break;
      case -10:
        pcVar23 = "VK_ERROR_TOO_MANY_OBJECTS";
        break;
      case -9:
        pcVar23 = "VK_ERROR_INCOMPATIBLE_DRIVER";
        break;
      case -8:
        pcVar23 = "VK_ERROR_FEATURE_NOT_PRESENT";
        break;
      case -7:
        pcVar23 = "VK_ERROR_EXTENSION_NOT_PRESENT";
        break;
      case -6:
        pcVar23 = "VK_ERROR_LAYER_NOT_PRESENT";
        break;
      case -4:
        pcVar23 = "VK_ERROR_DEVICE_LOST";
        break;
      case -3:
        pcVar23 = "VK_ERROR_INITIALIZATION_FAILED";
        break;
      case -2:
        pcVar23 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        break;
      case -1:
        pcVar23 = "VK_ERROR_OUT_OF_HOST_MEMORY";
        break;
      default:
        if (iVar12 == -1000000000) {
          pcVar23 = "VK_ERROR_SURFACE_LOST_KHR";
        }
        else {
          if (iVar12 != 0x3b9acdeb) goto switchD_1403e0188_caseD_fffffff5;
          pcVar23 = "VK_SUBOPTIMAL_KHR";
        }
      }
    }
    FUN_1400fbed0("%s %s","vkCreateGraphicsPipelines",pcVar23);
    goto LAB_1403e0464;
  }
  if (iVar12 < -1000000000) {
    if (iVar12 < -0x3b9acdec) {
      if (iVar12 == -0x3b9eae18) {
        pcVar23 = "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT";
        goto LAB_1403e0152;
      }
      if (iVar12 == -0x3b9bd788) {
        pcVar23 = "VK_ERROR_OUT_OF_POOL_MEMORY";
        goto LAB_1403e0152;
      }
    }
    else {
      if (iVar12 == -0x3b9acdec) {
        pcVar23 = "VK_ERROR_OUT_OF_DATE_KHR";
        goto LAB_1403e0152;
      }
      if (iVar12 == -0x3b9aca01) {
        pcVar23 = "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
        goto LAB_1403e0152;
      }
    }
    goto switchD_1403dff1a_caseD_fffffff5;
  }
  switch(iVar12) {
  case -0xc:
    pcVar23 = "VK_ERROR_FRAGMENTED_POOL";
    break;
  case -10:
    pcVar23 = "VK_ERROR_TOO_MANY_OBJECTS";
    break;
  case -9:
    pcVar23 = "VK_ERROR_INCOMPATIBLE_DRIVER";
    break;
  case -8:
    pcVar23 = "VK_ERROR_FEATURE_NOT_PRESENT";
    break;
  case -7:
    pcVar23 = "VK_ERROR_EXTENSION_NOT_PRESENT";
    break;
  case -6:
    pcVar23 = "VK_ERROR_LAYER_NOT_PRESENT";
    break;
  case -4:
    pcVar23 = "VK_ERROR_DEVICE_LOST";
    break;
  case -3:
    pcVar23 = "VK_ERROR_INITIALIZATION_FAILED";
    break;
  case -2:
    pcVar23 = "VK_ERROR_OUT_OF_DEVICE_MEMORY";
    break;
  case -1:
    pcVar23 = "VK_ERROR_OUT_OF_HOST_MEMORY";
    break;
  default:
    if (iVar12 == -1000000000) {
      pcVar23 = "VK_ERROR_SURFACE_LOST_KHR";
      break;
    }
    if (iVar12 == 0x3b9acdeb) {
      pcVar23 = "VK_SUBOPTIMAL_KHR";
      break;
    }
  case -0xb:
  case -5:
switchD_1403dff1a_caseD_fffffff5:
    pcVar23 = "Unhandled VkResult!";
  }
LAB_1403e0152:
                    /* WARNING: Subroutine does not return */
  FUN_1400fb950(9,"%s %s","vkCreateGraphicsPipelines",pcVar23);
}

