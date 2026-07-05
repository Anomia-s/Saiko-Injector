/**
 * Function: binding_set_contains_duplicate_bindings
 * Address:  14051fcc0
 * Signature: undefined8 * __thiscall binding_set_contains_duplicate_bindings(void * this, undefined8 * param_1, longlong * param_2, longlong * param_3)
 * Body size: 3788 bytes
 */


undefined8 * __thiscall
binding_set_contains_duplicate_bindings
          (void *this,undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined8 *puVar4;
  void *pvVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  basic_ostream<char,std::char_traits<char>_> *pbVar9;
  char *pcVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  longlong *plVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  size_t _Size;
  undefined4 *puVar18;
  char *local_3a0 [3];
  basic_streambuf<char,std::char_traits<char>_> local_388 [3];
  undefined8 *local_370;
  undefined8 *local_368;
  longlong *local_350;
  ulonglong *local_348;
  int *local_338;
  ulonglong local_320;
  uint local_318;
  ios_base local_308 [6];
  undefined4 local_2a8 [2];
  undefined8 *local_2a0;
  longlong local_290;
  undefined8 uStack_288;
  longlong local_280;
  undefined4 local_268 [2];
  longlong *local_260;
  longlong local_250;
  longlong lStack_248;
  longlong local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined1 local_200 [16];
  undefined4 local_1f0 [2];
  undefined8 *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  undefined4 local_1b0 [2];
  longlong *local_1a8;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 local_148 [2];
  undefined8 *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 uStack_128;
  longlong local_120;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong *local_c0;
  void *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_c0 = param_2;
  local_b0 = param_1;
  if (param_3 == (longlong *)0x0) {
    local_3a0[1] = (char *)0x0;
    pcVar10 = (char *)FUN_140b65d30(0x40);
    local_3a0[2] = (char *)0x32;
    local_388[0] = (basic_streambuf<char,std::char_traits<char>_>)0x3f;
    builtin_strncpy(pcVar10,"Cannot create a binding set without a valid layout",0x33);
    local_3a0[0] = pcVar10;
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar10);
LAB_1405204b8:
    thunk_FUN_140b68ba8(pcVar10,0x40);
    *local_b0 = 0;
    return local_b0;
  }
  lVar8 = (**(code **)(*param_3 + 0x28))(param_3);
  if (lVar8 == 0) {
    local_3a0[1] = (char *)0x0;
    pcVar10 = (char *)FUN_140b65d30(0x40);
    local_3a0[2] = (char *)0x32;
    local_388[0] = (basic_streambuf<char,std::char_traits<char>_>)0x3f;
    builtin_strncpy(pcVar10,"Cannot create a binding set from a bindless layout",0x33);
    local_3a0[0] = pcVar10;
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar10);
    goto LAB_1405204b8;
  }
  FUN_1401e87c0(local_3a0,1);
  cVar6 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x128))();
  local_1b0[0] = 0;
  FUN_14000ad50(local_268,local_1b0,local_2a8);
  local_228 = 0xffffffff00000000;
  uStack_220 = 0xffffffff00000000;
  local_218 = 0xffffffff00000000;
  uStack_210 = 0xffffffff00000000;
  local_208 = 0;
  local_1b0[0] = 0;
  puVar18 = local_2a8;
  FUN_14000ad50(puVar18,local_1b0,local_1f0);
  FUN_14051cc60(*(undefined8 *)((longlong)this + 0x18),lVar8,cVar6 == '\0',local_268,puVar18);
  local_1f0[0] = 0;
  FUN_14000ad50(local_1b0,local_1f0,&local_100);
  local_170 = 0xffffffff00000000;
  uStack_168 = 0xffffffff00000000;
  local_160 = 0xffffffff00000000;
  uStack_158 = 0xffffffff00000000;
  local_150 = 0;
  local_100 = 0;
  local_108 = param_3;
  local_b8 = this;
  FUN_14000ad50(local_1f0,&local_100,local_148);
  lVar13 = *local_c0;
  lVar1 = local_c0[1];
  if (lVar13 != lVar1) {
    uVar16 = 0;
    if (cVar6 != '\0') {
      uVar16 = *(undefined4 *)(lVar8 + 4);
    }
    uVar2 = *(undefined8 *)((longlong)local_b8 + 0x18);
    do {
      local_100 = 0;
      local_f8 = *(undefined8 **)(lVar13 + 8);
      puVar18 = local_1f0;
      local_fc = uVar16;
      invalid_layout_item_type(uVar2,*(undefined1 *)(lVar13 + 0x10),&local_100,local_1b0,local_1f0);
      lVar13 = lVar13 + 0x28;
    } while (lVar13 != lVar1);
  }
  local_148[0] = 0;
  FUN_14000ad50(&local_100,local_148,&local_a8);
  local_a8._0_4_ = 0;
  FUN_14000ad50(local_148,&local_a8,local_200);
  local_a8 = (longlong *)CONCAT44(local_a8._4_4_,local_268[0]);
  plStack_a0 = (longlong *)0x0;
  uStack_98 = 0;
  plStack_a0 = (longlong *)FUN_140b65d30(0x20);
  pvVar5 = local_b8;
  *plStack_a0 = (longlong)plStack_a0;
  plStack_a0[1] = (longlong)plStack_a0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = local_238;
  uStack_74 = uStack_234;
  uStack_70 = uStack_230;
  uStack_6c = uStack_22c;
  FUN_14002f7e0(&local_90,lStack_248 - local_250 >> 3);
  plVar15 = local_260;
  plVar11 = (longlong *)*local_260;
  if (plVar11 != local_260) {
    do {
      unordered_map_set_too_long(&local_a8,local_200);
      plVar11 = (longlong *)*plVar11;
    } while (plVar11 != plVar15);
  }
  plVar15 = local_1a8;
  plVar11 = (longlong *)*local_1a8;
  if (plVar11 != local_1a8) {
    do {
      FUN_140527580(&local_a8,plVar11 + 2);
      plVar11 = (longlong *)*plVar11;
    } while (plVar11 != plVar15);
  }
  FUN_140527790(&local_100,&local_a8);
  if (local_90 != 0) {
    uVar12 = local_80 - local_90;
    uVar17 = local_90;
    if (0xfff < uVar12) {
      uVar17 = *(ulonglong *)(local_90 - 8);
      if (0x1f < (local_90 - 8) - uVar17) goto LAB_140520b7b;
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_140b68ba8(uVar17,uVar12);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
  }
  *(undefined8 *)plStack_a0[1] = 0;
  puVar4 = (undefined8 *)*plStack_a0;
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x20);
    puVar4 = puVar3;
  }
  thunk_FUN_140b68ba8(plStack_a0,0x20);
  local_a8 = (longlong *)CONCAT44(local_a8._4_4_,local_1b0[0]);
  plStack_a0 = (longlong *)0x0;
  uStack_98 = 0;
  plStack_a0 = (longlong *)FUN_140b65d30(0x20);
  *plStack_a0 = (longlong)plStack_a0;
  plStack_a0[1] = (longlong)plStack_a0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = local_180;
  uStack_74 = uStack_17c;
  uStack_70 = uStack_178;
  uStack_6c = uStack_174;
  FUN_14002f7e0(&local_90,lStack_190 - local_198 >> 3);
  plVar15 = local_1a8;
  plVar11 = (longlong *)*local_1a8;
  if (plVar11 != local_1a8) {
    do {
      unordered_map_set_too_long(&local_a8,local_200);
      plVar11 = (longlong *)*plVar11;
    } while (plVar11 != plVar15);
  }
  plVar15 = local_260;
  plVar11 = (longlong *)*local_260;
  if (plVar11 != local_260) {
    do {
      FUN_140527580(&local_a8,plVar11 + 2);
      plVar11 = (longlong *)*plVar11;
    } while (plVar11 != plVar15);
  }
  FUN_140527790(local_148,&local_a8);
  plVar11 = local_c0;
  if (local_90 != 0) {
    uVar12 = local_80 - local_90;
    uVar17 = local_90;
    if (0xfff < uVar12) {
      uVar17 = *(ulonglong *)(local_90 - 8);
      if (0x1f < (local_90 - 8) - uVar17) goto LAB_140520b7b;
      uVar12 = uVar12 + 0x27;
    }
    thunk_FUN_140b68ba8(uVar17,uVar12);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
  }
  *(undefined8 *)plStack_a0[1] = 0;
  puVar4 = (undefined8 *)*plStack_a0;
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x20);
    puVar4 = puVar3;
  }
  thunk_FUN_140b68ba8(plStack_a0,0x20);
  if (local_f0 != 0) {
    pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_3a0 + 2,
                           "Bindings declared in the layout are not present in the binding set: ");
    FUN_14051ce00(pbVar9,&local_100);
    cVar6 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar9->vbtablePtr +
                       (longlong)pbVar9->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar9,cVar6);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar9);
  }
  if (local_138 != 0) {
    pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_3a0 + 2,
                           "Bindings in the binding set are not declared in the layout: ");
    FUN_14051ce00(pbVar9,local_148);
    cVar6 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar9->vbtablePtr +
                       (longlong)pbVar9->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar9,cVar6);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar9);
  }
  if (local_1e0 != 0) {
    pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_3a0 + 2,"Binding set contains duplicate bindings: ");
    FUN_14051ce00(pbVar9,local_1f0);
    cVar6 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar9->vbtablePtr +
                       (longlong)pbVar9->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar9,cVar6);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar9);
  }
  bVar14 = local_1e0 != 0 || (local_138 != 0 || local_f0 != 0);
  uVar17 = 0;
  while( true ) {
    lVar8 = *plVar11;
    lVar13 = plVar11[1] - lVar8;
    uVar12 = (lVar13 >> 3) * -0x3333333333333333;
    if (uVar12 <= uVar17) break;
    bVar7 = and_its_bufferdesc_have_format_unknown(pvVar5,lVar8 + uVar17 * 0x28,0);
    bVar14 = bVar14 | bVar7 ^ 1;
    uVar17 = uVar17 + 1;
  }
  if ((bVar14 & 1) == 0) {
    local_a8 = (longlong *)0x0;
    plStack_a0 = (longlong *)0x0;
    uStack_98 = 0;
    if (plVar11[1] != lVar8) {
      if (0x666666666666666 < uVar12) {
                    /* WARNING: Subroutine does not return */
        vector_too_long();
      }
      if (uVar12 < 0x67) {
        plVar15 = (longlong *)FUN_140b65d30(lVar13);
      }
      else {
        lVar8 = FUN_140b65d30(lVar13 + 0x27);
        plVar15 = (longlong *)(lVar8 + 0x27U & 0xffffffffffffffe0);
        plVar15[-1] = lVar8;
      }
      uStack_98 = lVar13 + (longlong)plVar15;
      _Size = plVar11[1] - *plVar11;
      local_a8 = plVar15;
      plStack_a0 = plVar15;
      memmove(plVar15,(void *)*plVar11,_Size);
      plStack_a0 = (longlong *)(_Size + (longlong)plVar15);
    }
    plVar15 = plStack_a0;
    local_90 = CONCAT71(local_90._1_7_,(char)plVar11[3]);
    for (plVar11 = local_a8; plVar11 != plVar15; plVar11 = plVar11 + 5) {
      lVar8 = *plVar11;
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        puVar18 = (undefined4 *)((ulonglong)puVar18 & 0xffffffff00000000);
        lVar13 = __RTDynamicCast(lVar8,0,&nvrhi::IResource::RTTI_Type_Descriptor,
                                 &nvrhi::validation::AccelStructWrapper::RTTI_Type_Descriptor,
                                 puVar18);
        if (lVar13 != 0) {
          lVar8 = *(longlong *)(lVar13 + 0x40);
        }
      }
      *plVar11 = lVar8;
    }
    (**(code **)(**(longlong **)((longlong)local_b8 + 0x10) + 0x178))
              (*(longlong **)((longlong)local_b8 + 0x10),local_b0);
    if (local_a8 != (longlong *)0x0) {
      uVar17 = uStack_98 - (longlong)local_a8;
      plVar11 = local_a8;
      if (0xfff < uVar17) {
        plVar11 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar11))) goto LAB_140520b7b;
        uVar17 = uVar17 + 0x27;
      }
      thunk_FUN_140b68ba8(plVar11,uVar17);
    }
  }
  else {
    local_a8 = (longlong *)0x0;
    plStack_a0 = (longlong *)0x0;
    uStack_98 = 0;
    local_90 = 0xf;
    if (((local_318 & 0x22) == 2) || (uVar17 = *local_348, uVar17 == 0)) {
      if (((local_318 & 4) == 0) && (*local_350 != 0)) {
        uVar17 = *local_350 + (longlong)*local_338;
        _Src = (void *)*local_370;
        goto joined_r0x000140520561;
      }
    }
    else {
      if (uVar17 < local_320) {
        uVar17 = local_320;
      }
      _Src = (void *)*local_368;
joined_r0x000140520561:
      if (_Src != (void *)0x0) {
        uVar17 = uVar17 - (longlong)_Src;
        if (uVar17 < 0x10) {
          uStack_98 = uVar17;
          memmove(&local_a8,_Src,uVar17);
          *(undefined1 *)((longlong)&local_a8 + uVar17) = 0;
        }
        else {
          FUN_1400069b0(&local_a8,uVar17);
        }
      }
    }
    plVar11 = *(longlong **)((longlong)pvVar5 + 0x18);
    (**(code **)(*plVar11 + 8))(plVar11,2);
    if (0xf < local_90) {
      uVar17 = local_90 + 1;
      plVar11 = local_a8;
      if (0xfff < uVar17) {
        plVar11 = (longlong *)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar11))) goto LAB_140520b7b;
        uVar17 = local_90 + 0x28;
      }
      thunk_FUN_140b68ba8(plVar11,uVar17);
    }
    *local_b0 = 0;
  }
  if (local_130 != 0) {
    uVar17 = local_120 - local_130;
    lVar8 = local_130;
    if (0xfff < uVar17) {
      lVar8 = *(longlong *)(local_130 + -8);
      if (0x1f < (ulonglong)((local_130 + -8) - lVar8)) goto LAB_140520b7b;
      uVar17 = uVar17 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar8,uVar17);
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
  }
  *(undefined8 *)local_140[1] = 0;
  puVar4 = (undefined8 *)*local_140;
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x20);
    puVar4 = puVar3;
  }
  thunk_FUN_140b68ba8(local_140,0x20);
  if (local_e8 != 0) {
    uVar17 = local_d8 - local_e8;
    lVar8 = local_e8;
    if (0xfff < uVar17) {
      lVar8 = *(longlong *)(local_e8 + -8);
      if (0x1f < (ulonglong)((local_e8 + -8) - lVar8)) goto LAB_140520b7b;
      uVar17 = uVar17 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar8,uVar17);
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
  }
  *(undefined8 *)local_f8[1] = 0;
  puVar4 = (undefined8 *)*local_f8;
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x20);
    puVar4 = puVar3;
  }
  thunk_FUN_140b68ba8(local_f8,0x20);
  if (local_1d8 != 0) {
    uVar17 = local_1c8 - local_1d8;
    lVar8 = local_1d8;
    if (0xfff < uVar17) {
      lVar8 = *(longlong *)(local_1d8 + -8);
      if (0x1f < (ulonglong)((local_1d8 + -8) - lVar8)) goto LAB_140520b7b;
      uVar17 = uVar17 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar8,uVar17);
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
  }
  *(undefined8 *)local_1e8[1] = 0;
  puVar4 = (undefined8 *)*local_1e8;
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x20);
    puVar4 = puVar3;
  }
  thunk_FUN_140b68ba8(local_1e8,0x20);
  if (local_198 != 0) {
    uVar17 = local_188 - local_198;
    lVar8 = local_198;
    if (0xfff < uVar17) {
      lVar8 = *(longlong *)(local_198 + -8);
      if (0x1f < (ulonglong)((local_198 + -8) - lVar8)) goto LAB_140520b7b;
      uVar17 = uVar17 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar8,uVar17);
    local_198 = 0;
    lStack_190 = 0;
    local_188 = 0;
  }
  *(undefined8 *)local_1a8[1] = 0;
  puVar4 = (undefined8 *)*local_1a8;
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x20);
    puVar4 = puVar3;
  }
  thunk_FUN_140b68ba8(local_1a8,0x20);
  if (local_290 != 0) {
    uVar17 = local_280 - local_290;
    lVar8 = local_290;
    if (0xfff < uVar17) {
      lVar8 = *(longlong *)(local_290 + -8);
      if (0x1f < (ulonglong)((local_290 + -8) - lVar8)) goto LAB_140520b7b;
      uVar17 = uVar17 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar8,uVar17);
    local_290 = 0;
    uStack_288 = 0;
    local_280 = 0;
  }
  *(undefined8 *)local_2a0[1] = 0;
  puVar4 = (undefined8 *)*local_2a0;
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x20);
    puVar4 = puVar3;
  }
  thunk_FUN_140b68ba8(local_2a0,0x20);
  if (local_250 != 0) {
    uVar17 = local_240 - local_250;
    lVar8 = local_250;
    if (0xfff < uVar17) {
      lVar8 = *(longlong *)(local_250 + -8);
      if (0x1f < (ulonglong)((local_250 + -8) - lVar8)) {
LAB_140520b7b:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar17 = uVar17 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar8,uVar17);
    local_250 = 0;
    lStack_248 = 0;
    local_240 = 0;
  }
  *(undefined8 *)local_260[1] = 0;
  puVar4 = (undefined8 *)*local_260;
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    thunk_FUN_140b68ba8(puVar4,0x20);
    puVar4 = puVar3;
  }
  thunk_FUN_140b68ba8(local_260,0x20);
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_3a0 + (longlong)*(int *)(local_3a0[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_388 + (longlong)*(int *)(local_3a0[0] + 4) + -0x1c) =
       *(int *)(local_3a0[0] + 4) + -0x98;
  local_388[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_388);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_388);
  std::ios_base::~ios_base(local_308);
  return local_b0;
}

