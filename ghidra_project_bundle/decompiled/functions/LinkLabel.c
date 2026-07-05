/**
 * Function: LinkLabel
 * Address:  14028bf90
 * Signature: LinkLabel * __thiscall LinkLabel(LinkLabel * this)
 * Body size: 219 bytes
 */


LinkLabel * __thiscall ldv::editor::_anon_E1468FF4::LinkLabel::LinkLabel(LinkLabel *this)

{
  QVariant local_50 [32];
  undefined1 *local_30;
  LinkLabel *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  QLabel::QLabel();
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_30 = &(this->LinkLabel_data).field_0x10;
  (this->LinkLabel_data).offset_0x48 = 0;
  ::QVariant::QVariant(local_50,true);
  local_28 = this;
  QObject::doSetProperty((QObject *)this,"welcomeLink",local_50,local_50);
  ::QVariant::~QVariant(local_50);
  QCursor::QCursor((QCursor *)local_50,0xd);
  QWidget::setCursor((QWidget *)local_28,(QCursor *)local_50);
  QCursor::~QCursor((QCursor *)local_50);
  QWidget::setAttribute((QWidget *)local_28,0x4a,true);
  QLabel::setAlignment((QLabel *)local_28,0x81);
  QWidget::setSizePolicy((QWidget *)local_28,0x500000);
  return local_28;
}

