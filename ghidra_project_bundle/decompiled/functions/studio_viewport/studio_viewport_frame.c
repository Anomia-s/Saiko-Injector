/**
 * Function: studio_viewport_frame
 * Address:  14029ae60
 * Signature: void __thiscall studio_viewport_frame(void * this)
 * Body size: 634 bytes
 */


void __thiscall studio_viewport_frame(void *this)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar8;
  longlong lVar7;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong local_58;
  longlong local_50;
  
  lVar6 = FUN_1401a9cc0();
  if ((*(byte *)(lVar6 + 0x288) & 1) != 0) {
    lVar6 = FUN_1401a9cc0();
    AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xd8));
    puVar9 = *(undefined1 **)(lVar6 + 0xb0);
    uVar8 = extraout_var;
    if (puVar9 == *(undefined1 **)(lVar6 + 0xb8)) {
      FUN_1401a4720(lVar6 + 0xa8);
      puVar9 = *(undefined1 **)(lVar6 + 0xb0);
      uVar8 = extraout_var_00;
    }
    *puVar9 = 0x46;
    uVar4 = rdtsc();
    *(ulonglong *)(puVar9 + 1) = uVar4 & 0xffffffff00000000 | CONCAT44(uVar8,(int)uVar4);
    *(char **)(puVar9 + 9) = "Studio Viewport Frame";
    lVar6 = FUN_1401a9cc0();
    *(longlong *)(lVar6 + 0xb0) = *(longlong *)(lVar6 + 0xb0) + 0x20;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0xd8));
  }
  lVar6 = FUN_1401a9cc0();
  bVar1 = *(byte *)(lVar6 + 0x288);
  if ((bVar1 & 1) == 0) {
    local_58 = 0;
  }
  else {
    lVar6 = FUN_1401a9cc0();
    local_58 = *(longlong *)(lVar6 + 0x290);
    lVar7 = FUN_1401a9e60();
    uVar4 = *(ulonglong *)(lVar7 + 0x28);
    lVar6 = lVar7;
    if ((uVar4 & 0xffff) == 0) {
      lVar6 = FUN_1400637c0(lVar7,uVar4);
    }
    lVar3 = *(longlong *)(lVar7 + 0x48);
    uVar10 = (ulonglong)(uint)((int)(uVar4 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar10) = 0xf;
    uVar5 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar10) =
         uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar5);
    *(undefined ***)(lVar3 + 9 + uVar10) = &PTR_s_Studio_Viewport_Paint_140e02858;
    *(ulonglong *)(lVar7 + 0x28) = uVar4 + 1;
  }
  FUN_14029b240(this);
  if (*(char *)((longlong)this + 0x28) == '\x01') {
    lVar6 = FUN_1401a9cc0();
    bVar2 = *(byte *)(lVar6 + 0x288);
    if ((bVar2 & 1) == 0) {
      local_50 = 0;
    }
    else {
      lVar6 = FUN_1401a9cc0();
      local_50 = *(longlong *)(lVar6 + 0x290);
      lVar7 = FUN_1401a9e60();
      uVar4 = *(ulonglong *)(lVar7 + 0x28);
      lVar6 = lVar7;
      if ((uVar4 & 0xffff) == 0) {
        lVar6 = FUN_1400637c0(lVar7,uVar4);
      }
      lVar3 = *(longlong *)(lVar7 + 0x48);
      uVar10 = (ulonglong)(uint)((int)(uVar4 & 0xffff) << 5);
      *(undefined1 *)(lVar3 + uVar10) = 0xf;
      uVar5 = rdtsc();
      *(ulonglong *)(lVar3 + 1 + uVar10) =
           uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar5);
      *(undefined ***)(lVar3 + 9 + uVar10) = &PTR_s_Studio_Schedule_Repaint_140e02878;
      *(ulonglong *)(lVar7 + 0x28) = uVar4 + 1;
    }
    QWidget::update(this);
    if ((bVar2 & 1) != 0) {
      lVar6 = FUN_1401a9cc0();
      if (*(longlong *)(lVar6 + 0x290) == local_50) {
        lVar7 = FUN_1401a9e60();
        uVar4 = *(ulonglong *)(lVar7 + 0x28);
        lVar6 = lVar7;
        if ((uVar4 & 0xffff) == 0) {
          lVar6 = FUN_1400637c0(lVar7,uVar4);
        }
        lVar3 = *(longlong *)(lVar7 + 0x48);
        uVar10 = (ulonglong)(uint)((int)(uVar4 & 0xffff) << 5);
        *(undefined1 *)(lVar3 + uVar10) = 0x11;
        uVar5 = rdtsc();
        *(ulonglong *)(lVar3 + 1 + uVar10) =
             uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar5);
        *(ulonglong *)(lVar7 + 0x28) = uVar4 + 1;
      }
    }
  }
  if ((bVar1 & 1) != 0) {
    lVar6 = FUN_1401a9cc0();
    if (*(longlong *)(lVar6 + 0x290) == local_58) {
      lVar7 = FUN_1401a9e60();
      uVar4 = *(ulonglong *)(lVar7 + 0x28);
      lVar6 = lVar7;
      if ((uVar4 & 0xffff) == 0) {
        lVar6 = FUN_1400637c0(lVar7,uVar4);
      }
      lVar3 = *(longlong *)(lVar7 + 0x48);
      uVar10 = (ulonglong)(uint)((int)(uVar4 & 0xffff) << 5);
      *(undefined1 *)(lVar3 + uVar10) = 0x11;
      uVar5 = rdtsc();
      *(ulonglong *)(lVar3 + 1 + uVar10) =
           uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar5);
      *(ulonglong *)(lVar7 + 0x28) = uVar4 + 1;
    }
  }
  return;
}

