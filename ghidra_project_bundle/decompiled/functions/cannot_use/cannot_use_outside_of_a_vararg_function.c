/**
 * Function: cannot_use_outside_of_a_vararg_function
 * Address:  14079aae0
 * Signature: undefined cannot_use_outside_of_a_vararg_function(void)
 * Body size: 781 bytes
 */


AstExprConstantBool * cannot_use_outside_of_a_vararg_function(longlong param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  AstExprConstantBool *pAVar4;
  AstExprVarargs *pAVar5;
  undefined8 *******pppppppuVar6;
  char *pcVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  AstExprVarargs *local_68;
  undefined8 uStack_60;
  undefined8 ******local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = *(undefined8 *)(param_1 + 0x84);
  uStack_30 = *(undefined8 *)(param_1 + 0x8c);
  local_88 = 0;
  uStack_80 = 0;
  iVar2 = *(int *)(param_1 + 0x80);
  if (0x2f < iVar2 - 0x106U) {
    if (iVar2 == 0x7b) {
      pAVar4 = (AstExprConstantBool *)expected_after_table_constructor_element();
      return pAVar4;
    }
switchD_14079ab37_caseD_107:
    pAVar4 = (AstExprConstantBool *)exceeded_allowed_recursion_depth_simplify_you(0,0);
    return pAVar4;
  }
  switch(iVar2) {
  case 0x106:
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x150) + -8);
    FUN_140787100();
    if (cVar1 == '\x01') {
      pAVar5 = (AstExprVarargs *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x20);
      Luau::AstExprVarargs::AstExprVarargs(pAVar5,&local_38);
      return (AstExprConstantBool *)pAVar5;
    }
    pcVar7 = "Cannot use \'...\' outside of a vararg function";
    goto LAB_14079adad;
  default:
    goto switchD_14079ab37_caseD_107;
  case 0x10a:
    pAVar4 = (AstExprConstantBool *)malformed_interpolated_string_got_s();
    return pAVar4;
  case 0x10d:
  case 0x116:
  case 0x117:
    pAVar4 = (AstExprConstantBool *)string_literal_contains_malformed_escape_sequ();
    return pAVar4;
  case 0x118:
    pAVar4 = (AstExprConstantBool *)FUN_14079ae20();
    return pAVar4;
  case 0x11c:
  case 0x11d:
    FUN_14078fd30(0,&local_88);
    if (*(int *)(param_1 + 0x80) != 299) {
      the_beginning_of_an_interpolated_string((undefined8 *)(param_1 + 0x80),&local_58);
      pppppppuVar6 = &local_58;
      if (0xf < CONCAT44(uStack_3c,uStack_40)) {
        pppppppuVar6 = (undefined8 *******)local_58;
      }
      local_68 = (AstExprVarargs *)0x0;
      uStack_60 = 0;
      pAVar4 = (AstExprConstantBool *)
               FUN_140792890(param_1,&local_38,&local_68,
                             "Expected \'function\' declaration after attribute, but got %s instead"
                             ,pppppppuVar6);
      uVar3 = CONCAT44(uStack_3c,uStack_40);
      if (uVar3 < 0x10) {
        return pAVar4;
      }
      if (uVar3 + 1 < 0x1000) {
        thunk_FUN_140b68ba8();
        return pAVar4;
      }
      if ((ulonglong)((longlong)local_58 + (-8 - (longlong)local_58[-1])) < 0x20) {
        thunk_FUN_140b68ba8(local_58[-1],uVar3 + 0x28);
        return pAVar4;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  case 299:
    local_58 = *(undefined8 *******)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    local_48 = *(undefined4 *)(param_1 + 0x90);
    uStack_44 = *(undefined4 *)(param_1 + 0x94);
    uStack_40 = *(undefined4 *)(param_1 + 0x98);
    uStack_3c = *(undefined4 *)(param_1 + 0x9c);
    FUN_140787100();
    local_70 = 0;
    expected_a_statement_got_did_you_forget_to_wr
              (param_1,&local_68,0,&local_58,&local_70,0,&local_88);
    pAVar5 = local_68;
    break;
  case 0x11e:
    FUN_140787100();
    pcVar7 = "Malformed string; did you forget to finish it?";
    goto LAB_14079adad;
  case 0x121:
    FUN_140787100();
    pcVar7 = "Double braces are not permitted within interpolated strings; did you mean \'\\{\'?";
LAB_14079adad:
    uStack_50 = 0;
    local_58 = (undefined8 ******)0x0;
    pAVar5 = (AstExprVarargs *)FUN_140792890(param_1,&local_38,&local_58,pcVar7);
    break;
  case 0x129:
    FUN_140787100();
    pAVar5 = (AstExprVarargs *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstExprConstantBool::AstExprConstantBool((AstExprConstantBool *)pAVar5,&local_38,0);
    break;
  case 300:
    pAVar4 = (AstExprConstantBool *)if_then_else_expression();
    return pAVar4;
  case 0x12f:
    FUN_140787100();
    pAVar5 = (AstExprVarargs *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x20);
    Luau::AstExprConstantNil::AstExprConstantNil((AstExprConstantNil *)pAVar5,&local_38);
    break;
  case 0x135:
    FUN_140787100();
    pAVar5 = (AstExprVarargs *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstExprConstantBool::AstExprConstantBool((AstExprConstantBool *)pAVar5,&local_38,1);
  }
  return (AstExprConstantBool *)pAVar5;
}

