/**
 * Function: spot_shadow_clear
 * Address:  1404e3740
 * Signature: undefined spot_shadow_clear(void)
 * Body size: 1264 bytes
 */


void spot_shadow_clear(undefined8 *param_1,longlong *param_2,uint param_3,undefined4 param_4,
                      undefined8 param_5,longlong param_6,longlong param_7,longlong param_8,
                      longlong param_9)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 local_560;
  undefined8 local_558;
  undefined4 local_550;
  float local_54c;
  undefined4 local_548;
  float local_544;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined4 local_528;
  undefined4 local_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined4 local_510;
  undefined4 local_50c;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined4 local_498;
  undefined4 local_494;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined4 local_480;
  undefined4 local_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  undefined4 local_464;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined4 local_434;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  int local_3c4;
  undefined4 local_3c0;
  int local_3bc;
  undefined8 local_3b8;
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
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined5 uStack_2b8;
  undefined3 uStack_2b3;
  undefined5 uStack_2b0;
  undefined8 local_2a8 [8];
  longlong local_268;
  longlong alStack_260 [48];
  longlong local_e0;
  longlong local_d8;
  undefined1 local_d0;
  undefined4 local_cf;
  undefined3 uStack_cb;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_98 [52];
  undefined4 local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if ((((param_3 < 8) && (param_1[(ulonglong)param_3 + 0x15] != 0)) && (param_9 != 0)) &&
     (((param_8 != 0 && (param_7 != 0)) && (*(char *)(param_1 + 0xb0) != '\0')))) {
    pcVar3 = "gfx_sm_render_spot";
    pcVar2 = "/opt/actions-runner/_work/Platform/Platform/graphics/intern/ShadowMap.cpp";
    local_64 = param_4;
    FUN_1401a3690(&local_560,*param_1,"Spot Shadow Clear",0x3fe,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/ShadowMap.cpp",
                  "gfx_sm_render_spot");
    local_b8 = 0;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0;
    uStack_ac = 0xffffffff;
    (**(code **)(*param_2 + 0x48))
              (param_2,param_1[(ulonglong)param_3 + 0x15],&local_b8,1,
               (ulonglong)pcVar2 & 0xffffffff00000000,(ulonglong)pcVar3 & 0xffffffffffffff00,0);
    FUN_1401a43a0(&local_540);
    FUN_1401a44e0(&local_560);
    local_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b3 = 0;
    uStack_2b0 = 0;
    memset(local_2a8,0,0x1d8);
    local_c0 = 0;
    local_560 = param_1[0x98];
    local_558 = param_1[(ulonglong)param_3 + 0x1d];
    local_54c = (float)*(uint *)((longlong)param_1 + 0x14);
    local_538 = 0;
    uStack_530 = 0;
    local_528 = 0;
    local_520 = 0;
    uStack_518 = 0;
    local_510 = 0;
    local_508 = 0;
    uStack_500 = 0;
    local_4f8 = 0;
    local_4f0 = 0;
    uStack_4e8 = 0;
    local_4e0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4c8 = 0;
    local_4c0 = 0;
    uStack_4b8 = 0;
    local_4b0 = 0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_498 = 0;
    local_490 = 0;
    uStack_488 = 0;
    local_480 = 0;
    local_478 = 0;
    uStack_470 = 0;
    local_468 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 0;
    local_448 = 0;
    uStack_440 = 0;
    local_438 = 0;
    local_430 = 0;
    uStack_428 = 0;
    local_420 = 0;
    local_418 = 0;
    uStack_410 = 0;
    local_408 = 0;
    local_400 = 0;
    uStack_3f8 = 0;
    local_3f0 = 0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_398 = 0;
    uStack_390 = 0;
    local_388 = 0;
    uStack_380 = 0;
    local_378 = 0;
    uStack_370 = 0;
    local_368 = 0;
    uStack_360 = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_348 = 0;
    uStack_340 = 0;
    local_338 = 0;
    uStack_330 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_3c4 = (int)local_54c;
    local_550 = 0;
    local_548 = 0;
    local_540 = 0x3f80000000000000;
    local_524 = 0x3f800000;
    local_50c = 0x3f800000;
    local_4f4 = 0x3f800000;
    local_4dc = 0x3f800000;
    local_4c4 = 0x3f800000;
    local_4ac = 0x3f800000;
    local_494 = 0x3f800000;
    local_47c = 0x3f800000;
    local_464 = 0x3f800000;
    local_44c = 0x3f800000;
    local_434 = 0x3f800000;
    local_41c = 0x3f800000;
    local_404 = 0x3f800000;
    local_3ec = 0x3f800000;
    local_3d4 = 0x3f800000;
    local_3d0 = 1;
    local_3c8 = 0;
    local_3c0 = 0;
    local_2c8 = 1;
    local_2a8[local_268] = param_1[(ulonglong)param_3 + 0xa8];
    lVar1 = local_e0;
    local_268 = local_268 + 1;
    alStack_260[local_e0 * 3] = param_7;
    alStack_260[lVar1 * 3 + 1] = 0;
    alStack_260[lVar1 * 3 + 2] = 0;
    lVar1 = local_e0 + 1;
    local_e0 = lVar1;
    alStack_260[lVar1 * 3] = param_8;
    alStack_260[lVar1 * 3 + 1] = 1;
    alStack_260[lVar1 * 3 + 2] = 0;
    local_e0 = local_e0 + 1;
    local_cf = 0;
    uStack_cb = 0;
    local_d8 = param_9;
    local_d0 = 0x21;
    local_c8 = param_5;
    if (param_6 != 0) {
      local_c0 = param_6;
    }
    local_544 = local_54c;
    local_3bc = local_3c4;
    FUN_1401a3690(&local_b8,*param_1,"Spot Shadow Draw",0x410,
                  "/opt/actions-runner/_work/Platform/Platform/graphics/intern/ShadowMap.cpp",
                  "gfx_sm_render_spot");
    (**(code **)(*param_2 + 0xb8))(param_2,&local_560);
    if (param_6 == 0) {
      (**(code **)(*param_2 + 0xd8))(param_2,0,local_64);
    }
    else {
      (**(code **)(*param_2 + 0xe0))(param_2,0,0);
    }
    FUN_1401a43a0(local_98);
    FUN_1401a44e0(&local_b8);
  }
  return;
}

