/**
 * Function: auto_saved_recovery_file
 * Address:  14008cdd0
 * Signature: undefined auto_saved_recovery_file(void)
 * Body size: 440 bytes
 */


void auto_saved_recovery_file(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  QString local_68 [24];
  longlong local_50;
  byte local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar3 = FUN_1401a9cc0();
  bVar8 = *(byte *)(lVar3 + 0x288);
  if ((bVar8 & 1) == 0) {
    lVar3 = 0;
    lVar5 = *(longlong *)(param_1 + 0x118);
  }
  else {
    lVar3 = FUN_1401a9cc0();
    lVar3 = *(longlong *)(lVar3 + 0x290);
    lVar4 = FUN_1401a9e60();
    uVar6 = *(ulonglong *)(lVar4 + 0x28);
    lVar5 = lVar4;
    if ((uVar6 & 0xffff) == 0) {
      lVar5 = FUN_1400637c0(lVar4,uVar6);
    }
    lVar1 = *(longlong *)(lVar4 + 0x48);
    uVar7 = (ulonglong)(uint)((int)(uVar6 & 0xffff) << 5);
    *(undefined1 *)(lVar1 + uVar7) = 0xf;
    uVar2 = rdtsc();
    *(ulonglong *)(lVar1 + 1 + uVar7) =
         uVar2 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar2);
    *(undefined ***)(lVar1 + 9 + uVar7) = &PTR_s_Studio_UI_Auto_Save_140ddfd10;
    *(ulonglong *)(lVar4 + 0x28) = uVar6 + 1;
    lVar5 = *(longlong *)(param_1 + 0x118);
  }
  if (((lVar5 != 0) && (*(char *)(param_1 + 0x138) != '\0')) && (*(char *)(param_1 + 0x140) == '\0')
     ) {
    local_50 = lVar3;
    local_41 = bVar8;
    uVar6 = ldv::scene::FileSink::FileSink_Constructor_or_Destructor((undefined8 *)(param_1 + 0x28))
    ;
    lVar5 = *(longlong *)(param_1 + 0x43ce8);
    lVar3 = local_50;
    bVar8 = local_41;
    if ((char)uVar6 == '\0') {
      if (lVar5 == 0) goto LAB_14008cf1f;
      QString::QString(local_68,"Auto-save failed.");
      FUN_140282ac0(lVar5,local_68);
    }
    else {
      if (lVar5 == 0) goto LAB_14008cf1f;
      QString::QString(local_68,"Auto-saved recovery file.");
      FUN_1402826c0(lVar5,local_68);
    }
    QString::~QString(local_68);
    lVar3 = local_50;
    bVar8 = local_41;
  }
LAB_14008cf1f:
  if (((bVar8 & 1) != 0) && (lVar5 = FUN_1401a9cc0(), *(longlong *)(lVar5 + 0x290) == lVar3)) {
    lVar5 = FUN_1401a9e60();
    uVar6 = *(ulonglong *)(lVar5 + 0x28);
    lVar3 = lVar5;
    if ((uVar6 & 0xffff) == 0) {
      lVar3 = FUN_1400637c0(lVar5,uVar6);
    }
    lVar4 = *(longlong *)(lVar5 + 0x48);
    uVar7 = (ulonglong)(uint)((int)(uVar6 & 0xffff) << 5);
    *(undefined1 *)(lVar4 + uVar7) = 0x11;
    uVar2 = rdtsc();
    *(ulonglong *)(lVar4 + 1 + uVar7) =
         uVar2 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar3 >> 0x20),(int)uVar2);
    *(ulonglong *)(lVar5 + 0x28) = uVar6 + 1;
  }
  return;
}

