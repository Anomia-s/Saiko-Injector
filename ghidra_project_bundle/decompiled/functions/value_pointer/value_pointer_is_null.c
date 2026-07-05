/**
 * Function: value_pointer_is_null
 * Address:  140759a40
 * Signature: undefined value_pointer_is_null(void)
 * Body size: 638 bytes
 */


undefined8 value_pointer_is_null(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  double dVar10;
  
  if (param_2[1] == 0) {
    pcVar8 = "value pointer is null";
    uVar6 = 0x4db;
LAB_140759af7:
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,uVar6,pcVar8);
switchD_140759ab5_default:
    return 0xffffffff;
  }
  lVar2 = *param_2;
  piVar3 = (int *)FUN_1400ba4f0(*param_1,lVar2,0x16e);
  if (piVar3 == (int *)0x0) {
    pcVar8 = "type of value does not have reflection data";
    uVar6 = 0x4e0;
    goto LAB_140759af7;
  }
  iVar1 = *piVar3;
  if (iVar1 == 2) {
switchD_140759ab5_caseD_a:
    uVar7 = (ulonglong)*(int *)param_2[1];
    goto LAB_140759b1a;
  }
  if (iVar1 == 1) {
    uVar7 = (ulonglong)*(uint *)param_2[1];
    goto LAB_140759b1a;
  }
  if (iVar1 != 0) {
    lVar5 = (longlong)*(short *)(param_1 + 0x101);
    lVar2 = param_1[lVar5 * 8 + 2];
    lVar9 = (longlong)*(short *)((longlong)param_1 + lVar5 * 0x40 + 0x1a) * 0x38;
    uVar6 = missing_ensure_element_for_opaque_type_s(*param_1,param_1 + lVar5 * 8 + 1);
    lVar5 = *(longlong *)(lVar2 + 0x20 + lVar9);
    if (lVar5 != *param_2) {
      uVar6 = FUN_1403ae340(*param_1,0,*param_2,".",0);
      unsupported_conversion_from_s_to_s_for_s(param_1,lVar2 + lVar9,uVar6);
      (*DAT_1415033b0)(uVar6);
      return 0xffffffff;
    }
    uVar6 = FUN_140762c30(*param_1,lVar5,uVar6,param_2[1]);
    return uVar6;
  }
  puVar4 = (undefined4 *)FUN_1400ba4f0(*param_1,lVar2,0x163);
  switch(*puVar4) {
  case 1:
    uVar6 = FUN_1407586c0(param_1,*(undefined1 *)param_2[1]);
    return uVar6;
  case 2:
    uVar6 = value_0f_is_out_of_bounds_for_type_s(param_1,*(undefined1 *)param_2[1]);
    return uVar6;
  case 3:
  case 4:
    uVar7 = (ulonglong)*(byte *)param_2[1];
    break;
  case 5:
    uVar7 = (ulonglong)*(ushort *)param_2[1];
    break;
  case 6:
    uVar7 = (ulonglong)*(uint *)param_2[1];
    break;
  case 7:
  case 0xe:
    uVar7 = *(ulonglong *)param_2[1];
    break;
  case 8:
    uVar7 = (ulonglong)*(char *)param_2[1];
    goto LAB_140759b1a;
  case 9:
    uVar7 = (ulonglong)*(short *)param_2[1];
    goto LAB_140759b1a;
  case 10:
    goto switchD_140759ab5_caseD_a;
  case 0xb:
  case 0xf:
    uVar7 = *(ulonglong *)param_2[1];
LAB_140759b1a:
    uVar6 = value_0f_is_out_of_bounds_for_type_s(param_1,uVar7);
    return uVar6;
  case 0xc:
    dVar10 = (double)*(float *)param_2[1];
    goto LAB_140759c92;
  case 0xd:
    dVar10 = *(double *)param_2[1];
LAB_140759c92:
    uVar6 = value_0f_is_out_of_bounds_for_type_s(param_1,dVar10);
    return uVar6;
  case 0x10:
    if (*(longlong *)param_2[1] != 0) {
      uVar6 = s_is_not_an_enum_constant_for_type_s();
      return uVar6;
    }
    uVar6 = no_object_to_assign(param_1);
    return uVar6;
  case 0x11:
    uVar6 = FUN_14075a220(param_1,*(undefined8 *)param_2[1]);
    return uVar6;
  case 0x12:
    uVar6 = FUN_14075a310(param_1,*(undefined8 *)param_2[1]);
    return uVar6;
  default:
    goto switchD_140759ab5_default;
  }
  uVar6 = value_0f_is_out_of_bounds_for_type_s(param_1,uVar7);
  return uVar6;
}

