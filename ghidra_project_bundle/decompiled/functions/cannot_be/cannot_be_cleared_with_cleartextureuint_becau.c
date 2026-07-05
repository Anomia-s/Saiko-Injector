/**
 * Function: cannot_be_cleared_with_cleartextureuint_becau
 * Address:  1406e1c50
 * Signature: void __thiscall cannot_be_cleared_with_cleartextureuint_becau(void * this, longlong * param_1, undefined4 * param_2, undefined4 param_3)
 * Body size: 1141 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall
cannot_be_cleared_with_cleartextureuint_becau
          (void *this,longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  void *pvVar10;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_154;
  longlong local_150 [2];
  undefined1 local_140 [8];
  basic_streambuf<char,std::char_traits<char>_> local_138 [3];
  longlong *local_120;
  longlong *local_118 [3];
  longlong *local_100;
  ulonglong *local_f8;
  int *local_e8;
  ulonglong local_d0;
  uint local_c8;
  ios_base local_b8 [6];
  undefined8 *******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  pplVar7 = local_118;
  local_38 = 0xfffffffffffffffe;
  cVar2 = a_command_list_must_be_opened_before_any_rend();
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = operation_requires_at_least(this,1,"clearTextureUInt");
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  lVar4 = FUN_1406e0030(*(undefined1 *)(lVar3 + 0x1c));
  if ((*(byte *)(lVar4 + 0x13) & 0x30) == 0) {
    if (*(char *)(lVar4 + 0x12) == '\0') {
      if ((*(char *)(lVar3 + 0x41) == '\0') && (*(char *)(lVar3 + 0x42) == '\0')) {
        FUN_1401e87c0(local_150,1);
        uVar5 = FUN_1400e5ec0(local_140,"Texture ");
        uVar6 = FUN_140527b30(lVar3 + 0x20);
        uVar5 = FUN_1400e5ec0(uVar5,uVar6);
        FUN_1400e5ec0(uVar5,
                      " cannot be cleared with clearTextureUInt because it was created with both isRenderTarget = false and isUAV = false."
                     );
        FUN_140514890(local_150,&local_58);
        pppppppuVar9 = &local_58;
        if (0xf < local_40) {
          pppppppuVar9 = local_58;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pppppppuVar9);
        FUN_140004b30(&local_58);
        FUN_1401e8970(local_150);
        return;
      }
      local_168 = *param_2;
      uStack_164 = param_2[1];
      uStack_160 = param_2[2];
      uStack_15c = param_2[3];
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x50))
                (*(longlong **)((longlong)this + 0x10),param_1,&local_168,param_3);
      return;
    }
    FUN_1401e87c0(local_150,1);
    uVar5 = FUN_1400e5ec0(local_140,"Texture ");
    uVar6 = FUN_140527b30(lVar3 + 0x20);
    uVar5 = FUN_1400e5ec0(uVar5,uVar6);
    FUN_1400e5ec0(uVar5,
                  " cannot be cleared with clearTextureUInt because it\'s not an integer texture. Use clearTextureFloat instead."
                 );
    local_58 = (undefined8 *******)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    if (((local_c8 & 0x22) == 2) || (uVar8 = *local_f8, uVar8 == 0)) {
      if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
        pplVar7 = &local_120;
        uVar8 = *local_100 + (longlong)*local_e8;
        goto LAB_1406e1e83;
      }
    }
    else {
      if (uVar8 < local_d0) {
        uVar8 = local_d0;
      }
LAB_1406e1e83:
      pvVar10 = (void *)**pplVar7;
      if (pvVar10 != (void *)0x0) {
        uVar8 = uVar8 - (longlong)pvVar10;
        if (uVar8 < 0x10) {
          local_48 = uVar8;
          memmove(&local_58,pvVar10,uVar8);
          *(undefined1 *)((longlong)&local_58 + uVar8) = 0;
        }
        else {
          FUN_1400069b0(&local_58,uVar8);
        }
      }
    }
    pppppppuVar9 = local_58;
    if (local_40 < 0x10) {
      pppppppuVar9 = &local_58;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pppppppuVar9);
    goto LAB_1406e1f6f;
  }
  FUN_1401e87c0(local_150,1);
  uVar5 = FUN_1400e5ec0(local_140,"Texture ");
  uVar6 = FUN_140527b30(lVar3 + 0x20);
  uVar5 = FUN_1400e5ec0(uVar5,uVar6);
  FUN_1400e5ec0(uVar5,
                " cannot be cleared with clearTextureUInt because it\'s a depth-stencil texture. Use clearDepthStencilTexture instead."
               );
  local_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_c8 & 0x22) == 2) || (uVar8 = *local_f8, uVar8 == 0)) {
    if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
      uVar8 = *local_100 + (longlong)*local_e8;
      pvVar10 = (void *)*local_120;
      if (pvVar10 != (void *)0x0) goto LAB_1406e1d88;
    }
LAB_1406e1da4:
    plVar1 = *(longlong **)((longlong)this + 0x20);
  }
  else {
    if (uVar8 < local_d0) {
      uVar8 = local_d0;
    }
    pvVar10 = (void *)*local_118[0];
    if (pvVar10 == (void *)0x0) goto LAB_1406e1da4;
LAB_1406e1d88:
    uVar8 = uVar8 - (longlong)pvVar10;
    if (0xf < uVar8) {
      FUN_1400069b0(&local_58,uVar8);
      goto LAB_1406e1da4;
    }
    local_48 = uVar8;
    memmove(&local_58,pvVar10,uVar8);
    *(undefined1 *)((longlong)&local_58 + uVar8) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x20);
  }
  pppppppuVar9 = local_58;
  if (local_40 < 0x10) {
    pppppppuVar9 = &local_58;
  }
  (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar9);
LAB_1406e1f6f:
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pppppppuVar9 = local_58;
    if (0xfff < uVar8) {
      pppppppuVar9 = (undefined8 *******)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar9))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar9,uVar8);
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

