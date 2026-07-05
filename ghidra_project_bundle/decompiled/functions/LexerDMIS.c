/**
 * Function: LexerDMIS
 * Address:  14092b790
 * Signature: LexerDMIS * __thiscall LexerDMIS(LexerDMIS * this)
 * Body size: 245 bytes
 */


LexerDMIS * __thiscall LexerDMIS::LexerDMIS(LexerDMIS *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = &vftable;
  puVar1 = &(this->LexerDMIS_data).field_0x8;
  FUN_140a8b860(puVar1,0);
  puVar2 = &(this->LexerDMIS_data).field_0x420;
  FUN_140a8b860(puVar2,0);
  puVar3 = &(this->LexerDMIS_data).field_0x838;
  FUN_140a8b860(puVar3,0);
  puVar4 = &(this->LexerDMIS_data).field_0xc50;
  FUN_140a8b860(puVar4,0);
  puVar5 = &this[1].LexerDMIS_data.field_0x3f8;
  FUN_140a8b860(puVar5,0);
  puVar6 = &this[1].LexerDMIS_data.field_0x810;
  FUN_140a8b860(puVar6,0);
  keywords_for_code_folding_start(this);
  FUN_140a8b880(puVar1);
  FUN_140a8b880(puVar2);
  FUN_140a8b880(puVar3);
  FUN_140a8b880(puVar4);
  FUN_140a8b880(puVar5);
  FUN_140a8b880(puVar6);
  return this;
}

