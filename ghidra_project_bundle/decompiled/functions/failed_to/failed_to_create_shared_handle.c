/**
 * Function: failed_to_create_shared_handle
 * Address:  1407296d0
 * Signature: undefined8 * __thiscall failed_to_create_shared_handle(void * this, undefined8 * param_1, ulonglong * param_2)
 * Body size: 2245 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * __thiscall
failed_to_create_shared_handle(void *this,undefined8 *param_1,ulonglong *param_2)

{
  char cVar1;
  void *pvVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *****pppppuVar7;
  undefined8 ******ppppppuVar8;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong **pplVar11;
  code *pcVar12;
  undefined8 *******pppppppuVar13;
  ulonglong *_Src;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 ******ppppppuVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  bool bVar23;
  int iStack_1f4;
  longlong local_1f0 [2];
  basic_ostream<char,std::char_traits<char>_> local_1e0;
  longlong *local_1c0;
  longlong *local_1b8 [3];
  longlong *local_1a0;
  ulonglong *local_198;
  int *local_188;
  ulonglong local_170;
  uint local_168;
  ios_base local_158 [6];
  ulonglong local_f8;
  ulonglong uStack_f0;
  undefined8 *******local_e8;
  undefined8 ******ppppppuStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined4 local_c8;
  undefined2 uStack_c4;
  char cStack_c2;
  undefined1 uStack_c1;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 *******local_a8;
  ulonglong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  code *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  pplVar11 = local_1b8;
  local_48 = 0xfffffffffffffffe;
  local_f8 = *param_2;
  uStack_f0 = param_2[1];
  local_e8 = (undefined8 *******)0x0;
  ppppppuStack_e0 = (undefined8 ******)0x0;
  local_d8 = 0;
  uStack_d0 = 0;
  uVar17 = param_2[4];
  _Src = param_2 + 2;
  if (0xf < param_2[5]) {
    _Src = (ulonglong *)param_2[2];
  }
  local_58 = param_1;
  if ((longlong)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  if (uVar17 < 0x10) {
    uStack_d0 = 0xf;
    local_e8 = (undefined8 *******)*_Src;
    ppppppuStack_e0 = (undefined8 ******)_Src[1];
    uVar18 = 0xf;
    local_d8 = uVar17;
  }
  else {
    uVar14 = uVar17 | 0xf;
    uVar18 = 0x16;
    if (0x16 < uVar14) {
      uVar18 = uVar14;
    }
    if (uVar14 < 0xfff) {
      local_e8 = (undefined8 *******)FUN_140b65d30(uVar18 + 1);
    }
    else {
      ppppppuVar16 = (undefined8 ******)FUN_140b65d30(uVar18 + 0x28);
      local_e8 = (undefined8 *******)((longlong)ppppppuVar16 + 0x27U & 0xffffffffffffffe0);
      local_e8[-1] = ppppppuVar16;
    }
    local_d8 = uVar17;
    uStack_d0 = uVar18;
    memcpy(local_e8,_Src,uVar17 + 1);
  }
  local_c8 = (undefined4)param_2[6];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_c0 = (undefined4)param_2[7];
  uStack_bc = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_b8 = (undefined4)param_2[8];
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_b0 = (undefined4)param_2[9];
  uStack_c4 = (undefined2)uVar4;
  cStack_c2 = (char)((uint)uVar4 >> 0x10);
  uStack_c1 = (undefined1)((uint)uVar4 >> 0x18);
  if (cStack_c2 == '\x01') {
    local_f8 = *param_2 + 0xff & 0xffffffffffffff00;
  }
  local_a0 = param_2 + 2;
  local_50 = (undefined8 *)FUN_140b65d30(0xf0);
  pppppppuVar13 = &local_e8;
  if (0xf < uVar18) {
    pppppppuVar13 = local_e8;
  }
  local_a8 = local_e8;
  if (uVar17 < 0x10) {
    ppppppuVar16 = *pppppppuVar13;
    pppppppuVar13 = &ppppppuStack_e0;
    if (0xf < uVar18) {
      pppppppuVar13 = local_e8 + 1;
    }
    ppppppuVar8 = *pppppppuVar13;
    uVar14 = 0xf;
  }
  else {
    uVar6 = uVar17 | 0xf;
    uVar14 = 0x16;
    if (0x16 < uVar6) {
      uVar14 = uVar6;
    }
    if (uVar6 < 0xfff) {
      ppppppuVar16 = (undefined8 ******)FUN_140b65d30(uVar14 + 1);
    }
    else {
      pppppuVar7 = (undefined8 *****)FUN_140b65d30(uVar14 + 0x28);
      ppppppuVar16 = (undefined8 ******)((longlong)pppppuVar7 + 0x27U & 0xffffffffffffffe0);
      ppppppuVar16[-1] = pppppuVar7;
    }
    memcpy(ppppppuVar16,pppppppuVar13,uVar17 + 1);
    ppppppuVar8 = (undefined8 ******)0x0;
  }
  *(undefined4 *)((longlong)local_50 + 0x5c) = uStack_bc;
  *(undefined4 *)(local_50 + 0xc) = uStack_b8;
  *(undefined4 *)((longlong)local_50 + 100) = uStack_b4;
  *(undefined4 *)(local_50 + 0xd) = uStack_b0;
  local_50[10] = CONCAT17(uStack_c1,CONCAT16(cStack_c2,CONCAT24(uStack_c4,local_c8)));
  local_50[0xb] = CONCAT44(uStack_bc,uStack_c0);
  puVar21 = (undefined8 *)((longlong)this + 0x10);
  *(undefined4 *)(local_50 + 1) = 1;
  local_50[2] = local_50 + 4;
  *(undefined4 *)(local_50 + 3) = 0;
  *local_50 = &nvrhi::d3d12::Buffer::vftable;
  local_50[4] = local_f8;
  local_50[5] = uStack_f0;
  local_50[6] = ppppppuVar16;
  local_50[7] = ppppppuVar8;
  local_50[8] = uVar17;
  local_50[9] = uVar14;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  *(undefined4 *)(local_50 + 0x10) = 0;
  local_50[0x11] = 0;
  local_50[0x12] = 0;
  local_50[0x13] = 0;
  local_50[0x14] = 0;
  *(undefined8 *)((longlong)local_50 + 0xa4) = 0;
  *(undefined8 *)((longlong)local_50 + 0xac) = 0;
  local_50[0x17] = 0;
  local_50[0x18] = 0;
  local_50[0x19] = 0;
  local_50[0x1a] = 0;
  local_50[0x1b] = puVar21;
  local_50[0x1c] = (longlong)this + 0x70;
  *(undefined4 *)(local_50 + 0x1d) = 0xffffffff;
  puVar15 = local_58;
  if (*(char *)((longlong)param_2 + 0x3b) == '\x01') {
    *local_58 = local_50;
  }
  else {
    local_50[0x12] = local_50[4];
    local_50[0x13] = 0x1000100000001;
    *(undefined4 *)(local_50 + 0x10) = 1;
    local_50[0x14] = 0x100000000;
    local_50[0x15] = 0x100000000;
    uVar4 = 0x10;
    if (*(char *)((longlong)local_50 + 0x51) == '\x01') {
      *(undefined4 *)(local_50 + 0x16) = 4;
      uVar4 = 0x14;
    }
    if (*(char *)((longlong)param_2 + 0x3c) == '\x01') {
      *local_58 = local_50;
    }
    else {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      bVar20 = (byte)(uint)param_2[9] & 1;
      if (((uint)param_2[9] & 4) == 0) {
        cVar1 = *(char *)((longlong)local_50 + 0x65);
        bVar3 = bVar20;
        if (cVar1 == '\x02') goto LAB_140729a2d;
LAB_140729a59:
        bVar20 = bVar3;
        if (cVar1 == '\x01') {
          local_98 = 3;
          bVar23 = true;
LAB_140729aad:
          if ((bVar23) && ((int)param_2[8] == 0x2000)) {
            local_98 = 0x300000004;
            uStack_90 = CONCAT44(uStack_90._4_4_,1);
          }
        }
        else if (cVar1 == '\0') {
          local_98 = 1;
          FUN_14071d7e0((int)param_2[8]);
          bVar23 = *(char *)((longlong)local_50 + 0x65) == '\x01';
          goto LAB_140729aad;
        }
      }
      else {
        *(undefined4 *)(local_50 + 0x16) = uVar4;
        bVar20 = 1;
        cVar1 = *(char *)((longlong)local_50 + 0x65);
        bVar3 = 1;
        if (cVar1 != '\x02') goto LAB_140729a59;
LAB_140729a2d:
        local_98 = 2;
      }
      iVar5 = (**(code **)(*(longlong *)*puVar21 + 0xd8))();
      if (iVar5 < 0) {
        FUN_1401e87c0(local_1f0,1);
        uVar9 = FUN_1400e5ec0(&local_1e0,"CreateCommittedResource call failed for buffer ");
        uVar10 = FUN_140527b30(local_a0);
        uVar9 = FUN_1400e5ec0(uVar9,uVar10);
        this_00 = (basic_ostream<char,std::char_traits<char>_> *)
                  FUN_1400e5ec0(uVar9,", HRESULT = 0x");
        lVar19 = (longlong)this_00->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
        *(uint *)((longlong)&this_00[1].vbtablePtr + lVar19) =
             *(uint *)((longlong)&this_00[1].vbtablePtr + lVar19) & 0xfffff1ff | 0x800;
        std::setw((__int64)&local_78);
        (*local_78)((longlong)&this_00->vbtablePtr +
                    (longlong)this_00->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset,
                    uStack_70);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,iVar5);
        puVar22 = local_50;
        puVar15 = local_58;
        local_78 = (code *)0x0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0xf;
        if (((local_168 & 0x22) == 2) || (uVar17 = *local_198, uVar17 == 0)) {
          if (((local_168 & 4) == 0) && (*local_1a0 != 0)) {
            uVar17 = *local_1a0 + (longlong)*local_188;
            pvVar2 = (void *)*local_1c0;
            goto joined_r0x000140729cce;
          }
        }
        else {
          if (uVar17 < local_170) {
            uVar17 = local_170;
          }
          pvVar2 = (void *)*local_1b8[0];
joined_r0x000140729cce:
          if (pvVar2 != (void *)0x0) {
            uVar17 = uVar17 - (longlong)pvVar2;
            if (uVar17 < 0x10) {
              local_68 = uVar17;
              memmove(&local_78,pvVar2,uVar17);
              *(undefined1 *)((longlong)&local_78 + uVar17) = 0;
            }
            else {
              FUN_1400069b0(&local_78,uVar17);
            }
          }
        }
        FUN_14053e350(puVar21,&local_78);
      }
      else {
        if ((bVar20 == 0) || (iVar5 = (**(code **)(*(longlong *)*puVar21 + 0xf8))(), -1 < iVar5)) {
          create_buffer(local_50);
          *local_58 = local_50;
          puVar15 = local_58;
          goto joined_r0x000140729f22;
        }
        FUN_1401e87c0(local_1f0,1);
        uVar9 = FUN_1400e5ec0(&local_1e0,"Failed to create shared handle ");
        uVar10 = FUN_140527b30(local_a0);
        uVar9 = FUN_1400e5ec0(uVar9,uVar10);
        FUN_1400e5ec0(uVar9,", error code = 0x");
        *(uint *)(&local_1e0.basic_ostream<char,std::char_traits<char>_>_data.field_0x0 +
                 *(int *)(local_1f0[0] + 4)) =
             *(uint *)(&local_1e0.basic_ostream<char,std::char_traits<char>_>_data.field_0x0 +
                      *(int *)(local_1f0[0] + 4)) & 0xfffff1ff | 0x800;
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(&local_1e0,iVar5);
        puVar22 = local_50;
        puVar15 = local_58;
        local_78 = (code *)0x0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0xf;
        if (((local_168 & 0x22) == 2) || (uVar17 = *local_198, uVar17 == 0)) {
          if (((local_168 & 4) == 0) && (*local_1a0 != 0)) {
            pplVar11 = &local_1c0;
            uVar17 = *local_1a0 + (longlong)*local_188;
            goto LAB_140729deb;
          }
        }
        else {
          if (uVar17 < local_170) {
            uVar17 = local_170;
          }
LAB_140729deb:
          pvVar2 = (void *)**pplVar11;
          if (pvVar2 != (void *)0x0) {
            uVar17 = uVar17 - (longlong)pvVar2;
            if (uVar17 < 0x10) {
              local_68 = uVar17;
              memmove(&local_78,pvVar2,uVar17);
              *(undefined1 *)((longlong)&local_78 + uVar17) = 0;
            }
            else {
              FUN_1400069b0(&local_78,uVar17);
            }
          }
        }
        FUN_14053e350(puVar21,&local_78);
      }
      if (0xf < local_60) {
        uVar17 = local_60 + 1;
        pcVar12 = local_78;
        if (0xfff < uVar17) {
          pcVar12 = *(code **)(local_78 + -8);
          if ((code *)0x1f < local_78 + (-8 - (longlong)pcVar12)) goto LAB_140729f7c;
          uVar17 = local_60 + 0x28;
        }
        thunk_FUN_140b68ba8(pcVar12,uVar17);
      }
      (**(code **)*puVar22)(puVar22);
      *puVar15 = 0;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((longlong)local_1f0 + (longlong)*(int *)(local_1f0[0] + 4)) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)&iStack_1f4 + (longlong)*(int *)(local_1f0[0] + 4)) =
           *(int *)(local_1f0[0] + 4) + -0x98;
      local_1e0.basic_ostream<char,std::char_traits<char>_>_data =
           (basic_ostream<char,std::char_traits<char>_>_data)
           &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      FUN_1401da8b0(&local_1e0.basic_ostream<char,std::char_traits<char>_>_data);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)
                 &local_1e0.basic_ostream<char,std::char_traits<char>_>_data);
      std::ios_base::~ios_base(local_158);
    }
  }
joined_r0x000140729f22:
  if (0xf < uVar18) {
    if (uVar18 < 0xfff) {
      lVar19 = uVar18 + 1;
      pppppppuVar13 = local_a8;
    }
    else {
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)local_a8[-1]))) {
LAB_140729f7c:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      lVar19 = uVar18 + 0x28;
      pppppppuVar13 = (undefined8 *******)local_a8[-1];
    }
    thunk_FUN_140b68ba8(pppppppuVar13,lVar19);
  }
  return puVar15;
}

