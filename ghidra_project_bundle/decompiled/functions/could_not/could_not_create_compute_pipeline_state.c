/**
 * Function: could_not_create_compute_pipeline_state
 * Address:  1403f6900
 * Signature: undefined could_not_create_compute_pipeline_state(void)
 * Body size: 1679 bytes
 */


undefined8 * could_not_create_compute_pipeline_state(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *_Size;
  void *_Src;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void *_Dst;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_db8 [32];
  undefined *local_d98;
  longlong *local_d90;
  longlong local_d88;
  longlong *local_d80;
  longlong *local_d78;
  int local_d70 [2];
  longlong *local_d68;
  undefined4 local_d60;
  undefined8 local_d58;
  undefined4 local_d50;
  int local_d48 [2];
  undefined1 auStack_d40 [4];
  undefined8 local_d3c;
  int local_d34;
  undefined4 local_d30;
  undefined8 local_d28;
  longlong local_848;
  undefined8 local_840;
  int *local_838;
  ulonglong local_830;
  undefined1 local_828 [16];
  int *local_818;
  undefined8 local_810;
  ulonglong local_48;
  ulonglong uVar18;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_db8;
  _Size = (int *)*param_2;
  _Src = (void *)param_2[1];
  _Dst = (void *)FUN_140160c40(_Size);
  if (_Dst == (void *)0x0) {
    puVar9 = (undefined8 *)0x0;
    goto LAB_1403f6f5e;
  }
  memcpy(_Dst,_Src,(size_t)_Size);
  plVar6 = (longlong *)FUN_140160c70(1);
  if (plVar6 != (longlong *)0x0) {
    uVar16 = 0;
    memset(&local_848,0,0x800);
    memset(local_d48,0,0x500);
    *(undefined4 *)(plVar6 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 0xffffffff;
    *(undefined4 *)(plVar6 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)plVar6 + 0x14) = 0xffffffff;
    *(undefined4 *)(plVar6 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = 0xffffffff;
    *(undefined4 *)(plVar6 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)plVar6 + 0x24) = 0xffffffff;
    plVar6[5] = -1;
    iVar5 = *(int *)((longlong)param_2 + 0x1c);
    if (iVar5 == 0) {
      piVar12 = (int *)0x0;
      iVar15 = *(int *)(param_2 + 4);
    }
    else {
      local_d48[0] = 3;
      local_d3c = 0xffffffff00000000;
      local_840 = (void *)0x1;
      local_830 = 0;
      *(undefined4 *)(plVar6 + 1) = 0;
      local_d30 = *(undefined4 *)((longlong)param_2 + 0x1c);
      piVar12 = &local_d34;
      local_d28 = 0xffffffff00000000;
      local_828 = ZEXT816(1) << 0x40;
      local_810 = 0;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      uVar16 = 2;
      iVar15 = *(int *)(param_2 + 4);
      local_d48[1] = iVar5;
      local_838 = local_d48;
      local_818 = piVar12;
    }
    if (iVar15 != 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar17 = (uint)uVar16;
      piVar12 = local_d48 + uVar16 * 5;
      local_d48[uVar16 * 5] = 0;
      local_d48[uVar16 * 5 + 1] = iVar15;
      *(undefined4 *)(auStack_d40 + uVar16 * 0x14) = uVar1;
      *(undefined8 *)((longlong)&local_d3c + uVar16 * 0x14) = 0xffffffff00000000;
      uVar16 = (ulonglong)(uVar17 << 5);
      *(undefined8 *)((longlong)&local_848 + uVar16) = 0;
      *(undefined8 *)((longlong)&local_840 + uVar16) = 1;
      *(int **)((longlong)&local_838 + uVar16) = piVar12;
      *(undefined8 *)(local_828 + (uVar16 - 8)) = 0;
      *(uint *)(plVar6 + 2) = uVar17;
      uVar16 = (ulonglong)(uVar17 | 1);
    }
    iVar5 = *(int *)((longlong)param_2 + 0x24);
    if (iVar5 != 0) {
      iVar15 = *(int *)(param_2 + 4);
      iVar2 = *(int *)((longlong)param_2 + 0x1c);
      iVar14 = (int)uVar16;
      piVar12 = local_d48 + uVar16 * 5;
      local_d48[uVar16 * 5] = 0;
      local_d48[uVar16 * 5 + 1] = iVar5;
      *(int *)(auStack_d40 + uVar16 * 0x14) = iVar15 + iVar2;
      *(undefined8 *)((longlong)&local_d3c + uVar16 * 0x14) = 0xffffffff00000000;
      uVar16 = (ulonglong)(uint)(iVar14 << 5);
      *(undefined8 *)((longlong)&local_848 + uVar16) = 0;
      *(undefined8 *)((longlong)&local_840 + uVar16) = 1;
      *(int **)((longlong)&local_838 + uVar16) = piVar12;
      *(undefined8 *)(local_828 + (uVar16 - 8)) = 0;
      *(int *)((longlong)plVar6 + 0x14) = iVar14;
      uVar16 = (ulonglong)(iVar14 + 1);
    }
    iVar5 = *(int *)(param_2 + 5);
    if (iVar5 != 0) {
      iVar15 = (int)uVar16;
      piVar12 = local_d48 + uVar16 * 5;
      local_d48[uVar16 * 5] = 1;
      local_d48[uVar16 * 5 + 1] = iVar5;
      *(undefined8 *)(auStack_d40 + uVar16 * 0x14) = 0x100000000;
      *(undefined4 *)((longlong)&local_d3c + uVar16 * 0x14 + 4) = 0xffffffff;
      uVar16 = (ulonglong)(uint)(iVar15 << 5);
      *(undefined8 *)((longlong)&local_848 + uVar16) = 0;
      *(undefined8 *)((longlong)&local_840 + uVar16) = 1;
      *(int **)((longlong)&local_838 + uVar16) = piVar12;
      *(undefined8 *)(local_828 + (uVar16 - 8)) = 0;
      *(int *)(plVar6 + 3) = iVar15;
      uVar16 = (ulonglong)(iVar15 + 1);
    }
    local_d70[0] = (int)uVar16;
    iVar5 = *(int *)((longlong)param_2 + 0x2c);
    if (iVar5 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 5);
      piVar12 = local_d48 + uVar16 * 5;
      local_d48[uVar16 * 5] = 1;
      local_d48[uVar16 * 5 + 1] = iVar5;
      *(undefined4 *)(auStack_d40 + uVar16 * 0x14) = uVar1;
      *(undefined8 *)((longlong)&local_d3c + uVar16 * 0x14) = 0xffffffff00000001;
      uVar16 = (ulonglong)(uint)(local_d70[0] << 5);
      *(undefined8 *)((longlong)&local_848 + uVar16) = 0;
      *(undefined8 *)((longlong)&local_840 + uVar16) = 1;
      *(int **)((longlong)&local_838 + uVar16) = piVar12;
      *(undefined8 *)(local_828 + (uVar16 - 8)) = 0;
      *(int *)((longlong)plVar6 + 0x1c) = local_d70[0];
      local_d70[0] = local_d70[0] + 1;
    }
    if (*(int *)(param_2 + 6) != 0) {
      uVar16 = 0;
      do {
        uVar17 = local_d70[0] + (int)uVar16;
        uVar18 = (ulonglong)uVar17;
        (&local_848)[uVar18 * 4] = 2;
        *(int *)(&local_840 + uVar18 * 4) = (int)uVar16;
        *(undefined4 *)((longlong)&local_840 + uVar18 * 0x20 + 4) = 2;
        (&local_838)[uVar18 * 4] = piVar12;
        *(undefined8 *)(local_828 + uVar18 * 0x20 + -8) = 0;
        *(uint *)((longlong)plVar6 + uVar16 * 4 + 0x20) = uVar17;
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(uint *)(param_2 + 6));
      local_d70[0] = local_d70[0] + (int)uVar16;
    }
    local_d60 = 0;
    local_d58 = 0;
    local_d50 = 0;
    local_d68 = &local_848;
    iVar5 = (**(code **)(param_1 + 0x58))(local_d70,1,&local_d78,&local_d80);
    if (iVar5 < 0) {
      if (local_d80 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x78) == '\x01') {
          uVar7 = (**(code **)(*local_d80 + 0x18))();
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(9,"Failed to serialize RootSignature: %s",uVar7);
        }
        uVar7 = (**(code **)(*local_d80 + 0x18))();
        pcVar13 = "Failed to serialize RootSignature: %s";
LAB_1403f6ed1:
        FUN_1400fbed0(pcVar13,uVar7);
        (**(code **)(*local_d80 + 0x10))();
      }
    }
    else {
      pcVar3 = *(code **)(**(longlong **)(param_1 + 0x50) + 0x80);
      uVar7 = (**(code **)(*local_d78 + 0x20))();
      uVar8 = (**(code **)(*local_d78 + 0x18))();
      local_d90 = &local_d88;
      local_d98 = &DAT_140e14824;
      iVar5 = (*pcVar3)(*(undefined8 *)(param_1 + 0x50),0,uVar8,uVar7);
      if (-1 < iVar5) {
        *plVar6 = local_d88;
        local_848 = *plVar6;
        local_830 = local_830 & 0xffffffff00000000;
        local_828 = (undefined1  [16])0x0;
        local_818 = (int *)((ulonglong)local_818 & 0xffffffff00000000);
        local_840 = _Dst;
        local_838 = _Size;
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))
                          (*(longlong **)(param_1 + 0x50),&local_848,&DAT_140e14814,local_d48);
        if (iVar5 < 0) {
          s_error_code_s_0x08lx(param_1,"Could not create compute pipeline state",iVar5);
LAB_1403f6f51:
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)FUN_140160c70(1,0x30);
          if (puVar9 == (undefined8 *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(local_d48[1],local_d48[0]) + 0x10))();
            goto LAB_1403f6f51;
          }
          *puVar9 = (longlong *)CONCAT44(local_d48[1],local_d48[0]);
          puVar9[1] = plVar6;
          *(undefined4 *)(puVar9 + 2) = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)param_2 + 0x24);
          *(undefined4 *)((longlong)puVar9 + 0x1c) = *(undefined4 *)(param_2 + 5);
          *(undefined4 *)(puVar9 + 4) = *(undefined4 *)((longlong)param_2 + 0x2c);
          *(undefined4 *)((longlong)puVar9 + 0x24) = *(undefined4 *)(param_2 + 6);
          FUN_140106140(puVar9 + 5,0);
          if ((((*(char *)(param_1 + 0x78) != '\x01') ||
               (cVar4 = FUN_14014fd70(*(undefined4 *)(param_2 + 8),
                                      "SDL.gpu.computepipeline.create.name"), cVar4 == '\0')) ||
              (lVar10 = FUN_14014ffe0(*(undefined4 *)(param_2 + 8),
                                      "SDL.gpu.computepipeline.create.name",0), lVar10 == 0)) ||
             (*(char *)(param_1 + 0x78) == '\0')) goto LAB_1403f6f5e;
          plVar6 = (longlong *)*puVar9;
          lVar11 = FUN_1400fc570(lVar10);
          _Dst = (void *)FUN_14017b9c0("UTF-16LE","UTF-8",lVar10,lVar11 + 1);
          (**(code **)(*plVar6 + 0x30))(plVar6,_Dst);
        }
        FUN_140160cf0(_Dst);
        goto LAB_1403f6f5e;
      }
      if (local_d80 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x78) == '\x01') {
          uVar7 = (**(code **)(*local_d80 + 0x18))();
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(9,"Failed to create RootSignature: %s",uVar7);
        }
        uVar7 = (**(code **)(*local_d80 + 0x18))();
        pcVar13 = "Failed to create RootSignature: %s";
        goto LAB_1403f6ed1;
      }
    }
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar6 + 0x10))();
    }
    FUN_140160cf0(plVar6);
  }
  FUN_140160cf0(_Dst);
  if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_1400fb950(9,&DAT_141339891,"Could not create root signature!");
  }
  FUN_1400fbed0(&DAT_141339891,"Could not create root signature!");
  puVar9 = (undefined8 *)0x0;
LAB_1403f6f5e:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_db8)) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_db8);
}

