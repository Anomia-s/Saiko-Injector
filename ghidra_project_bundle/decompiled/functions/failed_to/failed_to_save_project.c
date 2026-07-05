/**
 * Function: failed_to_save_project
 * Address:  140092600
 * Signature: void __thiscall failed_to_save_project(void * this, QCloseEvent * param_1)
 * Body size: 585 bytes
 */


void __thiscall failed_to_save_project(void *this,QCloseEvent *param_1)

{
  longlong lVar1;
  StandardButton SVar2;
  ulonglong uVar3;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  QSettings local_88 [16];
  QString local_78 [32];
  QString local_58 [24];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if ((*(longlong *)((longlong)this + 0x118) != 0) && (*(char *)((longlong)this + 0x138) != '\0')) {
    QString::QString(local_78,"Do you want to save changes before exiting?");
    QString::QString(local_58,"Unsaved Changes");
    SVar2 = QMessageBox::warning(this,local_58,local_78,0x414000,0x4000);
    QString::~QString(local_58);
    QString::~QString(local_78);
    if (SVar2 == 0x4000) {
      uVar3 = ldv::scene::FileSink::FileSink_Constructor_or_Destructor
                        ((undefined8 *)((longlong)this + 0x28));
      if ((char)uVar3 == '\0') {
        lVar1 = *(longlong *)((longlong)this + 0x43ce8);
        if (lVar1 != 0) {
          QString::QString(local_78,"Failed to save project.");
          FUN_140282ac0(lVar1,local_78);
          QString::~QString(local_78);
        }
        QString::QString(local_78,
                         "Studio could not save the project. The close operation was canceled.");
        QString::QString(local_58,"Save Failed");
        QMessageBox::critical(this,local_58,local_78,0x400,0);
        QString::~QString(local_58);
        QString::~QString(local_78);
        param_1[0xc] = (QCloseEvent)0x0;
        return;
      }
    }
    else if (SVar2 == 0x10000) {
      FUN_14027fd70((undefined8 *)((longlong)this + 0x28));
    }
    else if (SVar2 == 0x400000) {
      param_1[0xc] = (QCloseEvent)0x0;
      return;
    }
  }
  if (*(char *)((longlong)this + 0x140) != '\0') {
    FUN_140092070(this);
  }
  QSettings::QSettings(local_88,(QObject *)0x0);
  userversion(*(undefined8 *)((longlong)this + 0x43cb8),local_58,0);
  QVariant::QVariant((QVariant *)local_78,(QByteArray *)local_58);
  local_a8 = "studio/dockState";
  local_a0 = 0x10;
  QSettings::setValue(local_88,&local_a8,(QVariant *)local_78);
  QVariant::~QVariant((QVariant *)local_78);
  QByteArray::~QByteArray((QByteArray *)local_58);
  QWidget::saveGeometry(this);
  QVariant::QVariant((QVariant *)local_78,(QByteArray *)local_58);
  local_98 = "studio/geometry";
  local_90 = 0xf;
  QSettings::setValue(local_88,&local_98,(QVariant *)local_78);
  QVariant::~QVariant((QVariant *)local_78);
  QByteArray::~QByteArray((QByteArray *)local_58);
  QWidget::closeEvent(this,param_1);
  QSettings::~QSettings(local_88);
  return;
}

