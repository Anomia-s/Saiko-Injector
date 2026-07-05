/**
 * Function: incomplete_statement_expected_assignment_or_a
 * Address:  140787b00
 * Signature: undefined incomplete_statement_expected_assignment_or_a(void)
 * Body size: 1807 bytes
 */


AstStatFunction * incomplete_statement_expected_assignment_or_a(char *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  AstStatFunction *pAVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  AstStatExpr *this;
  AstStatFunction *pAVar8;
  undefined4 uVar9;
  char *pcVar11;
  char *_Str1;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 local_d0;
  char **local_c8;
  longlong *local_b8;
  ulonglong *local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  AstStatFunction *local_90;
  undefined8 local_88;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_50 [5];
  char **ppcVar10;
  
  local_50[0] = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  piVar1 = (int *)(param_1 + 0x80);
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0x11c:
  case 0x11d:
    if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
      pAVar8 = (AstStatFunction *)expected_function_local_function_declare_func();
      return pAVar8;
    }
    break;
  default:
    uVar5 = *(undefined8 *)(param_1 + 0x84);
    uVar2 = *(undefined8 *)(param_1 + 0x8c);
    lVar7 = exceeded_allowed_recursion_depth_simplify_you(param_1,1);
    if (*(int *)(lVar7 + 8) != DAT_1416f23e4) {
      iVar4 = *piVar1;
      switch(iVar4) {
      case 0x10e:
        uVar5 = 0;
        break;
      case 0x10f:
        uVar5 = 1;
        break;
      case 0x110:
        uVar5 = 2;
        break;
      case 0x111:
        uVar5 = 3;
        break;
      case 0x112:
        uVar5 = 4;
        break;
      case 0x113:
        uVar5 = 5;
        break;
      case 0x114:
        uVar5 = 6;
        break;
      case 0x115:
        uVar5 = 7;
        break;
      default:
        if ((iVar4 == 0x3d) || (iVar4 == 0x2c)) {
          if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
            pAVar8 = (AstStatFunction *)assigned_expression_must_be_a_variable_or_a_f(param_1,lVar7)
            ;
            return pAVar8;
          }
          goto LAB_1407881ff;
        }
        ppcVar10 = &local_a8;
        FUN_1406c46c0(ppcVar10,lVar7);
        _Str1 = local_a8;
        uVar9 = SUB84(ppcVar10,0);
        if (local_a8 == (char *)0x0) goto LAB_140788055;
        iVar4 = strcmp(local_a8,"type");
        if (iVar4 == 0) {
          this = (AstStatExpr *)FUN_14078c120(param_1,lVar7 + 0xc,0,*(undefined8 *)(lVar7 + 0xc));
        }
        else {
          iVar4 = strcmp(_Str1,"export");
          if ((((iVar4 == 0) && (*piVar1 == 0x119)) && (*(char **)(param_1 + 0x98) != (char *)0x0))
             && (iVar4 = strcmp(*(char **)(param_1 + 0x98),"type"), iVar4 == 0)) {
            uVar5 = *(undefined8 *)(param_1 + 0x84);
            FUN_140787100(param_1);
            this = (AstStatExpr *)FUN_14078c120(param_1,lVar7 + 0xc,1,uVar5);
          }
          else {
            pcVar11 = _Str1;
            iVar4 = strcmp(_Str1,"continue");
            uVar9 = SUB84(pcVar11,0);
            if (iVar4 == 0) {
              this = (AstStatExpr *)continue_statement_must_be_inside_a_loop(param_1,lVar7 + 0xc);
            }
            else {
              if (*param_1 == '\x01') {
                iVar4 = strcmp(_Str1,"declare");
                uVar9 = SUB84(_Str1,0);
                if (iVar4 == 0) {
                  local_78 = 0;
                  uStack_74 = 0;
                  uStack_70 = 0;
                  uStack_6c = 0;
                  this = (AstStatExpr *)property_type_annotation(param_1,lVar7 + 0xc,&local_78);
                  goto LAB_140787ef4;
                }
              }
LAB_140788055:
              iVar4 = -(uint)((int)uVar5 == (int)*(undefined8 *)(param_1 + 0x84));
              iVar14 = -(uint)((int)((ulonglong)uVar5 >> 0x20) ==
                              (int)((ulonglong)*(undefined8 *)(param_1 + 0x84) >> 0x20));
              auVar12._4_4_ = iVar4;
              auVar12._0_4_ = iVar4;
              auVar12._8_4_ = iVar14;
              auVar12._12_4_ = iVar14;
              iVar4 = movmskpd(uVar9,auVar12);
              if ((iVar4 == 3) &&
                 (iVar4 = -(uint)((int)uVar2 == (int)*(undefined8 *)(param_1 + 0x8c)),
                 iVar14 = -(uint)((int)((ulonglong)uVar2 >> 0x20) ==
                                 (int)((ulonglong)*(undefined8 *)(param_1 + 0x8c) >> 0x20)),
                 auVar13._4_4_ = iVar4, auVar13._0_4_ = iVar4, auVar13._8_4_ = iVar14,
                 auVar13._12_4_ = iVar14, iVar4 = movmskpd(3,auVar13), iVar4 == 3)) {
                FUN_140787100(param_1);
              }
              local_78 = 0;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_6c = 0;
              local_b8 = &local_58;
              local_b0 = local_50;
              local_58 = lVar7;
              FUN_14078dcf0(param_1,&local_90,&local_b8);
              local_d8 = (longlong *)0x141343592;
              this = (AstStatExpr *)FUN_14078dc30(param_1,lVar7 + 0xc,&local_90,&local_78);
            }
          }
        }
        goto LAB_140787ef4;
      }
      if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
        pAVar8 = (AstStatFunction *)
                 assigned_expression_must_be_a_variable_or_a_f(param_1,lVar7,uVar5);
        return pAVar8;
      }
      break;
    }
    this = (AstStatExpr *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x30);
    Luau::AstStatExpr::AstStatExpr(this,(undefined8 *)(lVar7 + 0xc),lVar7);
    goto LAB_140787ef4;
  case 0x124:
    if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
      pAVar8 = (AstStatFunction *)break_statement_must_be_inside_a_loop();
      return pAVar8;
    }
    break;
  case 0x125:
    if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
      pAVar8 = (AstStatFunction *)FUN_140788590();
      return pAVar8;
    }
    break;
  case 0x12a:
    if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
      pAVar8 = (AstStatFunction *)FUN_140788720();
      return pAVar8;
    }
    break;
  case 299:
    local_a8 = (char *)0x0;
    uStack_a0 = 0;
    pAVar8 = *(AstStatFunction **)(param_1 + 0x84);
    local_68 = *(undefined4 *)(param_1 + 0x90);
    uStack_64 = *(undefined4 *)(param_1 + 0x94);
    uStack_60 = *(undefined4 *)(param_1 + 0x98);
    uStack_5c = *(undefined4 *)(param_1 + 0x9c);
    local_78 = (undefined4)*(undefined8 *)piVar1;
    uStack_74 = (undefined4)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
    uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x88);
    uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
    FUN_140787100();
    local_79 = 0;
    local_58 = 0;
    uVar5 = exceeded_allowed_recursion_depth_simplify_you(param_1,&local_79,&local_58);
    *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0) =
         *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0) + 1;
    local_c8 = &local_a8;
    local_d0 = 0;
    local_d8 = &local_58;
    expected_a_statement_got_did_you_forget_to_wr(param_1,&local_90,local_79,&local_78);
    pAVar3 = local_90;
    *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0) =
         *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0) + -1;
    local_88 = (local_90->AstNode_data).offset_0xc;
    local_90 = pAVar8;
    this = (AstStatExpr *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
    Luau::AstStatFunction::AstStatFunction((AstStatFunction *)this,&local_90,uVar5,pAVar3);
    if (param_1[0x58] == '\x01') {
      uVar5 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0xc);
      FUN_14079f140(uVar5,CONCAT44(uStack_70,uStack_74));
      local_90 = (AstStatFunction *)this;
      puVar6 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_90);
      *puVar6 = uVar5;
    }
    goto LAB_140787ef4;
  case 300:
    if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
      pAVar8 = (AstStatFunction *)exceeded_allowed_recursion_depth_simplify_you();
      return pAVar8;
    }
    break;
  case 0x12e:
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    this = (AstStatExpr *)expected_function_after_local_declaration_wit(0,&local_78);
LAB_140787ef4:
    if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
      return (AstStatFunction *)this;
    }
    break;
  case 0x132:
    if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
      pAVar8 = (AstStatFunction *)FUN_140789970();
      return pAVar8;
    }
    break;
  case 0x133:
    if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
      pAVar8 = (AstStatFunction *)FUN_14078a9b0();
      return pAVar8;
    }
    break;
  case 0x137:
    if (DAT_1414ef3c0 == (local_50[0] ^ (ulonglong)auStack_f8)) {
      pAVar8 = (AstStatFunction *)FUN_140788450();
      return pAVar8;
    }
  }
LAB_1407881ff:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50[0] ^ (ulonglong)auStack_f8);
}

