/**
 * Function: vfunction42
 * Address:  1407e9fd0
 * Signature: undefined8 * __thiscall vfunction42(void)
 * Body size: 69 bytes
 */


/* Scintilla::Editor member function inherited by Scintilla::ScintillaBase
   Scintilla::Editor member function inherited by QsciScintillaQt */

undefined8 * __thiscall Scintilla::Editor::vfunction42(void)

{
  CaseFolderTable *this;
  
  this = (CaseFolderTable *)FUN_140b65d30(0x108);
  CaseFolderTable::CaseFolderTable(this);
  this->vftablePtr = (CaseFolderTable_vftable *)&CaseFolderASCII::vftable;
  FUN_140a446d0();
  return &this->vftablePtr;
}

