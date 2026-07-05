/**
 * Function: failed_to_create_folder_1
 * Address:  1405ade40
 * Signature: undefined failed_to_create_folder_1(void)
 * Body size: 437 bytes
 */


void failed_to_create_folder_1(int param_1,longlong param_2)

{
  bool bVar1;
  undefined2 uVar2;
  QString local_90 [16];
  longlong local_80;
  QString local_78 [24];
  QString local_60 [24];
  QString local_48 [31];
  char local_29 [9];
  
  local_29[1] = -2;
  local_29[2] = -1;
  local_29[3] = -1;
  local_29[4] = -1;
  local_29[5] = -1;
  local_29[6] = -1;
  local_29[7] = -1;
  local_29[8] = -1;
  if (param_1 == 1) {
    local_29[0] = '\0';
    QString::QString(local_48,"New Folder");
    QString::QString(local_78,"Folder name:");
    QString::QString(local_60,"New Folder");
    uVar2 = 0;
    QInputDialog::getText
              (local_90,*(undefined8 *)(param_2 + 0x10),local_60,local_78,0,local_48,local_29,0,0);
    QString::~QString(local_60);
    QString::~QString(local_78);
    QString::~QString(local_48);
    if ((local_29[0] == '\x01') && (local_80 != 0)) {
      QDir::QDir((QDir *)local_48,(QString *)(param_2 + 0x18));
      bVar1 = QDir::mkdir((QDir *)local_48,local_90);
      QDir::~QDir((QDir *)local_48);
      if (!bVar1) {
        QString::QString(local_78,"Failed to create folder \'%1\'.");
        QString::arg(local_78,local_48,local_90,0,CONCAT22(uVar2,0x20));
        QString::QString(local_60,"Error");
        QMessageBox::warning(*(undefined8 *)(param_2 + 0x10),local_60,local_48,0x400,0);
        QString::~QString(local_60);
        QString::~QString(local_48);
        QString::~QString(local_78);
      }
      FUN_1402a2500(*(undefined8 *)(param_2 + 0x10));
    }
    QString::~QString(local_90);
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    QString::~QString((QString *)(param_2 + 0x18));
    thunk_FUN_140b68ba8(param_2,0x30);
    return;
  }
  return;
}

