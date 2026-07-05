/**
 * Function: use_ecs_mini_to_create_world_without_importin
 * Address:  1400be090
 * Signature: undefined use_ecs_mini_to_create_world_without_importin(void)
 * Body size: 291 bytes
 */


undefined8 use_ecs_mini_to_create_world_without_importin(void)

{
  undefined8 uVar1;
  
  uVar1 = time_management_not_available();
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x424,
                "#[bold]import addons");
  FUN_140399740(0);
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x426,
                "use ecs_mini to create world without importing addons");
  FUN_1403c74a0(uVar1,FUN_1403c6fc0,"FlecsSystem");
  FUN_1403c74a0(uVar1,ecspostupdate,"FlecsPipeline");
  FUN_1403c74a0(uVar1,progresstimers,"FlecsTimer");
  FUN_1403c74a0(uVar1,FUN_1403c9520,"FlecsMeta");
  FUN_1403c74a0(uVar1,FUN_1403ca230,"FlecsDoc");
  FUN_1403c74a0(uVar1,FUN_1403cb170,"FlecsScript");
  FUN_1403c74a0(uVar1,dequeuerest,"FlecsRest");
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x43d,
                "#[green]module#[reset] flecs.units is not automatically imported");
  FUN_140399630(0,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/world.c",0x43f,
                "addons imported!");
  FUN_140399750(0);
  return uVar1;
}

