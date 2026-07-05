/**
 * Function: QAccessibleTextInsertEvent_Constructor_or_Destructor
 * Address:  1407cff70
 * Signature: void __fastcall QAccessibleTextInsertEvent_Constructor_or_Destructor(undefined8 param_1, undefined4 param_2)
 * Body size: 162 bytes
 */


void QAccessibleTextInsertEvent::QAccessibleTextInsertEvent_Constructor_or_Destructor
               (undefined8 param_1,undefined4 param_2)

{
  QAccessibleTextInsertEvent local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_60;
  int local_58;
  QString local_50 [24];
  QString local_38 [16];
  int local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14074bf60(param_1,local_38);
  local_58 = FUN_14074b900(param_1,0xa49,0,param_2);
  local_60 = local_28 + local_58;
  local_68 = 0xffffffff;
  local_78 = 0x11b;
  local_80.vftablePtr = &vftable;
  local_70 = param_1;
  QString::QString(local_50,local_38);
  local_78 = 0x11e;
  QAccessible::updateAccessibility((QAccessibleEvent *)&local_80);
  QAccessibleTextInsertEvent::~QAccessibleTextInsertEvent(&local_80);
  QString::~QString(local_38);
  return;
}

