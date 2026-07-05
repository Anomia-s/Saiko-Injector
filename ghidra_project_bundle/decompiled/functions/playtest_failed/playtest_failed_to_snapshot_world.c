/**
 * Function: playtest_failed_to_snapshot_world
 * Address:  140098db0
 * Signature: undefined playtest_failed_to_snapshot_world(void)
 * Body size: 995 bytes
 */


ulonglong playtest_failed_to_snapshot_world
                    (char *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                    longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char extraout_AL;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *_ArgList;
  char *pcVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined8 *local_a0;
  char *local_98;
  undefined8 uStack_90;
  longlong *local_80;
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    plVar1 = (longlong *)(param_1 + 0x43ad8);
    if (plVar1 != param_4) {
      plVar2 = *(longlong **)(param_1 + 0x43b10);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
        param_1[0x43b10] = '\0';
        param_1[0x43b11] = '\0';
        param_1[0x43b12] = '\0';
        param_1[0x43b13] = '\0';
        param_1[0x43b14] = '\0';
        param_1[0x43b15] = '\0';
        param_1[0x43b16] = '\0';
        param_1[0x43b17] = '\0';
      }
      plVar2 = (longlong *)param_4[7];
      if (plVar2 != (longlong *)0x0) {
        if (plVar2 == param_4) {
          uVar9 = (**(code **)(*plVar2 + 8))(plVar2,plVar1);
          *(undefined8 *)(param_1 + 0x43b10) = uVar9;
          plVar1 = (longlong *)param_4[7];
          if (plVar1 == (longlong *)0x0) goto LAB_140098ebf;
          (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_4);
        }
        else {
          *(longlong **)(param_1 + 0x43b10) = plVar2;
        }
        param_4[7] = 0;
      }
    }
LAB_140098ebf:
    plVar1 = (longlong *)(param_1 + 0x43b18);
    if (plVar1 != param_5) {
      plVar2 = *(longlong **)(param_1 + 0x43b50);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar1);
        param_1[0x43b50] = '\0';
        param_1[0x43b51] = '\0';
        param_1[0x43b52] = '\0';
        param_1[0x43b53] = '\0';
        param_1[0x43b54] = '\0';
        param_1[0x43b55] = '\0';
        param_1[0x43b56] = '\0';
        param_1[0x43b57] = '\0';
      }
      plVar2 = (longlong *)param_5[7];
      if (plVar2 != (longlong *)0x0) {
        if (plVar2 == param_5) {
          uVar9 = (**(code **)(*plVar2 + 8))(plVar2,plVar1);
          *(undefined8 *)(param_1 + 0x43b50) = uVar9;
          plVar1 = (longlong *)param_5[7];
          if (plVar1 == (longlong *)0x0) goto LAB_140098f32;
          (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_5);
        }
        else {
          *(longlong **)(param_1 + 0x43b50) = plVar2;
        }
        param_5[7] = 0;
      }
    }
LAB_140098f32:
    param_1[0x43b68] = '\0';
    local_80 = param_4;
    if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140de0de0);
    }
    if (*(longlong *)(param_1 + 0x43ac0) != *(longlong *)(param_1 + 0x43ac8)) {
      *(longlong *)(param_1 + 0x43ac8) = *(longlong *)(param_1 + 0x43ac0);
    }
    ldv::scene::BufferSink::BufferSink_Constructor_or_Destructor
              (param_2,(longlong *)(param_1 + 0x43ac0));
    if (extraout_AL != '\0') {
      if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
        local_98 = (char *)(*(longlong *)(param_1 + 0x43ac8) - *(longlong *)(param_1 + 0x43ac0));
        FUN_140b5a530(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140de0e08,&local_98);
      }
      puVar10 = (undefined8 *)FUN_1400ba4f0(param_2,DAT_14151f7b8,DAT_14151f7b8);
      if (puVar10 == (undefined8 *)0x0) {
        uVar3 = 0x3f800000;
        uVar4 = 0x3f733333;
        uVar5 = 0x3f59999a;
        uVar6 = 0x40490fd0;
        uVar14 = 0x41600000;
        uVar15 = 0x4226cccd;
        uVar16 = 0x3f333333;
        uVar12 = 1;
        *param_1 = '\x01';
        plVar1 = *(longlong **)(param_1 + 0x43b10);
      }
      else {
        uVar14 = (undefined4)*puVar10;
        uVar15 = (undefined4)((ulonglong)*puVar10 >> 0x20);
        uVar16 = *(undefined4 *)(puVar10 + 1);
        uVar12 = *(undefined1 *)((longlong)puVar10 + 0xc);
        local_72 = *(undefined1 *)((longlong)puVar10 + 0xf);
        local_74 = *(undefined2 *)((longlong)puVar10 + 0xd);
        uVar3 = *(undefined4 *)(puVar10 + 2);
        uVar4 = *(undefined4 *)((longlong)puVar10 + 0x14);
        uVar5 = *(undefined4 *)(puVar10 + 3);
        uVar6 = *(undefined4 *)((longlong)puVar10 + 0x1c);
        *param_1 = '\x01';
        plVar1 = *(longlong **)(param_1 + 0x43b10);
      }
      if (plVar1 != (longlong *)0x0) {
        local_98 = "Playtest: preparing world...";
        (**(code **)(*plVar1 + 0x10))();
      }
      iVar8 = *(int *)(param_1 + 0x43b60);
      if (iVar8 != 0) {
        iVar7 = _Thrd_id();
        if (iVar8 == iVar7) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_Cpp_error(5);
        }
        local_98 = *(char **)(param_1 + 0x43b58);
        uStack_90 = *(undefined8 *)(param_1 + 0x43b60);
        iVar8 = _Thrd_join(&local_98);
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_Cpp_error(2);
        }
        param_1[0x43b58] = '\0';
        param_1[0x43b59] = '\0';
        param_1[0x43b5a] = '\0';
        param_1[0x43b5b] = '\0';
        param_1[0x43b5c] = '\0';
        param_1[0x43b5d] = '\0';
        param_1[0x43b5e] = '\0';
        param_1[0x43b5f] = '\0';
        param_1[0x43b60] = '\0';
        param_1[0x43b61] = '\0';
        param_1[0x43b62] = '\0';
        param_1[0x43b63] = '\0';
      }
      _ArgList = (undefined8 *)FUN_140b65d30();
      *_ArgList = param_1;
      *(bool *)(_ArgList + 1) = puVar10 != (undefined8 *)0x0;
      *(ulonglong *)((longlong)_ArgList + 0xc) = CONCAT44(uVar15,uVar14);
      *(undefined4 *)((longlong)_ArgList + 0x14) = uVar16;
      *(undefined1 *)(_ArgList + 3) = uVar12;
      *(undefined2 *)((longlong)_ArgList + 0x19) = local_74;
      *(undefined1 *)((longlong)_ArgList + 0x1b) = local_72;
      *(undefined4 *)((longlong)_ArgList + 0x1c) = uVar3;
      *(undefined4 *)(_ArgList + 4) = uVar4;
      *(undefined4 *)((longlong)_ArgList + 0x24) = uVar5;
      *(undefined4 *)(_ArgList + 5) = uVar6;
      pcVar11 = (char *)_beginthreadex((void *)0x0,0,playtest_failed_to_load_snapshot,_ArgList,0,
                                       &uStack_a8);
      if (pcVar11 == (char *)0x0) {
        uStack_a8 = 0;
        local_a0 = _ArgList;
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(6);
      }
      if (*(int *)(param_1 + 0x43b60) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
      *(char **)(param_1 + 0x43b58) = pcVar11;
      *(ulonglong *)(param_1 + 0x43b60) = CONCAT44(uStack_a4,uStack_a8);
      uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      plVar1 = (longlong *)local_80[7];
      local_98 = pcVar11;
      param_4 = local_80;
      goto joined_r0x000140099159;
    }
    plVar1 = *(longlong **)(param_1 + 0x43b10);
    if (plVar1 != (longlong *)0x0) {
      local_98 = "Playtest: failed to snapshot world.";
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_98);
    }
    plVar1 = (longlong *)local_80[7];
    param_4 = local_80;
  }
  else {
    plVar1 = (longlong *)param_4[7];
  }
  uVar13 = 0;
joined_r0x000140099159:
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_4);
    param_4[7] = 0;
  }
  plVar1 = (longlong *)param_5[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_5);
    param_5[7] = 0;
  }
  return uVar13 & 0xffffffff;
}

