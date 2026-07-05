/**
 * Function: vfunction58
 * Address:  1407ef010
 * Signature: bool __thiscall vfunction58(Editor * this, float * param_1)
 * Body size: 96 bytes
 */


/* Scintilla::Editor member function inherited by Scintilla::ScintillaBase
   Scintilla::Editor member function inherited by QsciScintillaQt */

bool __thiscall Scintilla::Editor::vfunction58(Editor *this,float *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (0.0 < param_1[3] - param_1[1]) {
    if (0.0 < param_1[2] - *param_1) {
      bVar1 = false;
      if (((*(float *)&(this->Editor_data).field_0x474 <= *param_1) &&
          (bVar1 = false, param_1[2] <= *(float *)&(this->Editor_data).field_0x47c)) &&
         (*(float *)&(this->Editor_data).field_0x478 <= param_1[1])) {
        bVar1 = param_1[3] <= *(float *)&(this->Editor_data).field_0x480;
      }
    }
  }
  return bVar1;
}

