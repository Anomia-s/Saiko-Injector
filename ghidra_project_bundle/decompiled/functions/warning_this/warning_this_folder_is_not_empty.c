/**
 * Function: warning_this_folder_is_not_empty
 * Address:  140286290
 * Signature: void __thiscall warning_this_folder_is_not_empty(void * this)
 * Body size: 680 bytes
 */


void __thiscall warning_this_folder_is_not_empty(void *this)

{
  bool bVar1;
  StandardButton SVar2;
  __int64 _Var3;
  QChar *pQVar4;
  QChar *pQVar5;
  ulonglong uVar6;
  QString local_c0 [24];
  QString local_a8 [16];
  longlong local_98;
  QString local_90 [16];
  longlong local_80;
  QString local_78 [16];
  ulonglong local_68;
  QDir local_60 [8];
  longlong local_58;
  QChar *local_50;
  longlong local_40;
  QChar *local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(char *)((longlong)this + 0x91) != '\x01') {
    return;
  }
  if (*(char *)((longlong)this + 0x90) == '\0') {
    QString::QString((QString *)&local_40,
                     "You are about to create a project in a non-empty folder.\nThe entire contents of this folder will be treated as project resources.\n\nAre you sure you wish to continue?"
                    );
    QString::QString((QString *)&local_58,"Warning: This folder is not empty");
    SVar2 = QMessageBox::warning(this,&local_58,&local_40,0x14000,0x10000);
    QString::~QString((QString *)&local_58);
    QString::~QString((QString *)&local_40);
    if (SVar2 != 0x4000) {
      return;
    }
  }
  bVar1 = QAbstractButton::isChecked(*(QAbstractButton **)((longlong)this + 0x38));
  if (bVar1) {
    FUN_140284650(local_a8);
    QLineEdit::text(*(QLineEdit **)((longlong)this + 0x30));
    QDir::fromNativeSeparators((QString *)&local_40);
    QDir::cleanPath(local_78);
    QString::~QString((QString *)&local_40);
    _Var3 = QString::lastIndexOf(local_78,0x2f,1);
    if ((int)(uint)_Var3 < 1) {
      QString::QString(local_90);
    }
    else {
      uVar6 = (ulonglong)((uint)_Var3 & 0x7fffffff);
      if (uVar6 < local_68) {
        pQVar4 = QString::begin(local_78);
        QString::QString(local_90,pQVar4,uVar6);
      }
      else {
        QString::QString(local_90,local_78);
      }
    }
    pQVar4 = QString::begin(local_a8);
    pQVar5 = QString::begin(local_90);
    if (local_80 == local_98) {
      local_40 = local_98;
      local_58 = local_98;
      local_50 = pQVar5;
      local_38 = pQVar4;
      bVar1 = QtPrivate::equalStrings(&local_58,&local_40);
      if (bVar1) {
        FUN_140284650(&local_40);
        QDir::QDir((QDir *)&local_58,(QString *)&local_40);
        bVar1 = QDir::exists((QDir *)&local_58);
        QDir::~QDir((QDir *)&local_58);
        if (!bVar1) {
          QString::QString((QString *)&local_58);
          QDir::QDir(local_60,(QString *)&local_58);
          bVar1 = QDir::mkpath(local_60,(QString *)&local_40);
          QDir::~QDir(local_60);
          QString::~QString((QString *)&local_58);
          QString::~QString((QString *)&local_40);
          QString::~QString(local_90);
          QString::~QString(local_78);
          QString::~QString(local_c0);
          QString::~QString(local_a8);
          if (!bVar1) {
            QString::QString((QString *)&local_40,"Failed to create the Luduvo project folder.");
            QString::QString((QString *)&local_58,"Error");
            QMessageBox::critical(this,&local_58,&local_40,0x400,0);
            QString::~QString((QString *)&local_58);
            QString::~QString((QString *)&local_40);
            return;
          }
          goto LAB_14028646e;
        }
        QString::~QString((QString *)&local_40);
      }
    }
    QString::~QString(local_90);
    QString::~QString(local_78);
    QString::~QString(local_c0);
    QString::~QString(local_a8);
  }
LAB_14028646e:
  QDialog::accept(this);
  return;
}

