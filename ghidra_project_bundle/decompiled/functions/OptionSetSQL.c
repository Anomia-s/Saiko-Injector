/**
 * Function: OptionSetSQL
 * Address:  1409fe9a0
 * Signature: OptionSetSQL * __thiscall OptionSetSQL(OptionSetSQL * this)
 * Body size: 982 bytes
 */


OptionSetSQL * __thiscall OptionSetSQL::OptionSetSQL(OptionSetSQL *this)

{
  longlong lVar1;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
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
  OptionSetSQL *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor: Scintilla::OptionSet<OptionsSQL>::OptionSet<OptionsSQL>
                        */
  this->vftablePtr = (OptionSetSQL_vftable *)&Scintilla::OptionSet<OptionsSQL>::vftable;
  (this->OptionSet<OptionsSQL>_data).offset_0x0 = 0;
  (this->OptionSet<OptionsSQL>_data).offset_0x8 = 0;
  lVar1 = FUN_140b65d30(0x68);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  (this->OptionSet<OptionsSQL>_data).offset_0x0 = lVar1;
  (this->OptionSet<OptionsSQL>_data).offset_0x10 = 0;
  (this->OptionSet<OptionsSQL>_data).offset_0x18 = 0;
  (this->OptionSet<OptionsSQL>_data).offset_0x20 = 0;
  (this->OptionSet<OptionsSQL>_data).offset_0x28 = 0xf;
  (this->OptionSet<OptionsSQL>_data).offset_0x30 = 0;
  (this->OptionSet<OptionsSQL>_data).offset_0x38 = 0;
  (this->OptionSet<OptionsSQL>_data).offset_0x40 = 0;
  (this->OptionSet<OptionsSQL>_data).offset_0x48 = 0xf;
  this->vftablePtr = &vftable;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0xf;
  local_38 = this;
  FUN_1408d11c0(this,"fold",0,&local_158);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_b8 = (char *)FUN_140b65d30(0x60);
  local_a8 = 0x50;
  uStack_a0 = 0x5f;
  builtin_strncpy(local_b8,
                  "This option enables SQL folding on a \"ELSE\" and \"ELSIF\" line of an IF statement."
                  ,0x51);
  FUN_1408d11c0(local_38,"fold.sql.at.else",1,&local_b8);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0xf;
  FUN_1408d11c0(local_38,"fold.comment",2,&local_138);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0xf;
  FUN_1408d11c0(local_38,"fold.compact",3,&local_118);
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0xf;
  FUN_1408d11c0(local_38,"fold.sql.only.begin",4,&local_f8);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xf;
  FUN_1408d11c0(local_38,"lexer.sql.backticks.identifier",5,&local_d8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_98 = (char *)FUN_140b65d30(0x70);
  local_88 = 0x67;
  uStack_80 = 0x6f;
  builtin_strncpy(local_98,
                  "If \"lexer.sql.numbersign.comment\" property is set to 0 a line beginning with \'#\' will not be a comment."
                  ,0x68);
  FUN_1408d11c0(local_38,"lexer.sql.numbersign.comment",6,&local_98);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_78 = (char *)FUN_140b65d30(0x40);
  local_68 = 0x30;
  uStack_60 = 0x3f;
  builtin_strncpy(local_78,"Enables backslash as an escape character in SQL.",0x31);
  FUN_1408d11c0(local_38,"sql.backslash.escapes",7,&local_78);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_140b65d30(0x60);
  local_48 = 0x59;
  uStack_40 = 0x5f;
  builtin_strncpy(local_58,
                  "Set to 1 to colourise recognized words with dots (recommended for Oracle PL/SQL objects)."
                  ,0x5a);
  FUN_1408d11c0(local_38,"lexer.sql.allow.dotted.word",8,&local_58);
  FUN_1408d1660(local_38,&PTR_s_Keywords_141337bef_6_1412a9c30);
  return local_38;
}

