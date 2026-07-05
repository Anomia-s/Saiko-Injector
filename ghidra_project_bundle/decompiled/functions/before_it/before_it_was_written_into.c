/**
 * Function: before_it_was_written_into
 * Address:  140747970
 * Signature: undefined __thiscall before_it_was_written_into(void * this)
 * Body size: 2035 bytes
 */


void __thiscall
before_it_was_written_into
          (void *this,longlong param_2,uint param_3,longlong *param_4,char param_5,longlong *param_6
          ,char param_7,longlong param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong **pplVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong *local_4d0;
  longlong alStack_4c8 [95];
  undefined8 local_1d0;
  longlong *local_1c8 [2];
  undefined1 local_1b8 [8];
  basic_streambuf<char,std::char_traits<char>_> local_1b0 [3];
  undefined8 *local_198;
  undefined8 *local_190;
  longlong *local_178;
  ulonglong *local_170;
  int *local_160;
  ulonglong local_148;
  uint local_140;
  ios_base local_130 [6];
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  longlong *local_80;
  CommandList *local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_80 = param_4;
  local_64 = param_3;
  if (param_3 != 0) {
    local_88 = 0;
    memset(&local_4d0,0,0x308);
    local_b8 = (longlong)this + 0xaa0;
    uVar13 = 0;
    local_b0 = param_2;
    local_78 = this;
    if (*(int *)(param_2 + 0x40) != 0) {
      do {
        while( true ) {
          plVar10 = *(longlong **)(param_2 + (ulonglong)uVar13 * 8);
          if (plVar10 != (longlong *)0x0) break;
LAB_140747a17:
          uVar13 = uVar13 + 1;
          if (*(uint *)(param_2 + 0x40) <= uVar13) goto LAB_140747fdd;
        }
        local_68 = 1 << ((byte)uVar13 & 0x1f);
        iVar2 = *(int *)(param_8 + 0x20 + (ulonglong)uVar13 * 0x10);
        local_6c = uVar13;
        lVar5 = (**(code **)(*plVar10 + 0x28))(plVar10);
        if (lVar5 == 0) {
          uVar13 = local_6c;
          if (iVar2 != -1) {
            plVar9 = *(longlong **)((((CommandList *)this)->CommandList_data).offset_0x1e0 + 8);
            nvrhi::d3d12::StaticDescriptorHeap::vfunction8
                      ((StaticDescriptorHeap *)
                       ((((CommandList *)this)->CommandList_data).offset_0x10 + 0x180),&local_c0,
                       *(int *)((longlong)plVar10 + 0x14));
            (**(code **)(*plVar9 + 0x100))(plVar9,iVar2,local_c0);
            uVar13 = local_6c;
          }
          goto LAB_140747a17;
        }
        uVar11 = 0;
        while (this = local_78, param_2 = local_b0, uVar11 < (ulonglong)plVar10[0x16]) {
          iVar12 = (int)plVar10[uVar11 * 2 + 10] + iVar2;
          lVar5 = plVar10[uVar11 * 2 + 0xb];
          if (lVar5 == 0) {
            if ((local_64 & local_68) != 0) {
              plVar9 = *(longlong **)((local_78->CommandList_data).offset_0x1e0 + 8);
              lVar5 = *plVar9;
              uVar6 = 0;
LAB_140747a80:
              (**(code **)(lVar5 + 0x130))(plVar9,iVar12,uVar6);
            }
LAB_140747a86:
            uVar11 = uVar11 + 1;
          }
          else {
            if (*(char *)(lVar5 + 0x5b) != '\x01') {
              if ((local_64 & local_68) != 0) {
                plVar9 = *(longlong **)((local_78->CommandList_data).offset_0x1e0 + 8);
                uVar6 = *(undefined8 *)(lVar5 + 0x78);
                lVar5 = *plVar9;
                goto LAB_140747a80;
              }
              goto LAB_140747a86;
            }
            local_a8 = lVar5;
            unordered_map_set_too_long(local_b8,local_1c8);
            lVar3 = local_1c8[0][3];
            if (lVar3 == 0) {
              FUN_1401e87c0(local_1c8,1);
              uVar6 = FUN_1400e5ec0(local_1b8,"Attempted use of a volatile constant buffer ");
              uVar7 = FUN_140527b30(lVar5 + 0x30);
              uVar6 = FUN_1400e5ec0(uVar6,uVar7);
              FUN_1400e5ec0(uVar6," before it was written into");
              lVar5 = (local_78->CommandList_data).offset_0x8;
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              local_90 = 0xf;
              if (((local_140 & 0x22) == 2) || (uVar8 = *local_170, uVar8 == 0)) {
                if (((local_140 & 4) == 0) && (*local_178 != 0)) {
                  uVar8 = *local_178 + (longlong)*local_160;
                  _Src = (void *)*local_198;
                  goto joined_r0x000140747cd2;
                }
              }
              else {
                if (uVar8 < local_148) {
                  uVar8 = local_148;
                }
                _Src = (void *)*local_190;
joined_r0x000140747cd2:
                if (_Src != (void *)0x0) {
                  uVar8 = uVar8 - (longlong)_Src;
                  if (uVar8 < 0x10) {
                    local_98 = uVar8;
                    memmove(&local_a8,_Src,uVar8);
                    *(undefined1 *)((longlong)&local_a8 + uVar8) = 0;
                  }
                  else {
                    FUN_1400069b0(&local_a8,uVar8);
                  }
                }
              }
              FUN_14053e350(lVar5,&local_a8);
              if (0xf < local_90) {
                uVar8 = local_90 + 1;
                lVar5 = local_a8;
                if (0xfff < uVar8) {
                  lVar5 = *(longlong *)(local_a8 + -8);
                  if (0x1f < (ulonglong)((local_a8 + -8) - lVar5)) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                  uVar8 = local_90 + 0x28;
                }
                thunk_FUN_140b68ba8(lVar5,uVar8);
              }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
              *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
               ((longlong)local_1c8 + (longlong)*(int *)((longlong)local_1c8[0] + 4)) =
                   &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
                    vftable;
              *(int *)((longlong)local_1c8 + (longlong)*(int *)((longlong)local_1c8[0] + 4) + -4) =
                   *(int *)((longlong)local_1c8[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
              local_1b0[0] = (basic_streambuf<char,std::char_traits<char>_>)
                             &std::
                              basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                              vftable;
              FUN_1401da8b0(local_1b0);
              std::basic_streambuf<char,std::char_traits<char>_>::
              ~basic_streambuf<char,std::char_traits<char>_>(local_1b0);
              std::ios_base::~ios_base(local_130);
              uVar11 = uVar11 + 1;
            }
            else {
              if (((local_64 & local_68) != 0) ||
                 (lVar3 != (&local_78[1].CommandList_data.offset_0x18)[local_88 * 3])) {
                plVar9 = *(longlong **)((local_78->CommandList_data).offset_0x1e0 + 8);
                (**(code **)(*plVar9 + 0x130))(plVar9,iVar12);
              }
              *(int *)(alStack_4c8 + local_88 * 3 + -1) = iVar12;
              alStack_4c8[local_88 * 3] = lVar5;
              alStack_4c8[local_88 * 3 + 1] = lVar3;
              local_1d0 = local_1d0 + 1;
              uVar11 = uVar11 + 1;
              local_88 = local_1d0;
            }
          }
        }
        if ((local_64 & local_68) != 0) {
          if (*(char *)((longlong)plVar10 + 0x49) == '\x01') {
            plVar9 = *(longlong **)((local_78->CommandList_data).offset_0x1e0 + 8);
            nvrhi::d3d12::StaticDescriptorHeap::vfunction8
                      ((StaticDescriptorHeap *)((local_78->CommandList_data).offset_0x10 + 0x240),
                       &local_d0,*(int *)((longlong)plVar10 + 0x3c));
            (**(code **)(*plVar9 + 0x100))
                      (plVar9,*(int *)((longlong)plVar10 + 0x44) + iVar2,local_d0);
            if ((char)plVar10[9] != '\x01') goto LAB_140747e10;
LAB_140747ec4:
            plVar9 = *(longlong **)((((CommandList *)this)->CommandList_data).offset_0x1e0 + 8);
            nvrhi::d3d12::StaticDescriptorHeap::vfunction8
                      ((StaticDescriptorHeap *)
                       ((((CommandList *)this)->CommandList_data).offset_0x10 + 0x180),&local_c8,
                       (int)plVar10[7]);
            (**(code **)(*plVar9 + 0x100))(plVar9,iVar2 + (int)plVar10[8],local_c8);
            cVar1 = (char)plVar10[6];
          }
          else {
            if ((char)plVar10[9] == '\x01') goto LAB_140747ec4;
LAB_140747e10:
            cVar1 = (char)plVar10[6];
          }
          if (cVar1 == '\x01') {
            lVar5 = (((CommandList *)this)->CommandList_data).offset_0x200;
            local_1c8[0] = plVar10;
            (**(code **)(*plVar10 + 8))(plVar10);
            pplVar4 = *(longlong ***)(lVar5 + 0x30);
            if (pplVar4 == *(longlong ***)(lVar5 + 0x38)) {
              FUN_1406f5260(lVar5 + 0x28,pplVar4,local_1c8);
            }
            else {
              *pplVar4 = (longlong *)0x0;
              if (pplVar4 != local_1c8) {
                *pplVar4 = local_1c8[0];
                local_1c8[0] = (longlong *)0x0;
              }
              *(longlong *)(lVar5 + 0x30) = *(longlong *)(lVar5 + 0x30) + 8;
            }
            plVar9 = local_1c8[0];
            if (local_1c8[0] != (longlong *)0x0) {
              local_1c8[0] = (longlong *)0x0;
              (**(code **)(*plVar9 + 0x10))();
            }
          }
        }
        uVar13 = local_6c;
        if (((((CommandList *)this)->CommandList_data).offset_0x1b0 != '\x01') ||
           (((local_64 & local_68) == 0 &&
             (((CommandList *)this)->CommandList_data).field_0xa74 == '\0' &&
            (*(char *)((longlong)plVar10 + 0x4a) != '\x01')))) goto LAB_140747a17;
        nvrhi::d3d12::CommandList::vfunction49(this,plVar10);
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_2 + 0x40));
    }
LAB_140747fdd:
    memcpy(&(((CommandList *)((longlong)this + 0xaf0))->CommandList_data).offset_0x8,&local_4d0,
           0x308);
  }
  if (param_5 == '\x01' && local_80 != (longlong *)0x0) {
    if ((((CommandList *)this)->CommandList_data).offset_0x1b0 == '\x01') {
      FUN_1407cdb60(this,local_80,0x10);
    }
    lVar5 = (((CommandList *)this)->CommandList_data).offset_0x200;
    local_4d0 = local_80;
    (**(code **)(*local_80 + 8))();
    pplVar4 = *(longlong ***)(lVar5 + 0x30);
    if (pplVar4 == *(longlong ***)(lVar5 + 0x38)) {
      FUN_1406f5260(lVar5 + 0x28,pplVar4,&local_4d0);
      plVar10 = local_4d0;
    }
    else {
      plVar10 = (longlong *)0x0;
      plVar9 = local_80;
      if (pplVar4 == &local_4d0) {
        plVar10 = local_80;
        plVar9 = (longlong *)0x0;
      }
      *pplVar4 = plVar9;
      *(longlong *)(lVar5 + 0x30) = *(longlong *)(lVar5 + 0x30) + 8;
    }
    if (plVar10 != (longlong *)0x0) {
      local_4d0 = (longlong *)0x0;
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  if (param_7 == '\x01' && param_6 != (longlong *)0x0) {
    if ((((CommandList *)this)->CommandList_data).offset_0x1b0 == '\x01') {
      FUN_1407cdb60(this,param_6,0x10);
    }
    lVar5 = (((CommandList *)this)->CommandList_data).offset_0x200;
    local_4d0 = param_6;
    (**(code **)(*param_6 + 8))();
    pplVar4 = *(longlong ***)(lVar5 + 0x30);
    if (pplVar4 == *(longlong ***)(lVar5 + 0x38)) {
      FUN_1406f5260(lVar5 + 0x28,pplVar4,&local_4d0);
      plVar10 = local_4d0;
    }
    else {
      plVar10 = (longlong *)0x0;
      if (pplVar4 == &local_4d0) {
        plVar10 = param_6;
        param_6 = (longlong *)0x0;
      }
      *pplVar4 = param_6;
      *(longlong *)(lVar5 + 0x30) = *(longlong *)(lVar5 + 0x30) + 8;
    }
    if (plVar10 != (longlong *)0x0) {
      local_4d0 = (longlong *)0x0;
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  if ((-1 << (*(byte *)(param_2 + 0x40) & 0x1f) | local_64) == 0xffffffff) {
    (((CommandList *)this)->CommandList_data).offset_0xad8 = 0;
  }
  return;
}

