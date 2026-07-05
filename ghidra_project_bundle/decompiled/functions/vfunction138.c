/**
 * Function: vfunction138
 * Address:  1400810b0
 * Signature: undefined8 __thiscall vfunction138(QlementineStyle * this, QObject * param_1)
 * Body size: 148 bytes
 */


undefined8 __thiscall
oclero::qlementine::QlementineStyle::vfunction138(QlementineStyle *this,QObject *param_1)

{
  QObject *pQVar1;
  QWidget *pQVar2;
  undefined8 uVar3;
  
  pQVar1 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,param_1);
  if (pQVar1 == (QObject *)0x0) {
    pQVar1 = QMetaObject::cast((QMetaObject *)&DAT_140df6ef8,param_1);
    if (pQVar1 != (QObject *)0x0) {
      uVar3 = FUN_14025f100(pQVar1);
      return uVar3;
    }
    pQVar1 = QMetaObject::cast((QMetaObject *)&DAT_140df76a8,param_1);
    if (pQVar1 != (QObject *)0x0) {
      uVar3 = FUN_14025f2a0(pQVar1);
      return uVar3;
    }
  }
  else {
    pQVar2 = QFocusFrame::widget((QFocusFrame *)pQVar1);
    if (pQVar2 != (QWidget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400810f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*this->vftablePtr->vfunction138)(this,(QObject *)pQVar2);
      return uVar3;
    }
  }
  return 0;
}

