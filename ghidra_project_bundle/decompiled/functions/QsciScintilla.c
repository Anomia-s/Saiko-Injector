/**
 * Function: QsciScintilla
 * Address:  140587cb0
 * Signature: QsciScintilla * __thiscall QsciScintilla(QsciScintilla * this, QWidget * param_1)
 * Body size: 1793 bytes
 */


QsciScintilla * __thiscall QsciScintilla::QsciScintilla(QsciScintilla *this,QWidget *param_1)

{
  QsciScintilla *pQVar1;
  QBrush *pQVar2;
  QColor *pQVar3;
  QColor local_100 [16];
  QObject local_f0 [8];
  QObject local_e8 [8];
  QObject local_e0 [8];
  QObject local_d8 [8];
  QObject local_d0 [8];
  QObject local_c8 [8];
  QObject local_c0 [8];
  QObject local_b8 [8];
  QObject local_b0 [8];
  QObject local_a8 [8];
  QObject local_a0 [8];
  QObject local_98 [8];
  QObject local_90 [8];
  QObject local_88 [8];
  undefined1 *local_80;
  void **local_78;
  void **local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  int **local_58;
  undefined1 *local_50;
  longlong local_48;
  void **local_40;
  QFont local_38 [16];
  QsciScintilla *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QsciScintillaBase::QsciScintillaBase((QsciScintillaBase *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->QsciScintilla_data).offset_0x18 = 2;
  local_80 = &(this->QsciScintilla_data).field_0x20;
  QString::QString((QString *)local_80);
  (this->QsciScintilla_data).offset_0x58 = 0x700000000;
  (this->QsciScintilla_data).offset_0x60 = 0xffffffff;
  (this->QsciScintilla_data).offset_0x68 = 0;
  (this->QsciScintilla_data).offset_0x6c = 0x200000000;
  (this->QsciScintilla_data).offset_0x74 = 0;
  (this->QsciScintilla_data).offset_0x78 = 0;
  (this->QsciScintilla_data).offset_0x80 = 0xffffffff;
  local_78 = &(this->QsciScintilla_data).offset_0x88;
  (this->QsciScintilla_data).offset_0x88 = (void *)0x0;
  (this->QsciScintilla_data).offset_0x90 = (QString *)0x0;
  (this->QsciScintilla_data).offset_0x98 = 0;
  (this->QsciScintilla_data).offset_0xa0 =
       "_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  (this->QsciScintilla_data).offset_0xa8 = 0x100000000;
  (this->QsciScintilla_data).offset_0xb0 = 0xffffffff;
  local_70 = &(this->QsciScintilla_data).offset_0xb8;
  (this->QsciScintilla_data).offset_0xb8 = (void *)0x0;
  (this->QsciScintilla_data).offset_0xc0 = (QString *)0x0;
  (this->QsciScintilla_data).offset_0xc8 = 0;
  local_40 = &(this->QsciScintilla_data).offset_0xd8;
  local_58 = &(this->QsciScintilla_data).offset_0xf8;
  (this->QsciScintilla_data).offset_0xf8 = (int *)0x0;
  (this->QsciScintilla_data).offset_0x100 = (QObject *)0x0;
  local_50 = &(this->QsciScintilla_data).field_0x110;
  (this->QsciScintilla_data).offset_0xe4 = 0;
  (this->QsciScintilla_data).offset_0xec = 0;
  (this->QsciScintilla_data).offset_0xd8 = (void *)0x0;
  *(undefined8 *)&(this->QsciScintilla_data).field_0xe0 = 0;
  local_28 = this;
  QsciDocument::QsciDocument((QsciDocument *)local_50);
  QColor::QColor((QColor *)&(this->QsciScintilla_data).field_0x120);
  QColor::QColor((QColor *)&(this->QsciScintilla_data).field_0x130);
  local_68 = &(this->QsciScintilla_data).field_0x140;
  QByteArray::QByteArray((QByteArray *)local_68,"",-1);
  (this->QsciScintilla_data).offset_0x158 = 0;
  local_60 = &(this->QsciScintilla_data).field_0x160;
  QString::QString((QString *)local_60);
  QObject::connect(local_f0,(char *)this,(QObject *)"2SCN_MODIFYATTEMPTRO()",(char *)this,0x41399e18
                  );
  QMetaObject::Connection::~Connection((Connection *)local_f0);
  QObject::connect(local_e8,(char *)this,
                   (QObject *)"2SCN_MODIFIED(int,int,const char *,int,int,int,int,int,int,int)",
                   (char *)this,0x41395393);
  QMetaObject::Connection::~Connection((Connection *)local_e8);
  QObject::connect(local_e0,(char *)this,(QObject *)"2SCN_CALLTIPCLICK(int)",(char *)this,0x41395601
                  );
  QMetaObject::Connection::~Connection((Connection *)local_e0);
  QObject::connect(local_d8,(char *)this,(QObject *)"2SCN_CHARADDED(int)",(char *)this,0x413956e1);
  QMetaObject::Connection::~Connection((Connection *)local_d8);
  QObject::connect(local_d0,(char *)this,(QObject *)"2SCN_INDICATORCLICK(int,int)",(char *)this,
                   0x4139549b);
  QMetaObject::Connection::~Connection((Connection *)local_d0);
  QObject::connect(local_c8,(char *)this,(QObject *)"2SCN_INDICATORRELEASE(int,int)",(char *)this,
                   0x413954ba);
  QMetaObject::Connection::~Connection((Connection *)local_c8);
  QObject::connect(local_c0,(char *)this,(QObject *)"2SCN_MARGINCLICK(int,int,int)",(char *)this,
                   0x4139543a);
  QMetaObject::Connection::~Connection((Connection *)local_c0);
  QObject::connect(local_b8,(char *)this,(QObject *)"2SCN_MARGINRIGHTCLICK(int,int,int)",
                   (char *)this,0x41395415);
  QMetaObject::Connection::~Connection((Connection *)local_b8);
  QObject::connect(local_b0,(char *)this,(QObject *)"2SCN_SAVEPOINTREACHED()",(char *)this,
                   0x41399f19);
  QMetaObject::Connection::~Connection((Connection *)local_b0);
  QObject::connect(local_a8,(char *)this,(QObject *)"2SCN_SAVEPOINTLEFT()",(char *)this,0x4139938e);
  QMetaObject::Connection::~Connection((Connection *)local_a8);
  QObject::connect(local_a0,(char *)this,(QObject *)"2SCN_UPDATEUI(int)",(char *)this,0x41395740);
  QMetaObject::Connection::~Connection((Connection *)local_a0);
  QObject::connect(local_98,(char *)this,(QObject *)"2QSCN_SELCHANGED(bool)",(char *)this,0x41396bd5
                  );
  QMetaObject::Connection::~Connection((Connection *)local_98);
  QObject::connect(local_90,(char *)this,(QObject *)"2SCN_AUTOCSELECTION(const char *,int)",
                   (char *)this,0x41399b33);
  QMetaObject::Connection::~Connection((Connection *)local_90);
  QObject::connect(local_88,(char *)this,(QObject *)"2SCN_USERLISTSELECTION(const char *,int)",
                   (char *)this,0x41395517);
  QMetaObject::Connection::~Connection((Connection *)local_88);
  QApplication::font();
  if (((*local_58 == (int *)0x0) || ((*local_58)[1] == 0)) ||
     ((local_28->QsciScintilla_data).offset_0x100 == (QObject *)0x0)) {
    FUN_140588800(local_28,local_38,0);
    QWidget::setFont((QWidget *)local_28,local_38);
  }
  QFont::~QFont(local_38);
  QGuiApplication::palette();
  pQVar2 = QPalette::brush((QPalette *)local_38,4,6);
  pQVar3 = QBrush::color(pQVar2);
  (*local_28->vftablePtr->vfunction98)(local_28,(undefined8 *)pQVar3);
  pQVar2 = QPalette::brush((QPalette *)local_38,4,9);
  pQVar3 = QBrush::color(pQVar2);
  (*local_28->vftablePtr->vfunction119)(local_28,(undefined8 *)pQVar3);
  pQVar2 = QPalette::brush((QPalette *)local_38,4,0xd);
  pQVar3 = QBrush::color(pQVar2);
  (*local_28->vftablePtr->vfunction123)(local_28,pQVar3);
  pQVar2 = QPalette::brush((QPalette *)local_38,4,0xc);
  pQVar3 = QBrush::color(pQVar2);
  (*local_28->vftablePtr->vfunction122)(local_28,pQVar3);
  (*local_28->vftablePtr->vfunction100)(local_28,0);
  FUN_14074b900(local_28,0x950,0,0);
  QColor::QColor(local_100,9);
  FUN_14074b9f0(local_28,0x803,0x22,local_100);
  QColor::QColor(local_100,7);
  FUN_14074b9f0(local_28,0x803,0x23,local_100);
  FUN_14074b730(local_28,0x9f4,1);
  FUN_14074b8f0(local_28);
  (*local_28->vftablePtr->_handlestylefontchangeconst_qfont_int)(local_28,(QObject *)0x0);
  FUN_14074b900(local_28,0x95a,5,4);
  FUN_14074b730(local_28,0xa4a,1);
  local_48 = FUN_140b65d30(0x20);
  pQVar1 = local_28;
  move_down_one_line(local_48,local_28);
  (pQVar1->QsciScintilla_data).offset_0x108 = local_48;
  FUN_14074d220(local_50,pQVar1,0);
  QPalette::~QPalette((QPalette *)local_38);
  return local_28;
}

