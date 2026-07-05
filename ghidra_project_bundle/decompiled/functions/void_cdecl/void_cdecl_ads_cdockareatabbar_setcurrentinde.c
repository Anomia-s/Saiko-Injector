/**
 * Function: void_cdecl_ads_cdockareatabbar_setcurrentinde
 * Address:  1405931c0
 * Signature: undefined void_cdecl_ads_cdockareatabbar_setcurrentinde(void)
 * Body size: 239 bytes
 */


void void_cdecl_ads_cdockareatabbar_setcurrentinde(QWidget *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  QDebug *pQVar3;
  QMessageLogger local_50 [32];
  QDebug local_30 [8];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_2 != *(int *)((longlong)param_1[1].QPaintDevice + 0x20)) {
    if (-2 < param_2) {
      plVar1 = *(longlong **)((longlong)param_1[1].QPaintDevice + 0x18);
      iVar2 = (**(code **)(*plVar1 + 0x90))(plVar1);
      if (param_2 < iVar2 + -1) {
        FUN_140290840(param_1,param_2);
        *(int *)((longlong)param_1[1].QPaintDevice + 0x20) = param_2;
        FUN_140592dc0(param_1[1].QPaintDevice);
        QWidget::updateGeometry(param_1);
        FUN_1402908b0(param_1,param_2);
        return;
      }
    }
    QMessageLogger::QMessageLogger(local_50,(char *)0x0,0,(char *)0x0);
    QMessageLogger::warning(local_50);
    pQVar3 = QDebug::operator<<(local_30,"void __cdecl ads::CDockAreaTabBar::setCurrentIndex(int)");
    pQVar3 = QDebug::operator<<(pQVar3,"Invalid index");
    QTextStream::operator<<(*(QTextStream **)pQVar3,param_2);
    if ((*(QTextStream **)pQVar3)[0x30] == (QTextStream)0x1) {
      QTextStream::operator<<(*(QTextStream **)pQVar3,' ');
    }
    QDebug::~QDebug(local_30);
  }
  return;
}

