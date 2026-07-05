/**
 * Function: 2closeothertabsrequested
 * Address:  1405932e0
 * Signature: undefined 2closeothertabsrequested(void)
 * Body size: 428 bytes
 */


void _closeothertabsrequested(QWidget *param_1,ulonglong param_2,QObject *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStackY_98 [32];
  QObject local_60 [8];
  QObject local_58 [8];
  QObject local_50 [8];
  QObject local_48 [8];
  QObject local_40 [8];
  ulonglong local_38;
  
  uVar2 = param_2 & 0xffffffff;
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStackY_98;
  QBoxLayout::insertWidget
            (*(QBoxLayout **)((longlong)param_1[1].QPaintDevice + 0x18),param_2,param_3,0);
  QObject::connect(local_40,(char *)param_3,(QObject *)"2clicked()",(char *)param_1,0x41399f09);
  QMetaObject::Connection::~Connection((Connection *)local_40);
  QObject::connect(local_48,(char *)param_3,(QObject *)"2closeRequested()",(char *)param_1,
                   0x41399e01);
  QMetaObject::Connection::~Connection((Connection *)local_48);
  QObject::connect(local_50,(char *)param_3,(QObject *)"2closeOtherTabsRequested()",(char *)param_1,
                   0x41399dd2);
  QMetaObject::Connection::~Connection((Connection *)local_50);
  QObject::connect(local_58,(char *)param_3,(QObject *)"2moved(QPoint)",(char *)param_1,0x41395379);
  QMetaObject::Connection::~Connection((Connection *)local_58);
  QObject::connect(local_60,(char *)param_3,(QObject *)"2elidedChanged(bool)",(char *)param_1,
                   0x41396bf3);
  QMetaObject::Connection::~Connection((Connection *)local_60);
  QObject::installEventFilter(param_3,(QObject *)param_1);
  FUN_140290bd0(param_1,uVar2);
  iVar1 = *(int *)((longlong)param_1[1].QPaintDevice + 0x20);
  if (iVar1 < (int)param_2) {
    if (iVar1 != -1) goto LAB_140593454;
  }
  else {
    uVar2 = (ulonglong)(iVar1 + 1);
  }
  void_cdecl_ads_cdockareatabbar_setcurrentinde(param_1,uVar2);
LAB_140593454:
  QWidget::updateGeometry(param_1);
  if (DAT_1414ef3c0 != (local_38 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_38 ^ (ulonglong)auStackY_98);
  }
  return;
}

