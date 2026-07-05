/**
 * Function: vfunction34
 * Address:  140a59eb0
 * Signature: QColor * __thiscall vfunction34(QsciLexerAsm * this, QColor * param_1, int param_2)
 * Body size: 74 bytes
 */


/* QsciLexerAsm member function inherited by QsciLexerNASM
   QsciLexerAsm member function inherited by QsciLexerMASM */

QColor * __thiscall QsciLexerAsm::vfunction34(QsciLexerAsm *this,QColor *param_1,int param_2)

{
  if (param_2 == 0xe) {
    QColor::QColor(param_1,0xe0,0xc0,0xe0,0xff);
    return param_1;
  }
  QsciLexer::vfunction34((QsciLexer *)this,(undefined8 *)param_1);
  return param_1;
}

