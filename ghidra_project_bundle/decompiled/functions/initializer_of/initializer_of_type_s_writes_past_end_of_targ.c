/**
 * Function: initializer_of_type_s_writes_past_end_of_targ
 * Address:  140765f20
 * Signature: undefined initializer_of_type_s_writes_past_end_of_targ(void)
 * Body size: 1014 bytes
 */


undefined8
initializer_of_type_s_writes_past_end_of_targ
          (longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,int param_5)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 auStack_8b8 [32];
  undefined8 local_898;
  longlong local_890;
  longlong local_888;
  ulonglong local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  longlong local_860;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_8b8;
  cVar1 = *(char *)(param_2 + 0x39);
  FUN_1405f5340(param_1[3]);
  local_890 = param_3;
  if (cVar1 != '\x01') {
    local_888 = param_2;
    lVar10 = FUN_140106180((Decoration<__int64> *)(param_2 + 0x20));
    uVar4 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 0x20))
    ;
    if (0 < (int)uVar4) {
      local_880 = (ulonglong)param_5;
      lVar9 = 0;
      do {
        piVar6 = *(int **)(lVar10 + 8 + lVar9);
        if (*piVar6 != 2) {
          lVar5 = FUN_1405f52c0(param_1[3]);
          iVar3 = entity_s_does_not_have_component_s
                            (param_1,*(undefined8 *)(lVar10 + 8 + lVar9),lVar5);
          if (iVar3 == 0) {
            uVar11 = *(undefined8 *)(*(longlong *)(lVar10 + 8 + lVar9) + 8);
            puVar8 = (undefined8 *)*param_1;
            piVar6 = (int *)FUN_1403a5610(*puVar8,uVar11);
            param_3 = local_890;
            uVar2 = *(ulonglong *)(lVar10 + 0x10 + lVar9);
            if ((local_880 < uVar2) || (local_880 - uVar2 < (ulonglong)(longlong)*piVar6)) {
              local_898 = 0;
              uVar11 = FUN_1403ae340(*puVar8,0,uVar11,".");
              local_898 = FUN_1403d2d90(uVar11);
              FUN_140399a50(puVar8[1],puVar8[2],*(longlong *)(local_888 + 0x18) - puVar8[2],
                            "initializer of type \'%s\' writes past end of target value");
            }
            else {
              iVar3 = *(int *)(lVar10 + 0x18 + lVar9);
              if (iVar3 != 0) {
                local_860 = uVar2 + local_890;
                local_898 = CONCAT44(local_898._4_4_,iVar3);
                local_868 = uVar11;
                iVar3 = invalid_operator_for_binary_expression(*param_1,0,lVar5);
                goto joined_r0x000140765fe5;
              }
              if (*(char *)(lVar5 + 0x18) == '\x01') {
                iVar3 = FUN_140762c60(param_1[1],uVar11);
              }
              else {
                iVar3 = FUN_140762c30(param_1[1],uVar11,uVar2 + local_890);
              }
              if (iVar3 == 0) goto LAB_140765feb;
            }
          }
LAB_1407661bd:
          FUN_1405f53a0(param_1[3]);
          uVar11 = 0xffffffff;
          goto LAB_1407662df;
        }
        local_898 = CONCAT44(local_898._4_4_,param_5);
        iVar3 = initializer_of_type_s_writes_past_end_of_targ(param_1,piVar6,param_3,0);
joined_r0x000140765fe5:
        if (iVar3 != 0) goto LAB_1407661bd;
LAB_140765feb:
        lVar9 = lVar9 + 0x20;
      } while ((ulonglong)uVar4 << 5 != lVar9);
    }
    FUN_1405f53a0(param_1[3]);
    uVar11 = 0;
    goto LAB_1407662df;
  }
  if (param_4 == (undefined8 *)0x0) {
    param_4 = &local_868;
    cannot_open_scope_for_s_missing_reflection_da
              (param_4,param_1[1],*(undefined8 *)(param_2 + 8),param_3);
    iVar3 = cannot_open_scope_for_type_s(param_4);
    if (iVar3 == 0) goto LAB_140766122;
LAB_1407662d1:
    uVar11 = 0xffffffff;
  }
  else {
    iVar3 = cannot_open_scope_for_type_s(param_4);
    if (iVar3 != 0) goto LAB_1407662d1;
LAB_140766122:
    uVar4 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 0x20))
    ;
    plVar7 = (longlong *)FUN_140106180((Decoration<__int64> *)(param_2 + 0x20));
    if (0 < (int)uVar4) {
      if (*(int *)plVar7[1] == 2) {
        local_898 = CONCAT44(local_898._4_4_,param_5);
        iVar3 = initializer_of_type_s_writes_past_end_of_targ
                          (param_1,(int *)plVar7[1],local_890,param_4);
      }
      else {
        puVar8 = (undefined8 *)FUN_1405f52c0(param_1[3]);
        iVar3 = entity_s_does_not_have_component_s(param_1,plVar7[1],puVar8);
        if (iVar3 != 0) goto LAB_1407662d1;
        if (*plVar7 != 0) {
          FUN_140757d10(param_4);
        }
        local_878 = *puVar8;
        local_870 = puVar8[1];
        iVar3 = value_pointer_is_null(param_4,&local_878);
      }
      if (iVar3 != 0) goto LAB_1407662d1;
      if (uVar4 != 1) {
        plVar7 = plVar7 + 5;
        lVar10 = (ulonglong)uVar4 - 1;
        do {
          too_many_elements_for_scope_for_type_s(param_4);
          if (*(int *)*plVar7 == 2) {
            local_898 = CONCAT44(local_898._4_4_,param_5);
            iVar3 = initializer_of_type_s_writes_past_end_of_targ
                              (param_1,(int *)*plVar7,local_890,param_4);
          }
          else {
            puVar8 = (undefined8 *)FUN_1405f52c0(param_1[3]);
            iVar3 = entity_s_does_not_have_component_s(param_1,*plVar7,puVar8);
            if (iVar3 != 0) goto LAB_1407662d1;
            if (plVar7[-1] != 0) {
              FUN_140757d10(param_4);
            }
            local_878 = *puVar8;
            local_870 = puVar8[1];
            iVar3 = value_pointer_is_null(param_4,&local_878);
          }
          if (iVar3 != 0) goto LAB_1407662d1;
          plVar7 = plVar7 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
    iVar3 = missing_resize_for_opaque_type_s(param_4);
    if (iVar3 != 0) goto LAB_1407662d1;
    uVar11 = 0;
  }
  FUN_1405f53a0(param_1[3]);
LAB_1407662df:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_8b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_8b8);
  }
  return uVar11;
}

