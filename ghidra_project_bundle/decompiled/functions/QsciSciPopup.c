/**
 * Function: QsciSciPopup
 * Address:  14081eed0
 * Signature: QsciSciPopup * __thiscall QsciSciPopup(QsciSciPopup * this)
 * Body size: 139 bytes
 */


QsciSciPopup * __thiscall QsciSciPopup::QsciSciPopup(QsciSciPopup *this)

{
  undefined1 *this_00;
  QObject local_30 [8];
  undefined1 *local_28;
  QsciSciPopup *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  QMenu::QMenu((QMenu *)this,(QWidget *)0x0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this_00 = &(this->QsciSciPopup_data).field_0x18;
  local_20 = this;
  QSignalMapper::QSignalMapper((QSignalMapper *)this_00,(QObject *)0x0);
  local_28 = this_00;
  QObject::connect(local_30,this_00,(QObject *)"2mapped(int)",(char *)local_20,0x4139563c);
  QMetaObject::Connection::~Connection((Connection *)local_30);
  return local_20;
}

