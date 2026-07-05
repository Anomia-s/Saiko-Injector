/**
 * Function: vfunction46
 * Address:  140a5ae50
 * Signature: void __thiscall vfunction46(QsciLexerAsm * this, char param_1)
 * Body size: 35 bytes
 */


/* QsciLexerAsm member function inherited by QsciLexerNASM
   QsciLexerAsm member function inherited by QsciLexerMASM */

void __thiscall QsciLexerAsm::vfunction46(QsciLexerAsm *this,char param_1)

{
  char *pcVar1;
  
  *(char *)&(this->QsciLexerAsm_data).offset_0x38 = param_1;
  pcVar1 = "0";
  if (param_1 != '\0') {
    pcVar1 = "1";
  }
  FUN_14074eef0(this,"fold.asm.comment.multiline",pcVar1);
  return;
}

