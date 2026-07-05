/**
 * Function: QsciSciListBox
 * Address:  14081f040
 * Signature: QsciSciListBox * __thiscall QsciSciListBox(QsciSciListBox * this, QWidget * param_1, undefined8 param_2)
 * Body size: 147 bytes
 */


QsciSciListBox * __thiscall
QsciSciListBox::QsciSciListBox(QsciSciListBox *this,QWidget *param_1,undefined8 param_2)

{
  QListWidget::QListWidget((QListWidget *)this,param_1);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->QsciSciListBox_data).offset_0x10 = param_2;
  QWidget::setAttribute((QWidget *)this,5,true);
  QWidget::setWindowFlags((QWidget *)this);
  QWidget::setFocusPolicy((QWidget *)this,0);
  QFrame::setFrameShape((QFrame *)this,6);
  QFrame::setFrameShadow((QFrame *)this,0x10);
  return this;
}

