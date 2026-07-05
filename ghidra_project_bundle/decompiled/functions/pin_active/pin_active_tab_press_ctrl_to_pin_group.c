/**
 * Function: pin_active_tab_press_ctrl_to_pin_group
 * Address:  140594ed0
 * Signature: undefined pin_active_tab_press_ctrl_to_pin_group(void)
 * Body size: 311 bytes
 */


QString * pin_active_tab_press_ctrl_to_pin_group(longlong param_1,QString *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_3 == 2) {
    cVar1 = FUN_140573240(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x60));
    if (cVar1 == '\0') {
      cVar1 = FUN_1402765c0(4);
      if (cVar1 == '\0') {
        pcVar2 = "Close Group";
      }
      else {
        pcVar2 = "Close Active Tab";
      }
    }
    else {
      cVar1 = FUN_140279df0(0x40);
      if (cVar1 == '\0') {
        pcVar2 = "Close";
      }
      else {
        pcVar2 = "Minimize";
      }
    }
  }
  else {
    if (param_3 != 3) {
      QString::QString(param_2);
      return param_2;
    }
    cVar1 = FUN_140573240(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x60));
    if (cVar1 == '\0') {
      cVar1 = FUN_140279df0(4);
      if (cVar1 == '\0') {
        pcVar2 = "Pin Active Tab (Press Ctrl to Pin Group)";
      }
      else {
        pcVar2 = "Pin Group";
      }
    }
    else {
      pcVar2 = "Unpin (Dock)";
    }
  }
  QMetaObject::tr((QMetaObject *)&DAT_140dff0f0,(char *)param_2,pcVar2,0);
  return param_2;
}

