/**
 * Function: vk_ext_debug_utils
 * Address:  1405287a0
 * Signature: undefined vk_ext_debug_utils(void)
 * Body size: 9678 bytes
 */


undefined8 vk_ext_debug_utils(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  undefined *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  size_t sVar16;
  void *pvVar17;
  void *pvVar18;
  byte *pbVar19;
  char *pcVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  uint *puVar24;
  bool bVar25;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 *puStack_800;
  uint *local_7f8;
  char *pcStack_7f0;
  ulonglong local_7e8;
  byte *pbStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  longlong lStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined4 local_6a0;
  undefined4 local_5e0;
  uint *local_4e0;
  undefined8 local_4d8;
  char *pcStack_4d0;
  char *local_4c8;
  undefined8 uStack_4c0;
  char *local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  uint local_3d4;
  byte local_3d0 [8];
  byte local_3c8 [8];
  undefined8 local_3c0;
  byte local_3b8 [240];
  undefined8 local_2c8;
  char **ppcStack_2c0;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  code *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_1f0;
  byte *local_1e8;
  undefined8 uStack_1e0;
  byte *local_1d8;
  undefined8 uStack_1d0;
  char *local_1c8;
  undefined8 uStack_1c0;
  char *local_1b8;
  undefined8 uStack_1b0;
  char *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  char *local_198;
  undefined4 local_190;
  int local_18c;
  char *local_188;
  undefined4 local_180;
  int local_17c;
  char *local_178;
  undefined4 local_170;
  int local_16c;
  char *local_168;
  undefined4 local_160;
  int local_15c;
  char *local_158;
  undefined4 local_150;
  int local_14c;
  char *local_148;
  undefined4 local_140;
  int local_13c;
  char *local_138;
  undefined4 local_130;
  int local_12c;
  char *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  char *local_118;
  char *pcStack_110;
  char *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_bc;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  undefined8 *local_a0;
  uint local_94;
  uint *local_90;
  ulonglong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 *local_70;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_70 = param_1;
  if (((code *)*param_2 == (code *)0x0) || (param_2[1] == 0)) {
    if ((*(byte *)(DAT_14151e360 + 0x39) < 8) &&
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e1c0),
       DAT_14151e360 == 0)) {
      return 0;
    }
    lVar6 = DAT_14151e360;
    local_4d8 = (char *)((ulonglong)local_4d8 & 0xffffffffffffff00);
    local_818 = (char *)&local_4d8;
    cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_818);
    if (cVar3 == '\0') {
      do {
        local_818 = (char *)0x64;
        FUN_140008100(&local_818);
        local_818 = (char *)&local_4d8;
        cVar3 = FUN_140b53dc0(lVar6,&PTR_DAT_140dc1aa0,&local_818);
      } while (cVar3 == '\0');
    }
    if (((ulonglong)local_4d8 & 1) != 0) {
      return 0;
    }
    do {
      local_818 = (char *)0x64;
      FUN_140008100(&local_818);
    } while (((ulonglong)local_4d8 & 1) == 0);
    return 0;
  }
  local_b8 = (uint *)0x0;
  local_a0 = param_2;
  uVar4 = (*(code *)*param_2)(param_2[3],&local_b8);
  puVar24 = local_b8;
  if (local_b8 == (uint *)0x0 && uVar4 != 0) {
    if ((*(byte *)(DAT_14151e360 + 0x39) < 8) &&
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e210),
       DAT_14151e360 == 0)) {
      return 0;
    }
    lVar6 = DAT_14151e360;
    local_4d8 = (char *)((ulonglong)local_4d8 & 0xffffffffffffff00);
    local_818 = (char *)&local_4d8;
    cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_818);
    if (cVar3 == '\0') {
      do {
        local_818 = (char *)0x64;
        FUN_140008100(&local_818);
        local_818 = (char *)&local_4d8;
        cVar3 = FUN_140b53dc0(lVar6,&PTR_DAT_140dc1aa0,&local_818);
      } while (cVar3 == '\0');
    }
    if (((ulonglong)local_4d8 & 1) != 0) {
      return 0;
    }
    do {
      local_818 = (char *)0x64;
      FUN_140008100(&local_818);
    } while (((ulonglong)local_4d8 & 1) == 0);
    return 0;
  }
  local_1e8 = (byte *)0x0;
  uStack_1e0 = (byte *)0x0;
  local_1d8 = (byte *)0x0;
  if (uVar4 != 0) {
    sVar16 = (ulonglong)uVar4 * 8;
    if (uVar4 < 0x200) {
      local_1e8 = (byte *)FUN_140b65d30(sVar16);
    }
    else {
      lVar6 = FUN_140b65d30(sVar16 + 0x27);
      local_1e8 = (byte *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(local_1e8 + -8) = lVar6;
    }
    pbVar21 = local_1e8 + sVar16;
    local_1d8 = pbVar21;
    memmove(local_1e8,puVar24,sVar16);
    uStack_1e0 = pbVar21;
  }
  local_118 = (char *)0x0;
  pcStack_110 = (char *)0x0;
  local_108 = (char *)0x0;
  if (param_3 == '\0') {
    local_88 = 0;
  }
  else {
    local_818 = (char *)((ulonglong)local_818 & 0xffffffff00000000);
    vkEnumerateInstanceExtensionProperties(0);
    uVar4 = (uint)local_818;
    if (((ulonglong)local_818 & 0xffffffff) == 0) {
      local_88 = 0;
      vkEnumerateInstanceExtensionProperties(0);
    }
    else {
      sVar16 = ((ulonglong)local_818 & 0xffffffff) * 0x104;
      if ((uint)local_818 < 0x10) {
        pvVar17 = (void *)FUN_140b65d30(sVar16);
      }
      else {
        lVar6 = FUN_140b65d30(sVar16 + 0x27);
        pvVar17 = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)pvVar17 - 8) = lVar6;
      }
      lVar6 = 0;
      memset(pvVar17,0,sVar16);
      vkEnumerateInstanceExtensionProperties(0,&local_818);
      do {
        iVar5 = strcmp((char *)((longlong)pvVar17 + lVar6),"VK_EXT_debug_utils");
        if (iVar5 == 0) break;
        bVar25 = sVar16 - 0x104 != lVar6;
        lVar6 = lVar6 + 0x104;
      } while (bVar25);
      pvVar18 = pvVar17;
      if ((0xf < uVar4) &&
         (pvVar18 = *(void **)((longlong)pvVar17 + -8),
         0x1f < (ulonglong)((longlong)pvVar17 + (-8 - (longlong)pvVar18)))) goto LAB_14052ad91;
      uVar7 = thunk_FUN_140b68ba8(pvVar18);
      if (iVar5 == 0) {
        local_818 = "VK_EXT_debug_utils";
        if (uStack_1e0 == local_1d8) {
          uVar7 = FUN_140029790(&local_1e8);
        }
        else {
          *(char **)uStack_1e0 = "VK_EXT_debug_utils";
          uStack_1e0 = uStack_1e0 + 8;
        }
        local_88 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
      else {
        local_88 = 0;
      }
    }
    local_818 = (char *)((ulonglong)local_818 & 0xffffffff00000000);
    vkEnumerateInstanceLayerProperties(&local_818);
    uVar4 = (uint)local_818;
    if (((ulonglong)local_818 & 0xffffffff) == 0) {
      vkEnumerateInstanceLayerProperties(&local_818);
    }
    else {
      sVar16 = ((ulonglong)local_818 & 0xffffffff) * 0x208;
      if ((uint)local_818 < 8) {
        pvVar17 = (void *)FUN_140b65d30(sVar16);
      }
      else {
        lVar6 = FUN_140b65d30(sVar16 + 0x27);
        pvVar17 = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)pvVar17 - 8) = lVar6;
      }
      lVar6 = 0;
      memset(pvVar17,0,sVar16);
      vkEnumerateInstanceLayerProperties(&local_818,pvVar17);
      do {
        iVar5 = strcmp((char *)((longlong)pvVar17 + lVar6),"VK_LAYER_KHRONOS_validation");
        if (iVar5 == 0) break;
        bVar25 = sVar16 - 0x208 != lVar6;
        lVar6 = lVar6 + 0x208;
      } while (bVar25);
      pvVar18 = pvVar17;
      if ((7 < uVar4) &&
         (pvVar18 = *(void **)((longlong)pvVar17 + -8),
         0x1f < (ulonglong)((longlong)pvVar17 + (-8 - (longlong)pvVar18)))) goto LAB_14052ad91;
      thunk_FUN_140b68ba8(pvVar18);
      if (iVar5 == 0) {
        local_818 = "VK_LAYER_KHRONOS_validation";
        if (pcStack_110 == local_108) {
          FUN_140029790(&local_118);
        }
        else {
          *(char **)pcStack_110 = "VK_LAYER_KHRONOS_validation";
          pcStack_110 = pcStack_110 + 8;
        }
      }
    }
  }
  local_4d8 = (char *)((ulonglong)local_4d8 & 0xffffffff00000000);
  pcVar20 = (char *)0x0;
  vkEnumerateInstanceLayerProperties(&local_4d8);
  uVar13 = (ulonglong)local_4d8 & 0xffffffff;
  local_818 = (char *)0x0;
  uStack_810 = (char *)0x0;
  local_808 = (char *)0x0;
  if (uVar13 != 0) {
    sVar16 = uVar13 * 0x208;
    if ((uint)local_4d8 < 8) {
      pcVar20 = (char *)FUN_140b65d30(sVar16);
    }
    else {
      lVar6 = FUN_140b65d30(sVar16 + 0x27);
      pcVar20 = (char *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(pcVar20 + -8) = lVar6;
    }
    local_818 = pcVar20;
    local_808 = pcVar20 + uVar13 * 0x208;
    memset(pcVar20,0,sVar16);
    uStack_810 = pcVar20 + uVar13 * 0x208;
  }
  local_90 = (uint *)CONCAT71(local_90._1_7_,param_3);
  vkEnumerateInstanceLayerProperties(&local_4d8,pcVar20);
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    FUN_140b5c490(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e260);
  }
  pcVar20 = uStack_810;
  for (pcVar12 = local_818; pcVar12 != pcVar20; pcVar12 = pcVar12 + 0x208) {
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      uVar4 = *(uint *)(pcVar12 + 0x104);
      local_2c8 = (char *)(CONCAT44(local_2c8._4_4_,uVar4) & 0xffffffff00000fff);
      local_78 = (char *)(CONCAT44(local_78._4_4_,uVar4 >> 0xc) & 0xffffffff000003ff);
      local_68 = uVar4 >> 0x16 & 0x7f;
      uVar4 = *(uint *)(pcVar12 + 0x100);
      local_64 = uVar4 & 0xfff;
      local_94 = uVar4 >> 0xc & 0x3ff;
      local_7c = uVar4 >> 0x16 & 0x7f;
      FUN_140b608d0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e288,pcVar12,
                    &local_7c,&local_94,&local_64,&local_68,&local_78,&local_2c8,pcVar12 + 0x108);
    }
  }
  cVar3 = (char)local_90;
  if (local_818 != (char *)0x0) {
    uVar13 = (longlong)local_808 - (longlong)local_818;
    pcVar20 = local_818;
    if (0xfff < uVar13) {
      pcVar20 = *(char **)(local_818 + -8);
      if ((char *)0x1f < local_818 + (-8 - (longlong)pcVar20)) goto LAB_14052ad91;
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_140b68ba8(pcVar20,uVar13);
  }
  local_4d8 = (char *)((ulonglong)local_4d8 & 0xffffffff00000000);
  vkEnumerateInstanceExtensionProperties(0,&local_4d8,0);
  local_818 = (char *)0x0;
  uStack_810 = (char *)0x0;
  local_808 = (char *)0x0;
  if (((ulonglong)local_4d8 & 0xffffffff) != 0) {
    sVar16 = ((ulonglong)local_4d8 & 0xffffffff) * 0x104;
    if ((uint)local_4d8 < 0x10) {
      local_818 = (char *)FUN_140b65d30(sVar16);
    }
    else {
      lVar6 = FUN_140b65d30(sVar16 + 0x27);
      local_818 = (char *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(local_818 + -8) = lVar6;
    }
    pcVar20 = local_818 + sVar16;
    local_808 = pcVar20;
    memset(local_818,0,sVar16);
    uStack_810 = pcVar20;
  }
  vkEnumerateInstanceExtensionProperties(0,&local_4d8);
  pcVar12 = local_818;
  pcVar20 = uStack_810;
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    FUN_140b5c490(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e2b0);
    pcVar12 = local_818;
    pcVar20 = uStack_810;
  }
  for (; pcVar12 != pcVar20; pcVar12 = pcVar12 + 0x104) {
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e2d8);
    }
  }
  if (local_818 != (char *)0x0) {
    uVar13 = (longlong)local_808 - (longlong)local_818;
    pcVar20 = local_818;
    if (0xfff < uVar13) {
      pcVar20 = *(char **)(local_818 + -8);
      if ((char *)0x1f < local_818 + (-8 - (longlong)pcVar20)) goto LAB_14052ad91;
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_140b68ba8(pcVar20,uVar13);
  }
  local_2c8 = (char *)CONCAT44(local_2c8._4_4_,0x400000);
  pcVar8 = (code *)vkGetInstanceProcAddr(0,"vkEnumerateInstanceVersion");
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(&local_2c8);
  }
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    local_818 = (char *)(CONCAT44(local_818._4_4_,(uint)local_2c8) & 0xffffffff00000fff);
    local_4d8 = (char *)(CONCAT44(local_4d8._4_4_,(uint)local_2c8 >> 0xc) & 0xffffffff000003ff);
    local_78 = (char *)(CONCAT44(local_78._4_4_,(uint)local_2c8 >> 0x16) & 0xffffffff0000007f);
    FUN_140b5d290(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e300,&local_78,
                  &local_4d8,&local_818);
  }
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    local_818 = (char *)((ulonglong)local_818 & 0xffffffff00000000);
    local_4d8 = (char *)CONCAT44(local_4d8._4_4_,3);
    local_78 = (char *)CONCAT44(local_78._4_4_,1);
    FUN_140b5d290(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e328,&local_78,
                  &local_4d8,&local_818);
  }
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    local_4d8 = "true";
    local_818 = "true";
    if (local_118 == pcStack_110) {
      local_818 = "false";
    }
    if (cVar3 == '\0') {
      local_4d8 = "false";
    }
    FUN_140b5b900(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e350,&local_4d8);
  }
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    local_818 = "false";
    if ((char)local_88 != '\0') {
      local_818 = "true";
    }
    index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e378,&local_818);
  }
  pcVar20 = pcStack_110;
  if (local_118 != pcStack_110) {
    lVar6 = DAT_14151e360;
    pcVar12 = local_118;
    do {
      local_818 = *(char **)pcVar12;
      if (*(byte *)(lVar6 + 0x39) < 5) {
        index_out_of_bounds(lVar6,&PTR_s__opt_actions_runner__work_Platfo_140e4e3a0,&local_818);
        lVar6 = DAT_14151e360;
      }
      pcVar12 = pcVar12 + 8;
    } while (pcVar12 != pcVar20);
  }
  pbVar21 = uStack_1e0;
  pbVar19 = local_1e8;
  if (local_1e8 != uStack_1e0) {
    lVar6 = DAT_14151e360;
    pbVar23 = local_1e8;
    do {
      local_818 = *(char **)pbVar23;
      if (*(byte *)(lVar6 + 0x39) < 5) {
        index_out_of_bounds(lVar6,&PTR_s__opt_actions_runner__work_Platfo_140e4e3c8,&local_818);
        lVar6 = DAT_14151e360;
      }
      pbVar23 = pbVar23 + 8;
      pbVar19 = uStack_1e0;
    } while (pbVar23 != pbVar21);
  }
  local_4d8 = (char *)0x0;
  pcStack_4d0 = (char *)0x0;
  local_4c8 = "Luduvo";
  uStack_4c0 = (undefined8 *)0x1000;
  local_4b8 = "Luduvo";
  uStack_4b0 = 0x40300000001000;
  uStack_810 = (char *)0x0;
  local_808 = (char *)0x0;
  local_818 = (char *)0x1;
  puStack_800 = &local_4d8;
  local_7f8 = (uint *)((ulonglong)((longlong)pcStack_110 - (longlong)local_118) >> 3 & 0xffffffff);
  pcStack_7f0 = local_118;
  local_7e8 = (ulonglong)((longlong)pbVar19 - (longlong)local_1e8) >> 3 & 0xffffffff;
  pbStack_7e0 = local_1e8;
  iVar5 = vkCreateInstance(&local_818,0);
  if (iVar5 == 0) {
    if (((char)local_88 != '\0') &&
       (pcVar8 = (code *)vkGetInstanceProcAddr(*local_70,"vkCreateDebugUtilsMessengerEXT"),
       pcVar8 != (code *)0x0)) {
      ppcStack_2c0 = (char **)0x0;
      local_2b8._0_4_ = 0;
      uStack_2ac = 0;
      uStack_2a0 = 0;
      local_2c8 = (char *)0x3b9cbe04;
      local_2b8._4_4_ = 0x1100;
      uStack_2b0 = 7;
      local_2a8 = FUN_14052b0f0;
      (*pcVar8)(*local_70,&local_2c8);
    }
  }
  else {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      local_2c8 = (char *)CONCAT44(local_2c8._4_4_,iVar5);
      FUN_140b5a3b0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e238);
      if (DAT_14151e360 == 0) goto LAB_14052941d;
    }
    lVar6 = DAT_14151e360;
    local_78 = (char *)((ulonglong)local_78 & 0xffffffffffffff00);
    local_2c8 = (char *)&local_78;
    cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
    if (cVar3 == '\0') {
      do {
        local_2c8 = (char *)0x64;
        FUN_140008100(&local_2c8);
        local_2c8 = (char *)&local_78;
        cVar3 = FUN_140b53dc0(lVar6,&PTR_DAT_140dc1aa0);
      } while (cVar3 == '\0');
    }
    if (((ulonglong)local_78 & 1) == 0) {
      do {
        local_2c8 = (char *)0x64;
        FUN_140008100(&local_2c8);
      } while (((ulonglong)local_78 & 1) == 0);
    }
  }
LAB_14052941d:
  if (local_118 != (char *)0x0) {
    uVar13 = (longlong)local_108 - (longlong)local_118;
    pcVar20 = local_118;
    if (0xfff < uVar13) {
      pcVar20 = *(char **)(local_118 + -8);
      if ((char *)0x1f < local_118 + (-8 - (longlong)pcVar20)) goto LAB_14052ad91;
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_140b68ba8(pcVar20,uVar13);
  }
  if (local_1e8 != (byte *)0x0) {
    uVar13 = (longlong)local_1d8 - (longlong)local_1e8;
    pbVar21 = local_1e8;
    if (0xfff < uVar13) {
      pbVar21 = *(byte **)(local_1e8 + -8);
      if ((byte *)0x1f < local_1e8 + (-8 - (longlong)pbVar21)) goto LAB_14052ad91;
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_140b68ba8(pbVar21,uVar13);
  }
  puVar14 = local_70;
  if (iVar5 != 0) {
    return 0;
  }
  cVar3 = (*(code *)local_a0[1])(local_a0[3],*local_70,local_70 + 8);
  if (cVar3 == '\0') {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e1e8);
      if (DAT_14151e360 == 0) goto LAB_14052ad64;
    }
    lVar6 = DAT_14151e360;
    local_4d8 = (char *)((ulonglong)local_4d8 & 0xffffffffffffff00);
    local_818 = (char *)&local_4d8;
    cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_818);
    if (cVar3 == '\0') {
      do {
        local_818 = (char *)0x64;
        FUN_140008100(&local_818);
        local_818 = (char *)&local_4d8;
        cVar3 = FUN_140b53dc0(lVar6,&PTR_DAT_140dc1aa0,&local_818);
      } while (cVar3 == '\0');
    }
    if (((ulonglong)local_4d8 & 1) == 0) {
      do {
        local_818 = (char *)0x64;
        FUN_140008100(&local_818);
      } while (((ulonglong)local_4d8 & 1) == 0);
    }
    goto LAB_14052ad64;
  }
  local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
  vkEnumeratePhysicalDevices(*puVar14,&local_78,0);
  uVar13 = (ulonglong)local_78 & 0xffffffff;
  if (uVar13 == 0) {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e468);
      if (DAT_14151e360 == 0) goto LAB_14052ad64;
    }
    lVar6 = DAT_14151e360;
    local_4d8 = (char *)((ulonglong)local_4d8 & 0xffffffffffffff00);
    local_818 = (char *)&local_4d8;
    cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_818);
    if (cVar3 == '\0') {
      do {
        local_818 = (char *)0x64;
        FUN_140008100(&local_818);
        local_818 = (char *)&local_4d8;
        cVar3 = FUN_140b53dc0(lVar6,&PTR_DAT_140dc1aa0,&local_818);
      } while (cVar3 == '\0');
    }
    if (((ulonglong)local_4d8 & 1) == 0) {
      do {
        local_818 = (char *)0x64;
        FUN_140008100(&local_818);
      } while (((ulonglong)local_4d8 & 1) == 0);
    }
    goto LAB_14052ad64;
  }
  sVar16 = uVar13 * 8;
  if ((uint)local_78 < 0x200) {
    puVar24 = (uint *)FUN_140b65d30(sVar16);
  }
  else {
    lVar6 = FUN_140b65d30(sVar16 + 0x27);
    puVar24 = (uint *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar24 + -2) = lVar6;
  }
  puVar15 = puVar24 + uVar13 * 2;
  local_b8 = puVar24;
  local_a8 = puVar15;
  memset(puVar24,0,sVar16);
  puVar14 = &local_78;
  local_4e0 = puVar15;
  local_b0 = puVar15;
  vkEnumeratePhysicalDevices(*local_70);
  pcVar20 = getenv("LDV_VK_SKIP_BLOCKLIST");
  local_a0 = (undefined8 *)0x0;
  if (pcVar20 != (char *)0x0) {
    local_a0 = (undefined8 *)0x0;
    if (((*pcVar20 != '\0') && (*pcVar20 != '0')) &&
       (local_a0 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar14 >> 8),1),
       *(byte *)(DAT_14151e360 + 0x39) < 7)) {
      FUN_140b53500();
    }
  }
  local_68 = 0xffffffff;
  local_88 = CONCAT44(local_88._4_4_,0xffffffff);
  uVar4 = 0;
  local_bc = -1;
  local_1f0 = 0;
  local_90 = puVar24;
  while( true ) {
    local_64 = uVar4;
    if ((uint)local_78 <= uVar4) break;
    memset(&local_818,0,0x338);
    vkGetPhysicalDeviceProperties(*(undefined8 *)(puVar24 + (ulonglong)uVar4 * 2));
    if ((uint)local_818 < 0x403000) {
      if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
        local_4d8 = (char *)(CONCAT44(local_4d8._4_4_,(uint)local_818 >> 0xc) & 0xffffffff000003ff);
        local_2c8 = (char *)CONCAT44(local_2c8._4_4_,(uint)local_818 >> 0x16);
        index_out_of_bounds();
      }
    }
    else {
      if (((char)local_a0 == '\0') && ((int)uStack_810 == 0x8086)) {
        if (uStack_810._4_4_ < 0x5900) {
          puVar10 = &DAT_140e4e598;
          if (0xffffffbf < uStack_810._4_4_ - 0x3ec0) {
LAB_1405298a2:
            local_4d8 = *(char **)(puVar10 + 0x10);
            if (local_4d8 != (char *)0x0) {
              if (*(byte *)(DAT_14151e360 + 0x39) < 7) {
                FUN_140b61350();
              }
              goto LAB_140529797;
            }
          }
        }
        else {
          puVar10 = &DAT_140e4e580;
          if (uStack_810._4_4_ < 0x5940) goto LAB_1405298a2;
          if (uStack_810._4_4_ < 0x9b00) {
            puVar10 = &DAT_140e4e5c8;
            if (0xfffffeff < uStack_810._4_4_ - 0x8b00) goto LAB_1405298a2;
          }
          else {
            puVar10 = &DAT_140e4e5b0;
            if (uStack_810._4_4_ < 0x9c00) goto LAB_1405298a2;
          }
        }
      }
      pcStack_110 = (char *)0x0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = (char *)0x0;
      uStack_100 = 0;
      local_118 = (char *)0x35;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_2a8 = (code *)0x0;
      uStack_2a0 = 0;
      local_2b8._0_4_ = 0;
      local_2b8._4_4_ = 0;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      local_2c8 = (char *)0x33;
      ppcStack_2c0 = &local_118;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_408 = 0;
      uStack_404 = 0;
      uStack_400 = 0;
      uStack_3fc = 0;
      local_418 = 0;
      uStack_410 = 0;
      uStack_40c = 0;
      local_428 = 0;
      uStack_420 = 0;
      local_438 = 0;
      uStack_430 = 0;
      local_448 = 0;
      uStack_440 = 0;
      local_458 = 0;
      uStack_450 = 0;
      local_468 = 0;
      uStack_460 = 0;
      local_478 = 0;
      uStack_470 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_4b8 = (char *)0x0;
      uStack_4b0 = 0;
      local_4c8 = (char *)0x0;
      uStack_4c0 = (undefined8 *)0x0;
      local_4d8 = (char *)0x3b9bb078;
      pcStack_4d0 = (char *)&local_2c8;
      vkGetPhysicalDeviceFeatures2(*(undefined8 *)(puVar24 + (ulonglong)local_64 * 2),&local_4d8);
      puVar24 = local_90;
      local_1e8 = (byte *)0x141357b80;
      uStack_1e0 = (byte *)CONCAT44(uStack_4c0._4_4_,1);
      local_1d8 = (byte *)0x141330d98;
      uStack_1d0 = (char *)CONCAT44(local_4a8._4_4_,1);
      local_1c8 = "timelineSemaphore";
      uStack_1c0 = CONCAT44(local_228._4_4_,1);
      local_19c = local_248._4_4_;
      local_1b8 = "shaderSampledImageArrayNonUniformIndexing";
      uStack_1b0 = (undefined8 *)CONCAT44((int)uStack_280,1);
      local_1a8 = "runtimeDescriptorArray";
      local_1a0 = 1;
      local_18c = uStack_250._4_4_;
      local_198 = "descriptorBindingPartiallyBound";
      local_190 = 1;
      local_17c = (int)local_248;
      local_188 = "descriptorBindingVariableDescriptorCount";
      local_180 = 1;
      local_14c = local_2b8._4_4_;
      local_16c = local_268._4_4_;
      local_178 = "descriptorBindingSampledImageUpdateAfterBind";
      local_170 = 1;
      local_15c = (int)uStack_250;
      local_168 = "descriptorBindingUpdateUnusedWhilePending";
      local_160 = 1;
      local_158 = "drawIndirectCount";
      local_150 = 1;
      local_13c = local_e8._4_4_;
      local_12c = (int)local_d8;
      local_148 = "synchronization2";
      local_140 = 1;
      local_138 = "dynamicRendering";
      local_130 = 1;
      local_11c = uStack_480._4_4_;
      local_128 = "samplerAnisotropy";
      local_120 = 0;
      local_4d8 = (char *)((longlong)&local_808 + 4);
      if (((((((uStack_4c0._4_4_ == 1) && (local_4a8._4_4_ == 1)) && (local_228._4_4_ == 1)) &&
            (((int)uStack_280 == 1 && (local_248._4_4_ == 1)))) &&
           ((uStack_250._4_4_ == 1 && (((int)local_248 == 1 && (local_268._4_4_ == 1)))))) &&
          ((int)uStack_250 == 1)) &&
         (((local_2b8._4_4_ == 1 && (local_e8._4_4_ == 1)) && ((int)local_d8 == 1)))) {
        memset(&local_4d8,0,0x208);
        vkGetPhysicalDeviceMemoryProperties();
        if (local_3d4 == 0) {
          uVar13 = 0;
        }
        else {
          if (local_3d4 == 1) {
            uVar11 = 0;
            uVar13 = 0;
          }
          else {
            pbVar21 = local_3b8;
            uVar11 = 0;
            uVar13 = 0;
            do {
              if ((pbVar21[-0x10] & 1) == 0) {
                bVar1 = *pbVar21;
              }
              else {
                uVar13 = uVar13 + *(longlong *)(pbVar21 + -0x18);
                bVar1 = *pbVar21;
              }
              if ((bVar1 & 1) != 0) {
                uVar13 = uVar13 + *(longlong *)(pbVar21 + -8);
              }
              uVar11 = uVar11 + 2;
              pbVar21 = pbVar21 + 0x20;
            } while ((local_3d4 & 0xfffffffe) != uVar11);
          }
          if (((local_3d4 & 1) != 0) && ((local_3c8[uVar11 * 0x10] & 1) != 0)) {
            uVar13 = uVar13 + *(longlong *)(local_3c8 + uVar11 * 0x10 + -8);
          }
        }
        if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
          local_4d8 = (char *)(uVar13 >> 0x14);
          local_2c8 = "Other";
          if ((int)local_808 - 1U < 4) {
            local_2c8 = (&PTR_s_Integrated_140e4ff90)[(int)local_808 - 1U];
          }
          FUN_140b61530();
        }
        iVar5 = 1;
        if ((int)local_808 - 1U < 4) {
          iVar5 = *(int *)(&DAT_140e4ff80 + (ulonglong)((int)local_808 - 1U) * 4);
        }
        puVar24 = local_90;
        if ((local_bc < iVar5) || ((iVar5 == local_bc && (local_1f0 < uVar13)))) {
          local_68 = local_64;
          local_88 = CONCAT44(local_88._4_4_,local_64);
          local_1f0 = uVar13;
          local_bc = iVar5;
        }
      }
      else if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
        FUN_140b5b900();
      }
    }
LAB_140529797:
    uVar4 = local_64 + 1;
  }
  if ((int)local_88 < 0) {
    if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e530),
       DAT_14151e360 != 0)) {
      lVar6 = DAT_14151e360;
      local_4d8 = (char *)((ulonglong)local_4d8 & 0xffffffffffffff00);
      local_818 = (char *)&local_4d8;
      cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
      puVar24 = local_b8;
      if (cVar3 == '\0') {
        do {
          local_818 = (char *)0x64;
          FUN_140008100(&local_818);
          local_818 = (char *)&local_4d8;
          cVar3 = FUN_140b53dc0(lVar6,&PTR_DAT_140dc1aa0);
          puVar24 = local_b8;
        } while (cVar3 == '\0');
      }
      while (local_b8 = puVar24, ((ulonglong)local_4d8 & 1) == 0) {
        local_818 = (char *)0x64;
        FUN_140008100();
        puVar24 = local_b8;
      }
    }
    puVar15 = local_a8;
    iVar5 = (int)local_88;
    if (puVar24 != (uint *)0x0) goto LAB_14052a0f6;
  }
  else {
    uVar7 = *(undefined8 *)(puVar24 + (local_88 & 0xffffffff) * 2);
    local_70[1] = uVar7;
    memset(&local_818,0,0x338);
    vkGetPhysicalDeviceProperties(uVar7,&local_818);
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      if ((int)local_808 - 1U < 4) {
        local_4d8 = (&PTR_s_Integrated_140e4ff90)[(int)local_808 - 1U];
      }
      else {
        local_4d8 = "Other";
      }
      FUN_140b61750(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4e558,&local_68,
                    (longlong)&local_808 + 4,&local_4d8);
    }
    puVar14 = local_70;
    local_408 = 0;
    uStack_404 = 0;
    uStack_400 = 0;
    local_418 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    local_428 = 0;
    uStack_420 = 0;
    local_438 = 0;
    uStack_430 = 0;
    local_448 = 0;
    uStack_440 = 0;
    local_458 = 0;
    uStack_450 = 0;
    local_468 = 0;
    uStack_460 = 0;
    local_478 = 0;
    uStack_470 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_4b8 = (char *)0x0;
    uStack_4b0 = 0;
    local_4c8 = (char *)0x0;
    uStack_4c0 = (undefined8 *)0x0;
    local_4d8 = (char *)0x0;
    pcStack_4d0 = (char *)0x0;
    vkGetPhysicalDeviceFeatures(local_70[1],&local_4d8);
    bVar25 = uStack_490._4_4_ == 1;
    *(bool *)(puVar14 + 9) = bVar25;
    if (!bVar25) {
      local_5e0 = 0x3f800000;
    }
    *(undefined4 *)((longlong)local_70 + 0x4c) = local_5e0;
    *(undefined4 *)(local_70 + 10) = local_6a0;
    descriptorbindingupdateunusedwhilepending(local_70[1],bVar25);
    puVar15 = local_4e0;
    iVar5 = (int)local_88;
LAB_14052a0f6:
    uVar13 = (longlong)puVar15 - (longlong)puVar24;
    puVar15 = puVar24;
    if (0xfff < uVar13) {
      puVar15 = *(uint **)(puVar24 + -2);
      if ((char *)0x1f < (char *)((longlong)puVar24 + (-8 - (longlong)puVar15))) goto LAB_14052ad91;
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_140b68ba8(puVar15,uVar13);
  }
  if (iVar5 < 0) goto LAB_14052ad64;
  local_7c = 0;
  vkGetPhysicalDeviceQueueFamilyProperties(local_70[1],&local_7c,0);
  uVar13 = (ulonglong)local_7c;
  local_1e8 = (byte *)0x0;
  uStack_1e0 = (byte *)0x0;
  local_1d8 = (byte *)0x0;
  if (uVar13 != 0) {
    sVar16 = uVar13 * 0x18;
    if (local_7c < 0xab) {
      pbVar21 = (byte *)FUN_140b65d30(sVar16);
    }
    else {
      lVar6 = FUN_140b65d30(sVar16 + 0x27);
      pbVar21 = (byte *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(pbVar21 + -8) = lVar6;
    }
    local_1d8 = pbVar21 + uVar13 * 0x18;
    local_1e8 = pbVar21;
    memset(pbVar21,0,sVar16);
    uStack_1e0 = pbVar21 + sVar16;
  }
  vkGetPhysicalDeviceQueueFamilyProperties(local_70[1],&local_7c);
  pbVar21 = local_1e8;
  if (local_7c == 0) {
LAB_14052a372:
    if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4fee0),
       DAT_14151e360 != 0)) {
      lVar6 = DAT_14151e360;
      local_4d8 = (char *)((ulonglong)local_4d8 & 0xffffffffffffff00);
      local_818 = (char *)&local_4d8;
      cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
      if (cVar3 == '\0') {
        do {
          local_818 = (char *)0x64;
          FUN_140008100(&local_818);
          local_818 = (char *)&local_4d8;
          cVar3 = FUN_140b53dc0(lVar6,&PTR_DAT_140dc1aa0);
        } while (cVar3 == '\0');
      }
      if (((ulonglong)local_4d8 & 1) == 0) {
        do {
          local_818 = (char *)0x64;
          FUN_140008100(&local_818);
        } while (((ulonglong)local_4d8 & 1) == 0);
      }
    }
    bVar25 = false;
  }
  else {
    uVar13 = 0;
    pbVar19 = local_1e8;
    do {
      bVar1 = *pbVar19;
      local_818 = (char *)((ulonglong)local_818 & 0xffffffff00000000);
      vkGetPhysicalDeviceSurfaceSupportKHR(local_70[1],uVar13 & 0xffffffff);
      puVar14 = local_70;
      if (((bVar1 & 1) != 0) && ((uint)local_818 != 0)) {
        uVar4 = (uint)uVar13;
        goto LAB_14052a2c3;
      }
      uVar13 = uVar13 + 1;
      pbVar19 = pbVar19 + 0x18;
    } while (uVar13 < local_7c);
    if (local_7c == 0) goto LAB_14052a372;
    uVar4 = 0xffffffff;
    uVar11 = 0;
    uVar13 = 0xffffffff;
    do {
      uVar22 = (uint)uVar13;
      if ((uint)uVar13 == 0xffffffff) {
        uVar22 = (uint)uVar11;
      }
      if ((*pbVar21 & 1) != 0) {
        uVar13 = (ulonglong)uVar22;
      }
      local_818 = (char *)((ulonglong)local_818 & 0xffffffff00000000);
      vkGetPhysicalDeviceSurfaceSupportKHR(puVar14[1],uVar11 & 0xffffffff);
      uVar22 = uVar4;
      if (uVar4 == 0xffffffff) {
        uVar22 = (uint)uVar11;
      }
      if ((uint)local_818 != 0) {
        uVar4 = uVar22;
      }
      uVar11 = uVar11 + 1;
      pbVar21 = pbVar21 + 0x18;
    } while (uVar11 < local_7c);
LAB_14052a2c3:
    uVar22 = (uint)uVar13;
    if ((uVar22 == 0xffffffff) || (uVar4 == 0xffffffff)) goto LAB_14052a372;
    *(uint *)(local_70 + 4) = uVar22;
    *(uint *)(local_70 + 6) = uVar4;
    puVar24 = (uint *)local_70[1];
    local_a0 = (undefined8 *)local_70[8];
    local_68 = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(puVar24,&local_68,0);
    uVar13 = (ulonglong)local_68;
    local_2c8 = (char *)0x0;
    ppcStack_2c0 = (char **)0x0;
    local_2b8._0_4_ = 0;
    local_2b8._4_4_ = 0;
    local_2b8 = (char *)0x0;
    local_90 = puVar24;
    if (uVar13 != 0) {
      sVar16 = uVar13 * 0x18;
      if (local_68 < 0xab) {
        pcVar20 = (char *)FUN_140b65d30(sVar16);
      }
      else {
        lVar6 = FUN_140b65d30(sVar16 + 0x27);
        pcVar20 = (char *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(pcVar20 + -8) = lVar6;
      }
      local_2b8 = pcVar20 + uVar13 * 0x18;
      local_2c8 = pcVar20;
      memset(pcVar20,0,sVar16);
      ppcStack_2c0 = (char **)(pcVar20 + uVar13 * 0x18);
    }
    puVar24 = local_90;
    vkGetPhysicalDeviceQueueFamilyProperties(local_90,&local_68);
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      FUN_140b5c490(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4ff08);
    }
    local_64 = 0;
    if (local_68 != 0) {
      do {
        local_94 = 0;
        vkGetPhysicalDeviceSurfaceSupportKHR(puVar24,local_64);
        pcVar20 = local_2c8;
        lVar6 = DAT_14151e360;
        if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
          local_118 = "false";
          if (local_94 == 1) {
            local_118 = "true";
          }
          uVar13 = (ulonglong)local_64;
          local_b8 = (uint *)0x14134bc6f;
          if (local_64 == uVar4) {
            local_b8 = (uint *)0x14134a164;
          }
          local_78 = "false";
          if (local_64 == uVar22) {
            local_78 = "true";
          }
          uVar2 = *(uint *)(local_2c8 + uVar13 * 0x18);
          local_818 = (char *)0x0;
          uStack_810 = (char *)0x0;
          local_808 = (char *)0x0;
          puStack_800 = (undefined8 *)0xf;
          if ((uVar2 & 1) == 0) {
            lVar9 = 0;
          }
          else {
            local_808 = (char *)0x9;
            local_818 = (char *)0x7363696870617267;
            uStack_810 = (char *)0x7c;
            lVar9 = 9;
          }
          if ((uVar2 & 2) != 0) {
            if (((uint)lVar9 ^ 8) < 8) {
              FUN_140006210(&local_818,8,"false","compute|",8);
            }
            else {
              local_808 = (char *)(lVar9 + 8);
              *(undefined8 *)((longlong)&local_818 + lVar9) = 0x7c657475706d6f63;
              *(undefined1 *)((longlong)&uStack_810 + lVar9) = 0;
            }
          }
          if ((uVar2 & 4) != 0) {
            if ((ulonglong)((longlong)puStack_800 - (longlong)local_808) < 9) {
              FUN_140006210(&local_818,9);
            }
            else {
              pcVar12 = (char *)&local_818;
              if ((undefined8 *)0xf < puStack_800) {
                pcVar12 = local_818;
              }
              pcVar12 = pcVar12 + (longlong)local_808;
              local_808 = local_808 + 9;
              builtin_strncpy(pcVar12,"transfer|",10);
            }
          }
          if ((uVar2 & 8) != 0) {
            if ((ulonglong)((longlong)puStack_800 - (longlong)local_808) < 7) {
              FUN_140006210(&local_818,7);
            }
            else {
              pcVar12 = (char *)&local_818;
              if ((undefined8 *)0xf < puStack_800) {
                pcVar12 = local_818;
              }
              pcVar12 = pcVar12 + (longlong)local_808;
              local_808 = local_808 + 7;
              builtin_strncpy(pcVar12,"sparse|",8);
            }
          }
          if ((uVar2 & 0x10) != 0) {
            if ((ulonglong)((longlong)puStack_800 - (longlong)local_808) < 10) {
              FUN_140006210(&local_818,10);
            }
            else {
              pcVar12 = (char *)&local_818;
              if ((undefined8 *)0xf < puStack_800) {
                pcVar12 = local_818;
              }
              pcVar12 = pcVar12 + (longlong)local_808;
              local_808 = local_808 + 10;
              builtin_strncpy(pcVar12,"protected|",0xb);
            }
          }
          if (local_808 == (char *)0x0) {
            pcStack_4d0 = (char *)0x0;
            local_4c8 = (char *)0x4;
            uStack_4c0 = (undefined8 *)0xf;
            local_4d8 = (char *)0x656e6f6e;
            if ((undefined8 *)0xf < puStack_800) {
              puVar14 = (undefined8 *)((longlong)puStack_800 + 1);
              pcVar12 = local_818;
              if ((undefined8 *)0xfff < puVar14) {
                pcVar12 = *(char **)(local_818 + -8);
                if ((char *)0x1f < local_818 + (-8 - (longlong)pcVar12)) goto LAB_14052ad91;
                puVar14 = puStack_800 + 5;
              }
              thunk_FUN_140b68ba8(pcVar12,puVar14);
            }
          }
          else {
            pcVar12 = (char *)&local_818;
            if ((undefined8 *)0xf < puStack_800) {
              pcVar12 = local_818;
            }
            pcVar12 = pcVar12 + -1 + (longlong)local_808;
            local_808 = local_808 + -1;
            *pcVar12 = '\0';
            local_4c8 = local_808;
            uStack_4c0 = puStack_800;
            local_4d8 = local_818;
            pcStack_4d0 = uStack_810;
          }
          FUN_140b63610(lVar6,&PTR_s__opt_actions_runner__work_Platfo_140e4ff30,&local_64,&local_4d8
                        ,pcVar20 + uVar13 * 0x18 + 4,pcVar20 + (uVar13 * 3 + 1) * 8,
                        pcVar20 + uVar13 * 0x18 + 0xc,pcVar20 + (uVar13 * 3 + 2) * 8,
                        pcVar20 + uVar13 * 0x18 + 0x14,&local_78,&local_b8,&local_118);
          puVar24 = local_90;
          if ((undefined8 *)0xf < uStack_4c0) {
            puVar14 = (undefined8 *)((longlong)uStack_4c0 + 1);
            pcVar20 = local_4d8;
            if ((undefined8 *)0xfff < puVar14) {
              pcVar20 = *(char **)(local_4d8 + -8);
              if ((char *)0x1f < local_4d8 + (-8 - (longlong)pcVar20)) goto LAB_14052ad91;
              puVar14 = uStack_4c0 + 5;
            }
            thunk_FUN_140b68ba8(pcVar20,puVar14);
          }
        }
        local_64 = local_64 + 1;
      } while (local_64 < local_68);
    }
    if (local_2c8 != (char *)0x0) {
      uVar13 = (longlong)local_2b8 - (longlong)local_2c8;
      pcVar20 = local_2c8;
      if (0xfff < uVar13) {
        pcVar20 = *(char **)(local_2c8 + -8);
        if ((char *)0x1f < local_2c8 + (-8 - (longlong)pcVar20)) goto LAB_14052ad91;
        uVar13 = uVar13 + 0x27;
      }
      thunk_FUN_140b68ba8(pcVar20,uVar13);
    }
    bVar25 = true;
  }
  if (local_1e8 != (byte *)0x0) {
    uVar13 = (longlong)local_1d8 - (longlong)local_1e8;
    pbVar21 = local_1e8;
    if (0xfff < uVar13) {
      pbVar21 = *(byte **)(local_1e8 + -8);
      if ((byte *)0x1f < local_1e8 + (-8 - (longlong)pbVar21)) goto LAB_14052ad91;
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_140b68ba8(pbVar21,uVar13);
  }
  if (!bVar25) goto LAB_14052ad64;
  local_68 = 0x3f800000;
  local_118 = (char *)0x0;
  pcStack_110 = (char *)0x0;
  local_108 = (char *)0x0;
  uStack_810 = (char *)0x0;
  local_818 = (char *)0x2;
  local_808 = (char *)((ulonglong)*(uint *)(local_70 + 4) << 0x20);
  puStack_800 = (undefined8 *)0x1;
  local_7f8 = &local_68;
  FUN_140197fb0(&local_118,0);
  if (*(uint *)(local_70 + 6) != *(uint *)(local_70 + 4)) {
    uStack_810 = (char *)0x0;
    local_818 = (char *)0x2;
    local_808 = (char *)((ulonglong)*(uint *)(local_70 + 6) << 0x20);
    puStack_800 = (undefined8 *)0x1;
    local_7f8 = &local_68;
    if (pcStack_110 == local_108) {
      FUN_140197fb0(&local_118);
    }
    else {
      *(uint **)(pcStack_110 + 0x20) = local_7f8;
      *(char **)(pcStack_110 + 0x10) = local_808;
      pcStack_110[0x18] = '\x01';
      pcStack_110[0x19] = '\0';
      pcStack_110[0x1a] = '\0';
      pcStack_110[0x1b] = '\0';
      pcStack_110[0x1c] = '\0';
      pcStack_110[0x1d] = '\0';
      pcStack_110[0x1e] = '\0';
      pcStack_110[0x1f] = '\0';
      pcStack_110[0] = '\x02';
      pcStack_110[1] = '\0';
      pcStack_110[2] = '\0';
      pcStack_110[3] = '\0';
      pcStack_110[4] = '\0';
      pcStack_110[5] = '\0';
      pcStack_110[6] = '\0';
      pcStack_110[7] = '\0';
      pcStack_110[8] = '\0';
      pcStack_110[9] = '\0';
      pcStack_110[10] = '\0';
      pcStack_110[0xb] = '\0';
      pcStack_110[0xc] = '\0';
      pcStack_110[0xd] = '\0';
      pcStack_110[0xe] = '\0';
      pcStack_110[0xf] = '\0';
      pcStack_110 = pcStack_110 + 0x28;
    }
  }
  puVar14 = local_70;
  local_78 = "VK_KHR_swapchain";
  ppcStack_2c0 = (char **)0x0;
  uStack_290 = 0;
  uStack_280 = 0;
  local_2a8 = (code *)0x0;
  uStack_2a0 = 0;
  local_2b8._0_4_ = 0;
  local_2b8._4_4_ = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  local_2c8 = (char *)0x35;
  local_298 = 0x100000000;
  local_288 = 1;
  uStack_430 = 0;
  local_498 = 0;
  uStack_470 = 0;
  uStack_450 = 0;
  local_468 = 0;
  uStack_4c0 = (undefined8 *)0x0;
  local_418 = 0;
  uStack_410 = 0;
  uStack_40c = 0;
  local_428 = 0;
  uStack_420 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_4b8 = (char *)0x0;
  uStack_4b0 = 0;
  local_4d8 = (char *)0x33;
  local_438 = 0x100000000;
  uStack_490 = 1;
  local_478 = 0x100000000;
  uStack_460 = 0x100000001;
  local_458 = 0x100000001;
  local_4c8 = (char *)0x100000000;
  pcStack_4d0 = (char *)&local_2c8;
  local_808 = (char *)0x0;
  pbStack_7e0 = (byte *)0x0;
  local_738 = 0;
  uStack_730 = 0;
  local_748 = 0;
  uStack_740 = 0;
  local_758 = 0;
  uStack_750 = 0;
  local_768 = 0;
  uStack_760 = 0;
  local_778 = 0;
  uStack_770 = 0;
  local_788 = 0;
  uStack_780 = 0;
  local_798 = 0;
  uStack_790 = 0;
  local_7a8 = 0;
  uStack_7a0 = 0;
  local_7b8 = 0;
  uStack_7b0 = 0;
  local_7c8 = 0;
  local_7d8 = 0;
  uStack_7d0 = 0;
  local_7f8 = (uint *)0x0;
  pcStack_7f0 = (char *)0x0;
  local_818 = (char *)0x3b9bb078;
  puStack_800 = (undefined8 *)0x100000000;
  local_7e8 = 0x100000000;
  lStack_7c0 = (ulonglong)*(byte *)(local_70 + 9) << 0x20;
  uStack_810 = (char *)&local_4d8;
  local_1c8 = (char *)0x0;
  uStack_1c0 = 0;
  local_1a8 = (char *)0x0;
  local_1e8 = (byte *)0x3;
  local_1d8 = (byte *)((ulonglong)
                       (uint)((int)((ulonglong)((longlong)pcStack_110 - (longlong)local_118) >> 3) *
                             -0x33333333) << 0x20);
  uStack_1d0 = local_118;
  local_1b8 = (char *)0x1;
  uStack_1b0 = &local_78;
  uStack_1e0 = (byte *)&local_818;
  iVar5 = vkCreateDevice(local_70[1],&local_1e8);
  if (iVar5 == 0) {
    vkGetDeviceQueue(puVar14[2],*(undefined4 *)(puVar14 + 4));
    if (*(int *)(puVar14 + 6) == *(int *)(puVar14 + 4)) {
      puVar14[5] = puVar14[3];
    }
    else {
      vkGetDeviceQueue(puVar14[2]);
    }
  }
  else {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      local_b8 = (uint *)CONCAT44(local_b8._4_4_,iVar5);
      FUN_140b5a3b0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e4ff58);
      if (DAT_14151e360 == 0) goto LAB_14052ad24;
    }
    lVar6 = DAT_14151e360;
    local_64 = local_64 & 0xffffff00;
    local_b8 = &local_64;
    cVar3 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0);
    if (cVar3 == '\0') {
      do {
        local_b8 = (uint *)0x64;
        FUN_140008100(&local_b8);
        local_b8 = &local_64;
        cVar3 = FUN_140b53dc0(lVar6,&PTR_DAT_140dc1aa0);
      } while (cVar3 == '\0');
    }
    if ((local_64 & 1) == 0) {
      do {
        local_b8 = (uint *)0x64;
        FUN_140008100(&local_b8);
      } while ((local_64 & 1) == 0);
    }
  }
LAB_14052ad24:
  if (local_118 != (char *)0x0) {
    uVar13 = (longlong)local_108 - (longlong)local_118;
    pcVar20 = local_118;
    if (0xfff < uVar13) {
      pcVar20 = *(char **)(local_118 + -8);
      if ((char *)0x1f < local_118 + (-8 - (longlong)pcVar20)) {
LAB_14052ad91:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar13 = uVar13 + 0x27;
    }
    thunk_FUN_140b68ba8(pcVar20,uVar13);
  }
  if (iVar5 == 0) {
    return 1;
  }
LAB_14052ad64:
  vkdestroydebugutilsmessengerext(local_70);
  return 0;
}

