/**
 * Function: local_s_used_in_the_repeatuntil_condition_is
 * Address:  1406d4070
 * Signature: void __fastcall local_s_used_in_the_repeatuntil_condition_is(undefined8 param_1, longlong param_2, undefined8 * param_3, longlong param_4, ulonglong param_5)
 * Body size: 814 bytes
 */


void local_s_used_in_the_repeatuntil_condition_is
               (undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
               ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined1 auVar12 [16];
  UndefinedLocalVisitor_vftable *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong lStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88 = &Luau::Compiler::UndefinedLocalVisitor::vftable;
  local_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_80 = param_1;
  do {
    if (*(ulonglong *)(param_4 + 0x30) <= param_5) {
      (**(code **)*param_3)(param_3,&local_88);
      if (local_78 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        Luau::CompileError::CompileError_Constructor_or_Destructor
                  ((undefined8 *)((longlong)param_3 + 0xc),
                   "Local %s used in the repeat..until condition is undefined because continue statement on line %d jumps over it"
                   ,*local_78,(ulonglong)(*(int *)(param_2 + 0xc) + 1));
      }
      local_88 = &Luau::Compiler::UndefinedLocalVisitor::vftable;
      if (lStack_70 != 0) {
        FUN_140b68ba8();
      }
      return;
    }
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x28) + param_5 * 8);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 8) != DAT_1416f2430)) {
      if ((lVar7 != 0) && (*(int *)(lVar7 + 8) == DAT_1416f2448)) {
        FUN_1406d4420(&lStack_70,lVar7 + 0x28);
      }
    }
    else {
      puVar11 = *(ulonglong **)(lVar7 + 0x28);
      puVar4 = puVar11 + *(longlong *)(lVar7 + 0x30);
      for (; uVar9 = local_58, puVar11 != puVar4; puVar11 = puVar11 + 1) {
        uVar1 = *puVar11;
        if (local_68 * 3 >> 2 <= uStack_60) {
          if ((uStack_60 != 0) && (uVar1 != local_58)) {
            uVar3 = uVar1 >> 9 ^ uVar1 >> 4;
            uVar8 = 0;
            do {
              uVar3 = uVar3 & local_68 - 1;
              uVar6 = *(ulonglong *)(lStack_70 + uVar3 * 8);
              if (uVar6 == uVar1) goto LAB_1406d42ee;
              if (uVar6 == local_58) break;
              uVar3 = uVar3 + uVar8 + 1;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= local_68 - 1);
          }
          uVar3 = local_68 * 2;
          if (local_68 == 0) {
            uVar3 = 0x10;
          }
          if (uVar3 == 0) {
            lVar2 = 0;
            lVar7 = lStack_70;
          }
          else {
            lVar2 = FUN_140b65d30();
            if (3 < uVar3) {
              uVar8 = uVar3 & 0xfffffffffffffffc;
              auVar12._8_4_ = (int)local_58;
              auVar12._0_8_ = local_58;
              auVar12._12_4_ = (int)(local_58 >> 0x20);
              uVar6 = 0;
              do {
                *(undefined1 (*) [16])(lVar2 + uVar6 * 8) = auVar12;
                *(undefined1 (*) [16])(lVar2 + 0x10 + uVar6 * 8) = auVar12;
                uVar6 = uVar6 + 4;
                if (uVar8 == uVar6) goto LAB_1406d4247;
              } while( true );
            }
            uVar8 = 0;
            do {
              *(ulonglong *)(lVar2 + uVar8 * 8) = local_58;
              uVar8 = uVar8 + 1;
LAB_1406d4247:
              lVar7 = lStack_70;
            } while (uVar3 != uVar8);
          }
          lStack_70 = lVar2;
          if (local_68 != 0) {
            uVar8 = 0;
            do {
              uVar6 = *(ulonglong *)(lVar7 + uVar8 * 8);
              if (uVar6 != local_58) {
                uVar10 = (uVar6 >> 9 ^ uVar6 >> 4) & uVar3 - 1;
                uVar5 = *(ulonglong *)(lStack_70 + uVar10 * 8);
                if (uVar5 != uVar9) {
                  lVar2 = 1;
                  do {
                    if (uVar5 == uVar6) goto LAB_1406d4278;
                    uVar10 = uVar10 + lVar2 & uVar3 - 1;
                    uVar5 = *(ulonglong *)(lStack_70 + uVar10 * 8);
                    lVar2 = lVar2 + 1;
                  } while (uVar5 != uVar9);
                }
                *(ulonglong *)(lStack_70 + uVar10 * 8) = uVar6;
LAB_1406d4278:
                *(ulonglong *)(lStack_70 + uVar10 * 8) = uVar6;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != local_68);
          }
          local_68 = uVar3;
          if (lVar7 != 0) {
            FUN_140b68ba8();
          }
        }
LAB_1406d42ee:
        uVar3 = (uVar1 >> 9 ^ uVar1 >> 4) & local_68 - 1;
        uVar9 = *(ulonglong *)(lStack_70 + uVar3 * 8);
        if (uVar9 != local_58) {
          lVar7 = 1;
          do {
            if (uVar9 == uVar1) goto LAB_1406d4138;
            uVar3 = uVar3 + lVar7 & local_68 - 1;
            uVar9 = *(ulonglong *)(lStack_70 + uVar3 * 8);
            lVar7 = lVar7 + 1;
          } while (uVar9 != local_58);
        }
        *(ulonglong *)(lStack_70 + uVar3 * 8) = uVar1;
        uStack_60 = uStack_60 + 1;
LAB_1406d4138:
      }
    }
    param_5 = param_5 + 1;
  } while( true );
}

