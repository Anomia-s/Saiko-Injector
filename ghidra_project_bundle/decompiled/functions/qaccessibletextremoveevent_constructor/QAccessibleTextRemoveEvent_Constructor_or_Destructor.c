/**
 * Function: QAccessibleTextRemoveEvent_Constructor_or_Destructor
 * Address:  1407d06e0
 * Signature: void __fastcall QAccessibleTextRemoveEvent_Constructor_or_Destructor(undefined8 param_1, undefined4 param_2)
 * Body size: 157 bytes
 */


void QAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent_Constructor_or_Destructor
               (undefined8 param_1,undefined4 param_2)

{
  QAccessibleTextRemoveEvent local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  QString local_50 [24];
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14074bf60(param_1,local_38);
  local_60 = FUN_14074b900(param_1,0xa49,0,param_2);
  local_68 = 0xffffffff;
  local_78 = 0x11b;
  local_80.vftablePtr = &vftable;
  local_70 = param_1;
  local_58 = local_60;
  QString::QString(local_50,local_38);
  local_78 = 0x11f;
  QAccessible::updateAccessibility((QAccessibleEvent *)&local_80);
  QAccessibleTextRemoveEvent::~QAccessibleTextRemoveEvent(&local_80);
  QString::~QString(local_38);
  return;
}

