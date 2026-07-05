/**
 * Function: vfunction36
 * Address:  140a5a110
 * Signature: void __thiscall vfunction36(QsciLexerAsm * this)
 * Body size: 114 bytes
 */


/* QsciLexerAsm member function inherited by QsciLexerNASM
   QsciLexerAsm member function inherited by QsciLexerMASM */

void __thiscall QsciLexerAsm::vfunction36(QsciLexerAsm *this)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "0";
  pcVar2 = "0";
  if (*(char *)&(this->QsciLexerAsm_data).offset_0x38 != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"fold.asm.comment.multiline",pcVar2);
  pcVar2 = "0";
  if (*(char *)((longlong)&(this->QsciLexerAsm_data).offset_0x38 + 1) != '\0') {
    pcVar2 = "1";
  }
  FUN_14074eef0(this,"fold.compact",pcVar2);
  FUN_140a5a190(this);
  if ((this->QsciLexerAsm_data).offset_0x3c != '\0') {
    pcVar1 = "1";
  }
  FUN_14074eef0(this,"fold.asm.syntax.based",pcVar1);
  return;
}

