/**
 * Function: CTitleBarButton_Constructor_or_Destructor
 * Address:  140596140
 * Signature: void __fastcall CTitleBarButton_Constructor_or_Destructor(QWidget * param_1)
 * Body size: 945 bytes
 */


void ads::CTitleBarButton::CTitleBarButton_Constructor_or_Destructor(QWidget *param_1)

{
  int iVar1;
  int *piVar2;
  QWidget *pQVar3;
  QObject *this;
  QWidget *pQVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  __int64 _Var11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  QWidget *local_80 [3];
  QArrayData *local_68;
  undefined8 *local_60;
  longlong local_58;
  QWidget *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar6 = FUN_140593670(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68));
  if (lVar6 == 0) {
    return;
  }
  plVar7 = (longlong *)FUN_140587500(lVar6);
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar6 + 0x98) != 0) {
    puVar13 = (undefined8 *)(lVar6 + 0x88);
    piVar2 = (int *)*puVar13;
    if ((piVar2 == (int *)0x0) || (1 < *piVar2)) {
      FUN_140096f80(puVar13,0,0);
      puVar12 = *(undefined8 **)(lVar6 + 0x90);
      if (*(int **)(lVar6 + 0x88) != (int *)0x0) {
        iVar5 = **(int **)(lVar6 + 0x88);
        goto joined_r0x0001405961df;
      }
LAB_1405961e1:
      FUN_140096f80(puVar13,0,0);
      puVar8 = *(undefined8 **)(lVar6 + 0x90);
    }
    else {
      puVar12 = *(undefined8 **)(lVar6 + 0x90);
      iVar5 = *piVar2;
joined_r0x0001405961df:
      puVar8 = puVar12;
      if (1 < iVar5) goto LAB_1405961e1;
    }
    lVar6 = *(longlong *)(lVar6 + 0x98);
    for (; puVar12 != puVar8 + lVar6; puVar12 = puVar12 + 1) {
      pQVar3 = (QWidget *)*puVar12;
      QLayout::removeWidget(*(QLayout **)(*(longlong *)(param_1 + 0x28) + 0x58),pQVar3);
      if (pQVar3 != (QWidget *)0x0) {
        (**(code **)(*(longlong *)pQVar3 + 0x18))(pQVar3,1);
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(lVar6 + 0x98) != 0) {
      piVar2 = *(int **)(lVar6 + 0x88);
      if (piVar2 == (int *)0x0) {
        _Var11 = 0;
      }
      else {
        if (*piVar2 < 2) {
          *(undefined8 *)(lVar6 + 0x98) = 0;
          goto LAB_1405962fc;
        }
        _Var11 = *(__int64 *)(piVar2 + 2);
      }
      pvVar9 = QArrayData::allocate(&local_68,8,8,_Var11,1);
      piVar2 = *(int **)(lVar6 + 0x88);
      *(QArrayData **)(lVar6 + 0x88) = local_68;
      *(void **)(lVar6 + 0x90) = pvVar9;
      *(undefined8 *)(lVar6 + 0x98) = 0;
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          free(piVar2);
        }
      }
    }
  }
LAB_1405962fc:
  (**(code **)(*plVar7 + 0x170))(plVar7,&local_68);
  if (local_58 == 0) goto LAB_1405964e3;
  lVar6 = *(longlong *)(param_1 + 0x28);
  if ((*(longlong *)(lVar6 + 8) == 0) || (*(int *)(*(longlong *)(lVar6 + 8) + 4) == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar6 + 0x10);
  }
  iVar5 = (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x88))(*(longlong **)(lVar6 + 0x58),uVar10);
  if ((local_68 == (QArrayData *)0x0) || (1 < *(int *)local_68)) {
    FUN_140096f80(&local_68,0,0,0);
    if (local_68 != (QArrayData *)0x0) {
      iVar1 = *(int *)local_68;
      goto joined_r0x000140596377;
    }
LAB_140596389:
    puVar13 = local_60;
    FUN_140096f80(&local_68,0,0,0);
  }
  else {
    iVar1 = *(int *)local_68;
joined_r0x000140596377:
    puVar13 = local_60;
    if (1 < iVar1) goto LAB_140596389;
  }
  for (; puVar13 != local_60 + local_58; puVar13 = puVar13 + 1) {
    this = (QObject *)*puVar13;
    local_50 = (QWidget *)FUN_140b65d30(0x30);
    QToolButton::QToolButton((QToolButton *)local_50,param_1);
    (((QAbstractButton *)&local_50->QObject)->QWidget).QObject = (QObject)&vftable;
    local_50->QPaintDevice = (QPaintDevice)&vftable;
    *(undefined1 *)&local_50[1].QPaintDevice = 1;
    FUN_1402765c0(0x10000);
    local_50[1].QPaintDevice.field_0x1 = 0;
    *(undefined4 *)&local_50[1].QPaintDevice.field_0x4 = 0;
    QWidget::setFocusPolicy(local_50,0);
    QToolButton::setDefaultAction((QToolButton *)local_50,(QAction *)this);
    QToolButton::setAutoRaise((QToolButton *)local_50,true);
    QToolButton::setPopupMode((QToolButton *)local_50,2);
    QObject::objectName(this);
    pQVar4 = local_50;
    QObject::doSetObjectName(&local_50->QObject,(QString *)local_80);
    QString::~QString((QString *)local_80);
    QBoxLayout::insertWidget
              (*(QBoxLayout **)(*(longlong *)(param_1 + 0x28) + 0x58),iVar5,pQVar4,0,0);
    local_80[0] = pQVar4;
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x88);
    FUN_14027aff0(puVar12,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),(QString *)local_80)
    ;
    if (((int *)*puVar12 == (int *)0x0) || (1 < *(int *)*puVar12)) {
      FUN_140096f80(puVar12,0,0);
    }
    iVar5 = iVar5 + 1;
  }
LAB_1405964e3:
  if (local_68 != (QArrayData *)0x0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (*(int *)local_68 == 0) {
      free(local_68);
    }
  }
  return;
}

