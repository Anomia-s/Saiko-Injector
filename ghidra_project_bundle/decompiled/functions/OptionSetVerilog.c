/**
 * Function: OptionSetVerilog
 * Address:  140a24220
 * Signature: OptionSetVerilog * __thiscall OptionSetVerilog(OptionSetVerilog * this)
 * Body size: 1921 bytes
 */


OptionSetVerilog * __thiscall
_anon_61FF082A::OptionSetVerilog::OptionSetVerilog(OptionSetVerilog *this)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Dst;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  char *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  void *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  char *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  char *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  char *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined1 *local_70;
  OptionSet<_anon_61FF082A::OptionsVerilog>_data *local_68;
  OptionSetVerilog *local_60;
  ulonglong *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  OptionSetVerilog *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor: LexerVerilog::LexerVerilog */
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = (OptionSetVerilog_vftable *)&LexerVerilog::vftable;
  local_38 = this;
  FUN_1408d58e0(&(this->OptionSet<_anon_61FF082A::OptionsVerilog>_data).offset_0x10,7,&DAT_14135fda8
                ,0x80,1);
  local_88 = &(local_38->OptionSet<_anon_61FF082A::OptionsVerilog>_data).offset_0x20;
  FUN_140a8b860(local_88,0);
  local_80 = &local_38[0xc].OptionSet<_anon_61FF082A::OptionsVerilog>_data.field_0x18;
  FUN_140a8b860(local_80,0);
  local_78 = &local_38[0x18].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x10;
  FUN_140a8b860(local_78,0);
  local_70 = &local_38[0x24].OptionSet<_anon_61FF082A::OptionsVerilog>_data.field_0x8;
  FUN_140a8b860(local_70,0);
  local_68 = &local_38[0x30].OptionSet<_anon_61FF082A::OptionsVerilog>_data;
  FUN_140a8b860(local_68,0);
  local_60 = local_38 + 0x3c;
  FUN_140a8b860(local_60,0);
  local_58 = &local_38[0x47].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x48;
  local_50 = &local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.field_0x8;
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x20 = 0;
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x28 = 0;
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x10 = 0;
  *(undefined8 *)&local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.field_0x18 = 0;
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x0 = 0;
  *(undefined8 *)&local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.field_0x8 = 0;
  local_38[0x47].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x48 = 0;
  local_38[0x48].vftablePtr = (OptionSetVerilog_vftable *)0x0;
  lVar1 = FUN_140b65d30(0x80);
  local_48 = &local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x20;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x20 = lVar1;
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x30 = 0;
  *(undefined2 *)&local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.field_0x38 = 0;
                    /* inlined constructor:
                       Scintilla::OptionSet<_anon_61FF082A::OptionsVerilog>::OptionSet<_anon_61FF082A::OptionsVerilog>
                        */
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x40 =
       &Scintilla::OptionSet<_anon_61FF082A::OptionsVerilog>::vftable;
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x48 = 0;
  local_38[0x49].vftablePtr = (OptionSetVerilog_vftable *)0x0;
  uVar2 = FUN_140b65d30(0x68);
  local_40 = &local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x40;
  *(ulonglong *)uVar2 = uVar2;
  *(ulonglong *)(uVar2 + 8) = uVar2;
  *(ulonglong *)(uVar2 + 0x10) = uVar2;
  *(undefined2 *)(uVar2 + 0x18) = 0x101;
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x48 = uVar2;
  local_38[0x49].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x0 = 0;
  *(undefined8 *)&local_38[0x49].OptionSet<_anon_61FF082A::OptionsVerilog>_data.field_0x8 = 0;
  local_38[0x49].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x10 = 0;
  *(undefined8 *)&local_38[0x49].OptionSet<_anon_61FF082A::OptionsVerilog>_data.field_0x18 = 0xf;
  local_38[0x49].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x20 = 0;
  local_38[0x49].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x28 = 0;
  local_38[0x49].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x30 = 0;
  *(undefined8 *)&local_38[0x49].OptionSet<_anon_61FF082A::OptionsVerilog>_data.field_0x38 = 0xf;
  local_38[0x48].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x40 = &vftable;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = (char *)0x0;
  uStack_1a0 = 0;
  local_1a8 = (char *)FUN_140b65d30(0x50);
  local_198 = 0x4d;
  uStack_190 = 0x4f;
  builtin_strncpy(local_1a8,
                  "This option enables folding multi-line comments when using the Verilog lexer.",
                  0x4e);
  FUN_1408e8d40(local_40,"fold.comment",0,&local_1a8);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = (char *)0x0;
  uStack_180 = 0;
  local_188 = (char *)FUN_140b65d30(0x60);
  local_178 = 0x51;
  uStack_170 = 0x5f;
  builtin_strncpy(local_188,
                  "This option enables folding preprocessor directives when using the Verilog lexer."
                  ,0x52);
  FUN_1408e8d40(local_40,"fold.preprocessor",1,&local_188);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0xf;
  FUN_1408e8d40(local_40,"fold.compact",3,&local_1c8);
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (char *)0x0;
  uStack_160 = 0;
  local_168 = (char *)FUN_140b65d30(0x50);
  local_158 = 0x40;
  uStack_150 = 0x4f;
  builtin_strncpy(local_168,"This option enables folding on the else line of an if statement.",0x41)
  ;
  FUN_1408e8d40(local_40,"fold.at.else",4,&local_168);
  local_138 = 0;
  uStack_130 = 0;
  local_148 = (void *)0x0;
  uStack_140 = 0;
  _Dst = (void *)FUN_140b65d30(0x90);
  local_138 = 0x8d;
  uStack_130 = 0x8f;
  local_148 = _Dst;
  memcpy(_Dst,
         "This option enables folding module definitions. Typically source files contain only one module definition so this option is somewhat useless."
         ,0x8d);
  *(undefined1 *)((longlong)_Dst + 0x8d) = 0;
  FUN_1408e8d40(local_40,"fold.verilog.flags",5,&local_148);
  local_118 = 0;
  uStack_110 = 0;
  local_128 = (char *)0x0;
  uStack_120 = 0;
  local_128 = (char *)FUN_140b65d30(0x50);
  local_118 = 0x4b;
  uStack_110 = 0x4f;
  builtin_strncpy(local_128,
                  "Set to 1 to interpret `if/`else/`endif to grey out code that is not active.",0x4c
                 );
  FUN_1408e8d40(local_40,"lexer.verilog.track.preprocessor",6,&local_128);
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = (char *)0x0;
  uStack_100 = 0;
  local_108 = (char *)FUN_140b65d30(0x60);
  local_f8 = 0x58;
  uStack_f0 = 0x5f;
  builtin_strncpy(local_108,
                  "Set to 1 to update preprocessor definitions when `define, `undef, or `undefineall found."
                  ,0x59);
  FUN_1408e8d40(local_40,"lexer.verilog.update.preprocessor",7,&local_108);
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (char *)0x0;
  uStack_e0 = 0;
  local_e8 = (char *)FUN_140b65d30(0x60);
  local_d8 = 0x53;
  uStack_d0 = 0x5f;
  builtin_strncpy(local_e8,
                  "Set to 1 to style input, output, and inout ports differently from regular keywords."
                  ,0x54);
  FUN_1408e8d40(local_40,"lexer.verilog.portstyling",8,&local_e8);
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (char *)0x0;
  uStack_c0 = 0;
  local_c8 = (char *)FUN_140b65d30(0x50);
  local_b8 = 0x4e;
  uStack_b0 = 0x4f;
  builtin_strncpy(local_c8,
                  "Set to 1 to style identifiers that are all uppercase as documentation keyword.",
                  0x4f);
  FUN_1408e8d40(local_40,"lexer.verilog.allupperkeywords",9,&local_c8);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_140b65d30(0x50);
  local_98 = 0x48;
  uStack_90 = 0x4f;
  builtin_strncpy(local_a8,
                  "This option enables folding on `else and `elsif preprocessor directives.",0x49);
  FUN_1408e8d40(local_40,"lexer.verilog.fold.preprocessor.else",2,&local_a8);
  FUN_1409195c0(&local_38[0x49].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x40,
                &DAT_1412ab058,0x80,0x40,0x40);
  local_38[0x4a].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x20 = 0;
  local_38[0x4a].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x28 = 0;
  lVar1 = FUN_140b65d30(0x30);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  local_38[0x4a].OptionSet<_anon_61FF082A::OptionsVerilog>_data.offset_0x20 = lVar1;
  return local_38;
}

