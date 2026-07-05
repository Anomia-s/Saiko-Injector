/**
 * Function: wr_pending_initial_render_slots
 * Address:  1404ec7f0
 * Signature: undefined wr_pending_initial_render_slots(void)
 * Body size: 915 bytes
 */


void wr_pending_initial_render_slots(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_58;
  
  if ((ulonglong)(*(longlong *)(param_1 + 0xf388) - *(longlong *)(param_1 + 0xf380) >> 3) <=
      *(ulonglong *)(param_1 + 0xf398)) {
    return;
  }
  lVar5 = FUN_1401a9cc0();
  bVar1 = *(byte *)(lVar5 + 0x288);
  if ((bVar1 & 1) == 0) {
    local_58 = 0;
  }
  else {
    lVar5 = FUN_1401a9cc0();
    local_58 = *(longlong *)(lVar5 + 0x290);
    lVar6 = FUN_1401a9e60();
    uVar9 = *(ulonglong *)(lVar6 + 0x28);
    lVar5 = lVar6;
    if ((uVar9 & 0xffff) == 0) {
      lVar5 = FUN_1400637c0(lVar6,uVar9);
    }
    lVar7 = *(longlong *)(lVar6 + 0x48);
    uVar8 = (ulonglong)(uint)((int)(uVar9 & 0xffff) << 5);
    *(undefined1 *)(lVar7 + uVar8) = 0xf;
    uVar10 = rdtsc();
    *(ulonglong *)(lVar7 + 1 + uVar8) =
         uVar10 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar10);
    *(undefined ***)(lVar7 + 9 + uVar8) = &PTR_s_WR_Populate_Initial_Render_Slots_140e49ae0;
    *(ulonglong *)(lVar6 + 0x28) = uVar9 + 1;
  }
  uVar10 = (*(longlong *)(param_1 + 0xf388) - *(longlong *)(param_1 + 0xf380) >> 3) -
           *(longlong *)(param_1 + 0xf398);
  uVar9 = *(longlong *)(param_1 + 0xf3a0) + (ulonglong)(*(longlong *)(param_1 + 0xf3a0) == 0);
  if (uVar10 < uVar9) {
    uVar9 = uVar10;
  }
  if (((bVar1 & 1) != 0) && (lVar5 = FUN_1401a9cc0(), *(longlong *)(lVar5 + 0x290) == local_58)) {
    lVar5 = FUN_1401a9e60();
    uVar8 = *(ulonglong *)(lVar5 + 0x28);
    if ((uVar8 & 0xffff) == 0) {
      FUN_1400637c0(lVar5,uVar8);
    }
    lVar6 = *(longlong *)(lVar5 + 0x48);
    uVar11 = (ulonglong)(uint)((int)(uVar8 & 0xffff) << 5);
    *(undefined1 *)(lVar6 + uVar11) = 0x45;
    *(ulonglong *)(lVar6 + 1 + uVar11) = uVar9;
    *(ulonglong *)(lVar5 + 0x28) = uVar8 + 1;
  }
  lVar5 = FUN_1401a9cc0();
  if ((*(byte *)(lVar5 + 0x288) & 1) != 0) {
    lVar5 = FUN_1401a9e60();
    uVar8 = *(ulonglong *)(lVar5 + 0x28);
    if ((uVar8 & 0xffff) == 0) {
      FUN_1400637c0(lVar5,uVar8);
    }
    lVar6 = *(longlong *)(lVar5 + 0x48);
    uVar12 = (ulonglong)(uint)((int)(uVar8 & 0xffff) << 5);
    *(undefined1 *)(lVar6 + uVar12) = 0x2d;
    *(char **)(lVar6 + 1 + uVar12) = "WR Pending Initial Render Slots";
    uVar11 = rdtsc();
    *(ulonglong *)(lVar6 + 9 + uVar12) = uVar11 & 0xffffffff00000000 | CONCAT44(1,(int)uVar11);
    *(ulonglong *)(lVar6 + 0x11 + uVar12) = uVar10;
    *(ulonglong *)(lVar5 + 0x28) = uVar8 + 1;
  }
  uVar10 = *(ulonglong *)(param_1 + 0xf398);
  uVar9 = uVar9 + uVar10;
  while (uVar10 < uVar9) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf380) + uVar10 * 8);
    if ((lVar5 != 0) && (cVar4 = FUN_1400b8670(param_2,lVar5), cVar4 != '\0')) {
      FUN_1404eb130(param_1,param_2,lVar5,param_3);
    }
    uVar10 = *(longlong *)(param_1 + 0xf398) + 1;
    *(ulonglong *)(param_1 + 0xf398) = uVar10;
  }
  if (uVar10 < (ulonglong)(*(longlong *)(param_1 + 0xf388) - *(longlong *)(param_1 + 0xf380) >> 3))
  goto LAB_1404ecb24;
  lVar5 = FUN_1401a9cc0();
  bVar2 = *(byte *)(lVar5 + 0x288);
  if ((bVar2 & 1) == 0) {
    lVar5 = 0;
    lVar6 = *(longlong *)(param_1 + 0xf380);
    if (lVar6 != *(longlong *)(param_1 + 0xf388)) goto LAB_1404ecab8;
  }
  else {
    lVar5 = FUN_1401a9cc0();
    lVar5 = *(longlong *)(lVar5 + 0x290);
    lVar7 = FUN_1401a9e60();
    uVar9 = *(ulonglong *)(lVar7 + 0x28);
    lVar6 = lVar7;
    if ((uVar9 & 0xffff) == 0) {
      lVar6 = FUN_1400637c0(lVar7,uVar9);
    }
    lVar3 = *(longlong *)(lVar7 + 0x48);
    uVar8 = (ulonglong)(uint)((int)(uVar9 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar8) = 0xf;
    uVar10 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar8) =
         uVar10 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar10);
    *(undefined ***)(lVar3 + 9 + uVar8) = &PTR_s_WR_Clear_Initial_Slot_Queue_140e49b00;
    *(ulonglong *)(lVar7 + 0x28) = uVar9 + 1;
    lVar6 = *(longlong *)(param_1 + 0xf380);
    if (lVar6 != *(longlong *)(param_1 + 0xf388)) {
LAB_1404ecab8:
      *(longlong *)(param_1 + 0xf388) = lVar6;
    }
  }
  *(undefined8 *)(param_1 + 0xf398) = 0;
  if (((bVar2 & 1) != 0) && (lVar6 = FUN_1401a9cc0(), *(longlong *)(lVar6 + 0x290) == lVar5)) {
    lVar6 = FUN_1401a9e60();
    uVar9 = *(ulonglong *)(lVar6 + 0x28);
    lVar5 = lVar6;
    if ((uVar9 & 0xffff) == 0) {
      lVar5 = FUN_1400637c0(lVar6,uVar9);
    }
    lVar7 = *(longlong *)(lVar6 + 0x48);
    uVar8 = (ulonglong)(uint)((int)(uVar9 & 0xffff) << 5);
    *(undefined1 *)(lVar7 + uVar8) = 0x11;
    uVar10 = rdtsc();
    *(ulonglong *)(lVar7 + 1 + uVar8) =
         uVar10 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar10);
    *(ulonglong *)(lVar6 + 0x28) = uVar9 + 1;
  }
LAB_1404ecb24:
  if (((bVar1 & 1) != 0) && (lVar5 = FUN_1401a9cc0(), *(longlong *)(lVar5 + 0x290) == local_58)) {
    lVar6 = FUN_1401a9e60();
    uVar9 = *(ulonglong *)(lVar6 + 0x28);
    lVar5 = lVar6;
    if ((uVar9 & 0xffff) == 0) {
      lVar5 = FUN_1400637c0(lVar6,uVar9);
    }
    lVar7 = *(longlong *)(lVar6 + 0x48);
    uVar8 = (ulonglong)(uint)((int)(uVar9 & 0xffff) << 5);
    *(undefined1 *)(lVar7 + uVar8) = 0x11;
    uVar10 = rdtsc();
    *(ulonglong *)(lVar7 + 1 + uVar8) =
         uVar10 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar10);
    *(ulonglong *)(lVar6 + 0x28) = uVar9 + 1;
  }
  return;
}

