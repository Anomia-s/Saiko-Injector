/**
 * Function: GenericSetComponentCmd_Constructor_or_Destructor
 * Address:  1405665e0
 * Signature: void __fastcall GenericSetComponentCmd_Constructor_or_Destructor(int param_1, longlong param_2)
 * Body size: 561 bytes
 */


void ldv::editor::GenericSetComponentCmd::GenericSetComponentCmd_Constructor_or_Destructor
               (int param_1,longlong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  void *_Src;
  char *_Src_00;
  undefined8 *puVar7;
  undefined8 *_Dst;
  ulonglong _Size;
  undefined8 *puVar8;
  ulonglong _Size_00;
  undefined1 local_268 [256];
  undefined1 local_168 [256];
  QString local_68 [16];
  ulonglong local_58;
  undefined8 *local_50 [3];
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    cVar5 = FUN_1400b8670(**(undefined8 **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    if (cVar5 != '\0') {
      cVar5 = FUN_1400b9b40(**(undefined8 **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                            *(undefined8 *)(param_2 + 0x28));
      if (cVar5 != '\0') {
        if (*(longlong *)(param_2 + 0x30) == 0) {
          _Size_00 = 0;
          _Src = (void *)0x0;
        }
        else {
          _Src = (void *)FUN_1400ba4f0(**(undefined8 **)(param_2 + 0x10),
                                       *(undefined8 *)(param_2 + 0x18),
                                       *(undefined8 *)(param_2 + 0x28));
          _Size_00 = *(ulonglong *)(param_2 + 0x30);
        }
        memcpy(local_268,_Src,_Size_00);
        memcpy(local_168,_Src,_Size_00);
        QLineEdit::text(*(QLineEdit **)(param_2 + 0x70));
        QString::toUtf8_helper(local_68);
        QString::~QString((QString *)local_50);
        _Size = (ulonglong)*(ushort *)(param_2 + 0x4c) - 1;
        if (local_58 <= _Size) {
          _Size = local_58;
        }
        uVar1 = *(ushort *)(param_2 + 0x4a);
        _Src_00 = QByteArray::data((QByteArray *)local_68);
        memcpy(local_168 + uVar1,_Src_00,_Size);
        local_168[*(ushort *)(param_2 + 0x4a) + _Size] = 0;
        iVar6 = memcmp(local_268,local_168,_Size_00);
        if (iVar6 != 0) {
          uVar2 = *(undefined8 *)(param_2 + 0x10);
          puVar7 = (undefined8 *)FUN_140b65d30(0xa8);
          uVar3 = *(undefined8 *)(param_2 + 0x18);
          _Dst = *(undefined8 **)(param_2 + 0x28);
          uVar4 = *(undefined8 *)(param_2 + 0x40);
          *puVar7 = &vftable;
          puVar7[1] = uVar3;
          puVar7[2] = uVar4;
          puVar7[3] = _Dst;
          puVar7[4] = _Size_00;
          if (0x40 < _Size_00) {
            local_38 = puVar7;
            _Dst = (undefined8 *)thunk_FUN_140b65d30(_Size_00 * 2);
            local_38[5] = _Dst;
            puVar7 = local_38;
          }
          puVar8 = puVar7 + 5;
          if (_Size_00 < 0x41) {
            _Dst = puVar8;
          }
          memcpy(_Dst,local_268,_Size_00);
          if (0x40 < _Size_00) {
            puVar8 = (undefined8 *)puVar7[5];
          }
          memcpy((void *)((longlong)puVar8 + _Size_00),local_168,_Size_00);
          local_50[0] = puVar7;
          FUN_140099d10(uVar2,local_50);
        }
        QByteArray::~QByteArray((QByteArray *)local_68);
      }
    }
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x78);
    return;
  }
  return;
}

