/**
 * Function: studio_graphicsapi
 * Address:  140093150
 * Signature: undefined studio_graphicsapi(void)
 * Body size: 981 bytes
 */


void studio_graphicsapi(longlong param_1,QString *param_2)

{
  QString *this;
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  QChar *pQVar4;
  QChar *pQVar5;
  undefined4 in_stack_ffffffffffffff18;
  undefined2 uVar6;
  QString local_e0 [24];
  char *local_c8;
  undefined8 local_c0;
  QString local_b8 [16];
  int *local_a8;
  int *local_a0;
  QChar *local_98;
  int *local_80;
  wchar_t *local_78;
  undefined8 local_70;
  int *local_68;
  QChar *local_60;
  int *local_58;
  int *local_50;
  QChar *local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  uVar6 = (undefined2)((uint)in_stack_ffffffffffffff18 >> 0x10);
  local_30 = 0xfffffffffffffffe;
  QString::QString(local_e0,param_2);
  FUN_14008c4b0(local_b8,local_e0);
  this = (QString *)(param_1 + 0x43db8);
  pQVar4 = QString::begin(this);
  piVar1 = *(int **)(param_1 + 0x43dc8);
  pQVar5 = QString::begin(local_b8);
  if (local_a8 == piVar1) {
    local_a0 = piVar1;
    local_98 = pQVar4;
    local_68 = piVar1;
    local_60 = pQVar5;
    bVar3 = QtPrivate::equalStrings(&local_68,&local_a0);
  }
  else {
    bVar3 = false;
  }
  QString::operator=(this,local_b8);
  QSettings::QSettings((QSettings *)&local_68,(QObject *)0x0);
  QVariant::QVariant((QVariant *)&local_a0,this);
  local_c8 = "studio/graphicsApi";
  local_c0 = 0x12;
  QSettings::setValue((QSettings *)&local_68,&local_c8,(QVariant *)&local_a0);
  QVariant::~QVariant((QVariant *)&local_a0);
  QSettings::~QSettings((QSettings *)&local_68);
  if (*(longlong *)(param_1 + 0x43cd0) != 0) {
    FUN_140299bc0(*(longlong *)(param_1 + 0x43cd0),this);
  }
  if (bVar3 == false) {
    local_68 = (int *)0x0;
    local_60 = (QChar *)0x1413a53b0;
    local_58 = (int *)0x3e;
    QString::QString((QString *)&local_a0,(QArrayDataPointer<char16_t> *)&local_68);
    local_50 = (int *)0x0;
    local_48 = (QChar *)0x1413a488e;
    local_40 = 0x10;
    QString::QString((QString *)&local_80,(QArrayDataPointer<char16_t> *)&local_50);
    uVar6 = 0;
    QMessageBox::information(param_1,&local_80,&local_a0,0x400,0);
    QString::~QString((QString *)&local_80);
    if (local_50 != (int *)0x0) {
      LOCK();
      *local_50 = *local_50 + -1;
      UNLOCK();
      if (*local_50 == 0) {
        free(local_50);
      }
    }
    QString::~QString((QString *)&local_a0);
    if (local_68 != (int *)0x0) {
      LOCK();
      *local_68 = *local_68 + -1;
      UNLOCK();
      if (*local_68 == 0) {
        free(local_68);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x43ce8) == 0) goto LAB_14009350c;
  local_80 = (int *)0x0;
  local_78 = L"d3d12";
  local_70 = 5;
  QString::QString((QString *)&local_68,(QArrayDataPointer<char16_t> *)&local_80);
  pQVar4 = QString::begin((QString *)&local_68);
  piVar1 = local_58;
  local_48 = QString::begin(this);
  if (*(int **)(param_1 + 0x43dc8) == piVar1) {
    local_a0 = piVar1;
    local_50 = piVar1;
    local_98 = pQVar4;
    bVar3 = QtPrivate::equalStrings(&local_50,&local_a0);
    if (!bVar3) goto LAB_1400933b4;
    local_50 = (int *)0x0;
    local_48 = (QChar *)0x1413a523a;
    local_40 = 5;
    local_31 = 1;
    QString::QString((QString *)&local_a0,(QArrayDataPointer<char16_t> *)&local_50);
  }
  else {
LAB_1400933b4:
    local_50 = (int *)0x0;
    local_48 = (QChar *)0x1413a3760;
    local_40 = 6;
    QString::QString((QString *)&local_a0,(QArrayDataPointer<char16_t> *)&local_50);
  }
  if (local_50 != (int *)0x0) {
    LOCK();
    *local_50 = *local_50 + -1;
    UNLOCK();
    if (*local_50 == 0) {
      free(local_50);
    }
  }
  QString::~QString((QString *)&local_68);
  if (local_80 != (int *)0x0) {
    LOCK();
    *local_80 = *local_80 + -1;
    UNLOCK();
    if (*local_80 == 0) {
      free(local_80);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x43ce8);
  local_50 = (int *)0x0;
  local_48 = (QChar *)0x1413a537e;
  local_40 = 0x10;
  QString::QString((QString *)&local_80,(QArrayDataPointer<char16_t> *)&local_50);
  QString::arg((QString *)&local_80,&local_68,&local_a0,0,CONCAT22(uVar6,0x20));
  FUN_1402826c0(uVar2,&local_68);
  QString::~QString((QString *)&local_68);
  QString::~QString((QString *)&local_80);
  if (local_50 != (int *)0x0) {
    LOCK();
    *local_50 = *local_50 + -1;
    UNLOCK();
    if (*local_50 == 0) {
      free(local_50);
    }
  }
  if (*(longlong *)(param_1 + 0x43cd0) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x43ce8);
    local_80 = (int *)0x0;
    local_78 = L"Graphics API changes take effect the next time the viewport renderer is created.";
    local_70 = 0x50;
    QString::QString((QString *)&local_68,(QArrayDataPointer<char16_t> *)&local_80);
    FUN_1402826c0(uVar2,&local_68);
    QString::~QString((QString *)&local_68);
    if (local_80 != (int *)0x0) {
      LOCK();
      *local_80 = *local_80 + -1;
      UNLOCK();
      if (*local_80 == 0) {
        free(local_80);
      }
    }
  }
  QString::~QString((QString *)&local_a0);
LAB_14009350c:
  QString::~QString(local_b8);
  return;
}

