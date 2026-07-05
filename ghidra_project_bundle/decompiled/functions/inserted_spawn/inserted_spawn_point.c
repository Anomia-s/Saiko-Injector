/**
 * Function: inserted_spawn_point
 * Address:  140090b40
 * Signature: undefined inserted_spawn_point(void)
 * Body size: 122 bytes
 */


void inserted_spawn_point(longlong param_1)

{
  undefined8 uVar1;
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14008e3c0();
  uVar1 = FUN_1402b77b0(param_1 + 0x28);
  FUN_140090810(param_1,uVar1);
  FUN_14008fa90(param_1,uVar1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
  QString::QString(local_38,"Inserted spawn point.");
  FUN_1402826c0(uVar1,local_38);
  QString::~QString(local_38);
  return;
}

