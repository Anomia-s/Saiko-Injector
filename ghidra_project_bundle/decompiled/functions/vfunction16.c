/**
 * Function: vfunction16
 * Address:  140a58bb0
 * Signature: void __thiscall vfunction16(QsciListBoxQt * this, undefined4 param_1, undefined8 param_2)
 * Body size: 83 bytes
 */


void __thiscall
QsciListBoxQt::vfunction16(QsciListBoxQt *this,undefined4 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [12];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  local_c = param_1;
  FUN_140a58c10(&(this->Window_data).field_0x28,local_18,&local_c,param_2);
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_38);
}

