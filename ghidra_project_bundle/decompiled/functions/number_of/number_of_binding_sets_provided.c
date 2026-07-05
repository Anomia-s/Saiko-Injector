/**
 * Function: number_of_binding_sets_provided
 * Address:  1406e2f20
 * Signature: undefined __thiscall number_of_binding_sets_provided(void * this)
 * Body size: 1900 bytes
 */


ulonglong __thiscall number_of_binding_sets_provided(void *this,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined8 *****pppppuVar8;
  void *pvVar9;
  ulonglong uVar10;
  uint uVar11;
  int iStack_18c;
  longlong local_188 [2];
  undefined1 local_178 [8];
  basic_streambuf<char,std::char_traits<char>_> local_170 [3];
  longlong *local_158;
  longlong *local_150;
  ulonglong *local_138;
  ulonglong *local_130;
  int *local_120;
  ulonglong local_108;
  uint local_100;
  ios_base local_f0 [6];
  void *local_90;
  undefined8 ****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVar4 = *(longlong *)(param_2 + 0x40);
  local_90 = this;
  if (lVar4 == *(longlong *)(param_3 + 0x40)) {
    uVar10 = 0;
    for (uVar11 = 0; (int)uVar11 < (int)lVar4; uVar11 = uVar11 + 1) {
      uVar2 = (ulonglong)uVar11;
      plVar1 = *(longlong **)(param_3 + uVar2 * 8);
      if (plVar1 == (longlong *)0x0) {
        FUN_1401e87c0(local_188,1);
        pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(local_178,"Binding set in slot ");
        pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar11);
        FUN_1400e5ec0(pbVar7," is NULL");
        local_88 = (undefined8 *****)0x0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0xf;
        if (((local_100 & 0x22) == 2) || (uVar10 = *local_130, uVar10 == 0)) {
          if (((local_100 & 4) == 0) && (uVar10 = *local_138, uVar10 != 0)) {
            uVar10 = uVar10 + (longlong)*local_120;
            pvVar9 = (void *)*local_158;
            goto joined_r0x0001406e325f;
          }
        }
        else {
          if (uVar10 < local_108) {
            uVar10 = local_108;
          }
          pvVar9 = (void *)*local_150;
joined_r0x0001406e325f:
          if (pvVar9 != (void *)0x0) {
            uVar10 = uVar10 - (longlong)pvVar9;
            if (uVar10 < 0x10) {
              local_78 = uVar10;
              memmove(&local_88,pvVar9,uVar10);
              *(undefined1 *)((longlong)&local_88 + uVar10) = 0;
            }
            else {
              FUN_1400069b0(&local_88,uVar10);
            }
          }
        }
        pppppuVar8 = &local_88;
        if (0xf < local_70) {
          pppppuVar8 = (undefined8 *****)local_88;
        }
        (**(code **)(**(longlong **)((longlong)local_90 + 0x20) + 8))
                  (*(longlong **)((longlong)local_90 + 0x20),2,pppppuVar8);
LAB_1406e3440:
        if (0xf < local_70) {
          uVar2 = local_70 + 1;
          pppppuVar8 = (undefined8 *****)local_88;
          if (0xfff < uVar2) {
            pppppuVar8 = (undefined8 *****)local_88[-1];
            if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppuVar8)))
            goto LAB_1406e347e;
            uVar2 = local_70 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppuVar8,uVar2);
        }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((longlong)local_188 + (longlong)*(int *)(local_188[0] + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_18c + (longlong)*(int *)(local_188[0] + 4)) =
             *(int *)(local_188[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
        local_170[0] = (basic_streambuf<char,std::char_traits<char>_>)
                       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                        vftable;
        FUN_1401da8b0(local_170);
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(local_170);
        std::ios_base::~ios_base(local_f0);
        uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x30))();
        plVar1 = *(longlong **)(param_2 + uVar2 * 8);
        lVar4 = (**(code **)(**(longlong **)(param_3 + uVar2 * 8) + 0x28))();
        lVar5 = (**(code **)(*plVar1 + 0x30))(plVar1);
        if (plVar3 != plVar1 && lVar5 == 0) {
          FUN_1401e87c0(local_188,1);
          pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(local_178,"Binding set in slot ");
          pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar11);
          pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(pbVar7," does not match the layout in pipeline slot ");
          std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar11);
          local_88 = (undefined8 *****)0x0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0xf;
          if (((local_100 & 0x22) == 2) || (uVar10 = *local_130, uVar10 == 0)) {
            if (((local_100 & 4) == 0) && (uVar10 = *local_138, uVar10 != 0)) {
              uVar10 = uVar10 + (longlong)*local_120;
              pvVar9 = (void *)*local_158;
              goto joined_r0x0001406e32bf;
            }
          }
          else {
            if (uVar10 < local_108) {
              uVar10 = local_108;
            }
            pvVar9 = (void *)*local_150;
joined_r0x0001406e32bf:
            if (pvVar9 != (void *)0x0) {
              uVar10 = uVar10 - (longlong)pvVar9;
              if (uVar10 < 0x10) {
                local_78 = uVar10;
                memmove(&local_88,pvVar9,uVar10);
                *(undefined1 *)((longlong)&local_88 + uVar10) = 0;
              }
              else {
                FUN_1400069b0(&local_88,uVar10);
              }
            }
          }
          pppppuVar8 = &local_88;
          if (0xf < local_70) {
            pppppuVar8 = (undefined8 *****)local_88;
          }
          (**(code **)(**(longlong **)((longlong)local_90 + 0x20) + 8))
                    (*(longlong **)((longlong)local_90 + 0x20),2,pppppuVar8);
          goto LAB_1406e3440;
        }
        if (lVar4 != 0 && lVar5 != 0) {
          FUN_1401e87c0(local_188,1);
          pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(local_178,"Binding set in slot ");
          pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar11);
          FUN_1400e5ec0(pbVar7," is regular while the layout expects a descriptor table");
          local_88 = (undefined8 *****)0x0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0xf;
          if (((local_100 & 0x22) == 2) || (uVar10 = *local_130, uVar10 == 0)) {
            if (((local_100 & 4) == 0) && (uVar10 = *local_138, uVar10 != 0)) {
              uVar10 = uVar10 + (longlong)*local_120;
              pvVar9 = (void *)*local_158;
              goto joined_r0x0001406e3315;
            }
          }
          else {
            if (uVar10 < local_108) {
              uVar10 = local_108;
            }
            pvVar9 = (void *)*local_150;
joined_r0x0001406e3315:
            if (pvVar9 != (void *)0x0) {
              uVar10 = uVar10 - (longlong)pvVar9;
              if (uVar10 < 0x10) {
                local_78 = uVar10;
                memmove(&local_88,pvVar9,uVar10);
                *(undefined1 *)((longlong)&local_88 + uVar10) = 0;
              }
              else {
                FUN_1400069b0(&local_88,uVar10);
              }
            }
          }
          pppppuVar8 = &local_88;
          if (0xf < local_70) {
            pppppuVar8 = (undefined8 *****)local_88;
          }
          (**(code **)(**(longlong **)((longlong)local_90 + 0x20) + 8))
                    (*(longlong **)((longlong)local_90 + 0x20),2,pppppuVar8);
          goto LAB_1406e3440;
        }
      }
      lVar4 = *(longlong *)(param_2 + 0x40);
    }
    uVar10 = uVar10 ^ 1;
    goto LAB_1406e368a;
  }
  FUN_1401e87c0(local_188,1);
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(local_178,"Number of binding sets provided (");
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar6,*(__uint64 *)(param_3 + 0x40));
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(pbVar7,") does not match the number of binding layouts in the pipeline (");
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar6,*(__uint64 *)(param_2 + 0x40));
  FUN_1400e5ec0(pbVar7,")");
  local_88 = (undefined8 *****)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  if (((local_100 & 0x22) == 2) || (uVar10 = *local_130, uVar10 == 0)) {
    if (((local_100 & 4) == 0) && (*local_138 != 0)) {
      uVar10 = *local_138 + (longlong)*local_120;
      pvVar9 = (void *)*local_158;
      if (pvVar9 != (void *)0x0) goto LAB_1406e3574;
    }
LAB_1406e358c:
    plVar1 = *(longlong **)((longlong)local_90 + 0x20);
  }
  else {
    if (uVar10 < local_108) {
      uVar10 = local_108;
    }
    pvVar9 = (void *)*local_150;
    if (pvVar9 == (void *)0x0) goto LAB_1406e358c;
LAB_1406e3574:
    uVar10 = uVar10 - (longlong)pvVar9;
    if (0xf < uVar10) {
      FUN_1400069b0(&local_88,uVar10);
      goto LAB_1406e358c;
    }
    local_78 = uVar10;
    memmove(&local_88,pvVar9,uVar10);
    *(undefined1 *)((longlong)&local_88 + uVar10) = 0;
    plVar1 = *(longlong **)((longlong)local_90 + 0x20);
  }
  pppppuVar8 = (undefined8 *****)local_88;
  if (local_70 < 0x10) {
    pppppuVar8 = &local_88;
  }
  (**(code **)(*plVar1 + 8))(plVar1,2,pppppuVar8);
  if (0xf < local_70) {
    uVar10 = local_70 + 1;
    pppppuVar8 = (undefined8 *****)local_88;
    if (0xfff < uVar10) {
      pppppuVar8 = (undefined8 *****)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppuVar8))) {
LAB_1406e347e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar10 = local_70 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppuVar8,uVar10);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_188 + (longlong)*(int *)(local_188[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_18c + (longlong)*(int *)(local_188[0] + 4)) =
       *(int *)(local_188[0] + 4) + -0x98;
  local_170[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_170);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_170);
  std::ios_base::~ios_base(local_f0);
  uVar10 = 0;
LAB_1406e368a:
  return uVar10 & 0xffffff01;
}

