/**
 * Function: missing_ensure_element_for_opaque_type_s
 * Address:  1407579d0
 * Signature: undefined missing_ensure_element_for_opaque_type_s(void)
 * Body size: 472 bytes
 */


longlong missing_ensure_element_for_opaque_type_s(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  lVar3 = param_2[1];
  lVar2 = param_2[4];
  lVar6 = (longlong)*(short *)((longlong)param_2 + 0x12) * 0x38 + lVar3;
  if (lVar2 == 0) {
    if (*(char *)(param_2 + 6) == '\0') {
      return (longlong)*(int *)(lVar6 + 8) + param_2[3];
    }
    iVar1 = **(int **)(lVar3 + 0x28);
    if (((*(int *)(lVar3 + -0x38) == 2) &&
        (*(int *)(param_2 + -1) <= *(int *)((longlong)param_2 + -0xc))) &&
       (puVar4 = (undefined8 *)missing_ensure_element_for_opaque_type_s(param_1,param_2 + -8),
       puVar4 != (undefined8 *)0x0)) {
      httplib::ClientImpl::vfunction4();
      FUN_1403b2be0(0,puVar4,iVar1,*(int *)((longlong)param_2 + -0xc) + 1,
                    *(undefined8 *)(lVar6 + 0x28));
      param_2[3] = *puVar4;
      if (*(int *)(param_2 + -1) <= *(int *)((longlong)param_2 + -0xc)) {
        *(int *)(param_2 + -1) = *(int *)((longlong)param_2 + -0xc) + 1;
      }
    }
    *(undefined1 *)((longlong)param_2 + 0x31) = 0;
    return (longlong)*(int *)(lVar6 + 8) +
           (longlong)*(int *)((longlong)param_2 + -0xc) * (longlong)iVar1 + param_2[3];
  }
  if (*(char *)(param_2 + 6) == '\0') {
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                    ,0xe0,"invalid operation for opaque type");
      return 0;
    }
    if (*(code **)(lVar2 + 0x78) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140757ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(lVar2 + 0x78))(param_2[3],*(longlong *)(lVar6 + 0x10));
      return lVar3;
    }
    uVar5 = FUN_1403ae340(param_1,0,*param_2,".",0);
    pcVar8 = "missing ensure_member() for opaque type %s";
    uVar7 = 0xd8;
  }
  else {
    if (*(longlong *)(lVar2 + 0x70) != 0) {
      *(undefined1 *)((longlong)param_2 + 0x31) = 0;
      if (param_2[3] == 0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140757a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(lVar2 + 0x70))(param_2[3],(longlong)*(int *)((longlong)param_2 + -0xc));
      return lVar3;
    }
    uVar5 = FUN_1403ae340(param_1,0,*param_2,".",0);
    pcVar8 = "missing ensure_element() for opaque type %s";
    uVar7 = 0xc5;
  }
  FUN_140399630(0xfffffffd,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                ,uVar7,pcVar8,uVar5);
  (*DAT_1415033b0)(uVar5);
  return 0;
}

