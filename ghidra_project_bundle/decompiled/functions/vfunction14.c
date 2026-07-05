/**
 * Function: vfunction14
 * Address:  140a588d0
 * Signature: undefined4 __thiscall vfunction14(QsciListBoxQt * this, char * param_1)
 * Body size: 70 bytes
 */


undefined4 __thiscall QsciListBoxQt::vfunction14(QsciListBoxQt *this,char *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar1 = (this->Window_data).offset_0x10;
  QString::QString(local_38,param_1);
  uVar2 = FUN_14081f1e0(uVar1,local_38);
  QString::~QString(local_38);
  return uVar2;
}

