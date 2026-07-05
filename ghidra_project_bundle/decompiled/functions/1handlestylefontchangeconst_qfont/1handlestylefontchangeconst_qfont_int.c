/**
 * Function: 1handlestylefontchangeconst_qfont_int
 * Address:  14058d600
 * Signature: void __thiscall 1handlestylefontchangeconst_qfont_int(void * this, QObject * param_1)
 * Body size: 2060 bytes
 */


void __thiscall _handlestylefontchangeconst_qfont_int(void *this,QObject *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  QString *pQVar4;
  longlong lVar5;
  byte bVar6;
  ExternalRefCountData *pEVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  QString *pQVar12;
  int iVar13;
  char *pcVar14;
  undefined4 uVar15;
  int *local_78;
  QString *pQStack_70;
  longlong local_68;
  QObject local_58 [8];
  QObject local_50 [8];
  QObject local_48 [8];
  QObject local_40 [8];
  QObject local_38 [8];
  
  if ((*(longlong *)((longlong)this + 0x150) != 0) &&
     (*(longlong **)((longlong)this + 0x158) != (longlong *)0x0 &&
      *(int *)(*(longlong *)((longlong)this + 0x150) + 4) != 0)) {
    (**(code **)(**(longlong **)((longlong)this + 0x158) + 0x110))();
    QObject::disconnect(*(QObject **)((longlong)this + 0x158),(char *)0x0,this,(char *)0x0);
    FUN_14074b900(this,0x80a,0,0);
    FUN_14074b900(this,0x802,0,0);
  }
  if (param_1 == (QObject *)0x0) {
    pEVar7 = (ExternalRefCountData *)0x0;
  }
  else {
    pEVar7 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
  }
  piVar2 = *(int **)((longlong)this + 0x150);
  *(ExternalRefCountData **)((longlong)this + 0x150) = pEVar7;
  *(QObject **)((longlong)this + 0x158) = param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_140b68ba8();
    }
    pEVar7 = *(ExternalRefCountData **)((longlong)this + 0x150);
  }
  if (((pEVar7 == (ExternalRefCountData *)0x0) || (*(int *)(pEVar7 + 4) == 0)) ||
     (*(longlong *)((longlong)this + 0x158) == 0)) {
    FUN_14074b730(this,0xfa1,0);
    (**(code **)(*(longlong *)this + 0x308))(this,(longlong)this + 0x178);
    (**(code **)(*(longlong *)this + 0x3b0))(this,(longlong)this + 0x188);
    FUN_14074b960(this,0x840,&DAT_1413a2ad6);
    FUN_14074b730(this,0x843,0);
    FUN_1402a3360((longlong)this + 0xe0);
    *(char **)((longlong)this + 0xf8) =
         "_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  }
  else {
    FUN_14074b900(this,0x7d5,0,0);
    lVar8 = (**(code **)(**(longlong **)((longlong)this + 0x158) + 0x60))();
    if (lVar8 == 0) {
      uVar15 = (**(code **)(**(longlong **)((longlong)this + 0x158) + 0x68))();
      FUN_14074b730(this,0xfa1,uVar15);
    }
    else {
      uVar9 = (**(code **)(**(longlong **)((longlong)this + 0x158) + 0x60))();
      FUN_14074b960(this,0xfa6,uVar9);
    }
    (**(code **)(**(longlong **)((longlong)this + 0x158) + 0x110))();
    if ((*(longlong *)((longlong)this + 0x150) == 0) ||
       (*(int *)(*(longlong *)((longlong)this + 0x150) + 4) == 0)) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = *(char **)((longlong)this + 0x158);
    }
    QObject::connect(local_38,pcVar11,(QObject *)"2colorChanged(const QColor &, int)",this,
                     0x413959a1);
    QMetaObject::Connection::~Connection((Connection *)local_38);
    if ((*(longlong *)((longlong)this + 0x150) == 0) ||
       (*(int *)(*(longlong *)((longlong)this + 0x150) + 4) == 0)) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = *(char **)((longlong)this + 0x158);
    }
    QObject::connect(local_40,pcVar11,(QObject *)"2eolFillChanged(bool, int)",this,0x413957e9);
    QMetaObject::Connection::~Connection((Connection *)local_40);
    if ((*(longlong *)((longlong)this + 0x150) == 0) ||
       (*(int *)(*(longlong *)((longlong)this + 0x150) + 4) == 0)) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = *(char **)((longlong)this + 0x158);
    }
    QObject::connect(local_48,pcVar11,(QObject *)"2fontChanged(const QFont &, int)",this,0x41395955)
    ;
    QMetaObject::Connection::~Connection((Connection *)local_48);
    if ((*(longlong *)((longlong)this + 0x150) == 0) ||
       (*(int *)(*(longlong *)((longlong)this + 0x150) + 4) == 0)) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = *(char **)((longlong)this + 0x158);
    }
    QObject::connect(local_50,pcVar11,(QObject *)"2paperChanged(const QColor &, int)",this,
                     0x413959ce);
    QMetaObject::Connection::~Connection((Connection *)local_50);
    iVar13 = 0;
    if ((*(longlong *)((longlong)this + 0x150) == 0) ||
       (*(int *)(*(longlong *)((longlong)this + 0x150) + 4) == 0)) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = *(char **)((longlong)this + 0x158);
    }
    pcVar14 = "1handlePropertyChange(const char *, const char *)";
    uVar15 = 0;
    QObject::connect(local_58,pcVar11,(QObject *)"2propertyChanged(const char *, const char *)",this
                     ,0x41398ef6);
    QMetaObject::Connection::~Connection((Connection *)local_58);
    FUN_14074b940(this,0xfa4,"fold","1",pcVar14,uVar15);
    FUN_14074b940(this,0xfa4,"fold.html","1");
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xd0))
                        (*(longlong **)((longlong)this + 0x158),1);
    pcVar11 = "";
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_1413a2ad6;
    }
    FUN_14074b940(this,0xfa5,0,puVar10);
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xd0))
                        (*(longlong **)((longlong)this + 0x158),2);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_1413a2ad6;
    }
    FUN_14074b940(this,0xfa5,1,puVar10);
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xd0))
                        (*(longlong **)((longlong)this + 0x158),3);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_1413a2ad6;
    }
    FUN_14074b940(this,0xfa5,2,puVar10);
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xd0))
                        (*(longlong **)((longlong)this + 0x158),4);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_1413a2ad6;
    }
    FUN_14074b940(this,0xfa5,3,puVar10);
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xd0))
                        (*(longlong **)((longlong)this + 0x158),5);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_1413a2ad6;
    }
    FUN_14074b940(this,0xfa5,4,puVar10);
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xd0))
                        (*(longlong **)((longlong)this + 0x158),6);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_1413a2ad6;
    }
    FUN_14074b940(this,0xfa5,5,puVar10);
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xd0))
                        (*(longlong **)((longlong)this + 0x158),7);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_1413a2ad6;
    }
    FUN_14074b940(this,0xfa5,6,puVar10);
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xd0))
                        (*(longlong **)((longlong)this + 0x158),8);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_1413a2ad6;
    }
    FUN_14074b940(this,0xfa5,7,puVar10);
    puVar10 = (undefined1 *)
              (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xd0))
                        (*(longlong **)((longlong)this + 0x158),9);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_1413a2ad6;
    }
    FUN_14074b940(this,0xfa5,8,puVar10);
    FUN_14058de20(this,0x20);
    do {
      (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xe0))
                (*(longlong **)((longlong)this + 0x158),(QString *)&local_78,iVar13);
      lVar8 = local_68;
      QString::~QString((QString *)&local_78);
      if (lVar8 != 0) {
        FUN_14058de20(this,iVar13);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0x100);
    (**(code **)(**(longlong **)((longlong)this + 0x158) + 0x118))();
    cVar1 = *(char *)((longlong)this + 0x1b0);
    if (cVar1 == '\x01') {
      if ((*(longlong *)((longlong)this + 0x150) == 0) ||
         (*(longlong **)((longlong)this + 0x158) == (longlong *)0x0 ||
          *(int *)(*(longlong *)((longlong)this + 0x150) + 4) == 0)) {
        pcVar11 = QByteArray::data((QByteArray *)((longlong)this + 0x198));
      }
      else {
        pcVar11 = (char *)(**(code **)(**(longlong **)((longlong)this + 0x158) + 0x70))();
      }
    }
    FUN_14074b960(this,0x840,pcVar11);
    *(char *)((longlong)this + 0x1b0) = cVar1;
    (**(code **)(**(longlong **)((longlong)this + 0x158) + 0x78))
              (*(longlong **)((longlong)this + 0x158),&local_78);
    lVar5 = local_68;
    pQVar4 = pQStack_70;
    piVar3 = local_78;
    local_68 = 0;
    piVar2 = *(int **)((longlong)this + 0xe0);
    pQVar12 = *(QString **)((longlong)this + 0xe8);
    local_78 = (int *)0x0;
    pQStack_70 = (QString *)0x0;
    *(int **)((longlong)this + 0xe0) = piVar3;
    *(QString **)((longlong)this + 0xe8) = pQVar4;
    lVar8 = *(longlong *)((longlong)this + 0xf0);
    *(longlong *)((longlong)this + 0xf0) = lVar5;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        if (lVar8 != 0) {
          lVar8 = lVar8 * 0x18;
          do {
            QString::~QString(pQVar12);
            pQVar12 = pQVar12 + 0x18;
            lVar8 = lVar8 + -0x18;
          } while (lVar8 != 0);
        }
        free(piVar2);
      }
    }
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      UNLOCK();
      if (*local_78 == 0) {
        if (local_68 != 0) {
          lVar8 = local_68 * 0x18;
          pQVar12 = pQStack_70;
          do {
            QString::~QString(pQVar12);
            pQVar12 = pQVar12 + 0x18;
            lVar8 = lVar8 + -0x18;
          } while (lVar8 != 0);
        }
        free(local_78);
      }
    }
    pcVar14 = (char *)(**(code **)(**(longlong **)((longlong)this + 0x158) + 0x128))();
    pcVar11 = "_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    if (pcVar14 != (char *)0x0) {
      pcVar11 = pcVar14;
    }
    *(char **)((longlong)this + 0xf8) = pcVar11;
    bVar6 = (**(code **)(**(longlong **)((longlong)this + 0x158) + 0xa8))();
    FUN_14074b730(this,0x843,bVar6 ^ 1);
    (**(code **)(*(longlong *)this + 0x1c8))(this,0,0xffffffff);
  }
  return;
}

