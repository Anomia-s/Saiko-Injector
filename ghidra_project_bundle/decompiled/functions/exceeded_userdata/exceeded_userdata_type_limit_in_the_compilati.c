/**
 * Function: exceeded_userdata_type_limit_in_the_compilati
 * Address:  1406c5040
 * Signature: undefined __thiscall exceeded_userdata_type_limit_in_the_compilati(void * this)
 * Body size: 1962 bytes
 */


void __thiscall
exceeded_userdata_type_limit_in_the_compilati
          (void *this,undefined8 *param_2,undefined1 *param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  FenvVisitor_vftable *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  size_t _Size;
  undefined1 *puVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  undefined8 local_7d0 [22];
  longlong local_720;
  longlong local_718;
  longlong local_710;
  FenvVisitor_vftable *local_708;
  undefined1 local_6f8 [40];
  undefined1 local_6d0 [40];
  undefined1 local_6a8 [40];
  undefined1 local_680 [40];
  undefined1 local_658 [40];
  undefined1 local_630 [40];
  undefined1 local_608 [40];
  undefined1 local_5e0 [40];
  undefined1 local_5b8 [120];
  undefined1 local_540 [608];
  undefined1 *local_2e0;
  undefined1 local_2d8;
  char local_2bf;
  char local_2be [150];
  undefined1 local_228 [16];
  char *local_218;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  FunctionVisitor_vftable *local_110;
  ulonglong **local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  FenvVisitor_vftable *local_90 [2];
  undefined1 local_80;
  ulonglong *local_78;
  ulonglong *puStack_70;
  longlong local_68;
  void *local_58;
  byte local_49 [9];
  
  local_49[1] = 0xfe;
  local_49[2] = 0xff;
  local_49[3] = 0xff;
  local_49[4] = 0xff;
  local_49[5] = 0xff;
  local_49[6] = 0xff;
  local_49[7] = 0xff;
  local_49[8] = 0xff;
  local_98 = *(undefined8 *)(param_4 + 0x14);
  local_a8 = *(undefined8 *)(param_4 + 0x10);
  uStack_a0 = *(undefined8 *)(param_4 + 0x12);
  local_e8 = *param_4;
  iStack_e4 = param_4[1];
  iStack_e0 = param_4[2];
  iStack_dc = param_4[3];
  local_d8 = *(undefined8 *)(param_4 + 4);
  uStack_d0 = *(undefined8 *)(param_4 + 6);
  local_c8 = *(undefined8 *)(param_4 + 8);
  uStack_c0 = *(undefined8 *)(param_4 + 10);
  local_b8 = *(longlong **)(param_4 + 0xc);
  plStack_b0 = *(longlong **)(param_4 + 0xe);
  local_49[0] = 0;
  piVar1 = (int *)param_2[3];
  local_f0 = param_2;
  local_58 = this;
  if ((int *)param_2[2] == piVar1) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    piVar13 = (int *)param_2[2] + 6;
    do {
      if ((char)piVar13[-6] == '\x01') {
        uVar12 = *(ulonglong *)(piVar13 + 4);
        _Size = 9;
        if (uVar12 < 9) {
          _Size = uVar12;
        }
        piVar8 = piVar13;
        if (0xf < *(ulonglong *)(piVar13 + 6)) {
          piVar8 = *(int **)piVar13;
        }
        iVar6 = memcmp(piVar8,"optimize ",_Size);
        if ((8 < uVar12) && (iVar6 == 0)) {
          local_e8 = atoi((char *)((longlong)piVar8 + 9));
          if (local_e8 < 1) {
            local_e8 = 0;
          }
          if (1 < local_e8) {
            local_e8 = 2;
          }
        }
        if (*(longlong *)(piVar13 + 4) == 6) {
          piVar8 = piVar13;
          if (0xf < *(ulonglong *)(piVar13 + 6)) {
            piVar8 = *(int **)piVar13;
          }
          if ((short)piVar8[1] == 0x6576 && *piVar8 == 0x6974616e) {
            local_49[0] = 1;
            local_e8 = 2;
            iStack_e0 = 1;
            bVar4 = true;
          }
        }
      }
      piVar8 = piVar13 + 8;
      piVar13 = piVar13 + 0xe;
    } while (piVar8 != piVar1);
  }
  puVar2 = (undefined8 *)*local_f0;
  local_78 = (ulonglong *)0x0;
  puStack_70 = (ulonglong *)0x0;
  local_68 = 0;
                    /* inlined constructor or destructor (approx location) for
                       Luau::Compiler::FunctionVisitor */
  local_110 = &Luau::Compiler::FunctionVisitor::vftable;
  local_108 = &local_78;
  local_100 = 0;
  local_7d0[0] = 0x10;
  FUN_14002bb90(local_108,local_7d0);
  (**(code **)*puVar2)(puVar2,&local_110);
  if (local_100._1_1_ == '\x01') {
    local_e8 = 2;
    iStack_e0 = 1;
  }
  puVar11 = param_3;
  FUN_1406c5890(local_7d0,local_58,&local_e8);
  FUN_14079f670(&local_720,param_3,uStack_c0);
  Luau::Compile::ValueVisitor::ValueVisitor_Constructor_or_Destructor(&local_720,local_6f8,puVar2);
  if ((0 < local_e8) &&
     ((FUN_1407a0b20(param_3,local_228,&DAT_141328efd),
      (FenvVisitor_vftable *)local_228._0_8_ != (FenvVisitor_vftable *)0x0 ||
      (FUN_1407a0b20(param_3,local_90,"setfenv"), local_90[0] != (FenvVisitor_vftable *)0x0)))) {
    local_218 = local_2be;
    local_228._8_8_ = &local_2bf;
                    /* inlined constructor or destructor (approx location) for
                       Luau::Compiler::FenvVisitor */
    local_228._0_8_ = &Luau::Compiler::FenvVisitor::vftable;
    (**(code **)*puVar2)(puVar2,local_228);
  }
  if (((1 < local_e8) && (local_2bf == '\0')) && (local_2be[0] == '\0')) {
    local_2e0 = local_658;
    FUN_1407a0b20(param_3,local_228,&DAT_14134603f);
    if ((FenvVisitor_vftable *)local_228._0_8_ == (FenvVisitor_vftable *)0x0) {
LAB_1406c53fc:
      if (plStack_b0 != (longlong *)0x0) {
        for (plVar14 = plStack_b0; *plVar14 != 0; plVar14 = plVar14 + 1) {
          FUN_1407a0b20(param_3,local_90);
          if (local_90[0] != (FenvVisitor_vftable *)0x0) {
            if ((local_710 == 0) || (local_708 == local_90[0])) goto LAB_1406c54ba;
            puVar11 = (undefined1 *)((ulonglong)local_90[0] >> 9 ^ (ulonglong)local_90[0] >> 4);
            uVar12 = 0;
            while( true ) {
              puVar11 = (undefined1 *)((ulonglong)puVar11 & local_718 - 1U);
              pFVar3 = *(FenvVisitor_vftable **)(local_720 + (longlong)puVar11 * 0x10);
              if (pFVar3 == local_90[0]) break;
              if (pFVar3 == local_708) goto LAB_1406c54ba;
              puVar11 = puVar11 + uVar12 + 1;
              uVar12 = uVar12 + 1;
              if (local_718 - 1U < uVar12) goto LAB_1406c54ba;
            }
            if (*(int *)(local_720 + (longlong)puVar11 * 0x10 + 8) == 0) goto LAB_1406c54ba;
          }
        }
      }
    }
    else {
      if ((local_710 != 0) && (local_708 != (FenvVisitor_vftable *)local_228._0_8_)) {
        puVar11 = (undefined1 *)((ulonglong)local_228._0_8_ >> 9 ^ (ulonglong)local_228._0_8_ >> 4);
        uVar12 = 0;
        do {
          puVar11 = (undefined1 *)((ulonglong)puVar11 & local_718 - 1U);
          pFVar3 = *(FenvVisitor_vftable **)(local_720 + (longlong)puVar11 * 0x10);
          if (pFVar3 == (FenvVisitor_vftable *)local_228._0_8_) {
            if (*(int *)(local_720 + (longlong)puVar11 * 0x10 + 8) != 0) goto LAB_1406c53fc;
            break;
          }
          if (pFVar3 == local_708) break;
          puVar11 = puVar11 + uVar12 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 <= local_718 - 1U);
      }
LAB_1406c54ba:
      local_2d8 = 1;
    }
  }
  if (0 < local_e8) {
    FUN_1407a36b0(local_658,&local_720,local_6f8,&local_e8,puVar2,param_3);
    puVar11 = local_2e0;
    Luau::Compile::ConstantVisitor::ConstantVisitor_Constructor_or_Destructor
              ((longlong)local_6d0,local_6f8,(longlong)local_6a8,local_2e0,local_2d8,uStack_a0,
               puVar2,param_3);
    Luau::Compile::ShapeVisitor::ShapeVisitor_Constructor_or_Destructor(local_680,puVar2);
  }
  if (local_b8 != (longlong *)0x0) {
    for (plVar14 = local_b8; *plVar14 != 0; plVar14 = plVar14 + 1) {
      FUN_1407a0b20(param_3,local_228);
      if ((FenvVisitor_vftable *)local_228._0_8_ != (FenvVisitor_vftable *)0x0) {
        uVar5 = FUN_1407ab210(local_58);
        puVar9 = (undefined1 *)FUN_1406c5d40(local_630,local_228);
        *puVar9 = uVar5;
      }
    }
    if (0x100 < (ulonglong)((longlong)plVar14 - (longlong)local_b8)) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                ((undefined8 *)((longlong)puVar2 + 0xc),
                 "Exceeded userdata type limit in the compilation options",0,puVar11);
    }
  }
  if ((0 < iStack_e0) || (1 < local_e8)) {
    Luau::TypeMapVisitor::TypeMapVisitor_Constructor_or_Destructor
              (local_608,local_5e0,local_5b8,puVar2,(int)local_c8,(int)local_630,(int)local_540,
               (int)local_658,&local_720,local_a8,local_58);
  }
  puVar10 = puStack_70;
  for (puVar15 = local_78; puVar15 != puVar10; puVar15 = puVar15 + 1) {
    local_228._0_8_ = local_228._0_8_ & 0xffffffffffffff00;
    exceeded_function_instruction_limit_split_the(local_7d0,*puVar15,local_228);
    if (((local_228._0_8_ & 4) != 0) && (!bVar4)) {
      local_49[0] = bVar4;
    }
  }
  local_80 = 0;
  local_f8 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  Luau::AstExprFunction::AstExprFunction
            ((AstExprFunction *)local_228,(undefined8 *)((longlong)puVar2 + 0xc),&local_128,
             &local_138,&local_148,0,&local_158,1,&local_168,puVar2,0,&local_f8,0,0,local_90);
  uVar7 = exceeded_function_instruction_limit_split_the(local_7d0,(ulonglong)local_228,local_49);
  FUN_1407aa210(local_58,uVar7);
  FUN_1407ab9d0(local_58);
  FUN_1406c6750(local_7d0);
  if (local_78 != (ulonglong *)0x0) {
    uVar12 = local_68 - (longlong)local_78;
    puVar10 = local_78;
    if (0xfff < uVar12) {
      puVar10 = (ulonglong *)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)puVar10))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_140b68ba8(puVar10,uVar12);
  }
  return;
}

