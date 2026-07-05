/**
 * Function: type_function_cannot_reference_outer_local_s
 * Address:  14078ef10
 * Signature: undefined type_function_cannot_reference_outer_local_s(void)
 * Body size: 512 bytes
 */


AstExprError * type_function_cannot_reference_outer_local_s(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  AstExprGlobal *this;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x80) == 0x119) {
    uVar1 = *(ulonglong *)(param_1 + 0x98);
    uStack_40 = *(undefined8 *)(param_1 + 0x84);
    uStack_38 = *(undefined4 *)(param_1 + 0x8c);
    uStack_34 = *(undefined4 *)(param_1 + 0x90);
    FUN_140787100(param_1);
    local_30 = 1;
    local_48 = uVar1;
    if ((*(longlong *)(param_1 + 0x178) != 0) && (uVar1 != *(ulonglong *)(param_1 + 0x180))) {
      uVar5 = *(longlong *)(param_1 + 0x170) - 1;
      uVar6 = uVar1 >> 9 ^ uVar1 >> 4;
      uVar7 = 0;
      do {
        uVar6 = uVar6 & uVar5;
        lVar8 = uVar6 * 0x10;
        uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x168) + lVar8);
        if (uVar2 == uVar1) {
          puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x168) + lVar8 + 8);
          if (puVar3 != (undefined8 *)0x0) {
            uVar1 = puVar3[4];
            if (uVar1 < *(ulonglong *)(param_1 + 0x160)) {
              local_68 = *puVar3;
              local_58 = 0;
              uStack_50 = 0;
              this = (AstExprGlobal *)
                     FUN_140792890(param_1,param_1 + 0x84,&local_58,
                                   "Type function cannot reference outer local \'%s\'");
            }
            else {
              lVar8 = *(longlong *)(param_1 + 0x150);
              lVar4 = *(longlong *)(param_1 + 0x148);
              this = (AstExprGlobal *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x30);
              Luau::AstExprLocal::AstExprLocal
                        ((AstExprLocal *)this,&uStack_40,puVar3,uVar1 != (lVar8 - lVar4 >> 3) - 1U);
            }
            goto LAB_14078f09f;
          }
          break;
        }
        if (uVar2 == *(ulonglong *)(param_1 + 0x180)) break;
        uVar6 = uVar6 + uVar7 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 <= uVar5);
    }
    this = (AstExprGlobal *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstExprGlobal::AstExprGlobal(this,&uStack_40,&local_48);
  }
  else {
    expected_identifier_when_parsing_s_got_s(param_1);
    lVar8 = *(longlong *)(param_1 + 0x1b0);
    lVar4 = *(longlong *)(param_1 + 0x1a8);
    local_48 = 0;
    uStack_40 = 0;
    this = (AstExprGlobal *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
    Luau::AstExprError::AstExprError
              ((AstExprError *)this,(undefined8 *)(param_1 + 0x84),&local_48,
               (int)((ulonglong)(lVar8 - lVar4) >> 3) * 0x38e38e39 + -1);
  }
LAB_14078f09f:
  if (DAT_1414ef3c0 != (local_28 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_28 ^ (ulonglong)auStack_88);
  }
  return (AstExprError *)this;
}

