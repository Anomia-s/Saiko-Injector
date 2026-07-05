/**
 * Function: add_handle_slot
 * Address:  140264f10
 * Signature: void __fastcall add_handle_slot(int param_1, longlong param_2)
 * Body size: 721 bytes
 */


void add_handle_slot(int param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  void *_Src;
  char *pcVar7;
  undefined8 *puVar8;
  char *_Str1;
  ulonglong uVar9;
  ulonglong uVar10;
  QString local_300 [328];
  QString local_1b8 [8];
  char local_1b0 [31];
  undefined1 auStack_191 [281];
  byte local_78;
  QString local_70 [16];
  longlong local_60;
  undefined8 *local_58 [3];
  char local_39 [9];
  
  local_39[1] = -2;
  local_39[2] = -1;
  local_39[3] = -1;
  local_39[4] = -1;
  local_39[5] = -1;
  local_39[6] = -1;
  local_39[7] = -1;
  local_39[8] = -1;
  if (param_1 != 1) {
    if (param_1 != 0) {
      return;
    }
    if (param_2 == 0) {
      return;
    }
    thunk_FUN_140b68ba8(param_2,0x28);
    return;
  }
  cVar5 = FUN_1400b8670(**(undefined8 **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  if (cVar5 == '\0') {
    return;
  }
  local_39[0] = '\0';
  QString::QString(local_300,"");
  QString::QString(local_1b8,"Slot name:");
  QString::QString((QString *)local_58,"Add Handle Slot");
  QInputDialog::getText
            (local_70,*(undefined8 *)(param_2 + 0x20),local_58,local_1b8,0,local_300,local_39,0,0);
  QString::~QString((QString *)local_58);
  QString::~QString(local_1b8);
  QString::~QString(local_300);
  if (((local_39[0] != '\x01') || (local_60 == 0)) ||
     (_Src = (void *)FUN_1400ba4f0(**(undefined8 **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18)
                                   ,DAT_14151f7a8), _Src == (void *)0x0)) goto LAB_1402651c3;
  memcpy(local_300,_Src,0x148);
  memcpy(local_1b8,_Src,0x148);
  QString::toUtf8_helper((QString *)local_58);
  pcVar7 = QByteArray::data((QByteArray *)local_58);
  bVar4 = local_78;
  uVar9 = (ulonglong)local_78;
  if (uVar9 == 0) {
    uVar9 = 0;
LAB_1402650f3:
    strncpy(local_1b0 + uVar9 * 0x28,pcVar7,0x1f);
    auStack_191[uVar9 * 0x28] = 0;
    pcVar7 = local_1b0 + uVar9 * 0x28 + -8;
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7[4] = '\0';
    pcVar7[5] = '\0';
    pcVar7[6] = '\0';
    pcVar7[7] = '\0';
    local_78 = local_78 + 1;
  }
  else {
    _Str1 = local_1b0;
    uVar10 = uVar9;
    do {
      iVar6 = strcmp(_Str1,pcVar7);
      if (iVar6 == 0) {
        _Str1[-8] = '\0';
        _Str1[-7] = '\0';
        _Str1[-6] = '\0';
        _Str1[-5] = '\0';
        _Str1[-4] = '\0';
        _Str1[-3] = '\0';
        _Str1[-2] = '\0';
        _Str1[-1] = '\0';
        goto LAB_140265135;
      }
      _Str1 = _Str1 + 0x28;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (bVar4 < 8) goto LAB_1402650f3;
  }
LAB_140265135:
  QByteArray::~QByteArray((QByteArray *)local_58);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  puVar8 = (undefined8 *)FUN_140b65d30(0x2b0);
  memcpy(puVar8 + 0x2c,local_1b8,0x148);
  memcpy(puVar8 + 3,local_300,0x148);
  uVar3 = DAT_14151f7a8;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *puVar8 = &ldv::editor::SetComponentCmd<ScriptHandles>::vftable;
  puVar8[1] = uVar2;
  puVar8[2] = uVar3;
  puVar8[0x55] = "AddSlot";
  local_58[0] = puVar8;
  FUN_140099d10(uVar1,local_58);
LAB_1402651c3:
  QString::~QString(local_70);
  return;
}

