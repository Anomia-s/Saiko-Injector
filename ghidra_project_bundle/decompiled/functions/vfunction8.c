/**
 * Function: vfunction8
 * Address:  140a8d250
 * Signature: undefined8 __thiscall vfunction8(LexerBase * this, int param_1, undefined8 param_2)
 * Body size: 147 bytes
 */


/* Scintilla::LexerBase member function inherited by Scintilla::LexerSimple
   Scintilla::LexerBase member function inherited by LexerLaTeX */

undefined8 __thiscall
Scintilla::LexerBase::vfunction8(LexerBase *this,int param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_448 [1048];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = 0xffffffffffffffff;
  if (param_1 < 9) {
    FUN_140a8b860(local_448,0);
    FUN_140a8b940(local_448,param_2);
    cVar1 = FUN_140a8b8e0((&(this->LexerBase_data).offset_0x20)[param_1],local_448);
    uVar2 = 0xffffffffffffffff;
    if (cVar1 != '\0') {
      FUN_140a8b940((&(this->LexerBase_data).offset_0x20)[param_1],param_2);
      uVar2 = 0;
    }
    FUN_140a8b880(local_448);
  }
  return uVar2;
}

