/**
 * Function: select_an_entity_first
 * Address:  140091ae0
 * Signature: undefined select_an_entity_first(void)
 * Body size: 157 bytes
 */


void select_an_entity_first(longlong param_1)

{
  undefined8 uVar1;
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x40)) {
    uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
    QString::QString(local_38,"Select an entity first.");
    FUN_140282aa0(uVar1,local_38);
  }
  else {
    FUN_1402bc5b0(param_1 + 0x28);
    FUN_14008f360(param_1,param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
    QString::QString(local_38,"Added Script Handles.");
    FUN_1402826c0(uVar1,local_38);
  }
  QString::~QString(local_38);
  return;
}

