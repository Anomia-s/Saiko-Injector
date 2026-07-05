/**
 * Function: nested_templates_are_not_allowed
 * Address:  1405ed4c0
 * Signature: undefined nested_templates_are_not_allowed(void)
 * Body size: 1031 bytes
 */


undefined8 nested_templates_are_not_allowed(longlong *param_1,int *param_2)

{
  Decoration<__int64> *this;
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  if (*param_2 == 0xd) {
    puVar1 = (undefined8 *)param_1[0x8b];
    iVar2 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                      ((Decoration<__int64> *)(param_1[0x92] + 0x40));
    this = (Decoration<__int64> *)(puVar1 + 5);
    iVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
    uVar6 = *(undefined8 *)(param_2 + 4);
    if (iVar3 < iVar2) {
      pcVar9 = "const variables declared before prop \'%s\' (props must come first)";
LAB_1405ed6ba:
      FUN_1405f0f70(param_1,param_2,pcVar9,uVar6);
      goto LAB_1405ed6bf;
    }
    lVar4 = FUN_140761da0(param_1[0x92],uVar6);
    if (lVar4 == 0) {
      uVar6 = *(undefined8 *)(param_2 + 4);
      pcVar9 = "variable \'%s\' redeclared";
      goto LAB_1405ed6ba;
    }
    if (*(longlong *)(param_2 + 6) == 0) {
      local_68 = 0;
      lStack_60 = 0;
      iVar2 = FUN_1405f1be0(param_1,param_2 + 8,&local_68);
      if (iVar2 != 0) {
        uVar6 = *(undefined8 *)(param_2 + 4);
        pcVar9 = "failed to evaluate expression for const variable \'%s\'";
        goto LAB_1405ed6ba;
      }
      puVar5 = (undefined4 *)FUN_1403a5610(param_1[0x89],local_68);
      uVar6 = FUN_1403d2f20(param_1[0x8a] + 0x3080,*puVar5,puVar5[1]);
      *(undefined8 *)(lVar4 + 0x10) = uVar6;
      *(longlong *)(lVar4 + 8) = local_68;
      local_58 = local_68;
      *(undefined4 **)(lVar4 + 0x18) = puVar5;
      FUN_1403a4810(uVar6,1,puVar5);
      FUN_140762c00(param_1[0x89],puVar5,*(undefined8 *)(lVar4 + 0x10),lStack_60);
      FUN_140762b80(param_1[0x89],puVar5,lStack_60);
      lVar7 = lStack_60;
      if (lStack_60 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_140391250(param_1[0x89] + 0xcc0,*puVar5);
      }
      FUN_140391740(uVar6,lVar7);
LAB_1405ed7b5:
      lVar7 = FUN_1403b2f60(*param_1 + 0x18,this,0x28);
      uVar6 = *(undefined8 *)(puVar5 + 0x2e);
      uVar8 = FUN_140391250(*param_1 + 0x18,*puVar5);
      uVar6 = FUN_140391620(uVar8,uVar6);
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
      *(longlong *)(lVar7 + 8) = local_58;
      *(undefined4 **)(lVar7 + 0x18) = puVar5;
      FUN_140762c00(param_1[0x89],puVar5,uVar6,*(undefined8 *)(lVar4 + 0x10));
      local_c8 = 0;
      uStack_c0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_b8 = *puVar1;
      uStack_b0 = *(undefined8 *)(param_2 + 4);
      uVar6 = s_is_invalid_for_ecs_entity_desc_t_add_expr(param_1[0x89],&local_c8);
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      local_e8 = *(undefined8 *)(lVar4 + 8);
      local_108 = &local_e8;
      FUN_1400bb430(param_1[0x89],uVar6,0x167,0x20);
      uVar6 = 0;
    }
    else {
      local_100 = &local_58;
      local_f8 = 0;
      local_108 = (undefined8 *)0x0;
      iVar2 = variable_identifier_s_not_allowed_here(param_1,0,*(longlong *)(param_2 + 6),0);
      if (iVar2 != 0 || local_58 == 0) {
        local_108 = *(undefined8 **)(param_2 + 4);
        uVar6 = *(undefined8 *)(param_2 + 6);
        pcVar9 = "unresolved type \'%s\' for prop \'%s\'";
        goto LAB_1405ed6ba;
      }
      puVar5 = (undefined4 *)cannot_set_value_of_s_not_a_component(param_1,param_2);
      uVar6 = 0xffffffff;
      if (puVar5 != (undefined4 *)0x0) {
        *(longlong *)(lVar4 + 8) = local_58;
        uVar6 = FUN_1403d2e10(param_1[0x8a] + 0x3080,*puVar5,puVar5[1]);
        *(undefined8 *)(lVar4 + 0x10) = uVar6;
        *(undefined4 **)(lVar4 + 0x18) = puVar5;
        iVar2 = FUN_1405f1be0(param_1,param_2 + 8,lVar4 + 8);
        uVar6 = 0xffffffff;
        if (iVar2 == 0) goto LAB_1405ed7b5;
      }
    }
  }
  else {
    if (*param_2 != 0xc) {
      if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_128)) {
        uVar6 = annotation_must_be_applied_to_an_entity();
        return uVar6;
      }
      goto LAB_1405ed8b7;
    }
    FUN_1405f0f70(param_1,param_2,"nested templates are not allowed");
LAB_1405ed6bf:
    uVar6 = 0xffffffff;
  }
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_128)) {
    return uVar6;
  }
LAB_1405ed8b7:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_128);
}

