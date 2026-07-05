/**
 * Function: QsciListBoxQt_Constructor_or_Destructor
 * Address:  140a59020
 * Signature: void __fastcall QsciListBoxQt_Constructor_or_Destructor(void)
 * Body size: 70 bytes
 */


void QsciListBoxQt::QsciListBoxQt_Constructor_or_Destructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140b65d30(0x38);
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = &vftable;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 5;
  *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}

