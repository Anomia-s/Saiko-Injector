/**
 * Function: refers_to_a_blas_which_was_never_built
 * Address:  1406ea580
 * Signature: void __thiscall refers_to_a_blas_which_was_never_built(void * this, longlong * param_1, void * param_2, ulonglong param_3, char param_4)
 * Body size: 2475 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001406ea6c7) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
refers_to_a_blas_which_was_never_built
          (void *this,longlong *param_1,void *param_2,ulonglong param_3,char param_4)

{
  longlong *plVar1;
  void *pvVar2;
  char *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  longlong **pplVar10;
  undefined8 *******pppppppuVar11;
  size_t _Size;
  ulonglong uVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong in_stack_fffffffffffffe48;
  undefined8 local_1b0;
  char *local_1a8 [3];
  basic_streambuf<char,std::char_traits<char>_> local_190 [3];
  longlong *local_178;
  longlong *local_170 [3];
  longlong *local_158;
  ulonglong *local_150;
  int *local_140;
  ulonglong local_128;
  uint local_120;
  ios_base local_110 [6];
  longlong local_b0;
  char *local_a8;
  char *pcStack_a0;
  longlong local_98;
  undefined8 *******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  cVar4 = a_command_list_must_be_opened_before_any_rend();
  if (cVar4 == '\0') {
    return;
  }
  cVar4 = operation_requires_at_least(this,1,"buildTopLevelAccelStruct");
  if (cVar4 == '\0') {
    return;
  }
  if (param_1 == (longlong *)0x0) {
    local_1a8[1] = (char *)0x0;
    pcVar13 = (char *)FUN_140b65d30(0x30);
    local_1a8[2] = (char *)0x26;
    local_190[0] = (basic_streambuf<char,std::char_traits<char>_>)0x2f;
    builtin_strncpy(pcVar13,"buildTopLevelAccelStruct: \'as\' is NULL",0x27);
    local_1a8[0] = pcVar13;
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar13);
    uVar12 = 0x30;
    goto LAB_1406eaa32;
  }
  local_a8 = (char *)0x0;
  pcStack_a0 = (char *)0x0;
  local_98 = 0;
  _Size = param_3 * 0x40;
  if (_Size == 0) {
    pcStack_a0 = (char *)0x0;
  }
  else {
    FUN_1406ecbb0(&local_a8,param_3);
    pcVar3 = local_a8;
    memmove(local_a8,param_2,_Size);
    pcStack_a0 = pcVar3 + _Size;
    for (pcVar13 = local_a8; pcVar13 != pcVar3 + _Size; pcVar13 = pcVar13 + 0x40) {
      uVar6 = FUN_140521030(*(undefined8 *)(pcVar13 + 0x38));
      *(undefined8 *)(pcVar13 + 0x38) = uVar6;
    }
  }
  in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
  local_b0 = __RTDynamicCast(param_1,0,&nvrhi::rt::IAccelStruct::RTTI_Type_Descriptor,
                             &nvrhi::validation::AccelStructWrapper::RTTI_Type_Descriptor,
                             in_stack_fffffffffffffe48);
  if (local_b0 == 0) {
LAB_1406ea9c1:
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x138))
              (*(longlong **)((longlong)this + 0x10),param_1,local_a8,
               (ulonglong)((longlong)pcStack_a0 - (longlong)local_a8) >> 6 & 0xffffffff,param_4);
  }
  else {
    local_1b0 = *(longlong **)(local_b0 + 0x40);
    cVar4 = before_the_same_tlas_was_initially_built(this);
    if (cVar4 != '\0') {
      for (uVar12 = 0; uVar12 < param_3; uVar12 = uVar12 + 1) {
        lVar5 = *(longlong *)((longlong)param_2 + uVar12 * 0x40 + 0x38);
        if (lVar5 == 0) {
          if (param_4 < '\0') goto LAB_1406ea75d;
          FUN_1401e87c0(local_1a8,1);
          uVar6 = FUN_1400e5ec0(local_1a8 + 2,"TLAS ");
          lVar5 = (**(code **)(*param_1 + 0x28))(param_1);
          uVar7 = FUN_140527b30(lVar5 + 0x28);
          uVar6 = FUN_1400e5ec0(uVar6,uVar7);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(uVar6," build instance ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar12);
          FUN_1400e5ec0(pbVar9," has a NULL bottomLevelAS");
          local_88 = (undefined8 *******)0x0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0xf;
          if (((local_120 & 0x22) == 2) || (uVar12 = *local_150, uVar12 == 0)) {
            if (((local_120 & 4) == 0) && (*local_158 != 0)) {
              pplVar10 = &local_178;
              uVar12 = *local_158 + (longlong)*local_140;
              goto LAB_1406ead64;
            }
          }
          else {
            pplVar10 = local_170;
            if (uVar12 < local_128) {
              uVar12 = local_128;
            }
LAB_1406ead64:
            pvVar2 = (void *)**pplVar10;
            if (pvVar2 != (void *)0x0) {
              uVar12 = uVar12 - (longlong)pvVar2;
              if (uVar12 < 0x10) {
                local_78 = uVar12;
                memmove(&local_88,pvVar2,uVar12);
                *(undefined1 *)((longlong)&local_88 + uVar12) = 0;
              }
              else {
                FUN_1400069b0(&local_88,uVar12);
              }
            }
          }
          (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                    (*(longlong **)((longlong)this + 0x20),2);
LAB_1406eae70:
          if (0xf < local_70) {
            uVar12 = local_70 + 1;
            pppppppuVar11 = local_88;
            if (0xfff < uVar12) {
              pppppppuVar11 = (undefined8 *******)local_88[-1];
              if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar11)))
              goto LAB_1406eaf19;
              uVar12 = local_70 + 0x28;
            }
            thunk_FUN_140b68ba8(pppppppuVar11,uVar12);
          }
          *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
           ((longlong)local_1a8 + (longlong)*(int *)(local_1a8[0] + 4)) =
               &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
          *(int *)((longlong)&local_1b0 + (longlong)*(int *)(local_1a8[0] + 4) + 4) =
               *(int *)(local_1a8[0] + 4) + -0x98;
          local_190[0] = (basic_streambuf<char,std::char_traits<char>_>)
                         &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                          vftable;
          FUN_1401da8b0(local_190);
          std::basic_streambuf<char,std::char_traits<char>_>::
          ~basic_streambuf<char,std::char_traits<char>_>(local_190);
          std::ios_base::~ios_base(local_110);
          if (local_a8 == (char *)0x0) {
            return;
          }
          goto LAB_1406eaa03;
        }
        in_stack_fffffffffffffe48 = in_stack_fffffffffffffe48 & 0xffffffff00000000;
        lVar5 = __RTDynamicCast(lVar5,0,&nvrhi::rt::IAccelStruct::RTTI_Type_Descriptor,
                                &nvrhi::validation::AccelStructWrapper::RTTI_Type_Descriptor,
                                in_stack_fffffffffffffe48);
        if (lVar5 != 0) {
          if (*(char *)(lVar5 + 0x10) == '\x01') {
            FUN_1401e87c0(local_1a8,1);
            uVar6 = FUN_1400e5ec0(local_1a8 + 2,"TLAS ");
            lVar5 = (**(code **)(*param_1 + 0x28))(param_1);
            uVar7 = FUN_140527b30(lVar5 + 0x28);
            uVar6 = FUN_1400e5ec0(uVar6,uVar7);
            pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar6," build instance ");
            pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar12);
            FUN_1400e5ec0(pbVar9," refers to another TLAS, which is unsupported");
            local_88 = (undefined8 *******)0x0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0xf;
            if (((local_120 & 0x22) == 2) || (uVar12 = *local_150, uVar12 == 0)) {
              if (((local_120 & 4) == 0) && (*local_158 != 0)) {
                pplVar10 = &local_178;
                uVar12 = *local_158 + (longlong)*local_140;
                goto LAB_1406eacb8;
              }
            }
            else {
              pplVar10 = local_170;
              if (uVar12 < local_128) {
                uVar12 = local_128;
              }
LAB_1406eacb8:
              pvVar2 = (void *)**pplVar10;
              if (pvVar2 != (void *)0x0) {
                uVar12 = uVar12 - (longlong)pvVar2;
                if (uVar12 < 0x10) {
                  local_78 = uVar12;
                  memmove(&local_88,pvVar2,uVar12);
                  *(undefined1 *)((longlong)&local_88 + uVar12) = 0;
                }
                else {
                  FUN_1400069b0(&local_88,uVar12);
                }
              }
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2);
          }
          else {
            if (*(char *)(lVar5 + 0x13) != '\0') goto LAB_1406ea7b0;
            FUN_1401e87c0(local_1a8,1);
            uVar6 = FUN_1400e5ec0(local_1a8 + 2,"TLAS ");
            lVar5 = (**(code **)(*param_1 + 0x28))(param_1);
            uVar7 = FUN_140527b30(lVar5 + 0x28);
            uVar6 = FUN_1400e5ec0(uVar6,uVar7);
            pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar6," build instance ");
            pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar12);
            FUN_1400e5ec0(pbVar9," refers to a BLAS which was never built");
            local_88 = (undefined8 *******)0x0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0xf;
            if (((local_120 & 0x22) == 2) || (uVar12 = *local_150, uVar12 == 0)) {
              if (((local_120 & 4) == 0) && (*local_158 != 0)) {
                pplVar10 = &local_178;
                uVar12 = *local_158 + (longlong)*local_140;
                goto LAB_1406ead0e;
              }
            }
            else {
              pplVar10 = local_170;
              if (uVar12 < local_128) {
                uVar12 = local_128;
              }
LAB_1406ead0e:
              pvVar2 = (void *)**pplVar10;
              if (pvVar2 != (void *)0x0) {
                uVar12 = uVar12 - (longlong)pvVar2;
                if (uVar12 < 0x10) {
                  local_78 = uVar12;
                  memmove(&local_88,pvVar2,uVar12);
                  *(undefined1 *)((longlong)&local_88 + uVar12) = 0;
                }
                else {
                  FUN_1400069b0(&local_88,uVar12);
                }
              }
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2);
          }
          goto LAB_1406eae70;
        }
LAB_1406ea7b0:
        if ((param_4 < '\0') || (0xffffff < *(uint *)((longlong)param_2 + uVar12 * 0x40 + 0x30)))
        goto LAB_1406ea75d;
        FUN_1401e87c0(local_1a8,1);
        uVar6 = FUN_1400e5ec0(local_1a8 + 2,"TLAS ");
        lVar5 = (**(code **)(*param_1 + 0x28))(param_1);
        uVar7 = FUN_140527b30(lVar5 + 0x28);
        uVar6 = FUN_1400e5ec0(uVar6,uVar7);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(uVar6," build instance ");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar12);
        FUN_1400e5ec0(pbVar9,
                      " has instanceMask = 0, which means the instance will never be included in any ray intersections"
                     );
        plVar1 = *(longlong **)((longlong)this + 0x20);
        local_88 = (undefined8 *******)0x0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0xf;
        if (((local_120 & 0x22) == 2) || (uVar14 = *local_150, uVar14 == 0)) {
          if (((local_120 & 4) == 0) && (*local_158 != 0)) {
            uVar14 = *local_158 + (longlong)*local_140;
            pvVar2 = (void *)*local_178;
            goto joined_r0x0001406ea8af;
          }
        }
        else {
          if (uVar14 < local_128) {
            uVar14 = local_128;
          }
          pvVar2 = (void *)*local_170[0];
joined_r0x0001406ea8af:
          if (pvVar2 != (void *)0x0) {
            uVar14 = uVar14 - (longlong)pvVar2;
            if (uVar14 < 0x10) {
              local_78 = uVar14;
              memmove(&local_88,pvVar2,uVar14);
              *(undefined1 *)((longlong)&local_88 + uVar14) = 0;
            }
            else {
              FUN_1400069b0(&local_88,uVar14);
            }
          }
        }
        pppppppuVar11 = &local_88;
        if (0xf < local_70) {
          pppppppuVar11 = local_88;
        }
        (**(code **)(*plVar1 + 8))(plVar1,1,pppppppuVar11);
        if (0xf < local_70) {
          pppppppuVar11 = local_88;
          if ((0xfff < local_70 + 1) &&
             (pppppppuVar11 = (undefined8 *******)local_88[-1],
             0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar11))))
          goto LAB_1406eaf19;
          thunk_FUN_140b68ba8(pppppppuVar11);
        }
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((longlong)local_1a8 + (longlong)*(int *)(local_1a8[0] + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&local_1b0 + (longlong)*(int *)(local_1a8[0] + 4) + 4) =
             *(int *)(local_1a8[0] + 4) + -0x98;
        local_190[0] = (basic_streambuf<char,std::char_traits<char>_>)
                       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                        vftable;
        FUN_1401da8b0(local_190);
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(local_190);
        std::ios_base::~ios_base(local_110);
LAB_1406ea75d:
      }
      *(undefined1 *)(local_b0 + 0x13) = 1;
      *(ulonglong *)(local_b0 + 0x38) = param_3;
      param_1 = local_1b0;
      goto LAB_1406ea9c1;
    }
  }
  if (local_a8 == (char *)0x0) {
    return;
  }
LAB_1406eaa03:
  uVar12 = local_98 - (longlong)local_a8;
  pcVar13 = local_a8;
  if (0xfff < uVar12) {
    pcVar13 = *(char **)(local_a8 + -8);
    if ((char *)0x1f < local_a8 + (-8 - (longlong)pcVar13)) {
LAB_1406eaf19:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar12 = uVar12 | 0x27;
  }
LAB_1406eaa32:
  thunk_FUN_140b68ba8(pcVar13,uVar12);
  return;
}

