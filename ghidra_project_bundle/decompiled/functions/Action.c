/**
 * Function: Action
 * Address:  140547270
 * Signature: void __thiscall Action(Action * this, QObject * param_1)
 * Body size: 174 bytes
 */


void __thiscall oclero::qlementine::Action::Action(Action *this,QObject *param_1)

{
  QAction::QAction((QAction *)this,param_1);
  this->vftablePtr = &vftable;
  (this->Action_data).offset_0x8 = 0;
  QString::QString((QString *)&(this->Action_data).field_0x10);
  QKeySequence::QKeySequence((QKeySequence *)&(this->Action_data).field_0x28);
  QKeySequence::QKeySequence((QKeySequence *)&(this->Action_data).field_0x30);
  QMetaObject::Connection::Connection((Connection *)&(this->Action_data).field_0x38);
  (this->Action_data).offset_0x78 = (QAction *)0x0;
  (this->Action_data).offset_0xb8 = (QAction *)0x0;
  (this->Action_data).offset_0xf8 = (QAction *)0x0;
  (this->Action_data).offset_0x138 = (QAction *)0x0;
  (this->Action_data).offset_0x178 = (QAction *)0x0;
  return;
}

