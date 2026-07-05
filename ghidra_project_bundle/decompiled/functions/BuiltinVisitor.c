/**
 * Function: BuiltinVisitor
 * Address:  1407a3710
 * Signature: BuiltinVisitor * __thiscall BuiltinVisitor(BuiltinVisitor * this, undefined8 param_1, longlong * param_2, undefined8 param_3, longlong param_4, undefined8 param_5)
 * Body size: 676 bytes
 */


BuiltinVisitor * __thiscall
Luau::Compile::BuiltinVisitor::BuiltinVisitor
          (BuiltinVisitor *this,undefined8 param_1,longlong *param_2,undefined8 param_3,
          longlong param_4,undefined8 param_5)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  char *_Str;
  ulonglong local_60;
  undefined8 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  this->vftablePtr = &vftable;
  (this->BuiltinVisitor_data).offset_0x0 = param_1;
  (this->BuiltinVisitor_data).offset_0x108 = param_2;
  (this->BuiltinVisitor_data).offset_0x110 = param_3;
  (this->BuiltinVisitor_data).offset_0x118 = param_4;
  (this->BuiltinVisitor_data).offset_0x120 = param_5;
  (this->BuiltinVisitor_data).offset_0x8 = 0;
  (this->BuiltinVisitor_data).offset_0x10 = 0;
  (this->BuiltinVisitor_data).offset_0x18 = 0;
  (this->BuiltinVisitor_data).offset_0x20 = 0;
  (this->BuiltinVisitor_data).offset_0x28 = 0;
  (this->BuiltinVisitor_data).offset_0x30 = 0;
  (this->BuiltinVisitor_data).offset_0x38 = 0;
  (this->BuiltinVisitor_data).offset_0x40 = 0;
  (this->BuiltinVisitor_data).offset_0x48 = 0;
  (this->BuiltinVisitor_data).offset_0x50 = 0;
  (this->BuiltinVisitor_data).offset_0x58 = 0;
  (this->BuiltinVisitor_data).offset_0x60 = 0;
  (this->BuiltinVisitor_data).offset_0x68 = 0;
  (this->BuiltinVisitor_data).offset_0x70 = 0;
  (this->BuiltinVisitor_data).offset_0x78 = 0;
  (this->BuiltinVisitor_data).offset_0x80 = 0;
  (this->BuiltinVisitor_data).offset_0x88 = 0;
  (this->BuiltinVisitor_data).offset_0x90 = 0;
  (this->BuiltinVisitor_data).offset_0x98 = 0;
  (this->BuiltinVisitor_data).offset_0xa0 = 0;
  (this->BuiltinVisitor_data).offset_0xa8 = 0;
  (this->BuiltinVisitor_data).offset_0xb0 = 0;
  (this->BuiltinVisitor_data).offset_0xb8 = 0;
  (this->BuiltinVisitor_data).offset_0xc0 = 0;
  (this->BuiltinVisitor_data).offset_0xc8 = 0;
  (this->BuiltinVisitor_data).offset_0xd0 = 0;
  (this->BuiltinVisitor_data).offset_0xd8 = 0;
  (this->BuiltinVisitor_data).offset_0xe0 = 0;
  (this->BuiltinVisitor_data).offset_0xe8 = 0;
  (this->BuiltinVisitor_data).offset_0xf0 = 0;
  (this->BuiltinVisitor_data).offset_0xf8 = 0;
  (this->BuiltinVisitor_data).offset_0x100 = 0;
  plVar4 = *(longlong **)(param_4 + 0x50);
  if ((plVar4 != (longlong *)0x0) && (_Str = (char *)*plVar4, _Str != (char *)0x0)) {
    local_58 = &(this->BuiltinVisitor_data).offset_0x8;
    do {
      pcVar3 = strchr(_Str,0x2e);
      if (pcVar3 == (char *)0x0) {
        FUN_1407a0b20(param_5,&local_60,_Str);
        if (local_60 != 0) {
          if ((param_2[2] != 0) && (param_2[3] != local_60)) {
            uVar5 = local_60 >> 9 ^ local_60 >> 4;
            uVar6 = 0;
            do {
              uVar5 = uVar5 & param_2[1] - 1U;
              lVar8 = uVar5 * 0x10;
              uVar1 = *(ulonglong *)(*param_2 + lVar8);
              if (uVar1 == local_60) {
                if (*(int *)(*param_2 + lVar8 + 8) != 0) goto LAB_1407a3800;
                break;
              }
              if (uVar1 == param_2[3]) break;
              uVar5 = uVar5 + uVar6 + 1;
              uVar6 = uVar6 + 1;
            } while (uVar6 <= param_2[1] - 1U);
          }
          local_50 = 0;
          lVar8 = local_50;
          goto LAB_1407a3979;
        }
      }
      else {
        FUN_1407a0910(param_5,&local_50,_Str,(longlong)pcVar3 - (longlong)_Str);
        lVar8 = local_50;
        FUN_1407a0b20(param_5,&local_60,pcVar3 + 1);
        if (local_60 != 0 && lVar8 != 0) {
          if ((param_2[2] != 0) && (param_2[3] != local_60)) {
            uVar5 = local_60 >> 9 ^ local_60 >> 4;
            uVar6 = 0;
            do {
              uVar5 = uVar5 & param_2[1] - 1U;
              lVar7 = uVar5 * 0x10;
              uVar1 = *(ulonglong *)(*param_2 + lVar7);
              if (uVar1 == local_60) {
                if (*(int *)(*param_2 + lVar7 + 8) != 0) goto LAB_1407a3800;
                break;
              }
              if (uVar1 == param_2[3]) break;
              uVar5 = uVar5 + uVar6 + 1;
              uVar6 = uVar6 + 1;
            } while (uVar6 <= param_2[1] - 1U);
          }
LAB_1407a3979:
          local_50 = lVar8;
          local_48 = local_60;
          uVar2 = isfinite(&local_50,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18)
                          );
          if (-1 < (int)uVar2) {
            *(undefined1 *)((longlong)local_58 + (ulonglong)uVar2) = 1;
          }
        }
      }
LAB_1407a3800:
      _Str = (char *)plVar4[1];
      plVar4 = plVar4 + 1;
    } while (_Str != (char *)0x0);
  }
  return this;
}

