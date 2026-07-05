/**
 * Function: vfunction12
 * Address:  140a58850
 * Signature: void __thiscall vfunction12(QsciListBoxQt * this, int param_1)
 * Body size: 99 bytes
 */


void __thiscall QsciListBoxQt::vfunction12(QsciListBoxQt *this,int param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  QListWidget::setCurrentRow((QListWidget *)(this->Window_data).offset_0x10,param_1);
  puVar1 = *(undefined8 **)&(this->Window_data).field_0x20;
  if (puVar1 != (undefined8 *)0x0) {
    local_14 = 0;
    (**(code **)*puVar1)(puVar1,&local_14);
  }
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_38);
}

