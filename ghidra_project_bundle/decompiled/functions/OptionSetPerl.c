/**
 * Function: OptionSetPerl
 * Address:  1409becb0
 * Signature: OptionSetPerl * __thiscall OptionSetPerl(OptionSetPerl * this)
 * Body size: 795 bytes
 */


OptionSetPerl * __thiscall OptionSetPerl::OptionSetPerl(OptionSetPerl *this)

{
  longlong lVar1;
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
  OptionSetPerl *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor:
                       Scintilla::OptionSet<OptionsPerl>::OptionSet<OptionsPerl> */
  this->vftablePtr = (OptionSetPerl_vftable *)&Scintilla::OptionSet<OptionsPerl>::vftable;
  (this->OptionSet<OptionsPerl>_data).offset_0x0 = 0;
  (this->OptionSet<OptionsPerl>_data).offset_0x8 = 0;
  lVar1 = FUN_140b65d30(0x68);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  (this->OptionSet<OptionsPerl>_data).offset_0x0 = lVar1;
  (this->OptionSet<OptionsPerl>_data).offset_0x10 = 0;
  (this->OptionSet<OptionsPerl>_data).offset_0x18 = 0;
  (this->OptionSet<OptionsPerl>_data).offset_0x20 = 0;
  (this->OptionSet<OptionsPerl>_data).offset_0x28 = 0xf;
  (this->OptionSet<OptionsPerl>_data).offset_0x30 = 0;
  (this->OptionSet<OptionsPerl>_data).offset_0x38 = 0;
  (this->OptionSet<OptionsPerl>_data).offset_0x40 = 0;
  (this->OptionSet<OptionsPerl>_data).offset_0x48 = 0xf;
  this->vftablePtr = &vftable;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0xf;
  local_38 = this;
  FUN_1408d11c0(this,"fold",0,&local_118);
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0xf;
  FUN_1408d11c0(local_38,"fold.comment",1,&local_f8);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xf;
  FUN_1408d11c0(local_38,"fold.compact",2,&local_d8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_b8 = (char *)FUN_140b65d30(0x50);
  local_a8 = 0x41;
  uStack_a0 = 0x4f;
  builtin_strncpy(local_b8,"Set to 0 to disable folding Pod blocks when using the Perl lexer.",0x42)
  ;
  FUN_1408d11c0(local_38,"fold.perl.pod",3,&local_b8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_98 = (char *)FUN_140b65d30(0x40);
  local_88 = 0x3f;
  uStack_80 = 0x3f;
  builtin_strncpy(local_98,"Set to 0 to disable folding packages when using the Perl lexer.",0x40);
  FUN_1408d11c0(local_38,"fold.perl.package",4,&local_98);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_78 = (char *)FUN_140b65d30(0x30);
  local_68 = 0x25;
  uStack_60 = 0x2f;
  builtin_strncpy(local_78,"Set to 0 to disable explicit folding.",0x26);
  FUN_1408d11c0(local_38,"fold.perl.comment.explicit",5,&local_78);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_140b65d30(0x50);
  local_48 = 0x49;
  uStack_40 = 0x4f;
  builtin_strncpy(local_58,
                  "This option enables Perl folding on a \"} else {\" line of an if statement.",0x4a
                 );
  FUN_1408d11c0(local_38,"fold.perl.at.else",6,&local_58);
  FUN_1408d1660(local_38,&PTR_s_Keywords_141337bef_6_1412a73d0);
  return local_38;
}

