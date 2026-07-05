/**
 * Function: OptionSetRust
 * Address:  1409ee600
 * Signature: OptionSetRust * __thiscall OptionSetRust(OptionSetRust * this)
 * Body size: 1358 bytes
 */


OptionSetRust * __thiscall OptionSetRust::OptionSetRust(OptionSetRust *this)

{
  longlong lVar1;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
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
  char *local_f8;
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
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  OptionSetRust *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor:
                       Scintilla::OptionSet<OptionsRust>::OptionSet<OptionsRust> */
  this->vftablePtr = (OptionSetRust_vftable *)&Scintilla::OptionSet<OptionsRust>::vftable;
  (this->OptionSet<OptionsRust>_data).offset_0x0 = 0;
  (this->OptionSet<OptionsRust>_data).offset_0x8 = 0;
  lVar1 = FUN_140b65d30(0x68);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  (this->OptionSet<OptionsRust>_data).offset_0x0 = lVar1;
  (this->OptionSet<OptionsRust>_data).offset_0x10 = 0;
  (this->OptionSet<OptionsRust>_data).offset_0x18 = 0;
  (this->OptionSet<OptionsRust>_data).offset_0x20 = 0;
  (this->OptionSet<OptionsRust>_data).offset_0x28 = 0xf;
  (this->OptionSet<OptionsRust>_data).offset_0x30 = 0;
  (this->OptionSet<OptionsRust>_data).offset_0x38 = 0;
  (this->OptionSet<OptionsRust>_data).offset_0x40 = 0;
  (this->OptionSet<OptionsRust>_data).offset_0x48 = 0xf;
  this->vftablePtr = &vftable;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_180 = 0xf;
  local_38 = this;
  FUN_1408d11c0(this,"fold",0,&local_198);
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0xf;
  FUN_1408d11c0(local_38,"fold.comment",2,&local_178);
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0xf;
  FUN_1408d11c0(local_38,"fold.compact",0x49,&local_158);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0xf;
  FUN_1408d11c0(local_38,"fold.at.else",0x50,&local_138);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (char *)0x0;
  uStack_110 = 0;
  local_118 = (char *)FUN_140b65d30(0x40);
  local_108 = 0x37;
  uStack_100 = 0x3f;
  builtin_strncpy(local_118,"Set this property to 0 to disable syntax based folding.",0x38);
  FUN_1408d11c0(local_38,"fold.rust.syntax.based",1,&local_118);
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (char *)0x0;
  uStack_f0 = 0;
  local_f8 = (char *)FUN_140b65d30(0x60);
  local_e8 = 0x52;
  uStack_e0 = 0x5f;
  builtin_strncpy(local_f8,
                  "Set this property to 0 to disable folding multi-line comments when fold.comment=1."
                  ,0x53);
  FUN_1408d11c0(local_38,"fold.rust.comment.multiline",3,&local_f8);
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_d8 = (char *)FUN_140b65d30(0x60);
  local_c8 = 0x53;
  uStack_c0 = 0x5f;
  builtin_strncpy(local_d8,
                  "Set this property to 0 to disable folding explicit fold points when fold.comment=1."
                  ,0x54);
  FUN_1408d11c0(local_38,"fold.rust.comment.explicit",4,&local_d8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_b8 = (char *)FUN_140b65d30(0x50);
  local_a8 = 0x4d;
  uStack_a0 = 0x4f;
  builtin_strncpy(local_b8,
                  "The string to use for explicit fold start points, replacing the standard //{.",
                  0x4e);
  FUN_1408d0d20(local_38,"fold.rust.explicit.start",8,&local_b8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_98 = (char *)FUN_140b65d30(0x50);
  local_88 = 0x4b;
  uStack_80 = 0x4f;
  builtin_strncpy(local_98,
                  "The string to use for explicit fold end points, replacing the standard //}.",0x4c
                 );
  FUN_1408d0d20(local_38,"fold.rust.explicit.end",0x28,&local_98);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_78 = (char *)FUN_140b65d30(0x60);
  local_68 = 0x5a;
  uStack_60 = 0x5f;
  builtin_strncpy(local_78,
                  "Set this property to 1 to enable explicit fold points anywhere, not just in line comments."
                  ,0x5b);
  FUN_1408d11c0(local_38,"fold.rust.explicit.anywhere",0x48,&local_78);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_140b65d30(0x50);
  local_48 = 0x49;
  uStack_40 = 0x4f;
  builtin_strncpy(local_58,
                  "This option enables Rust folding on a \"} else {\" line of an if statement.",0x4a
                 );
  FUN_140928080(local_38,"lexer.rust.fold.at.else",0x4c,&local_58);
  FUN_1408d1660(local_38,&PTR_s_Primary_keywords_and_identifiers_1412a9160);
  return local_38;
}

