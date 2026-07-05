/**
 * Function: cannot_use_buffer
 * Address:  1406e57e0
 * Signature: void __thiscall cannot_use_buffer(void * this, longlong * param_1)
 * Body size: 1063 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall cannot_use_buffer(void *this,longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *puVar17;
  void *_Src;
  longlong local_150 [2];
  undefined1 local_140 [8];
  basic_streambuf<char,std::char_traits<char>_> local_138 [3];
  longlong *local_120;
  longlong *local_118;
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
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  cVar7 = a_command_list_must_be_opened_before_any_rend();
  if (cVar7 == '\0') {
    return;
  }
  cVar7 = operation_requires_at_least(this,1,"setComputeState");
  if (cVar7 == '\0') {
    return;
  }
  FUN_1401e87c0(local_150,1);
  pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(local_140,"setComputeState: ");
  cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)&pbVar8->vbtablePtr +
                     (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),
                     '\n');
  std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
  std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
  lVar10 = *param_1;
  if (lVar10 == 0) {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_140,"pipeline is NULL.");
    cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar8->vbtablePtr +
                       (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
  }
  if (((longlong *)param_1[10] == (longlong *)0x0) ||
     (lVar9 = (**(code **)(*(longlong *)param_1[10] + 0x28))(), *(char *)(lVar9 + 0x37) != '\0')) {
    if (lVar10 != 0) {
      lVar10 = (**(code **)(*(longlong *)*param_1 + 0x28))();
      cVar7 = number_of_binding_sets_provided(this,lVar10 + 8,param_1 + 1);
      if (cVar7 != '\0') {
        lVar9 = (**(code **)(*(longlong *)*param_1 + 0x28))();
        *(undefined8 *)((longlong)this + 0x890) = 0;
        lVar10 = *(longlong *)(lVar9 + 0x48);
        if (lVar10 != 0) {
          puVar17 = (undefined8 *)(lVar9 + 8);
          do {
            lVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
            if (lVar11 != 0) {
              for (lVar15 = *(longlong *)(lVar11 + 0x10); lVar15 != *(longlong *)(lVar11 + 0x18);
                  lVar15 = lVar15 + 8) {
                if (*(char *)(lVar15 + 4) == '\r') {
                  *(ulonglong *)((longlong)this + 0x890) = (ulonglong)*(ushort *)(lVar15 + 6);
                  goto LAB_1406e5aa3;
                }
              }
            }
            puVar17 = puVar17 + 1;
          } while (puVar17 != (undefined8 *)(lVar9 + lVar10 * 8 + 8));
        }
LAB_1406e5aa3:
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xe8))
                  (*(longlong **)((longlong)this + 0x10),param_1);
        *(undefined4 *)((longlong)this + 0x30) = 0x100;
        *(undefined1 *)((longlong)this + 0x898) = 0;
        lVar10 = param_1[1];
        lVar9 = param_1[2];
        lVar11 = param_1[3];
        lVar15 = param_1[4];
        lVar4 = param_1[5];
        lVar5 = param_1[6];
        lVar6 = param_1[7];
        *(longlong *)((longlong)this + 0x4e0) = *param_1;
        *(longlong *)((longlong)this + 0x4e8) = lVar10;
        *(longlong *)((longlong)this + 0x4f0) = lVar9;
        *(longlong *)((longlong)this + 0x4f8) = lVar11;
        *(longlong *)((longlong)this + 0x500) = lVar15;
        *(longlong *)((longlong)this + 0x508) = lVar4;
        *(longlong *)((longlong)this + 0x510) = lVar5;
        *(longlong *)((longlong)this + 0x518) = lVar6;
        uVar2 = *(undefined4 *)((longlong)param_1 + 0x44);
        lVar10 = param_1[9];
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x4c);
        *(int *)((longlong)this + 0x520) = (int)param_1[8];
        *(undefined4 *)((longlong)this + 0x524) = uVar2;
        *(int *)((longlong)this + 0x528) = (int)lVar10;
        *(undefined4 *)((longlong)this + 0x52c) = uVar3;
        *(longlong *)((longlong)this + 0x530) = param_1[10];
      }
      goto LAB_1406e5b8a;
    }
  }
  else {
    uVar12 = FUN_1400e5ec0(local_140,"Cannot use buffer \'");
    lVar10 = (**(code **)(*(longlong *)param_1[10] + 0x28))();
    uVar13 = FUN_140527b30(lVar10 + 0x10);
    uVar12 = FUN_1400e5ec0(uVar12,uVar13);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(uVar12,
                           "\' as a DispatchIndirect argument buffer because it does not have the isDrawIndirectArgs flag set."
                          );
    cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar8->vbtablePtr +
                       (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
  }
  local_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_c8 & 0x22) == 2) || (uVar14 = *local_f8, uVar14 == 0)) {
    if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
      uVar14 = *local_100 + (longlong)*local_e8;
      _Src = (void *)*local_120;
      if (_Src != (void *)0x0) goto LAB_1406e5a5e;
    }
LAB_1406e5a7a:
    plVar1 = *(longlong **)((longlong)this + 0x20);
  }
  else {
    if (uVar14 < local_d0) {
      uVar14 = local_d0;
    }
    _Src = (void *)*local_118;
    if (_Src == (void *)0x0) goto LAB_1406e5a7a;
LAB_1406e5a5e:
    uVar14 = uVar14 - (longlong)_Src;
    if (0xf < uVar14) {
      FUN_1400069b0(&local_58,uVar14);
      goto LAB_1406e5a7a;
    }
    local_48 = uVar14;
    memmove(&local_58,_Src,uVar14);
    *(undefined1 *)((longlong)&local_58 + uVar14) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x20);
  }
  pppppppuVar16 = local_58;
  if (local_40 < 0x10) {
    pppppppuVar16 = &local_58;
  }
  (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar16);
  if (0xf < local_40) {
    uVar14 = local_40 + 1;
    pppppppuVar16 = local_58;
    if (0xfff < uVar14) {
      pppppppuVar16 = (undefined8 *******)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar16))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar14 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar16,uVar14);
  }
LAB_1406e5b8a:
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_150 + (longlong)*(int *)(local_150[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_138 + (longlong)*(int *)(local_150[0] + 4) + -0x1c) =
       *(int *)(local_150[0] + 4) + -0x98;
  local_138[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_138);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_138);
  std::ios_base::~ios_base(local_b8);
  return;
}

