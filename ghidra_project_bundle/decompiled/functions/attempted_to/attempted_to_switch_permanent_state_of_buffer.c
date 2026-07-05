/**
 * Function: attempted_to_switch_permanent_state_of_buffer
 * Address:  1407c8e70
 * Signature: undefined __thiscall attempted_to_switch_permanent_state_of_buffer(void * this)
 * Body size: 1726 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall attempted_to_switch_permanent_state_of_buffer(void *this)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  basic_ostream<char,std::char_traits<char>_> *pbVar12;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *******pppppppuVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong local_180 [2];
  undefined1 local_170 [8];
  basic_streambuf<char,std::char_traits<char>_> local_168 [3];
  undefined8 *local_150;
  undefined8 *local_148;
  longlong *local_130;
  ulonglong *local_128;
  int *local_118;
  ulonglong local_100;
  uint local_f8;
  ios_base local_e8 [6];
  undefined8 *******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  plVar3 = *(longlong **)((longlong)this + 0x90);
  for (plVar17 = *(longlong **)((longlong)this + 0x88); plVar17 != plVar3; plVar17 = plVar17 + 2) {
    while( true ) {
      plVar5 = (longlong *)*plVar17;
      uVar2 = *(uint *)(plVar17 + 1);
      if (*(uint *)(plVar5 + 1) == uVar2 || *(uint *)(plVar5 + 1) == 0) break;
      FUN_1401e87c0(local_180,1);
      uVar10 = FUN_1400e5ec0(local_170,"Attempted to switch permanent state of texture ");
      uVar11 = FUN_140527b30(*plVar5 + 0x20);
      uVar10 = FUN_1400e5ec0(uVar10,uVar11);
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar10," from 0x");
      lVar15 = (longlong)pbVar12->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
      *(uint *)((longlong)&pbVar12[1].vbtablePtr + lVar15) =
           *(uint *)((longlong)&pbVar12[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x800;
      pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(uint *)(plVar5 + 1));
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar13," to 0x");
      lVar15 = (longlong)pbVar12->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
      *(uint *)((longlong)&pbVar12[1].vbtablePtr + lVar15) =
           *(uint *)((longlong)&pbVar12[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x800;
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,uVar2);
      plVar5 = *(longlong **)this;
      local_88 = (undefined8 *******)0x0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0xf;
      if (((local_f8 & 0x22) == 2) || (uVar19 = *local_128, uVar19 == 0)) {
        if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
          uVar19 = *local_130 + (longlong)*local_118;
          pvVar6 = (void *)*local_150;
          goto joined_r0x0001407c9097;
        }
      }
      else {
        if (uVar19 < local_100) {
          uVar19 = local_100;
        }
        pvVar6 = (void *)*local_148;
joined_r0x0001407c9097:
        if (pvVar6 != (void *)0x0) {
          uVar19 = uVar19 - (longlong)pvVar6;
          if (uVar19 < 0x10) {
            local_78 = uVar19;
            memmove(&local_88,pvVar6,uVar19);
            *(undefined1 *)((longlong)&local_88 + uVar19) = 0;
          }
          else {
            FUN_1400069b0(&local_88,uVar19);
          }
        }
      }
      pppppppuVar16 = &local_88;
      if (0xf < local_70) {
        pppppppuVar16 = local_88;
      }
      (**(code **)(*plVar5 + 8))(plVar5,2,pppppppuVar16);
      if (0xf < local_70) {
        uVar19 = local_70 + 1;
        pppppppuVar16 = local_88;
        if (0xfff < uVar19) {
          pppppppuVar16 = (undefined8 *******)local_88[-1];
          if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar16)))
          goto LAB_1407c9533;
          uVar19 = local_70 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar16,uVar19);
      }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((longlong)local_180 + (longlong)*(int *)(local_180[0] + 4)) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)local_168 + (longlong)*(int *)(local_180[0] + 4) + -0x1c) =
           *(int *)(local_180[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
      local_168[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      FUN_1401da8b0(local_168);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_168);
      std::ios_base::~ios_base(local_e8);
      plVar17 = plVar17 + 2;
      if (plVar17 == plVar3) goto LAB_1407c8ec0;
    }
    *(uint *)(plVar5 + 1) = uVar2;
  }
LAB_1407c8ec0:
  if (*(longlong *)((longlong)this + 0x88) != *(longlong *)((longlong)this + 0x90)) {
    *(longlong *)((longlong)this + 0x90) = *(longlong *)((longlong)this + 0x88);
  }
  plVar3 = *(longlong **)((longlong)this + 0xa8);
  for (plVar17 = *(longlong **)((longlong)this + 0xa0); plVar17 != plVar3; plVar17 = plVar17 + 2) {
    while( true ) {
      plVar5 = (longlong *)*plVar17;
      uVar2 = *(uint *)(plVar17 + 1);
      if (*(uint *)(plVar5 + 1) == uVar2 || *(uint *)(plVar5 + 1) == 0) break;
      FUN_1401e87c0(local_180,1);
      uVar10 = FUN_1400e5ec0(local_170,"Attempted to switch permanent state of buffer ");
      uVar11 = FUN_140527b30(*plVar5 + 0x10);
      uVar10 = FUN_1400e5ec0(uVar10,uVar11);
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar10," from 0x");
      lVar15 = (longlong)pbVar12->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
      *(uint *)((longlong)&pbVar12[1].vbtablePtr + lVar15) =
           *(uint *)((longlong)&pbVar12[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x800;
      pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar12,*(uint *)(plVar5 + 1));
      pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar13," to 0x");
      lVar15 = (longlong)pbVar12->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
      *(uint *)((longlong)&pbVar12[1].vbtablePtr + lVar15) =
           *(uint *)((longlong)&pbVar12[1].vbtablePtr + lVar15) & 0xfffff1ff | 0x800;
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,uVar2);
      plVar5 = *(longlong **)this;
      local_88 = (undefined8 *******)0x0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0xf;
      if (((local_f8 & 0x22) == 2) || (uVar19 = *local_128, uVar19 == 0)) {
        if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
          uVar19 = *local_130 + (longlong)*local_118;
          pvVar6 = (void *)*local_150;
          goto joined_r0x0001407c9317;
        }
      }
      else {
        if (uVar19 < local_100) {
          uVar19 = local_100;
        }
        pvVar6 = (void *)*local_148;
joined_r0x0001407c9317:
        if (pvVar6 != (void *)0x0) {
          uVar19 = uVar19 - (longlong)pvVar6;
          if (uVar19 < 0x10) {
            local_78 = uVar19;
            memmove(&local_88,pvVar6,uVar19);
            *(undefined1 *)((longlong)&local_88 + uVar19) = 0;
          }
          else {
            FUN_1400069b0(&local_88,uVar19);
          }
        }
      }
      pppppppuVar16 = &local_88;
      if (0xf < local_70) {
        pppppppuVar16 = local_88;
      }
      (**(code **)(*plVar5 + 8))(plVar5,2,pppppppuVar16);
      if (0xf < local_70) {
        uVar19 = local_70 + 1;
        pppppppuVar16 = local_88;
        if (0xfff < uVar19) {
          pppppppuVar16 = (undefined8 *******)local_88[-1];
          if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar16))) {
LAB_1407c9533:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar19 = local_70 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar16,uVar19);
      }
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((longlong)local_180 + (longlong)*(int *)(local_180[0] + 4)) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)local_168 + (longlong)*(int *)(local_180[0] + 4) + -0x1c) =
           *(int *)(local_180[0] + 4) + -0x98;
      local_168[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      FUN_1401da8b0(local_168);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_168);
      std::ios_base::~ios_base(local_e8);
      plVar17 = plVar17 + 2;
      if (plVar17 == plVar3) goto LAB_1407c8ef7;
    }
    *(uint *)(plVar5 + 1) = uVar2;
  }
LAB_1407c8ef7:
  if (*(longlong *)((longlong)this + 0xa0) != *(longlong *)((longlong)this + 0xa8)) {
    *(longlong *)((longlong)this + 0xa8) = *(longlong *)((longlong)this + 0xa0);
  }
  puVar4 = *(undefined8 **)((longlong)this + 0x10);
  for (puVar14 = (undefined8 *)*puVar4; puVar14 != puVar4; puVar14 = (undefined8 *)*puVar14) {
    plVar17 = (longlong *)puVar14[2];
    if ((*(char *)(*plVar17 + 0x68) == '\x01') && (*(char *)((longlong)plVar17 + 0xc) == '\0')) {
      *(undefined1 *)((longlong)plVar17 + 0xc) = 1;
    }
  }
  if (*(ulonglong *)((longlong)this + 0x18) != 0) {
    if (*(ulonglong *)((longlong)this + 0x18) < *(ulonglong *)((longlong)this + 0x40) >> 3) {
      FUN_1407c9930((longlong)this + 8,**(undefined8 **)((longlong)this + 0x10));
    }
    else {
      FUN_1406f4df0((undefined4 *)((longlong)this + 0x10),*(undefined8 **)((longlong)this + 0x10));
      lVar15 = *(longlong *)((longlong)this + 0x10);
      *(longlong *)lVar15 = lVar15;
      *(longlong *)(lVar15 + 8) = lVar15;
      *(undefined8 *)((longlong)this + 0x18) = 0;
      puVar18 = *(undefined4 **)((longlong)this + 0x20);
      puVar7 = *(undefined4 **)((longlong)this + 0x28);
      if (puVar18 != puVar7) {
        uVar8 = *(undefined4 *)((longlong)this + 0x10);
        uVar9 = *(undefined4 *)((longlong)this + 0x14);
        uVar19 = (longlong)puVar7 + (-8 - (longlong)puVar18);
        if (0x17 < uVar19) {
          uVar19 = (uVar19 >> 3) + 1;
          uVar20 = uVar19 & 0xfffffffffffffffc;
          uVar21 = 0;
          do {
            puVar1 = puVar18 + uVar21 * 2;
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            puVar1 = puVar18 + uVar21 * 2 + 4;
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            uVar21 = uVar21 + 4;
          } while (uVar20 != uVar21);
          puVar18 = puVar18 + uVar20 * 2;
          if (uVar19 == uVar20) goto LAB_1407c950c;
        }
        do {
          *puVar18 = uVar8;
          puVar18[1] = uVar9;
          puVar18 = puVar18 + 2;
        } while (puVar18 != puVar7);
      }
    }
  }
LAB_1407c950c:
  FUN_1407c9710((longlong)this + 0x48);
  return;
}

