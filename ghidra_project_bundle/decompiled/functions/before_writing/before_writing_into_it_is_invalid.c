/**
 * Function: before_writing_into_it_is_invalid
 * Address:  14071b480
 * Signature: undefined __thiscall before_writing_into_it_is_invalid(void * this)
 * Body size: 2241 bytes
 */


void __thiscall
before_writing_into_it_is_invalid
          (void *this,undefined4 param_2,undefined8 param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  basic_ios<char,std::char_traits<char>_>_vftable *pbVar2;
  basic_ios<char,std::char_traits<char>_> *pbVar3;
  vfunction1 *pvVar4;
  void *_Src;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  basic_ios<char,std::char_traits<char>_>_vftable *pbVar13;
  int local_298 [32];
  ulonglong local_218;
  basic_ios<char,std::char_traits<char>_>_vftable *local_208;
  longlong local_200;
  longlong local_1f8 [9];
  int iStack_1ac;
  basic_ios<char,std::char_traits<char>_> local_1a8;
  undefined *local_198;
  basic_streambuf<char,std::char_traits<char>_> local_190 [3];
  longlong *local_178;
  undefined8 *local_170;
  ulonglong *local_158;
  ulonglong *local_150;
  int *local_140;
  undefined4 *local_138;
  ulonglong local_128;
  uint local_120;
  basic_ios<char,std::char_traits<char>_>_vftable *local_110 [9];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98 [5];
  ulonglong local_70;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  uVar8 = *(ulonglong *)(param_5 + 0x20);
  if (uVar8 == 0) {
    uVar8 = (ulonglong)*(uint *)(param_4 + 0x40);
  }
  local_1f8[6] = 0;
  local_1f8[7] = 0;
  local_1f8[4] = 0;
  local_1f8[5] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[8] = 0;
  local_298[0x1c] = 0;
  local_298[0x1d] = 0;
  local_298[0x1e] = 0;
  local_298[0x1f] = 0;
  local_298[0x18] = 0;
  local_298[0x19] = 0;
  local_298[0x1a] = 0;
  local_298[0x1b] = 0;
  local_298[0x14] = 0;
  local_298[0x15] = 0;
  local_298[0x16] = 0;
  local_298[0x17] = 0;
  local_298[0x10] = 0;
  local_298[0x11] = 0;
  local_298[0x12] = 0;
  local_298[0x13] = 0;
  local_298[0xc] = 0;
  local_298[0xd] = 0;
  local_298[0xe] = 0;
  local_298[0xf] = 0;
  local_298[8] = 0;
  local_298[9] = 0;
  local_298[10] = 0;
  local_298[0xb] = 0;
  local_298[4] = 0;
  local_298[5] = 0;
  local_298[6] = 0;
  local_298[7] = 0;
  local_298[0] = 0;
  local_298[1] = 0;
  local_298[2] = 0;
  local_298[3] = 0;
  local_218 = 0;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  uVar9 = 0;
  local_64 = 0;
  local_b0 = param_3;
  local_a8 = param_4;
  local_a0 = uVar8;
  local_68 = param_2;
  if ((int)uVar8 != 0) {
    do {
      while (((uVar12 = (uint)uVar9, uVar11 = uVar12, *(longlong *)(param_5 + 0x20) != 0 &&
              (uVar11 = *(uint *)(param_5 + uVar9 * 4), uVar11 == 0xffffffff)) ||
             (pbVar2 = *(basic_ios<char,std::char_traits<char>_>_vftable **)
                        (param_4 + (ulonglong)uVar11 * 8),
             pbVar2 == (basic_ios<char,std::char_traits<char>_>_vftable *)0x0))) {
        if (local_1f8[8] != 0) {
          (*DAT_1416b7058)(**(undefined8 **)((longlong)this + 0x138),local_68,local_b0,local_64,
                           local_1f8[8] & 0xffffffff,local_1f8,(undefined4)local_218,local_298);
          if (local_1f8[8] != 0) {
            uVar9 = 0;
            do {
              local_1f8[uVar9] = 0;
              uVar9 = uVar9 + 1;
            } while (uVar9 < (ulonglong)local_1f8[8]);
          }
          local_1f8[8] = 0;
          if (local_218 != 0) {
            uVar9 = 0;
            do {
              local_298[uVar9] = 0;
              uVar9 = uVar9 + 1;
            } while (uVar9 < local_218);
          }
          local_218 = 0;
        }
        local_64 = uVar12 + 1;
        uVar9 = (ulonglong)(uVar12 + 1);
        if ((uint)uVar8 <= uVar12 + 1) goto LAB_14071b554;
      }
      local_70 = uVar9;
      lVar5 = (**(code **)(pbVar2->vfunction1 + 0x28))();
      if (lVar5 == 0) {
        local_1f8[local_1f8[8]] = (longlong)pbVar2[5].vfunction1;
        local_1f8[8] = local_1f8[8] + 1;
      }
      else {
        local_1f8[local_1f8[8]] = (longlong)pbVar2[8].vfunction1;
        local_1f8[8] = local_1f8[8] + 1;
        pbVar13 = pbVar2 + 0xc;
        local_208 = pbVar2 + (longlong)(pbVar2[0x12].vfunction1 + 0xc);
        local_200 = lVar5;
        if (pbVar13 != local_208) {
          do {
            while( true ) {
              pvVar4 = pbVar13->vfunction1;
              lVar10 = (((ulonglong)pvVar4 >> 0x38 ^
                        ((ulonglong)pvVar4 >> 0x30 & 0xff ^
                        ((ulonglong)pvVar4 >> 0x28 & 0xff ^
                        ((ulonglong)pvVar4 >> 0x20 & 0xff ^
                        ((ulonglong)pvVar4 >> 0x18 & 0xff ^
                        ((ulonglong)pvVar4 >> 0x10 & 0xff ^
                        ((ulonglong)pvVar4 >> 8 & 0xff ^
                        ((ulonglong)pvVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                        0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
                        0x100000001b3) * 0x100000001b3) * 0x100000001b3 &
                       *(ulonglong *)((longlong)this + 0xa28)) * 0x10;
              lVar5 = *(longlong *)(*(longlong *)((longlong)this + 0xa10) + 8 + lVar10);
              if (lVar5 != *(longlong *)((longlong)this + 0xa00)) break;
LAB_14071b860:
              local_1a8.vftablePtr =
                   (basic_ios<char,std::char_traits<char>_>_vftable *)&DAT_140df266c;
              local_198 = &DAT_140df1610;
              std::ios_base::ios_base((ios_base *)local_110);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ios<char,std::char_traits<char>_> */
              local_110[0] = &std::basic_ios<char,std::char_traits<char>_>::vftable;
              local_c8 = 0;
              uStack_c0 = 0;
              local_b8 = 0;
              *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
               ((longlong)&local_1a8.vftablePtr +
               (longlong)*(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4)) =
                   &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
                    vftable;
              iVar1 = *(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4);
              *(int *)((longlong)&iStack_1ac + (longlong)iVar1) = iVar1 + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_istream<char,std::char_traits<char>_> */
              *(basic_istream<char,std::char_traits<char>_>_vftable **)
               ((longlong)&local_1a8.vftablePtr +
               (longlong)*(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4)) =
                   &std::basic_istream<char,std::char_traits<char>_>::vftable;
              iVar1 = *(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4);
              *(int *)((longlong)&iStack_1ac + (longlong)iVar1) = iVar1 + -0x18;
              local_1a8._Iosb<int> = (_Iosb<int>)0x0;
              std::basic_ios<char,std::char_traits<char>_>::init
                        ((basic_ios<char,std::char_traits<char>_> *)
                         ((longlong)&local_1a8.vftablePtr +
                         (longlong)*(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4)),
                         (basic_streambuf<char,std::char_traits<char>_> *)local_190,false);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ostream<char,std::char_traits<char>_> */
              *(basic_ostream<char,std::char_traits<char>_>_vftable **)
               (&local_190[-1].field_0x0 + *(int *)(local_198 + 4)) =
                   &std::basic_ostream<char,std::char_traits<char>_>::vftable;
              *(int *)(&local_1a8._Iosb<int>.field_0x4 + *(int *)(local_198 + 4)) =
                   *(int *)(local_198 + 4) + -0x10;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_iostream<char,std::char_traits<char>_> */
              *(basic_iostream<char,std::char_traits<char>_>_vftable **)
               ((longlong)&local_1a8.vftablePtr +
               (longlong)*(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4)) =
                   &std::basic_iostream<char,std::char_traits<char>_>::vftable;
              iVar1 = *(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4);
              *(int *)((longlong)&iStack_1ac + (longlong)iVar1) = iVar1 + -0x20;
              *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
               ((longlong)&local_1a8.vftablePtr +
               (longlong)*(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4)) =
                   &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
                    vftable;
              iVar1 = *(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4);
              *(int *)((longlong)&iStack_1ac + (longlong)iVar1) = iVar1 + -0x98;
              std::basic_streambuf<char,std::char_traits<char>_>::
              basic_streambuf<char,std::char_traits<char>_>(local_190);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
              local_190[0] = (basic_streambuf<char,std::char_traits<char>_>)
                             &std::
                              basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                              vftable;
              local_128 = 0;
              local_120 = 0;
              uVar6 = FUN_1400e5ec0(&local_198,"Binding volatile constant buffer ");
              uVar7 = FUN_140527b30(pvVar4 + 0x40);
              uVar6 = FUN_1400e5ec0(uVar6,uVar7);
              FUN_1400e5ec0(uVar6," before writing into it is invalid.");
              uVar6 = *(undefined8 *)((longlong)this + 0x18);
              local_98[0] = 0;
              local_98[1] = 0;
              local_98[2] = 0;
              local_98[3] = 0xf;
              if (((local_120 & 0x22) == 2) || (uVar8 = *local_150, uVar8 == 0)) {
                if (((local_120 & 4) == 0) && (*local_158 != 0)) {
                  uVar8 = *local_158 + (longlong)*local_140;
                  _Src = (void *)*local_178;
                  goto joined_r0x00014071bac0;
                }
              }
              else {
                if (uVar8 < local_128) {
                  uVar8 = local_128;
                }
                _Src = (void *)*local_170;
joined_r0x00014071bac0:
                if (_Src != (void *)0x0) {
                  uVar8 = uVar8 - (longlong)_Src;
                  if (uVar8 < 0x10) {
                    local_98[2] = uVar8;
                    memmove(local_98,_Src,uVar8);
                    *(undefined1 *)((longlong)local_98 + uVar8) = 0;
                  }
                  else {
                    FUN_1400069b0(local_98,uVar8);
                  }
                }
              }
              FUN_140533460(uVar6,local_98);
              if (0xf < (ulonglong)local_98[3]) {
                uVar8 = local_98[3] + 1;
                lVar5 = local_98[0];
                if (0xfff < uVar8) {
                  lVar5 = *(longlong *)(local_98[0] + -8);
                  if (0x1f < (ulonglong)((local_98[0] + -8) - lVar5)) goto LAB_14071bd35;
                  uVar8 = local_98[3] + 0x28;
                }
                thunk_FUN_140b68ba8(lVar5,uVar8);
              }
              local_298[local_218] = 0;
              local_218 = local_218 + 1;
              *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
               ((longlong)&local_1a8.vftablePtr +
               (longlong)*(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4)) =
                   &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
                    vftable;
              iVar1 = *(int *)((longlong)&(local_1a8.vftablePtr)->vfunction1 + 4);
              *(int *)((longlong)&iStack_1ac + (longlong)iVar1) = iVar1 + -0x98;
              local_190[0] = (basic_streambuf<char,std::char_traits<char>_>)
                             &std::
                              basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                              vftable;
              if ((local_120 & 1) != 0) {
                uVar8 = *local_150;
                lVar5 = 0x58;
                if (uVar8 == 0) {
                  uVar8 = *local_158;
                  lVar5 = 0x50;
                }
                lVar10 = *local_178;
                uVar8 = ((longlong)**(int **)(&local_190[0].field_0x0 + lVar5) + uVar8) - lVar10;
                lVar5 = lVar10;
                if (0xfff < uVar8) {
                  lVar5 = *(longlong *)(lVar10 + -8);
                  if (0x1f < (ulonglong)((lVar10 + -8) - lVar5)) {
LAB_14071bd35:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                  uVar8 = uVar8 + 0x27;
                }
                thunk_FUN_140b68ba8(lVar5,uVar8);
              }
              *local_178 = 0;
              *local_158 = 0;
              *local_140 = 0;
              *local_170 = 0;
              *local_150 = 0;
              *local_138 = 0;
              local_128 = 0;
              local_120 = local_120 & 0xfffffffe;
              std::basic_streambuf<char,std::char_traits<char>_>::
              ~basic_streambuf<char,std::char_traits<char>_>(local_190);
              std::ios_base::~ios_base((ios_base *)local_110);
              pbVar13 = pbVar13 + 1;
              if (pbVar13 == local_208) goto LAB_14071b660;
            }
            if (pvVar4 != *(vfunction1 **)(lVar5 + 0x10)) {
              do {
                if (lVar5 == *(longlong *)(*(longlong *)((longlong)this + 0xa10) + lVar10))
                goto LAB_14071b860;
                lVar5 = *(longlong *)(lVar5 + 8);
              } while (pvVar4 != *(vfunction1 **)(lVar5 + 0x10));
            }
            if (lVar5 == *(longlong *)((longlong)this + 0xa00)) goto LAB_14071b860;
            local_298[local_218] = *(int *)(lVar5 + 0x18) * *(int *)(pvVar4 + 0x30);
            local_218 = local_218 + 1;
            pbVar13 = pbVar13 + 1;
          } while (pbVar13 != local_208);
        }
LAB_14071b660:
        param_4 = local_a8;
        uVar8 = local_a0;
        if (*(char *)(local_200 + 0x18) != '\0') {
          lVar5 = *(longlong *)((longlong)this + 0x138);
          local_1a8.vftablePtr = pbVar2;
          (**(code **)(pbVar2->vfunction1 + 8))(pbVar2);
          uVar8 = local_a0;
          param_4 = local_a8;
          pbVar3 = *(basic_ios<char,std::char_traits<char>_> **)(lVar5 + 0x18);
          if (pbVar3 == *(basic_ios<char,std::char_traits<char>_> **)(lVar5 + 0x20)) {
            FUN_1406f5260(lVar5 + 0x10,pbVar3,&local_1a8);
          }
          else {
            pbVar3->vftablePtr = (basic_ios<char,std::char_traits<char>_>_vftable *)0x0;
            if (pbVar3 != &local_1a8) {
              pbVar3->vftablePtr = local_1a8.vftablePtr;
              local_1a8.vftablePtr = (basic_ios<char,std::char_traits<char>_>_vftable *)0x0;
            }
            *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + 8;
          }
          pbVar2 = local_1a8.vftablePtr;
          if (local_1a8.vftablePtr != (basic_ios<char,std::char_traits<char>_>_vftable *)0x0) {
            local_1a8.vftablePtr = (basic_ios<char,std::char_traits<char>_>_vftable *)0x0;
            (**(code **)(pbVar2->vfunction1 + 0x10))();
          }
        }
      }
      uVar11 = (int)local_70 + 1;
      uVar9 = (ulonglong)uVar11;
    } while (uVar11 < (uint)uVar8);
  }
LAB_14071b554:
  if (local_1f8[8] != 0) {
    (*DAT_1416b7058)(**(undefined8 **)((longlong)this + 0x138),local_68,local_b0,local_64,
                     local_1f8[8] & 0xffffffff,local_1f8,(undefined4)local_218,local_298);
  }
  return;
}

