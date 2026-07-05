/**
 * Function: time_management_not_available
 * Address:  1400bdbe0
 * Signature: undefined time_management_not_available(void)
 * Body size: 1198 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong time_management_not_available(void)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  ntsettimerresolution();
  FUN_14039ca00();
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3d5,
                "#[bold]bootstrapping world");
  FUN_140399740(0);
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3d8,
                "tracing enabled, call ecs_log_set_level(-1) to disable");
  cVar2 = FUN_14039e280();
  if (cVar2 == '\0') {
    redabortreset_bluesreset
              (9,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3db,0)
    ;
    (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
    abort();
  }
  cVar2 = FUN_14039e2b0();
  if (cVar2 == '\0') {
    FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3df
                  ,"threading unavailable, to use threads set OS API first (see examples)");
  }
  cVar2 = FUN_14039e360();
  if (cVar2 == '\0') {
    FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3e3
                  ,"time management not available");
  }
  local_48 = "4.1.5";
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3a5,
                "flecs version %s");
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3a7,
                "addons included in build:");
  FUN_140399740(0);
  ppuVar6 = &PTR_s_FLECS_STATS_1414f64d8;
  puVar3 = PTR_s_FLECS_MODULE_1414f64d0;
  do {
    local_48 = puVar3;
    FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3ac
                  ,&DAT_141339891);
    puVar3 = *ppuVar6;
    ppuVar6 = ppuVar6 + 1;
  } while (puVar3 != (undefined *)0x0);
  FUN_140399750(0);
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3b7,
                "#[green]release#[reset] build");
  local_48 = "clang 21.1.8 (Fedora 21.1.8-4.fc43)";
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x3ba,
                "compiled with %s");
  lVar4 = (*DAT_1415033a8)(0xd50);
  FUN_140396260(lVar4,0x65637377,0xd50,&PTR_s_ecs_world_t_141503340);
  cVar2 = FUN_14039e360();
  if (cVar2 != '\0') {
    (*DAT_141503460)(local_38);
    *(undefined4 *)(lVar4 + 0xb48) = local_38[0];
  }
  *(byte *)(lVar4 + 3000) = *(byte *)(lVar4 + 3000) | 4;
  lVar1 = lVar4 + 0xcc0;
  FUN_1403911c0(lVar1);
  FUN_140391470(lVar4 + 0xbc8,0x3000);
  FUN_140391470(lVar4 + 0xbe8,0x30);
  FUN_140391470(lVar4 + 0xc08,0x80);
  FUN_140391470(lVar4 + 0xc28,0x90);
  FUN_140391470(lVar4 + 0xc48,0x28);
  FUN_140391470(lVar4 + 0xc68,0x100);
  FUN_1403ab560(lVar4,lVar4 + 0xc88);
  local_48 = "vec<ecs_entity_t>";
  FUN_1403b2710(lVar1,lVar4 + 0xcb0,8,0);
  FUN_1403b61c0(lVar4 + 0x30,lVar1);
  FUN_1403b61c0(lVar4 + 0x18,lVar1);
  uVar5 = (*DAT_1415033a8)(0x2000);
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  vececs_observer_t(lVar4 + 0x90);
  FUN_140391920(lVar4 + 0x970,lVar1);
  FUN_140391920(lVar4 + 0x9a0,lVar1);
  local_48 = "vec<ecs_action_elem_t>";
  FUN_1403b2710(lVar1,lVar4 + 0xd40,0x10,0);
  local_48 = "vec<ecs_id_t>";
  FUN_1403b2710(lVar1,lVar4 + 0x9e0,8,0);
  *(undefined4 *)(lVar4 + 0xaa8) = 0x3f800000;
  cVar2 = FUN_14039e360();
  if (cVar2 != '\0') {
    (*DAT_141503460)(lVar4 + 0xa70);
  }
  FUN_1403b61c0(lVar4 + 0x9f0,lVar1);
  FUN_140396560(lVar4,1);
  _DAT_14151f7c0 = 0x105;
  FUN_1403aec00(lVar4);
  memset((void *)(lVar4 + 2000),0,0x178);
  local_48 = "vec<ecs_table_record_t>";
  FUN_1403b2710(lVar1,lVar4 + 0x918,0x28,0);
  local_48 = "vec<ecs_marked_id_t>";
  FUN_1403b2710(lVar1,lVar4 + 0x928,0x20,0);
  local_48 = "vec<ecs_entity_t>";
  FUN_1403b2710(lVar1,lVar4 + 0x938,8,0);
  FUN_1403a8f30(lVar1,(void *)(lVar4 + 2000));
  FUN_1403b4c40(lVar4 + 0x808,lVar1,lVar4 + 0xc68,0xa0);
  FUN_1403aaec0(lVar4,lVar4 + 0x848);
  ecsondeletetarget(lVar4);
  *(byte *)(lVar4 + 3000) = *(byte *)(lVar4 + 3000) & 0xfb;
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x41a,
                "world ready!");
  FUN_140399750(0);
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_68)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_68);
}

