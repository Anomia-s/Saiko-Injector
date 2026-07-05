/**
 * Function: vfunction39
 * Address:  1407f7fd0
 * Signature: void __thiscall vfunction39(ScintillaBase * this)
 * Body size: 228 bytes
 */


/* Scintilla::ScintillaBase member function inherited by QsciScintillaQt */

void __thiscall Scintilla::ScintillaBase::vfunction39(ScintillaBase *this)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  puVar1 = &(this->ScintillaBase_data).field_0x10;
  cVar2 = FUN_140249ad0(puVar1);
  if (cVar2 != '\0') {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a4 = 0;
    uStack_9c = 0;
    local_94 = 0;
    uStack_8c = 0;
    local_84 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_60 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_a8 = 0x7e9;
    local_68 = 0;
    local_44 = 0;
    (*this->vftablePtr->vfunction35)(this,&local_b8);
  }
  FUN_140a4bd10(puVar1);
  FUN_140a4e840(&(this->ScintillaBase_data).field_0xb0);
  Editor::vfunction39((Editor *)this);
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_d8);
}

