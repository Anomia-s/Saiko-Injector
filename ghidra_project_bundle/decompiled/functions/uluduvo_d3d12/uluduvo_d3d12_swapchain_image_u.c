/**
 * Function: uluduvo_d3d12_swapchain_image_u
 * Address:  140542e90
 * Signature: undefined uluduvo_d3d12_swapchain_image_u(void)
 * Body size: 2466 bytes
 */


bool uluduvo_d3d12_swapchain_image_u(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong **ppuVar5;
  ulonglong *puVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong *local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  ulonglong **local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  undefined2 local_210;
  undefined6 uStack_20e;
  undefined2 local_208;
  undefined6 uStack_206;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined2 local_1f0;
  undefined4 local_1ee;
  undefined2 local_1ea;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  byte local_14c;
  undefined1 local_14b;
  undefined7 uStack_148;
  undefined1 local_141;
  undefined7 uStack_140;
  undefined1 local_139;
  undefined8 local_138;
  ulonglong local_130;
  undefined1 local_128;
  undefined4 local_127;
  undefined4 local_120;
  undefined2 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined6 uStack_f8;
  undefined2 local_f2;
  undefined6 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_c8 [2];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  ulonglong *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 *local_90;
  uint local_84 [17];
  
  local_84[1] = 0xfffffffe;
  local_84[2] = 0xffffffff;
  local_90 = param_1;
  FUN_140544640(param_1 + 3,3,&local_330);
  local_84[0] = 0;
LAB_140542f20:
  uVar12 = local_84[0];
  plVar2 = (longlong *)*local_90;
  plVar1 = (longlong *)(local_90[3] + (ulonglong)local_84[0] * 0x18);
  plVar3 = *(longlong **)(local_90[3] + (ulonglong)local_84[0] * 0x18);
  if (plVar3 != (longlong *)0x0) {
    *plVar1 = 0;
    (**(code **)(*plVar3 + 0x10))(plVar3,local_84[0]);
  }
  iVar8 = (**(code **)(*plVar2 + 0x48))(plVar2,local_84[0],&DAT_140df56c0,plVar1);
  if (iVar8 < 0) {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      local_330 = (ulonglong **)CONCAT44(local_330._4_4_,iVar8);
      FUN_140b5d0f0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e535f0,local_84,
                    &local_330);
      if (DAT_14151e360 == 0) goto LAB_1405437e6;
    }
    lVar11 = DAT_14151e360;
    local_3b8 = (longlong *)((ulonglong)local_3b8 & 0xffffffffffffff00);
    local_330 = (ulonglong **)&local_3b8;
    cVar7 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_330);
    if (cVar7 == '\0') {
      do {
        local_330 = (ulonglong **)0x64;
        FUN_140008100(&local_330);
        local_330 = (ulonglong **)&local_3b8;
        cVar7 = FUN_140b53dc0(lVar11,&PTR_DAT_140dc1aa0,&local_330);
      } while (cVar7 == '\0');
    }
    if (((ulonglong)local_3b8 & 1) == 0) {
      do {
        local_330 = (ulonglong **)0x64;
        FUN_140008100(&local_330);
      } while (((ulonglong)local_3b8 & 1) == 0);
    }
LAB_1405437e6:
    FUN_140544400(local_90);
    goto LAB_1405437f2;
  }
  local_348 = 0;
  uStack_340 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_3b8 = (longlong *)0x0;
  uStack_3b0 = 0;
  FUN_1405445b0(&local_3b8,L"Luduvo D3D12 Swapchain Image %u",local_84[0]);
  (**(code **)(*(longlong *)*plVar1 + 0x30))((longlong *)*plVar1,&local_3b8);
  local_160 = 0x100000001;
  uStack_158 = 0x100000001;
  local_150 = 0;
  local_130 = 0xf;
  local_128 = 1;
  local_120 = 0;
  local_11c = 0;
  local_127 = 1;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_168 = *(undefined8 *)((longlong)local_90 + 0xc);
  iVar8 = *(int *)(local_90 + 1);
  local_14c = 0x17;
  if (1 < iVar8 - 0x1cU) {
    if ((iVar8 == 0x5b) || (iVar8 == 0x57)) {
      local_14c = 0x18;
    }
    else {
      local_14c = 0;
    }
  }
  local_14b = 3;
  local_138 = 0xf;
  uStack_140 = 0x6567616d49206e;
  uStack_148 = 0x61686370617753;
  local_141 = 0x69;
  local_139 = 0;
  local_104 = 0x8000;
  local_100 = 1;
  (**(code **)(*param_2 + 0x48))(param_2,&local_330,0x20004,*plVar1,&local_168);
  ppuVar5 = local_330;
  local_330 = (ulonglong **)0x0;
  plVar2 = (longlong *)plVar1[1];
  plVar1[1] = (longlong)ppuVar5;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  ppuVar5 = local_330;
  if (local_330 != (ulonglong **)0x0) {
    local_330 = (ulonglong **)0x0;
    (*(code *)(*ppuVar5)[2])();
  }
  if ((ulonglong **)plVar1[1] != (ulonglong **)0x0) {
    local_e8 = 0;
    local_e0 = 0;
    local_a8 = (ulonglong *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    local_f2 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_328 = 0x100000000;
    uStack_320 = 0x100000000;
    local_318 = 0;
    local_308 = 0;
    local_310 = 0;
    local_304 = 1;
    local_2fc = 1;
    local_2e8 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e4 = 1;
    local_2dc = 1;
    local_2c8 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2c4 = 1;
    local_2bc = 1;
    local_2a8 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a4 = 1;
    local_29c = 1;
    local_288 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_284 = 1;
    local_27c = 1;
    local_268 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_264 = 1;
    local_25c = 1;
    local_248 = 0;
    local_258 = 0;
    uStack_254 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    local_244 = 1;
    local_23c = 1;
    local_238 = 0;
    local_230 = 1;
    local_220 = 0;
    local_228 = 0;
    local_21c = 1;
    local_214 = 1;
    local_210 = 0;
    uStack_206 = 0;
    uStack_20e = 0;
    local_208 = 0;
    local_200 = 0x100000000;
    uStack_1f8 = 0x100000000;
    local_1f0 = 0;
    local_1ea = 0;
    local_1ee = 0;
    local_330 = (ulonglong **)plVar1[1];
    (**(code **)(*param_2 + 0x130))(param_2,&local_a8,&local_330);
    puVar6 = local_a8;
    local_a8 = (ulonglong *)0x0;
    plVar2 = (longlong *)plVar1[2];
    plVar1[2] = (longlong)puVar6;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    puVar6 = local_a8;
    if (local_a8 != (ulonglong *)0x0) {
      local_a8 = (ulonglong *)0x0;
      (**(code **)(*puVar6 + 0x10))();
    }
    lVar11 = plVar1[2];
    if (lVar11 == 0) {
      if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
         (FUN_140b5c490(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e53640,local_84),
         DAT_14151e360 != 0)) {
        lVar10 = DAT_14151e360;
        local_c8[0] = local_c8[0] & 0xffffffffffffff00;
        local_a8 = local_c8;
        cVar7 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_a8);
        while (cVar7 == '\0') {
          local_a8 = (ulonglong *)0x64;
          FUN_140008100(&local_a8);
          local_a8 = local_c8;
          cVar7 = FUN_140b53dc0(lVar10,&PTR_DAT_140dc1aa0,&local_a8);
        }
        while ((local_c8[0] & 1) == 0) {
          local_a8 = (ulonglong *)0x64;
          FUN_140008100(&local_a8);
        }
      }
      FUN_140544400(local_90);
    }
    else if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      local_c8[0] = CONCAT44(local_c8[0]._4_4_,(uint)local_14c);
      local_a8 = (ulonglong *)*plVar1;
      FUN_140b65140(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e53668,local_84,
                    &local_a8,local_c8,&local_168,(longlong)&local_168 + 4);
    }
    if (0xf < local_130) {
      lVar4 = CONCAT17(local_141,uStack_148);
      uVar9 = local_130 + 1;
      lVar10 = lVar4;
      if (0xfff < uVar9) {
        lVar10 = *(longlong *)(lVar4 + -8);
        if (0x1f < (ulonglong)((lVar4 + -8) - lVar10)) goto LAB_140543823;
        uVar9 = local_130 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar10,uVar9);
    }
    if (lVar11 == 0) goto LAB_1405437f2;
    uVar12 = local_84[0] + 1;
    local_84[0] = uVar12;
    if (2 < uVar12) goto LAB_1405435b1;
    goto LAB_140542f20;
  }
  if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
     (FUN_140b5c490(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e53618,local_84),
     DAT_14151e360 != 0)) {
    lVar11 = DAT_14151e360;
    local_a8 = (ulonglong *)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_330 = &local_a8;
    cVar7 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_330);
    if (cVar7 == '\0') {
      do {
        local_330 = (ulonglong **)0x64;
        FUN_140008100(&local_330);
        local_330 = &local_a8;
        cVar7 = FUN_140b53dc0(lVar11,&PTR_DAT_140dc1aa0,&local_330);
      } while (cVar7 == '\0');
    }
    if (((ulonglong)local_a8 & 1) == 0) {
      do {
        local_330 = (ulonglong **)0x64;
        FUN_140008100(&local_330);
      } while (((ulonglong)local_a8 & 1) == 0);
    }
  }
  FUN_140544400(local_90);
  if (0xf < local_130) {
    lVar10 = CONCAT17(local_141,uStack_148);
    uVar9 = local_130 + 1;
    lVar11 = lVar10;
    if (0xfff < uVar9) {
      lVar11 = *(longlong *)(lVar10 + -8);
      if (0x1f < (ulonglong)((lVar10 + -8) - lVar11)) {
LAB_140543823:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar9 = local_130 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar11,uVar9);
  }
LAB_1405437f2:
  return 2 < uVar12;
LAB_1405435b1:
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    local_330 = (ulonglong **)(((longlong)(local_90[4] - local_90[3]) >> 3) * -0x5555555555555555);
    FUN_140b5a530(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e53690,&local_330);
  }
  goto LAB_1405437f2;
}

