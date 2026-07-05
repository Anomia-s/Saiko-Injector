/**
 * Function: before_the_same_tlas_was_initially_built
 * Address:  1406e9ba0
 * Signature: undefined __thiscall before_the_same_tlas_was_initially_built(void * this)
 * Body size: 1846 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 __thiscall
before_the_same_tlas_was_initially_built
          (void *this,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  void *pvVar10;
  longlong local_150 [2];
  undefined1 local_140 [8];
  basic_streambuf<char,std::char_traits<char>_> local_138 [3];
  longlong *local_120;
  longlong *local_118 [3];
  longlong *local_100;
  ulonglong *local_f8;
  int *local_e8;
  ulonglong local_d0;
  uint local_c8;
  ios_base local_b8 [6];
  undefined8 *******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((char)param_2[2] != '\0') {
    if (param_3 <= (ulonglong)param_2[6]) {
      if ((param_4 & 0x20) == 0) {
        return 1;
      }
      if (*(char *)((longlong)param_2 + 0x12) == '\0') {
        FUN_1401e87c0(local_150,1);
        uVar2 = FUN_1400e5ec0(local_140,"Cannot perform an update on TLAS ");
        lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
        uVar4 = FUN_140527b30(lVar3 + 0x28);
        uVar2 = FUN_1400e5ec0(uVar2,uVar4);
        FUN_1400e5ec0(uVar2," that was not created with the ALLOW_UPDATE flag");
        local_58 = (undefined8 *******)0x0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0xf;
        if (((local_c8 & 0x22) == 2) || (uVar8 = *local_f8, uVar8 == 0)) {
          if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
            pplVar7 = &local_120;
            uVar8 = *local_100 + (longlong)*local_e8;
            goto LAB_1406ea029;
          }
        }
        else {
          pplVar7 = local_118;
          if (uVar8 < local_d0) {
            uVar8 = local_d0;
          }
LAB_1406ea029:
          pvVar10 = (void *)**pplVar7;
          if (pvVar10 != (void *)0x0) {
            uVar8 = uVar8 - (longlong)pvVar10;
            if (uVar8 < 0x10) {
              local_48 = uVar8;
              memmove(&local_58,pvVar10,uVar8);
              *(undefined1 *)((longlong)&local_58 + uVar8) = 0;
            }
            else {
              FUN_1400069b0(&local_58,uVar8);
            }
          }
        }
        pppppppuVar9 = local_58;
        if (local_40 < 0x10) {
          pppppppuVar9 = &local_58;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                  (*(longlong **)((longlong)this + 0x20),2,pppppppuVar9);
        goto LAB_1406ea219;
      }
      if (*(char *)((longlong)param_2 + 0x13) != '\0') {
        if (param_2[7] != param_3) {
          FUN_1401e87c0(local_150,1);
          uVar2 = FUN_1400e5ec0(local_140,"Cannot perform an update on TLAS ");
          lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
          uVar4 = FUN_140527b30(lVar3 + 0x28);
          uVar2 = FUN_1400e5ec0(uVar2,uVar4);
          pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar2," with ");
          pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_3);
          pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(pbVar6," instances when this TLAS was built with ");
          pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_2[7]);
          FUN_1400e5ec0(pbVar6," instances");
          FUN_140514890(local_150,&local_58);
          pppppppuVar9 = &local_58;
          if (0xf < local_40) {
            pppppppuVar9 = local_58;
          }
          (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                    (*(longlong **)((longlong)this + 0x20),2,pppppppuVar9);
          FUN_140004b30(&local_58);
          FUN_1401e8970(local_150);
          return 0;
        }
        return 1;
      }
      FUN_1401e87c0(local_150,1);
      uVar2 = FUN_1400e5ec0(local_140,"Cannot perform an update on TLAS ");
      lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
      uVar4 = FUN_140527b30(lVar3 + 0x28);
      uVar2 = FUN_1400e5ec0(uVar2,uVar4);
      FUN_1400e5ec0(uVar2," before the same TLAS was initially built");
      local_58 = (undefined8 *******)0x0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0xf;
      if (((local_c8 & 0x22) == 2) || (uVar8 = *local_f8, uVar8 == 0)) {
        if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
          pplVar7 = &local_120;
          uVar8 = *local_100 + (longlong)*local_e8;
          goto LAB_1406ea160;
        }
      }
      else {
        pplVar7 = local_118;
        if (uVar8 < local_d0) {
          uVar8 = local_d0;
        }
LAB_1406ea160:
        pvVar10 = (void *)**pplVar7;
        if (pvVar10 != (void *)0x0) {
          uVar8 = uVar8 - (longlong)pvVar10;
          if (uVar8 < 0x10) {
            local_48 = uVar8;
            memmove(&local_58,pvVar10,uVar8);
            *(undefined1 *)((longlong)&local_58 + uVar8) = 0;
          }
          else {
            FUN_1400069b0(&local_58,uVar8);
          }
        }
      }
      pppppppuVar9 = local_58;
      if (local_40 < 0x10) {
        pppppppuVar9 = &local_58;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pppppppuVar9);
      goto LAB_1406ea219;
    }
    FUN_1401e87c0(local_150,1);
    uVar2 = FUN_1400e5ec0(local_140,"Cannot build TLAS ");
    lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    uVar4 = FUN_140527b30(lVar3 + 0x28);
    uVar2 = FUN_1400e5ec0(uVar2,uVar4);
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar2," with ");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_3);
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(pbVar6,
                           " instances which is greater than topLevelMaxInstances  specified at creation ("
                          );
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_2[6]);
    FUN_1400e5ec0(pbVar6,")");
    local_58 = (undefined8 *******)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    if (((local_c8 & 0x22) == 2) || (uVar8 = *local_f8, uVar8 == 0)) {
      if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
        uVar8 = *local_100 + (longlong)*local_e8;
        pvVar10 = (void *)*local_120;
        if (pvVar10 != (void *)0x0) goto LAB_1406e9ee8;
      }
LAB_1406e9f04:
      plVar1 = *(longlong **)((longlong)this + 0x20);
    }
    else {
      if (uVar8 < local_d0) {
        uVar8 = local_d0;
      }
      pvVar10 = (void *)*local_118[0];
      if (pvVar10 == (void *)0x0) goto LAB_1406e9f04;
LAB_1406e9ee8:
      uVar8 = uVar8 - (longlong)pvVar10;
      if (0xf < uVar8) {
        FUN_1400069b0(&local_58,uVar8);
        goto LAB_1406e9f04;
      }
      local_48 = uVar8;
      memmove(&local_58,pvVar10,uVar8);
      *(undefined1 *)((longlong)&local_58 + uVar8) = 0;
      plVar1 = *(longlong **)((longlong)this + 0x20);
    }
    pppppppuVar9 = local_58;
    if (local_40 < 0x10) {
      pppppppuVar9 = &local_58;
    }
    (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar9);
    goto LAB_1406ea219;
  }
  FUN_1401e87c0(local_150,1);
  uVar2 = FUN_1400e5ec0(local_140,"Cannot perform buildTopLevelAccelStruct on a bottom-level AS ");
  lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar4 = FUN_140527b30(lVar3 + 0x28);
  FUN_1400e5ec0(uVar2,uVar4);
  local_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_c8 & 0x22) == 2) || (uVar8 = *local_f8, uVar8 == 0)) {
    if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
      uVar8 = *local_100 + (longlong)*local_e8;
      pvVar10 = (void *)*local_120;
      if (pvVar10 != (void *)0x0) goto LAB_1406e9d87;
    }
LAB_1406e9da3:
    plVar1 = *(longlong **)((longlong)this + 0x20);
  }
  else {
    if (uVar8 < local_d0) {
      uVar8 = local_d0;
    }
    pvVar10 = (void *)*local_118[0];
    if (pvVar10 == (void *)0x0) goto LAB_1406e9da3;
LAB_1406e9d87:
    uVar8 = uVar8 - (longlong)pvVar10;
    if (0xf < uVar8) {
      FUN_1400069b0(&local_58,uVar8);
      goto LAB_1406e9da3;
    }
    local_48 = uVar8;
    memmove(&local_58,pvVar10,uVar8);
    *(undefined1 *)((longlong)&local_58 + uVar8) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x20);
  }
  pppppppuVar9 = local_58;
  if (local_40 < 0x10) {
    pppppppuVar9 = &local_58;
  }
  (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar9);
LAB_1406ea219:
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    pppppppuVar9 = local_58;
    if (0xfff < uVar8) {
      pppppppuVar9 = (undefined8 *******)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar9))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar9,uVar8);
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_150 + (longlong)*(int *)(local_150[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_138 + (longlong)*(int *)(local_150[0] + 4) + -0x1c) =
       *(int *)(local_150[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_138[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_138);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_138);
  std::ios_base::~ios_base(local_b8);
  return 0;
}

