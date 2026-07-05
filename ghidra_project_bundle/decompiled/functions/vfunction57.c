/**
 * Function: vfunction57
 * Address:  1407eeff0
 * Signature: void __thiscall vfunction57(Editor * this, uint param_1, longlong param_2)
 * Body size: 28 bytes
 */


/* Scintilla::Editor member function inherited by Scintilla::ScintillaBase
   Scintilla::Editor member function inherited by QsciScintillaQt */

void __thiscall Scintilla::Editor::vfunction57(Editor *this,uint param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  if (((param_1 & 1) != 0) && (*(longlong *)&(this->Editor_data).field_0x490 < param_2)) {
    *(longlong *)&(this->Editor_data).field_0x490 = param_2;
  }
  puVar1 = &(this->Editor_data).field_0x488;
  *(uint *)puVar1 = *(uint *)puVar1 | param_1;
  return;
}

