/**
 * Function: LexerJSON
 * Address:  14096d320
 * Signature: LexerJSON * __thiscall LexerJSON(LexerJSON * this)
 * Body size: 408 bytes
 */


LexerJSON * __thiscall LexerJSON::LexerJSON(LexerJSON *this)

{
  longlong lVar1;
  undefined8 *this_00;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = &vftable;
  (this->LexerJSON_data).offset_0x0 = 0;
  this_00 = &(this->LexerJSON_data).offset_0x8;
  OptionSetJSON::OptionSetJSON((OptionSetJSON *)this_00);
  puVar2 = &(this->LexerJSON_data).field_0x60;
  FUN_14096d8c0();
  puVar3 = &(this->LexerJSON_data).offset_0x88;
  FUN_140a8b860(puVar3,0);
  puVar4 = &(this->LexerJSON_data).offset_0x4a0;
  FUN_140a8b860(puVar4,0);
  (this->LexerJSON_data).offset_0x8b8 = 0x80;
  (this->LexerJSON_data).offset_0x8bc = 0;
  lVar1 = thunk_FUN_140b65d30(0x80);
  (this->LexerJSON_data).offset_0x8c0 = lVar1;
  lVar1 = 0;
  do {
    *(undefined1 *)((this->LexerJSON_data).offset_0x8c0 + lVar1) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 < (this->LexerJSON_data).offset_0x8b8);
  *(undefined1 *)((this->LexerJSON_data).offset_0x8c0 + 0x5b) = 1;
  *(undefined1 *)((this->LexerJSON_data).offset_0x8c0 + 0x7b) = 1;
  *(undefined1 *)((this->LexerJSON_data).offset_0x8c0 + 0x7d) = 1;
  *(undefined1 *)((this->LexerJSON_data).offset_0x8c0 + 0x5d) = 1;
  *(undefined1 *)((this->LexerJSON_data).offset_0x8c0 + 0x3a) = 1;
  *(undefined1 *)((this->LexerJSON_data).offset_0x8c0 + 0x2c) = 1;
  FUN_1408d58e0(&(this->LexerJSON_data).offset_0x8c8,7,"-._~:/?#[]@!$&\'()*+,),=",0x80,0,this_00,
                puVar2,puVar3,puVar4);
  FUN_1408d58e0(&(this->LexerJSON_data).offset_0x8d8,3,&DAT_14136b7ba,0x80,0);
  FUN_1408d58e0(&(this->LexerJSON_data).offset_0x8e8,3,&DAT_14135fdab,0x80,0);
  FUN_14096dae0(&(this->LexerJSON_data).field_0x8f8);
  return this;
}

