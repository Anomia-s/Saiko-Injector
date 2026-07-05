/**
 * Function: failed_to_create_placed_texture
 * Address:  140723150
 * Signature: ulonglong __thiscall failed_to_create_placed_texture(void * this, longlong param_1, longlong * param_2, undefined8 param_3)
 * Body size: 836 bytes
 */


ulonglong __thiscall
failed_to_create_placed_texture(void *this,longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  void *_Src;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar12;
  int iStack_184;
  longlong local_180 [2];
  basic_ostream<char,std::char_traits<char>_> local_170;
  undefined8 local_150;
  undefined8 local_148 [3];
  longlong *local_130;
  ulonglong *local_128;
  int *local_118;
  ulonglong local_100;
  uint local_f8;
  ios_base local_e8 [6];
  longlong local_88 [5];
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  puVar8 = local_148;
  local_48 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 200) != 0) || (*(char *)(param_1 + 0x6c) != '\x01')) {
    uVar10 = 0;
    goto LAB_1407231eb;
  }
  lVar4 = FUN_140720860(*(undefined1 *)(param_1 + 0x3c));
  lVar5 = FUN_1406e0030(*(undefined1 *)(param_1 + 0x3c));
  uStack_50 = 0;
  local_4c = 0;
  local_5c = *(undefined4 *)(lVar4 + 0xc);
  local_58 = *(undefined4 *)(param_1 + 0x70);
  local_54 = *(float *)(param_1 + 0x74);
  if ((*(byte *)(lVar5 + 0x13) & 0x30) == 0) {
    uStack_50 = (undefined4)*(undefined8 *)(param_1 + 0x78);
    local_4c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  }
  else {
    local_54 = (float)((int)local_54 & 0xff);
  }
  plVar1 = *(longlong **)((longlong)this + 0x10);
  puVar11 = &local_5c;
  if (*(char *)(param_1 + 0x80) == '\0') {
    puVar11 = (undefined4 *)0x0;
  }
  uVar2 = FUN_14071d7e0(*(undefined4 *)(param_1 + 0x84));
  iVar3 = (**(code **)(*plVar1 + 0xe8))
                    (plVar1,param_2[8],param_3,param_1 + 0x90,CONCAT44(uVar12,uVar2),puVar11,
                     &DAT_140df56c0,param_1 + 200);
  uVar10 = CONCAT71((int7)((ulonglong)param_3 >> 8),-1 < iVar3);
  if (-1 < iVar3) {
    (**(code **)(*param_2 + 8))(param_2);
    plVar1 = *(longlong **)(param_1 + 0xe0);
    *(longlong **)(param_1 + 0xe0) = param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    FUN_140722c40(param_1);
    goto LAB_1407231eb;
  }
  FUN_1401e87c0(local_180,1);
  uVar6 = FUN_1400e5ec0(&local_170,"Failed to create placed texture ");
  uVar7 = FUN_140527b30(param_1 + 0x40);
  uVar6 = FUN_1400e5ec0(uVar6,uVar7);
  FUN_1400e5ec0(uVar6,", error code = 0x");
  *(uint *)(&local_170.basic_ostream<char,std::char_traits<char>_>_data.field_0x0 +
           *(int *)(local_180[0] + 4)) =
       *(uint *)(&local_170.basic_ostream<char,std::char_traits<char>_>_data.field_0x0 +
                *(int *)(local_180[0] + 4)) & 0xfffff1ff | 0x800;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(&local_170,iVar3);
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0xf;
  if (((local_f8 & 0x22) == 2) || (uVar9 = *local_128, uVar9 == 0)) {
    if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
      puVar8 = &local_150;
      uVar9 = *local_130 + (longlong)*local_118;
      goto LAB_140723389;
    }
  }
  else {
    if (uVar9 < local_100) {
      uVar9 = local_100;
    }
LAB_140723389:
    _Src = *(void **)*puVar8;
    if (_Src != (void *)0x0) {
      uVar9 = uVar9 - (longlong)_Src;
      if (uVar9 < 0x10) {
        local_88[2] = uVar9;
        memmove(local_88,_Src,uVar9);
        *(undefined1 *)((longlong)local_88 + uVar9) = 0;
      }
      else {
        FUN_1400069b0(local_88,uVar9);
      }
    }
  }
  FUN_14053e350((longlong)this + 0x10,local_88);
  if (0xf < (ulonglong)local_88[3]) {
    uVar9 = local_88[3] + 1;
    lVar4 = local_88[0];
    if (0xfff < uVar9) {
      lVar4 = *(longlong *)(local_88[0] + -8);
      if (0x1f < (ulonglong)((local_88[0] + -8) - lVar4)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar9 = local_88[3] + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar9);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_180 + (longlong)*(int *)(local_180[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_184 + (longlong)*(int *)(local_180[0] + 4)) =
       *(int *)(local_180[0] + 4) + -0x98;
  local_170.basic_ostream<char,std::char_traits<char>_>_data =
       (basic_ostream<char,std::char_traits<char>_>_data)
       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(&local_170.basic_ostream<char,std::char_traits<char>_>_data);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)
             &local_170.basic_ostream<char,std::char_traits<char>_>_data);
  std::ios_base::~ios_base(local_e8);
LAB_1407231eb:
  return uVar10 & 0xffffffff;
}

