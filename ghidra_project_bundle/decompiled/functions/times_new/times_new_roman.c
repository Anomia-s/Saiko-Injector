/**
 * Function: times_new_roman
 * Address:  14083e880
 * Signature: QFont * __thiscall times_new_roman(void * this, QFont * param_1, undefined4 param_2)
 * Body size: 494 bytes
 */


QFont * __thiscall times_new_roman(void *this,QFont *param_1,undefined4 param_2)

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
  case 7:
    QString::QString(local_40,"Times New Roman");
    QFont::QFont(local_50,local_40,0xb,-1,false);
    QFont::swap(local_28,local_50);
    QFont::~QFont(local_50);
    QString::~QString(local_40);
    break;
  default:
    QsciLexer::vfunction33(this,(QFont *)local_40);
    QFont::swap(local_28,(QFont *)local_40);
    QFont::~QFont((QFont *)local_40);
    break;
  case 2:
    QsciLexer::vfunction33(this,(QFont *)local_40);
    pQVar1 = local_28;
    QFont::swap(local_28,(QFont *)local_40);
    QFont::~QFont((QFont *)local_40);
    QFont::setWeight(pQVar1,700);
    break;
  case 6:
    QString::QString(local_40,"Comic Sans MS");
    QFont::QFont(local_50,local_40,9,-1,false);
    pQVar1 = local_28;
    QFont::swap(local_28,local_50);
    QFont::~QFont(local_50);
    QString::~QString(local_40);
    QFont::setWeight(pQVar1,700);
    break;
  case 8:
    QString::QString(local_40,"Times New Roman");
    QFont::QFont(local_50,local_40,0xb,-1,false);
    pQVar1 = local_28;
    QFont::swap(local_28,local_50);
    QFont::~QFont(local_50);
    QString::~QString(local_40);
    QFont::setWeight(pQVar1,700);
    QFont::setStyle(local_28,1);
  }
  return local_28;
}

