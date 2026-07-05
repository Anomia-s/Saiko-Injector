/**
 * Function: failed_to_create_rest_server_on_s_u
 * Address:  1403ccba0
 * Signature: undefined failed_to_create_rest_server_on_s_u(void)
 * Body size: 448 bytes
 */


void failed_to_create_rest_server_on_s_u(longlong param_1)

{
  undefined8 uVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ushort uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  char *local_a8;
  uint local_a0;
  code *local_98;
  undefined8 *local_90;
  ushort local_88;
  undefined4 local_86;
  undefined2 local_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  puVar2 = (ushort *)FUN_1400c4580(param_1,0x18,0);
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar8 = 0;
    do {
      uVar7 = *puVar2;
      if (uVar7 == 0) {
        *puVar2 = 0x6c66;
        uVar7 = 0x6c66;
      }
      uVar6 = *(undefined8 *)(puVar2 + 4);
      uVar1 = *(undefined8 *)(param_1 + 8);
      puVar3 = (undefined8 *)(*DAT_1415033a8)(0x38);
      local_82 = 0;
      local_86 = 0;
      local_78 = 0;
      local_70 = 0x3fc999999999999a;
      uStack_68 = 0;
      local_98 = failed_to_serialize_type_info_for_s;
      local_90 = puVar3;
      local_88 = uVar7;
      local_80 = uVar6;
      lVar4 = FUN_1405f8050(&local_98);
      if (lVar4 == 0) {
        (*DAT_1415033b0)(puVar3);
        local_a8 = *(char **)(puVar2 + 4);
        if (local_a8 == (char *)0x0) {
          local_a8 = "0.0.0.0";
        }
        local_a0 = (uint)*puVar2;
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/rest.c"
                      ,0x870,"failed to create REST server on %s:%u");
      }
      else {
        *puVar3 = uVar1;
        puVar3[1] = lVar4;
        *(undefined4 *)(puVar3 + 2) = 1;
        lVar5 = FUN_1403ae4f0(uVar1,"flecs.core.BuildInfo");
        if (lVar5 != 0) {
          local_a8 = (char *)FUN_1400bdbb0();
          FUN_1400bb430(uVar1,0x103,lVar5,0x30);
        }
        uVar6 = FUN_1405fa180(lVar4);
        *(undefined8 *)(puVar2 + 8) = uVar6;
        FUN_1405f85c0(lVar4);
      }
      lVar8 = lVar8 + 1;
      puVar2 = puVar2 + 0xc;
    } while (lVar8 < *(int *)(param_1 + 0x14));
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_c8);
}

