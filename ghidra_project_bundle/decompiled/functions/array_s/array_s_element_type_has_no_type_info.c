/**
 * Function: array_s_element_type_has_no_type_info
 * Address:  1405e9600
 * Signature: undefined array_s_element_type_has_no_type_info(void)
 * Body size: 506 bytes
 */


void array_s_element_type_has_no_type_info(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar11;
  
  uVar2 = *param_1;
  lVar4 = FUN_1400c4580(param_1,0x10,0);
  if (0 < (longlong)*(int *)((longlong)param_1 + 0x14)) {
    lVar10 = (longlong)*(int *)((longlong)param_1 + 0x14) * 8;
    lVar7 = 0;
    do {
      while( true ) {
        uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        uVar8 = *(undefined8 *)(param_1[3] + lVar7);
        lVar6 = *(longlong *)(lVar4 + lVar7 * 2);
        if (lVar6 != 0) break;
        in_stack_ffffffffffffffa8 = FUN_1403af230(uVar2,uVar8);
        uVar8 = 0x16;
        pcVar9 = "array \'%s\' has no element type";
LAB_1405e9679:
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/array_ts.c"
                      ,uVar8,pcVar9,in_stack_ffffffffffffffa8);
joined_r0x0001405e97fb:
        lVar7 = lVar7 + 8;
        if (lVar10 == lVar7) {
          return;
        }
      }
      iVar1 = *(int *)(lVar4 + 8 + lVar7 * 2);
      if (iVar1 == 0) {
        in_stack_ffffffffffffffa8 = FUN_1403af230(uVar2,uVar8);
        uVar8 = 0x1b;
        pcVar9 = "array \'%s\' has size 0";
        goto LAB_1405e9679;
      }
      cVar3 = FUN_1400b8670(uVar2,lVar6);
      if (cVar3 == '\0') {
        in_stack_ffffffffffffffa8 = FUN_1403af230(uVar2,uVar8);
        uVar8 = 0x20;
        pcVar9 = "array \'%s\' has invalid element type";
        goto LAB_1405e9679;
      }
      httplib::ClientImpl::vfunction4();
      piVar5 = (int *)FUN_1400ba4f0(uVar2,lVar6,1);
      if (piVar5 == (int *)0x0) {
        in_stack_ffffffffffffffa8 = FUN_1403af230(uVar2,uVar8);
        uVar8 = 0x28;
        pcVar9 = "array \'%s\' has invalid element type";
LAB_1405e97ea:
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/array_ts.c"
                      ,uVar8,pcVar9,in_stack_ffffffffffffffa8);
        goto joined_r0x0001405e97fb;
      }
      lVar6 = FUN_1403a5610(uVar2,lVar6);
      if (lVar6 == 0) {
        in_stack_ffffffffffffffa8 = FUN_1403af230(uVar2,uVar8);
        uVar8 = 0x2d;
        pcVar9 = "array \'%s\' element type has no type info";
        goto LAB_1405e97ea;
      }
      in_stack_ffffffffffffffa8 = CONCAT44(uVar11,piVar5[1]);
      type_s_reregistered_as_s_was_s(uVar2,uVar8,4,iVar1 * *piVar5,in_stack_ffffffffffffffa8);
      lVar7 = lVar7 + 8;
    } while (lVar10 != lVar7);
  }
  return;
}

