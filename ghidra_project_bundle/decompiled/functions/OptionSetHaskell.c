/**
 * Function: OptionSetHaskell
 * Address:  140950460
 * Signature: OptionSetHaskell * __thiscall OptionSetHaskell(OptionSetHaskell * this)
 * Body size: 1270 bytes
 */


OptionSetHaskell * __thiscall OptionSetHaskell::OptionSetHaskell(OptionSetHaskell *this)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  OptionSetHaskell *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor:
                       Scintilla::OptionSet<OptionsHaskell>::OptionSet<OptionsHaskell> */
  this->vftablePtr = (OptionSetHaskell_vftable *)&Scintilla::OptionSet<OptionsHaskell>::vftable;
  (this->OptionSet<OptionsHaskell>_data).offset_0x0 = 0;
  (this->OptionSet<OptionsHaskell>_data).offset_0x8 = 0;
  lVar1 = FUN_140b65d30(0x68);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  (this->OptionSet<OptionsHaskell>_data).offset_0x0 = lVar1;
  (this->OptionSet<OptionsHaskell>_data).offset_0x10 = 0;
  (this->OptionSet<OptionsHaskell>_data).offset_0x18 = 0;
  (this->OptionSet<OptionsHaskell>_data).offset_0x20 = 0;
  (this->OptionSet<OptionsHaskell>_data).offset_0x28 = 0xf;
  (this->OptionSet<OptionsHaskell>_data).offset_0x30 = 0;
  (this->OptionSet<OptionsHaskell>_data).offset_0x38 = 0;
  (this->OptionSet<OptionsHaskell>_data).offset_0x40 = 0;
  (this->OptionSet<OptionsHaskell>_data).offset_0x48 = 0xf;
  this->vftablePtr = &vftable;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (char *)0x0;
  uStack_110 = 0;
  local_38 = this;
  local_118 = (char *)FUN_140b65d30(0x90);
  local_108 = 0x80;
  uStack_100 = 0x8f;
  builtin_strncpy(local_118,
                  "Set to 0 to disallow the \'#\' character at the end of identifiers and literals with the haskell lexer (GHC -XMagicHash extension)"
                  ,0x81);
  FUN_1408d11c0(local_38,"lexer.haskell.allow.hash",0,&local_118);
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  pvVar2 = (void *)FUN_140b65d30(0xa0);
  local_e8 = 0x91;
  uStack_e0 = 0x9f;
  local_f8 = pvVar2;
  memcpy(pvVar2,
         "Set to 0 to disable highlighting of Template Haskell name quotations and promoted constructors (GHC -XTemplateHaskell and -XDataKinds extensions)"
         ,0x91);
  *(undefined1 *)((longlong)pvVar2 + 0x91) = 0;
  FUN_1408d11c0(local_38,"lexer.haskell.allow.quotes",1,&local_f8);
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_d8 = (char *)FUN_140b65d30(0x80);
  local_c8 = 0x7e;
  uStack_c0 = 0x7f;
  builtin_strncpy(local_d8,
                  "Set to 1 to allow the \'?\' character at the start of identifiers with the haskell lexer (GHC & Hugs -XImplicitParams extension)"
                  ,0x7f);
  FUN_1408d11c0(local_38,"lexer.haskell.allow.questionmark",2,&local_d8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_b8 = (char *)FUN_140b65d30(0x60);
  local_a8 = 0x5f;
  uStack_a0 = 0x5f;
  builtin_strncpy(local_b8,
                  "Set to 0 to disallow \"safe\" keyword in imports (GHC -XSafe, -XTrustworthy, -XUnsafe extensions)"
                  ,0x60);
  FUN_1408d11c0(local_38,"lexer.haskell.import.safe",3,&local_b8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_98 = (char *)FUN_140b65d30(0x50);
  local_88 = 0x41;
  uStack_80 = 0x4f;
  builtin_strncpy(local_98,"Set to 0 to disable C-preprocessor highlighting (-XCPP extension)",0x42)
  ;
  FUN_1408d11c0(local_38,"lexer.haskell.cpp",4,&local_98);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  pvVar2 = (void *)FUN_140b65d30(0xb0);
  local_68 = 0xad;
  uStack_60 = 0xaf;
  local_78 = pvVar2;
  memcpy(pvVar2,
         "For Haskell code, determines whether all preprocessor code is styled in the preprocessor style (0, the default) or only from the initial # to the end of the command word(1)."
         ,0xad);
  *(undefined1 *)((longlong)pvVar2 + 0xad) = 0;
  FUN_1408d11c0(local_38,"styling.within.preprocessor",5,&local_78);
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0xf;
  FUN_1408d11c0(local_38,"fold",6,&local_178);
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0xf;
  FUN_1408d11c0(local_38,"fold.comment",7,&local_158);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0xf;
  FUN_1408d11c0(local_38,"fold.compact",8,&local_138);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_140b65d30(0x40);
  local_48 = 0x31;
  uStack_40 = 0x3f;
  builtin_strncpy(local_58,"Set to 1 to enable folding of import declarations",0x32);
  FUN_1408d11c0(local_38,"fold.haskell.imports",9,&local_58);
  FUN_1408d1660(local_38,&PTR_s_Keywords_141337bef_6_1412a2e50);
  return local_38;
}

