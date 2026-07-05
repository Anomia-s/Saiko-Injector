/**
 * Function: SeverityBlockData_Constructor_or_Destructor
 * Address:  1402826d0
 * Signature: void __fastcall SeverityBlockData_Constructor_or_Destructor(QPlainTextEdit * param_1, QSyntaxHighlighter * param_2, undefined4 param_3, QString * param_4)
 * Body size: 502 bytes
 */


void ldv::editor::_anon_C3070FC8::SeverityBlockData::SeverityBlockData_Constructor_or_Destructor
               (QPlainTextEdit *param_1,QSyntaxHighlighter *param_2,undefined4 param_3,
               QString *param_4)

{
  bool bVar1;
  QString *pQVar2;
  QTextDocument *this;
  QTextBlockUserData *pQVar3;
  QString local_f0 [24];
  QString local_d8 [24];
  QString local_c0 [24];
  QSyntaxHighlighter *local_a8;
  int *local_a0;
  undefined4 local_98;
  int *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  int *local_68;
  undefined4 local_60;
  longlong local_58;
  QDateTime local_50 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88 = (int *)0x0;
  local_80 = &DAT_1413a577c;
  local_78 = 2;
  local_a8 = param_2;
  local_6c = param_3;
  QString::QString((QString *)&local_a0,(QArrayDataPointer<char16_t> *)&local_88);
  QDateTime::currentDateTime();
  QString::QString(local_c0,"hh:mm:ss");
  QDateTime::toString(local_50,local_d8);
  pQVar2 = QString::append(local_d8,(QString *)&local_a0);
  QString::QString((QString *)&local_68,pQVar2);
  pQVar2 = QString::append((QString *)&local_68,param_4);
  QString::QString(local_f0,pQVar2);
  QString::~QString((QString *)&local_68);
  QString::~QString(local_d8);
  QString::~QString(local_c0);
  QDateTime::~QDateTime(local_50);
  QString::~QString((QString *)&local_a0);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    UNLOCK();
    if (*local_88 == 0) {
      free(local_88);
    }
  }
  this = QPlainTextEdit::document((QPlainTextEdit *)param_1);
  QTextDocument::lastBlock(this);
  QTextBlock::text((QTextBlock *)&local_a0);
  QString::~QString((QString *)&local_68);
  QPlainTextEdit::appendPlainText((QPlainTextEdit *)param_1,local_f0);
  if (local_58 == 0) {
    local_68 = local_a0;
    local_60 = local_98;
  }
  else {
    QTextBlock::next((QTextBlock *)&local_a0);
  }
  while( true ) {
    bVar1 = QTextBlock::isValid((QTextBlock *)&local_68);
    if (!bVar1) break;
    pQVar3 = (QTextBlockUserData *)FUN_140b65d30(0x10);
    *(SeverityBlockData_vftable **)pQVar3 = &vftable;
    *(undefined4 *)(pQVar3 + 8) = local_6c;
    QTextBlock::setUserData((QTextBlock *)&local_68,pQVar3);
    QSyntaxHighlighter::rehighlightBlock((QSyntaxHighlighter *)local_a8,(QTextBlock *)&local_68);
    QTextBlock::next((QTextBlock *)&local_68);
    local_68 = local_88;
    local_60 = local_80._0_4_;
  }
  QString::~QString(local_f0);
  return;
}

