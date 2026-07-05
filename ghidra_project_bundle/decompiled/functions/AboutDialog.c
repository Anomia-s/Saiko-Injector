/**
 * Function: AboutDialog
 * Address:  14055c8a0
 * Signature: AboutDialog * __thiscall AboutDialog(AboutDialog * this, undefined8 param_1)
 * Body size: 211 bytes
 */


AboutDialog * __thiscall
oclero::qlementine::AboutDialog::AboutDialog(AboutDialog *this,undefined8 param_1)

{
  QDialog::QDialog((QDialog *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->AboutDialog_data).offset_0x10 = (QWidget *)0x0;
  (this->AboutDialog_data).offset_0x18 = (QWidget *)0x0;
  (this->AboutDialog_data).offset_0x20 = (QWidget *)0x0;
  (this->AboutDialog_data).offset_0x28 = (QWidget *)0x0;
  (this->AboutDialog_data).offset_0x30 = (QWidget *)0x0;
  (this->AboutDialog_data).offset_0x38 = (QWidget *)0x0;
  (this->AboutDialog_data).offset_0x40 = (QWidget *)0x0;
  (this->AboutDialog_data).offset_0x48 = (QWidget *)0x0;
  QWidget::setSizePolicy((QWidget *)this,0);
  QWidget::setWindowModality((QWidget *)this,2);
  QWidget::setWindowFlag((QWidget *)this,0x100,true);
  QWidget::setWindowFlag((QWidget *)this,0x10000,false);
  QWidget::setWindowFlag((QWidget *)this,0x8000,false);
  QWidget::setWindowFlag((QWidget *)this,0x4000,false);
  QWidget::setWindowFlag((QWidget *)this,0x80000000,false);
  FUN_14055c9b0(this);
  return this;
}

