/**
 * Function: underlying_type_entity_for_enum_s_is_not_a_ty
 * Address:  1405e6730
 * Signature: undefined underlying_type_entity_for_enum_s_is_not_a_ty(void)
 * Body size: 309 bytes
 */


void underlying_type_entity_for_enum_s_is_not_a_ty(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  
  uVar2 = *param_1;
  lVar4 = FUN_1400c4580(param_1,8,0);
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  if (0 < (longlong)iVar1) {
    lVar8 = 0;
    do {
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      uVar5 = *(undefined8 *)(param_1[3] + lVar8 * 8);
      lVar7 = *(longlong *)(lVar4 + lVar8 * 8);
      if (lVar7 == 0) {
        lVar7 = 0x15b;
        *(undefined8 *)(lVar4 + lVar8 * 8) = 0x15b;
      }
      puVar6 = (undefined4 *)FUN_1400ba4f0(uVar2,lVar7,1);
      if (puVar6 == (undefined4 *)0x0) {
        uVar5 = FUN_1403ae340(uVar2,0,lVar7,".",0);
        in_stack_ffffffffffffffb8 = uVar5;
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                      ,0x176,"underlying_type entity for enum \'%s\' is not a type",uVar5);
        (*DAT_1415033b0)(uVar5);
      }
      else {
        in_stack_ffffffffffffffb8 = CONCAT44(uVar9,puVar6[1]);
        iVar3 = type_s_reregistered_as_s_was_s(uVar2,uVar5,2,*puVar6,in_stack_ffffffffffffffb8);
        if (iVar3 == 0) {
          thunk_FUN_1400b7e20(uVar2,uVar5,0x11d);
          thunk_FUN_1400b7e20(uVar2,uVar5,0x121);
          thunk_FUN_1400b7e20(uVar2,uVar5,0x11c);
        }
      }
      lVar8 = lVar8 + 1;
    } while (iVar1 != lVar8);
  }
  return;
}

