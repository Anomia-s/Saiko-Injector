/**
 * Function: failed_to_move_1_to_trash
 * Address:  1405afc10
 * Signature: undefined failed_to_move_1_to_trash(void)
 * Body size: 229 bytes
 */


bool failed_to_move_1_to_trash(undefined8 param_1,QString *param_2)

{
  bool bVar1;
  undefined4 in_stack_ffffffffffffff68;
  undefined2 uVar2;
  QString local_90 [24];
  QString local_78 [24];
  QString local_60 [24];
  QString local_48 [24];
  QFileInfo local_30 [8];
  undefined8 local_28;
  
  uVar2 = (undefined2)((uint)in_stack_ffffffffffffff68 >> 0x10);
  local_28 = 0xfffffffffffffffe;
  bVar1 = QFile::moveToTrash(param_2,(QString *)0x0);
  if (!bVar1) {
    QString::QString(local_78,"Failed to move \'%1\' to trash.");
    QFileInfo::QFileInfo(local_30,param_2);
    QFileInfo::fileName(local_30);
    QString::arg(local_78,local_90,local_60,0,CONCAT22(uVar2,0x20));
    QString::QString(local_48,"Error");
    QMessageBox::warning(param_1,local_48,local_90,0x400,0);
    QString::~QString(local_48);
    QString::~QString(local_90);
    QString::~QString(local_60);
    QFileInfo::~QFileInfo(local_30);
    QString::~QString(local_78);
    bVar1 = false;
  }
  return bVar1;
}

