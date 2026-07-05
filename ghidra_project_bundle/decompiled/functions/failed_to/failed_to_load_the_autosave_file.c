/**
 * Function: failed_to_load_the_autosave_file
 * Address:  140091eb0
 * Signature: undefined failed_to_load_the_autosave_file(void)
 * Body size: 253 bytes
 */


void failed_to_load_the_autosave_file(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  StandardButton SVar3;
  QString local_60 [24];
  QString local_48 [24];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar2 = FUN_140281360(param_1 + 0x28);
  if (cVar2 != '\0') {
    QString::QString(local_48,
                     "An autosave newer than the saved project exists, likely from a session that did not exit cleanly.\nRecover it?"
                    );
    QString::QString(local_60,"Recover Autosave");
    SVar3 = QMessageBox::question(param_1,local_60,local_48,0x14000,0x4000);
    QString::~QString(local_60);
    QString::~QString(local_48);
    if (SVar3 == 0x4000) {
      cVar2 = FUN_140281650();
      uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
      if (cVar2 == '\0') {
        QString::QString(local_48,"Failed to load the autosave file.");
        FUN_140282ac0(uVar1,local_48);
      }
      else {
        QString::QString(local_48,"Recovered autosave; save the project to keep it.");
        FUN_1402826c0(uVar1,local_48);
      }
      QString::~QString(local_48);
    }
    else {
      FUN_14027fd70(param_1 + 0x28);
    }
  }
  return;
}

