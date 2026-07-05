/**
 * Function: project_closed
 * Address:  140092500
 * Signature: undefined project_closed(void)
 * Body size: 166 bytes
 */


void project_closed(longlong param_1)

{
  undefined8 uVar1;
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x140) != '\0') {
    FUN_140092070(param_1);
  }
  FUN_14008fc90(param_1);
  FUN_140090690(param_1);
  FUN_140281a00(param_1 + 0x28);
  __entities_explorer_summarized(*(undefined8 *)(param_1 + 0x43cd8),0);
  FUN_14008f2c0(param_1);
  FUN_14008ccf0(param_1,0);
  FUN_14028e520(*(undefined8 *)(param_1 + 0x43cc0));
  uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
  QString::QString(local_38,"Project closed.");
  FUN_1402826c0(uVar1,local_38);
  QString::~QString(local_38);
  return;
}

