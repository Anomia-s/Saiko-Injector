/**
 * Function: vfunction56
 * Address:  1407eeed0
 * Signature: void __thiscall vfunction56(Editor * this)
 * Body size: 284 bytes
 */


/* Scintilla::Editor member function inherited by Scintilla::ScintillaBase
   Scintilla::Editor member function inherited by QsciScintillaQt */

void __thiscall Scintilla::Editor::vfunction56(Editor *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  if (((this->Editor_data).field_0x488 & 1) != 0) {
    lVar2 = (this->EditModel_data).offset_0x2e8;
    lVar3 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x28))
                      (lVar2 + 8,*(undefined8 *)&(this->Editor_data).field_0x490);
    uVar4 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x30))(lVar2 + 8,lVar3 + 2);
    FUN_1407eece0(this,uVar4);
  }
  iVar1 = *(int *)&(this->Editor_data).field_0x468;
  if (iVar1 != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a4 = 0;
    uStack_9c = 0;
    local_94 = 0;
    uStack_8c = 0;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = 0;
    uStack_6c = 0;
    local_64 = 0;
    uStack_5c = 0;
    local_54 = 0;
    uStack_4c = 0;
    local_44 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    local_a8 = 0x7d7;
    local_24 = 0;
    local_28 = iVar1;
    (*this->vftablePtr->vfunction35)(this,&local_b8);
    *(undefined4 *)&(this->Editor_data).field_0x468 = 0;
  }
  *(undefined4 *)&(this->Editor_data).field_0x488 = 0;
  *(undefined8 *)&(this->Editor_data).field_0x490 = 0;
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_d8);
}

