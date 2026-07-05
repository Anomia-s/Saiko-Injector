/**
 * Function: must_be_non_zero_for_convertdescs
 * Address:  1406ebfa0
 * Signature: void __thiscall must_be_non_zero_for_convertdescs(void * this, longlong param_1, __uint64 param_2)
 * Body size: 1841 bytes
 */


void __thiscall must_be_non_zero_for_convertdescs(void *this,longlong param_1,__uint64 param_2)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  undefined8 *******pppppppuVar11;
  __uint64 _Var12;
  __uint64 *p_Var13;
  char *local_150 [3];
  basic_streambuf<char,std::char_traits<char>_> local_138 [3];
  longlong *local_120;
  longlong *local_118 [3];
  longlong *local_100;
  ulonglong *local_f8;
  int *local_e8;
  ulonglong local_d0;
  uint local_c8;
  ios_base local_b8 [6];
  undefined8 ******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  cVar2 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x1e8))
                    (*(longlong **)((longlong)this + 0x18),0x17,0);
  if (cVar2 == '\0') {
    local_150[1] = (char *)0x0;
    pcVar4 = (char *)FUN_140b65d30(0x50);
    local_150[2] = (char *)0x4b;
    local_138[0] = (basic_streambuf<char,std::char_traits<char>_>)0x4f;
    builtin_strncpy(pcVar4,
                    "convertCoopVecMatrices: Cooperative Vectors are not supported by the device",
                    0x4c);
    local_150[0] = pcVar4;
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar4);
    thunk_FUN_140b68ba8(pcVar4,0x50);
    return;
  }
  if (param_2 != 0) {
    p_Var13 = (__uint64 *)(param_1 + 0x40);
    _Var12 = 0;
    do {
      if (p_Var13[-8] == 0) {
        FUN_1401e87c0(local_150,1);
        pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(local_150 + 2,
                               "convertCoopVecMatrices: src.buffer is NULL for convertDescs[");
        pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,_Var12);
        FUN_1400e5ec0(pbVar6,"]");
        local_58 = (undefined8 *******)0x0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0xf;
        if (((local_c8 & 0x22) == 2) || (uVar10 = *local_f8, uVar10 == 0)) {
          if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
            pplVar9 = &local_120;
            uVar10 = *local_100 + (longlong)*local_e8;
            goto LAB_1406ec359;
          }
        }
        else {
          pplVar9 = local_118;
          if (uVar10 < local_d0) {
            uVar10 = local_d0;
          }
LAB_1406ec359:
          pvVar1 = (void *)**pplVar9;
          if (pvVar1 != (void *)0x0) {
            uVar10 = uVar10 - (longlong)pvVar1;
            if (uVar10 < 0x10) {
              local_48 = uVar10;
              memmove(&local_58,pvVar1,uVar10);
              *(undefined1 *)((longlong)&local_58 + uVar10) = 0;
            }
            else {
              FUN_1400069b0(&local_58,uVar10);
            }
          }
        }
        pppppppuVar11 = (undefined8 *******)local_58;
        if (local_40 < 0x10) {
          pppppppuVar11 = &local_58;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
LAB_1406ec613:
        if (0xf < local_40) {
          uVar10 = local_40 + 1;
          pppppppuVar11 = (undefined8 *******)local_58;
          if (0xfff < uVar10) {
            pppppppuVar11 = (undefined8 *******)local_58[-1];
            if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar11))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar10 = local_40 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppppuVar11,uVar10);
        }
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((longlong)local_150 + (longlong)*(int *)(local_150[0] + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)local_138 + (longlong)*(int *)(local_150[0] + 4) + -0x1c) =
             *(int *)(local_150[0] + 4) + -0x98;
        local_138[0] = (basic_streambuf<char,std::char_traits<char>_>)
                       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                        vftable;
        FUN_1401da8b0(local_138);
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(local_138);
        std::ios_base::~ios_base(local_b8);
        return;
      }
      if ((longlong *)p_Var13[-3] == (longlong *)0x0) {
        FUN_1401e87c0(local_150,1);
        pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(local_150 + 2,
                               "convertCoopVecMatrices: dst.buffer is NULL for convertDescs[");
        pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,_Var12);
        FUN_1400e5ec0(pbVar6,"]");
        local_58 = (undefined8 *******)0x0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0xf;
        if (((local_c8 & 0x22) == 2) || (uVar10 = *local_f8, uVar10 == 0)) {
          if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
            pplVar9 = &local_120;
            uVar10 = *local_100 + (longlong)*local_e8;
            goto LAB_1406ec3af;
          }
        }
        else {
          pplVar9 = local_118;
          if (uVar10 < local_d0) {
            uVar10 = local_d0;
          }
LAB_1406ec3af:
          pvVar1 = (void *)**pplVar9;
          if (pvVar1 != (void *)0x0) {
            uVar10 = uVar10 - (longlong)pvVar1;
            if (uVar10 < 0x10) {
              local_48 = uVar10;
              memmove(&local_58,pvVar1,uVar10);
              *(undefined1 *)((longlong)&local_58 + uVar10) = 0;
            }
            else {
              FUN_1400069b0(&local_58,uVar10);
            }
          }
        }
        pppppppuVar11 = (undefined8 *******)local_58;
        if (local_40 < 0x10) {
          pppppppuVar11 = &local_58;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
        goto LAB_1406ec613;
      }
      lVar3 = (**(code **)(*(longlong *)p_Var13[-3] + 0x28))();
      if ((*(char *)(lVar3 + 0x31) == '\0') &&
         (cVar2 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x128))(), cVar2 == '\x01'))
      {
        FUN_1401e87c0(local_150,1);
        uVar7 = FUN_1400e5ec0(local_150 + 2,"convertCoopVecMatrices: dst.buffer ");
        lVar3 = (**(code **)(*(longlong *)p_Var13[-3] + 0x28))();
        uVar8 = FUN_140527b30(lVar3 + 0x10);
        uVar7 = FUN_1400e5ec0(uVar7,uVar8);
        pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(uVar7," does not have the canHaveUAVs flag set for convertDescs[");
        pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,_Var12);
        FUN_1400e5ec0(pbVar6,"]");
        local_58 = (undefined8 *******)0x0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0xf;
        if (((local_c8 & 0x22) == 2) || (uVar10 = *local_f8, uVar10 == 0)) {
          if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
            pplVar9 = &local_120;
            uVar10 = *local_100 + (longlong)*local_e8;
            goto LAB_1406ec4bb;
          }
        }
        else {
          pplVar9 = local_118;
          if (uVar10 < local_d0) {
            uVar10 = local_d0;
          }
LAB_1406ec4bb:
          pvVar1 = (void *)**pplVar9;
          if (pvVar1 != (void *)0x0) {
            uVar10 = uVar10 - (longlong)pvVar1;
            if (uVar10 < 0x10) {
              local_48 = uVar10;
              memmove(&local_58,pvVar1,uVar10);
              *(undefined1 *)((longlong)&local_58 + uVar10) = 0;
            }
            else {
              FUN_1400069b0(&local_58,uVar10);
            }
          }
        }
        pppppppuVar11 = (undefined8 *******)local_58;
        if (local_40 < 0x10) {
          pppppppuVar11 = &local_58;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
        goto LAB_1406ec613;
      }
      if ((p_Var13[-5] == 0) || (*p_Var13 == 0)) {
        FUN_1401e87c0(local_150,1);
        pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(local_150 + 2,"convertCoopVecMatrices: src.size (");
        pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,p_Var13[-5]);
        pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar6,") and dst.size (");
        pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,*p_Var13);
        pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar6,") must be non-zero for convertDescs[");
        pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,_Var12);
        FUN_1400e5ec0(pbVar6,"]");
        local_58 = (undefined8 *******)0x0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0xf;
        if (((local_c8 & 0x22) == 2) || (uVar10 = *local_f8, uVar10 == 0)) {
          if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
            uVar10 = *local_100 + (longlong)*local_e8;
            pvVar1 = (void *)*local_120;
            goto joined_r0x0001406ec1fb;
          }
        }
        else {
          if (uVar10 < local_d0) {
            uVar10 = local_d0;
          }
          pvVar1 = (void *)*local_118[0];
joined_r0x0001406ec1fb:
          if (pvVar1 != (void *)0x0) {
            uVar10 = uVar10 - (longlong)pvVar1;
            if (uVar10 < 0x10) {
              local_48 = uVar10;
              memmove(&local_58,pvVar1,uVar10);
              *(undefined1 *)((longlong)&local_58 + uVar10) = 0;
            }
            else {
              FUN_1400069b0(&local_58,uVar10);
            }
          }
        }
        pppppppuVar11 = (undefined8 *******)local_58;
        if (local_40 < 0x10) {
          pppppppuVar11 = &local_58;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
        goto LAB_1406ec613;
      }
      _Var12 = _Var12 + 1;
      p_Var13 = p_Var13 + 0xb;
    } while (param_2 != _Var12);
  }
                    /* WARNING: Could not recover jumptable at 0x0001406ec07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x150))
            (*(longlong **)((longlong)this + 0x10),param_1,param_2);
  return;
}

