/**
 * Function: lucida_sans_unicode
 * Address:  1408294a0
 * Signature: QFont * __thiscall lucida_sans_unicode(void * this, QFont * param_1, undefined4 param_2)
 * Body size: 858 bytes
 */


QFont * __thiscall lucida_sans_unicode(void *this,QFont *param_1,undefined4 param_2)

{
  QFont *pQVar1;
  QFont local_50 [16];
  QString local_40 [24];
  QFont *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1;
  QFont::QFont(param_1);
  switch(param_2) {
  case 0:
  case 10:
    QString::QString(local_40,"Times New Roman");
    QFont::QFont(local_50,local_40,0xb,-1,false);
    goto LAB_14082979f;
  default:
    QsciLexer::vfunction33(this,(QFont *)local_40);
    QFont::swap(local_28,(QFont *)local_40);
    QFont::~QFont((QFont *)local_40);
    break;
  case 9:
    QString::QString(local_40,"Verdana");
    QFont::QFont(local_50,local_40,9,-1,false);
    goto LAB_14082979f;
  case 0x16:
  case 0x60:
  case 99:
  case 100:
  case 0x65:
  case 0x6f:
  case 0x72:
  case 0x73:
  case 0x74:
    QsciLexer::vfunction33(this,(QFont *)local_40);
    pQVar1 = local_28;
    QFont::swap(local_28,(QFont *)local_40);
    QFont::~QFont((QFont *)local_40);
    QFont::setWeight(pQVar1,700);
    break;
  case 0x29:
  case 0x2c:
  case 0x2f:
  case 0x32:
  case 0x38:
  case 0x3b:
  case 0x3e:
  case 0x41:
    QString::QString(local_40,"Comic Sans MS");
    QFont::QFont(local_50,local_40,9,-1,false);
    pQVar1 = local_28;
    QFont::swap(local_28,local_50);
    QFont::~QFont(local_50);
    QString::~QString(local_40);
    QFont::setWeight(pQVar1,700);
    break;
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x39:
  case 0x3a:
  case 0x3c:
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x48:
  case 0x52:
  case 0x5c:
  case 0x6b:
  case 0x7c:
    QString::QString(local_40,"Comic Sans MS");
    QFont::QFont(local_50,local_40,9,-1,false);
    goto LAB_14082979f;
  case 0x47:
  case 0x49:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x51:
  case 0x53:
  case 0x55:
  case 0x56:
  case 0x57:
    QString::QString(local_40,"Lucida Sans Unicode");
    QFont::QFont(local_50,local_40,9,-1,false);
    goto LAB_14082979f;
  case 0x4a:
  case 0x54:
    QString::QString(local_40,"Lucida Sans Unicode");
    QFont::QFont(local_50,local_40,9,-1,false);
    pQVar1 = local_28;
    QFont::swap(local_28,local_50);
    QFont::~QFont(local_50);
    QString::~QString(local_40);
    QFont::setWeight(pQVar1,700);
    break;
  case 0x5e:
  case 0x5f:
  case 0x6d:
  case 0x6e:
    QString::QString(local_40,"Courier New");
    QFont::QFont(local_50,local_40,10,-1,false);
LAB_14082979f:
    QFont::swap(local_28,local_50);
    QFont::~QFont(local_50);
    QString::~QString(local_40);
    break;
  case 0x79:
  case 0x7b:
  case 0x7e:
    QsciLexer::vfunction33(this,(QFont *)local_40);
    pQVar1 = local_28;
    QFont::swap(local_28,(QFont *)local_40);
    QFont::~QFont((QFont *)local_40);
    QFont::setStyle(pQVar1,1);
    break;
  case 0x7d:
    QString::QString(local_40,"Comic Sans MS");
    QFont::QFont(local_50,local_40,9,-1,false);
    pQVar1 = local_28;
    QFont::swap(local_28,local_50);
    QFont::~QFont(local_50);
    QString::~QString(local_40);
    QFont::setStyle(pQVar1,1);
  }
  return local_28;
}

