/**
 * Function: enum_s_has_no_constants
 * Address:  1405e58d0
 * Signature: undefined enum_s_has_no_constants(void)
 * Body size: 1117 bytes
 */


longlong enum_s_has_no_constants(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_a28 [32];
  undefined8 local_a08;
  undefined8 local_a00;
  uint local_9ec;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  longlong lStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined1 local_978 [2080];
  undefined1 local_158 [248];
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_a28;
  uVar4 = FUN_140396810(param_1,local_158);
  lVar10 = *param_2;
  if (lVar10 == 0) {
    lVar10 = FUN_1400b8760(uVar4);
    uVar13 = param_2[0x81];
  }
  else {
    uVar13 = param_2[0x81];
  }
  if (uVar13 == 0) {
    uVar13 = 0x15b;
  }
  puVar5 = (uint *)FUN_1400ba4f0(uVar4,uVar13,0x163);
  if (puVar5 == (uint *)0x0) {
    local_a08 = 0;
    lVar10 = 0;
    uVar4 = FUN_1403ae340(uVar4,0,uVar13,".");
    local_a08 = uVar4;
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                  ,0x1c0,"underlying type \'%s\' must be a primitive type");
    (*DAT_1415033b0)(uVar4);
  }
  else {
    uVar1 = *puVar5;
    puVar6 = (ulonglong *)FUN_1400ba6e0(uVar4,lVar10,0x164,8);
    *puVar6 = uVar13;
    FUN_1400ba7b0(uVar4,lVar10,0x164);
    local_9e8 = FUN_1403aeb80(uVar4,lVar10);
    uVar12 = uVar13 & 0xffffffff | 0x8000017200000000;
    local_9ec = uVar1 & 0xfffffffc;
    lVar14 = 0;
    local_9e0 = uVar4;
    do {
      lVar2 = *(longlong *)((longlong)param_2 + lVar14 + 8);
      if (lVar2 == 0) {
        FUN_1403aeb80(uVar4,local_9e8);
        FUN_1403969b0(uVar4,local_158);
        if (lVar14 == 0) {
          local_a08 = FUN_1403af230(uVar4,lVar10);
          FUN_140399630(0xfffffffd,
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                        ,0x20e,"enum \'%s\' has no constants");
          FUN_1400ba990(uVar4,lVar10);
LAB_1405e5cf5:
          lVar10 = 0;
        }
        goto LAB_1405e5cf8;
      }
      local_9c8 = 0;
      local_998 = 0;
      uStack_990 = 0;
      local_9a8 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      uStack_9b0 = 0;
      local_9d8 = 0;
      uStack_9d0 = 0;
      local_988 = 0;
      lStack_9c0 = lVar2;
      uVar7 = s_is_invalid_for_ecs_entity_desc_t_add_expr(uVar4,&local_9d8);
      if ((*(longlong *)((longlong)param_2 + lVar14 + 0x10) == 0) &&
         (*(longlong *)((longlong)param_2 + lVar14 + 0x18) == 0)) {
        thunk_FUN_1400b7e20(uVar4,uVar7,0x172);
      }
      else {
        piVar8 = (int *)FUN_1403a5610(uVar4,uVar13);
        uVar9 = FUN_1400ba6e0(uVar4,uVar7,uVar12,(longlong)*piVar8);
        cannot_open_scope_for_s_missing_reflection_da(local_978,uVar4,uVar13,uVar9);
        if (*(longlong *)((longlong)param_2 + lVar14 + 0x10) == 0) {
          if (local_9ec != 4) {
            local_a08 = 0;
            uVar4 = FUN_1403ae340(uVar4,0,uVar7,".");
            pcVar11 = "use desc::value for constant \'%s\' whichhas a signed underlying type";
            uVar7 = 0x1f5;
            goto LAB_1405e5ce7;
          }
          iVar3 = value_0f_is_out_of_bounds_for_type_s
                            (local_978,*(undefined8 *)((longlong)param_2 + lVar14 + 0x18));
          if (iVar3 != 0) goto LAB_1405e59c0;
LAB_1405e5b45:
          FUN_1400ba7b0(uVar4,uVar7,uVar12);
        }
        else {
          if (local_9ec == 4) {
            local_a08 = 0;
            uVar4 = FUN_1403ae340(uVar4,0,uVar7,".");
            pcVar11 = 
            "use desc::value_unsigned for constant \'%s\' whichhas an unsigned underlying type";
            uVar7 = 0x1ec;
LAB_1405e5ce7:
            local_a08 = uVar4;
            FUN_140399630(0xfffffffd,
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                          ,uVar7,pcVar11);
            (*DAT_1415033b0)(uVar4);
            goto LAB_1405e5cf5;
          }
          iVar3 = value_0f_is_out_of_bounds_for_type_s(local_978);
          if (iVar3 == 0) goto LAB_1405e5b45;
LAB_1405e59c0:
          local_a08 = 0;
          uVar7 = FUN_1403ae340(uVar4,0,lVar10,".");
          local_a08 = 0;
          uVar9 = FUN_1403ae340(uVar4,0,uVar13,".");
          local_a08 = uVar7;
          local_a00 = uVar9;
          FUN_140399630(0xfffffffd,
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                        ,0x200,
                        "value for constant \'%s\' for enum \'%s\' is not valid for underlying type \'%s\'"
                       );
          uVar4 = local_9e0;
          (*DAT_1415033b0)(uVar9);
          (*DAT_1415033b0)(uVar7);
        }
      }
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != 0x400);
    FUN_1403aeb80(uVar4,local_9e8);
    FUN_1403969b0(uVar4,local_158);
  }
LAB_1405e5cf8:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_a28)) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_a28);
}

