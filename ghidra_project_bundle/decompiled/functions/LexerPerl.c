/**
 * Function: LexerPerl
 * Address:  1409be8f0
 * Signature: LexerPerl * __thiscall LexerPerl(LexerPerl * this)
 * Body size: 632 bytes
 */


LexerPerl * __thiscall LexerPerl::LexerPerl(LexerPerl *this)

{
  longlong lVar1;
  
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = &vftable;
  FUN_1408d58e0(&this->LexerPerl_data,3,&DAT_14135fdac,0x80,1);
  FUN_1408d58e0(&(this->LexerPerl_data).offset_0x10,7,&DAT_14135fdac,0x80,1);
  (this->LexerPerl_data).offset_0x20 = 0x80;
  (this->LexerPerl_data).offset_0x24 = 0;
  lVar1 = thunk_FUN_140b65d30(0x80);
  (this->LexerPerl_data).offset_0x28 = lVar1;
  lVar1 = 0;
  do {
    *(undefined1 *)((this->LexerPerl_data).offset_0x28 + lVar1) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 < (this->LexerPerl_data).offset_0x20);
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x22) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x24) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x3b) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x3c) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x3e) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x26) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x60) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x27) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x2b) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x2c) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x2e) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x2f) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x5c) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x25) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x3a) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x3d) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x7e) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x21) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x3f) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x40) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x5b) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x28 + 0x5d) = 1;
  (this->LexerPerl_data).offset_0x30 = 0x80;
  (this->LexerPerl_data).offset_0x34 = 0;
  lVar1 = thunk_FUN_140b65d30(0x80);
  (this->LexerPerl_data).offset_0x38 = lVar1;
  lVar1 = 0;
  do {
    *(undefined1 *)((this->LexerPerl_data).offset_0x38 + lVar1) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 < (this->LexerPerl_data).offset_0x30);
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x41) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x43) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x44) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x45) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x46) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x48) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x49) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x4c) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x4d) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x4e) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x4f) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x50) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x52) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x53) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x54) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x56) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x57) = 1;
  *(undefined1 *)((this->LexerPerl_data).offset_0x38 + 0x58) = 1;
  FUN_140a8b860(&(this->LexerPerl_data).offset_0x40,0);
  (this->LexerPerl_data).offset_0x458 = 0;
  (this->LexerPerl_data).offset_0x45a = 0x1010101;
  (this->LexerPerl_data).offset_0x45e = 0;
  OptionSetPerl::OptionSetPerl((OptionSetPerl *)&(this->LexerPerl_data).offset_0x460);
  return this;
}

