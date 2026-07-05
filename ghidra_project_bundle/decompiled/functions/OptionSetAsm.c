/**
 * Function: OptionSetAsm
 * Address:  1408d0600
 * Signature: OptionSetAsm * __thiscall OptionSetAsm(OptionSetAsm * this)
 * Body size: 1174 bytes
 */


OptionSetAsm * __thiscall OptionSetAsm::OptionSetAsm(OptionSetAsm *this)

{
  longlong lVar1;
  void *_Dst;
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
  void *local_b8;
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
  OptionSetAsm *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor: Scintilla::OptionSet<OptionsAsm>::OptionSet<OptionsAsm>
                        */
  this->vftablePtr = (OptionSetAsm_vftable *)&Scintilla::OptionSet<OptionsAsm>::vftable;
  (this->OptionSet<OptionsAsm>_data).offset_0x0 = 0;
  (this->OptionSet<OptionsAsm>_data).offset_0x8 = 0;
  lVar1 = FUN_140b65d30(0x68);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  (this->OptionSet<OptionsAsm>_data).offset_0x0 = lVar1;
  (this->OptionSet<OptionsAsm>_data).offset_0x10 = 0;
  (this->OptionSet<OptionsAsm>_data).offset_0x18 = 0;
  (this->OptionSet<OptionsAsm>_data).offset_0x20 = 0;
  (this->OptionSet<OptionsAsm>_data).offset_0x28 = 0xf;
  (this->OptionSet<OptionsAsm>_data).offset_0x30 = 0;
  (this->OptionSet<OptionsAsm>_data).offset_0x38 = 0;
  (this->OptionSet<OptionsAsm>_data).offset_0x40 = 0;
  (this->OptionSet<OptionsAsm>_data).offset_0x48 = 0xf;
  this->vftablePtr = &vftable;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (char *)0x0;
  uStack_110 = 0;
  local_38 = this;
  local_118 = (char *)FUN_140b65d30(0x50);
  local_108 = 0x4d;
  uStack_100 = 0x4f;
  builtin_strncpy(local_118,
                  "Character used for COMMENT directive\'s delimiter, replacing the standard \"~\"."
                  ,0x4e);
  FUN_1408d0d20(local_38,"lexer.asm.comment.delimiter",0,&local_118);
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0xf;
  FUN_1408d11c0(local_38,"fold",0x20,&local_158);
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (char *)0x0;
  uStack_f0 = 0;
  local_f8 = (char *)FUN_140b65d30(0x40);
  local_e8 = 0x37;
  uStack_e0 = 0x3f;
  builtin_strncpy(local_f8,"Set this property to 0 to disable syntax based folding.",0x38);
  FUN_1408d11c0(local_38,"fold.asm.syntax.based",0x21,&local_f8);
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_d8 = (char *)FUN_140b65d30(0x40);
  local_c8 = 0x3d;
  uStack_c0 = 0x3f;
  builtin_strncpy(local_d8,"Set this property to 1 to enable folding multi-line comments.",0x3e);
  FUN_1408d11c0(local_38,"fold.asm.comment.multiline",0x22,&local_d8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  _Dst = (void *)FUN_140b65d30(0xe0);
  local_a8 = 0xd3;
  uStack_a0 = 0xdf;
  local_b8 = _Dst;
  memcpy(_Dst,
         "This option enables folding explicit fold points when using the Asm lexer. Explicit fold points allows adding extra folding by placing a ;{ comment at the start and a ;} at the end of a section that should fold."
         ,0xd3);
  *(undefined1 *)((longlong)_Dst + 0xd3) = 0;
  FUN_1408d11c0(local_38,"fold.asm.comment.explicit",0x23,&local_b8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_98 = (char *)FUN_140b65d30(0x50);
  local_88 = 0x4c;
  uStack_80 = 0x4f;
  builtin_strncpy(local_98,
                  "The string to use for explicit fold start points, replacing the standard ;{.",
                  0x4d);
  FUN_1408d0d20(local_38,"fold.asm.explicit.start",0x28,&local_98);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_78 = (char *)FUN_140b65d30(0x50);
  local_68 = 0x4a;
  uStack_60 = 0x4f;
  builtin_strncpy(local_78,
                  "The string to use for explicit fold end points, replacing the standard ;}.",0x4b)
  ;
  FUN_1408d0d20(local_38,"fold.asm.explicit.end",0x48,&local_78);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_140b65d30(0x60);
  local_48 = 0x5a;
  uStack_40 = 0x5f;
  builtin_strncpy(local_58,
                  "Set this property to 1 to enable explicit fold points anywhere, not just in line comments."
                  ,0x5b);
  FUN_1408d11c0(local_38,"fold.asm.explicit.anywhere",0x68,&local_58);
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0xf;
  FUN_1408d11c0(local_38,"fold.compact",0x69,&local_138);
  FUN_1408d1660(local_38,&PTR_s_CPU_instructions_14129e7e0);
  return local_38;
}

