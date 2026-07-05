/**
 * Function: type_function_name
 * Address:  140790970
 * Signature: undefined type_function_name(void)
 * Body size: 543 bytes
 */


AstStatTypeFunction *
type_function_name(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  AstStatTypeFunction *pAVar6;
  AstStatTypeFunction *this;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStackY_e8 [32];
  AstStatTypeFunction *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_e8;
  local_68 = *(undefined4 *)(param_1 + 0x80);
  uStack_64 = *(undefined4 *)(param_1 + 0x84);
  uStack_60 = *(undefined4 *)(param_1 + 0x88);
  uStack_5c = *(undefined4 *)(param_1 + 0x8c);
  local_58 = *(undefined4 *)(param_1 + 0x90);
  uStack_54 = *(undefined4 *)(param_1 + 0x94);
  uStack_50 = *(undefined4 *)(param_1 + 0x98);
  uStack_4c = *(undefined4 *)(param_1 + 0x9c);
  FUN_140787100();
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x80) == 0x119) {
    uVar7 = *(undefined8 *)(param_1 + 0x98);
    local_80 = *(undefined8 *)(param_1 + 0x84);
    uStack_78 = *(undefined8 *)(param_1 + 0x8c);
    FUN_140787100(param_1);
    local_88 = uVar7;
  }
  else {
    expected_identifier_when_parsing_s_got_s(param_1,"type function name");
    local_88 = *(undefined8 *)(param_1 + 0x128);
    local_80 = *(undefined8 *)(param_1 + 0x84);
    uStack_78 = *(undefined8 *)(param_1 + 0x8c);
  }
  local_70 = 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0);
  *piVar1 = *piVar1 + 1;
  uVar7 = *(undefined8 *)(param_1 + 0x160);
  *(longlong *)(param_1 + 0x160) =
       *(longlong *)(param_1 + 0x150) - *(longlong *)(param_1 + 0x148) >> 3;
  expected_a_statement_got_did_you_forget_to_wr(param_1,&local_98,0,&local_68);
  pAVar6 = local_98;
  *(undefined8 *)(param_1 + 0x160) = uVar7;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0x4a0);
  *piVar1 = *piVar1 + -1;
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  local_90 = (local_98->AstNode_data).offset_0xc;
  local_98 = (AstStatTypeFunction *)*param_2;
  this = (AstStatTypeFunction *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x50);
  Luau::AstStatTypeFunction::AstStatTypeFunction
            (this,&local_98,&local_88,&local_80,pAVar6,param_3,
             (ulonglong)(lVar2 - lVar3) < (ulonglong)(lVar4 - lVar5));
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar7 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x14);
    FUN_14079f1e0(uVar7,param_4,CONCAT44(uStack_60,uStack_64));
    local_98 = this;
    puVar8 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_98);
    *puVar8 = uVar7;
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_e8)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_e8);
}

