/**
 * Function: exceeded_jump_distance_limit_simplify_the_cod
 * Address:  1406d7ec0
 * Signature: undefined exceeded_jump_distance_limit_simplify_the_cod(void)
 * Body size: 926 bytes
 */


void exceeded_jump_distance_limit_simplify_the_cod
               (undefined8 *param_1,undefined8 *param_2,int param_3,double param_4,double param_5)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 in_R9;
  ulonglong uVar11;
  void *_Dst;
  ulonglong uVar12;
  longlong lVar13;
  size_t _Size;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 *local_80;
  
  local_a8 = param_2[5];
  lVar3 = param_1[0xa4];
  lVar9 = param_1[0xa3];
  lStack_98 = lVar3 - lVar9 >> 3;
  local_88 = param_1[0xaa] - param_1[0xa9];
  local_90 = 0;
  puVar5 = (undefined4 *)param_1[0xad];
  local_a0 = lStack_98;
  if (puVar5 == (undefined4 *)param_1[0xae]) {
    FUN_14059c4a0(param_1 + 0xac,puVar5,&local_a0);
  }
  else {
    *(undefined8 *)(puVar5 + 4) = 0;
    local_a0._0_4_ = (undefined4)lStack_98;
    local_a0._4_4_ = (int)(lVar3 - lVar9 >> 0x23);
    *puVar5 = (undefined4)local_a0;
    puVar5[1] = local_a0._4_4_;
    puVar5[2] = (undefined4)local_a0;
    puVar5[3] = local_a0._4_4_;
    param_1[0xad] = param_1[0xad] + 0x18;
  }
  if (0 < param_3) {
    puVar1 = param_1 + 0x25;
    local_80 = param_1 + 0x1b;
    iVar7 = 0;
    do {
      puVar5 = (undefined4 *)FUN_1406d7010(puVar1,&local_a8);
      *puVar5 = 3;
      lVar3 = FUN_1406d7010(puVar1,&local_a8);
      *(double *)(lVar3 + 8) = (double)iVar7 * param_5 + param_4;
      in_R9 = param_1[0x9e];
      Luau::Compile::ConstantVisitor::ConstantVisitor_Constructor_or_Destructor
                ((longlong)(param_1 + 0x20),local_80,(longlong)puVar1,in_R9,
                 *(undefined1 *)(param_1 + 0x9f),param_1[10],param_2,param_1[0x9d]);
      uVar12 = param_1[0xaa] - param_1[0xa9];
      FUN_1406c80b0(param_1,param_2[9]);
      uVar4 = FUN_1407aaf10(*param_1);
      lVar3 = param_1[0xa9];
      lVar9 = param_1[0xaa];
      if (uVar12 < (ulonglong)(lVar9 - lVar3)) {
        uVar6 = (longlong)uVar12 >> 4;
        lVar13 = uVar12 + 8;
        do {
          if (*(int *)(lVar3 + -8 + lVar13) == 1) {
            uVar10 = uVar4;
            cVar2 = FUN_1407aaf20(*param_1,*(undefined8 *)(lVar3 + lVar13));
            if (cVar2 == '\0') goto LAB_1406d8265;
            lVar3 = param_1[0xa9];
            lVar9 = param_1[0xaa];
          }
          uVar6 = uVar6 + 1;
          lVar13 = lVar13 + 0x10;
        } while (uVar6 < (ulonglong)(lVar9 - lVar3 >> 4));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != param_3);
  }
  uVar12 = local_88;
  uVar8 = (longlong)local_88 >> 4;
  uVar4 = FUN_1407aaf10(*param_1);
  lVar3 = param_1[0xa9];
  _Dst = (void *)param_1[0xaa];
  uVar6 = (longlong)_Dst - lVar3 >> 4;
  if (uVar8 < uVar6) {
    lVar9 = uVar12 + 8;
    uVar11 = uVar8;
    do {
      if (*(int *)(lVar3 + -8 + lVar9) == 0) {
        uVar10 = uVar4;
        cVar2 = FUN_1407aaf20(*param_1,*(undefined8 *)(lVar3 + lVar9));
        if (cVar2 == '\0') {
LAB_1406d8265:
                    /* WARNING: Subroutine does not return */
          Luau::CompileError::CompileError_Constructor_or_Destructor
                    ((undefined8 *)((longlong)param_2 + 0xc),
                     "Exceeded jump distance limit; simplify the code to compile",uVar10,in_R9);
        }
        lVar3 = param_1[0xa9];
        _Dst = (void *)param_1[0xaa];
      }
      uVar11 = uVar11 + 1;
      uVar6 = (longlong)_Dst - lVar3 >> 4;
      lVar9 = lVar9 + 0x10;
    } while (uVar11 < uVar6);
  }
  if (uVar8 < uVar6) {
    param_1[0xaa] = lVar3 + uVar12;
  }
  else if (uVar8 - uVar6 != 0) {
    if ((ulonglong)(param_1[0xab] - lVar3) < uVar12) {
      FUN_140060920(param_1 + 0xa9,uVar8,&local_a0);
    }
    else {
      _Size = (uVar8 - uVar6) * 0x10;
      memset(_Dst,0,_Size);
      param_1[0xaa] = (void *)(_Size + (longlong)_Dst);
    }
  }
  param_1[0xad] = param_1[0xad] + -0x18;
  puVar5 = (undefined4 *)FUN_1406d7010(param_1 + 0x25,&local_a8);
  *puVar5 = 0;
  Luau::Compile::ConstantVisitor::ConstantVisitor_Constructor_or_Destructor
            ((longlong)(param_1 + 0x20),param_1 + 0x1b,(longlong)(param_1 + 0x25),param_1[0x9e],
             *(undefined1 *)(param_1 + 0x9f),param_1[10],param_2,param_1[0x9d]);
  return;
}

