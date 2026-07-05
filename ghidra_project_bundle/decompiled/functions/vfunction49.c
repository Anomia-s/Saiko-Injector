/**
 * Function: vfunction49
 * Address:  140a5ae90
 * Signature: void __thiscall vfunction49(QsciLexerAsm * this, char param_1)
 * Body size: 35 bytes
 */


/* QsciLexerAsm member function inherited by QsciLexerNASM
   QsciLexerAsm member function inherited by QsciLexerMASM */

void __thiscall QsciLexerAsm::vfunction49(QsciLexerAsm *this,char param_1)

{
  char *pcVar1;
  
  (this->QsciLexerAsm_data).offset_0x3c = param_1;
  pcVar1 = "0";
  if (param_1 != '\0') {
    pcVar1 = "1";
  }
  FUN_14074eef0(this,"fold.asm.syntax.based",pcVar1);
  return;
}

