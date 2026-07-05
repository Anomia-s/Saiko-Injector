/**
 * Function: inserted_point_light
 * Address:  140090bf0
 * Signature: undefined inserted_point_light(void)
 * Body size: 122 bytes
 */


void inserted_point_light(longlong param_1)

{
  undefined8 uVar1;
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14008e3c0();
  uVar1 = FUN_1402b77e0(param_1 + 0x28);
  FUN_140090810(param_1,uVar1);
  FUN_14008fa90(param_1,uVar1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
  QString::QString(local_38,"Inserted point light.");
  FUN_1402826c0(uVar1,local_38);
  QString::~QString(local_38);
  return;
}

