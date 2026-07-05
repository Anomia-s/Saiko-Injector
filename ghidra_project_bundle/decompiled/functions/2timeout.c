/**
 * Function: 2timeout
 * Address:  1407d4740
 * Signature: undefined8 __thiscall 2timeout(void * this, char param_1)
 * Body size: 210 bytes
 */


undefined8 __thiscall _timeout(void *this,char param_1)

{
  undefined8 extraout_RAX;
  undefined8 uVar1;
  QTimer *this_00;
  QObject local_40 [8];
  QTimer *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = 0;
  if (param_1 == '\0') {
    if (*(char *)((longlong)this + 0x6a8) == '\0') goto LAB_1407d4805;
    QTimer::stop(*(QTimer **)((longlong)this + 0x6b0));
    uVar1 = 0;
  }
  else {
    if (*(char *)((longlong)this + 0x6a8) != '\0') goto LAB_1407d4805;
    this_00 = *(QTimer **)((longlong)this + 0x6b0);
    if (this_00 == (QTimer *)0x0) {
      local_38 = (QTimer *)FUN_140b65d30(0x10);
      QTimer::QTimer(local_38,(QObject *)((longlong)this + -0x10));
      this_00 = local_38;
      *(QTimer **)((longlong)this + 0x6b0) = local_38;
      QObject::connect(local_40,(char *)local_38,(QObject *)"2timeout()",
                       (char *)((longlong)this + -0x10),0x41399d03);
      QMetaObject::Connection::~Connection((Connection *)local_40);
    }
    QTimer::start(this_00,0);
    uVar1 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  *(char *)((longlong)this + 0x6a8) = (char)uVar1;
LAB_1407d4805:
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

