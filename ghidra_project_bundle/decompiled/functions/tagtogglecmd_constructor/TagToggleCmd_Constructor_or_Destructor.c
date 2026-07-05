/**
 * Function: TagToggleCmd_Constructor_or_Destructor
 * Address:  14026bbb0
 * Signature: void __fastcall TagToggleCmd_Constructor_or_Destructor(int param_1, longlong param_2, undefined8 param_3, longlong param_4)
 * Body size: 180 bytes
 */


void ldv::editor::_anon_50FDBD9D::TagToggleCmd::TagToggleCmd_Constructor_or_Destructor
               (int param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined8 *local_30;
  
  if (param_1 == 1) {
    uVar1 = **(undefined1 **)(param_4 + 8);
    cVar12 = FUN_1400b8670(**(undefined8 **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    if (cVar12 != '\0') {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      uVar4 = **(undefined8 **)(param_2 + 0x20);
      local_30 = (undefined8 *)FUN_140b65d30(0x40);
      *local_30 = &vftable;
      local_30[1] = uVar3;
      *(undefined1 *)(local_30 + 2) = uVar1;
      uVar5 = *(undefined4 *)(param_2 + 0x24);
      uVar6 = *(undefined4 *)(param_2 + 0x28);
      uVar7 = *(undefined4 *)(param_2 + 0x2c);
      uVar8 = *(undefined4 *)(param_2 + 0x30);
      uVar9 = *(undefined4 *)(param_2 + 0x34);
      uVar10 = *(undefined4 *)(param_2 + 0x38);
      uVar11 = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(local_30 + 3) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)((longlong)local_30 + 0x1c) = uVar5;
      *(undefined4 *)(local_30 + 4) = uVar6;
      *(undefined4 *)((longlong)local_30 + 0x24) = uVar7;
      *(undefined4 *)(local_30 + 5) = uVar8;
      *(undefined4 *)((longlong)local_30 + 0x2c) = uVar9;
      *(undefined4 *)(local_30 + 6) = uVar10;
      *(undefined4 *)((longlong)local_30 + 0x34) = uVar11;
      local_30[7] = uVar4;
      FUN_140099d10(uVar2,&local_30);
    }
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x40);
    return;
  }
  return;
}

