/**
 * Function: 1delete_selection
 * Address:  14058ed60
 * Signature: undefined 1delete_selection(void)
 * Body size: 1371 bytes
 */


QWidget * _delete_selection(QWidget *param_1)

{
  QWidget QVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  QWidget *this;
  QAction *pQVar5;
  longlong lVar6;
  QString local_58 [24];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  iVar3 = FUN_14074b900(param_1,0x85c,0);
  QVar1 = param_1[0xc0];
  this = (QWidget *)FUN_140b65d30(0x28);
  QMenu::QMenu((QMenu *)this,param_1);
  if (iVar3 == 0) {
    QMetaObject::tr((QMetaObject *)&DAT_1412440d0,(char *)local_58,"&Undo",0);
    pQVar5 = QWidget::addAction(this,local_58,(QObject *)param_1,"1undo()",0);
    QString::~QString(local_58);
    lVar6 = FUN_14074d5b0(*(undefined8 *)(param_1 + 0x160),0x880);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
      QKeySequence::QKeySequence((QKeySequence *)local_58,*(int *)(lVar6 + 0xc),0,0,0);
      QAction::setShortcut((QAction *)pQVar5,(QKeySequence *)local_58);
      QKeySequence::~QKeySequence((QKeySequence *)local_58);
    }
    iVar4 = FUN_14074b900(param_1,0x87e,0);
    QAction::setEnabled((QAction *)pQVar5,iVar4 != 0);
    QMetaObject::tr((QMetaObject *)&DAT_1412440d0,(char *)local_58,"&Redo",0);
    pQVar5 = QWidget::addAction(this,local_58,(QObject *)param_1,"1redo()",0);
    QString::~QString(local_58);
    lVar6 = FUN_14074d5b0(*(undefined8 *)(param_1 + 0x160),0x7db);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
      QKeySequence::QKeySequence((QKeySequence *)local_58,*(int *)(lVar6 + 0xc),0,0,0);
      QAction::setShortcut((QAction *)pQVar5,(QKeySequence *)local_58);
      QKeySequence::~QKeySequence((QKeySequence *)local_58);
    }
    iVar4 = FUN_14074b900(param_1,0x7e0,0);
    QAction::setEnabled((QAction *)pQVar5,iVar4 != 0);
    QMenu::addSeparator((QMenu *)this);
    QMetaObject::tr((QMetaObject *)&DAT_1412440d0,(char *)local_58,"Cu&t",0);
    pQVar5 = QWidget::addAction(this,local_58,(QObject *)param_1,"1cut()",0);
    QString::~QString(local_58);
    lVar6 = FUN_14074d5b0(*(undefined8 *)(param_1 + 0x160),0x881);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
      QKeySequence::QKeySequence((QKeySequence *)local_58,*(int *)(lVar6 + 0xc),0,0,0);
      QAction::setShortcut((QAction *)pQVar5,(QKeySequence *)local_58);
      QKeySequence::~QKeySequence((QKeySequence *)local_58);
    }
    QAction::setEnabled((QAction *)pQVar5,(bool)QVar1);
  }
  QMetaObject::tr((QMetaObject *)&DAT_1412440d0,(char *)local_58,"&Copy",0);
  pQVar5 = QWidget::addAction(this,local_58,(QObject *)param_1,"1copy()",0);
  QString::~QString(local_58);
  lVar6 = FUN_14074d5b0(*(undefined8 *)(param_1 + 0x160),0x882);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
    QKeySequence::QKeySequence((QKeySequence *)local_58,*(int *)(lVar6 + 0xc),0,0,0);
    QAction::setShortcut((QAction *)pQVar5,(QKeySequence *)local_58);
    QKeySequence::~QKeySequence((QKeySequence *)local_58);
  }
  QAction::setEnabled((QAction *)pQVar5,(bool)QVar1);
  if (iVar3 == 0) {
    QMetaObject::tr((QMetaObject *)&DAT_1412440d0,(char *)local_58,"&Paste",0);
    pQVar5 = QWidget::addAction(this,local_58,(QObject *)param_1,"1paste()",0);
    QString::~QString(local_58);
    lVar6 = FUN_14074d5b0(*(undefined8 *)(param_1 + 0x160),0x883);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
      QKeySequence::QKeySequence((QKeySequence *)local_58,*(int *)(lVar6 + 0xc),0,0,0);
      QAction::setShortcut((QAction *)pQVar5,(QKeySequence *)local_58);
      QKeySequence::~QKeySequence((QKeySequence *)local_58);
    }
    iVar3 = FUN_14074b900(param_1,0x87d,0);
    QAction::setEnabled((QAction *)pQVar5,iVar3 != 0);
    QMetaObject::tr((QMetaObject *)&DAT_1412440d0,(char *)local_58,"Delete",0);
    pQVar5 = QWidget::addAction(this,local_58,(QObject *)param_1,"1delete_selection()",0);
    QString::~QString(local_58);
    QAction::setEnabled((QAction *)pQVar5,(bool)QVar1);
    bVar2 = QMenu::isEmpty((QMenu *)this);
    if (bVar2) goto LAB_14058f0b7;
  }
  else {
    bVar2 = QMenu::isEmpty((QMenu *)this);
    if (bVar2) goto LAB_14058f0b7;
  }
  QMenu::addSeparator((QMenu *)this);
LAB_14058f0b7:
  QMetaObject::tr((QMetaObject *)&DAT_1412440d0,(char *)local_58,"Select All",0);
  pQVar5 = QWidget::addAction(this,local_58,(QObject *)param_1,"1selectAll()",0);
  QString::~QString(local_58);
  lVar6 = FUN_14074d5b0(*(undefined8 *)(param_1 + 0x160),0x7dd);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0xc) != 0)) {
    QKeySequence::QKeySequence((QKeySequence *)local_58,*(int *)(lVar6 + 0xc),0,0,0);
    QAction::setShortcut((QAction *)pQVar5,(QKeySequence *)local_58);
    QKeySequence::~QKeySequence((QKeySequence *)local_58);
  }
  iVar3 = FUN_14074b900(param_1,0x887,0,0);
  QAction::setEnabled((QAction *)pQVar5,iVar3 != 0);
  return this;
}

