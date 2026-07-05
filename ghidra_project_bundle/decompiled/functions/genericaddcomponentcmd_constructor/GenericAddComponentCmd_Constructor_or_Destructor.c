/**
 * Function: GenericAddComponentCmd_Constructor_or_Destructor
 * Address:  14026e350
 * Signature: void __fastcall GenericAddComponentCmd_Constructor_or_Destructor(int param_1, longlong param_2)
 * Body size: 437 bytes
 */


void ldv::editor::GenericAddComponentCmd::GenericAddComponentCmd_Constructor_or_Destructor
               (int param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  void *pvVar6;
  ulonglong uVar7;
  size_t _Size;
  undefined8 *puVar8;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    cVar5 = FUN_1400b8670(**(undefined8 **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    if (cVar5 != '\0') {
      puVar8 = *(undefined8 **)(param_2 + 0x20);
      if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
        _Size = *(size_t *)(param_2 + 0x30);
      }
      else {
        _Size = 0;
      }
      local_58 = (void *)0x0;
      lStack_50 = 0;
      local_48 = 0;
      pvVar6 = *(void **)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x38) == (void *)0x0 && _Size != 0) {
        FUN_140060bf0(&local_58);
        pvVar6 = local_58;
        memset(local_58,0,_Size);
        puVar8 = *(undefined8 **)(param_2 + 0x20);
        lStack_50 = (longlong)pvVar6 + _Size;
        pvVar6 = local_58;
      }
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      local_70 = (undefined8 *)FUN_140b65d30(0x40);
      uVar2 = *puVar8;
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      *local_70 = &vftable;
      local_70[1] = uVar3;
      local_70[2] = uVar2;
      local_70[3] = uVar4;
      local_70[4] = _Size;
      local_70[5] = 0;
      local_70[6] = 0;
      local_70[7] = 0;
      if (pvVar6 != (void *)0x0 && _Size != 0) {
        local_60 = local_70 + 5;
        local_68 = local_70;
        FUN_140037db0(local_60,_Size,&local_70);
        memcpy((void *)*local_60,pvVar6,_Size);
        local_70 = local_68;
      }
      FUN_140099d10(uVar1,&local_70);
      if (local_58 != (void *)0x0) {
        uVar7 = local_48 - (longlong)local_58;
        pvVar6 = local_58;
        if (0xfff < uVar7) {
          pvVar6 = *(void **)((longlong)local_58 + -8);
          if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar7 = uVar7 + 0x27;
        }
        thunk_FUN_140b68ba8(pvVar6,uVar7);
      }
    }
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x40);
    return;
  }
  return;
}

