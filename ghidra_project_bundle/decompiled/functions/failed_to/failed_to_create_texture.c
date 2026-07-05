/**
 * Function: failed_to_create_texture
 * Address:  1407243e0
 * Signature: undefined8 * __thiscall failed_to_create_texture(void * this, undefined8 * param_1, longlong * param_2, char * param_3)
 * Body size: 2407 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * __thiscall
failed_to_create_texture(void *this,undefined8 *param_1,longlong *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *****pppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *******pppppppuVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 ******ppppppuVar14;
  size_t _Size;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 in_stack_fffffffffffffd18;
  undefined4 uVar18;
  longlong local_2b8;
  longlong lStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined8 local_284;
  int local_27c;
  longlong local_278 [2];
  basic_ostream<char,std::char_traits<char>_> local_268;
  longlong *local_248;
  longlong *local_240;
  longlong *local_228;
  ulonglong *local_220;
  int *local_210;
  ulonglong local_1f8;
  uint local_1f0;
  ios_base local_1e0 [6];
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong lStack_168;
  undefined6 uStack_160;
  undefined2 local_15a;
  undefined2 uStack_158;
  undefined4 uStack_156;
  undefined4 uStack_152;
  undefined4 uStack_14e;
  void *local_148;
  longlong lStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined1 uStack_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined8 uStack_107;
  undefined8 uStack_f8;
  undefined6 uStack_f0;
  undefined2 local_ea;
  undefined2 uStack_e8;
  undefined4 uStack_e6;
  undefined4 uStack_e2;
  undefined4 uStack_de;
  undefined8 *******local_d8;
  undefined8 ******ppppppuStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  char local_90;
  void *local_88;
  undefined8 *local_80;
  undefined8 *******local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffd18 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  lStack_168 = param_2[4];
  uStack_156 = *(undefined4 *)((longlong)param_2 + 0x32);
  uStack_152 = *(undefined4 *)((longlong)param_2 + 0x36);
  uStack_14e = *(undefined4 *)((longlong)param_2 + 0x3a);
  uStack_158 = (undefined2)((uint)*(undefined4 *)((longlong)param_2 + 0x2e) >> 0x10);
  uStack_160 = (undefined6)param_2[5];
  local_15a = (undefined2)((ulonglong)param_2[5] >> 0x30);
  local_148 = (void *)0x0;
  lStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uVar9 = param_2[10];
  if ((ulonglong)param_2[0xb] < 0x10) {
    plVar15 = param_2 + 8;
  }
  else {
    plVar15 = (longlong *)param_2[8];
  }
  if ((longlong)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (uVar9 < 0x10) {
    uStack_130 = 0xf;
    local_148 = (void *)*plVar15;
    lStack_140 = plVar15[1];
    local_138 = uVar9;
  }
  else {
    uVar12 = uVar9 | 0xf;
    uVar16 = 0x16;
    if (0x16 < uVar12) {
      uVar16 = uVar12;
    }
    if (uVar12 < 0xfff) {
      local_148 = (void *)FUN_140b65d30(uVar16 + 1);
    }
    else {
      lVar17 = FUN_140b65d30(uVar16 + 0x28);
      local_148 = (void *)(lVar17 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)local_148 - 8) = lVar17;
    }
    local_138 = uVar9;
    uStack_130 = uVar16;
    memcpy(local_148,plVar15,uVar9 + 1);
  }
  local_128 = param_2[0xc];
  lStack_120 = param_2[0xd];
  lStack_118 = param_2[0xe];
  uStack_107 = *(undefined8 *)((longlong)param_2 + 0x81);
  uStack_108 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x79) >> 0x38);
  uStack_110 = (undefined1)param_2[0xf];
  local_10f = (undefined7)((ulonglong)param_2[0xf] >> 8);
  local_2b8 = param_2[0x12];
  lStack_2b0 = param_2[0x13];
  local_2a8 = (undefined4)param_2[0x14];
  uStack_2a4 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uStack_2a0 = (undefined4)param_2[0x15];
  uStack_29c = *(undefined4 *)((longlong)param_2 + 0xac);
  local_298 = (undefined4)param_2[0x16];
  uStack_294 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uStack_290 = (undefined4)param_2[0x17];
  local_178 = 0;
  uStack_170 = 0;
  local_17c = 1;
  uStack_28c = 0;
  local_288 = 4;
  if (*param_3 == '\0') {
    local_298 = 0xbd;
  }
  else if (*param_3 == '\x01') {
    local_298 = 0xbe;
  }
  local_27c = *(int *)(param_3 + 0xc);
  local_284 = *(undefined8 *)(param_3 + 4);
  local_88 = this;
  local_80 = param_1;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x28))(param_2);
  uStack_f8 = *puVar3;
  uStack_e6 = *(undefined4 *)((longlong)puVar3 + 0x12);
  uStack_e2 = *(undefined4 *)((longlong)puVar3 + 0x16);
  uStack_de = *(undefined4 *)((longlong)puVar3 + 0x1a);
  uStack_e8 = (undefined2)((uint)*(undefined4 *)((longlong)puVar3 + 0xe) >> 0x10);
  uStack_f0 = (undefined6)puVar3[1];
  local_ea = (undefined2)((ulonglong)puVar3[1] >> 0x30);
  local_d8 = (undefined8 *******)0x0;
  ppppppuStack_d0 = (undefined8 ******)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar9 = puVar3[6];
  if ((ulonglong)puVar3[7] < 0x10) {
    puVar13 = puVar3 + 4;
  }
  else {
    puVar13 = (undefined8 *)puVar3[4];
  }
  if ((longlong)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (uVar9 < 0x10) {
    uStack_c0 = 0xf;
    local_d8 = (undefined8 *******)*puVar13;
    ppppppuStack_d0 = (undefined8 ******)puVar13[1];
    uVar16 = 0xf;
    local_c8 = uVar9;
  }
  else {
    uVar12 = uVar9 | 0xf;
    uVar16 = 0x16;
    if (0x16 < uVar12) {
      uVar16 = uVar12;
    }
    if (uVar12 < 0xfff) {
      local_d8 = (undefined8 *******)FUN_140b65d30(uVar16 + 1);
    }
    else {
      ppppppuVar14 = (undefined8 ******)FUN_140b65d30(uVar16 + 0x28);
      local_d8 = (undefined8 *******)((longlong)ppppppuVar14 + 0x27U & 0xffffffffffffffe0);
      local_d8[-1] = ppppppuVar14;
    }
    local_c8 = uVar9;
    uStack_c0 = uVar16;
    memcpy(local_d8,puVar13,uVar9 + 1);
  }
  local_98 = (undefined4)puVar3[0xc];
  local_b8 = *(undefined4 *)(puVar3 + 8);
  uStack_b4 = *(undefined4 *)((longlong)puVar3 + 0x44);
  uStack_b0 = *(undefined4 *)(puVar3 + 9);
  uStack_ac = *(undefined4 *)((longlong)puVar3 + 0x4c);
  local_a8 = *(undefined4 *)(puVar3 + 10);
  uStack_a4 = *(undefined4 *)((longlong)puVar3 + 0x54);
  uStack_a0 = *(undefined4 *)(puVar3 + 0xb);
  uStack_9c = *(undefined4 *)((longlong)puVar3 + 0x5c);
  uStack_94 = *(undefined4 *)(param_3 + 0x10);
  local_90 = param_3[0x14];
  local_70 = (undefined8 *)FUN_140b65d30(200);
  pppppppuVar10 = &local_d8;
  if (0xf < uVar16) {
    pppppppuVar10 = local_d8;
  }
  local_78 = local_d8;
  if (uVar9 < 0x10) {
    ppppppuVar14 = *pppppppuVar10;
    pppppppuVar10 = &ppppppuStack_d0;
    if (0xf < uVar16) {
      pppppppuVar10 = local_d8 + 1;
    }
    ppppppuVar6 = *pppppppuVar10;
    uVar12 = 0xf;
  }
  else {
    uVar4 = uVar9 | 0xf;
    uVar12 = 0x16;
    if (0x16 < uVar4) {
      uVar12 = uVar4;
    }
    if (uVar4 < 0xfff) {
      ppppppuVar14 = (undefined8 ******)FUN_140b65d30(uVar12 + 1);
    }
    else {
      pppppuVar5 = (undefined8 *****)FUN_140b65d30(uVar12 + 0x28);
      ppppppuVar14 = (undefined8 ******)((longlong)pppppuVar5 + 0x27U & 0xffffffffffffffe0);
      ppppppuVar14[-1] = pppppuVar5;
    }
    memcpy(ppppppuVar14,pppppppuVar10,uVar9 + 1);
    ppppppuVar6 = (undefined8 ******)0x0;
  }
  puVar3 = local_70;
  *(uint *)((longlong)local_70 + 0x91) = CONCAT13((undefined1)uStack_9c,uStack_a0._1_3_);
  *(uint *)((longlong)local_70 + 0x95) = CONCAT13((undefined1)local_98,uStack_9c._1_3_);
  *(uint *)((longlong)local_70 + 0x99) = CONCAT13((undefined1)uStack_94,local_98._1_3_);
  *(uint *)((longlong)local_70 + 0x9d) = CONCAT13(local_90,uStack_94._1_3_);
  *(undefined4 *)(local_70 + 0x11) = local_a8;
  *(undefined4 *)((longlong)local_70 + 0x8c) = uStack_a4;
  *(undefined4 *)(local_70 + 0x12) = uStack_a0;
  *(undefined4 *)((longlong)local_70 + 0x94) = uStack_9c;
  local_70[0xf] = CONCAT44(uStack_b4,local_b8);
  local_70[0x10] = CONCAT44(uStack_ac,uStack_b0);
  uVar7 = *(undefined8 *)(param_3 + 8);
  local_70[4] = *(undefined8 *)param_3;
  local_70[5] = uVar7;
  local_70[6] = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(local_70 + 1) = 1;
  local_70[2] = local_70 + 7;
  *(undefined4 *)(local_70 + 3) = 0;
  *(undefined2 *)((longlong)local_70 + 0x1c) = 0;
  *local_70 = &nvrhi::d3d12::SamplerFeedbackTexture::vftable;
  local_70[7] = uStack_f8;
  local_70[8] = CONCAT26(local_ea,uStack_f0);
  *(uint *)((longlong)local_70 + 0x46) = CONCAT22(uStack_e8,local_ea);
  *(undefined4 *)((longlong)local_70 + 0x4a) = uStack_e6;
  *(undefined4 *)((longlong)local_70 + 0x4e) = uStack_e2;
  *(undefined4 *)((longlong)local_70 + 0x52) = uStack_de;
  local_70[0xb] = ppppppuVar14;
  local_70[0xc] = ppppppuVar6;
  local_70[0xd] = uVar9;
  local_70[0xe] = uVar12;
  local_70[0x15] = 0;
  local_70[0x16] = param_2;
  (**(code **)(*param_2 + 8))(param_2);
  lVar17 = (longlong)local_88 + 0x10;
  *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
  puVar3[0x18] = lVar17;
  *(undefined2 *)((longlong)puVar3 + 0x1c) = 0x101;
  plVar15 = *(longlong **)((longlong)local_88 + 0x28);
  uVar1 = FUN_14071d7e0(*(undefined4 *)(param_3 + 0x10));
  puVar3 = local_70 + 0x15;
  iVar2 = (**(code **)(*plVar15 + 0x228))
                    (plVar15,&local_17c,0,&local_2b8,CONCAT44(uVar18,uVar1),0,0,&DAT_140df56c0,
                     puVar3);
  if (iVar2 < 0) {
    FUN_1401e87c0(local_278,1);
    uVar7 = FUN_1400e5ec0(&local_268,"Failed to create texture ");
    uVar8 = FUN_140527b30(&local_148);
    uVar7 = FUN_1400e5ec0(uVar7,uVar8);
    FUN_1400e5ec0(uVar7,", error code = 0x");
    *(uint *)(&local_268.basic_ostream<char,std::char_traits<char>_>_data.field_0x0 +
             *(int *)(local_278[0] + 4)) =
         *(uint *)(&local_268.basic_ostream<char,std::char_traits<char>_>_data.field_0x0 +
                  *(int *)(local_278[0] + 4)) & 0xfffff1ff | 0x800;
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(&local_268,iVar2);
    puVar13 = local_80;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_1f0 & 0x22) == 2) || (uVar9 = *local_220, uVar9 == 0)) {
      if (((local_1f0 & 4) == 0) && (*local_228 != 0)) {
        uVar9 = *local_228 + (longlong)*local_210;
        pvVar11 = (void *)*local_248;
        goto joined_r0x000140724a6f;
      }
    }
    else {
      if (uVar9 < local_1f8) {
        uVar9 = local_1f8;
      }
      pvVar11 = (void *)*local_240;
joined_r0x000140724a6f:
      if (pvVar11 != (void *)0x0) {
        uVar9 = uVar9 - (longlong)pvVar11;
        if (uVar9 < 0x10) {
          local_58 = uVar9;
          memmove(&local_68,pvVar11,uVar9);
          *(undefined1 *)((longlong)&local_68 + uVar9) = 0;
        }
        else {
          FUN_1400069b0(&local_68,uVar9);
        }
      }
    }
    FUN_14053e350(lVar17,&local_68);
    if (0xf < local_50) {
      uVar9 = local_50 + 1;
      lVar17 = local_68;
      if (0xfff < uVar9) {
        lVar17 = *(longlong *)(local_68 + -8);
        if (0x1f < (ulonglong)((local_68 + -8) - lVar17)) goto LAB_140724d2e;
        uVar9 = local_50 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar17,uVar9);
    }
    (**(code **)*local_70)();
    *puVar13 = 0;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4) + -4) =
         *(int *)(local_278[0] + 4) + -0x98;
    local_268.basic_ostream<char,std::char_traits<char>_>_data =
         (basic_ostream<char,std::char_traits<char>_>_data)
         &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    FUN_1401da8b0(&local_268.basic_ostream<char,std::char_traits<char>_>_data);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)
               &local_268.basic_ostream<char,std::char_traits<char>_>_data);
    std::ios_base::~ios_base(local_1e0);
  }
  else {
    FUN_140724fc0(local_278,1);
    uVar7 = FUN_140725170(&local_268,"Sampler Feedback Texture: ");
    uVar8 = FUN_140527b30(&local_148);
    FUN_140725170(uVar7,uVar8);
    puVar13 = local_80;
    plVar15 = (longlong *)*puVar3;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 7;
    if (((local_1f0 & 0x22) == 2) || (uVar9 = *local_220, uVar9 == 0)) {
      if (((local_1f0 & 4) == 0) && (*local_228 != 0)) {
        uVar9 = *local_228 + (longlong)*local_210 * 2;
        pvVar11 = (void *)*local_248;
        goto joined_r0x00014072492f;
      }
    }
    else {
      if (uVar9 < local_1f8) {
        uVar9 = local_1f8;
      }
      pvVar11 = (void *)*local_240;
joined_r0x00014072492f:
      if (pvVar11 != (void *)0x0) {
        _Size = uVar9 - (longlong)pvVar11;
        if ((ulonglong)((longlong)_Size >> 1) < 8) {
          local_58 = (longlong)_Size >> 1;
          memmove(&local_68,pvVar11,_Size);
          *(undefined2 *)((longlong)&local_68 + _Size) = 0;
        }
        else {
          FUN_140003fc0(&local_68);
        }
      }
    }
    (**(code **)(*plVar15 + 0x30))(plVar15);
    if (7 < local_50) {
      lVar17 = local_68;
      if ((0xfff < local_50 * 2 + 2) &&
         (lVar17 = *(longlong *)(local_68 + -8), 0x1f < (ulonglong)((local_68 + -8) - lVar17)))
      goto LAB_140724d2e;
      thunk_FUN_140b68ba8(lVar17);
    }
    *puVar13 = local_70;
    *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
     ((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4)) =
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vftable;
    *(int *)((longlong)local_278 + (longlong)*(int *)(local_278[0] + 4) + -4) =
         *(int *)(local_278[0] + 4) + -0x98;
    local_268.basic_ostream<char,std::char_traits<char>_>_data =
         (basic_ostream<char,std::char_traits<char>_>_data)
         &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
    FUN_140727fe0(&local_268.basic_ostream<char,std::char_traits<char>_>_data);
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
              ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
               &local_268.basic_ostream<char,std::char_traits<char>_>_data);
    std::ios_base::~ios_base(local_1e0);
  }
  if (0xf < uVar16) {
    if (uVar16 < 0xfff) {
      lVar17 = uVar16 + 1;
      pppppppuVar10 = local_78;
    }
    else {
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)local_78[-1])))
      goto LAB_140724d2e;
      lVar17 = uVar16 + 0x28;
      pppppppuVar10 = (undefined8 *******)local_78[-1];
    }
    thunk_FUN_140b68ba8(pppppppuVar10,lVar17);
  }
  if (0xf < uStack_130) {
    uVar9 = uStack_130 + 1;
    pvVar11 = local_148;
    if (0xfff < uVar9) {
      pvVar11 = *(void **)((longlong)local_148 + -8);
      if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pvVar11))) {
LAB_140724d2e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar9 = uStack_130 + 0x28;
    }
    thunk_FUN_140b68ba8(pvVar11,uVar9);
  }
  return puVar13;
}

