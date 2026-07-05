/**
 * Function: ColorEditor
 * Address:  1405481f0
 * Signature: ColorEditor * __thiscall ColorEditor(ColorEditor * this, undefined8 param_1, undefined8 param_2)
 * Body size: 93 bytes
 */


ColorEditor * __thiscall
oclero::qlementine::ColorEditor::ColorEditor
          (ColorEditor *this,undefined8 param_1,undefined8 param_2)

{
  QWidget::QWidget((QWidget *)this,param_2,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->ColorEditor_data).offset_0x10 = (QLineEdit *)0x0;
  (this->ColorEditor_data).offset_0x18 = (QLineEdit *)0x0;
  FUN_140547da0(this,param_1);
  return this;
}

