/**
 * Function: QsciAccessibleScintillaBase
 * Address:  1407cfc90
 * Signature: QsciAccessibleScintillaBase * __thiscall QsciAccessibleScintillaBase(QsciAccessibleScintillaBase * this, QWidget * param_1)
 * Body size: 224 bytes
 */


QsciAccessibleScintillaBase * __thiscall
QsciAccessibleScintillaBase::QsciAccessibleScintillaBase
          (QsciAccessibleScintillaBase *this,QWidget *param_1)

{
  QsciAccessibleScintillaBase *local_58 [3];
  QsciAccessibleScintillaBase_vftable2 **local_40;
  QsciAccessibleScintillaBase_vftable3 **local_38;
  QsciAccessibleScintillaBase *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  QString::QString((QString *)local_58);
  QAccessibleWidget::QAccessibleWidget((QAccessibleWidget *)this,param_1,0x2a,(QString *)local_58);
  QString::~QString((QString *)local_58);
  local_40 = &this->vftablePtr;
  local_38 = &this->vftablePtr;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->QsciAccessibleScintillaBase_data).offset_0x0 = 0xffffffff;
  (this->QsciAccessibleScintillaBase_data).offset_0x4 = 0;
  local_58[0] = this;
  local_30 = this;
  FUN_14027aff0(&DAT_141700cc8,DAT_141700cd8,local_58);
  if ((DAT_141700cc8 == (int *)0x0) || (1 < *DAT_141700cc8)) {
    FUN_140096f80(&DAT_141700cc8,0,0,0);
  }
  return local_30;
}

