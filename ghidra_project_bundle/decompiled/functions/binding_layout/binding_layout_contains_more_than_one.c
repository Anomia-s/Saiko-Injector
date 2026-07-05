/**
 * Function: binding_layout_contains_more_than_one
 * Address:  14051e200
 * Signature: undefined8 * __thiscall binding_layout_contains_more_than_one(void * this, undefined8 * param_1, short * param_2)
 * Body size: 2288 bytes
 */


undefined8 * __thiscall
binding_layout_contains_more_than_one(void *this,undefined8 *param_1,short *param_2)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  char cVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  void *_Src;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  longlong local_230 [2];
  undefined1 local_220 [8];
  basic_streambuf<char,std::char_traits<char>_> local_218 [3];
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1e0;
  ulonglong *local_1d8;
  int *local_1c8;
  ulonglong local_1b0;
  uint local_1a8;
  ios_base local_198 [6];
  undefined1 local_138 [8];
  undefined8 *local_130;
  longlong local_120;
  undefined8 uStack_118;
  longlong local_110;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined8 *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  void *local_60;
  undefined1 local_51;
  short *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_90 = param_1;
  local_50 = param_2;
  FUN_1401e87c0(local_230,1);
  cVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x128))();
  local_d0[0] = 0;
  FUN_14000ad50(local_138,local_d0,&local_88);
  local_f8 = 0;
  uStack_f4 = 0xffffffff;
  uStack_f0 = 0;
  uStack_ec = 0xffffffff;
  local_e8 = 0;
  uStack_e4 = 0xffffffff;
  uStack_e0 = 0;
  uStack_dc = 0xffffffff;
  local_d8 = 0;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  FUN_14000ad50(local_d0,&local_88,&local_51);
  local_60 = this;
  FUN_14051cc60(*(undefined8 *)((longlong)this + 0x18),local_50,cVar7 == '\0',local_138,local_d0);
  sVar1 = *local_50;
  if (sVar1 == 0) {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_220,"Cannot create a binding layout with visibility = None");
    cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar8->vbtablePtr +
                       (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
  }
  if (local_c0 != 0) {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_220,"Binding layout contains duplicate bindings: ");
    FUN_14051ce00(pbVar8,local_d0);
    cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar8->vbtablePtr +
                       (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
  }
  bVar16 = 6 < local_f8;
  if (bVar16) {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_220,"Binding layout contains too many volatile CBs (");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,local_f8);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,")");
    cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar8->vbtablePtr +
                       (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
  }
  bVar16 = bVar16 || (local_c0 != 0 || sVar1 == 0);
  lVar3 = *(longlong *)(local_50 + 0xc);
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  for (lVar15 = *(longlong *)(local_50 + 8); lVar15 != lVar3; lVar15 = lVar15 + 8) {
    while( true ) {
      cVar7 = *(char *)(lVar15 + 4);
      uVar12 = uVar12 + (cVar7 == '\0');
      uVar2 = *(ushort *)(lVar15 + 6);
      if (cVar7 != '\r') break;
      if (uVar2 == 0) {
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(local_220,"Push constant block size cannot be 0");
        cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                          ((basic_ios<char,std::char_traits<char>_> *)
                           ((longlong)&pbVar8->vbtablePtr +
                           (longlong)
                           pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n')
        ;
        std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
        std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
        uVar2 = *(ushort *)(lVar15 + 6);
        bVar16 = true;
      }
      if (0x80 < uVar2) {
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(local_220,"Push constant block size (");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                           (pbVar8,*(ushort *)(lVar15 + 6));
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar9,") cannot exceed ");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,0x80);
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9," bytes");
        cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                          ((basic_ios<char,std::char_traits<char>_> *)
                           ((longlong)&pbVar8->vbtablePtr +
                           (longlong)
                           pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n')
        ;
        std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
        std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
        uVar2 = *(ushort *)(lVar15 + 6);
        bVar16 = true;
      }
      if ((uVar2 & 3) != 0) {
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(local_220,"Push constant block size (");
        pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                           (pbVar8,*(ushort *)(lVar15 + 6));
        pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar9,") must be a multiple of 4");
        cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                          ((basic_ios<char,std::char_traits<char>_> *)
                           ((longlong)&pbVar8->vbtablePtr +
                           (longlong)
                           pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n')
        ;
        std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
        bVar16 = true;
        std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
      if (lVar15 == lVar3) goto LAB_14051e60f;
    }
    uVar14 = uVar14 + (uVar2 == 0);
    if (cVar7 == '\n' && 1 < uVar2) {
      pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(local_220,
                             "Arrays of volatile constant buffers are not supported (size = ");
      pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar8,*(ushort *)(lVar15 + 6));
      pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,")");
      cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&pbVar8->vbtablePtr +
                         (longlong)
                         pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
      bVar16 = true;
      std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
    }
  }
LAB_14051e60f:
  if (uVar12 != 0) {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_220,"Binding layout contains ");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar12);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(pbVar9," item(s) with type = None");
    cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar8->vbtablePtr +
                       (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
    bVar16 = true;
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
  }
  if (uVar14 != 0) {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_220,"Binding layout contains ");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar14);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(pbVar9," item(s) with size = 0");
    cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar8->vbtablePtr +
                       (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
    bVar16 = true;
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
  }
  if (1 < uVar13) {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_220,"Binding layout contains more than one (");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar13);
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(pbVar9,") push constant blocks");
    cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar8->vbtablePtr +
                       (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
    bVar16 = true;
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
  }
  cVar7 = (**(code **)(**(longlong **)((longlong)local_60 + 0x10) + 0x128))();
  if (((cVar7 == '\x02') && (*(int *)(local_50 + 2) != 0)) && ((char)local_50[4] == '\0')) {
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_220,"Binding layout has nonzero registerSpace (");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar8,*(uint *)(local_50 + 2));
    pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(pbVar9,
                           "), which is supported  on Vulkan only if the registerSpaceIsDescriptorSet flag is set"
                          );
    cVar7 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar8->vbtablePtr +
                       (longlong)pbVar8->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar8,cVar7);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar8);
LAB_14051e7bb:
    pvVar6 = local_60;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    if (((local_1a8 & 0x22) == 2) || (uVar10 = *local_1d8, uVar10 == 0)) {
      if (((local_1a8 & 4) == 0) && (*local_1e0 != 0)) {
        uVar10 = *local_1e0 + (longlong)*local_1c8;
        _Src = (void *)*local_200;
        if (_Src != (void *)0x0) goto LAB_14051e847;
      }
LAB_14051e863:
      plVar11 = *(longlong **)((longlong)pvVar6 + 0x18);
    }
    else {
      if (uVar10 < local_1b0) {
        uVar10 = local_1b0;
      }
      _Src = (void *)*local_1f8;
      if (_Src == (void *)0x0) goto LAB_14051e863;
LAB_14051e847:
      uVar10 = uVar10 - (longlong)_Src;
      if (0xf < uVar10) {
        FUN_1400069b0(&local_88,uVar10);
        goto LAB_14051e863;
      }
      local_78 = uVar10;
      memmove(&local_88,_Src,uVar10);
      *(undefined1 *)((longlong)&local_88 + uVar10) = 0;
      plVar11 = *(longlong **)((longlong)pvVar6 + 0x18);
    }
    (**(code **)(*plVar11 + 8))(plVar11,2);
    if (0xf < local_70) {
      uVar10 = local_70 + 1;
      lVar15 = local_88;
      if (0xfff < uVar10) {
        lVar15 = *(longlong *)(local_88 + -8);
        if (0x1f < (ulonglong)((local_88 + -8) - lVar15)) goto LAB_14051eae3;
        uVar10 = local_70 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar15,uVar10);
    }
    *local_90 = 0;
  }
  else {
    if (bVar16) goto LAB_14051e7bb;
    (**(code **)(**(longlong **)((longlong)local_60 + 0x10) + 0x168))
              (*(longlong **)((longlong)local_60 + 0x10),local_90);
  }
  if (local_b8 != 0) {
    uVar10 = local_a8 - local_b8;
    lVar15 = local_b8;
    if (0xfff < uVar10) {
      lVar15 = *(longlong *)(local_b8 + -8);
      if (0x1f < (ulonglong)((local_b8 + -8) - lVar15)) goto LAB_14051eae3;
      uVar10 = uVar10 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar15,uVar10);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
  }
  *(undefined8 *)local_c8[1] = 0;
  puVar5 = (undefined8 *)*local_c8;
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    thunk_FUN_140b68ba8(puVar5,0x20);
    puVar5 = puVar4;
  }
  thunk_FUN_140b68ba8(local_c8,0x20);
  if (local_120 != 0) {
    uVar10 = local_110 - local_120;
    lVar15 = local_120;
    if (0xfff < uVar10) {
      lVar15 = *(longlong *)(local_120 + -8);
      if (0x1f < (ulonglong)((local_120 + -8) - lVar15)) {
LAB_14051eae3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar10 = uVar10 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar15,uVar10);
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
  }
  *(undefined8 *)local_130[1] = 0;
  puVar5 = (undefined8 *)*local_130;
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    thunk_FUN_140b68ba8(puVar5,0x20);
    puVar5 = puVar4;
  }
  thunk_FUN_140b68ba8(local_130,0x20);
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_230 + (longlong)*(int *)(local_230[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_218 + (longlong)*(int *)(local_230[0] + 4) + -0x1c) =
       *(int *)(local_230[0] + 4) + -0x98;
  local_218[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_218);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_218);
  std::ios_base::~ios_base(local_198);
  return local_90;
}

