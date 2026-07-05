/**
 * Function: vector_s_element_type_has_no_type_info
 * Address:  1405e9820
 * Signature: undefined vector_s_element_type_has_no_type_info(void)
 * Body size: 353 bytes
 */


void vector_s_element_type_has_no_type_info(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar10;
  
  uVar1 = *param_1;
  lVar3 = FUN_1400c4580(param_1,8,0);
  lVar8 = (longlong)*(int *)((longlong)param_1 + 0x14);
  if (0 < lVar8) {
    lVar9 = 0;
    do {
      while( true ) {
        uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        uVar6 = *(undefined8 *)(param_1[3] + lVar9 * 8);
        lVar5 = *(longlong *)(lVar3 + lVar9 * 8);
        if (lVar5 != 0) break;
        in_stack_ffffffffffffffb8 = FUN_1403af230(uVar1,uVar6);
        uVar6 = 0x44;
        pcVar7 = "vector \'%s\' has no element type";
LAB_1405e9882:
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/array_ts.c"
                      ,uVar6,pcVar7,in_stack_ffffffffffffffb8);
        lVar9 = lVar9 + 1;
        if (lVar8 == lVar9) {
          return;
        }
      }
      cVar2 = FUN_1400b8670(uVar1,lVar5);
      if (cVar2 == '\0') {
        in_stack_ffffffffffffffb8 = FUN_1403af230(uVar1,uVar6);
        uVar6 = 0x49;
LAB_1405e9948:
        pcVar7 = "vector \'%s\' has invalid element type";
        goto LAB_1405e9882;
      }
      lVar4 = FUN_1400ba4f0(uVar1,lVar5,1);
      if (lVar4 == 0) {
        in_stack_ffffffffffffffb8 = FUN_1403af230(uVar1,uVar6);
        uVar6 = 0x4e;
        goto LAB_1405e9948;
      }
      lVar5 = FUN_1403a5610(uVar1,lVar5);
      if (lVar5 == 0) {
        in_stack_ffffffffffffffb8 = FUN_1403af230(uVar1,uVar6);
        uVar6 = 0x53;
        pcVar7 = "vector \'%s\' element type has no type info";
        goto LAB_1405e9882;
      }
      in_stack_ffffffffffffffb8 = CONCAT44(uVar10,8);
      type_s_reregistered_as_s_was_s(uVar1,uVar6,5,0x10,in_stack_ffffffffffffffb8);
      lVar9 = lVar9 + 1;
    } while (lVar8 != lVar9);
  }
  return;
}

