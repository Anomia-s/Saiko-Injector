/**
 * Function: CAutoHideSideBar_Constructor_or_Destructor
 * Address:  1405904c0
 * Signature: void __fastcall CAutoHideSideBar_Constructor_or_Destructor(QScrollArea * param_1)
 * Body size: 353 bytes
 */


void ads::CAutoHideSideBar::CAutoHideSideBar_Constructor_or_Destructor(QScrollArea *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  QPaintDevice QVar3;
  undefined8 *puVar4;
  QString local_70 [16];
  ulonglong local_60;
  QChar *local_58;
  ulonglong local_50;
  int *local_48;
  undefined8 *puStack_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  (param_1->QAbstractScrollArea).QFrame.QWidget.QObject = (QObject)&vftable;
  (param_1->QAbstractScrollArea).QFrame.QWidget.QPaintDevice = (QPaintDevice)&vftable;
  QString::QString(local_70);
  local_58 = QString::begin(local_70);
  local_50 = local_60 | 0x8000000000000000;
  local_48 = (int *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = 0;
  qt_qFindChildren_helper(param_1,&local_58,&DAT_140dfe690,&local_48,0);
  QString::~QString(local_70);
  if ((local_48 == (int *)0x0) || (1 < *local_48)) {
    FUN_140096f80(&local_48,0,0,0);
    if (local_48 != (int *)0x0) {
      iVar2 = *local_48;
      puVar4 = puStack_40;
      goto joined_r0x00014059058a;
    }
  }
  else {
    iVar2 = *local_48;
    puVar4 = puStack_40;
joined_r0x00014059058a:
    puStack_40 = puVar4;
    if (iVar2 < 2) goto LAB_1405905b1;
  }
  puVar4 = puStack_40;
  FUN_140096f80(&local_48,0,0,0);
LAB_1405905b1:
  puVar1 = puStack_40 + local_38;
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    QWidget::setParent((QWidget *)*puVar4,(QWidget *)0x0);
  }
  QVar3 = param_1[1].QAbstractScrollArea.QFrame.QWidget.QPaintDevice;
  if (QVar3 != (QPaintDevice)0x0) {
    thunk_FUN_140b68ba8(QVar3,0x28);
  }
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + -1;
    UNLOCK();
    if (*local_48 == 0) {
      free(local_48);
    }
  }
  QScrollArea::~QScrollArea(param_1);
  return;
}

