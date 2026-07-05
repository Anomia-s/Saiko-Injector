/**
 * Function: QlementineStyle
 * Address:  1400693d0
 * Signature: QlementineStyle * __thiscall QlementineStyle(QlementineStyle * this, QObject * param_1)
 * Body size: 260 bytes
 */


QlementineStyle * __thiscall
oclero::qlementine::QlementineStyle::QlementineStyle(QlementineStyle *this,QObject *param_1)

{
  TimerType TVar1;
  QSlotObjectBase *pQVar2;
  QString local_68 [24];
  QObject *local_50;
  int *local_48;
  wchar_t *local_40;
  undefined8 local_38;
  QObject local_30;
  QObject *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QCommonStyle::QCommonStyle((QCommonStyle *)this);
  this->vftablePtr = &vftable;
  local_28 = (QObject *)this;
  local_30 = (QObject)FUN_140b65d30(0x7c8);
  FUN_1400695e0(local_30,local_28);
  local_50 = local_28 + 2;
  local_28[2] = local_30;
  QObject::setParent(local_28,param_1);
  local_48 = (int *)0x0;
  local_40 = L"QlementineStyle";
  local_38 = 0xf;
  QString::QString(local_68,(QArrayDataPointer<char16_t> *)&local_48);
  QObject::doSetObjectName(local_28,local_68);
  QString::~QString(local_68);
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + -1;
    UNLOCK();
    if (*local_48 == 0) {
      free(local_48);
    }
  }
  TVar1 = QTimer::defaultTypeFor(0);
  pQVar2 = (QSlotObjectBase *)FUN_140b65d30(0x18);
  *(undefined4 *)pQVar2 = 1;
  *(undefined1 **)(pQVar2 + 8) = &LAB_140088b60;
  *(QObject **)(pQVar2 + 0x10) = local_28;
  QTimer::singleShotImpl(0,TVar1,(QObject *)local_28,pQVar2);
  return (QlementineStyle *)local_28;
}

