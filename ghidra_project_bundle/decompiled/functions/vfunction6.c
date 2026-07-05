/**
 * Function: vfunction6
 * Address:  140a8d1e0
 * Signature: undefined8 __thiscall vfunction6(LexerBase * this, char * param_1, char * param_2)
 * Body size: 107 bytes
 */


/* Scintilla::LexerBase member function inherited by Scintilla::LexerSimple
   Scintilla::LexerBase member function inherited by LexerLaTeX */

undefined8 __thiscall Scintilla::LexerBase::vfunction6(LexerBase *this,char *param_1,char *param_2)

{
  int iVar1;
  char *_Str2;
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &(this->LexerBase_data).field_0x10;
  _Str2 = (char *)FUN_140a4ed00(puVar5);
  iVar1 = strcmp(param_2,_Str2);
  if (iVar1 == 0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    sVar2 = strlen(param_2);
    sVar3 = strlen(param_1);
    FUN_140a4e9d0(puVar5,param_1,param_2,sVar3,sVar2);
    uVar4 = 0;
  }
  return uVar4;
}

