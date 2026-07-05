/**
 * Function: QsciScintillaBase
 * Address:  14074b440
 * Signature: QsciScintillaBase * __thiscall QsciScintillaBase(QsciScintillaBase * this, QWidget * param_1)
 * Body size: 596 bytes
 */


QsciScintillaBase * __thiscall
QsciScintillaBase::QsciScintillaBase(QsciScintillaBase *this,QWidget *param_1)

{
  undefined1 *this_00;
  longlong *plVar1;
  QsciScintillaBase *pQVar2;
  int iVar3;
  QScrollBar *pQVar4;
  QWidget *pQVar5;
  QsciScintillaQt *this_01;
  char *pcVar6;
  undefined7 uVar8;
  undefined8 uVar7;
  QsciScintillaBase *pQVar9;
  QsciScintillaBase *local_28;
  QsciScintillaBase *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  QAbstractScrollArea::QAbstractScrollArea((QAbstractScrollArea *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->QsciScintillaBase_data).offset_0x18 = 0;
  this_00 = &(this->QsciScintillaBase_data).field_0x20;
  local_20 = this;
  QTimer::QTimer((QTimer *)this_00,(QObject *)0x0);
  pQVar2 = local_20;
  *(undefined8 *)&(local_20->QsciScintillaBase_data).field_0x30 = 0xffffffff;
  QString::QString((QString *)&(local_20->QsciScintillaBase_data).field_0x38);
  *(undefined1 *)&pQVar2[1].vftablePtr = 0;
  FUN_1407cfde0();
  pQVar4 = QAbstractScrollArea::verticalScrollBar((QAbstractScrollArea *)local_20);
  QObject::connect((QObject *)&local_28,(char *)pQVar4,(QObject *)"2valueChanged(int)",
                   (char *)local_20,0x41395709);
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  pQVar4 = QAbstractScrollArea::horizontalScrollBar((QAbstractScrollArea *)local_20);
  pcVar6 = "2valueChanged(int)";
  pQVar9 = local_20;
  QObject::connect((QObject *)&local_28,(char *)pQVar4,(QObject *)"2valueChanged(int)",
                   (char *)local_20,0x41395719);
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  QWidget::setAcceptDrops((QWidget *)local_20,true);
  QWidget::setFocusPolicy((QWidget *)local_20,0xf);
  uVar8 = (undefined7)((ulonglong)pcVar6 >> 8);
  QWidget::setAttribute((QWidget *)local_20,0x21,true);
  QWidget::setAttribute((QWidget *)local_20,0xe,true);
  QWidget::setInputMethodHints((QWidget *)local_20,0x444);
  pQVar5 = (QWidget *)QAbstractScrollArea::viewport((QAbstractScrollArea *)local_20);
  QWidget::setBackgroundRole(pQVar5,9);
  pQVar5 = (QWidget *)QAbstractScrollArea::viewport((QAbstractScrollArea *)local_20);
  QWidget::setAttribute(pQVar5,2,true);
  pQVar5 = (QWidget *)QAbstractScrollArea::viewport((QAbstractScrollArea *)local_20);
  uVar7 = CONCAT71(uVar8,1);
  QWidget::setAttribute(pQVar5,9,true);
  QTimer::setSingleShot((QTimer *)this_00,true);
  this_01 = (QsciScintillaQt *)FUN_140b65d30(0xa18);
  pQVar2 = local_20;
  QsciScintillaQt::QsciScintillaQt(this_01,(QAbstractScrollArea *)local_20,uVar7,pQVar9);
  (pQVar2->QsciScintillaBase_data).offset_0x10 = (longlong *)this_01;
  iVar3 = QApplication::cursorFlashTime();
  plVar1 = (local_20->QsciScintillaBase_data).offset_0x10;
  (**(code **)(plVar1[2] + 0x1e8))(plVar1 + 2,0x81c,(longlong)(iVar3 / 2),0);
  if (DAT_141700150 == '\0') {
    FUN_1407d4a30();
    DAT_141700150 = '\x01';
  }
  local_28 = local_20;
  FUN_14027aff0(&DAT_141700138,DAT_141700148,&local_28);
  if ((DAT_141700138 == (int *)0x0) || (1 < *DAT_141700138)) {
    FUN_140096f80(&DAT_141700138,0,0,0);
  }
  return local_20;
}

