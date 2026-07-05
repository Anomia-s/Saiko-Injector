/**
 * Function: LineTabstops_Constructor_or_Destructor
 * Address:  140a35ce0
 * Signature: void __fastcall LineTabstops_Constructor_or_Destructor(longlong param_1, undefined8 param_2, ulonglong param_3)
 * Body size: 101 bytes
 */


void Scintilla::LineTabstops::LineTabstops_Constructor_or_Destructor
               (longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_140b65d30(0x48);
    param_3 = param_3 & 0xffffffff;
    *puVar1 = &vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 8;
    *(undefined8 **)(param_1 + 0x18) = puVar1;
  }
  FUN_140a53d30(puVar1,param_2,param_3);
  return;
}

