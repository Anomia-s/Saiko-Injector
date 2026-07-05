/**
 * Function: OptionSetBasic
 * Address:  1408f6c00
 * Signature: OptionSetBasic * __thiscall OptionSetBasic(OptionSetBasic * this, undefined8 param_1)
 * Body size: 915 bytes
 */


OptionSetBasic * __thiscall OptionSetBasic::OptionSetBasic(OptionSetBasic *this,undefined8 param_1)

{
  longlong lVar1;
  void *_Dst;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
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
  OptionSetBasic *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor:
                       Scintilla::OptionSet<OptionsBasic>::OptionSet<OptionsBasic> */
  this->vftablePtr = (OptionSetBasic_vftable *)&Scintilla::OptionSet<OptionsBasic>::vftable;
  (this->OptionSet<OptionsBasic>_data).offset_0x0 = 0;
  (this->OptionSet<OptionsBasic>_data).offset_0x8 = 0;
  lVar1 = FUN_140b65d30(0x68);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  (this->OptionSet<OptionsBasic>_data).offset_0x0 = lVar1;
  (this->OptionSet<OptionsBasic>_data).offset_0x10 = 0;
  (this->OptionSet<OptionsBasic>_data).offset_0x18 = 0;
  (this->OptionSet<OptionsBasic>_data).offset_0x20 = 0;
  (this->OptionSet<OptionsBasic>_data).offset_0x28 = 0xf;
  (this->OptionSet<OptionsBasic>_data).offset_0x30 = 0;
  (this->OptionSet<OptionsBasic>_data).offset_0x38 = 0;
  (this->OptionSet<OptionsBasic>_data).offset_0x40 = 0;
  (this->OptionSet<OptionsBasic>_data).offset_0x48 = 0xf;
  this->vftablePtr = &vftable;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0xf;
  local_38 = this;
  FUN_1408d11c0(this,"fold",0,&local_118);
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (char *)0x0;
  uStack_d0 = 0;
  local_d8 = (char *)FUN_140b65d30(0x40);
  local_c8 = 0x37;
  uStack_c0 = 0x3f;
  builtin_strncpy(local_d8,"Set this property to 0 to disable syntax based folding.",0x38);
  FUN_1408d11c0(local_38,"fold.basic.syntax.based",1,&local_d8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  _Dst = (void *)FUN_140b65d30(0x110);
  local_a8 = 0x100;
  uStack_a0 = 0x10f;
  local_b8 = _Dst;
  memcpy(_Dst,
         "This option enables folding explicit fold points when using the Basic lexer. Explicit fold points allows adding extra folding by placing a ;{ (BB/PB) or \'{ (FB) comment at the start and a ;} (BB/PB) or \'} (FB) at the end of a section that should be folded."
         ,0x100);
  *(undefined1 *)((longlong)_Dst + 0x100) = 0;
  FUN_1408d11c0(local_38,"fold.basic.comment.explicit",2,&local_b8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_98 = (char *)FUN_140b65d30(0x60);
  local_88 = 0x5f;
  uStack_80 = 0x5f;
  builtin_strncpy(local_98,
                  "The string to use for explicit fold start points, replacing the standard ;{ (BB/PB) or \'{ (FB)."
                  ,0x60);
  FUN_1408d0d20(local_38,"fold.basic.explicit.start",8,&local_98);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_78 = (char *)FUN_140b65d30(0x60);
  local_68 = 0x5d;
  uStack_60 = 0x5f;
  builtin_strncpy(local_78,
                  "The string to use for explicit fold end points, replacing the standard ;} (BB/PB) or \'} (FB)."
                  ,0x5e);
  FUN_1408d0d20(local_38,"fold.basic.explicit.end",0x28,&local_78);
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
  FUN_1408d11c0(local_38,"fold.basic.explicit.anywhere",0x48,&local_58);
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0xf;
  FUN_1408d11c0(local_38,"fold.compact",0x49,&local_f8);
  FUN_1408d1660(local_38,param_1);
  return local_38;
}

