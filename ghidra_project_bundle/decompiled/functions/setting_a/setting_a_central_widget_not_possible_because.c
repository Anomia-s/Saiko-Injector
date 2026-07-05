/**
 * Function: setting_a_central_widget_not_possible_because
 * Address:  140279bf0
 * Signature: undefined setting_a_central_widget_not_possible_because(void)
 * Body size: 366 bytes
 */


undefined8 setting_a_central_widget_not_possible_because(longlong param_1,QObject *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 local_60 [8];
  QMessageLogger local_58 [32];
  QObject *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (param_2 == (QObject *)0x0) {
    *(undefined8 *)(lVar1 + 0xa8) = 0;
  }
  else {
    if (*(longlong *)(lVar1 + 0xa8) == 0) {
      if ((*(longlong *)(lVar1 + 0x60) == 0) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x60) + 0x10) == 0)) {
        FUN_14028e000(param_2,1,0);
        FUN_14028e000(param_2,2,0);
        FUN_14028e000(param_2,4,0);
        FUN_14028e000(param_2,0x200,0);
        *(QObject **)(*(longlong *)(param_1 + 0x30) + 0xa8) = param_2;
        lVar1 = *(longlong *)(param_1 + 0x30);
        local_38 = param_2;
        QObject::objectName(param_2);
        FUN_140279010(lVar1 + 0x60,local_60,local_58,&local_38);
        QString::~QString((QString *)local_58);
        uVar2 = FUN_14056c000(param_1,0x10,local_38,0,0xffffffff);
        FUN_140292760(param_1,local_38);
        FUN_140576430(uVar2,1,1);
        return uVar2;
      }
      QMessageLogger::QMessageLogger(local_58,(char *)0x0,0,(char *)0x0);
      pcVar3 = 
      "Setting a central widget not possible - the central widget need to be the first dock widget that is added to the dock manager."
      ;
    }
    else {
      QMessageLogger::QMessageLogger(local_58,(char *)0x0,0,(char *)0x0);
      pcVar3 = "Setting a central widget not possible because there is already a central widget.";
    }
    QMessageLogger::warning(local_58,pcVar3);
  }
  return 0;
}

