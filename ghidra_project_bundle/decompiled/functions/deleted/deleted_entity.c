/**
 * Function: deleted_entity
 * Address:  140090d50
 * Signature: undefined deleted_entity(void)
 * Body size: 353 bytes
 */


void deleted_entity(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  QString local_68 [24];
  longlong local_50;
  byte local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar6 = FUN_1401a9cc0();
  bVar1 = *(byte *)(lVar6 + 0x288);
  if ((bVar1 & 1) == 0) {
    lVar6 = 0;
    if (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x40)) goto joined_r0x000140090dec;
  }
  else {
    lVar6 = FUN_1401a9cc0();
    lVar6 = *(longlong *)(lVar6 + 0x290);
    lVar7 = FUN_1401a9e60();
    uVar2 = *(ulonglong *)(lVar7 + 0x28);
    lVar8 = lVar7;
    if ((uVar2 & 0xffff) == 0) {
      lVar8 = FUN_1400637c0(lVar7,uVar2);
    }
    lVar3 = *(longlong *)(lVar7 + 0x48);
    uVar9 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
    *(undefined1 *)(lVar3 + uVar9) = 0xf;
    uVar5 = rdtsc();
    *(ulonglong *)(lVar3 + 1 + uVar9) =
         uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar8 >> 0x20),(int)uVar5);
    *(undefined ***)(lVar3 + 9 + uVar9) = &PTR_s_Studio_UI_Delete_Selected_140ddfc50;
    *(ulonglong *)(lVar7 + 0x28) = uVar2 + 1;
    if (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x40)) goto joined_r0x000140090dec;
  }
  local_50 = lVar6;
  local_41 = bVar1;
  ldv::editor::BulkDeleteCmd::BulkDeleteCmd_Constructor_or_Destructor
            ((undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x43ce8);
  QString::QString(local_68,"Deleted entity.");
  FUN_1402826c0(uVar4,local_68);
  QString::~QString(local_68);
  lVar6 = local_50;
  bVar1 = local_41;
joined_r0x000140090dec:
  if (((bVar1 & 1) != 0) && (lVar8 = FUN_1401a9cc0(), *(longlong *)(lVar8 + 0x290) == lVar6)) {
    lVar8 = FUN_1401a9e60();
    uVar2 = *(ulonglong *)(lVar8 + 0x28);
    lVar6 = lVar8;
    if ((uVar2 & 0xffff) == 0) {
      lVar6 = FUN_1400637c0(lVar8,uVar2);
    }
    lVar7 = *(longlong *)(lVar8 + 0x48);
    uVar9 = (ulonglong)(uint)((int)(uVar2 & 0xffff) << 5);
    *(undefined1 *)(lVar7 + uVar9) = 0x11;
    uVar5 = rdtsc();
    *(ulonglong *)(lVar7 + 1 + uVar9) =
         uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)uVar5);
    *(ulonglong *)(lVar8 + 0x28) = uVar2 + 1;
  }
  return;
}

