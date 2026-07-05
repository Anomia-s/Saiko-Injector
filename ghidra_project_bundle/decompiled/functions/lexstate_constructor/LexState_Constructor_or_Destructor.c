/**
 * Function: LexState_Constructor_or_Destructor
 * Address:  1407f8140
 * Signature: void __fastcall LexState_Constructor_or_Destructor(longlong param_1)
 * Body size: 147 bytes
 */


void Scintilla::LexState::LexState_Constructor_or_Destructor(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_14080bef0(*(undefined8 *)(param_1 + 0x2f0));
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x2f0);
    puVar3 = (undefined8 *)FUN_140b65d30(0x40);
    puVar3[1] = uVar1;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    *puVar3 = &vftable;
    PropSetSimple::PropSetSimple((PropSetSimple *)(puVar3 + 5));
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[7] = 0;
    FUN_14080bf00(uVar1);
  }
  FUN_14080bef0(*(undefined8 *)(param_1 + 0x2f0));
  return;
}

