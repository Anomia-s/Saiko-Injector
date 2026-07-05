// FUN_140064f50 @ 140064f50

void FUN_140064f50(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_9d8 [32];
  undefined1 local_9b8 [8];
  undefined8 local_9b0;
  undefined2 local_970;
  undefined8 local_968;
  undefined2 local_928;
  undefined8 local_920;
  undefined2 local_8e0;
  undefined4 local_a8;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_9d8;
  *(undefined4 *)(param_1 + 0x61) = param_3;
  if (*param_1 == 0) {
    lVar2 = use_ecs_mini_to_create_world_without_importin();
    *param_1 = lVar2;
    respawntimer(lVar2);
    signalregistry(*param_1);
    gfx_render_slot_failed(*param_1);
  }
  if (((char)param_2 == '\0') && ((char)param_1[0x8751] == '\0')) {
    cVar1 = FUN_140202fb0();
    *(char *)(param_1 + 0x8751) = cVar1;
    if (cVar1 != '\0') {
      FUN_140203930((longlong)param_1 + 0x43a8c);
    }
  }
  FUN_1401fb470(*param_1);
  param_1[0x54] = 0x4140000000000000;
  param_1[0x55] = 0x41c80000;
  param_1[0x56] = 0;
  param_1[0x57] = 0x3dcccccd3f9c61ab;
  param_1[0x58] = 0x147c35000;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0x4170000041700000;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0x3f80000040a00000;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_140191be0(param_1 + 0x49,param_2,param_3);
  lVar2 = FUN_140043700(0);
  param_1[0x62] = lVar2;
  memset(local_9b8,0,0x988);
  local_a8 = 1;
  local_9b0 = DAT_14151f658;
  local_970 = 3;
  local_968 = DAT_14151f5d8;
  local_928 = 5;
  local_920 = DAT_14151f5e0;
  local_8e0 = 5;
  lVar2 = cannot_enforce_querycacheall_query_contains_u(*param_1,local_9b8);
  param_1[100] = lVar2;
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_9d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_9d8);
  }
  return;
}


