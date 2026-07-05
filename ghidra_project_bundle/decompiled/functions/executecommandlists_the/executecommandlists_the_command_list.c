/**
 * Function: executecommandlists_the_command_list
 * Address:  1405256e0
 * Signature: undefined8 __thiscall executecommandlists_the_command_list(void * this, longlong param_1, ulonglong param_2, char param_3)
 * Body size: 1403 bytes
 */


undefined8 __thiscall
executecommandlists_the_command_list(void *this,longlong param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong in_stack_fffffffffffffe78;
  char *local_180 [3];
  basic_streambuf<char,std::char_traits<char>_> local_168 [3];
  undefined8 *local_150;
  undefined8 *local_148;
  longlong *local_130;
  ulonglong *local_128;
  int *local_118;
  ulonglong local_100;
  uint local_f8;
  ios_base local_e8 [6];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  void *local_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    local_70 = this;
    if (param_1 == 0) {
      local_180[1] = (char *)0x0;
      pcVar5 = (char *)FUN_140b65d30(0x30);
      local_180[2] = (char *)0x2a;
      local_168[0] = (basic_streambuf<char,std::char_traits<char>_>)0x2f;
      builtin_strncpy(pcVar5,"executeCommandLists: pCommandLists is NULL",0x2b);
      local_180[0] = pcVar5;
      (**(code **)(**(longlong **)((longlong)local_70 + 0x18) + 8))
                (*(longlong **)((longlong)local_70 + 0x18),2,pcVar5);
      thunk_FUN_140b68ba8(pcVar5,0x30);
      uVar8 = 0;
    }
    else {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      FUN_140527910(&local_88,param_2,local_180);
      for (uVar11 = 0; uVar11 < param_2; uVar11 = uVar11 + 1) {
        plVar1 = *(longlong **)(param_1 + uVar11 * 8);
        if (plVar1 == (longlong *)0x0) {
          FUN_1401e87c0(local_180,1);
          pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(local_180 + 2,"executeCommandLists: pCommandLists[");
          pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar11);
          FUN_1400e5ec0(pbVar7,"] is NULL");
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xf;
          if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
            if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
              uVar11 = *local_130 + (longlong)*local_118;
              pvVar2 = (void *)*local_150;
              goto joined_r0x000140525a49;
            }
          }
          else {
            if (uVar11 < local_100) {
              uVar11 = local_100;
            }
            pvVar2 = (void *)*local_148;
joined_r0x000140525a49:
            if (pvVar2 != (void *)0x0) {
              uVar11 = uVar11 - (longlong)pvVar2;
              if (uVar11 < 0x10) {
                local_58 = uVar11;
                memmove(&local_68,pvVar2,uVar11);
                *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
              }
              else {
                FUN_1400069b0(&local_68,uVar11);
              }
            }
          }
          (**(code **)(**(longlong **)((longlong)local_70 + 0x18) + 8))
                    (*(longlong **)((longlong)local_70 + 0x18),2);
LAB_140525b56:
          if (0xf < local_50) {
            uVar11 = local_50 + 1;
            lVar4 = local_68;
            if (0xfff < uVar11) {
              lVar4 = *(longlong *)(local_68 + -8);
              if (0x1f < (ulonglong)((local_68 + -8) - lVar4)) goto LAB_140525c46;
              uVar11 = local_50 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar4,uVar11);
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
LAB_140525bee:
          uVar8 = 0;
          goto joined_r0x000140525bfa;
        }
        lVar4 = (**(code **)(*plVar1 + 0x1f0))();
        if (*(char *)(lVar4 + 0x20) != param_3) {
          FUN_1401e87c0(local_180,1);
          pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(local_180 + 2,"executeCommandLists: The command list [");
          pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar11);
          uVar8 = FUN_1400e5ec0(pbVar7,"] type is ");
          uVar9 = FUN_140527cc0(*(undefined1 *)(lVar4 + 0x20));
          uVar8 = FUN_1400e5ec0(uVar8,uVar9);
          uVar8 = FUN_1400e5ec0(uVar8,", it cannot be executed on a ");
          uVar9 = FUN_140527cc0(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff);
          uVar8 = FUN_1400e5ec0(uVar8,uVar9);
          FUN_1400e5ec0(uVar8," queue");
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xf;
          if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
            if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
              uVar11 = *local_130 + (longlong)*local_118;
              pvVar2 = (void *)*local_150;
              goto joined_r0x000140525a98;
            }
          }
          else {
            if (uVar11 < local_100) {
              uVar11 = local_100;
            }
            pvVar2 = (void *)*local_148;
joined_r0x000140525a98:
            if (pvVar2 != (void *)0x0) {
              uVar11 = uVar11 - (longlong)pvVar2;
              if (uVar11 < 0x10) {
                local_58 = uVar11;
                memmove(&local_68,pvVar2,uVar11);
                *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
              }
              else {
                FUN_1400069b0(&local_68,uVar11);
              }
            }
          }
          (**(code **)(**(longlong **)((longlong)local_70 + 0x18) + 8))
                    (*(longlong **)((longlong)local_70 + 0x18),2);
          goto LAB_140525b56;
        }
        puVar10 = (undefined8 *)(param_1 + uVar11 * 8);
        in_stack_fffffffffffffe78 = in_stack_fffffffffffffe78 & 0xffffffff00000000;
        lVar4 = __RTDynamicCast(*puVar10,0,&nvrhi::ICommandList::RTTI_Type_Descriptor,
                                &nvrhi::validation::CommandListWrapper::RTTI_Type_Descriptor,
                                in_stack_fffffffffffffe78);
        if (lVar4 != 0) {
          cVar3 = cannot_execute_a_command_list_before_it_is_cl(lVar4);
          if (cVar3 != '\0') {
            puVar10 = (undefined8 *)(lVar4 + 0x10);
            goto LAB_140525760;
          }
          goto LAB_140525bee;
        }
LAB_140525760:
        *(undefined8 *)(local_88 + uVar11 * 8) = *puVar10;
      }
      uVar8 = (**(code **)(**(longlong **)((longlong)local_70 + 0x10) + 0x1c8))();
joined_r0x000140525bfa:
      if (local_88 != 0) {
        uVar11 = local_78 - local_88;
        lVar4 = local_88;
        if (0xfff < uVar11) {
          lVar4 = *(longlong *)(local_88 + -8);
          if (0x1f < (ulonglong)((local_88 + -8) - lVar4)) {
LAB_140525c46:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar11 = uVar11 + 0x27;
        }
        thunk_FUN_140b68ba8(lVar4,uVar11);
      }
    }
  }
  return uVar8;
}

