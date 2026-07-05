/**
 * Function: bindless_layout_has_maxcapacity_0
 * Address:  14051ec40
 * Signature: undefined8 * __thiscall bindless_layout_has_maxcapacity_0(void * this, undefined8 * param_1, short * param_2)
 * Body size: 1363 bytes
 */


undefined8 * __thiscall
bindless_layout_has_maxcapacity_0(void *this,undefined8 *param_1,short *param_2)

{
  short sVar1;
  longlong *plVar2;
  char cVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  longlong lVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *****pppppuVar9;
  uint *puVar10;
  void *_Src;
  uint *puVar11;
  bool bVar12;
  bool bVar13;
  int iStack_17c;
  longlong local_178 [2];
  undefined1 local_168 [8];
  basic_streambuf<char,std::char_traits<char>_> local_160 [3];
  longlong *local_148;
  longlong *local_140;
  longlong *local_128;
  ulonglong *local_120;
  int *local_110;
  ulonglong local_f8;
  uint local_f0;
  ios_base local_e0 [6];
  void *local_80;
  undefined8 ****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  short *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = this;
  local_58 = param_1;
  FUN_1401e87c0(local_178,1);
  sVar1 = *param_2;
  local_50 = param_2;
  if (sVar1 == 0) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_168,"Cannot create a bindless layout with visibility = None");
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar4->vbtablePtr +
                       (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
  }
  lVar5 = *(longlong *)(local_50 + 0x48);
  bVar12 = lVar5 == 0;
  iVar8 = *(int *)(local_50 + 0x4c);
  bVar13 = iVar8 == 0;
  if (bVar13 && bVar12) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_168,"Bindless layout has no register spaces assigned");
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar4->vbtablePtr +
                       (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
    lVar5 = *(longlong *)(local_50 + 0x48);
    iVar8 = *(int *)(local_50 + 0x4c);
  }
  bVar12 = bVar13 && bVar12 || sVar1 == 0;
  if ((lVar5 != 0) && (iVar8 != 0)) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_168,"Bindless mutable layout has register spaces assigned");
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar4->vbtablePtr +
                       (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
    bVar12 = true;
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
  }
  if (*(int *)(local_50 + 4) == 0) {
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(local_168,"Bindless layout has maxCapacity = 0");
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar4->vbtablePtr +
                       (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
    bVar12 = true;
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
  }
  puVar11 = (uint *)(local_50 + 8);
  puVar10 = puVar11 + *(longlong *)(local_50 + 0x48) * 2;
  for (; puVar11 != puVar10; puVar11 = puVar11 + 2) {
    switch((char)puVar11[1]) {
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
    case '\f':
      break;
    case '\n':
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(local_168,"Volatile CBs cannot be placed into a bindless layout (slot "
                            );
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,*puVar11);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar6,")");
      cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&pbVar4->vbtablePtr +
                         (longlong)
                         pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
      bVar12 = true;
      std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
      break;
    case '\v':
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(local_168,"Bindless samplers are not implemented (slot ");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,*puVar11);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar6,")");
      cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&pbVar4->vbtablePtr +
                         (longlong)
                         pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
      bVar12 = true;
      std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
      break;
    case '\r':
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(local_168,
                             "Push constants cannot be placed into a bindless layout (slot ");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,*puVar11);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar6,")");
      cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&pbVar4->vbtablePtr +
                         (longlong)
                         pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
      bVar12 = true;
      std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
      break;
    default:
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(local_168,"Invalid resource type ");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar4,(uint)(byte)puVar11[1]);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar6," in slot ");
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,*puVar11);
      cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&pbVar4->vbtablePtr +
                         (longlong)
                         pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),'\n');
      std::basic_ostream<char,std::char_traits<char>_>::put(pbVar4,cVar3);
      bVar12 = true;
      std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar4);
    }
  }
  if (!bVar12) {
    (**(code **)(**(longlong **)((longlong)local_80 + 0x10) + 0x170))
              (*(longlong **)((longlong)local_80 + 0x10),local_58,local_50);
    goto LAB_14051f112;
  }
  local_78 = (undefined8 *****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  if (((local_f0 & 0x22) == 2) || (uVar7 = *local_120, uVar7 == 0)) {
    if (((local_f0 & 4) == 0) && (*local_128 != 0)) {
      uVar7 = *local_128 + (longlong)*local_110;
      _Src = (void *)*local_148;
      if (_Src != (void *)0x0) goto LAB_14051f044;
    }
LAB_14051f05c:
    plVar2 = *(longlong **)((longlong)local_80 + 0x18);
  }
  else {
    if (uVar7 < local_f8) {
      uVar7 = local_f8;
    }
    _Src = (void *)*local_140;
    if (_Src == (void *)0x0) goto LAB_14051f05c;
LAB_14051f044:
    uVar7 = uVar7 - (longlong)_Src;
    if (0xf < uVar7) {
      FUN_1400069b0(&local_78,uVar7);
      goto LAB_14051f05c;
    }
    local_68 = uVar7;
    memmove(&local_78,_Src,uVar7);
    *(undefined1 *)((longlong)&local_78 + uVar7) = 0;
    plVar2 = *(longlong **)((longlong)local_80 + 0x18);
  }
  pppppuVar9 = (undefined8 *****)local_78;
  if (local_60 < 0x10) {
    pppppuVar9 = &local_78;
  }
  (**(code **)(*plVar2 + 8))(plVar2,2,pppppuVar9);
  if (0xf < local_60) {
    uVar7 = local_60 + 1;
    pppppuVar9 = (undefined8 *****)local_78;
    if (0xfff < uVar7) {
      pppppuVar9 = (undefined8 *****)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppuVar9))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = local_60 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppuVar9,uVar7);
  }
  *local_58 = 0;
LAB_14051f112:
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_17c + (longlong)*(int *)(local_178[0] + 4)) =
       *(int *)(local_178[0] + 4) + -0x98;
  local_160[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_160);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_160);
  std::ios_base::~ios_base(local_e0);
  return local_58;
}

