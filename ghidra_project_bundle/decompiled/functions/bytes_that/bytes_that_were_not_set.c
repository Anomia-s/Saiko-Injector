/**
 * Function: bytes_that_were_not_set
 * Address:  1406e4bc0
 * Signature: undefined __thiscall bytes_that_were_not_set(void * this)
 * Body size: 670 bytes
 */


ulonglong __thiscall bytes_that_were_not_set(void *this,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  ulonglong uVar7;
  undefined8 *****pppppuVar8;
  undefined8 unaff_RBX;
  void *_Src;
  bool bVar9;
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
  undefined8 ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  bVar9 = *(longlong *)((longlong)this + 0x890) == 0;
  bVar1 = *(byte *)((longlong)this + 0x898);
  if (bVar9 || (bVar1 & 1) != 0) goto LAB_1406e4e30;
  FUN_1401e87c0(local_150,1);
  uVar4 = FUN_1400e5ec0(local_140,&DAT_1413a0fb1);
  uVar4 = FUN_1400e5ec0(uVar4,param_2);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(uVar4," pipeline expects push constants (");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar5,*(__uint64 *)((longlong)this + 0x890));
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(pbVar6," bytes) that were not set.");
  cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)&pbVar5->vbtablePtr +
                     (longlong)pbVar5->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),
                     '\n');
  std::basic_ostream<char,std::char_traits<char>_>::put(pbVar5,cVar3);
  std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar5);
  uVar4 = FUN_1400e5ec0(local_140,"Push constants must be set after each call to ");
  uVar4 = FUN_1400e5ec0(uVar4,param_3);
  FUN_1400e5ec0(uVar4,".");
  local_58 = (undefined8 *****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_c8 & 0x22) == 2) || (uVar7 = *local_f8, uVar7 == 0)) {
    if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
      uVar7 = *local_100 + (longlong)*local_e8;
      _Src = (void *)*local_120;
      if (_Src != (void *)0x0) goto LAB_1406e4d2f;
    }
LAB_1406e4d47:
    plVar2 = *(longlong **)((longlong)this + 0x20);
  }
  else {
    if (uVar7 < local_d0) {
      uVar7 = local_d0;
    }
    _Src = (void *)*local_118;
    if (_Src == (void *)0x0) goto LAB_1406e4d47;
LAB_1406e4d2f:
    uVar7 = uVar7 - (longlong)_Src;
    if (0xf < uVar7) {
      FUN_1400069b0(&local_58,uVar7);
      goto LAB_1406e4d47;
    }
    local_48 = uVar7;
    memmove(&local_58,_Src,uVar7);
    *(undefined1 *)((longlong)&local_58 + uVar7) = 0;
    plVar2 = *(longlong **)((longlong)this + 0x20);
  }
  pppppuVar8 = (undefined8 *****)local_58;
  if (local_40 < 0x10) {
    pppppuVar8 = &local_58;
  }
  (**(code **)(*plVar2 + 8))(plVar2,2,pppppuVar8);
  if (0xf < local_40) {
    uVar7 = local_40 + 1;
    pppppuVar8 = (undefined8 *****)local_58;
    if (0xfff < uVar7) {
      pppppuVar8 = (undefined8 *****)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppuVar8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppuVar8,uVar7);
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
LAB_1406e4e30:
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar9 | bVar1) & 0xffffff01;
}

