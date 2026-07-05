/**
 * Function: push_constant_size
 * Address:  1406e3a30
 * Signature: void __thiscall push_constant_size(void * this, undefined8 param_1, ulonglong param_2)
 * Body size: 1178 bytes
 */


void __thiscall push_constant_size(void *this,undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  void *pvVar9;
  char *local_140 [3];
  basic_streambuf<char,std::char_traits<char>_> local_128 [3];
  longlong *local_110;
  longlong *local_108;
  longlong *local_f0;
  ulonglong *local_e8;
  int *local_d8;
  ulonglong local_c0;
  uint local_b8;
  ios_base local_a8 [6];
  undefined1 local_48 [16];
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if (cVar1 == '\0') {
    return;
  }
  if ((*(ulonglong *)((longlong)this + 0x30) & 0x1010101) == 0) {
    local_140[1] = (char *)0x0;
    pcVar4 = (char *)FUN_140b65d30(0x60);
    local_140[2] = (char *)0x5d;
    local_128[0] = (basic_streambuf<char,std::char_traits<char>_>)0x5f;
    builtin_strncpy(pcVar4,
                    "setPushConstants is only valid when a graphics, compute, meshlet, or ray tracing state is set"
                    ,0x5e);
    local_140[0] = pcVar4;
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar4);
    thunk_FUN_140b68ba8(pcVar4,0x60);
    return;
  }
  if (param_2 < 0x81) {
    if (param_2 == *(ulonglong *)((longlong)this + 0x890)) {
      *(undefined1 *)((longlong)this + 0x898) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001406e3c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xb0))
                (*(longlong **)((longlong)this + 0x10),param_1,param_2);
      return;
    }
    FUN_1401e87c0(local_140,1);
    if (*(longlong *)((longlong)this + 0x890) == 0) {
      FUN_1400e5ec0(local_140 + 2,
                    "The current pipeline does not expect any push constants, so the setPushConstants call is invalid."
                   );
    }
    else {
      pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(local_140 + 2,"Push constant size (");
      pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
      pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(pbVar3," bytes) doesn\'t match the size expected by the pipeline (");
      pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar2,*(__uint64 *)((longlong)this + 0x890));
      FUN_1400e5ec0(pbVar3," bytes)");
    }
    local_48 = (undefined1  [16])0x0;
    local_38 = 0;
    local_30 = 0xf;
    if (((local_b8 & 0x22) == 2) || (uVar5 = *local_e8, uVar5 == 0)) {
      if (((local_b8 & 4) == 0) && (*local_f0 != 0)) {
        uVar5 = *local_f0 + (longlong)*local_d8;
        pvVar9 = (void *)*local_110;
        goto joined_r0x0001406e3d69;
      }
    }
    else {
      if (uVar5 < local_c0) {
        uVar5 = local_c0;
      }
      pvVar9 = (void *)*local_108;
joined_r0x0001406e3d69:
      if (pvVar9 != (void *)0x0) {
        uVar5 = uVar5 - (longlong)pvVar9;
        if (uVar5 < 0x10) {
          local_38 = uVar5;
          memmove(local_48,pvVar9,uVar5);
          local_48[uVar5] = 0;
        }
        else {
          FUN_1400069b0(local_48,uVar5);
        }
      }
    }
    if (local_30 < 0x10) {
      puVar8 = local_48;
    }
    else {
      puVar8 = (undefined1 *)local_48._0_8_;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,puVar8);
    goto LAB_1406e3e10;
  }
  FUN_1401e87c0(local_140,1);
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(local_140 + 2,"Push constant size (");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar3,") cannot exceed ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,0x80);
  FUN_1400e5ec0(pbVar3," bytes");
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  local_30 = 0xf;
  if (((local_b8 & 0x22) == 2) || (uVar5 = *local_e8, uVar5 == 0)) {
    if (((local_b8 & 4) == 0) && (*local_f0 != 0)) {
      uVar5 = *local_f0 + (longlong)*local_d8;
      pvVar9 = (void *)*local_110;
      if (pvVar9 != (void *)0x0) goto LAB_1406e3c36;
    }
LAB_1406e3c52:
    plVar6 = *(longlong **)((longlong)this + 0x20);
    if (0xf < local_30) goto LAB_1406e3c64;
LAB_1406e3db8:
    puVar8 = local_48;
  }
  else {
    if (uVar5 < local_c0) {
      uVar5 = local_c0;
    }
    pvVar9 = (void *)*local_108;
    if (pvVar9 == (void *)0x0) goto LAB_1406e3c52;
LAB_1406e3c36:
    uVar5 = uVar5 - (longlong)pvVar9;
    if (0xf < uVar5) {
      FUN_1400069b0(local_48,uVar5);
      goto LAB_1406e3c52;
    }
    local_38 = uVar5;
    memmove(local_48,pvVar9,uVar5);
    local_48[uVar5] = 0;
    plVar6 = *(longlong **)((longlong)this + 0x20);
    if (local_30 < 0x10) goto LAB_1406e3db8;
LAB_1406e3c64:
    puVar8 = (undefined1 *)local_48._0_8_;
  }
  (**(code **)(*plVar6 + 8))(plVar6,2,puVar8);
LAB_1406e3e10:
  if (0xf < local_30) {
    uVar5 = local_30 + 1;
    lVar7 = local_48._0_8_;
    if (0xfff < uVar5) {
      lVar7 = *(longlong *)(local_48._0_8_ + -8);
      if (0x1f < (ulonglong)((local_48._0_8_ + -8) - lVar7)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = local_30 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar5);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_140 + (longlong)*(int *)(local_140[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_128 + (longlong)*(int *)(local_140[0] + 4) + -0x1c) =
       *(int *)(local_140[0] + 4) + -0x98;
  local_128[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_128);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_128);
  std::ios_base::~ios_base(local_a8);
  return;
}

