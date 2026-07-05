/**
 * Function: incorrect_byte_count
 * Address:  140a599d0
 * Signature: QString * __thiscall incorrect_byte_count(void * this, QString * param_1, undefined4 param_2)
 * Body size: 515 bytes
 */


QString * __thiscall incorrect_byte_count(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Record start";
    break;
  case 2:
    pcVar1 = "Record type";
    break;
  case 3:
    pcVar1 = "Unknown record type";
    break;
  case 4:
    pcVar1 = "Byte count";
    break;
  case 5:
    pcVar1 = "Incorrect byte count";
    break;
  case 6:
    pcVar1 = "No address";
    break;
  case 7:
    pcVar1 = "Data address";
    break;
  case 8:
    pcVar1 = "Record count";
    break;
  case 9:
    pcVar1 = "Start address";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  case 0xb:
    pcVar1 = "Extended address";
    break;
  case 0xc:
    pcVar1 = "Odd data";
    break;
  case 0xd:
    pcVar1 = "Even data";
    break;
  case 0xe:
    pcVar1 = "Unknown data";
    break;
  case 0x10:
    pcVar1 = "Checksum";
    break;
  case 0x11:
    pcVar1 = "Incorrect checksum";
    break;
  case 0x12:
    pcVar1 = "Trailing garbage after a record";
  }
  QMetaObject::tr((QMetaObject *)&DAT_14123fdf8,(char *)param_1,pcVar1,0);
  return param_1;
}

