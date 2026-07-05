/**
 * Function: void_cdecl_ads_cdockareawidget_setcurrentinde
 * Address:  140572e10
 * Signature: undefined void_cdecl_ads_cdockareawidget_setcurrentinde(void)
 * Body size: 438 bytes
 */


void void_cdecl_ads_cdockareawidget_setcurrentinde(longlong param_1,uint param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  QDebug *pQVar6;
  longlong lVar7;
  QMessageLogger local_60 [32];
  QDebug local_40 [8];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar4 = FUN_140595b10(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  if (((int)param_2 < 0) || (iVar3 = FUN_140590a90(uVar4), iVar3 <= (int)param_2)) {
    QMessageLogger::QMessageLogger(local_60,(char *)0x0,0,(char *)0x0);
    QMessageLogger::warning(local_60);
    pQVar6 = QDebug::operator<<(local_40,"void __cdecl ads::CDockAreaWidget::setCurrentIndex(int)");
    pQVar6 = QDebug::operator<<(pQVar6,"Invalid index");
    QTextStream::operator<<(*(QTextStream **)pQVar6,param_2);
    if ((*(QTextStream **)pQVar6)[0x30] == (QTextStream)0x1) {
      QTextStream::operator<<(*(QTextStream **)pQVar6,' ');
    }
    QDebug::~QDebug(local_40);
    return;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  lVar1 = *(longlong *)(lVar7 + 0x28);
  if ((longlong)(ulonglong)param_2 < *(longlong *)(lVar7 + 0x18)) {
    lVar5 = (ulonglong)param_2 * 0x10;
    piVar2 = *(int **)(*(longlong *)(lVar7 + 0x10) + lVar5);
    if (piVar2 != (int *)0x0) {
      lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar5 + 8);
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      lVar7 = 0;
      if (piVar2[1] != 0) {
        lVar7 = lVar5;
      }
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        FUN_140b68ba8();
      }
      goto joined_r0x000140572f22;
    }
    lVar7 = 0;
    if (lVar1 != 0) goto LAB_140572f3b;
  }
  else {
    lVar7 = 0;
joined_r0x000140572f22:
    if (lVar1 != lVar7) goto LAB_140572f3b;
  }
  if ((*(byte *)(*(longlong *)(lVar7 + 0x20) + 10) & 1) == 0) {
    return;
  }
LAB_140572f3b:
  FUN_140291700(param_1,param_2);
  void_cdecl_ads_cdockareatabbar_setcurrentinde(uVar4,param_2);
  FUN_140574e00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),param_2);
  QWidget::show(*(QWidget **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x28));
  uVar4 = FUN_1405968c0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  QWidget::windowTitle(*(QWidget **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x28));
  FUN_14059a2b0(uVar4,local_60);
  QString::~QString((QString *)local_60);
  FUN_140291770(param_1,param_2);
  return;
}

