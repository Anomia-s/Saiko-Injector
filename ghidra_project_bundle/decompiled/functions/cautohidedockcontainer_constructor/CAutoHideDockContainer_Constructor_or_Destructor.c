/**
 * Function: CAutoHideDockContainer_Constructor_or_Destructor
 * Address:  140571a30
 * Signature: void __fastcall CAutoHideDockContainer_Constructor_or_Destructor(QObject * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Body size: 339 bytes
 */


void ads::CAutoHideDockContainer::CAutoHideDockContainer_Constructor_or_Destructor
               (QObject *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  QObject *pQVar4;
  QObject *pQVar5;
  QObject QVar6;
  
  *param_1 = (QObject)&vftable;
  param_1[2] = (QObject)&vftable;
  QObject::removeEventFilter(*(QObject **)self_exref,(QObject *)param_1);
  pQVar4 = (QObject *)QObject::parent(param_1);
  if (pQVar4 != (QObject *)0x0) {
LAB_140571aa0:
    pQVar5 = QMetaObject::cast((QMetaObject *)&DAT_140dffa40,(QObject *)pQVar4);
    if (pQVar5 == (QObject *)0x0) goto code_r0x000140571aae;
    pQVar4 = (QObject *)QObject::parent(param_1);
    while (pQVar5 = QMetaObject::cast((QMetaObject *)&DAT_140dffa40,(QObject *)pQVar4),
          pQVar5 == (QObject *)0x0) {
      pQVar4 = (QObject *)QObject::parent(pQVar4);
    }
    FUN_14056d890(pQVar5,param_1);
  }
LAB_140571b04:
  QVar6 = param_1[5];
  lVar1 = *(longlong *)((longlong)QVar6 + 0x38);
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
      (plVar2 = *(longlong **)((longlong)QVar6 + 0x40), plVar2 != (longlong *)0x0)) &&
     (*(int *)(lVar1 + 4) != 0)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    QVar6 = param_1[5];
    if (QVar6 == (QObject)0x0) goto LAB_140571b6d;
  }
  piVar3 = *(int **)((longlong)QVar6 + 0x38);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(longlong *)((longlong)QVar6 + 0x38) != 0)) {
      FUN_140b68ba8(*(longlong *)((longlong)QVar6 + 0x38));
    }
  }
  thunk_FUN_140b68ba8(QVar6,0x50);
LAB_140571b6d:
                    /* WARNING: Could not recover jumptable at 0x000140571b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QFrame::~QFrame((QFrame *)param_1);
  return;
code_r0x000140571aae:
  pQVar4 = (QObject *)QObject::parent(pQVar4);
  if (pQVar4 == (QObject *)0x0) goto LAB_140571b04;
  goto LAB_140571aa0;
}

