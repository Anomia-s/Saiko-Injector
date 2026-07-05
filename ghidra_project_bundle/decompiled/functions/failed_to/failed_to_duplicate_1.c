/**
 * Function: failed_to_duplicate_1
 * Address:  1405afdf0
 * Signature: undefined failed_to_duplicate_1(void)
 * Body size: 702 bytes
 */


void failed_to_duplicate_1(int param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  QString *pQVar3;
  uint uVar4;
  undefined4 in_stack_ffffffffffffff08;
  undefined2 uVar5;
  QString local_f0 [16];
  longlong local_e0;
  longlong local_d8;
  QString local_d0 [24];
  QString local_b8 [24];
  QString local_a0 [24];
  QString local_88 [16];
  longlong local_78;
  QString *local_70;
  char *local_68;
  undefined8 local_60;
  QFileInfo local_50 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    local_70 = (QString *)(param_2 + 0x18);
    QFileInfo::QFileInfo(local_50,local_70);
    QFileInfo::completeBaseName(local_50);
    QFileInfo::suffix(local_50);
    local_d8 = param_2;
    QFileInfo::absolutePath(local_50);
    uVar4 = 1;
    do {
      QString::QString(local_a0,local_d0);
      local_68 = "_copy";
      local_60 = 5;
      QString::operator+=(local_a0,(QString *)&local_68);
      if (1 < uVar4) {
        QString::number((int)(QString *)&local_68,uVar4);
        QString::append(local_a0,(QString *)&local_68);
        QString::~QString((QString *)&local_68);
      }
      if (local_78 != 0) {
        QString::QString((QString *)&local_68,0x2e);
        QString::append((QString *)&local_68,local_88);
        QString::append(local_a0,(QString *)&local_68);
        QString::~QString((QString *)&local_68);
      }
      QString::QString((QString *)&local_68,local_b8);
      QString::operator+=((QString *)&local_68,0x2f);
      pQVar3 = QString::append((QString *)&local_68,local_a0);
      QString::QString(local_f0,pQVar3);
      QString::~QString((QString *)&local_68);
      bVar2 = QFile::copy(local_70,local_f0);
      uVar5 = (undefined2)((uint)in_stack_ffffffffffffff08 >> 0x10);
      if (bVar2) {
        QString::~QString(local_a0);
        goto LAB_1405affb7;
      }
      QString::~QString(local_f0);
      QString::~QString(local_a0);
      uVar5 = (undefined2)((uint)in_stack_ffffffffffffff08 >> 0x10);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x65);
    QString::QString(local_f0);
LAB_1405affb7:
    QString::~QString(local_b8);
    QString::~QString(local_88);
    QString::~QString(local_d0);
    QFileInfo::~QFileInfo(local_50);
    lVar1 = local_d8;
    if (local_e0 == 0) {
      QString::QString(local_88,"Failed to duplicate \'%1\'.");
      QFileInfo::QFileInfo((QFileInfo *)&local_68,local_70);
      QFileInfo::fileName((QFileInfo *)&local_68);
      QString::arg(local_88,local_d0,local_b8,0,CONCAT22(uVar5,0x20));
      QString::QString(local_a0,"Error");
      QMessageBox::warning(*(undefined8 *)(lVar1 + 0x10),local_a0,local_d0,0x400,0);
      QString::~QString(local_a0);
      QString::~QString(local_d0);
      QString::~QString(local_b8);
      QFileInfo::~QFileInfo((QFileInfo *)&local_68);
      QString::~QString(local_88);
    }
    else {
      FUN_1402a2500(*(undefined8 *)(local_d8 + 0x10));
    }
    QString::~QString(local_f0);
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    QString::~QString((QString *)(param_2 + 0x18));
    thunk_FUN_140b68ba8(param_2,0x30);
    return;
  }
  return;
}

