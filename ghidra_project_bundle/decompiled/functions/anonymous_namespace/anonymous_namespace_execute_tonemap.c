/**
 * Function: anonymous_namespace_execute_tonemap
 * Address:  1404bf2b0
 * Signature: undefined anonymous_namespace_execute_tonemap(void)
 * Body size: 1319 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void anonymous_namespace_execute_tonemap
               (undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
               uint param_5,undefined4 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float fVar12;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined4 local_5b8;
  float local_5b4;
  undefined4 local_5b0;
  float local_5ac;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined4 local_590;
  undefined4 local_58c;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined4 local_578;
  undefined4 local_574;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined4 local_560;
  undefined4 local_55c;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined4 local_548;
  undefined4 local_544;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined4 local_514;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined4 local_488;
  undefined4 local_484;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined4 local_470;
  undefined4 local_46c;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined4 local_454;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined4 local_43c;
  undefined8 local_438;
  undefined4 local_430;
  int local_42c;
  undefined4 local_428;
  int local_424;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
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
  undefined8 local_328;
  undefined5 uStack_320;
  undefined3 uStack_31b;
  undefined5 uStack_318;
  undefined8 local_310;
  undefined1 local_308 [56];
  undefined8 local_2d0;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [32];
  undefined1 local_100 [40];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  longlong local_80;
  byte local_71;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  lVar4 = FUN_1401a9cc0();
  local_71 = *(byte *)(lVar4 + 0x288);
  if ((local_71 & 1) == 0) {
    local_80 = 0;
  }
  else {
    lVar4 = FUN_1401a9cc0();
    local_80 = *(longlong *)(lVar4 + 0x290);
    lVar5 = FUN_1401a9e60();
    uVar1 = *(ulonglong *)(lVar5 + 0x28);
    lVar4 = lVar5;
    if ((uVar1 & 0xffff) == 0) {
      lVar4 = FUN_1400637c0(lVar5,uVar1);
    }
    lVar2 = *(longlong *)(lVar5 + 0x48);
    uVar6 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
    *(undefined1 *)(lVar2 + uVar6) = 0xf;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar2 + 1 + uVar6) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar4 >> 0x20),(int)uVar3);
    *(undefined ***)(lVar2 + 9 + uVar6) = &PTR_s_PostFX_Tonemap_140e48cb8;
    *(ulonglong *)(lVar5 + 0x28) = uVar1 + 1;
  }
  uStack_b0 = 0;
  auVar9._4_4_ = 0;
  auVar9._0_4_ = param_5;
  auVar9._8_4_ = param_6;
  auVar9._12_4_ = 0;
  dVar8 = SUB168(auVar9 | _DAT_140de8130,0) - (double)DAT_140de8130;
  dVar10 = SUB168(auVar9 | _DAT_140de8130,8) - DAT_140de8130._8_8_;
  fVar11 = (float)dVar8;
  fVar12 = (float)dVar10;
  auVar7._4_4_ = fVar12;
  auVar7._0_4_ = fVar11;
  auVar7._8_8_ = 0;
  auVar7 = divps(_DAT_140de3560,auVar7);
  local_b8 = auVar7._0_8_;
  _local_a8 = CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)((longlong)param_1 + 0x54));
  uStack_a0 = param_1[0xb];
  local_98 = (ulonglong)
             CONCAT14(*(undefined1 *)((longlong)param_1 + 0x34),*(undefined4 *)(param_1 + 10));
  uStack_90 = (ulonglong)*(byte *)((longlong)param_1 + 0x4c);
  (**(code **)(*param_2 + 0x80))(param_2,param_1[0xc],&local_b8,0x30,0);
  FUN_1401a3690(local_120,*param_1,"PostFX Tonemap",0x22b,
                "/opt/actions-runner/_work/Platform/Platform/graphics/intern/post_fx.cpp",
                "(anonymous namespace)::execute_tonemap");
  local_328 = 0;
  uStack_320 = 0;
  uStack_31b = 0;
  uStack_318 = 0;
  memset(local_308,0,0x1d0);
  local_130 = 0;
  uStack_128 = 0;
  local_5c8 = *(undefined8 *)(param_3 + 0x18);
  local_5a0 = 0;
  uStack_598 = 0;
  local_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  local_570 = 0;
  uStack_568 = 0;
  local_560 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_548 = 0;
  local_540 = 0;
  uStack_538 = 0;
  local_530 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  local_510 = 0;
  uStack_508 = 0;
  local_500 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0;
  uStack_4d8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  local_480 = 0;
  uStack_478 = 0;
  local_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_440 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_410 = 0;
  uStack_408 = 0;
  local_400 = 0;
  uStack_3f8 = 0;
  local_3f0 = 0;
  uStack_3e8 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3a0 = 0;
  uStack_398 = 0;
  local_390 = 0;
  uStack_388 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_424 = (int)dVar10;
  local_42c = (int)dVar8;
  local_340 = 0;
  uStack_338 = 0;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5a8 = 0x3f80000000000000;
  local_58c = 0x3f800000;
  local_574 = 0x3f800000;
  local_55c = 0x3f800000;
  local_544 = 0x3f800000;
  local_52c = 0x3f800000;
  local_514 = 0x3f800000;
  local_4fc = 0x3f800000;
  local_4e4 = 0x3f800000;
  local_4cc = 0x3f800000;
  local_4b4 = 0x3f800000;
  local_49c = 0x3f800000;
  local_484 = 0x3f800000;
  local_46c = 0x3f800000;
  local_454 = 0x3f800000;
  local_43c = 0x3f800000;
  local_438 = 1;
  local_430 = 0;
  local_428 = 0;
  local_330 = 1;
  local_310 = *(undefined8 *)(param_3 + 0x20);
  local_2d0 = 1;
  local_5c0 = param_4;
  local_5b4 = fVar11;
  local_5ac = fVar12;
  (**(code **)(*param_2 + 0xb8))(param_2,&local_5c8);
  local_c8 = 0;
  local_d8 = 0x100000003;
  uStack_d0 = 0;
  (**(code **)(*param_2 + 0xc0))(param_2,&local_d8);
  FUN_1401a43a0(local_100);
  FUN_1401a44e0(local_120);
  if ((local_71 & 1) != 0) {
    lVar4 = FUN_1401a9cc0();
    if (*(longlong *)(lVar4 + 0x290) == local_80) {
      lVar5 = FUN_1401a9e60();
      uVar1 = *(ulonglong *)(lVar5 + 0x28);
      lVar4 = lVar5;
      if ((uVar1 & 0xffff) == 0) {
        lVar4 = FUN_1400637c0(lVar5,uVar1);
      }
      lVar2 = *(longlong *)(lVar5 + 0x48);
      uVar6 = (ulonglong)(uint)((int)(uVar1 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar6) = 0x11;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar2 + 1 + uVar6) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar4 >> 0x20),(int)uVar3);
      *(ulonglong *)(lVar5 + 0x28) = uVar1 + 1;
    }
  }
  return;
}

