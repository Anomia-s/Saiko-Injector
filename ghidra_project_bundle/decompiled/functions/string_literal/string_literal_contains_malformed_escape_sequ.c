/**
 * Function: string_literal_contains_malformed_escape_sequ
 * Address:  14079b430
 * Signature: undefined string_literal_contains_malformed_escape_sequ(void)
 * Body size: 345 bytes
 */


AstExprConstantString * string_literal_contains_malformed_escape_sequ(longlong param_1)

{
  int iVar1;
  int iVar2;
  AstExprConstantString *this;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint unaff_EBP;
  undefined4 unaff_EDI;
  AstExprConstantString **ppAVar5;
  AstExprConstantString *local_88;
  undefined8 uStack_80;
  AstExprConstantString *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50 [2];
  char local_40;
  
  local_68._0_4_ = *(undefined4 *)(param_1 + 0x84);
  local_68._4_4_ = *(undefined4 *)(param_1 + 0x88);
  uStack_60 = *(undefined4 *)(param_1 + 0x8c);
  uStack_5c = *(undefined4 *)(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (iVar1 == 0x116) {
      unaff_EDI = FUN_1407a0bb0(param_1 + 0x80);
      unaff_EBP = 2;
    }
    else {
      unaff_EBP = 3;
      unaff_EDI = 0;
      if (iVar1 == 0x117) {
        iVar2 = FUN_1407a0bd0();
        unaff_EBP = (uint)(iVar2 == 1);
      }
    }
  }
  local_78 = (AstExprConstantString *)0x0;
  uStack_70 = 0;
  ppAVar5 = &local_78;
  if (*(char *)(param_1 + 0x58) == '\0') {
    ppAVar5 = (AstExprConstantString **)0x0;
  }
  FUN_1407922e0(param_1,local_50,ppAVar5);
  if (local_40 == '\x01') {
    this = (AstExprConstantString *)FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x38);
    Luau::AstExprConstantString::AstExprConstantString
              (this,&local_68,local_50,(uint)(iVar1 == 0x116) * 2);
    if (*(char *)(param_1 + 0x58) == '\x01') {
      uVar3 = FUN_1407b5010(*(undefined8 *)(param_1 + 0xd8),0x20);
      local_88 = local_78;
      uStack_80 = uStack_70;
      FUN_14079eec0(uVar3,&local_88,unaff_EBP,unaff_EDI);
      local_88 = this;
      puVar4 = (undefined8 *)FUN_14078e300(param_1 + 0x420,&local_88);
      *puVar4 = uVar3;
    }
  }
  else {
    local_88 = (AstExprConstantString *)0x0;
    uStack_80 = 0;
    this = (AstExprConstantString *)
           FUN_140792890(param_1,&local_68,&local_88,
                         "String literal contains malformed escape sequence");
  }
  return this;
}

