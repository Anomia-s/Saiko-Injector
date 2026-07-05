/**
 * Function: vfunction31
 * Address:  140a59c10
 * Signature: QColor * __thiscall vfunction31(QsciLexerAsm * this, QColor * param_1, undefined4 param_2)
 * Body size: 283 bytes
 */


/* QsciLexerAsm member function inherited by QsciLexerNASM
   QsciLexerAsm member function inherited by QsciLexerMASM */

QColor * __thiscall QsciLexerAsm::vfunction31(QsciLexerAsm *this,QColor *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  switch(param_2) {
  case 1:
  case 0xc:
    iVar1 = 0;
    iVar2 = 0x7f;
    goto LAB_140a59cb4;
  case 2:
    iVar1 = 0;
    iVar2 = 0x7f;
    iVar3 = 0x7f;
    break;
  case 3:
  case 0xd:
    iVar1 = 0x7f;
    goto LAB_140a59c93;
  case 4:
  case 0xe:
    iVar1 = 0;
    iVar2 = 0;
    goto LAB_140a59cb4;
  default:
    QsciLexer::vfunction31((QsciLexer *)this,(undefined8 *)param_1);
    return param_1;
  case 6:
    iVar1 = 0;
LAB_140a59c93:
    iVar2 = 0;
    iVar3 = 0x7f;
    break;
  case 7:
  case 9:
  case 0xb:
    iVar1 = 0;
    iVar2 = 0;
    iVar3 = 0xff;
    break;
  case 8:
    iVar1 = 0x46;
    iVar2 = 0xaa;
    iVar3 = 3;
    break;
  case 0x10:
    iVar1 = 0xb0;
    iVar2 = 0;
    iVar3 = 0x40;
    break;
  case 0x11:
    iVar1 = 0x66;
    iVar2 = 0xaa;
LAB_140a59cb4:
    iVar3 = 0;
  }
  QColor::QColor(param_1,iVar1,iVar2,iVar3,0xff);
  return param_1;
}

