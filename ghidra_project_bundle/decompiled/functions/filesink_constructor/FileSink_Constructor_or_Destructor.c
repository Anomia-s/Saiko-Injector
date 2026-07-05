/**
 * Function: FileSink_Constructor_or_Destructor
 * Address:  140280ec0
 * Signature: ulonglong __fastcall FileSink_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 697 bytes
 */


ulonglong ldv::scene::FileSink::FileSink_Constructor_or_Destructor(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  FileSink_vftable *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  FileSink_vftable *local_70;
  undefined8 *local_68;
  ulonglong local_58;
  longlong local_50;
  byte local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar5 = FUN_1401a9cc0();
  bVar1 = *(byte *)(lVar5 + 0x288);
  if ((bVar1 & 1) == 0) {
    lVar7 = param_1[0x1e];
    lVar5 = 0;
    lVar6 = local_50;
  }
  else {
    lVar5 = FUN_1401a9cc0();
    lVar5 = *(longlong *)(lVar5 + 0x290);
    lVar6 = FUN_1401a9e60();
    uVar8 = *(ulonglong *)(lVar6 + 0x28);
    lVar7 = lVar6;
    if ((uVar8 & 0xffff) == 0) {
      lVar7 = FUN_1400637c0(lVar6,uVar8);
    }
    lVar2 = *(longlong *)(lVar6 + 0x48);
    uVar10 = (ulonglong)(uint)((int)(uVar8 & 0xffff) << 5);
    *(undefined1 *)(lVar2 + uVar10) = 0xf;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar2 + 1 + uVar10) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar7 >> 0x20),(int)uVar3);
    *(undefined ***)(lVar2 + 9 + uVar10) = &PTR_s_Studio_Autosave_Project_140dfce38;
    *(ulonglong *)(lVar6 + 0x28) = uVar8 + 1;
    lVar7 = param_1[0x1e];
    lVar6 = local_50;
  }
  local_50 = lVar5;
  if (lVar7 == 0) {
    uVar8 = 0;
    lVar5 = local_50;
    local_50 = lVar6;
    goto joined_r0x0001402810ed;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 7;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 7;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0xf;
  local_80 = 0;
  local_78 = 0;
  local_41 = bVar1;
  worldldvautosave(&local_70);
  cVar4 = createfilew(&local_e8,&local_70);
  if (7 < local_58) {
    uVar8 = local_58 * 2 + 2;
    pFVar9 = local_70;
    if (0xfff < uVar8) {
      pFVar9 = (FileSink_vftable *)local_70[-1].vfunction4;
      if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pFVar9))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar8 = local_58 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(pFVar9,uVar8);
  }
  if (cVar4 == '\0') {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      FUN_140b5c2d0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dfce58,&uStack_a0);
    }
LAB_1402810d5:
    uVar8 = 0;
  }
  else {
    local_70 = &vftable;
    local_68 = &local_e8;
    cVar4 = FUN_1402be710(*param_1,&local_70);
    if (cVar4 == '\0') {
      if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
        FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dfce80);
      }
      goto LAB_1402810d5;
    }
    cVar4 = commit_file_not_open(&local_e8);
    uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (cVar4 == '\0') {
      if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
        FUN_140b5c2d0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dfcea8,&uStack_a0);
        goto LAB_1402810d5;
      }
      uVar8 = 0;
    }
  }
  bVar1 = local_41;
  FUN_140580070(&local_e8);
  lVar5 = local_50;
joined_r0x0001402810ed:
  if (((bVar1 & 1) != 0) && (lVar7 = FUN_1401a9cc0(), *(longlong *)(lVar7 + 0x290) == lVar5)) {
    lVar7 = FUN_1401a9e60();
    uVar3 = *(ulonglong *)(lVar7 + 0x28);
    lVar5 = lVar7;
    if ((uVar3 & 0xffff) == 0) {
      lVar5 = FUN_1400637c0(lVar7,uVar3);
    }
    lVar6 = *(longlong *)(lVar7 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
    *(undefined1 *)(lVar6 + uVar11) = 0x11;
    uVar10 = rdtsc();
    *(ulonglong *)(lVar6 + 1 + uVar11) =
         uVar10 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar10);
    *(ulonglong *)(lVar7 + 0x28) = uVar3 + 1;
  }
  return uVar8 & 0xffffffff;
}

