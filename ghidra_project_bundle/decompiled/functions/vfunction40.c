/**
 * Function: vfunction40
 * Address:  1407f6700
 * Signature: undefined8 __thiscall vfunction40(ScintillaBase * this, int param_1)
 * Body size: 518 bytes
 */


/* Scintilla::ScintillaBase member function inherited by QsciScintillaQt */

undefined8 __thiscall Scintilla::ScintillaBase::vfunction40(ScintillaBase *this,int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
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
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  puVar2 = &(this->ScintillaBase_data).field_0x10;
  cVar3 = FUN_140249ad0(puVar2);
  if (cVar3 == '\0') {
LAB_1407f6820:
    if (((this->ScintillaBase_data).field_0x148 == '\x01') &&
       ((uVar1 = param_1 - 0x900, 0x28 < uVar1 ||
        (((0x10000fUL >> ((ulonglong)uVar1 & 0x3f) & 1) == 0 &&
         (((0x10000400000U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0 ||
          (lVar5 = FUN_140802bf0(&(this->EditModel_data).field_0x250),
          lVar5 <= *(longlong *)&(this->ScintillaBase_data).field_0x150)))))))) {
      FUN_140a4e840(&(this->ScintillaBase_data).field_0xb0);
    }
    uVar6 = Editor::vfunction40((Editor *)this,param_1);
    goto LAB_1407f68d4;
  }
  switch(param_1) {
  case 0x8fc:
    iVar4 = 1;
    break;
  default:
    cVar3 = FUN_140249ad0(puVar2);
    if (cVar3 != '\0') {
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
    FUN_140a4bd10(puVar2);
    goto LAB_1407f6820;
  case 0x8fe:
    iVar4 = -1;
    break;
  case 0x90a:
    iVar4 = 5000;
    break;
  case 0x910:
    iVar4 = (**(code **)(**(longlong **)&(this->ScintillaBase_data).field_0x80 + 0x28))();
    iVar4 = -iVar4;
    break;
  case 0x912:
    iVar4 = (**(code **)(**(longlong **)&(this->ScintillaBase_data).field_0x80 + 0x28))();
    break;
  case 0x916:
    uVar6 = 1;
    goto LAB_1407f68a6;
  case 0x917:
    uVar6 = 3;
    goto LAB_1407f679c;
  case 0x919:
    uVar6 = 4;
LAB_1407f679c:
    FUN_1407f6ac0(this,0,uVar6);
    goto LAB_1407f68d2;
  case 0x91b:
    iVar4 = -5000;
    break;
  case 0x928:
    uVar6 = 0;
LAB_1407f68a6:
    FUN_1407e3250(this,uVar6);
    FUN_1407f6910(this);
    FUN_1407df270(this,1,1,1);
    goto LAB_1407f68d2;
  }
  FUN_140a4c8c0(puVar2,iVar4);
LAB_1407f68d2:
  uVar6 = 0;
LAB_1407f68d4:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_d8)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_d8);
}

