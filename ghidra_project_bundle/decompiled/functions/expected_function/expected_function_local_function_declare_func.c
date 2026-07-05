/**
 * Function: expected_function_local_function_declare_func
 * Address:  14078af20
 * Signature: undefined expected_function_local_function_declare_func(void)
 * Body size: 641 bytes
 */


AstStatFunction * expected_function_local_function_declare_func(char *param_1)

{
  ulonglong uVar1;
  AstStatFunction *pAVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  AstStatFunction *pAVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  AstStatFunction *local_58;
  undefined8 uStack_50;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_14078fd30(param_1,&local_88);
  iVar3 = *(int *)(param_1 + 0x80);
  if (iVar3 == 0x119) {
    if ((*param_1 == '\x01') && (iVar3 = strcmp("declare",*(char **)(param_1 + 0x98)), iVar3 == 0))
    {
      lVar8 = exceeded_allowed_recursion_depth_simplify_you(param_1,1);
      pAVar6 = (AstStatFunction *)property_type_annotation(param_1,lVar8 + 0xc,&local_88);
      return pAVar6;
    }
  }
  else {
    if (iVar3 == 0x12e) {
      pAVar6 = (AstStatFunction *)expected_function_after_local_declaration_wit(param_1,&local_88);
      return pAVar6;
    }
    if (iVar3 == 299) {
      if (local_80 == 0) {
        pcVar4 = param_1 + 0x84;
      }
      else {
        pcVar4 = (char *)(*local_88 + 0xc);
      }
      pAVar6 = *(AstStatFunction **)pcVar4;
      local_78 = *(undefined4 *)(param_1 + 0x80);
      uStack_74 = *(undefined4 *)(param_1 + 0x84);
      uStack_70 = *(undefined4 *)(param_1 + 0x88);
      uStack_6c = *(undefined4 *)(param_1 + 0x8c);
      local_68 = *(undefined4 *)(param_1 + 0x90);
      uStack_64 = *(undefined4 *)(param_1 + 0x94);
      uStack_60 = *(undefined4 *)(param_1 + 0x98);
      uStack_5c = *(undefined4 *)(param_1 + 0x9c);
      FUN_140787100(param_1);
      local_39 = 0;
      local_98 = 0;
      uVar5 = exceeded_allowed_recursion_depth_simplify_you(param_1,&local_39,&local_98);
      *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0) =
           *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0) + 1;
      expected_a_statement_got_did_you_forget_to_wr
                (param_1,&local_58,local_39,&local_78,&local_98,0,&local_88);
      pAVar2 = local_58;
      *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0) =
           *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0) + -1;
      uStack_50 = (local_58->AstNode_data).offset_0xc;
      local_58 = pAVar6;
      pAVar6 = (AstStatFunction *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
      Luau::AstStatFunction::AstStatFunction(pAVar6,&local_58,uVar5,pAVar2);
      if (param_1[0x58] != '\x01') {
        return pAVar6;
      }
      uVar5 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0xc);
      FUN_14079f140(uVar5,CONCAT44(uStack_70,uStack_74));
      local_58 = pAVar6;
      puVar7 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_58);
      *puVar7 = uVar5;
      return pAVar6;
    }
  }
  puVar9 = &local_78;
  the_beginning_of_an_interpolated_string(param_1 + 0x80,puVar9);
  if (0xf < CONCAT44(uStack_5c,uStack_60)) {
    puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
  }
  local_58 = (AstStatFunction *)0x0;
  uStack_50 = 0;
  local_98 = 0;
  uStack_90 = 0;
  pAVar6 = (AstStatFunction *)
           FUN_14078dc30(param_1,param_1 + 0x84,&local_98,&local_58,
                         "Expected \'function\', \'local function\', \'declare function\' or a function type declaration after attribute, but got %s instead"
                         ,puVar9);
  uVar1 = CONCAT44(uStack_5c,uStack_60);
  if (0xf < uVar1) {
    lVar8 = CONCAT44(uStack_74,local_78);
    uVar10 = uVar1 + 1;
    if (0xfff < uVar10) {
      if (0x1f < (ulonglong)((lVar8 + -8) - *(longlong *)(lVar8 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar10 = uVar1 + 0x28;
      lVar8 = *(longlong *)(lVar8 + -8);
    }
    thunk_FUN_140b68ba8(lVar8,uVar10);
  }
  return pAVar6;
}

