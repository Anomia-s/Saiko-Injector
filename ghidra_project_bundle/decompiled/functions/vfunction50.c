/**
 * Function: vfunction50
 * Address:  14083df00
 * Signature: void __thiscall vfunction50(QsciLexerVHDL * this, char param_1)
 * Body size: 35 bytes
 */


void __thiscall QsciLexerVHDL::vfunction50(QsciLexerVHDL *this,char param_1)

{
  char *pcVar1;
  
  (this->QsciLexerVHDL_data).offset_0x3c = param_1;
  pcVar1 = "0";
  if (param_1 != '\0') {
    pcVar1 = "1";
  }
  FUN_14074eef0(this,"fold.at.Parenthese",pcVar1);
  return;
}

