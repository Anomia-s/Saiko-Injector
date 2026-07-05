/**
 * Function: vfunction45
 * Address:  140a5a960
 * Signature: undefined8 __thiscall vfunction45(QsciLexerAsm * this, QSettings * param_1, QString * param_2)
 * Body size: 553 bytes
 */


/* QsciLexerAsm member function inherited by QsciLexerNASM
   QsciLexerAsm member function inherited by QsciLexerMASM */

undefined8 __thiscall
QsciLexerAsm::vfunction45(QsciLexerAsm *this,QSettings *param_1,QString *param_2)

{
  undefined8 extraout_RAX;
  QChar *local_c0;
  ulonglong local_b8;
  QChar *local_b0;
  ulonglong local_a8;
  QChar *local_a0;
  ulonglong local_98;
  QChar *local_90;
  ulonglong local_88;
  QVariant local_80 [32];
  char *local_60;
  undefined8 local_58;
  QString local_50 [16];
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  ::QVariant::QVariant(local_80,*(bool *)&(this->QsciLexerAsm_data).offset_0x38);
  QString::QString(local_50,param_2);
  local_60 = "foldcomments";
  local_58 = 0xc;
  QString::operator+=(local_50,&local_60);
  local_c0 = QString::begin(local_50);
  local_b8 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_c0,local_80);
  QString::~QString(local_50);
  ::QVariant::~QVariant(local_80);
  ::QVariant::QVariant(local_80,*(bool *)((longlong)&(this->QsciLexerAsm_data).offset_0x38 + 1));
  QString::QString(local_50,param_2);
  local_60 = "foldcompact";
  local_58 = 0xb;
  QString::operator+=(local_50,&local_60);
  local_b0 = QString::begin(local_50);
  local_a8 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_b0,local_80);
  QString::~QString(local_50);
  ::QVariant::~QVariant(local_80);
  ::QVariant::QVariant
            (local_80,*(undefined2 *)((longlong)&(this->QsciLexerAsm_data).offset_0x38 + 2));
  QString::QString(local_50,param_2);
  local_60 = "commentdelimiter";
  local_58 = 0x10;
  QString::operator+=(local_50,&local_60);
  local_a0 = QString::begin(local_50);
  local_98 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_a0,local_80);
  QString::~QString(local_50);
  ::QVariant::~QVariant(local_80);
  ::QVariant::QVariant(local_80,(bool)(this->QsciLexerAsm_data).offset_0x3c);
  QString::QString(local_50,param_2);
  local_60 = "foldsyntaxbased";
  local_58 = 0xf;
  QString::operator+=(local_50,&local_60);
  local_90 = QString::begin(local_50);
  local_88 = local_40 | 0x8000000000000000;
  QSettings::setValue(param_1,&local_90,local_80);
  QString::~QString(local_50);
  ::QVariant::~QVariant(local_80);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}

