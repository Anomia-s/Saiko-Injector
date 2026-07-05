/**
 * Function: OptionSetPython
 * Address:  1409d8460
 * Signature: OptionSetPython * __thiscall OptionSetPython(OptionSetPython * this)
 * Body size: 2873 bytes
 */


OptionSetPython * __thiscall _anon_30A31417::OptionSetPython::OptionSetPython(OptionSetPython *this)

{
  OptionSetPython *pOVar1;
  longlong lVar2;
  void *pvVar3;
  char *pcVar4;
  void *_Dst;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong in_stack_fffffffffffffe18;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  char *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  void *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  char *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined1 *local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_50;
  OptionSetPython *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
                    /* inlined constructor: LexerPython::LexerPython */
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,&DAT_14151bd40,0x14);
  this->vftablePtr = (OptionSetPython_vftable *)&LexerPython::vftable;
  local_f8 = &(this->OptionSet<_anon_30A31417::OptionsPython>_data).offset_0x10;
  local_48 = this;
  FUN_140a8b860(local_f8,0);
  local_f0 = &local_48[0xc].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x8;
  FUN_140a8b860(local_f0,0);
  local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0 = 0x101010100000000;
  *(undefined4 *)&local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x8 = 0;
  *(undefined2 *)&local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0xc = 0x100;
                    /* inlined constructor:
                       Scintilla::OptionSet<_anon_30A31417::OptionsPython>::OptionSet<_anon_30A31417::OptionsPython>
                        */
  local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x10 =
       (longlong)&Scintilla::OptionSet<_anon_30A31417::OptionsPython>::vftable;
  *(undefined8 *)&local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x18 = 0;
  local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x20 = 0;
  lVar2 = FUN_140b65d30(0x68);
  local_50 = &local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x10;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *(longlong *)&local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x18 = lVar2;
  local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x28 = 0;
  local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x30 = 0;
  *(undefined8 *)&local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x38 = 0;
  local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x40 = 0xf;
  local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x48 = 0;
  local_48[0x19].vftablePtr = (OptionSetPython_vftable *)0x0;
  local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0 = 0;
  *(undefined8 *)&local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x8 = 0xf;
  local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x10 = (longlong)&vftable;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  pvVar3 = (void *)FUN_140b65d30(0x1a0);
  local_d8 = 0x193;
  uStack_d0 = 0x19f;
  local_e8 = pvVar3;
  memcpy(pvVar3,
         "For Python code, checks whether indenting is consistent. The default, 0 turns off indentation checking, 1 checks whether each line is potentially inconsistent with the previous line, 2 checks whether any space characters occur before a tab character in the indentation, 3 checks whether any spaces are in the indentation, and 4 checks for any tab characters in the indentation. 1 is a good level to use."
         ,0x193);
  *(undefined1 *)((longlong)pvVar3 + 0x193) = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  pcVar4 = (char *)FUN_140b65d30(0x1a0);
  local_68 = 0x193;
  uStack_60 = 0x19f;
  local_78 = pcVar4;
  memcpy(pcVar4,pvVar3,0x194);
  local_c8 = 1;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  _Dst = (void *)FUN_140b65d30(0x1a0);
  uStack_c0 = SUB84(_Dst,0);
  uStack_bc = (undefined4)((ulonglong)_Dst >> 0x20);
  uStack_b0 = 0x193;
  uStack_a8 = 0x19f;
  memcpy(_Dst,pcVar4,0x194);
  thunk_FUN_140b68ba8(pcVar4,0x1a0);
  local_68 = 0;
  uStack_60 = 0xf;
  local_78 = (char *)((ulonglong)local_78 & 0xffffffffffffff00);
  uStack_90 = 0;
  local_98 = (char *)FUN_140b65d30(0x20);
  local_88 = 0x16;
  uStack_80 = 0x1f;
  builtin_strncpy(local_98,"tab.timmy.whinge.level",0x17);
  puVar5 = (undefined8 *)
           FUN_14091ae70(&local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x18,
                         &local_98);
  *puVar5 = CONCAT44(uStack_c4,local_c8);
  uVar7 = puVar5[4];
  if (0xf < uVar7) {
    lVar2 = puVar5[1];
    uVar6 = uVar7 + 1;
    lVar8 = lVar2;
    if (0xfff < uVar6) {
      lVar8 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar8)) goto LAB_1409d8f80;
      uVar6 = uVar7 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar8,uVar6);
  }
  pOVar1 = local_48;
  *(undefined4 *)(puVar5 + 3) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_b0._4_4_;
  *(undefined4 *)(puVar5 + 4) = (undefined4)uStack_a8;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_a8._4_4_;
  *(undefined4 *)(puVar5 + 1) = uStack_c0;
  *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_bc;
  *(undefined4 *)(puVar5 + 2) = uStack_b8;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_b4;
  if (0xf < uStack_80) {
    uVar7 = uStack_80 + 1;
    pcVar4 = local_98;
    if (0xfff < uVar7) {
      pcVar4 = *(char **)(local_98 + -8);
      if ((char *)0x1f < local_98 + (-8 - (longlong)pcVar4)) {
LAB_1409d8f80:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = uStack_80 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar4,uVar7);
  }
  puVar10 = &pOVar1[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x28;
  uVar7 = *(ulonglong *)&pOVar1[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x38;
  if (uVar7 != 0) {
    uVar6 = local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x40;
    if (uVar6 == uVar7) {
      in_stack_fffffffffffffe18 = 0;
      FUN_140006210(puVar10,1,local_48,"\n",1);
    }
    else {
      *(ulonglong *)&local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x38 =
           uVar7 + 1;
      puVar9 = puVar10;
      if (0xf < uVar6) {
        puVar9 = (ulonglong *)
                 local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x28;
      }
      *(undefined2 *)((longlong)puVar9 + uVar7) = 10;
    }
  }
  lVar2 = *(longlong *)&local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x38;
  uVar7 = local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x40;
  if (uVar7 - lVar2 < 0x16) {
    in_stack_fffffffffffffe18 = 0;
    FUN_140006210(puVar10,0x16,local_48,"tab.timmy.whinge.level",0x16);
  }
  else {
    *(longlong *)&local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x38 =
         lVar2 + 0x16;
    if (0xf < uVar7) {
      puVar10 = (ulonglong *)
                local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x28;
    }
    builtin_strncpy((char *)((longlong)puVar10 + lVar2),"tab.timmy.whinge",0x10);
    *(undefined8 *)((longlong)puVar10 + lVar2 + 0xe) = 0x6c6576656c2e6567;
    *(undefined1 *)((longlong)puVar10 + lVar2 + 0x16) = 0;
  }
  thunk_FUN_140b68ba8(pvVar3,0x1a0);
  local_d8 = 0;
  uStack_d0 = 0xf;
  local_e8 = (void *)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  pcVar4 = (char *)FUN_140b65d30(0x50);
  local_c8 = SUB84(pcVar4,0);
  uStack_c4 = (undefined4)((ulonglong)pcVar4 >> 0x20);
  uStack_b8 = 0x4b;
  uStack_b4 = 0;
  uStack_b0 = 0x4f;
  builtin_strncpy(pcVar4,
                  "Set to 0 to not recognise Python 3 binary and octal literals: 0b1011 0o712.",0x4c
                 );
  FUN_14091a380(local_50,"lexer.python.literals.binary",4,&local_c8);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_78 = (char *)FUN_140b65d30(0x50);
  local_68 = 0x4f;
  uStack_60 = 0x4f;
  builtin_strncpy(local_78,
                  "Set to 0 to not recognise Python Unicode literals u\"x\" as used before Python 3."
                  ,0x50);
  FUN_14091a380(local_50,"lexer.python.strings.u",5,&local_78);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_98 = (char *)FUN_140b65d30(0x40);
  local_88 = 0x37;
  uStack_80 = 0x3f;
  builtin_strncpy(local_98,"Set to 0 to not recognise Python 3 bytes literals b\"x\".",0x38);
  FUN_14091a380(local_50,"lexer.python.strings.b",6,&local_98);
  local_188 = 0;
  uStack_180 = 0;
  local_198 = (char *)0x0;
  uStack_190 = 0;
  local_198 = (char *)FUN_140b65d30(0x50);
  local_188 = 0x44;
  uStack_180 = 0x4f;
  builtin_strncpy(local_198,"Set to 0 to not recognise Python 3.6 f-string literals f\"var={var}\"."
                  ,0x45);
  FUN_14091a380(local_50,"lexer.python.strings.f",7,&local_198);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = (char *)0x0;
  uStack_170 = 0;
  local_178 = (char *)FUN_140b65d30(0x40);
  local_168 = 0x35;
  uStack_160 = 0x3f;
  builtin_strncpy(local_178,"Set to 1 to allow strings to span newline characters.",0x36);
  FUN_14091a380(local_50,"lexer.python.strings.over.newline",8,&local_178);
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  pvVar3 = (void *)FUN_140b65d30(0xb0);
  local_148 = 0xa4;
  uStack_140 = 0xaf;
  local_158 = pvVar3;
  memcpy(pvVar3,
         "When enabled, it will not style keywords2 items that are used as a sub-identifier. Example: when set, will not highlight \"foo.open\" when \"open\" is a keywords2 item."
         ,0xa4);
  *(undefined1 *)((longlong)pvVar3 + 0xa4) = 0;
  FUN_14091a380(local_50,"lexer.python.keywords2.no.sub.identifiers",9,&local_158);
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0xf;
  FUN_14091a380(local_50,"fold",10,&local_1d8);
  local_128 = 0;
  uStack_120 = 0;
  local_138 = (char *)0x0;
  uStack_130 = 0;
  local_138 = (char *)FUN_140b65d30(0x60);
  local_128 = 0x52;
  uStack_120 = 0x5f;
  builtin_strncpy(local_138,
                  "This option enables folding multi-line quoted strings when using the Python lexer."
                  ,0x53);
  FUN_14091a380(local_50,"fold.quotes.python",0xb,&local_138);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0xf;
  FUN_14091a380(local_50,"fold.compact",0xc,&local_1b8);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (char *)0x0;
  uStack_110 = 0;
  local_118 = (char *)FUN_140b65d30(0x40);
  local_108 = 0x37;
  uStack_100 = 0x3f;
  builtin_strncpy(local_118,"Set to 0 to not recognise Python 3 unicode identifiers.",0x38);
  FUN_14091a380(local_50,"lexer.python.unicode.identifiers",0xd,&local_118);
  puVar10 = &local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x48;
  uVar7 = local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0;
  if (uVar7 != 0) {
    uVar6 = *(ulonglong *)&local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x8;
    if (uVar6 == uVar7) {
      in_stack_fffffffffffffe18 = 0;
      FUN_140006210(puVar10,1,local_48,"\n",1);
    }
    else {
      local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0 = uVar7 + 1;
      puVar9 = puVar10;
      if (0xf < uVar6) {
        puVar9 = (ulonglong *)
                 local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x48;
      }
      *(undefined2 *)((longlong)puVar9 + uVar7) = 10;
    }
  }
  lVar2 = local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0;
  uVar7 = *(ulonglong *)&local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x8;
  if (uVar7 - lVar2 < 8) {
    in_stack_fffffffffffffe18 = 0;
    FUN_140006210(puVar10,8,local_48,"Keywords",8);
    uVar7 = local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0;
  }
  else {
    local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0 = lVar2 + 8;
    puVar9 = puVar10;
    if (0xf < uVar7) {
      puVar9 = (ulonglong *)local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x48
      ;
    }
    *(undefined8 *)((longlong)puVar9 + lVar2) = 0x7364726f7779654b;
    *(undefined1 *)((longlong)puVar9 + lVar2 + 8) = 0;
    uVar7 = local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0;
  }
  if (uVar7 != 0) {
    uVar6 = *(ulonglong *)&local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x8;
    if (uVar6 == uVar7) {
      in_stack_fffffffffffffe18 = 0;
      FUN_140006210(puVar10,1,local_48,"\n",1);
    }
    else {
      local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0 = uVar7 + 1;
      puVar9 = puVar10;
      if (0xf < uVar6) {
        puVar9 = (ulonglong *)
                 local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x48;
      }
      *(undefined2 *)((longlong)puVar9 + uVar7) = 10;
    }
  }
  lVar2 = local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0;
  uVar7 = *(ulonglong *)&local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.field_0x8;
  if (uVar7 - lVar2 < 0x17) {
    in_stack_fffffffffffffe18 = 0;
    FUN_140006210(puVar10,0x17,local_48,"Highlighted identifiers",0x17);
  }
  else {
    local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x0 = lVar2 + 0x17;
    if (0xf < uVar7) {
      puVar10 = (ulonglong *)
                local_48[0x18].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x48;
    }
    builtin_strncpy((char *)((longlong)puVar10 + lVar2),"Highlighted iden",0x10);
    *(undefined8 *)((longlong)puVar10 + lVar2 + 0xf) = 0x737265696669746e;
    *(undefined1 *)((longlong)puVar10 + lVar2 + 0x17) = 0;
  }
  FUN_1409195c0(&local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x10,
                &DAT_1412a8418,0x80,0x40,in_stack_fffffffffffffe18 & 0xffffffff00000000);
  local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x48 = 0;
  local_48[0x1a].vftablePtr = (OptionSetPython_vftable *)0x0;
  uVar7 = FUN_140b65d30(0x40);
  *(ulonglong *)uVar7 = uVar7;
  *(ulonglong *)(uVar7 + 8) = uVar7;
  *(ulonglong *)(uVar7 + 0x10) = uVar7;
  *(undefined2 *)(uVar7 + 0x18) = 0x101;
  local_48[0x19].OptionSet<_anon_30A31417::OptionsPython>_data.offset_0x48 = uVar7;
  return local_48;
}

