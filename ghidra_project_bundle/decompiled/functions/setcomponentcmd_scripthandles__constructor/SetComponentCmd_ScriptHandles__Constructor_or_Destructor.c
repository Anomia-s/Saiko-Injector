/**
 * Function: SetComponentCmd<ScriptHandles>_Constructor_or_Destructor
 * Address:  140264d20
 * Signature: void __fastcall SetComponentCmd<ScriptHandles>_Constructor_or_Destructor(int param_1, longlong param_2)
 * Body size: 487 bytes
 */


void ldv::editor::SetComponentCmd<ScriptHandles>::
     SetComponentCmd<ScriptHandles>_Constructor_or_Destructor(int param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  void *_Src;
  undefined8 *puVar9;
  longlong lVar10;
  char *_Str2;
  ulonglong uVar11;
  char *_Str1;
  undefined8 *local_180;
  undefined8 local_178;
  char acStack_170 [8];
  undefined8 local_168 [38];
  byte local_38;
  
  if (param_1 == 1) {
    cVar6 = FUN_1400b8670(**(undefined8 **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    if ((cVar6 != '\0') &&
       (_Src = (void *)FUN_1400ba4f0(**(undefined8 **)(param_2 + 0x10),
                                     *(undefined8 *)(param_2 + 0x18),DAT_14151f7a8),
       _Src != (void *)0x0)) {
      memcpy(&local_178,_Src,0x148);
      bVar5 = local_38;
      if (*(ulonglong *)(param_2 + 0x38) < 0x10) {
        _Str2 = (char *)(param_2 + 0x20);
      }
      else {
        _Str2 = *(char **)(param_2 + 0x20);
      }
      uVar11 = (ulonglong)local_38;
      if (uVar11 != 0) {
        _Str1 = acStack_170;
        do {
          iVar7 = strcmp(_Str1,_Str2);
          if (iVar7 == 0) {
            uVar11 = (ulonglong)(bVar5 - 1);
            *(undefined8 *)(_Str1 + 0x18) = local_168[uVar11 * 5 + 2];
            uVar2 = (&local_178)[uVar11 * 5];
            uVar3 = *(undefined8 *)(acStack_170 + uVar11 * 0x28);
            uVar4 = local_168[uVar11 * 5 + 1];
            *(undefined8 *)(_Str1 + 8) = local_168[uVar11 * 5];
            *(undefined8 *)(_Str1 + 0x10) = uVar4;
            *(undefined8 *)(_Str1 + -8) = uVar2;
            *(undefined8 *)_Str1 = uVar3;
            local_38 = local_38 - 1;
            break;
          }
          _Str1 = _Str1 + 0x28;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      puVar9 = (undefined8 *)FUN_140b65d30(0x2b0);
      memcpy(puVar9 + 0x2c,&local_178,0x148);
      memcpy(puVar9 + 3,_Src,0x148);
      uVar4 = DAT_14151f7a8;
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      *puVar9 = &vftable;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[0x55] = "RemoveSlot";
      local_180 = puVar9;
      FUN_140099d10(uVar2,&local_180);
    }
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    uVar11 = *(ulonglong *)(param_2 + 0x38);
    if (0xf < uVar11) {
      lVar1 = *(longlong *)(param_2 + 0x20);
      uVar8 = uVar11 + 1;
      lVar10 = lVar1;
      if (0xfff < uVar8) {
        lVar10 = *(longlong *)(lVar1 + -8);
        if (0x1f < (ulonglong)((lVar1 + -8) - lVar10)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar8 = uVar11 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar10,uVar8);
    }
    thunk_FUN_140b68ba8(param_2,0x40);
    return;
  }
  return;
}

