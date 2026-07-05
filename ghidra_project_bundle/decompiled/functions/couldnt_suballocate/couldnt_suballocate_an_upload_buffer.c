/**
 * Function: couldnt_suballocate_an_upload_buffer
 * Address:  14073fc10
 * Signature: void __thiscall couldnt_suballocate_an_upload_buffer(void * this, longlong * param_1, longlong param_2, ulonglong param_3, undefined1 param_4)
 * Body size: 1030 bytes
 */


void __thiscall
couldnt_suballocate_an_upload_buffer
          (void *this,longlong *param_1,longlong param_2,ulonglong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Dst;
  longlong **pplVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char cVar20;
  ulonglong uVar21;
  longlong *plVar22;
  CommandList *this_00;
  undefined4 *puVar23;
  longlong lVar24;
  undefined4 *puVar25;
  size_t _Size;
  ulonglong uVar26;
  void *local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  CommandList *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar22 = (longlong *)param_1[3];
  plVar1 = (longlong *)param_1[4];
  local_78 = param_3;
  local_50 = this;
  if (plVar22 != plVar1) {
    do {
      plVar2 = (longlong *)*plVar22;
      if (plVar2 != (longlong *)0x0) {
        *plVar22 = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar1);
    param_1[4] = param_1[3];
  }
  lVar24 = param_1[6];
  _Dst = (void *)param_1[7];
  uVar21 = (longlong)_Dst - lVar24 >> 6;
  if (local_78 < uVar21) {
    param_1[7] = lVar24 + local_78 * 0x40;
LAB_14073fcd1:
    this_00 = local_50;
    if (local_78 == 0) goto LAB_14073fcde;
  }
  else {
    if (local_78 < uVar21 || local_78 - uVar21 == 0) goto LAB_14073fcd1;
    if ((ulonglong)(param_1[8] - lVar24 >> 6) < local_78) {
      FUN_140716f50(param_1 + 6,local_78,&local_70);
    }
    else {
      _Size = (local_78 - uVar21) * 0x40;
      memset(_Dst,0,_Size);
      param_1[7] = (longlong)(_Size + (longlong)_Dst);
    }
  }
  this_00 = local_50;
  uVar21 = 0;
  uVar26 = 1;
  do {
    lVar24 = uVar21 * 0x40;
    puVar23 = (undefined4 *)(param_1[6] + lVar24);
    plVar22 = *(longlong **)(param_2 + 0x38 + lVar24);
    if (plVar22 == (longlong *)0x0) {
      *(undefined8 *)(puVar23 + 0xe) = 0;
    }
    else {
      if ((char)plVar22[0x12] == '\x01') {
        local_70 = plVar22;
        (**(code **)(*plVar22 + 8))(plVar22);
        pplVar3 = (longlong **)param_1[4];
        if (pplVar3 == (longlong **)param_1[5]) {
          FUN_1406f5260(param_1 + 3,pplVar3,&local_70);
        }
        else {
          *pplVar3 = (longlong *)0x0;
          if (pplVar3 != &local_70) {
            *pplVar3 = local_70;
            local_70 = (longlong *)0x0;
          }
          param_1[4] = param_1[4] + 8;
        }
        plVar1 = local_70;
        this_00 = local_50;
        if (local_70 != (longlong *)0x0) {
          local_70 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
          this_00 = local_50;
        }
      }
      puVar25 = (undefined4 *)(lVar24 + param_2);
      uVar5 = *puVar25;
      uVar6 = puVar25[1];
      uVar7 = puVar25[2];
      uVar8 = puVar25[3];
      uVar9 = puVar25[4];
      uVar10 = puVar25[5];
      uVar11 = puVar25[6];
      uVar12 = puVar25[7];
      uVar13 = puVar25[8];
      uVar14 = puVar25[9];
      uVar15 = puVar25[10];
      uVar16 = puVar25[0xb];
      uVar17 = puVar25[0xd];
      uVar18 = puVar25[0xe];
      uVar19 = puVar25[0xf];
      puVar23[0xc] = puVar25[0xc];
      puVar23[0xd] = uVar17;
      puVar23[0xe] = uVar18;
      puVar23[0xf] = uVar19;
      puVar23[8] = uVar13;
      puVar23[9] = uVar14;
      puVar23[10] = uVar15;
      puVar23[0xb] = uVar16;
      puVar23[4] = uVar9;
      puVar23[5] = uVar10;
      puVar23[6] = uVar11;
      puVar23[7] = uVar12;
      *puVar23 = uVar5;
      puVar23[1] = uVar6;
      puVar23[2] = uVar7;
      puVar23[3] = uVar8;
      *(undefined8 *)(puVar23 + 0xe) = *(undefined8 *)(plVar22[2] + 0x78);
      if ((this_00->CommandList_data).offset_0x1b0 == '\x01') {
        FUN_1407cdb60(local_50,plVar22[2],0x80000);
        this_00 = local_50;
      }
    }
    bVar4 = uVar26 < local_78;
    uVar21 = uVar26;
    uVar26 = (ulonglong)((int)uVar26 + 1);
  } while (bVar4);
LAB_14073fcde:
  local_88 = (void *)0x0;
  local_80 = 0;
  cVar20 = list_too_long(&(this_00->CommandList_data).field_0x28,param_1[7] - param_1[6],0,0,0,
                         &local_88,&local_80,(this_00->CommandList_data).offset_0x210,0x100);
  if (cVar20 == '\0') {
    lVar24 = (this_00->CommandList_data).offset_0x8;
    local_68 = 0;
    local_70 = (longlong *)FUN_140b65d30(0x30);
    local_60 = 0x25;
    local_58 = 0x2f;
    *local_70 = 0x74276e646c756f43;
    local_70[1] = 0x6f6c6c6162757320;
    *(undefined4 *)(local_70 + 2) = 0x65746163;
    builtin_strncpy((char *)((longlong)local_70 + 0x14)," an ",4);
    *(undefined4 *)(local_70 + 3) = 0x6f6c7075;
    builtin_strncpy((char *)((longlong)local_70 + 0x1c),"ad b",4);
    builtin_strncpy((char *)((longlong)local_70 + 0x1d),"d buffer",8);
    *(char *)((longlong)local_70 + 0x25) = '\0';
    FUN_14053e350(lVar24,&local_70);
    if (0xf < local_58) {
      uVar21 = local_58 + 1;
      plVar22 = local_70;
      if (0xfff < uVar21) {
        plVar22 = (longlong *)local_70[-1];
        if ((char *)0x1f < (char *)((longlong)local_70 + (-8 - (longlong)plVar22))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar21 = local_58 + 0x28;
      }
      thunk_FUN_140b68ba8(plVar22,uVar21);
    }
  }
  else {
    memcpy(local_88,(void *)param_1[6],param_1[7] - param_1[6]);
    if ((this_00->CommandList_data).offset_0x1b0 == '\x01') {
      FUN_1407cdb60(local_50,param_1[2],0x20000);
      (local_50->CommandList_data).field_0xa74 = 1;
      this_00 = local_50;
    }
    nvrhi::d3d12::CommandList::vfunction59(this_00);
    bytes_of_scratch_space(this_00,param_1,local_80,local_78,param_4);
    if ((char)param_1[0x12] == '\x01') {
      lVar24 = (this_00->CommandList_data).offset_0x200;
      local_70 = param_1;
      (**(code **)(*param_1 + 8))();
      pplVar3 = *(longlong ***)(lVar24 + 0x30);
      if (pplVar3 == *(longlong ***)(lVar24 + 0x38)) {
        FUN_1406f5260(lVar24 + 0x28,pplVar3,&local_70);
        plVar22 = local_70;
      }
      else {
        plVar22 = (longlong *)0x0;
        if (pplVar3 == &local_70) {
          plVar22 = param_1;
          param_1 = (longlong *)0x0;
        }
        *pplVar3 = param_1;
        *(longlong *)(lVar24 + 0x30) = *(longlong *)(lVar24 + 0x30) + 8;
      }
      if (plVar22 != (longlong *)0x0) {
        local_70 = (longlong *)0x0;
        (**(code **)(*plVar22 + 0x10))();
      }
    }
  }
  return;
}

