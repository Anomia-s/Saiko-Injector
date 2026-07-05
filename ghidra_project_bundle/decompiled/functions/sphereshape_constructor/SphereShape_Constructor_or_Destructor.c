/**
 * Function: SphereShape_Constructor_or_Destructor
 * Address:  1400e9320
 * Signature: void __fastcall SphereShape_Constructor_or_Destructor(void)
 * Body size: 73 bytes
 */


void JPH::SphereShape::SphereShape_Constructor_or_Destructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*DAT_14151f528)(0x38);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x447a0000;
  *puVar1 = &vftable;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}

