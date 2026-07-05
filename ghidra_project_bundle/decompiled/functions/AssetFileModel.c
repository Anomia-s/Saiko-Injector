/**
 * Function: AssetFileModel
 * Address:  1402cd610
 * Signature: AssetFileModel * __thiscall AssetFileModel(AssetFileModel * this, QObject * param_1)
 * Body size: 128 bytes
 */


AssetFileModel * __thiscall
ldv::editor::AssetFileModel::AssetFileModel(AssetFileModel *this,QObject *param_1)

{
  undefined1 *this_00;
  
  QAbstractListModel::QAbstractListModel((QAbstractListModel *)this,param_1);
  this->vftablePtr = &vftable;
  QString::QString((QString *)&(this->AssetFileModel_data).field_0x8);
  this_00 = &(this->AssetFileModel_data).field_0x40;
  (this->AssetFileModel_data).offset_0x20 = 0;
  (this->AssetFileModel_data).offset_0x28 = 0;
  (this->AssetFileModel_data).offset_0x30 = 0;
  (this->AssetFileModel_data).offset_0x38 = 0;
  QCollator::QCollator((QCollator *)this_00);
  QCollator::setCaseSensitivity((QCollator *)this_00,0);
  QCollator::setNumericMode((QCollator *)this_00,true);
  return this;
}

