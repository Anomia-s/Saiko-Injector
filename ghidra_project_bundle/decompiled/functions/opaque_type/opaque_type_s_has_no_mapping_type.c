/**
 * Function: opaque_type_s_has_no_mapping_type
 * Address:  1405e9c10
 * Signature: undefined opaque_type_s_has_no_mapping_type(void)
 * Body size: 378 bytes
 */


void opaque_type_s_has_no_mapping_type(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar11;
  
  uVar1 = *param_1;
  plVar4 = (longlong *)FUN_1400c4580(param_1,0x90,0);
  lVar9 = (longlong)*(int *)((longlong)param_1 + 0x14);
  if (0 < lVar9) {
    lVar10 = 0;
    do {
      while( true ) {
        uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        uVar2 = *(ulonglong *)(param_1[3] + lVar10 * 8);
        lVar3 = *plVar4;
        if (lVar3 != 0) break;
        in_stack_ffffffffffffffa8 = FUN_1403af230(uVar1,uVar2);
        uVar7 = 0x16;
        pcVar8 = "opaque type \'%s\' has no mapping type";
LAB_1405e9c95:
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/opaque_ts.c"
                      ,uVar7,pcVar8,in_stack_ffffffffffffffa8);
        lVar10 = lVar10 + 1;
        plVar4 = plVar4 + 0x12;
        if (lVar9 == lVar10) {
          return;
        }
      }
      lVar5 = FUN_1400bc2a0(uVar1,lVar3);
      if ((lVar5 == 0) && (lVar5 = FUN_1403af230(uVar1,lVar3), lVar5 == 0)) {
        thunk_FUN_1400b7e20(uVar1,lVar3,uVar2 & 0xffffffff | 0x8000012600000000);
      }
      piVar6 = (int *)FUN_1400ba4f0(uVar1,uVar2,1);
      if (((piVar6 == (int *)0x0) || (*piVar6 == 0)) || (piVar6[1] == 0)) {
        in_stack_ffffffffffffffa8 = FUN_1403af230(uVar1,uVar2);
        uVar7 = 0x25;
        pcVar8 = "opaque type \'%s\' has no size/alignment, register as component first";
        goto LAB_1405e9c95;
      }
      in_stack_ffffffffffffffa8 = CONCAT44(uVar11,piVar6[1]);
      type_s_reregistered_as_s_was_s(uVar1,uVar2,6,*piVar6,in_stack_ffffffffffffffa8);
      lVar10 = lVar10 + 1;
      plVar4 = plVar4 + 0x12;
    } while (lVar9 != lVar10);
  }
  return;
}

