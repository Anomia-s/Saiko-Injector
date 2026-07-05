/**
 * Function: missing_parent_for_member_s
 * Address:  1405e90c0
 * Signature: undefined missing_parent_for_member_s(void)
 * Body size: 300 bytes
 */


void missing_parent_for_member_s
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
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
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_1400bc2a0();
  if (lVar1 == 0) {
    local_a8 = FUN_1403af230(param_1,param_2);
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/struct_ts.c"
                  ,0x131,"missing parent for member \'%s\'");
  }
  else {
    local_98 = FUN_1403af230(param_1,param_2);
    local_90 = *param_3;
    local_88 = *(undefined4 *)(param_3 + 1);
    local_84 = *(undefined4 *)(param_3 + 3);
    local_80 = param_3[2];
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_38 = 0;
    if (param_4 != (undefined8 *)0x0) {
      uStack_70 = *param_4;
      local_68 = param_4[1];
      uStack_60 = param_4[4];
      local_58 = param_4[5];
      uStack_50 = param_4[2];
      local_48 = param_4[3];
    }
    entity_s_for_member_s_is_not_a_unit(param_1,lVar1,param_2,&local_98);
  }
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_c8);
}

