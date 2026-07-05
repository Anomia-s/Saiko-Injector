/**
 * Function: vfunction17
 * Address:  140a58d00
 * Signature: void __thiscall vfunction17(QsciListBoxQt * this, undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Body size: 103 bytes
 */


void __thiscall
QsciListBoxQt::vfunction17
          (QsciListBoxQt *this,undefined4 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  undefined1 local_50 [8];
  QPixmap local_48 [28];
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_2c = param_1;
  QPixmap::QPixmap(local_48);
  QPixmap::convertFromImage(local_48,param_4,0);
  FUN_140a58c10(&(this->Window_data).field_0x28,local_50,&local_2c,local_48);
  QPixmap::~QPixmap(local_48);
  return;
}

