/**
 * Function: ComboBoxDelegate
 * Address:  14025cfd0
 * Signature: ComboBoxDelegate * __thiscall ComboBoxDelegate(ComboBoxDelegate * this, QObject * param_1, QObject * param_2)
 * Body size: 87 bytes
 */


ComboBoxDelegate * __thiscall
oclero::qlementine::ComboBoxDelegate::ComboBoxDelegate
          (ComboBoxDelegate *this,QObject *param_1,QObject *param_2)

{
  ExternalRefCountData *pEVar1;
  
  QItemDelegate::QItemDelegate((QItemDelegate *)this,param_1);
  this->vftablePtr = &vftable;
  (this->ComboBoxDelegate_data).offset_0x8 = param_1;
  pEVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  (this->ComboBoxDelegate_data).offset_0x10 = pEVar1;
  (this->ComboBoxDelegate_data).offset_0x18 = param_2;
  return this;
}

