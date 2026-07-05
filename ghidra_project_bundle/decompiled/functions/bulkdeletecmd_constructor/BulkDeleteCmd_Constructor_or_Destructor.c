/**
 * Function: BulkDeleteCmd_Constructor_or_Destructor
 * Address:  1402b8f90
 * Signature: void __fastcall BulkDeleteCmd_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 1214 bytes
 */


void ldv::editor::BulkDeleteCmd::BulkDeleteCmd_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 local_d0 [8];
  undefined8 *local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 *local_90;
  longlong local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_50;
  byte local_42;
  byte local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar9 = FUN_1401a9cc0();
  bVar14 = *(byte *)(lVar9 + 0x288);
  if ((bVar14 & 1) == 0) {
    lVar11 = 0;
    lVar9 = 0;
    if (param_1[2] == param_1[3]) goto LAB_1402b93c9;
  }
  else {
    lVar9 = FUN_1401a9cc0();
    lVar9 = *(longlong *)(lVar9 + 0x290);
    lVar10 = FUN_1401a9e60();
    uVar12 = *(ulonglong *)(lVar10 + 0x28);
    lVar11 = lVar10;
    if ((uVar12 & 0xffff) == 0) {
      lVar11 = FUN_1400637c0(lVar10,uVar12);
    }
    lVar1 = *(longlong *)(lVar10 + 0x48);
    uVar13 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar13) = 0xf;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar1 + 1 + uVar13) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar3);
    *(undefined ***)(lVar1 + 9 + uVar13) = &PTR_s_Studio_Cut_Selected_140e062f0;
    *(ulonglong *)(lVar10 + 0x28) = uVar12 + 1;
    lVar11 = lVar9;
    if (param_1[2] == param_1[3]) goto LAB_1402b93c9;
  }
  local_88 = lVar11;
  local_42 = bVar14;
  FUN_1402b96e0(param_1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_7c = 0;
  FUN_140067ea0(local_d0,&local_7c);
  lVar9 = FUN_1401a9cc0();
  local_41 = *(byte *)(lVar9 + 0x288);
  if ((local_41 & 1) == 0) {
    local_50 = 0;
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)param_1[3];
    if (puVar16 != puVar15) goto LAB_1402b9129;
  }
  else {
    lVar9 = FUN_1401a9cc0();
    lVar9 = *(longlong *)(lVar9 + 0x290);
    lVar10 = FUN_1401a9e60();
    uVar12 = *(ulonglong *)(lVar10 + 0x28);
    lVar11 = lVar10;
    if ((uVar12 & 0xffff) == 0) {
      lVar11 = FUN_1400637c0(lVar10,uVar12);
    }
    lVar1 = *(longlong *)(lVar10 + 0x48);
    uVar13 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar13) = 0xf;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar1 + 1 + uVar13) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar3);
    *(undefined ***)(lVar1 + 9 + uVar13) = &PTR_s_Studio_Cut_Gather_Targets_140e06310;
    *(ulonglong *)(lVar10 + 0x28) = uVar12 + 1;
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)param_1[3];
    local_50 = lVar9;
    if (puVar16 != puVar15) {
LAB_1402b9129:
      do {
        uVar2 = *puVar16;
        cVar8 = FUN_1400b8670(*param_1,uVar2);
        if (cVar8 != '\0') {
          FUN_1402b8260(*param_1,uVar2);
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar15);
    }
  }
  if (((local_41 & 1) != 0) && (lVar9 = FUN_1401a9cc0(), *(longlong *)(lVar9 + 0x290) == local_50))
  {
    lVar11 = FUN_1401a9e60();
    uVar12 = *(ulonglong *)(lVar11 + 0x28);
    lVar9 = lVar11;
    if ((uVar12 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar11,uVar12);
    }
    lVar10 = *(longlong *)(lVar11 + 0x48);
    uVar13 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
    *(undefined1 *)(lVar10 + uVar13) = 0x11;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar10 + 1 + uVar13) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    *(ulonglong *)(lVar11 + 0x28) = uVar12 + 1;
  }
  if (param_1[2] != param_1[3]) {
    param_1[3] = param_1[2];
  }
  if (local_78 == uStack_70) {
    FUN_140099e60(param_1,0);
  }
  else {
    lVar9 = FUN_1401a9cc0();
    local_41 = *(byte *)(lVar9 + 0x288);
    if ((local_41 & 1) == 0) {
      local_50 = 0;
    }
    else {
      lVar9 = FUN_1401a9cc0();
      local_50 = *(longlong *)(lVar9 + 0x290);
      lVar11 = FUN_1401a9e60();
      uVar12 = *(ulonglong *)(lVar11 + 0x28);
      lVar9 = lVar11;
      if ((uVar12 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar11,uVar12);
      }
      lVar10 = *(longlong *)(lVar11 + 0x48);
      uVar13 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
      *(undefined1 *)(lVar10 + uVar13) = 0xf;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar10 + 1 + uVar13) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
      *(undefined ***)(lVar10 + 9 + uVar13) = &PTR_s_Studio_Cut_Build_Command_140e06330;
      *(ulonglong *)(lVar11 + 0x28) = uVar12 + 1;
    }
    local_90 = (undefined8 *)FUN_140b65d30(0x50);
    lVar9 = local_68;
    local_68 = 0;
    *local_90 = &vftable;
    uVar4 = (undefined4)local_78;
    uVar5 = local_78._4_4_;
    uVar6 = (undefined4)uStack_70;
    uVar7 = uStack_70._4_4_;
    local_78 = 0;
    uStack_70 = 0;
    *(undefined4 *)(local_90 + 1) = uVar4;
    *(undefined4 *)((longlong)local_90 + 0xc) = uVar5;
    *(undefined4 *)(local_90 + 2) = uVar6;
    *(undefined4 *)((longlong)local_90 + 0x14) = uVar7;
    local_90[3] = lVar9;
    local_90[4] = 0;
    local_90[5] = 0;
    local_90[6] = 0;
    local_90[7] = 0;
    local_90[8] = 0;
    local_90[9] = 0;
    FUN_140099d10(param_1,&local_90);
    if (((local_41 & 1) != 0) && (lVar9 = FUN_1401a9cc0(), *(longlong *)(lVar9 + 0x290) == local_50)
       ) {
      lVar11 = FUN_1401a9e60();
      uVar12 = *(ulonglong *)(lVar11 + 0x28);
      lVar9 = lVar11;
      if ((uVar12 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar11,uVar12);
      }
      lVar10 = *(longlong *)(lVar11 + 0x48);
      uVar13 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
      *(undefined1 *)(lVar10 + uVar13) = 0x11;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar10 + 1 + uVar13) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
      *(ulonglong *)(lVar11 + 0x28) = uVar12 + 1;
    }
  }
  bVar14 = local_42;
  lVar9 = local_88;
  if (local_b8 != 0) {
    uVar12 = local_a8 - local_b8;
    lVar11 = local_b8;
    if (0xfff < uVar12) {
      lVar11 = *(longlong *)(local_b8 + -8);
      if (0x1f < (ulonglong)((local_b8 + -8) - lVar11)) goto LAB_1402b9435;
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar11,uVar12);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
  }
  *(undefined8 *)local_c8[1] = 0;
  puVar16 = (undefined8 *)*local_c8;
  while (puVar16 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)*puVar16;
    thunk_FUN_140b68ba8(puVar16,0x18);
    puVar16 = puVar15;
  }
  thunk_FUN_140b68ba8(local_c8,0x18);
  if (local_78 != 0) {
    uVar12 = local_68 - local_78;
    lVar11 = local_78;
    if (0xfff < uVar12) {
      lVar11 = *(longlong *)(local_78 + -8);
      if (0x1f < (ulonglong)((local_78 + -8) - lVar11)) {
LAB_1402b9435:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar11,uVar12);
  }
LAB_1402b93c9:
  if (((bVar14 & 1) != 0) && (lVar11 = FUN_1401a9cc0(), *(longlong *)(lVar11 + 0x290) == lVar9)) {
    lVar11 = FUN_1401a9e60();
    uVar12 = *(ulonglong *)(lVar11 + 0x28);
    lVar9 = lVar11;
    if ((uVar12 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar11,uVar12);
    }
    lVar10 = *(longlong *)(lVar11 + 0x48);
    uVar13 = (ulonglong)(uint)((int)(uVar12 & 0xffff) << 5);
    *(undefined1 *)(lVar10 + uVar13) = 0x11;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar10 + 1 + uVar13) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    *(ulonglong *)(lVar11 + 0x28) = uVar12 + 1;
  }
  return;
}

