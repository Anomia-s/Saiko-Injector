/**
 * Function: renderer_opaque_skybox
 * Address:  14021df20
 * Signature: undefined renderer_opaque_skybox(void)
 * Body size: 2819 bytes
 */


void renderer_opaque_skybox(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  bool bVar16;
  undefined8 local_590;
  longlong local_588;
  undefined4 local_580;
  float local_57c;
  undefined4 local_578;
  float local_574;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined4 local_498;
  undefined4 local_494;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  int local_3f4;
  undefined4 local_3f0;
  int local_3ec;
  undefined1 local_3e8 [240];
  undefined8 local_2f8;
  longlong local_2d8 [8];
  ulonglong local_298;
  undefined8 uStack_290;
  uint auStack_288 [2];
  undefined8 auStack_280 [9];
  undefined8 auStack_238 [37];
  ulonglong local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined4 local_88;
  longlong local_80;
  byte local_72;
  byte local_71;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  lVar5 = FUN_1401a9cc0();
  bVar14 = *(byte *)(lVar5 + 0x288);
  if ((bVar14 & 1) == 0) {
    local_a0 = 0;
  }
  else {
    lVar5 = FUN_1401a9cc0();
    local_a0 = *(longlong *)(lVar5 + 0x290);
    lVar6 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar6 + 0x28);
    lVar5 = lVar6;
    if ((uVar10 & 0xffff) == 0) {
      lVar5 = FUN_1400637c0(lVar6,uVar10);
    }
    lVar8 = *(longlong *)(lVar6 + 0x48);
    uVar12 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar8 + uVar12) = 0xf;
    uVar9 = rdtsc();
    *(ulonglong *)(lVar8 + 1 + uVar12) =
         uVar9 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar9);
    *(undefined ***)(lVar8 + 9 + uVar12) = &PTR_s_Renderer_Submit_Queue_140df4bf0;
    *(ulonglong *)(lVar6 + 0x28) = uVar10 + 1;
  }
  if ((((param_2 != (longlong *)0x0 && param_1 != (uint *)0x0) && (*(longlong *)(param_1 + 8) != 0))
      && (param_1[0x2a] != 0xffffffff)) && (uVar15 = *(uint *)(param_2 + 1), (ulonglong)uVar15 != 0)
     ) {
    local_72 = bVar14;
    lVar5 = FUN_1401a9cc0();
    if ((*(byte *)(lVar5 + 0x288) & 1) != 0) {
      lVar5 = FUN_1401a9e60();
      uVar10 = *(ulonglong *)(lVar5 + 0x28);
      if ((uVar10 & 0xffff) == 0) {
        FUN_1400637c0(lVar5,uVar10);
      }
      lVar6 = *(longlong *)(lVar5 + 0x48);
      uVar12 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
      *(undefined1 *)(lVar6 + uVar12) = 0x2d;
      *(char **)(lVar6 + 1 + uVar12) = "Renderer Queue Commands";
      uVar9 = rdtsc();
      *(ulonglong *)(lVar6 + 9 + uVar12) = uVar9 & 0xffffffff00000000 | CONCAT44(1,(int)uVar9);
      *(ulonglong *)(lVar6 + 0x11 + uVar12) = (ulonglong)uVar15;
      *(ulonglong *)(lVar5 + 0x28) = uVar10 + 1;
    }
    bVar14 = local_72;
    if (*(longlong *)(param_1 + 0x24) == 0) {
      lVar5 = *(longlong *)(param_1 + 0x1c);
      if (lVar5 == *(longlong *)(param_1 + 0x1e)) goto LAB_14021e9a3;
      uVar15 = param_1[0x2a];
      if ((uVar15 == 0xffffffff) || (*(longlong **)(param_1 + 4) == (longlong *)0x0)) {
        uVar10 = 0;
      }
      else {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 4) + 0x38))();
        uVar10 = 0;
        if (uVar15 < uVar4) {
          uVar10 = (ulonglong)param_1[0x2a];
        }
        lVar5 = *(longlong *)(param_1 + 0x1c);
      }
      lVar5 = *(longlong *)(lVar5 + uVar10 * 8);
      bVar14 = local_72;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x22);
    }
    local_72 = bVar14;
    if (lVar5 != 0) {
      lVar6 = FUN_1401a9cc0();
      local_71 = *(byte *)(lVar6 + 0x288);
      if ((local_71 & 1) == 0) {
        local_80 = 0;
      }
      else {
        lVar6 = FUN_1401a9cc0();
        lVar6 = *(longlong *)(lVar6 + 0x290);
        lVar7 = FUN_1401a9e60();
        uVar10 = *(ulonglong *)(lVar7 + 0x28);
        lVar8 = lVar7;
        if ((uVar10 & 0xffff) == 0) {
          lVar8 = FUN_1400637c0(lVar7,uVar10);
        }
        lVar1 = *(longlong *)(lVar7 + 0x48);
        uVar12 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
        *(undefined1 *)(lVar1 + uVar12) = 0xf;
        uVar9 = rdtsc();
        *(ulonglong *)(lVar1 + 1 + uVar12) =
             uVar9 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar9);
        *(undefined ***)(lVar1 + 9 + uVar12) = &PTR_s_Renderer_Sort_Queue_140df4c10;
        *(ulonglong *)(lVar7 + 0x28) = uVar10 + 1;
        local_80 = lVar6;
      }
      FUN_1404b6d80(param_2);
      if (((local_71 & 1) != 0) &&
         (lVar6 = FUN_1401a9cc0(), *(longlong *)(lVar6 + 0x290) == local_80)) {
        lVar8 = FUN_1401a9e60();
        uVar10 = *(ulonglong *)(lVar8 + 0x28);
        lVar6 = lVar8;
        if ((uVar10 & 0xffff) == 0) {
          lVar6 = FUN_1400637c0(lVar8,uVar10);
        }
        lVar7 = *(longlong *)(lVar8 + 0x48);
        uVar12 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
        *(undefined1 *)(lVar7 + uVar12) = 0x11;
        uVar9 = rdtsc();
        *(ulonglong *)(lVar7 + 1 + uVar12) =
             uVar9 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar9);
        *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
      }
      local_590 = 0;
      local_568 = 0;
      uStack_560 = 0;
      local_558 = 0x3f80000000000000;
      local_550 = 0;
      uStack_548 = 0;
      local_540 = 0x3f80000000000000;
      local_538 = 0;
      uStack_530 = 0;
      local_528 = 0x3f80000000000000;
      local_520 = 0;
      uStack_518 = 0;
      local_510 = 0x3f80000000000000;
      local_508 = 0;
      uStack_500 = 0;
      local_4f8 = 0x3f80000000000000;
      local_4f0 = 0;
      uStack_4e8 = 0;
      local_4e0 = 0x3f80000000000000;
      local_4d8 = 0;
      uStack_4d0 = 0;
      local_4c8 = 0x3f80000000000000;
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_4b0 = 0x3f80000000000000;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_498 = 0;
      local_494 = 0x3f800000;
      local_490 = 0;
      uStack_488 = 0;
      local_480 = 0x3f80000000000000;
      local_478 = 0;
      uStack_470 = 0;
      local_468 = 0x3f80000000000000;
      local_460 = 0;
      uStack_458 = 0;
      local_450 = 0x3f80000000000000;
      local_448 = 0;
      uStack_440 = 0;
      local_438 = 0x3f80000000000000;
      local_430 = 0;
      uStack_428 = 0;
      local_420 = 0x3f80000000000000;
      local_418 = 0;
      uStack_410 = 0;
      local_408 = 0x3f80000000000000;
      uVar15 = 0;
      memset(local_3e8,0,0x10d);
      memset(local_2d8,0,0x1d8);
      local_f8 = 0;
      uStack_f0 = 0;
      local_574 = (float)param_1[1];
      local_57c = (float)*param_1;
      local_580 = 0;
      local_578 = 0;
      local_570 = 0x3f80000000000000;
      local_3f4 = (int)local_57c;
      local_400 = 1;
      local_3ec = (int)local_574;
      local_3f8 = 0;
      local_3f0 = 0;
      local_2f8 = 1;
      local_588 = lVar5;
      FUN_1401a3690(local_e8,param_1,"Renderer Opaque + Skybox",0x1e2,
                    "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp",
                    "gfx_renderer_submit");
      FUN_1401a43a0(local_c8);
      FUN_1401a44e0(local_e8);
LAB_14021e3f0:
      do {
        if (*(uint *)(param_2 + 1) <= uVar15) goto LAB_14021e8a7;
        uVar4 = *(uint *)(*param_2 + (ulonglong)uVar15 * 0x50);
        if (5 < uVar4) {
LAB_14021e426:
          uVar15 = uVar15 + 1;
          goto LAB_14021e3f0;
        }
        lVar5 = *param_2 + (ulonglong)uVar15 * 0x50;
        switch(uVar4) {
        case 0:
          local_590 = *(undefined8 *)(lVar5 + 0x10);
          goto LAB_14021e426;
        case 1:
          uVar4 = *(uint *)(lVar5 + 0x18);
          uVar9 = (ulonglong)uVar4;
          uVar10 = local_110;
          if (local_110 <= uVar9) {
            uVar10 = (ulonglong)(uVar4 + 1);
            uVar12 = local_110 - uVar10;
            if (uVar10 < local_110) {
              puVar11 = auStack_280 + uVar10 * 3;
              uVar12 = uVar10;
              do {
                puVar11[-2] = 0;
                *(undefined4 *)(puVar11 + -1) = 0;
                *puVar11 = 0;
                uVar12 = uVar12 + 1;
                puVar11 = puVar11 + 3;
              } while (uVar12 < local_110);
            }
            else if (local_110 < uVar10) {
              uVar13 = (uVar4 + 1) - (int)local_110 & 3;
              if (uVar13 != 0) {
                puVar11 = auStack_280 + local_110 * 3;
                lVar6 = 0;
                do {
                  puVar11[-2] = 0;
                  *(undefined4 *)(puVar11 + -1) = 0;
                  *puVar11 = 0;
                  lVar6 = lVar6 + -1;
                  puVar11 = puVar11 + 3;
                } while (-lVar6 != (ulonglong)uVar13);
                local_110 = local_110 - lVar6;
              }
              if (uVar12 < 0xfffffffffffffffd) {
                puVar11 = auStack_238 + local_110 * 3;
                lVar6 = uVar10 - local_110;
                do {
                  puVar11[-0xb] = 0;
                  *(undefined4 *)(puVar11 + -10) = 0;
                  puVar11[-9] = 0;
                  puVar11[-8] = 0;
                  *(undefined4 *)(puVar11 + -7) = 0;
                  puVar11[-6] = 0;
                  puVar11[-5] = 0;
                  *(undefined4 *)(puVar11 + -4) = 0;
                  puVar11[-3] = 0;
                  puVar11[-2] = 0;
                  *(undefined4 *)(puVar11 + -1) = 0;
                  *puVar11 = 0;
                  puVar11 = puVar11 + 0xc;
                  lVar6 = lVar6 + -4;
                } while (lVar6 != 0);
              }
            }
          }
          local_110 = uVar10;
          uVar3 = *(undefined8 *)(lVar5 + 0x20);
          (&uStack_290)[uVar9 * 3] = *(undefined8 *)(lVar5 + 0x10);
          auStack_288[uVar9 * 6] = uVar4;
          auStack_288[uVar9 * 6 + 1] = 0;
          auStack_280[uVar9 * 3] = uVar3;
          uVar15 = uVar15 + 1;
          goto LAB_14021e3f0;
        case 2:
          local_108 = *(undefined8 *)(lVar5 + 0x10);
          local_fc = *(undefined4 *)(lVar5 + 0x18);
          uVar15 = uVar15 + 1;
          goto LAB_14021e3f0;
        case 3:
          FUN_1401a3690(local_e8,param_1,"Renderer Draw",0x1fa,
                        "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp",
                        "gfx_renderer_submit");
          if (local_298 != 0) {
            uVar10 = 0;
            do {
              local_2d8[uVar10] = 0;
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_298);
          }
          lVar6 = *(longlong *)(lVar5 + 0x20);
          if (lVar6 != 0) {
            local_2d8[0] = lVar6;
          }
          local_298 = (ulonglong)(lVar6 != 0);
          local_f8 = 0;
          uStack_f0 = 0;
          (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),&local_590)
          ;
          local_88 = 0;
          lStack_90 = (ulonglong)*(uint *)(lVar5 + 0x14) << 0x20;
          local_98 = CONCAT44(1,*(undefined4 *)(lVar5 + 0x10));
          (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),&local_98);
          break;
        case 4:
          FUN_1401a3690(local_e8,param_1,"Renderer Draw Indexed",0x20b,
                        "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp",
                        "gfx_renderer_submit");
          if (local_298 != 0) {
            uVar10 = 0;
            do {
              local_2d8[uVar10] = 0;
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_298);
          }
          lVar6 = *(longlong *)(lVar5 + 0x28);
          if (lVar6 != 0) {
            local_2d8[0] = lVar6;
          }
          local_298 = (ulonglong)(lVar6 != 0);
          local_100 = *(undefined1 *)(lVar5 + 0x14);
          local_f8 = 0;
          uStack_f0 = 0;
          (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),&local_590)
          ;
          local_88 = 0;
          lStack_90 = *(longlong *)(lVar5 + 0x18);
          local_98 = CONCAT44(1,*(undefined4 *)(lVar5 + 0x10));
          (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),&local_98);
          break;
        case 5:
          FUN_1401a3690(local_e8,param_1,"Renderer Draw Indexed Indirect",0x21e,
                        "/opt/actions-runner/_work/Platform/Platform/graphics/intern/renderer.cpp",
                        "gfx_renderer_submit");
          if (local_298 != 0) {
            uVar10 = 0;
            do {
              local_2d8[uVar10] = 0;
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_298);
          }
          bVar16 = *(longlong *)(lVar5 + 0x40) == 0;
          if (bVar16) {
            lVar6 = *(longlong *)(lVar5 + 0x48);
          }
          else {
            lVar6 = *(longlong *)(lVar5 + 0x48);
            local_2d8[0] = *(longlong *)(lVar5 + 0x40);
          }
          local_298 = (ulonglong)!bVar16;
          if (lVar6 != 0) {
            local_2d8[!bVar16] = lVar6;
            local_298 = (ulonglong)!bVar16 + 1;
          }
          local_100 = *(undefined1 *)(lVar5 + 0x38);
          local_f8 = *(undefined8 *)(lVar5 + 0x10);
          uStack_f0 = *(undefined8 *)(lVar5 + 0x28);
          (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),&local_590)
          ;
          plVar2 = *(longlong **)(param_1 + 8);
          if (*(longlong *)(lVar5 + 0x28) == 0) {
            (**(code **)(*plVar2 + 0xd8))
                      (plVar2,*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x24));
          }
          else {
            (**(code **)(*plVar2 + 0xe0))
                      (plVar2,*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x30));
          }
          param_1[0x30] = param_1[0x30] + *(int *)(lVar5 + 0x24);
          goto LAB_14021e78d;
        }
        param_1[0x30] = param_1[0x30] + 1;
LAB_14021e78d:
        FUN_1401a43a0(local_c8);
        FUN_1401a44e0(local_e8);
        uVar15 = uVar15 + 1;
      } while( true );
    }
  }
  goto LAB_14021e9a3;
LAB_14021e8a7:
  lVar5 = FUN_1401a9cc0();
  local_71 = *(byte *)(lVar5 + 0x288);
  if ((local_71 & 1) == 0) {
    local_80 = 0;
  }
  else {
    lVar5 = FUN_1401a9cc0();
    lVar5 = *(longlong *)(lVar5 + 0x290);
    lVar8 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar8 + 0x28);
    lVar6 = lVar8;
    if ((uVar10 & 0xffff) == 0) {
      lVar6 = FUN_1400637c0(lVar8,uVar10);
    }
    lVar7 = *(longlong *)(lVar8 + 0x48);
    uVar12 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar7 + uVar12) = 0xf;
    uVar9 = rdtsc();
    *(ulonglong *)(lVar7 + 1 + uVar12) =
         uVar9 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar9);
    *(undefined ***)(lVar7 + 9 + uVar12) = &PTR_s_Renderer_Clear_Queue_140df4c30;
    *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
    local_80 = lVar5;
  }
  FUN_1404b6d70(param_2);
  bVar14 = local_72;
  if (((local_71 & 1) != 0) && (lVar5 = FUN_1401a9cc0(), *(longlong *)(lVar5 + 0x290) == local_80))
  {
    lVar6 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar6 + 0x28);
    lVar5 = lVar6;
    if ((uVar10 & 0xffff) == 0) {
      lVar5 = FUN_1400637c0(lVar6,uVar10);
    }
    lVar8 = *(longlong *)(lVar6 + 0x48);
    uVar12 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar8 + uVar12) = 0x11;
    uVar9 = rdtsc();
    *(ulonglong *)(lVar8 + 1 + uVar12) =
         uVar9 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar9);
    *(ulonglong *)(lVar6 + 0x28) = uVar10 + 1;
  }
LAB_14021e9a3:
  if (((bVar14 & 1) != 0) && (lVar5 = FUN_1401a9cc0(), *(longlong *)(lVar5 + 0x290) == local_a0)) {
    lVar6 = FUN_1401a9e60();
    uVar10 = *(ulonglong *)(lVar6 + 0x28);
    lVar5 = lVar6;
    if ((uVar10 & 0xffff) == 0) {
      lVar5 = FUN_1400637c0(lVar6,uVar10);
    }
    lVar8 = *(longlong *)(lVar6 + 0x48);
    uVar12 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
    *(undefined1 *)(lVar8 + uVar12) = 0x11;
    uVar9 = rdtsc();
    *(ulonglong *)(lVar8 + 1 + uVar12) =
         uVar9 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar9);
    *(ulonglong *)(lVar6 + 0x28) = uVar10 + 1;
  }
  return;
}

