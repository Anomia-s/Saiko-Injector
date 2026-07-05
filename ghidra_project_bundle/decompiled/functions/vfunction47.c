/**
 * Function: vfunction47
 * Address:  140836380
 * Signature: void __thiscall vfunction47(QsciLexerPython * this, char param_1)
 * Body size: 35 bytes
 */


void __thiscall QsciLexerPython::vfunction47(QsciLexerPython *this,char param_1)

{
  char *pcVar1;
  
  (this->QsciLexerPython_data).offset_0x3a = param_1;
  pcVar1 = "0";
  if (param_1 != '\0') {
    pcVar1 = "1";
  }
  FUN_14074eef0(this,"fold.quotes.python",pcVar1);
  return;
}

