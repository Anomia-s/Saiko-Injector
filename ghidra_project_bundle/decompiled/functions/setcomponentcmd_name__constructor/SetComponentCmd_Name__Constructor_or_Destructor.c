/**
 * Function: SetComponentCmd<Name>_Constructor_or_Destructor
 * Address:  1400960e0
 * Signature: void __fastcall SetComponentCmd<Name>_Constructor_or_Destructor(int param_1, longlong param_2, undefined8 param_3, longlong param_4)
 * Body size: 356 bytes
 */


void ldv::editor::SetComponentCmd<Name>::SetComponentCmd<Name>_Constructor_or_Destructor
               (int param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined8 uVar18;
  char cVar19;
  undefined4 *puVar20;
  char *_Source;
  undefined8 *puVar21;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  QString local_58 [24];
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    uVar2 = **(undefined8 **)(param_4 + 8);
    cVar19 = FUN_1400b8670(*(undefined8 *)(lVar1 + 0x28),uVar2);
    if (cVar19 != '\0') {
      puVar21 = (undefined8 *)(lVar1 + 0x28);
      puVar20 = (undefined4 *)FUN_1400ba4f0(*puVar21,uVar2,DAT_14151f5f8);
      if (puVar20 != (undefined4 *)0x0) {
        QString::toUtf8_helper(local_58);
        _Source = QByteArray::data((QByteArray *)local_58);
        strncpy((char *)&local_98,_Source,0x3f);
        uStack_59 = 0;
        local_40 = (undefined8 *)FUN_140b65d30(0xa0);
        local_40[0x11] = local_68;
        local_40[0x12] = CONCAT17(uStack_59,uStack_60);
        local_40[0xf] = local_78;
        local_40[0x10] = uStack_70;
        local_40[0xd] = local_88;
        local_40[0xe] = uStack_80;
        local_40[0xb] = local_98;
        local_40[0xc] = uStack_90;
        uVar3 = puVar20[1];
        uVar4 = puVar20[2];
        uVar5 = puVar20[3];
        uVar6 = puVar20[4];
        uVar7 = puVar20[5];
        uVar8 = puVar20[6];
        uVar9 = puVar20[7];
        uVar10 = puVar20[8];
        uVar11 = puVar20[9];
        uVar12 = puVar20[10];
        uVar13 = puVar20[0xb];
        uVar14 = puVar20[0xc];
        uVar15 = puVar20[0xd];
        uVar16 = puVar20[0xe];
        uVar17 = puVar20[0xf];
        *(undefined4 *)(local_40 + 3) = *puVar20;
        *(undefined4 *)((longlong)local_40 + 0x1c) = uVar3;
        *(undefined4 *)(local_40 + 4) = uVar4;
        *(undefined4 *)((longlong)local_40 + 0x24) = uVar5;
        *(undefined4 *)(local_40 + 5) = uVar6;
        *(undefined4 *)((longlong)local_40 + 0x2c) = uVar7;
        *(undefined4 *)(local_40 + 6) = uVar8;
        *(undefined4 *)((longlong)local_40 + 0x34) = uVar9;
        *(undefined4 *)(local_40 + 7) = uVar10;
        *(undefined4 *)((longlong)local_40 + 0x3c) = uVar11;
        *(undefined4 *)(local_40 + 8) = uVar12;
        *(undefined4 *)((longlong)local_40 + 0x44) = uVar13;
        *(undefined4 *)(local_40 + 9) = uVar14;
        *(undefined4 *)((longlong)local_40 + 0x4c) = uVar15;
        *(undefined4 *)(local_40 + 10) = uVar16;
        *(undefined4 *)((longlong)local_40 + 0x54) = uVar17;
        uVar18 = DAT_14151f5f8;
        *local_40 = &vftable;
        local_40[1] = uVar2;
        local_40[2] = uVar18;
        local_40[0x13] = "Rename";
        FUN_140099d10(puVar21,&local_40);
        QByteArray::~QByteArray((QByteArray *)local_58);
      }
    }
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x18);
    return;
  }
  return;
}

