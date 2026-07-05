/**
 * Function: cannot_be_cleared_with_cleardepthstenciltextu
 * Address:  1406e1720
 * Signature: void __thiscall cannot_be_cleared_with_cleardepthstenciltextu(void * this, longlong * param_1, undefined4 * param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5, undefined1 param_6)
 * Body size: 1037 bytes
 */


void __thiscall
cannot_be_cleared_with_cleardepthstenciltextu
          (void *this,longlong *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined1 param_5,undefined1 param_6)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 ******ppppppuVar7;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar8;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_154;
  longlong local_150 [2];
  undefined1 local_140 [8];
  basic_streambuf<char,std::char_traits<char>_> local_138 [3];
  undefined8 *local_120;
  undefined8 *local_118;
  longlong *local_100;
  ulonglong *local_f8;
  int *local_e8;
  ulonglong local_d0;
  uint local_c8;
  ios_base local_b8 [6];
  undefined8 *****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  local_30 = 0xfffffffffffffffe;
  cVar2 = a_command_list_must_be_opened_before_any_rend();
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = operation_requires_at_least(this,0,"clearDepthStencilTexture");
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  lVar3 = FUN_1406e0030(*(undefined1 *)(lVar3 + 0x1c));
  if ((*(byte *)(lVar3 + 0x13) & 0x30) == 0) {
    FUN_1401e87c0(local_150,1);
    uVar4 = FUN_1400e5ec0(local_140,"Texture ");
    lVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    uVar5 = FUN_140527b30(lVar3 + 0x20);
    uVar4 = FUN_1400e5ec0(uVar4,uVar5);
    FUN_1400e5ec0(uVar4,
                  " cannot be cleared with clearDepthStencilTexture because it\'s not a depth-stencil texture. Use clearTextureFloat or clearTextureUInt instead."
                 );
    local_58 = (undefined8 ******)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    if (((local_c8 & 0x22) == 2) || (uVar6 = *local_f8, uVar6 == 0)) {
      if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
        uVar6 = *local_100 + (longlong)*local_e8;
        pvVar1 = (void *)*local_120;
        goto joined_r0x0001406e1972;
      }
    }
    else {
      if (uVar6 < local_d0) {
        uVar6 = local_d0;
      }
      pvVar1 = (void *)*local_118;
joined_r0x0001406e1972:
      if (pvVar1 != (void *)0x0) {
        uVar6 = uVar6 - (longlong)pvVar1;
        if (uVar6 < 0x10) {
          local_48 = uVar6;
          memmove(&local_58,pvVar1,uVar6);
          *(undefined1 *)((longlong)&local_58 + uVar6) = 0;
        }
        else {
          FUN_1400069b0(&local_58,uVar6);
        }
      }
    }
    ppppppuVar7 = (undefined8 ******)local_58;
    if (local_40 < 0x10) {
      ppppppuVar7 = &local_58;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,ppppppuVar7);
    goto LAB_1406e1a71;
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  if (*(char *)(lVar3 + 0x41) != '\0') {
    local_168 = *param_2;
    uStack_164 = param_2[1];
    uStack_160 = param_2[2];
    uStack_15c = param_2[3];
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x48))
              (*(longlong **)((longlong)this + 0x10),param_1,&local_168,param_3,
               CONCAT44(uVar8,param_4),param_5,param_6);
    return;
  }
  FUN_1401e87c0(local_150,1);
  uVar4 = FUN_1400e5ec0(local_140,"Texture ");
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar5 = FUN_140527b30(lVar3 + 0x20);
  uVar4 = FUN_1400e5ec0(uVar4,uVar5);
  FUN_1400e5ec0(uVar4,
                " cannot be cleared with clearDepthStencilTexture because it was created with isRenderTarget = false."
               );
  local_58 = (undefined8 ******)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_c8 & 0x22) == 2) || (uVar6 = *local_f8, uVar6 == 0)) {
    if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
      uVar6 = *local_100 + (longlong)*local_e8;
      pvVar1 = (void *)*local_120;
      goto joined_r0x0001406e19c1;
    }
  }
  else {
    if (uVar6 < local_d0) {
      uVar6 = local_d0;
    }
    pvVar1 = (void *)*local_118;
joined_r0x0001406e19c1:
    if (pvVar1 != (void *)0x0) {
      uVar6 = uVar6 - (longlong)pvVar1;
      if (uVar6 < 0x10) {
        local_48 = uVar6;
        memmove(&local_58,pvVar1,uVar6);
        *(undefined1 *)((longlong)&local_58 + uVar6) = 0;
      }
      else {
        FUN_1400069b0(&local_58,uVar6);
      }
    }
  }
  ppppppuVar7 = (undefined8 ******)local_58;
  if (local_40 < 0x10) {
    ppppppuVar7 = &local_58;
  }
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
            (*(longlong **)((longlong)this + 0x20),2,ppppppuVar7);
LAB_1406e1a71:
  if (0xf < local_40) {
    uVar6 = local_40 + 1;
    ppppppuVar7 = (undefined8 ******)local_58;
    if (0xfff < uVar6) {
      ppppppuVar7 = (undefined8 ******)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppppuVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(ppppppuVar7,uVar6);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_150 + (longlong)*(int *)(local_150[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_154 + (longlong)*(int *)(local_150[0] + 4)) =
       *(int *)(local_150[0] + 4) + -0x98;
  local_138[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_138);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_138);
  std::ios_base::~ios_base(local_b8);
  return;
}

