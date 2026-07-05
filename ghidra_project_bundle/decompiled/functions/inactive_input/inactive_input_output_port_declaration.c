/**
 * Function: inactive_input_output_port_declaration
 * Address:  14083b550
 * Signature: QString * __thiscall inactive_input_output_port_declaration(void * this, QString * param_1, undefined4 param_2)
 * Body size: 1078 bytes
 */


QString * __thiscall
inactive_input_output_port_declaration(void *this,QString *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = "Default";
    break;
  case 1:
    pcVar1 = "Comment";
    break;
  case 2:
    pcVar1 = "Line comment";
    break;
  case 3:
    pcVar1 = "Bang comment";
    break;
  case 4:
    pcVar1 = "Number";
    break;
  case 5:
    pcVar1 = "Primary keywords and identifiers";
    break;
  case 6:
    pcVar1 = "String";
    break;
  case 7:
    pcVar1 = "Secondary keywords and identifiers";
    break;
  case 8:
    pcVar1 = "System task";
    break;
  case 9:
    pcVar1 = "Preprocessor block";
    break;
  case 10:
    pcVar1 = "Operator";
    break;
  case 0xb:
    pcVar1 = "Identifier";
    break;
  case 0xc:
    pcVar1 = "Unclosed string";
    break;
  default:
    QString::QString(param_1);
    return param_1;
  case 0x13:
    pcVar1 = "User defined tasks and identifiers";
    break;
  case 0x14:
    pcVar1 = "Keyword comment";
    break;
  case 0x15:
    pcVar1 = "Input port declaration";
    break;
  case 0x16:
    pcVar1 = "Output port declaration";
    break;
  case 0x17:
    pcVar1 = "Input/output port declaration";
    break;
  case 0x18:
    pcVar1 = "Port connection";
    break;
  case 0x40:
    pcVar1 = "Inactive default";
    break;
  case 0x41:
    pcVar1 = "Inactive comment";
    break;
  case 0x42:
    pcVar1 = "Inactive line comment";
    break;
  case 0x43:
    pcVar1 = "Inactive bang comment";
    break;
  case 0x44:
    pcVar1 = "Inactive number";
    break;
  case 0x45:
    pcVar1 = "Inactive primary keywords and identifiers";
    break;
  case 0x46:
    pcVar1 = "Inactive string";
    break;
  case 0x47:
    pcVar1 = "Inactive secondary keywords and identifiers";
    break;
  case 0x48:
    pcVar1 = "Inactive system task";
    break;
  case 0x49:
    pcVar1 = "Inactive preprocessor block";
    break;
  case 0x4a:
    pcVar1 = "Inactive operator";
    break;
  case 0x4b:
    pcVar1 = "Inactive identifier";
    break;
  case 0x4c:
    pcVar1 = "Inactive unclosed string";
    break;
  case 0x53:
    pcVar1 = "Inactive user defined tasks and identifiers";
    break;
  case 0x54:
    pcVar1 = "Inactive keyword comment";
    break;
  case 0x55:
    pcVar1 = "Inactive input port declaration";
    break;
  case 0x56:
    pcVar1 = "Inactive output port declaration";
    break;
  case 0x57:
    pcVar1 = "Inactive input/output port declaration";
    break;
  case 0x58:
    pcVar1 = "Inactive port connection";
  }
  QMetaObject::tr((QMetaObject *)&DAT_141241450,(char *)param_1,pcVar1,0);
  return param_1;
}

