/**
 * Function: GroupFilterTable_Constructor_or_Destructor
 * Address:  1400f7dd0
 * Signature: void __fastcall GroupFilterTable_Constructor_or_Destructor(void)
 * Body size: 61 bytes
 */


void JPH::GroupFilterTable::GroupFilterTable_Constructor_or_Destructor(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)(*DAT_14151f528)(0x30);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &vftable;
  *(undefined4 *)(puVar1 + 2) = 0;
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(puVar1 + 3) = auVar2;
  puVar1[5] = 0;
  return;
}

