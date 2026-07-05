/**
 * Function: sun_shadow_cascade_draw
 * Address:  1404e23c0
 * Signature: undefined sun_shadow_cascade_draw(void)
 * Body size: 1834 bytes
 */


void sun_shadow_cascade_draw
               (undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffa50;
  char *pcVar14;
  uint in_stack_fffffffffffffa58;
  undefined8 local_588;
  undefined8 uStack_580;
  float local_578;
  float local_574;
  float fStack_570;
  float local_56c;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined4 local_550;
  undefined4 local_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined4 local_538;
  undefined4 local_534;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined4 local_520;
  undefined4 local_51c;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined4 local_508;
  undefined4 local_504;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined4 local_474;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined4 local_430;
  undefined4 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined4 local_414;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  int local_3f0;
  int iStack_3ec;
  int iStack_3e8;
  int iStack_3e4;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined5 uStack_2e0;
  undefined3 uStack_2db;
  undefined5 uStack_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [56];
  undefined8 local_290;
  undefined8 local_288 [48];
  longlong local_108;
  ulonglong local_100;
  undefined1 local_f8;
  undefined4 uStack_f7;
  undefined3 uStack_f3;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_d8 [32];
  undefined1 local_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  uVar8 = in_stack_fffffffffffffa50 & 0xffffffffffffff00;
  uVar11 = param_7;
  local_90 = param_2;
  local_88 = param_3;
  cVar2 = point_shadow_binding_set(param_1,param_4,param_6,param_5,param_7,uVar8);
  if (cVar2 != '\0') {
    local_588 = 0xffffffff00000000;
    uStack_580 = 0xffffffff00000000;
    (**(code **)(*local_90 + 0x48))
              (local_90,param_1[0x13],&local_588,1,uVar11 & 0xffffffff00000000,
               uVar8 & 0xffffffffffffff00,in_stack_fffffffffffffa58 & 0xffffff00);
    local_84 = *(uint *)((longlong)param_1 + 0xc);
    FUN_1401a3690(local_d8,*param_1,"Sun Shadow Upload Cascades",0x3ad,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/ShadowMap.cpp",
                  "gfx_sm_render_shadow_maps");
    piVar7 = (int *)&local_588;
    memset(piVar7,0,0x400);
    uVar10 = *(uint *)(param_1 + 1);
    uVar8 = (ulonglong)uVar10;
    uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0x4b4);
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    else {
      uVar4 = (ulonglong)(uVar10 & 3);
      if (uVar10 < 4) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          iVar5 = (int)uVar6;
          *piVar7 = iVar5;
          piVar7[1] = 0;
          piVar7[2] = 0;
          piVar7[3] = 0;
          piVar7[4] = 0;
          piVar7[5] = 0;
          piVar7[6] = 0;
          piVar7[7] = 0x3f800000;
          *(int *)((longlong)piVar7 + uVar11) = iVar5 + 1;
          puVar9 = (undefined8 *)((longlong)piVar7 + uVar11 + 4);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)((longlong)piVar7 + uVar11 + 0x14) = 0;
          *(undefined4 *)((longlong)piVar7 + uVar11 + 0x1c) = 0x3f800000;
          *(int *)((longlong)piVar7 + uVar11 * 2) = iVar5 + 2;
          puVar9 = (undefined8 *)((longlong)piVar7 + uVar11 * 2 + 4);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)((longlong)piVar7 + uVar11 * 2 + 0x14) = 0;
          *(undefined4 *)((longlong)piVar7 + uVar11 * 2 + 0x1c) = 0x3f800000;
          *(int *)((longlong)piVar7 + uVar11 * 3) = iVar5 + 3;
          puVar9 = (undefined8 *)((longlong)piVar7 + uVar11 * 3 + 4);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)((longlong)piVar7 + uVar11 * 3 + 0x14) = 0;
          *(undefined4 *)((longlong)piVar7 + uVar11 * 3 + 0x1c) = 0x3f800000;
          uVar6 = uVar6 + 4;
          piVar7 = piVar7 + uVar11;
        } while (uVar6 != (uVar10 & 0xfffffffc));
      }
      if (uVar4 != 0) {
        piVar7 = (int *)((longlong)&local_588 + uVar6 * uVar11);
        do {
          *piVar7 = (int)uVar6;
          piVar7[1] = 0;
          piVar7[2] = 0;
          piVar7[3] = 0;
          piVar7[4] = 0;
          piVar7[5] = 0;
          piVar7[6] = 0;
          piVar7[7] = 0x3f800000;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          piVar7 = (int *)((longlong)piVar7 + uVar11);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    (**(code **)(*local_90 + 0x80))(local_90,param_1[0x95],&local_588,uVar8 * uVar11,0);
    FUN_1401a43a0(local_b8);
    FUN_1401a44e0(local_d8);
    if (*(int *)(param_1 + 1) != 0) {
      puVar9 = param_1 + 0x45;
      fVar12 = (float)local_84;
      uVar11 = 0;
      do {
        pcVar14 = "gfx_sm_render_shadow_maps";
        uVar13 = 1;
        FUN_1401a3690(&local_588,*param_1,"Sun Shadow Cascade Culling",0x3ba,
                      "/opt/actions-runner/_work/Platform/Platform/graphics/intern/ShadowMap.cpp",
                      "gfx_sm_render_shadow_maps");
        plVar1 = local_90;
        FUN_1404db130(puVar9,local_90,uVar11 & 0xffffffff,local_88,CONCAT44(uVar13,2),
                      (ulonglong)pcVar14 & 0xffffffff00000000,0,0,0);
        FUN_1404db240(puVar9,plVar1);
        httplib::ClientImpl::vfunction4();
        FUN_1401a43a0(&local_568);
        FUN_1401a44e0(&local_588);
        uVar10 = ((uint)(uVar11 >> 1) & 0x7fffffff) * local_84;
        local_2e8 = 0;
        uStack_2e0 = 0;
        uStack_2db = 0;
        uStack_2d8 = 0;
        memset(local_2c8,0,0x1d0);
        local_588 = param_1[0x98];
        fStack_570 = (float)uVar10;
        uStack_580 = param_1[0x14];
        local_578 = fVar12;
        if ((uVar11 & 1) == 0) {
          local_578 = 0.0;
        }
        local_560 = 0;
        uStack_558 = 0;
        local_550 = 0;
        local_548 = 0;
        uStack_540 = 0;
        local_538 = 0;
        local_530 = 0;
        uStack_528 = 0;
        local_520 = 0;
        local_518 = 0;
        uStack_510 = 0;
        local_508 = 0;
        local_500 = 0;
        uStack_4f8 = 0;
        local_4f0 = 0;
        local_4e8 = 0;
        uStack_4e0 = 0;
        local_4d8 = 0;
        local_4d0 = 0;
        uStack_4c8 = 0;
        local_4c0 = 0;
        local_4b8 = 0;
        uStack_4b0 = 0;
        local_4a8 = 0;
        local_4a0 = 0;
        uStack_498 = 0;
        local_490 = 0;
        local_488 = 0;
        uStack_480 = 0;
        local_478 = 0;
        local_470 = 0;
        uStack_468 = 0;
        local_460 = 0;
        local_458 = 0;
        uStack_450 = 0;
        local_448 = 0;
        local_440 = 0;
        uStack_438 = 0;
        local_430 = 0;
        local_428 = 0;
        uStack_420 = 0;
        local_418 = 0;
        local_410 = 0;
        uStack_408 = 0;
        local_400 = 0;
        local_300 = 0;
        uStack_2f8 = 0;
        local_310 = 0;
        uStack_308 = 0;
        local_320 = 0;
        uStack_318 = 0;
        local_330 = 0;
        uStack_328 = 0;
        local_340 = 0;
        uStack_338 = 0;
        local_350 = 0;
        uStack_348 = 0;
        local_360 = 0;
        uStack_358 = 0;
        local_370 = 0;
        uStack_368 = 0;
        local_380 = 0;
        uStack_378 = 0;
        local_390 = 0;
        uStack_388 = 0;
        local_3a0 = 0;
        uStack_398 = 0;
        local_3b0 = 0;
        uStack_3a8 = 0;
        local_3c0 = 0;
        uStack_3b8 = 0;
        local_3d0 = 0;
        uStack_3c8 = 0;
        local_3e0 = 0;
        uStack_3d8 = 0;
        local_56c = fVar12 + fStack_570;
        local_574 = local_578 + fVar12;
        local_568 = 0x3f80000000000000;
        local_54c = 0x3f800000;
        local_534 = 0x3f800000;
        local_51c = 0x3f800000;
        local_504 = 0x3f800000;
        local_4ec = 0x3f800000;
        local_4d4 = 0x3f800000;
        local_4bc = 0x3f800000;
        local_4a4 = 0x3f800000;
        local_48c = 0x3f800000;
        local_474 = 0x3f800000;
        local_45c = 0x3f800000;
        local_444 = 0x3f800000;
        local_42c = 0x3f800000;
        local_414 = 0x3f800000;
        local_3fc = 0x3f800000;
        local_3f8 = 1;
        local_3f0 = (int)local_578;
        iStack_3ec = (int)local_574;
        iStack_3e8 = (int)fStack_570;
        iStack_3e4 = (int)local_56c;
        local_2f0 = 1;
        local_2d0 = param_1[uVar11 + 0x99];
        local_290 = 1;
        local_288[0] = param_6;
        local_288[1] = 0;
        local_288[2] = 0;
        lVar3 = local_108 + 1;
        local_108 = lVar3;
        local_288[lVar3 * 3] = param_5;
        local_288[lVar3 * 3 + 1] = 1;
        local_288[lVar3 * 3 + 2] = 0;
        local_108 = local_108 + 1;
        uStack_f3 = 0;
        uStack_f7 = 0;
        local_100 = param_7;
        local_f8 = 0x21;
        local_f0 = *(undefined4 *)(puVar9 + 3);
        uStack_ec = *(undefined4 *)((longlong)puVar9 + 0x1c);
        uStack_e8 = *(undefined4 *)(puVar9 + 4);
        uStack_e4 = *(undefined4 *)((longlong)puVar9 + 0x24);
        FUN_1401a3690(local_d8,*param_1,"Sun Shadow Cascade Draw",0x3cf,
                      "/opt/actions-runner/_work/Platform/Platform/graphics/intern/ShadowMap.cpp",
                      "gfx_sm_render_shadow_maps");
        plVar1 = local_90;
        (**(code **)(*local_90 + 0xb8))(local_90,&local_588);
        (**(code **)(*plVar1 + 0xe0))(plVar1,0,0,local_88);
        FUN_1401a43a0(local_b8);
        FUN_1401a44e0(local_d8);
        uVar11 = uVar11 + 1;
        puVar9 = puVar9 + 0x14;
      } while (uVar11 < *(uint *)(param_1 + 1));
    }
  }
  return;
}

