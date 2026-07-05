/**
 * Function: vfunction33
 * Address:  140a598e0
 * Signature: QFont * __thiscall vfunction33(QsciLexerHex * this, QFont * param_1, undefined4 param_2)
 * Body size: 98 bytes
 */


/* QsciLexerHex member function inherited by QsciLexerSRec
   QsciLexerHex member function inherited by QsciLexerTekHex
   QsciLexerHex member function inherited by QsciLexerIntelHex */

QFont * __thiscall QsciLexerHex::vfunction33(QsciLexerHex *this,QFont *param_1,undefined4 param_2)

{
  QsciLexer::vfunction33((QsciLexer *)this,param_1);
  switch(param_2) {
  case 3:
  case 0xe:
  case 0x12:
    QFont::setStyle(param_1,1);
    break;
  case 0xc:
    QFont::setWeight(param_1,700);
  }
  return param_1;
}

