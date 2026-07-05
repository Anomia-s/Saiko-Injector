/**
 * Function: GenericRemoveComponentCmd_Constructor_or_Destructor
 * Address:  14026bcd0
 * Signature: void __fastcall GenericRemoveComponentCmd_Constructor_or_Destructor(int param_1, longlong param_2)
 * Body size: 319 bytes
 */


void ldv::editor::GenericRemoveComponentCmd::GenericRemoveComponentCmd_Constructor_or_Destructor
               (int param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  void *_Src;
  void *_Size;
  undefined8 *puVar6;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    cVar5 = FUN_1400b8670(**(undefined8 **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    if (cVar5 != '\0') {
      puVar6 = *(undefined8 **)(param_2 + 0x20);
      _Src = (void *)0x0;
      _Size = *(void **)(param_2 + 0x30);
      if (*(char *)((longlong)puVar6 + 0x19) != '\0') {
        _Size = _Src;
      }
      if (*(void **)(param_2 + 0x30) != (void *)0x0 && _Size != (void *)0x0) {
        _Src = (void *)FUN_1400ba4f0(**(undefined8 **)(param_2 + 0x10),
                                     *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x28)
                                    );
        puVar6 = *(undefined8 **)(param_2 + 0x20);
      }
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      local_58 = (undefined8 *)FUN_140b65d30(0x40);
      uVar2 = *puVar6;
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      *local_58 = &vftable;
      local_58[1] = uVar3;
      local_58[2] = uVar2;
      local_58[3] = uVar4;
      local_58[4] = _Size;
      local_58[5] = 0;
      local_58[6] = 0;
      local_58[7] = 0;
      if ((_Size != (void *)0x0) && (_Src != (void *)0x0)) {
        local_48 = local_58 + 5;
        local_50 = local_58;
        FUN_140037db0(local_48,_Size,&local_39);
        memcpy((void *)*local_48,_Src,(size_t)_Size);
        local_58 = local_50;
      }
      FUN_140099d10(uVar1,&local_58);
    }
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x40);
    return;
  }
  return;
}

