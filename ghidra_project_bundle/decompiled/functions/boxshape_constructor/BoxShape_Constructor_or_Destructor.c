/**
 * Function: BoxShape_Constructor_or_Destructor
 * Address:  1402f4530
 * Signature: void __fastcall BoxShape_Constructor_or_Destructor(void)
 * Body size: 82 bytes
 */


void JPH::BoxShape::BoxShape_Constructor_or_Destructor(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)(*DAT_14151f528)(0x50);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0x100;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x447a0000;
  *puVar1 = &vftable;
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(puVar1 + 6) = auVar2;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}

