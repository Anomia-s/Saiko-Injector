/**
 * Function: volatile_constant_buffer
 * Address:  140515fc0
 * Signature: undefined8 * __thiscall volatile_constant_buffer(void * this, undefined8 * param_1, undefined8 * param_2)
 * Body size: 2975 bytes
 */


undefined8 * __thiscall volatile_constant_buffer(void *this,undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  showmanyc **ppsVar3;
  basic_streambuf<char,std::char_traits<char>_> bVar4;
  char ******ppppppcVar5;
  undefined8 uVar6;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  ulonglong uVar7;
  char *******pppppppcVar8;
  longlong **pplVar9;
  undefined8 *******pppppppuVar10;
  void *pvVar11;
  undefined8 *_Src;
  basic_streambuf<char,std::char_traits<char>_> bVar12;
  int iStack_1bc;
  char ******local_1b8 [2];
  ulonglong local_1a8;
  basic_streambuf<char,std::char_traits<char>_> abStack_1a0 [3];
  longlong *local_188;
  longlong *local_180 [3];
  longlong *local_168;
  ulonglong *local_160;
  int *local_150;
  ulonglong local_138;
  uint local_130;
  ios_base local_120 [6];
  undefined8 local_b8;
  undefined8 uStack_b0;
  char ******local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  basic_streambuf<char,std::char_traits<char>_> bStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 ******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  local_a8 = (char ******)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  bStack_90 = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  uVar7 = param_2[4];
  if ((ulonglong)param_2[5] < 0x10) {
    _Src = param_2 + 2;
  }
  else {
    _Src = (undefined8 *)param_2[2];
  }
  if ((longlong)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (uVar7 < 0x10) {
    bStack_90 = (basic_streambuf<char,std::char_traits<char>_>)0xf;
    local_a8 = (char ******)*_Src;
    uStack_a0 = _Src[1];
    uStack_88 = *(undefined4 *)(param_2 + 6);
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_80 = *(undefined4 *)(param_2 + 7);
    local_7c = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_78 = *(undefined4 *)(param_2 + 8);
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_70 = *(undefined4 *)(param_2 + 9);
    local_98 = uVar7;
    if (uVar7 == 0) {
      isvolatile_maxversions(local_1b8,&local_b8);
      if (0xf < (ulonglong)bStack_90) {
        ppsVar3 = (showmanyc **)((longlong)bStack_90 + 1);
        pppppppcVar8 = (char *******)local_a8;
        if ((showmanyc **)0xfff < ppsVar3) {
          pppppppcVar8 = (char *******)local_a8[-1];
          if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppppcVar8)))
          goto LAB_140516b46;
          ppsVar3 = (showmanyc **)((longlong)bStack_90 + 0x28);
        }
        thunk_FUN_140b68ba8(pppppppcVar8,ppsVar3);
      }
      local_98 = local_1a8;
      bStack_90 = abStack_1a0[0];
      local_a8 = local_1b8[0];
      uStack_a0 = local_1b8[1];
    }
  }
  else {
    bVar4 = (basic_streambuf<char,std::char_traits<char>_>)(uVar7 | 0xf);
    bVar12 = (basic_streambuf<char,std::char_traits<char>_>)0x16;
    if (0x16 < (ulonglong)bVar4) {
      bVar12 = bVar4;
    }
    if ((ulonglong)bVar4 < 0xfff) {
      local_a8 = (char ******)FUN_140b65d30((undefined1 *)((longlong)bVar12 + 1));
    }
    else {
      ppppppcVar5 = (char ******)FUN_140b65d30((showmanyc **)((longlong)bVar12 + 0x28));
      local_a8 = (char ******)((longlong)ppppppcVar5 + 0x27U & 0xffffffffffffffe0);
      local_a8[-1] = (char *****)ppppppcVar5;
    }
    local_98 = uVar7;
    bStack_90 = bVar12;
    memcpy(local_a8,_Src,uVar7 + 1);
    uStack_88 = *(undefined4 *)(param_2 + 6);
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_80 = *(undefined4 *)(param_2 + 7);
    local_7c = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_78 = *(undefined4 *)(param_2 + 8);
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_70 = *(undefined4 *)(param_2 + 9);
  }
  cVar2 = *(char *)((longlong)param_2 + 0x3b);
  if ((cVar2 == '\x01') && (*(char *)((longlong)param_2 + 0x36) == '\0')) {
    FUN_1401e87c0(local_1b8,1);
    uVar6 = FUN_1400e5ec0(&local_1a8,"Buffer ");
    pppppppcVar8 = &local_a8;
    if (0xf < (ulonglong)bStack_90) {
      pppppppcVar8 = (char *******)local_a8;
    }
    uVar6 = FUN_1400e73f0(uVar6,pppppppcVar8,local_98);
    FUN_1400e5ec0(uVar6,
                  " is volatile but is not a constant buffer. Only constant buffers can be made volatile."
                 );
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_130 & 0x22) == 2) || (uVar7 = *local_160, uVar7 == 0)) {
      if (((local_130 & 4) == 0) && (*local_168 != 0)) {
        uVar7 = *local_168 + (longlong)*local_150;
        pvVar11 = (void *)*local_188;
        if (pvVar11 != (void *)0x0) goto LAB_140516312;
      }
LAB_14051632e:
      plVar1 = *(longlong **)((longlong)this + 0x18);
    }
    else {
      if (uVar7 < local_138) {
        uVar7 = local_138;
      }
      pvVar11 = (void *)*local_180[0];
      if (pvVar11 == (void *)0x0) goto LAB_14051632e;
LAB_140516312:
      uVar7 = uVar7 - (longlong)pvVar11;
      if (0xf < uVar7) {
        FUN_1400069b0(&local_68,uVar7);
        goto LAB_14051632e;
      }
      local_58 = uVar7;
      memmove(&local_68,pvVar11,uVar7);
      *(undefined1 *)((longlong)&local_68 + uVar7) = 0;
      plVar1 = *(longlong **)((longlong)this + 0x18);
    }
    pppppppuVar10 = (undefined8 *******)local_68;
    if (local_50 < 0x10) {
      pppppppuVar10 = &local_68;
    }
    (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar10);
LAB_14051682d:
    if (0xf < local_50) {
      uVar7 = local_50 + 1;
      pppppppuVar10 = (undefined8 *******)local_68;
      if (0xfff < uVar7) {
        pppppppuVar10 = (undefined8 *******)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar10)))
        goto LAB_140516b46;
        uVar7 = local_50 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar10,uVar7);
    }
    *param_1 = 0;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)local_1b8 + (longlong)*(int *)((longlong)local_1b8[0] + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_1bc + (longlong)*(int *)((longlong)local_1b8[0] + 4)) =
         *(int *)((longlong)local_1b8[0] + 4) + -0x98;
    abStack_1a0[0] =
         (basic_streambuf<char,std::char_traits<char>_>)
         &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    FUN_1401da8b0(abStack_1a0);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(abStack_1a0);
    std::ios_base::~ios_base(local_120);
  }
  else {
    if ((cVar2 != '\0') && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      FUN_1401e87c0(local_1b8,1);
      uVar6 = FUN_1400e5ec0(&local_1a8,"Volatile constant buffer ");
      pppppppcVar8 = &local_a8;
      if (0xf < (ulonglong)bStack_90) {
        pppppppcVar8 = (char *******)local_a8;
      }
      uVar6 = FUN_1400e73f0(uVar6,pppppppcVar8,local_98);
      FUN_1400e5ec0(uVar6," has maxVersions = 0");
      local_68 = (undefined8 *******)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      if (((local_130 & 0x22) == 2) || (uVar7 = *local_160, uVar7 == 0)) {
        if (((local_130 & 4) == 0) && (*local_168 != 0)) {
          uVar7 = *local_168 + (longlong)*local_150;
          pvVar11 = (void *)*local_188;
          if (pvVar11 != (void *)0x0) goto LAB_140516485;
        }
LAB_1405164a1:
        plVar1 = *(longlong **)((longlong)this + 0x18);
      }
      else {
        if (uVar7 < local_138) {
          uVar7 = local_138;
        }
        pvVar11 = (void *)*local_180[0];
        if (pvVar11 == (void *)0x0) goto LAB_1405164a1;
LAB_140516485:
        uVar7 = uVar7 - (longlong)pvVar11;
        if (0xf < uVar7) {
          FUN_1400069b0(&local_68,uVar7);
          goto LAB_1405164a1;
        }
        local_58 = uVar7;
        memmove(&local_68,pvVar11,uVar7);
        *(undefined1 *)((longlong)&local_68 + uVar7) = 0;
        plVar1 = *(longlong **)((longlong)this + 0x18);
      }
      pppppppuVar10 = (undefined8 *******)local_68;
      if (local_50 < 0x10) {
        pppppppuVar10 = &local_68;
      }
      (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar10);
      goto LAB_14051682d;
    }
    if (cVar2 != '\0') {
      if (((((*(char *)((longlong)param_2 + 0x34) == '\0') &&
            (*(char *)((longlong)param_2 + 0x35) == '\0')) &&
           (*(char *)((longlong)param_2 + 0x37) == '\0')) &&
          ((*(char *)((longlong)param_2 + 0x31) == '\0' && (*(char *)(param_2 + 7) == '\0')))) &&
         ((*(char *)((longlong)param_2 + 0x39) == '\0' &&
          ((*(char *)((longlong)param_2 + 0x3a) == '\0' &&
           (*(char *)((longlong)param_2 + 0x3c) == '\0')))))) {
        if (*(char *)((longlong)param_2 + 0x45) == '\0') goto LAB_1405164e3;
        FUN_1401e87c0(local_1b8,1);
        uVar6 = FUN_1400e5ec0(&local_1a8,"Volatile constant buffer ");
        pppppppcVar8 = &local_a8;
        if (0xf < (ulonglong)bStack_90) {
          pppppppcVar8 = (char *******)local_a8;
        }
        uVar6 = FUN_1400e73f0(uVar6,pppppppcVar8,local_98);
        FUN_1400e5ec0(uVar6," must have cpuAccess set to None. Write-discard access is implied.");
        local_68 = (undefined8 *******)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0xf;
        if (((local_130 & 0x22) == 2) || (uVar7 = *local_160, uVar7 == 0)) {
          if (((local_130 & 4) == 0) && (*local_168 != 0)) {
            pplVar9 = &local_188;
            uVar7 = *local_168 + (longlong)*local_150;
            goto LAB_140516a2d;
          }
        }
        else {
          pplVar9 = local_180;
          if (uVar7 < local_138) {
            uVar7 = local_138;
          }
LAB_140516a2d:
          pvVar11 = (void *)**pplVar9;
          if (pvVar11 != (void *)0x0) {
            uVar7 = uVar7 - (longlong)pvVar11;
            if (uVar7 < 0x10) {
              local_58 = uVar7;
              memmove(&local_68,pvVar11,uVar7);
              *(undefined1 *)((longlong)&local_68 + uVar7) = 0;
            }
            else {
              FUN_1400069b0(&local_68,uVar7);
            }
          }
        }
        pppppppuVar10 = (undefined8 *******)local_68;
        if (local_50 < 0x10) {
          pppppppuVar10 = &local_68;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                  (*(longlong **)((longlong)this + 0x18),2,pppppppuVar10);
      }
      else {
        FUN_1401e87c0(local_1b8,1);
        uVar6 = FUN_1400e5ec0(&local_1a8,"Buffer ");
        pppppppcVar8 = &local_a8;
        if (0xf < (ulonglong)bStack_90) {
          pppppppcVar8 = (char *******)local_a8;
        }
        uVar6 = FUN_1400e73f0(uVar6,pppppppcVar8,local_98);
        FUN_1400e5ec0(uVar6," is volatile but has unsupported usage flags:");
        if (*(char *)((longlong)param_2 + 0x34) == '\x01') {
          FUN_1400e5ec0(&local_1a8," IsVertexBuffer");
        }
        if (*(char *)((longlong)param_2 + 0x35) == '\x01') {
          FUN_1400e5ec0(&local_1a8," IsIndexBuffer");
        }
        if (*(char *)((longlong)param_2 + 0x37) == '\x01') {
          FUN_1400e5ec0(&local_1a8," IsDrawIndirectArgs");
        }
        if (*(char *)((longlong)param_2 + 0x31) == '\x01') {
          FUN_1400e5ec0(&local_1a8," CanHaveUAVs");
        }
        if (*(char *)(param_2 + 7) == '\x01') {
          FUN_1400e5ec0(&local_1a8," IsAccelStructBuildInput");
        }
        if (*(char *)((longlong)param_2 + 0x39) == '\x01') {
          FUN_1400e5ec0(&local_1a8," IsAccelStructStorage");
        }
        if (*(char *)((longlong)param_2 + 0x3a) == '\x01') {
          FUN_1400e5ec0(&local_1a8," IsShaderBindingTable");
        }
        if (*(char *)((longlong)param_2 + 0x3c) == '\x01') {
          FUN_1400e5ec0(&local_1a8," IsVirtual");
        }
        this_00 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(&local_1a8,".");
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::widen
                          ((basic_ios<char,std::char_traits<char>_> *)
                           ((longlong)&this_00->vbtablePtr +
                           (longlong)
                           this_00->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n'
                          );
        std::basic_ostream<char,std::char_traits<char>_>::put(this_00,cVar2);
        std::basic_ostream<char,std::char_traits<char>_>::flush(this_00);
        FUN_1400e5ec0(this_00,
                      "Only constant buffers can be made volatile, and volatile buffers cannot be virtual."
                     );
        local_68 = (undefined8 *******)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0xf;
        if (((local_130 & 0x22) == 2) || (uVar7 = *local_160, uVar7 == 0)) {
          if (((local_130 & 4) == 0) && (*local_168 != 0)) {
            pplVar9 = &local_188;
            uVar7 = *local_168 + (longlong)*local_150;
            goto LAB_1405167bb;
          }
        }
        else {
          pplVar9 = local_180;
          if (uVar7 < local_138) {
            uVar7 = local_138;
          }
LAB_1405167bb:
          pvVar11 = (void *)**pplVar9;
          if (pvVar11 != (void *)0x0) {
            uVar7 = uVar7 - (longlong)pvVar11;
            if (uVar7 < 0x10) {
              local_58 = uVar7;
              memmove(&local_68,pvVar11,uVar7);
              *(undefined1 *)((longlong)&local_68 + uVar7) = 0;
            }
            else {
              FUN_1400069b0(&local_68,uVar7);
            }
          }
        }
        pppppppuVar10 = (undefined8 *******)local_68;
        if (local_50 < 0x10) {
          pppppppuVar10 = &local_68;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                  (*(longlong **)((longlong)this + 0x18),2,pppppppuVar10);
      }
      goto LAB_14051682d;
    }
    if ((*(char *)((longlong)param_2 + 0x3c) == '\x01') &&
       (cVar2 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1e8))
                          (*(longlong **)((longlong)this + 0x10),0x15,0), cVar2 == '\0')) {
      local_1a8 = 0;
      abStack_1a0[0] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
      local_1b8[0] = (char ******)0x0;
      local_1b8[1] = (char ******)0x0;
      pppppppcVar8 = (char *******)FUN_140b65d30(0x30);
      local_1a8 = 0x2d;
      abStack_1a0[0] = (basic_streambuf<char,std::char_traits<char>_>)0x2f;
      builtin_strncpy((char *)((longlong)pppppppcVar8 + 0x1d),"irtual r",8);
      builtin_strncpy((char *)((longlong)pppppppcVar8 + 0x25),"esources",8);
      pppppppcVar8[2] = (char ******)0x7070757320746f6e;
      pppppppcVar8[3] = (char ******)0x747269762074726f;
      *(undefined4 *)pppppppcVar8 = 0x20656854;
      builtin_strncpy((char *)((longlong)pppppppcVar8 + 4),"devi",4);
      *(undefined4 *)(pppppppcVar8 + 1) = 0x64206563;
      builtin_strncpy((char *)((longlong)pppppppcVar8 + 0xc),"oes ",4);
      *(char *)((longlong)pppppppcVar8 + 0x2d) = '\0';
      local_1b8[0] = (char ******)pppppppcVar8;
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                (*(longlong **)((longlong)this + 0x18),2,pppppppcVar8);
      thunk_FUN_140b68ba8(pppppppcVar8,0x30);
      *param_1 = 0;
    }
    else {
LAB_1405164e3:
      if ((*(char *)((longlong)param_2 + 0x44) == '\x01') && (*(int *)(param_2 + 8) == 0)) {
        FUN_1401e87c0(local_1b8,1);
        uVar6 = FUN_1400e5ec0(&local_1a8,"Buffer ");
        pppppppcVar8 = &local_a8;
        if (0xf < (ulonglong)bStack_90) {
          pppppppcVar8 = (char *******)local_a8;
        }
        uVar6 = FUN_1400e73f0(uVar6,pppppppcVar8,local_98);
        FUN_1400e5ec0(uVar6,
                      " has initialState = Unknown, which is incompatible with keepInitialState = true."
                     );
        local_68 = (undefined8 *******)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0xf;
        if (((local_130 & 0x22) == 2) || (uVar7 = *local_160, uVar7 == 0)) {
          if (((local_130 & 4) == 0) && (*local_168 != 0)) {
            pplVar9 = &local_188;
            uVar7 = *local_168 + (longlong)*local_150;
            goto LAB_14051694e;
          }
        }
        else {
          pplVar9 = local_180;
          if (uVar7 < local_138) {
            uVar7 = local_138;
          }
LAB_14051694e:
          pvVar11 = (void *)**pplVar9;
          if (pvVar11 != (void *)0x0) {
            uVar7 = uVar7 - (longlong)pvVar11;
            if (uVar7 < 0x10) {
              local_58 = uVar7;
              memmove(&local_68,pvVar11,uVar7);
              *(undefined1 *)((longlong)&local_68 + uVar7) = 0;
            }
            else {
              FUN_1400069b0(&local_68,uVar7);
            }
          }
        }
        pppppppuVar10 = (undefined8 *******)local_68;
        if (local_50 < 0x10) {
          pppppppuVar10 = &local_68;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                  (*(longlong **)((longlong)this + 0x18),2,pppppppuVar10);
        goto LAB_14051682d;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x88))
                (*(longlong **)((longlong)this + 0x10),param_1,&local_b8);
    }
  }
  if (0xf < (ulonglong)bStack_90) {
    ppsVar3 = (showmanyc **)((longlong)bStack_90 + 1);
    pppppppcVar8 = (char *******)local_a8;
    if ((showmanyc **)0xfff < ppsVar3) {
      pppppppcVar8 = (char *******)local_a8[-1];
      if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)pppppppcVar8))) {
LAB_140516b46:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      ppsVar3 = (showmanyc **)((longlong)bStack_90 + 0x28);
    }
    thunk_FUN_140b68ba8(pppppppcVar8,ppsVar3);
  }
  return param_1;
}

