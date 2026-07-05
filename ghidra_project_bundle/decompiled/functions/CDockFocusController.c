/**
 * Function: CDockFocusController
 * Address:  14057db80
 * Signature: CDockFocusController * __thiscall CDockFocusController(CDockFocusController * this, QObject * param_1)
 * Body size: 274 bytes
 */


CDockFocusController * __thiscall
ads::CDockFocusController::CDockFocusController(CDockFocusController *this,QObject *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  QObject local_40 [8];
  QObject local_38 [8];
  QObject local_30 [8];
  CDockFocusController *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QObject::QObject((QObject *)this,param_1);
  this->vftablePtr = &vftable;
  local_28 = this;
  puVar2 = (undefined8 *)FUN_140b65d30(0x48);
  *puVar2 = local_28;
  *(undefined2 *)(puVar2 + 8) = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  (local_28->CDockFocusController_data).offset_0x8 = (longlong)puVar2;
  puVar2[7] = param_1;
  pcVar1 = self_exref;
  QObject::connect(local_40,*(char **)self_exref,(QObject *)"2focusChanged(QWidget*, QWidget*)",
                   (char *)local_28,0x41398b09);
  QMetaObject::Connection::~Connection((Connection *)local_40);
  QObject::connect(local_38,*(char **)pcVar1,(QObject *)"2focusWindowChanged(QWindow*)",
                   (char *)local_28,0x41398ac7);
  QMetaObject::Connection::~Connection((Connection *)local_38);
  QObject::connect(local_30,*(char **)((local_28->CDockFocusController_data).offset_0x8 + 0x38),
                   (QObject *)"2stateRestored()",(char *)local_28,0x41399e5a);
  QMetaObject::Connection::~Connection((Connection *)local_30);
  return local_28;
}

