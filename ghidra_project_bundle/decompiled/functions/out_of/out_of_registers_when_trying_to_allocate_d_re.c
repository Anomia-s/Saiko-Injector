/**
 * Function: out_of_registers_when_trying_to_allocate_d_re
 * Address:  1406d8710
 * Signature: void __fastcall out_of_registers_when_trying_to_allocate_d_re(longlong param_1, longlong param_2, undefined8 * param_3, longlong * param_4)
 * Body size: 620 bytes
 */


void out_of_registers_when_trying_to_allocate_d_re
               (longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  Visitor_vftable *local_90;
  longlong local_88;
  ulonglong local_80 [8];
  
  local_90 = &`public:_void___cdecl_Luau::Compiler::resolveAssignConflicts(Luau::AstStat*___ptr64,std::vector<Luau::Compiler::Assignment,std::allocator<Luau::Compiler::Assignment>_>&___ptr64,Luau::AstArray<Luau::AstExpr*___ptr64>_const&___ptr64)___ptr64'
              ::__l2::Visitor::vftable;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  piVar6 = (int *)*param_3;
  piVar3 = (int *)param_3[1];
  piVar4 = piVar6;
  local_88 = param_1;
  if (piVar3 == piVar6) {
    uVar7 = 0;
  }
  else {
    lVar8 = 4;
    uVar10 = 0;
    do {
      if (*(int *)((longlong)piVar4 + lVar8 + -4) == 0) {
        if (uVar10 < (ulonglong)param_4[1]) {
          puVar2 = *(undefined8 **)(*param_4 + uVar10 * 8);
          (**(code **)*puVar2)(puVar2,&local_90);
          piVar6 = (int *)*param_3;
          piVar3 = (int *)param_3[1];
        }
        local_80[(ulonglong)(*(byte *)((longlong)piVar4 + lVar8) >> 6) + 4] =
             local_80[(ulonglong)(*(byte *)((longlong)piVar4 + lVar8) >> 6) + 4] |
             1L << (*(byte *)((longlong)piVar4 + lVar8) & 0x3f);
        piVar4 = piVar6;
      }
      uVar10 = uVar10 + 1;
      uVar7 = ((longlong)piVar3 - (longlong)piVar4 >> 4) * -0x5555555555555555;
      lVar8 = lVar8 + 0x30;
    } while (uVar10 < uVar7);
  }
  piVar6 = piVar4;
  if (piVar3 != piVar4) {
    lVar8 = 0;
    uVar10 = 0;
    do {
      piVar4 = piVar3;
      if ((*(int *)((longlong)piVar6 + lVar8) != 0) && (uVar10 < (ulonglong)param_4[1])) {
        puVar2 = *(undefined8 **)(*param_4 + uVar10 * 8);
        (**(code **)*puVar2)(puVar2,&local_90);
        piVar6 = (int *)*param_3;
        piVar4 = (int *)param_3[1];
      }
      uVar10 = uVar10 + 1;
      uVar7 = ((longlong)piVar4 - (longlong)piVar6 >> 4) * -0x5555555555555555;
      lVar8 = lVar8 + 0x30;
      piVar3 = piVar4;
    } while (uVar10 < uVar7);
  }
  if (uVar7 < (ulonglong)param_4[1]) {
    do {
      puVar2 = *(undefined8 **)(*param_4 + uVar7 * 8);
      (**(code **)*puVar2)(puVar2,&local_90);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_4[1]);
    piVar6 = (int *)*param_3;
    piVar4 = (int *)param_3[1];
  }
  piVar3 = piVar6;
  if (piVar6 != piVar4) {
    do {
      iVar9 = *piVar3;
      if (iVar9 - 3U < 3) {
        bVar1 = *(byte *)(piVar3 + 1);
        if ((local_80[(ulonglong)(bVar1 >> 6) + 4] >> ((ulonglong)bVar1 & 0x3f) & 1) != 0) {
          local_80[bVar1 >> 6] = local_80[bVar1 >> 6] | 1L << (bVar1 & 0x3f);
          iVar9 = *piVar3;
        }
        if (iVar9 == 5) {
          bVar1 = *(byte *)((longlong)piVar3 + 6);
          if ((local_80[(ulonglong)(bVar1 >> 6) + 4] >> ((ulonglong)bVar1 & 0x3f) & 1) != 0) {
            local_80[bVar1 >> 6] = local_80[bVar1 >> 6] | 1L << (bVar1 & 0x3f);
          }
        }
      }
      piVar3 = piVar3 + 0xc;
    } while (piVar3 != piVar4);
    do {
      if ((*piVar6 == 0) &&
         ((local_80[*(byte *)(piVar6 + 1) >> 6] >> ((ulonglong)*(byte *)(piVar6 + 1) & 0x3f) & 1) !=
          0)) {
        iVar9 = *(int *)(param_1 + 0x4fc);
        uVar5 = iVar9 + 1;
        if (0xff < uVar5) {
                    /* WARNING: Subroutine does not return */
          Luau::CompileError::CompileError_Constructor_or_Destructor
                    ((undefined8 *)(param_2 + 0xc),
                     "Out of registers when trying to allocate %d registers: exceeded limit %d",1,
                     0xff);
        }
        *(uint *)(param_1 + 0x4fc) = uVar5;
        if (uVar5 < *(uint *)(param_1 + 0x500)) {
          uVar5 = *(uint *)(param_1 + 0x500);
        }
        *(uint *)(param_1 + 0x500) = uVar5;
        *(char *)(piVar6 + 10) = (char)iVar9;
      }
      piVar6 = piVar6 + 0xc;
    } while (piVar6 != piVar4);
  }
  return;
}

