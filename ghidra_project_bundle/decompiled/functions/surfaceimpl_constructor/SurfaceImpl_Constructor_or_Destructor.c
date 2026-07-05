/**
 * Function: SurfaceImpl_Constructor_or_Destructor
 * Address:  1407ffee0
 * Signature: void __fastcall SurfaceImpl_Constructor_or_Destructor(void)
 * Body size: 52 bytes
 */


void Scintilla::SurfaceImpl::SurfaceImpl_Constructor_or_Destructor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140b65d30(0x30);
  *puVar1 = &vftable;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}

