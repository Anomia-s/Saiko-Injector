/**
 * Function: CleanSpinBox
 * Address:  140265450
 * Signature: CleanSpinBox * __thiscall CleanSpinBox(CleanSpinBox * this, QWidget * param_1)
 * Body size: 179 bytes
 */


CleanSpinBox * __thiscall
ldv::editor::CleanSpinBox::CleanSpinBox(CleanSpinBox *this,QWidget *param_1)

{
  QLocale local_28 [8];
  QWidget *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  QDoubleSpinBox::QDoubleSpinBox((QDoubleSpinBox *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_20 = (QWidget *)this;
  QLocale::QLocale(local_28,(Language)CONCAT62((int6)((ulonglong)param_1 >> 0x10),1),0,0);
  QWidget::setLocale(local_20,local_28);
  QLocale::~QLocale(local_28);
  QAbstractSpinBox::setButtonSymbols((QAbstractSpinBox *)local_20,2);
  QDoubleSpinBox::setDecimals((QDoubleSpinBox *)local_20,4);
  QDoubleSpinBox::setRange((QDoubleSpinBox *)local_20,-1000000.0,1000000.0);
  QWidget::setSizePolicy(local_20,0x70000);
  return (CleanSpinBox *)local_20;
}

