/**
 * Function: which_is_insufficient
 * Address:  1406fe290
 * Signature: undefined __thiscall which_is_insufficient(void * this)
 * Body size: 1130 bytes
 */


void __thiscall which_is_insufficient(void *this,longlong param_2,void *param_3,size_t param_4)

{
  ulonglong *puVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar14;
  longlong local_1a0 [2];
  undefined1 local_190 [8];
  basic_streambuf<char,std::char_traits<char>_> local_188 [3];
  undefined8 *local_170;
  undefined8 *local_168;
  longlong *local_150;
  ulonglong *local_148;
  int *local_138;
  ulonglong local_120;
  uint local_118;
  ios_base local_108 [6];
  ulonglong local_a8 [3];
  size_t local_90;
  void *local_88;
  longlong local_80;
  longlong local_78 [5];
  longlong local_50 [2];
  ulonglong uVar13;
  
  local_50[1] = 0xfffffffffffffffe;
  local_90 = param_4;
  local_88 = param_3;
  local_50[0] = param_2;
  unordered_map_set_too_long((longlong)this + 0x9f8,local_1a0,local_50);
  if (*(char *)(local_1a0[0] + 0x24) == '\0') {
    *(undefined4 *)(local_1a0[0] + 0x1c) = *(undefined4 *)(local_50[0] + 0x3c);
    *(undefined4 *)(local_1a0[0] + 0x20) = 0xffffffff;
    *(undefined1 *)(local_1a0[0] + 0x24) = 1;
  }
  local_80 = local_1a0[0];
  lVar4 = *(longlong *)((longlong)this + 0x10);
  if (*(longlong *)(lVar4 + 0x6f0) == 0) {
    local_a8[0] = 0;
    lVar11 = *(longlong *)(lVar4 + 0x6f8);
    if (lVar11 != 0) goto LAB_1406fe338;
LAB_1406fe370:
    local_a8[1] = 0;
    lVar4 = *(longlong *)(lVar4 + 0x700);
    if (lVar4 != 0) goto LAB_1406fe352;
LAB_1406fe385:
    local_a8[2] = 0;
  }
  else {
    local_a8[0] = *(ulonglong *)(*(longlong *)(lVar4 + 0x6f0) + 0xe0);
    lVar11 = *(longlong *)(lVar4 + 0x6f8);
    if (lVar11 == 0) goto LAB_1406fe370;
LAB_1406fe338:
    local_a8[1] = *(undefined8 *)(lVar11 + 0xe0);
    lVar4 = *(longlong *)(lVar4 + 0x700);
    if (lVar4 == 0) goto LAB_1406fe385;
LAB_1406fe352:
    local_a8[2] = *(undefined8 *)(lVar4 + 0xe0);
  }
  uVar10 = *(uint *)(local_50[0] + 0x3c);
  if (uVar10 != 0) {
    iVar2 = *(int *)(local_50[0] + 0x100);
    uVar9 = 0;
    do {
      while( true ) {
        uVar12 = uVar9 + iVar2;
        uVar3 = uVar10;
        if (uVar12 < uVar10) {
          uVar3 = 0;
        }
        uVar12 = uVar12 - uVar3;
        uVar13 = (ulonglong)uVar12;
        uVar8 = *(ulonglong *)(*(longlong *)(local_50[0] + 0xd8) + uVar13 * 8);
        if (uVar8 != 0) break;
LAB_1406fe3dc:
        puVar1 = (ulonglong *)(*(longlong *)(local_50[0] + 0xd8) + uVar13 * 8);
        LOCK();
        bVar14 = uVar8 == *puVar1;
        if (bVar14) {
          *puVar1 = (ulonglong)*(uint *)((longlong)this + 0x40) << 0x3c |
                    *(ulonglong *)(*(longlong *)((longlong)this + 0x138) + 0x40);
        }
        UNLOCK();
        uVar9 = 0;
        if (bVar14) {
          uVar9 = 0;
          if (uVar12 + 1 < uVar10) {
            uVar9 = uVar12 + 1;
          }
          *(uint *)(local_50[0] + 0x100) = uVar9;
          *(uint *)(local_80 + 0x18) = uVar12;
          uVar10 = *(uint *)(local_80 + 0x1c);
          if ((int)uVar12 <= (int)*(uint *)(local_80 + 0x1c)) {
            uVar10 = uVar12;
          }
          *(uint *)(local_80 + 0x1c) = uVar10;
          uVar10 = *(uint *)(local_80 + 0x20);
          if ((int)*(uint *)(local_80 + 0x20) < (int)uVar12) {
            uVar10 = uVar12;
          }
          *(uint *)(local_80 + 0x20) = uVar10;
          memcpy((void *)(*(longlong *)(local_50[0] + 0x30) * uVar13 +
                         *(longlong *)(local_50[0] + 0xf0)),local_88,local_90);
          *(undefined1 *)((longlong)this + 0x9b0) = 1;
          return;
        }
      }
      if ((longlong)uVar8 < 0) {
        if ((uVar8 & 0x7000000000000000) < 0x2000000000000001) {
          if (local_a8[(uint)(uVar8 >> 0x3c) & 7] < (uVar8 & 0xfffffffffffffff)) goto LAB_1406fe436;
        }
        else {
          httplib::ClientImpl::vfunction4();
        }
        goto LAB_1406fe3dc;
      }
LAB_1406fe436:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  FUN_1401e87c0(local_1a0,1);
  uVar5 = FUN_1400e5ec0(local_190,"Volatile constant buffer ");
  uVar6 = FUN_140527b30(local_50[0] + 0x40);
  uVar5 = FUN_1400e5ec0(uVar5,uVar6);
  this_00 = (basic_ostream<char,std::char_traits<char>_> *)
            FUN_1400e5ec0(uVar5," has maxVersions = ");
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (this_00,*(uint *)(local_50[0] + 0x3c));
  FUN_1400e5ec0(pbVar7,", which is insufficient.");
  uVar5 = *(undefined8 *)((longlong)this + 0x18);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0xf;
  if (((local_118 & 0x22) == 2) || (uVar8 = *local_148, uVar8 == 0)) {
    if (((local_118 & 4) != 0) || (*local_150 == 0)) goto LAB_1406fe62a;
    uVar8 = *local_150 + (longlong)*local_138;
    _Src = (void *)*local_170;
  }
  else {
    if (uVar8 < local_120) {
      uVar8 = local_120;
    }
    _Src = (void *)*local_168;
  }
  if (_Src != (void *)0x0) {
    uVar8 = uVar8 - (longlong)_Src;
    if (uVar8 < 0x10) {
      local_78[2] = uVar8;
      memmove(local_78,_Src,uVar8);
      *(undefined1 *)((longlong)local_78 + uVar8) = 0;
    }
    else {
      FUN_1400069b0(local_78,uVar8);
    }
  }
LAB_1406fe62a:
  FUN_140533460(uVar5,local_78);
  if (0xf < (ulonglong)local_78[3]) {
    uVar8 = local_78[3] + 1;
    lVar4 = local_78[0];
    if (0xfff < uVar8) {
      lVar4 = *(longlong *)(local_78[0] + -8);
      if (0x1f < (ulonglong)((local_78[0] + -8) - lVar4)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar8 = local_78[3] + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar8);
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_1a0 + (longlong)*(int *)(local_1a0[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_188 + (longlong)*(int *)(local_1a0[0] + 4) + -0x1c) =
       *(int *)(local_1a0[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_188[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_188);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_188);
  std::ios_base::~ios_base(local_108);
  return;
}

