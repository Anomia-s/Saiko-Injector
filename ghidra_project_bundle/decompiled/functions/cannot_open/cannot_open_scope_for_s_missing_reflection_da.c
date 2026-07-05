/**
 * Function: cannot_open_scope_for_s_missing_reflection_da
 * Address:  140757870
 * Signature: undefined cannot_open_scope_for_s_missing_reflection_da(void)
 * Body size: 313 bytes
 */


undefined8 *
cannot_open_scope_for_s_missing_reflection_da
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  lVar1 = FUN_1400ba4f0(param_2,param_3,0x16d);
  if (lVar1 == 0) {
    uVar2 = FUN_1403b36e0(param_2,param_3);
    local_78 = uVar2;
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,0xf0,"cannot open scope for \'%s\' (missing reflection data)");
    (*DAT_1415033b0)(uVar2);
    param_4 = 0;
    uVar2 = 0;
    param_3 = 0;
  }
  else {
    uVar2 = FUN_140106180(lVar1 + 8);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[5] = local_68;
  param_1[6] = uStack_60;
  param_1[7] = local_58;
  param_1[8] = uStack_50;
  memset(param_1 + 9,0,0x7c2);
  *(bool *)((longlong)param_1 + 0x80a) = lVar1 != 0;
  *(undefined8 *)((longlong)param_1 + 0x80b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x813) = 0;
  param_1[0x103] = 0;
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_98);
}

