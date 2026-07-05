/**
 * Function: vfunction44
 * Address:  140a5a260
 * Signature: undefined8 __thiscall vfunction44(QsciLexerAsm * this, QSettings * param_1, QString * param_2)
 * Body size: 635 bytes
 */


/* QsciLexerAsm member function inherited by QsciLexerNASM
   QsciLexerAsm member function inherited by QsciLexerMASM */

undefined8 __thiscall
QsciLexerAsm::vfunction44(QsciLexerAsm *this,QSettings *param_1,QString *param_2)

{
  bool bVar1;
  undefined8 extraout_RAX;
  QChar *local_e8;
  ulonglong local_e0;
  QChar *local_d8;
  ulonglong local_d0;
  QChar *local_c8;
  ulonglong local_c0;
  QChar *local_b8;
  ulonglong local_b0;
  QVariant local_a8 [32];
  QVariant local_88 [32];
  char *local_68;
  undefined8 local_60;
  QString local_58 [16];
  ulonglong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  ::QVariant::QVariant(local_88,true);
  QString::QString(local_58,param_2);
  local_68 = "foldcomments";
  local_60 = 0xc;
  QString::operator+=(local_58,&local_68);
  local_e8 = QString::begin(local_58);
  local_e0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_a8,&local_e8,local_88);
  bVar1 = ::QVariant::toBool(local_a8);
  *(bool *)&(this->QsciLexerAsm_data).offset_0x38 = bVar1;
  ::QVariant::~QVariant(local_a8);
  QString::~QString(local_58);
  ::QVariant::~QVariant(local_88);
  ::QVariant::QVariant(local_88,true);
  QString::QString(local_58,param_2);
  local_68 = "foldcompact";
  local_60 = 0xb;
  QString::operator+=(local_58,&local_68);
  local_d8 = QString::begin(local_58);
  local_d0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_a8,&local_d8,local_88);
  bVar1 = ::QVariant::toBool(local_a8);
  *(bool *)((longlong)&(this->QsciLexerAsm_data).offset_0x38 + 1) = bVar1;
  ::QVariant::~QVariant(local_a8);
  QString::~QString(local_58);
  ::QVariant::~QVariant(local_88);
  ::QVariant::QVariant(local_88,0x7e);
  QString::QString(local_58,param_2);
  local_68 = "commentdelimiter";
  local_60 = 0x10;
  QString::operator+=(local_58,&local_68);
  local_c8 = QString::begin(local_58);
  local_c0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_a8,&local_c8,local_88);
  ::QVariant::toChar(local_a8);
  *(undefined2 *)((longlong)&(this->QsciLexerAsm_data).offset_0x38 + 2) = local_68._0_2_;
  ::QVariant::~QVariant(local_a8);
  QString::~QString(local_58);
  ::QVariant::~QVariant(local_88);
  ::QVariant::QVariant(local_88,true);
  QString::QString(local_58,param_2);
  local_68 = "foldsyntaxbased";
  local_60 = 0xf;
  QString::operator+=(local_58,&local_68);
  local_b8 = QString::begin(local_58);
  local_b0 = local_48 | 0x8000000000000000;
  QSettings::value(param_1,local_a8,&local_b8,local_88);
  bVar1 = ::QVariant::toBool(local_a8);
  (this->QsciLexerAsm_data).offset_0x3c = bVar1;
  ::QVariant::~QVariant(local_a8);
  QString::~QString(local_58);
  ::QVariant::~QVariant(local_88);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}

