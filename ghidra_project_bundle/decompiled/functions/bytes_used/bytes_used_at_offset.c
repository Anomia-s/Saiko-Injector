/**
 * Function: bytes_used_at_offset
 * Address:  1406eb350
 * Signature: void __thiscall bytes_used_at_offset(void * this, longlong param_1, longlong * param_2, __uint64 param_3, longlong param_4, undefined1 param_5)
 * Body size: 1538 bytes
 */


void __thiscall
bytes_used_at_offset
          (void *this,longlong param_1,longlong *param_2,__uint64 param_3,longlong param_4,
          undefined1 param_5)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  ulonglong *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  undefined8 *******pppppppuVar13;
  ulonglong uVar14;
  ulonglong in_stack_fffffffffffffe28;
  int iStack_1c4;
  char *local_1c0 [3];
  basic_streambuf<char,std::char_traits<char>_> local_1a8 [3];
  undefined8 local_190;
  undefined8 local_188 [3];
  longlong *local_170;
  ulonglong *local_168;
  int *local_158;
  ulonglong local_140;
  uint local_138;
  ios_base local_128 [6];
  ulonglong local_c8;
  ulonglong uStack_c0;
  char *local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  ulonglong *local_70;
  undefined8 ******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = operation_requires_at_least(this,1,"buildTopLevelAccelStruct");
  if (cVar1 == '\0') {
    return;
  }
  if (param_1 == 0) {
    local_1c0[1] = (char *)0x0;
    pcVar4 = (char *)FUN_140b65d30(0x40);
    local_1c0[2] = (char *)0x30;
    local_1a8[0] = (basic_streambuf<char,std::char_traits<char>_>)0x3f;
    builtin_strncpy(pcVar4,"buildTopLevelAccelStructFromBuffer: \'as\' is NULL",0x31);
    local_1c0[0] = pcVar4;
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar4);
  }
  else {
    if (param_2 != (longlong *)0x0) {
      lVar2 = __RTDynamicCast(param_1,0,&nvrhi::rt::IAccelStruct::RTTI_Type_Descriptor,
                              &nvrhi::validation::AccelStructWrapper::RTTI_Type_Descriptor,
                              in_stack_fffffffffffffe28 & 0xffffffff00000000);
      if (lVar2 != 0) {
        param_1 = *(longlong *)(lVar2 + 0x40);
        cVar1 = before_the_same_tlas_was_initially_built(this,lVar2,param_4);
        if (cVar1 == '\0') {
          return;
        }
      }
      puVar3 = (ulonglong *)(**(code **)(*param_2 + 0x28))(param_2);
      local_c8 = *puVar3;
      uStack_c0 = puVar3[1];
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      uVar11 = puVar3[4];
      if (puVar3[5] < 0x10) {
        puVar12 = puVar3 + 2;
      }
      else {
        puVar12 = (ulonglong *)puVar3[2];
      }
      if ((longlong)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (uVar11 < 0x10) {
        uStack_a0 = 0xf;
        local_b8 = (char *)*puVar12;
        uStack_b0 = puVar12[1];
        local_a8 = uVar11;
      }
      else {
        uVar5 = uVar11 | 0xf;
        uVar14 = 0x16;
        if (0x16 < uVar5) {
          uVar14 = uVar5;
        }
        local_70 = puVar12;
        if (uVar5 < 0xfff) {
          local_b8 = (char *)FUN_140b65d30(uVar14 + 1);
        }
        else {
          lVar2 = FUN_140b65d30(uVar14 + 0x28);
          local_b8 = (char *)(lVar2 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(local_b8 + -8) = lVar2;
        }
        local_a8 = uVar11;
        uStack_a0 = uVar14;
        memcpy(local_b8,local_70,uVar11 + 1);
      }
      local_98 = (undefined4)puVar3[6];
      uStack_94 = *(undefined4 *)((longlong)puVar3 + 0x34);
      uStack_90 = (undefined4)puVar3[7];
      uStack_8c = *(undefined4 *)((longlong)puVar3 + 0x3c);
      uStack_88 = (undefined4)puVar3[8];
      uStack_84 = *(undefined4 *)((longlong)puVar3 + 0x44);
      uStack_80 = (undefined4)puVar3[9];
      if ((char)uStack_90 == '\0') {
        FUN_1401e87c0(local_1c0,1);
        uVar6 = FUN_1400e5ec0(local_1c0 + 2,"Buffer ");
        uVar7 = FUN_140527b30(&local_b8);
        uVar6 = FUN_1400e5ec0(uVar6,uVar7);
        FUN_1400e5ec0(uVar6,
                      " used in buildTopLevelAccelStructFromBuffer doesn\'t have the \'isAccelStructBuildInput\' flag set"
                     );
        local_68 = (undefined8 *******)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0xf;
        if (((local_138 & 0x22) == 2) || (uVar11 = *local_168, uVar11 == 0)) {
          if (((local_138 & 4) == 0) && (*local_170 != 0)) {
            puVar10 = &local_190;
            uVar11 = *local_170 + (longlong)*local_158;
            goto LAB_1406eb7b9;
          }
        }
        else {
          puVar10 = local_188;
          if (uVar11 < local_140) {
            uVar11 = local_140;
          }
LAB_1406eb7b9:
          _Src = *(void **)*puVar10;
          if (_Src != (void *)0x0) {
            uVar11 = uVar11 - (longlong)_Src;
            if (uVar11 < 0x10) {
              local_58 = uVar11;
              memmove(&local_68,_Src,uVar11);
              *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
            }
            else {
              FUN_1400069b0(&local_68,uVar11);
            }
          }
        }
        pppppppuVar13 = (undefined8 *******)local_68;
        if (local_50 < 0x10) {
          pppppppuVar13 = &local_68;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pppppppuVar13);
        if (0xf < local_50) {
          uVar11 = local_50 + 1;
          pppppppuVar13 = (undefined8 *******)local_68;
          if (0xfff < uVar11) {
            pppppppuVar13 = (undefined8 *******)local_68[-1];
            if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar13)))
            goto LAB_1406eb939;
            uVar11 = local_50 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppppuVar13,uVar11);
        }
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((longlong)local_1c0 + (longlong)*(int *)(local_1c0[0] + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_1c4 + (longlong)*(int *)(local_1c0[0] + 4)) =
             *(int *)(local_1c0[0] + 4) + -0x98;
        local_1a8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                        vftable;
        FUN_1401da8b0(local_1a8);
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(local_1a8);
        std::ios_base::~ios_base(local_128);
      }
      else if (local_c8 < param_3 + param_4 * 0x40) {
        FUN_1401e87c0(local_1c0,1);
        uVar6 = FUN_1400e5ec0(local_1c0 + 2,"Buffer ");
        uVar7 = FUN_140527b30(&local_b8);
        uVar6 = FUN_1400e5ec0(uVar6,uVar7);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(uVar6,
                               " used in buildTopLevelAccelStructFromBuffer is smaller than the referenced instance data: "
                              );
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_4 * 0x40)
        ;
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar9," bytes used at offset ");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,param_3);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar9,", buffer size is ");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,local_c8);
        FUN_1400e5ec0(pbVar9," bytes");
        FUN_140514890(local_1c0,&local_68);
        pppppppuVar13 = &local_68;
        if (0xf < local_50) {
          pppppppuVar13 = (undefined8 *******)local_68;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pppppppuVar13);
        FUN_140004b30(&local_68);
        FUN_1401e8970(local_1c0);
      }
      else {
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x148))
                  (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3,param_4,param_5);
      }
      if (uStack_a0 < 0x10) {
        return;
      }
      uVar11 = uStack_a0 + 1;
      pcVar4 = local_b8;
      if (0xfff < uVar11) {
        pcVar4 = *(char **)(local_b8 + -8);
        if ((char *)0x1f < local_b8 + (-8 - (longlong)pcVar4)) {
LAB_1406eb939:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar11 = uStack_a0 + 0x28;
      }
      goto LAB_1406eb517;
    }
    local_1c0[1] = (char *)0x0;
    pcVar4 = (char *)FUN_140b65d30(0x40);
    local_1c0[2] = (char *)0x3c;
    local_1a8[0] = (basic_streambuf<char,std::char_traits<char>_>)0x3f;
    builtin_strncpy(pcVar4,"buildTopLevelAccelStructFromBuffer: \'instanceBuffer\' is NULL",0x3d);
    local_1c0[0] = pcVar4;
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar4);
  }
  uVar11 = 0x40;
LAB_1406eb517:
  thunk_FUN_140b68ba8(pcVar4,uVar11);
  return;
}

