/**
 * Function: 2tabclosedint
 * Address:  140595270
 * Signature: undefined 2tabclosedint(void)
 * Body size: 537 bytes
 */


void _tabclosedint(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  QObject local_88 [8];
  QObject local_80 [8];
  QObject local_78 [8];
  QObject local_70 [8];
  QObject local_68 [8];
  QObject local_60 [8];
  QObject local_58 [8];
  QObject local_50 [8];
  longlong *local_48;
  int *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar3 = FUN_1405738f0(param_1[0xc]);
  FUN_140278710(uVar3,&local_48);
  uVar3 = (**(code **)(*local_48 + 0x18))(local_48,param_1[0xc]);
  param_1[0xd] = uVar3;
  if (local_40 != (int *)0x0) {
    LOCK();
    piVar1 = local_40 + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(local_40 + 2))(local_40);
    }
    LOCK();
    *local_40 = *local_40 + -1;
    UNLOCK();
    if (*local_40 == 0) {
      FUN_140b68ba8(local_40);
    }
  }
  QWidget::setSizePolicy((QWidget *)param_1[0xd],0x540000);
  cVar2 = FUN_1402765c0(0x20000000);
  if (cVar2 == '\0') {
    QBoxLayout::addWidget((QBoxLayout *)param_1[0xb],param_1[0xd],0,0);
  }
  QObject::connect(local_88,(char *)param_1[0xd],(QObject *)"2tabClosed(int)",(char *)*param_1,
                   0x41399e31);
  QMetaObject::Connection::~Connection((Connection *)local_88);
  QObject::connect(local_80,(char *)param_1[0xd],(QObject *)"2tabOpened(int)",(char *)*param_1,
                   0x41399e31);
  QMetaObject::Connection::~Connection((Connection *)local_80);
  QObject::connect(local_78,(char *)param_1[0xd],(QObject *)"2tabInserted(int)",(char *)*param_1,
                   0x41399e31);
  QMetaObject::Connection::~Connection((Connection *)local_78);
  QObject::connect(local_70,(char *)param_1[0xd],(QObject *)"2removingTab(int)",(char *)*param_1,
                   0x41399e31);
  QMetaObject::Connection::~Connection((Connection *)local_70);
  QObject::connect(local_68,(char *)param_1[0xd],(QObject *)"2tabMoved(int, int)",(char *)*param_1,
                   0x41399e31);
  QMetaObject::Connection::~Connection((Connection *)local_68);
  QObject::connect(local_60,(char *)param_1[0xd],(QObject *)"2currentChanged(int)",(char *)*param_1,
                   0x413956c7);
  QMetaObject::Connection::~Connection((Connection *)local_60);
  QObject::connect(local_58,(char *)param_1[0xd],(QObject *)"2tabBarClicked(int)",(char *)*param_1,
                   0x4139566c);
  QMetaObject::Connection::~Connection((Connection *)local_58);
  QObject::connect(local_50,(char *)param_1[0xd],(QObject *)"2elidedChanged(bool)",(char *)*param_1,
                   0x41399e31);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  return;
}

