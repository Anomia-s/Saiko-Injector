/**
 * Function: vfunction32
 * Address:  140a59d30
 * Signature: undefined8 __thiscall vfunction32(QsciLexerAsm * this, int param_1)
 * Body size: 12 bytes
 */


/* QsciLexerAsm member function inherited by QsciLexerNASM
   QsciLexerAsm member function inherited by QsciLexerMASM */

undefined8 __thiscall QsciLexerAsm::vfunction32(QsciLexerAsm *this,int param_1)

{
  undefined8 in_RAX;
  
  if (param_1 == 0xe) {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  return 0;
}

