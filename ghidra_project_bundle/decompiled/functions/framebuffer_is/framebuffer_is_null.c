/**
 * Function: framebuffer_is_null
 * Address:  1406e4020
 * Signature: void __thiscall framebuffer_is_null(void * this, longlong * param_1)
 * Body size: 2298 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall framebuffer_is_null(void *this,longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *******pppppppuVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  void *pvVar15;
  ulonglong uVar16;
  bool bVar17;
  longlong local_170 [2];
  undefined1 local_160 [8];
  basic_streambuf<char,std::char_traits<char>_> local_158 [3];
  longlong *local_140;
  longlong *local_138;
  longlong *local_120;
  ulonglong *local_118;
  int *local_108;
  ulonglong local_f0;
  uint local_e8;
  ios_base local_d8 [6];
  undefined8 *******local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  void *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_1;
  cVar3 = a_command_list_must_be_opened_before_any_rend();
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = operation_requires_at_least(this,0,"setGraphicsState");
  if (cVar3 == '\0') {
    return;
  }
  local_58 = this;
  FUN_1401e87c0(local_170,1);
  pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(local_160,"setGraphicsState: ");
  cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)&pbVar4->vbtablePtr +
                     (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),
                     '\n');
  std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
  std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
  lVar5 = *local_50;
  if (lVar5 == 0) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_160,"pipeline is NULL.");
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar4->vbtablePtr +
                       (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
  }
  lVar9 = local_50[1];
  if (lVar9 == 0) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_160,"framebuffer is NULL.");
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar4->vbtablePtr +
                       (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
  }
  bVar17 = lVar9 == 0 || lVar5 == 0;
  if (((longlong *)local_50[0x91] != (longlong *)0x0) &&
     (lVar5 = (**(code **)(*(longlong *)local_50[0x91] + 0x28))(), *(char *)(lVar5 + 0x35) == '\0'))
  {
    uVar6 = FUN_1400e5ec0(local_160,"Cannot use buffer \'");
    lVar5 = (**(code **)(*(longlong *)local_50[0x91] + 0x28))();
    uVar7 = FUN_140527b30(lVar5 + 0x10);
    uVar6 = FUN_1400e5ec0(uVar6,uVar7);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(uVar6,
                           "\' as an index buffer because it does not have the isIndexBuffer flag set."
                          );
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar4->vbtablePtr +
                       (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
    bVar17 = true;
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
  }
  plVar2 = local_50;
  for (uVar16 = 0; uVar16 < (ulonglong)local_50[0x90]; uVar16 = uVar16 + 1) {
    plVar13 = plVar2 + uVar16 * 3 + 0x60;
    plVar1 = (longlong *)plVar2[uVar16 * 3 + 0x60];
    if (plVar1 == (longlong *)0x0) {
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(local_160,"Vertex buffer at index ");
      pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,uVar16);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar8," is NULL.");
      cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&pbVar4->vbtablePtr +
                         (longlong)
                         pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
      bVar17 = true;
      std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
    }
    else {
      lVar5 = (**(code **)(*plVar1 + 0x28))();
      if (*(char *)(lVar5 + 0x34) == '\0') {
        uVar6 = FUN_1400e5ec0(local_160,"Buffer \'");
        lVar5 = (**(code **)(*(longlong *)*plVar13 + 0x28))();
        uVar7 = FUN_140527b30(lVar5 + 0x10);
        uVar6 = FUN_1400e5ec0(uVar6,uVar7);
        pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(uVar6,"\' bound to vertex buffer slot ");
        pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,uVar16);
        pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar8,
                               " cannot be used as a vertex buffer because it does not have the isVertexBuffer flag set."
                              );
        cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                          ((basic_ios<char,std::char_traits<char>_> *)
                           ((longlong)&pbVar4->vbtablePtr +
                           (longlong)
                           pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n')
        ;
        std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
        bVar17 = true;
        std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
      }
    }
    if (0xf < *(uint *)(plVar13 + 1)) {
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(local_160,"Vertex buffer binding at index ");
      pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,uVar16);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(pbVar8," uses an invalid slot ");
      pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,*(uint *)(plVar13 + 1));
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar8,".");
      cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&pbVar4->vbtablePtr +
                         (longlong)
                         pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
      bVar17 = true;
      std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
    }
  }
  if (((longlong *)local_50[0x93] == (longlong *)0x0) ||
     (lVar5 = (**(code **)(*(longlong *)local_50[0x93] + 0x28))(), *(char *)(lVar5 + 0x37) != '\0'))
  {
    if (bVar17) goto LAB_1406e462f;
    lVar5 = (**(code **)(*(longlong *)*local_50 + 0x28))();
    cVar3 = number_of_binding_sets_provided(local_58,lVar5 + 0xd0,local_50 + 0x57);
    lVar9 = (**(code **)(*(longlong *)local_50[1] + 0x30))();
    lVar10 = (**(code **)(*(longlong *)*local_50 + 0x30))();
    lVar5 = *(longlong *)(lVar9 + 8);
    if (lVar5 == *(longlong *)(lVar10 + 8)) {
      if (lVar5 != 0) {
        lVar12 = 0;
        do {
          if (*(char *)(lVar9 + lVar12) != *(char *)(lVar10 + lVar12)) goto LAB_1406e44e4;
          lVar12 = lVar12 + 1;
        } while (lVar5 != lVar12);
      }
      if (((*(char *)(lVar9 + 0x10) != *(char *)(lVar10 + 0x10)) ||
          (*(int *)(lVar9 + 0x14) != *(int *)(lVar10 + 0x14))) ||
         (*(int *)(lVar9 + 0x18) != *(int *)(lVar10 + 0x18))) goto LAB_1406e44e4;
      if (cVar3 != '\0') {
        lVar9 = (**(code **)(*(longlong *)*local_50 + 0x28))();
        *(undefined8 *)((longlong)local_58 + 0x890) = 0;
        lVar5 = *(longlong *)(lVar9 + 0x110);
        if (lVar5 != 0) {
          puVar14 = (undefined8 *)(lVar9 + 0xd0);
          do {
            lVar10 = (**(code **)(*(longlong *)*puVar14 + 0x28))();
            if (lVar10 != 0) {
              for (lVar12 = *(longlong *)(lVar10 + 0x10); lVar12 != *(longlong *)(lVar10 + 0x18);
                  lVar12 = lVar12 + 8) {
                if (*(char *)(lVar12 + 4) == '\r') {
                  *(ulonglong *)((longlong)local_58 + 0x890) = (ulonglong)*(ushort *)(lVar12 + 6);
                  goto LAB_1406e48ca;
                }
              }
            }
            puVar14 = puVar14 + 1;
          } while (puVar14 != (undefined8 *)(lVar9 + lVar5 * 8 + 0xd0));
        }
LAB_1406e48ca:
        (**(code **)(**(longlong **)((longlong)local_58 + 0x10) + 0xb8))
                  (*(longlong **)((longlong)local_58 + 0x10),local_50);
        *(undefined4 *)((longlong)local_58 + 0x30) = 1;
        *(undefined1 *)((longlong)local_58 + 0x898) = 0;
        memcpy((void *)((longlong)local_58 + 0x38),local_50,0x4a8);
        goto LAB_1406e481b;
      }
    }
    else {
LAB_1406e44e4:
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(local_160,
                             "The framebuffer used in the draw call does not match the framebuffer used to create the pipeline."
                            );
      cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&pbVar4->vbtablePtr +
                         (longlong)
                         pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
      std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(pbVar4,"Formats and sample counts of the framebuffers must match.");
      cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&pbVar4->vbtablePtr +
                         (longlong)
                         pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
      std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
    }
    local_78 = (undefined8 *******)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0xf;
    if (((local_e8 & 0x22) == 2) || (uVar16 = *local_118, uVar16 == 0)) {
      if (((local_e8 & 4) == 0) && (*local_120 != 0)) {
        uVar16 = *local_120 + (longlong)*local_108;
        pvVar15 = (void *)*local_140;
        goto joined_r0x0001406e471d;
      }
    }
    else {
      if (uVar16 < local_f0) {
        uVar16 = local_f0;
      }
      pvVar15 = (void *)*local_138;
joined_r0x0001406e471d:
      if (pvVar15 != (void *)0x0) {
        uVar16 = uVar16 - (longlong)pvVar15;
        if (uVar16 < 0x10) {
          local_68 = uVar16;
          memmove(&local_78,pvVar15,uVar16);
          *(undefined1 *)((longlong)&local_78 + uVar16) = 0;
        }
        else {
          FUN_1400069b0(&local_78,uVar16);
        }
      }
    }
    pppppppuVar11 = local_78;
    if (local_60 < 0x10) {
      pppppppuVar11 = &local_78;
    }
    (**(code **)(**(longlong **)((longlong)local_58 + 0x20) + 8))
              (*(longlong **)((longlong)local_58 + 0x20),2,pppppppuVar11);
  }
  else {
    uVar6 = FUN_1400e5ec0(local_160,"Cannot use buffer \'");
    lVar5 = (**(code **)(*(longlong *)local_50[0x93] + 0x28))();
    uVar7 = FUN_140527b30(lVar5 + 0x10);
    uVar6 = FUN_1400e5ec0(uVar6,uVar7);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(uVar6,
                           "\' as a DrawIndirect argument buffer because it does not have the isDrawIndirectArgs flag set."
                          );
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar4->vbtablePtr +
                       (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
LAB_1406e462f:
    local_78 = (undefined8 *******)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0xf;
    if (((local_e8 & 0x22) == 2) || (uVar16 = *local_118, uVar16 == 0)) {
      if (((local_e8 & 4) == 0) && (*local_120 != 0)) {
        uVar16 = *local_120 + (longlong)*local_108;
        pvVar15 = (void *)*local_140;
        if (pvVar15 != (void *)0x0) goto LAB_1406e46ad;
      }
LAB_1406e46c9:
      plVar2 = *(longlong **)((longlong)local_58 + 0x20);
    }
    else {
      if (uVar16 < local_f0) {
        uVar16 = local_f0;
      }
      pvVar15 = (void *)*local_138;
      if (pvVar15 == (void *)0x0) goto LAB_1406e46c9;
LAB_1406e46ad:
      uVar16 = uVar16 - (longlong)pvVar15;
      if (0xf < uVar16) {
        FUN_1400069b0(&local_78,uVar16);
        goto LAB_1406e46c9;
      }
      local_68 = uVar16;
      memmove(&local_78,pvVar15,uVar16);
      *(undefined1 *)((longlong)&local_78 + uVar16) = 0;
      plVar2 = *(longlong **)((longlong)local_58 + 0x20);
    }
    pppppppuVar11 = local_78;
    if (local_60 < 0x10) {
      pppppppuVar11 = &local_78;
    }
    (**(code **)(*plVar2 + 8))(plVar2,2,pppppppuVar11);
  }
  if (0xf < local_60) {
    uVar16 = local_60 + 1;
    pppppppuVar11 = local_78;
    if (0xfff < uVar16) {
      pppppppuVar11 = (undefined8 *******)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppppuVar11))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar16 = local_60 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar11,uVar16);
  }
LAB_1406e481b:
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_170 + (longlong)*(int *)(local_170[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_158 + (longlong)*(int *)(local_170[0] + 4) + -0x1c) =
       *(int *)(local_170[0] + 4) + -0x98;
  local_158[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_158);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_158);
  std::ios_base::~ios_base(local_d8);
  return;
}

