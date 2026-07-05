/**
 * Function: CAutoHideTab
 * Address:  140591550
 * Signature: CAutoHideTab * __thiscall CAutoHideTab(CAutoHideTab * this, QWidget * param_1)
 * Body size: 480 bytes
 */


CAutoHideTab * __thiscall ads::CAutoHideTab::CAutoHideTab(CAutoHideTab *this,QWidget *param_1)

{
  CAutoHideTab_vftable0 *pCVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint in_stack_ffffffffffffff5c;
  QVariant local_90 [32];
  code *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  code *local_50;
  QObject local_48 [8];
  CAutoHideTab_vftable0 *local_40;
  CAutoHideTab *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  QPushButton::QPushButton((QPushButton *)this,param_1);
  (this->CAutoHideTab_data).offset_0x10 = 0;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_38 = this;
  local_40 = (CAutoHideTab_vftable0 *)FUN_140b65d30(0x68);
  local_40->vfunction1 = (vfunction1 *)local_38;
  local_40->ads_cautohidetab = (ads_cautohidetab *)0x0;
  local_40->vfunction3 = (vfunction3 *)0x0;
  *(undefined4 *)&local_40->vfunction4 = 2;
  local_40->vfunction5 = (vfunction5 *)0x8000000000000000;
  local_40->eventFilter = (eventFilter *)0x8000000000000000;
  QTimer::QTimer((QTimer *)&local_40->timerEvent,(QObject *)0x0);
  *(undefined1 *)&local_40->customEvent = 0;
  *(undefined8 *)((longlong)&local_40->customEvent + 4) = 0;
  *(undefined8 *)((longlong)&local_40->connectNotify + 4) = 0;
  local_40->disconnectNotify = (disconnectNotify *)0x0;
  local_40->setVisible = (setVisible *)0x0;
  local_38[1].vftablePtr = local_40;
  QWidget::setAttribute((QWidget *)local_38,0x49,true);
  QWidget::setFocusPolicy((QWidget *)local_38,0);
  cVar2 = FUN_140279df0(0x200);
  if (cVar2 != '\0') {
    QWidget::setAcceptDrops((QWidget *)local_38,true);
  }
  pCVar1 = local_38[1].vftablePtr;
  ::QVariant::QVariant(local_90,500);
  FUN_14027a580(&local_70,0,local_90);
  iVar3 = ::QVariant::toInt((QVariant *)&local_70,(bool *)0x0);
  QTimer::setInterval((QTimer *)&pCVar1->timerEvent,iVar3);
  ::QVariant::~QVariant((QVariant *)&local_70);
  QTimer::setSingleShot((QTimer *)&(local_38[1].vftablePtr)->timerEvent,true);
  local_70 = FUN_1405917d0;
  uStack_68 = 0;
  pCVar1 = local_38[1].vftablePtr;
  local_50 = timeout_exref;
  puVar4 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar4 = 1;
  *(undefined1 **)(puVar4 + 2) = &LAB_140085340;
  *(code **)(puVar4 + 4) = local_70;
  *(ulonglong *)(puVar4 + 6) = CONCAT44(uStack_64,uStack_68);
  QObject::connectImpl
            (local_48,&pCVar1->timerEvent,(QObject *)&local_50,&local_38->vftablePtr,
             (QSlotObjectBase *)&local_70,(ConnectionType)puVar4,
             (int *)((ulonglong)in_stack_ffffffffffffff5c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_48);
  return local_38;
}

