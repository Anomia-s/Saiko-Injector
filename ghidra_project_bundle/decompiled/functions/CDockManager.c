/**
 * Function: CDockManager
 * Address:  140277b50
 * Signature: CDockManager * __thiscall CDockManager(CDockManager * this, QObject * param_1)
 * Body size: 505 bytes
 */


CDockManager * __thiscall ads::CDockManager::CDockManager(CDockManager *this,QObject *param_1)

{
  longlong lVar1;
  CDockManager *pCVar2;
  CDockFocusController *pCVar3;
  QObject *this_00;
  QObject *this_01;
  undefined8 *puVar4;
  CDockManager *local_58 [3];
  CDockManager *local_40;
  CDockFocusController *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  CDockContainerWidget::CDockContainerWidget
            ((CDockContainerWidget *)this,(CDockContainerWidget *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_40 = this;
  local_38 = (CDockFocusController *)FUN_140b65d30(0xe0);
  pCVar2 = local_40;
  FUN_140276180(local_38,local_40);
  (pCVar2->CDockManager_data).offset_0x0 = (longlong)local_38;
  FUN_14056bab0(pCVar2);
  FUN_14056bb80(local_40);
  this_00 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,param_1);
  if (this_00 != (QObject *)0x0) {
    QMainWindow::setCentralWidget((QMainWindow *)this_00,(QWidget *)local_40);
  }
  local_38 = (CDockFocusController *)FUN_140b65d30(0x28);
  QMetaObject::tr((QMetaObject *)&DAT_140e00440,(char *)local_58,"Show View",0);
  pCVar3 = local_38;
  pCVar2 = local_40;
  QMenu::QMenu((QMenu *)local_38,(QString *)local_58,(QWidget *)local_40);
  *(CDockFocusController **)((pCVar2->CDockManager_data).offset_0x0 + 0x78) = pCVar3;
  QString::~QString((QString *)local_58);
  local_38 = (CDockFocusController *)FUN_140b65d30(0x30);
  pCVar2 = local_40;
  CDockOverlay::CDockOverlay((CDockOverlay *)local_38,local_40,0);
  *(CDockFocusController **)((pCVar2->CDockManager_data).offset_0x0 + 0x58) = local_38;
  local_38 = (CDockFocusController *)FUN_140b65d30(0x30);
  pCVar2 = local_40;
  CDockOverlay::CDockOverlay((CDockOverlay *)local_38,local_40,1);
  *(CDockFocusController **)((pCVar2->CDockManager_data).offset_0x0 + 0x50) = local_38;
  lVar1 = (pCVar2->CDockManager_data).offset_0x0;
  local_58[0] = pCVar2;
  puVar4 = (undefined8 *)(lVar1 + 0x38);
  FUN_14027aff0(puVar4,*(undefined8 *)(lVar1 + 0x48),local_58);
  if (((int *)*puVar4 == (int *)0x0) || (1 < *(int *)*puVar4)) {
    FUN_140096f80(puVar4,0,0,0);
  }
  FUN_1402763e0((local_40->CDockManager_data).offset_0x0);
  if ((DAT_141500978._2_1_ & 0x20) != 0) {
    local_38 = (CDockFocusController *)FUN_140b65d30(0x18);
    pCVar2 = local_40;
    CDockFocusController::CDockFocusController(local_38,(QObject *)local_40);
    *(CDockFocusController **)((pCVar2->CDockManager_data).offset_0x0 + 0xa0) = local_38;
  }
  this_01 = (QObject *)QWidget::window((QWidget *)local_40);
  QObject::installEventFilter(this_01,(QObject *)local_40);
  return local_40;
}

