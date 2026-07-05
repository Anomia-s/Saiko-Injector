/**
 * Function: uscene_render_slots_ready_1_2_entities
 * Address:  140095940
 * Signature: undefined uscene_render_slots_ready_1_2_entities(void)
 * Body size: 426 bytes
 */


void uscene_render_slots_ready_1_2_entities
               (int param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  QString local_88 [24];
  QString local_70 [24];
  QString local_58 [24];
  int *local_40;
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x43ce8);
    if (lVar1 != 0) {
      uVar2 = **(ulonglong **)(param_4 + 8);
      lVar3 = **(longlong **)(param_4 + 0x10);
      if (lVar3 - 1U < uVar2) {
        local_40 = (int *)0x0;
        local_38 = L"Scene render slots ready: %1 / %2 entities";
        local_30 = 0x2a;
        QString::QString(local_58,(QArrayDataPointer<char16_t> *)&local_40);
        QString::arg(local_58,local_70,uVar2,0,10,0x20);
        QString::arg(local_70,local_88,lVar3,0,10,0x20);
        FUN_1402826c0(lVar1,local_88);
      }
      else {
        local_40 = (int *)0x0;
        local_38 = L"Preparing scene render slots: %1 / %2 entities";
        local_30 = 0x2e;
        QString::QString(local_58,(QArrayDataPointer<char16_t> *)&local_40);
        QString::arg(local_58,local_70,uVar2,0,10,0x20);
        QString::arg(local_70,local_88,lVar3,0,10,0x20);
        FUN_1402826c0(lVar1,local_88);
      }
      QString::~QString(local_88);
      QString::~QString(local_70);
      QString::~QString(local_58);
      if (local_40 != (int *)0x0) {
        LOCK();
        *local_40 = *local_40 + -1;
        UNLOCK();
        if (*local_40 == 0) {
          free(local_40);
        }
      }
    }
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x18);
    return;
  }
  return;
}

