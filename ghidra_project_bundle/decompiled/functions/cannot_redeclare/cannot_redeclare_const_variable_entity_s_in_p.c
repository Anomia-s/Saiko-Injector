/**
 * Function: cannot_redeclare_const_variable_entity_s_in_p
 * Address:  1405f54a0
 * Signature: undefined cannot_redeclare_const_variable_entity_s_in_p(void)
 * Body size: 401 bytes
 */


longlong cannot_redeclare_const_variable_entity_s_in_p(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_1403ae3f0(param_1,param_2[1],*param_2);
  if (lVar1 == 0) {
    puVar3 = (undefined4 *)FUN_1403a5610(param_1,param_2[2]);
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_78 = param_2[1];
    uStack_70 = *param_2;
    lVar1 = s_is_invalid_for_ecs_entity_desc_t_add_expr(param_1,&local_88);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      puVar4 = (undefined8 *)FUN_1400ba6e0(param_1,lVar1,DAT_1416dfb90,0x18);
      uVar2 = (*DAT_141503398)(*puVar3);
      puVar4[1] = uVar2;
      *puVar4 = param_2[2];
      puVar4[2] = puVar3;
      FUN_140762ad0(param_1,param_2[2],uVar2);
      FUN_140762c30(param_1,param_2[2],puVar4[1],param_2[3]);
      FUN_1400ba7b0(param_1,lVar1,DAT_1416dfb90);
    }
  }
  else {
    local_98 = 0;
    lVar1 = 0;
    uVar2 = FUN_1403ae340(param_1,0,param_2[1],".");
    local_90 = FUN_1403d2d90(uVar2);
    local_98 = *param_2;
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/function.c"
                  ,0x9d,"cannot redeclare const variable entity \'%s\' in parent \'%s\'");
  }
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_b8)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_b8);
}

