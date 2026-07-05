/**
 * Function: LineEditMenuEventFilter
 * Address:  14007f0f0
 * Signature: LineEditMenuEventFilter * __thiscall LineEditMenuEventFilter(LineEditMenuEventFilter * this, QObject * param_1)
 * Body size: 123 bytes
 */


LineEditMenuEventFilter * __thiscall
oclero::qlementine::LineEditMenuEventFilter::LineEditMenuEventFilter
          (LineEditMenuEventFilter *this,QObject *param_1)

{
  QObject *pQVar1;
  LineEditMenuIconsBehavior *this_00;
  
  QObject::QObject((QObject *)this,(QObject *)param_1);
  this->vftablePtr = &vftable;
  pQVar1 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar1 == (QObject *)0x0) {
    QObject::installEventFilter(param_1,(QObject *)this);
  }
  else {
    this_00 = (LineEditMenuIconsBehavior *)FUN_140b65d30(0x28);
    LineEditMenuIconsBehavior::LineEditMenuIconsBehavior(this_00,pQVar1);
  }
  return this;
}

