/**
 * Function: unknown_texture_dimension
 * Address:  140513020
 * Signature: undefined8 * __thiscall unknown_texture_dimension(void * this, undefined8 * param_1, uint * param_2)
 * Body size: 4384 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * __thiscall unknown_texture_dimension(void *this,undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  char *pcVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *******pppppppuVar15;
  void *pvVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  bool bVar21;
  undefined8 local_170;
  char *local_168;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined4 uStack_156;
  undefined2 uStack_152;
  basic_streambuf<char,std::char_traits<char>_> bStack_150;
  void *local_148;
  undefined8 uStack_140;
  longlong *local_138;
  longlong *plStack_130;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  longlong *local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined1 uStack_108;
  undefined4 uStack_107;
  undefined4 uStack_103;
  undefined7 uStack_ff;
  ulonglong local_e8;
  uint local_e0;
  ios_base local_d0 [6];
  undefined8 *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (8 < (byte)(*(char *)((longlong)param_2 + 0x1d) - 1U)) {
    uStack_160 = 0;
    uStack_15a = 0;
    pcVar10 = (char *)FUN_140b65d30(0x20);
    uStack_158 = 0x19;
    uStack_156 = 0;
    uStack_152 = 0;
    bStack_150._0_2_ = 0x1f;
    bStack_150._2_4_ = 0;
    bStack_150._6_2_ = 0;
    builtin_strncpy(pcVar10,"Unknown texture dimension",0x1a);
    local_168 = pcVar10;
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar10);
    thunk_FUN_140b68ba8(pcVar10,0x20);
    *param_1 = 0;
    return param_1;
  }
  uVar5 = FUN_140527b10();
  puVar18 = param_2 + 8;
  uVar6 = FUN_140527b30(puVar18);
  if ((((*param_2 == 0) || (uVar4 = param_2[1], uVar4 == 0)) || (uVar14 = param_2[2], uVar14 == 0))
     || ((param_2[3] == 0 || (param_2[4] == 0)))) {
    FUN_1401e87c0(&local_168,1);
    uVar5 = FUN_1400e5ec0(&uStack_158,uVar5);
    uVar5 = FUN_1400e5ec0(uVar5,&DAT_1413a21db);
    uVar5 = FUN_1400e5ec0(uVar5,uVar6);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar5,": width(");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,*param_2);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,"), height(");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[1]);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,"), depth(");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[2]);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,"), arraySize(");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[3]);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,") and mipLevels(")
    ;
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[4]);
    FUN_1400e5ec0(pbVar9,") must not be zero");
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_e0 & 0x22) == 2) ||
       (uVar19 = *(ulonglong *)CONCAT44(uStack_10c,uStack_110), uVar19 == 0)) {
      if (((local_e0 & 4) == 0) && (*local_118 != 0)) {
        uVar19 = *local_118 + (longlong)*(int *)CONCAT71(uStack_ff,uStack_103._3_1_);
        pvVar16 = (void *)*local_138;
        if (pvVar16 != (void *)0x0) goto LAB_140513335;
      }
LAB_14051334d:
      plVar17 = *(longlong **)((longlong)this + 0x18);
    }
    else {
      if (uVar19 < local_e8) {
        uVar19 = local_e8;
      }
      pvVar16 = (void *)*plStack_130;
      if (pvVar16 == (void *)0x0) goto LAB_14051334d;
LAB_140513335:
      uVar19 = uVar19 - (longlong)pvVar16;
      if (0xf < uVar19) {
        FUN_1400069b0(&local_68,uVar19);
        goto LAB_14051334d;
      }
      local_58 = uVar19;
      memmove(&local_68,pvVar16,uVar19);
      *(undefined1 *)((longlong)&local_68 + uVar19) = 0;
      plVar17 = *(longlong **)((longlong)this + 0x18);
    }
    pppppppuVar15 = local_68;
    if (local_50 < 0x10) {
      pppppppuVar15 = &local_68;
    }
    (**(code **)(*plVar17 + 8))(plVar17,2,pppppppuVar15);
    if (0xf < local_50) {
      uVar19 = local_50 + 1;
      pppppppuVar15 = local_68;
      if (0xfff < uVar19) {
        pppppppuVar15 = (undefined8 *******)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar15)))
        goto LAB_140514122;
        uVar19 = local_50 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar15,uVar19);
    }
    *param_1 = 0;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)&local_168 + (longlong)*(int *)(local_168 + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&local_170 + (longlong)*(int *)(local_168 + 4) + 4) =
         *(int *)(local_168 + 4) + -0x98;
    bStack_150._0_2_ = 0x1898;
    bStack_150._2_4_ = 0x140df;
    bStack_150._6_2_ = 0;
    FUN_1401da8b0(&bStack_150);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&bStack_150);
    std::ios_base::~ios_base(local_d0);
    return param_1;
  }
  bVar1 = *(byte *)((longlong)param_2 + 0x1d);
  bVar21 = (byte)(bVar1 - 1) < 2;
  bVar2 = uVar4 != 1 && bVar21;
  local_170 = puVar18;
  if (uVar4 != 1 && bVar21) {
    FUN_1401e87c0(&local_168,1);
    uVar7 = FUN_1400e5ec0(&uStack_158,uVar5);
    uVar7 = FUN_1400e5ec0(uVar7,&DAT_1413a21db);
    uVar7 = FUN_1400e5ec0(uVar7,uVar6);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar7,": height(");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[1]);
    FUN_1400e5ec0(pbVar9,") must be equal to 1");
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_e0 & 0x22) == 2) ||
       (uVar19 = *(ulonglong *)CONCAT44(uStack_10c,uStack_110), uVar19 == 0)) {
      if (((local_e0 & 4) == 0) && (*local_118 != 0)) {
        pplVar11 = &local_138;
        uVar19 = *local_118 + (longlong)*(int *)CONCAT71(uStack_ff,uStack_103._3_1_);
        goto LAB_140513476;
      }
    }
    else {
      pplVar11 = &plStack_130;
      if (uVar19 < local_e8) {
        uVar19 = local_e8;
      }
LAB_140513476:
      pvVar16 = (void *)**pplVar11;
      if (pvVar16 != (void *)0x0) {
        uVar19 = uVar19 - (longlong)pvVar16;
        if (uVar19 < 0x10) {
          local_58 = uVar19;
          memmove(&local_68,pvVar16,uVar19);
          *(undefined1 *)((longlong)&local_68 + uVar19) = 0;
        }
        else {
          FUN_1400069b0(&local_68,uVar19);
        }
      }
    }
    pppppppuVar15 = local_68;
    if (local_50 < 0x10) {
      pppppppuVar15 = &local_68;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
    if (0xf < local_50) {
      uVar19 = local_50 + 1;
      pppppppuVar15 = local_68;
      if (0xfff < uVar19) {
        pppppppuVar15 = (undefined8 *******)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar15)))
        goto LAB_140514122;
        uVar19 = local_50 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar15,uVar19);
    }
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)&local_168 + (longlong)*(int *)(local_168 + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&local_170 + (longlong)*(int *)(local_168 + 4) + 4) =
         *(int *)(local_168 + 4) + -0x98;
    bStack_150._0_2_ = 0x1898;
    bStack_150._2_4_ = 0x140df;
    bStack_150._6_2_ = 0;
    FUN_1401da8b0(&bStack_150);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&bStack_150);
    std::ios_base::~ios_base(local_d0);
    bVar1 = *(byte *)((longlong)param_2 + 0x1d);
    uVar14 = param_2[2];
  }
  uVar4 = (uint)bVar1;
  if ((0xf7 < (byte)(bVar1 - 9)) && (uVar14 != 1)) {
    FUN_1401e87c0(&local_168,1);
    uVar7 = FUN_1400e5ec0(&uStack_158,uVar5);
    uVar7 = FUN_1400e5ec0(uVar7,&DAT_1413a21db);
    uVar7 = FUN_1400e5ec0(uVar7,uVar6);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar7,": depth(");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[2]);
    FUN_1400e5ec0(pbVar9,") must be equal to 1");
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_e0 & 0x22) == 2) ||
       (uVar19 = *(ulonglong *)CONCAT44(uStack_10c,uStack_110), uVar19 == 0)) {
      if (((local_e0 & 4) == 0) && (*local_118 != 0)) {
        pplVar11 = &local_138;
        uVar19 = *local_118 + (longlong)*(int *)CONCAT71(uStack_ff,uStack_103._3_1_);
        goto LAB_14051365a;
      }
    }
    else {
      pplVar11 = &plStack_130;
      if (uVar19 < local_e8) {
        uVar19 = local_e8;
      }
LAB_14051365a:
      pvVar16 = (void *)**pplVar11;
      if (pvVar16 != (void *)0x0) {
        uVar19 = uVar19 - (longlong)pvVar16;
        if (uVar19 < 0x10) {
          local_58 = uVar19;
          memmove(&local_68,pvVar16,uVar19);
          *(undefined1 *)((longlong)&local_68 + uVar19) = 0;
        }
        else {
          FUN_1400069b0(&local_68,uVar19);
        }
      }
    }
    pppppppuVar15 = local_68;
    if (local_50 < 0x10) {
      pppppppuVar15 = &local_68;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
    if (0xf < local_50) {
      uVar19 = local_50 + 1;
      pppppppuVar15 = local_68;
      if (0xfff < uVar19) {
        pppppppuVar15 = (undefined8 *******)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar15)))
        goto LAB_140514122;
        uVar19 = local_50 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar15,uVar19);
    }
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)&local_168 + (longlong)*(int *)(local_168 + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&local_170 + (longlong)*(int *)(local_168 + 4) + 4) =
         *(int *)(local_168 + 4) + -0x98;
    bStack_150._0_2_ = 0x1898;
    bStack_150._2_4_ = 0x140df;
    bStack_150._6_2_ = 0;
    FUN_1401da8b0(&bStack_150);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&bStack_150);
    std::ios_base::~ios_base(local_d0);
    uVar4 = (uint)*(byte *)((longlong)param_2 + 0x1d);
    bVar2 = true;
  }
  if ((byte)uVar4 < 10) {
    if ((0x28aU >> (uVar4 & 0x1f) & 1) != 0) {
      if (param_2[3] != 1) {
        FUN_1401e87c0(&local_168,1);
        uVar7 = FUN_1400e5ec0(&uStack_158,uVar5);
        uVar7 = FUN_1400e5ec0(uVar7,&DAT_1413a21db);
        uVar7 = FUN_1400e5ec0(uVar7,uVar6);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar7,": arraySize(");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[3]);
        FUN_1400e5ec0(pbVar9,") must be equal to 1");
        FUN_140514890(&local_168,&local_68);
        pppppppuVar15 = &local_68;
        if (0xf < local_50) {
          pppppppuVar15 = local_68;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                  (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
LAB_140513976:
        FUN_140004b30(&local_68);
        FUN_1401e8970(&local_168);
        bVar2 = true;
      }
      uVar4 = (uint)*(byte *)((longlong)param_2 + 0x1d);
      goto LAB_140513992;
    }
    if (uVar4 == 5) {
      if (param_2[3] != 6) {
        FUN_1401e87c0(&local_168,1);
        uVar7 = FUN_1400e5ec0(&uStack_158,uVar5);
        uVar7 = FUN_1400e5ec0(uVar7,&DAT_1413a21db);
        uVar7 = FUN_1400e5ec0(uVar7,uVar6);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar7,": arraySize(");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[3]);
        FUN_1400e5ec0(pbVar9,") must be equal to 6");
        FUN_140514890(&local_168,&local_68);
        pppppppuVar15 = &local_68;
        if (0xf < local_50) {
          pppppppuVar15 = local_68;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                  (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
        goto LAB_140513976;
      }
    }
    else {
      if (uVar4 != 6) goto LAB_140513992;
      if (0x2aaaaaaa <
          (param_2[3] * -0x55555555 >> 1 | (uint)((param_2[3] * -0x55555555 & 1) != 0) << 0x1f)) {
        FUN_1401e87c0(&local_168,1);
        uVar7 = FUN_1400e5ec0(&uStack_158,uVar5);
        uVar7 = FUN_1400e5ec0(uVar7,&DAT_1413a21db);
        uVar7 = FUN_1400e5ec0(uVar7,uVar6);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar7,": arraySize(");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[3]);
        FUN_1400e5ec0(pbVar9,") must be a multiple of 6");
        FUN_140514890(&local_168,&local_68);
        pppppppuVar15 = &local_68;
        if (0xf < local_50) {
          pppppppuVar15 = local_68;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                  (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
        goto LAB_140513976;
      }
    }
LAB_1405139ab:
    if (param_2[5] == 1) goto LAB_140513cfd;
    FUN_1401e87c0(&local_168,1);
    uVar7 = FUN_1400e5ec0(&uStack_158,uVar5);
    uVar7 = FUN_1400e5ec0(uVar7,&DAT_1413a21db);
    uVar7 = FUN_1400e5ec0(uVar7,uVar6);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar7,": sampleCount(");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[5]);
    FUN_1400e5ec0(pbVar9,") must be equal to 1");
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_e0 & 0x22) == 2) ||
       (uVar19 = *(ulonglong *)CONCAT44(uStack_10c,uStack_110), uVar19 == 0)) {
      if (((local_e0 & 4) == 0) && (*local_118 != 0)) {
        pplVar11 = &local_138;
        uVar19 = *local_118 + (longlong)*(int *)CONCAT71(uStack_ff,uStack_103._3_1_);
        goto LAB_140513a83;
      }
    }
    else {
      pplVar11 = &plStack_130;
      if (uVar19 < local_e8) {
        uVar19 = local_e8;
      }
LAB_140513a83:
      pvVar16 = (void *)**pplVar11;
      if (pvVar16 != (void *)0x0) {
        uVar19 = uVar19 - (longlong)pvVar16;
        if (uVar19 < 0x10) {
          local_58 = uVar19;
          memmove(&local_68,pvVar16,uVar19);
          *(undefined1 *)((longlong)&local_68 + uVar19) = 0;
        }
        else {
          FUN_1400069b0(&local_68,uVar19);
        }
      }
    }
    pppppppuVar15 = local_68;
    if (local_50 < 0x10) {
      pppppppuVar15 = &local_68;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
    if (0xf < local_50) {
      uVar19 = local_50 + 1;
      pppppppuVar15 = local_68;
      if (0xfff < uVar19) {
        pppppppuVar15 = (undefined8 *******)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar15)))
        goto LAB_140514122;
        uVar19 = local_50 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar15,uVar19);
    }
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)&local_168 + (longlong)*(int *)(local_168 + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&local_170 + (longlong)*(int *)(local_168 + 4) + 4) =
         *(int *)(local_168 + 4) + -0x98;
    bStack_150._0_2_ = 0x1898;
    bStack_150._2_4_ = 0x140df;
    bStack_150._6_2_ = 0;
    FUN_1401da8b0(&bStack_150);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(&bStack_150);
    std::ios_base::~ios_base(local_d0);
LAB_140513cfa:
    bVar2 = true;
  }
  else {
LAB_140513992:
    if (9 < (byte)uVar4) goto LAB_140513cfd;
    if ((0x27eU >> (uVar4 & 0x1f) & 1) != 0) goto LAB_1405139ab;
    if ((0x180U >> (uVar4 & 0x1f) & 1) != 0) {
      if ((8 < param_2[5]) || ((0x114U >> (param_2[5] & 0x1f) & 1) == 0)) {
        FUN_1401e87c0(&local_168,1);
        uVar7 = FUN_1400e5ec0(&uStack_158,uVar5);
        uVar7 = FUN_1400e5ec0(uVar7,&DAT_1413a21db);
        uVar7 = FUN_1400e5ec0(uVar7,uVar6);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(uVar7,": sampleCount(");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_2[5]);
        FUN_1400e5ec0(pbVar9,") must be equal to 2, 4 or 8");
        FUN_140514890(&local_168,&local_68);
        pppppppuVar15 = &local_68;
        if (0xf < local_50) {
          pppppppuVar15 = local_68;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                  (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
        FUN_140004b30(&local_68);
        FUN_1401e8970(&local_168);
        bVar2 = true;
      }
      if (*(char *)((longlong)param_2 + 0x42) != '\x01') goto LAB_140513cfd;
      FUN_1401e87c0(&local_168,1);
      uVar7 = FUN_1400e5ec0(&uStack_158,uVar5);
      uVar7 = FUN_1400e5ec0(uVar7,&DAT_1413a21db);
      uVar7 = FUN_1400e5ec0(uVar7,uVar6);
      FUN_1400e5ec0(uVar7,": multi-sampled textures cannot have UAVs (isUAV flag)");
      FUN_140514890(&local_168,&local_68);
      pppppppuVar15 = &local_68;
      if (0xf < local_50) {
        pppppppuVar15 = local_68;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
      FUN_140004b30(&local_68);
      FUN_1401e8970(&local_168);
      goto LAB_140513cfa;
    }
  }
LAB_140513cfd:
  if (((char)param_2[0x13] == '\x01') &&
     (cVar3 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1e8))
                        (*(longlong **)((longlong)this + 0x10),0x15,0), cVar3 == '\0')) {
    FUN_1401e87c0(&local_168,1);
    uVar7 = FUN_1400e5ec0(&uStack_158,uVar5);
    uVar7 = FUN_1400e5ec0(uVar7,&DAT_1413a21db);
    uVar7 = FUN_1400e5ec0(uVar7,uVar6);
    FUN_1400e5ec0(uVar7,": The device does not support virtual resources");
    FUN_140514890(&local_168,&local_68);
    pppppppuVar15 = &local_68;
    if (0xf < local_50) {
      pppppppuVar15 = local_68;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
    FUN_140004b30(&local_68);
    FUN_1401e8970(&local_168);
    if (((char)param_2[0x1a] != '\x01') || (param_2[0x19] != 0)) {
LAB_140513f5d:
      *param_1 = 0;
      return param_1;
    }
  }
  else if (((char)param_2[0x1a] != '\x01') || (param_2[0x19] != 0)) {
    if (bVar2) goto LAB_140513f5d;
    local_168 = *(char **)param_2;
    uStack_156 = *(undefined4 *)((longlong)param_2 + 0x12);
    bStack_150._2_4_ = *(undefined4 *)((longlong)param_2 + 0x1a);
    uStack_158 = (undefined2)((uint)*(undefined4 *)((longlong)param_2 + 0xe) >> 0x10);
    uStack_152 = (undefined2)*(undefined4 *)((longlong)param_2 + 0x16);
    bStack_150._0_2_ = SUB42((uint)*(undefined4 *)((longlong)param_2 + 0x16) >> 0x10,0);
    uStack_160 = (undefined6)*(undefined8 *)(param_2 + 2);
    uStack_15a = (undefined2)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x30);
    local_148 = (void *)0x0;
    uStack_140 = 0;
    local_138 = (longlong *)0x0;
    plStack_130 = (longlong *)0x0;
    plVar17 = *(longlong **)(param_2 + 0xc);
    puVar18 = local_170;
    if (0xf < *(ulonglong *)(param_2 + 0xe)) {
      puVar18 = *(uint **)(param_2 + 8);
    }
    if ((longlong)plVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (plVar17 < (longlong *)0x10) {
      plStack_130 = (longlong *)0xf;
      local_148 = *(void **)puVar18;
      uStack_140 = *(undefined8 *)(puVar18 + 2);
      local_128 = param_2[0x10];
      uStack_124 = param_2[0x11];
      uStack_120 = param_2[0x12];
      uStack_11c = param_2[0x13];
      local_118 = *(longlong **)(param_2 + 0x14);
      uStack_110 = param_2[0x16];
      uStack_10c = param_2[0x17];
      uStack_107 = *(undefined4 *)((longlong)param_2 + 0x61);
      uStack_103 = *(undefined4 *)((longlong)param_2 + 0x65);
      uStack_108 = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x5d) >> 0x18);
      local_138 = plVar17;
      if (plVar17 == (longlong *)0x0) {
        samplequality(&local_68,&local_168);
        FUN_140011170(&local_148,&local_68);
        FUN_140004b30(&local_68);
      }
    }
    else {
      plVar12 = (longlong *)((ulonglong)plVar17 | 0xf);
      plVar20 = (longlong *)0x16;
      if ((longlong *)0x16 < plVar12) {
        plVar20 = plVar12;
      }
      if (plVar12 < (longlong *)0xfff) {
        local_148 = (void *)FUN_140b65d30((longlong)plVar20 + 1);
      }
      else {
        lVar13 = FUN_140b65d30(plVar20 + 5);
        local_148 = (void *)(lVar13 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)local_148 - 8) = lVar13;
      }
      local_138 = plVar17;
      plStack_130 = plVar20;
      memcpy(local_148,puVar18,(longlong)plVar17 + 1);
      local_128 = param_2[0x10];
      uStack_124 = param_2[0x11];
      uStack_120 = param_2[0x12];
      uStack_11c = param_2[0x13];
      local_118 = *(longlong **)(param_2 + 0x14);
      uVar5 = *(undefined8 *)((longlong)param_2 + 0x59);
      uStack_110._0_1_ = (undefined1)*(undefined8 *)(param_2 + 0x16);
      uStack_110._1_3_ = (undefined3)uVar5;
      uStack_10c = (uint)((ulonglong)uVar5 >> 0x18);
      uStack_108 = (undefined1)((ulonglong)uVar5 >> 0x38);
      uStack_107 = (undefined4)*(undefined8 *)((longlong)param_2 + 0x61);
      uStack_103 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x61) >> 0x20);
    }
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x30))
              (*(longlong **)((longlong)this + 0x10),param_1,&local_168);
    if (plStack_130 < (longlong *)0x10) {
      return param_1;
    }
    plVar17 = (longlong *)((longlong)plStack_130 + 1);
    pvVar16 = local_148;
    if (plVar17 < (longlong *)0x1000) {
LAB_140514118:
      thunk_FUN_140b68ba8(pvVar16,plVar17);
      return param_1;
    }
    pvVar16 = *(void **)((longlong)local_148 + -8);
    if ((ulonglong)((longlong)local_148 + (-8 - (longlong)pvVar16)) < 0x20) {
      plVar17 = plStack_130 + 5;
      goto LAB_140514118;
    }
    goto LAB_140514122;
  }
  FUN_1401e87c0(&local_168,1);
  uVar5 = FUN_1400e5ec0(&uStack_158,uVar5);
  uVar5 = FUN_1400e5ec0(uVar5,&DAT_1413a21db);
  uVar5 = FUN_1400e5ec0(uVar5,uVar6);
  FUN_1400e5ec0(uVar5,
                " has initialState = Unknown, which is incompatible with keepInitialState = true.");
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  if (((local_e0 & 0x22) == 2) ||
     (uVar19 = *(ulonglong *)CONCAT44(uStack_10c,uStack_110), uVar19 == 0)) {
    if (((local_e0 & 4) == 0) && (*local_118 != 0)) {
      pplVar11 = &local_138;
      uVar19 = *local_118 + (longlong)*(int *)CONCAT71(uStack_ff,uStack_103._3_1_);
      goto LAB_140513f34;
    }
  }
  else {
    pplVar11 = &plStack_130;
    if (uVar19 < local_e8) {
      uVar19 = local_e8;
    }
LAB_140513f34:
    pvVar16 = (void *)**pplVar11;
    if (pvVar16 != (void *)0x0) {
      uVar19 = uVar19 - (longlong)pvVar16;
      if (uVar19 < 0x10) {
        local_58 = uVar19;
        memmove(&local_68,pvVar16,uVar19);
        *(undefined1 *)((longlong)&local_68 + uVar19) = 0;
      }
      else {
        FUN_1400069b0(&local_68,uVar19);
      }
    }
  }
  pppppppuVar15 = local_68;
  if (local_50 < 0x10) {
    pppppppuVar15 = &local_68;
  }
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
            (*(longlong **)((longlong)this + 0x18),2,pppppppuVar15);
  if (0xf < local_50) {
    uVar19 = local_50 + 1;
    pppppppuVar15 = local_68;
    if (0xfff < uVar19) {
      pppppppuVar15 = (undefined8 *******)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar15))) {
LAB_140514122:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar19 = local_50 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar15,uVar19);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)&local_168 + (longlong)*(int *)(local_168 + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&local_170 + (longlong)*(int *)(local_168 + 4) + 4) =
       *(int *)(local_168 + 4) + -0x98;
  bStack_150._0_2_ = 0x1898;
  bStack_150._2_4_ = 0x140df;
  bStack_150._6_2_ = 0;
  FUN_1401da8b0(&bStack_150);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (&bStack_150);
  std::ios_base::~ios_base(local_d0);
  *param_1 = 0;
  return param_1;
}

