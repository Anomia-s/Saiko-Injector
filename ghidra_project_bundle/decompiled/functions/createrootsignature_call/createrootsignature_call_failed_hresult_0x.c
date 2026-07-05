/**
 * Function: createrootsignature_call_failed_hresult_0x
 * Address:  140745a00
 * Signature: undefined8 * __thiscall createrootsignature_call_failed_hresult_0x(void * this, undefined8 * param_1, longlong param_2, char param_3, char param_4, longlong param_5, uint param_6)
 * Body size: 2298 bytes
 */


undefined8 * __thiscall
createrootsignature_call_failed_hresult_0x
          (void *this,undefined8 *param_1,longlong param_2,char param_3,char param_4,
          longlong param_5,uint param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  void *pvVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  basic_ostream<char,std::char_traits<char>_> *pbVar17;
  code *pcVar18;
  uint uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  int iStack_1e4;
  longlong local_1e0 [2];
  basic_ostream<char,std::char_traits<char>_> local_1d0;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  longlong *local_190;
  ulonglong *local_188;
  int *local_178;
  ulonglong local_160;
  uint local_158;
  ios_base local_148 [6];
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  undefined8 *local_b0;
  undefined4 *local_a8;
  undefined4 *puStack_a0;
  undefined4 *local_98;
  code *local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  uint local_68;
  uint local_64;
  longlong *local_60;
  longlong *local_58;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b0 = param_1;
  local_49 = param_3;
  puVar13 = (undefined8 *)FUN_140b65d30(0xb8);
  *(undefined4 *)(puVar13 + 1) = 1;
  *puVar13 = &nvrhi::d3d12::RootSignature::vftable;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0x10] = 0;
  puVar13[0x11] = 0;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  *(undefined8 *)((longlong)puVar13 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar13 + 0xa4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0xac) = 0xffffffff;
  puVar13[0x16] = (longlong)this + 0x70;
  local_a8 = (undefined4 *)0x0;
  puStack_a0 = (undefined4 *)0x0;
  local_98 = (undefined4 *)0x0;
  uVar19 = 0;
  local_b8 = this;
  if (param_6 != 0) {
    do {
      while (puVar20 = (undefined4 *)((ulonglong)uVar19 * 0x20 + param_5), puStack_a0 != local_98) {
        uVar4 = *puVar20;
        uVar5 = puVar20[1];
        uVar6 = puVar20[2];
        uVar7 = puVar20[3];
        uVar15 = *(undefined8 *)(puVar20 + 6);
        *(undefined8 *)(puStack_a0 + 4) = *(undefined8 *)(puVar20 + 4);
        *(undefined8 *)(puStack_a0 + 6) = uVar15;
        *puStack_a0 = uVar4;
        puStack_a0[1] = uVar5;
        puStack_a0[2] = uVar6;
        puStack_a0[3] = uVar7;
        puStack_a0 = puStack_a0 + 8;
        uVar19 = uVar19 + 1;
        if (param_6 <= uVar19) goto LAB_140745b2d;
      }
      FUN_14019fd30(&local_a8);
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_6);
  }
LAB_140745b2d:
  local_68 = 0;
  local_64 = 0;
  uVar19 = 0;
  while (pvVar10 = local_b8, uVar19 < *(uint *)(param_2 + 0x40)) {
    uVar21 = (ulonglong)uVar19;
    lVar14 = (**(code **)(**(longlong **)(param_2 + uVar21 * 8) + 0x28))();
    plVar1 = *(longlong **)(param_2 + uVar21 * 8);
    if (lVar14 == 0) {
      lVar14 = (**(code **)(*plVar1 + 0x30))(plVar1);
      if (lVar14 == 0) goto LAB_140745b60;
      plVar1 = *(longlong **)(param_2 + uVar21 * 8);
      lVar14 = (**(code **)(*plVar1 + 0x30))(plVar1);
      iVar12 = *(int *)(lVar14 + 0x98);
      if (iVar12 == 0) {
        uVar21 = (longlong)puStack_a0 - (longlong)local_a8;
        (**(code **)(*plVar1 + 8))(plVar1);
        lVar14 = puVar13[0x13];
        plVar2 = (longlong *)puVar13[lVar14 * 2 + 3];
        puVar13[lVar14 * 2 + 3] = plVar1;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        *(int *)(puVar13 + lVar14 * 2 + 4) = (int)(uVar21 >> 5);
        puVar13[0x13] = puVar13[0x13] + 1;
        if (puStack_a0 == local_98) {
          FUN_14019fd30(&local_a8,puStack_a0,plVar1 + 0x77);
          goto LAB_140745b60;
        }
        lVar8 = plVar1[0x77];
        uVar4 = *(undefined4 *)((longlong)plVar1 + 0x3bc);
        lVar9 = plVar1[0x78];
        uVar5 = *(undefined4 *)((longlong)plVar1 + 0x3c4);
        lVar14 = plVar1[0x7a];
        *(longlong *)(puStack_a0 + 4) = plVar1[0x79];
        *(longlong *)(puStack_a0 + 6) = lVar14;
        *puStack_a0 = (int)lVar8;
        puStack_a0[1] = uVar4;
        puStack_a0[2] = (int)lVar9;
        puStack_a0[3] = uVar5;
        puStack_a0 = puStack_a0 + 8;
        uVar19 = uVar19 + 1;
      }
      else {
        (**(code **)(*plVar1 + 8))(plVar1);
        lVar14 = puVar13[0x13];
        plVar2 = (longlong *)puVar13[lVar14 * 2 + 3];
        puVar13[lVar14 * 2 + 3] = plVar1;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        *(undefined4 *)(puVar13 + lVar14 * 2 + 4) = 0xffffffff;
        puVar13[0x13] = puVar13[0x13] + 1;
        local_68 = CONCAT31((int3)(local_68 >> 8),(byte)local_68 | iVar12 != 3);
        local_64 = CONCAT31((int3)(local_64 >> 8),(byte)local_64 | iVar12 == 3);
        uVar19 = uVar19 + 1;
      }
    }
    else {
      uVar21 = (longlong)puStack_a0 - (longlong)local_a8;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      lVar14 = puVar13[0x13];
      plVar2 = (longlong *)puVar13[lVar14 * 2 + 3];
      puVar13[lVar14 * 2 + 3] = plVar1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      iVar12 = (int)(uVar21 >> 5);
      *(int *)(puVar13 + lVar14 * 2 + 4) = iVar12;
      puVar13[0x13] = puVar13[0x13] + 1;
      FUN_140748600(&local_a8,puStack_a0,plVar1 + 0x22);
      if ((int)plVar1[9] == 0) {
LAB_140745b60:
        uVar19 = uVar19 + 1;
      }
      else {
        *(int *)(puVar13 + 0x15) = (int)plVar1[9];
        *(int *)((longlong)puVar13 + 0xac) = iVar12 + *(int *)((longlong)plVar1 + 0x4c);
        uVar19 = uVar19 + 1;
      }
    }
  }
  uStack_e0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  local_e8 = 2;
  uVar19 = 0;
  if (local_49 == '\0') {
    if (param_4 == '\0') goto LAB_140745d79;
LAB_140745da3:
    uVar19 = uVar19 | 0x80;
    cVar11 = *(char *)((longlong)local_b8 + 0x50f);
    uStack_c0 = uVar19;
  }
  else {
    uStack_c0 = 1;
    uVar19 = 1;
    if (param_4 != '\0') goto LAB_140745da3;
LAB_140745d79:
    cVar11 = *(char *)((longlong)local_b8 + 0x50f);
  }
  if (cVar11 == '\x01') {
    if ((local_64 & 1) != 0) {
      uVar19 = uVar19 | 0x800;
      uStack_c0 = uVar19;
    }
    if ((local_68 & 1) != 0) {
      uStack_c0 = uVar19 | 0x400;
    }
  }
  uStack_bc = 0;
  if (local_a8 != puStack_a0) {
    local_d8 = local_a8;
    uStack_e0 = (ulonglong)((longlong)puStack_a0 - (longlong)local_a8) >> 5 & 0xffffffff;
  }
  local_60 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  iVar12 = D3D12SerializeVersionedRootSignature(&local_e8,&local_60);
  if (iVar12 < 0) {
    FUN_1401e87c0(local_1e0,1);
    pbVar17 = (basic_ostream<char,std::char_traits<char>_> *)
              FUN_1400e5ec0(&local_1d0,
                            "D3D12SerializeVersionedRootSignature call failed, HRESULT = 0x");
    lVar14 = (longlong)pbVar17->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
    *(uint *)((longlong)&pbVar17[1].vbtablePtr + lVar14) =
         *(uint *)((longlong)&pbVar17[1].vbtablePtr + lVar14) & 0xfffff1ff | 0x800;
    std::setw((__int64)&local_88);
    (*local_88)((longlong)&pbVar17->vbtablePtr +
                (longlong)pbVar17->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset,
                uStack_80);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar17,iVar12);
    if (local_58 != (longlong *)0x0) {
      cVar11 = std::basic_ios<char,std::char_traits<char>_>::widen
                         ((basic_ios<char,std::char_traits<char>_> *)
                          ((longlong)&local_1d0.vbtablePtr +
                          (longlong)
                          (local_1d0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset),
                          '\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(&local_1d0,cVar11);
      std::basic_ostream<char,std::char_traits<char>_>::flush(&local_1d0);
      uVar15 = (**(code **)(*local_58 + 0x18))();
      FUN_1400e5ec0(&local_1d0,uVar15);
    }
    puVar13 = local_b0;
    local_88 = (code *)0x0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    if (((local_158 & 0x22) == 2) || (uVar21 = *local_188, uVar21 == 0)) {
      if (((local_158 & 4) == 0) && (*local_190 != 0)) {
        uVar21 = *local_190 + (longlong)*local_178;
        pvVar3 = (void *)*local_1b0;
        goto joined_r0x000140746010;
      }
    }
    else {
      if (uVar21 < local_160) {
        uVar21 = local_160;
      }
      pvVar3 = (void *)*local_1a8;
joined_r0x000140746010:
      if (pvVar3 != (void *)0x0) {
        uVar21 = uVar21 - (longlong)pvVar3;
        if (uVar21 < 0x10) {
          local_78 = uVar21;
          memmove(&local_88,pvVar3,uVar21);
          *(undefined1 *)((longlong)&local_88 + uVar21) = 0;
        }
        else {
          FUN_1400069b0(&local_88,uVar21);
        }
      }
    }
    FUN_14053e350((longlong)pvVar10 + 0x10,&local_88);
LAB_1407461c4:
    if (0xf < local_70) {
      uVar21 = local_70 + 1;
      pcVar18 = local_88;
      if (0xfff < uVar21) {
        pcVar18 = *(code **)(local_88 + -8);
        if ((code *)0x1f < local_88 + (-8 - (longlong)pcVar18)) goto LAB_1407462f0;
        uVar21 = local_70 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar18,uVar21);
    }
    *puVar13 = 0;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)local_1e0 + (longlong)*(int *)(local_1e0[0] + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_1e4 + (longlong)*(int *)(local_1e0[0] + 4)) =
         *(int *)(local_1e0[0] + 4) + -0x98;
    local_1d0.basic_ostream<char,std::char_traits<char>_>_data =
         (basic_ostream<char,std::char_traits<char>_>_data)
         &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    FUN_1401da8b0(&local_1d0.basic_ostream<char,std::char_traits<char>_>_data);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)
               &local_1d0.basic_ostream<char,std::char_traits<char>_>_data);
    std::ios_base::~ios_base(local_148);
    plVar1 = local_58;
  }
  else {
    plVar1 = *(longlong **)((longlong)pvVar10 + 0x10);
    uVar15 = (**(code **)(*local_60 + 0x20))();
    uVar16 = (**(code **)(*local_60 + 0x18))();
    iVar12 = (**(code **)(*plVar1 + 0x80))(plVar1,0,uVar16,uVar15,&DAT_14123d310,puVar13 + 0x14);
    if (iVar12 < 0) {
      FUN_1401e87c0(local_1e0,1);
      pbVar17 = (basic_ostream<char,std::char_traits<char>_> *)
                FUN_1400e5ec0(&local_1d0,"CreateRootSignature call failed, HRESULT = 0x");
      lVar14 = (longlong)pbVar17->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
      *(uint *)((longlong)&pbVar17[1].vbtablePtr + lVar14) =
           *(uint *)((longlong)&pbVar17[1].vbtablePtr + lVar14) & 0xfffff1ff | 0x800;
      std::setw((__int64)&local_88);
      (*local_88)((longlong)&pbVar17->vbtablePtr +
                  (longlong)pbVar17->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset,
                  uStack_80);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar17,iVar12);
      puVar13 = local_b0;
      local_88 = (code *)0x0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0xf;
      if (((local_158 & 0x22) == 2) || (uVar21 = *local_188, uVar21 == 0)) {
        if (((local_158 & 4) == 0) && (*local_190 != 0)) {
          uVar21 = *local_190 + (longlong)*local_178;
          pvVar3 = (void *)*local_1b0;
          goto joined_r0x00014074613e;
        }
      }
      else {
        if (uVar21 < local_160) {
          uVar21 = local_160;
        }
        pvVar3 = (void *)*local_1a8;
joined_r0x00014074613e:
        if (pvVar3 != (void *)0x0) {
          uVar21 = uVar21 - (longlong)pvVar3;
          if (uVar21 < 0x10) {
            local_78 = uVar21;
            memmove(&local_88,pvVar3,uVar21);
            *(undefined1 *)((longlong)&local_88 + uVar21) = 0;
          }
          else {
            FUN_1400069b0(&local_88,uVar21);
          }
        }
      }
      FUN_14053e350((longlong)pvVar10 + 0x10,&local_88);
      goto LAB_1407461c4;
    }
    *local_b0 = puVar13;
    puVar13 = local_b0;
    plVar1 = local_58;
  }
  local_58 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    local_60 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_a8 != (undefined4 *)0x0) {
    uVar21 = (longlong)local_98 - (longlong)local_a8;
    puVar20 = local_a8;
    if (0xfff < uVar21) {
      puVar20 = *(undefined4 **)(local_a8 + -2);
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)puVar20))) {
LAB_1407462f0:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar21 = uVar21 + 0x27;
    }
    thunk_FUN_140b68ba8(puVar20,uVar21);
  }
  return puVar13;
}

