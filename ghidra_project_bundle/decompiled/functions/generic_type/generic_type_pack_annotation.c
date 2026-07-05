/**
 * Function: generic_type_pack_annotation
 * Address:  1407933a0
 * Signature: undefined generic_type_pack_annotation(void)
 * Body size: 549 bytes
 */


AstTypePackVariadic * generic_type_pack_annotation(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  AstTypePackVariadic *this;
  undefined8 uVar3;
  undefined8 *puVar4;
  AstTypePackGeneric *pAVar5;
  AstTypePackGeneric *pAVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  AstTypePackGeneric *local_68;
  undefined8 uStack_60;
  undefined8 local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x80) == 0x106) {
    pAVar6 = *(AstTypePackGeneric **)(param_1 + 0x84);
    FUN_140787100(param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x114);
    local_68 = *(AstTypePackGeneric **)(param_1 + 0x84);
    uStack_60 = *(undefined8 *)(param_1 + 0x8c);
    uVar3 = 0;
    if ((*(int *)(param_1 + 0x80) != 0x26) && (*(int *)(param_1 + 0x80) != 0x7c)) {
      expected_type_got_s(param_1,local_48,0,0);
      *(undefined4 *)(param_1 + 0x114) = uVar1;
      uVar3 = local_48[0];
    }
    lVar2 = unexpected_after_type_annotation(param_1,uVar3,&local_68);
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    uStack_60 = *(undefined8 *)(lVar2 + 0x14);
    local_68 = pAVar6;
    this = (AstTypePackVariadic *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
    Luau::AstTypePackVariadic::AstTypePackVariadic(this,&local_68,lVar2);
    goto LAB_1407934dd;
  }
  if (*(int *)(param_1 + 0x80) == 0x119) {
    FUN_1407a1770(param_1 + 0x60,&local_68);
    if ((int)local_68 == 0x106) {
      if (*(int *)(param_1 + 0x80) == 0x119) {
        pAVar6 = *(AstTypePackGeneric **)(param_1 + 0x84);
        uVar3 = *(undefined8 *)(param_1 + 0x98);
        FUN_140787100(param_1);
        pAVar5 = *(AstTypePackGeneric **)(param_1 + 0x84);
        uVar7 = *(undefined8 *)(param_1 + 0x8c);
        if (*(int *)(param_1 + 0x80) != 0x106) goto LAB_1407934c5;
LAB_140793538:
        FUN_140787100(param_1);
      }
      else {
        expected_identifier_when_parsing_s_got_s(param_1,"generic name");
        pAVar5 = *(AstTypePackGeneric **)(param_1 + 0x84);
        uVar3 = *(undefined8 *)(param_1 + 0x128);
        uVar7 = *(undefined8 *)(param_1 + 0x8c);
        pAVar6 = pAVar5;
        if (*(int *)(param_1 + 0x80) == 0x106) goto LAB_140793538;
LAB_1407934c5:
        FUN_14079c360(param_1,0x106,"generic type pack annotation");
      }
      local_68 = pAVar6;
      uStack_60 = uVar7;
      this = (AstTypePackVariadic *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x28);
      Luau::AstTypePackGeneric::AstTypePackGeneric((AstTypePackGeneric *)this,&local_68,uVar3);
      if (*(char *)(param_1 + 0x58) == '\x01') {
        uVar3 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0xc);
        FUN_14079f380(uVar3,pAVar5);
        local_68 = (AstTypePackGeneric *)this;
        puVar4 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_68);
        *puVar4 = uVar3;
      }
      goto LAB_1407934dd;
    }
  }
  this = (AstTypePackVariadic *)0x0;
LAB_1407934dd:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_88)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_88);
}

