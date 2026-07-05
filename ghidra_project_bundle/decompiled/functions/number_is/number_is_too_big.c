/**
 * Function: number_is_too_big
 * Address:  140025970
 * Signature: undefined __thiscall number_is_too_big(void * this)
 * Body size: 1017 bytes
 */


/* WARNING: Removing unreachable block (ram,0x000140025c22) */

void * __thiscall
number_is_too_big(void *this,longlong *param_2,double param_3,ulonglong *param_4,undefined8 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 in_stack_fffffffffffffd08;
  undefined8 in_stack_fffffffffffffd10;
  undefined4 uVar13;
  exception_vftable *local_2d8;
  char *local_2d0;
  undefined8 local_2c8;
  code *local_2c0;
  exception_vftable local_2b8 [31];
  double local_c0 [2];
  undefined4 local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  char *local_98;
  undefined1 local_90;
  undefined8 local_88;
  ulonglong uStack_80;
  exception_vftable *local_70;
  undefined1 local_68 [16];
  undefined1 local_51;
  undefined8 local_50;
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffd10 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
  local_50 = 0xfffffffffffffffe;
  if ((*param_4 & 0x4000) != 0) {
    local_b0 = 0xb;
    local_c0[0] = param_3;
    cVar3 = FUN_140014610(param_2,local_c0,param_4,param_5);
    if (cVar3 != '\0') {
      *(longlong **)this = param_2;
      return this;
    }
  }
  iVar4 = _dsign();
  uVar10 = 1;
  if (iVar4 == 0) {
    uVar10 = (uint)*param_4 >> 10 & 3;
  }
  if (0x7fefffffffffffff < (ulonglong)ABS(param_3)) {
    uVar7 = *param_4;
    uStack_80 = param_4[1];
    local_88._0_4_ = (uint)uVar7;
    uVar2 = uVar7;
    if ((((uint)local_88 & 0x38000) == 0x8000) &&
       (local_88._4_1_ = (char)(uVar7 >> 0x20), local_88._4_1_ == '0')) {
      local_88._5_3_ = (undefined3)(uVar7 >> 0x28);
      local_88._0_5_ = CONCAT14(0x20,(uint)local_88);
      uVar2 = local_88;
    }
    local_88 = uVar2;
    bVar12 = (uVar7 & 0x1000) == 0;
    pcVar6 = "NAN";
    if (bVar12) {
      pcVar6 = "nan";
    }
    local_2d0 = "INF";
    if (bVar12) {
      local_2d0 = "inf";
    }
    if (NAN(param_3)) {
      local_2d0 = pcVar6;
    }
    lVar8 = 4 - (ulonglong)(uVar10 == 0);
    local_2d8 = (exception_vftable *)CONCAT44(local_2d8._4_4_,uVar10);
    FUN_140019260(this,param_2,&local_88,lVar8,lVar8,&local_2d8);
    return this;
  }
  if ((uVar10 != 0) && ((*param_4 & 0x38) == 0x20)) {
    lVar8 = param_2[1];
    uVar7 = lVar8 + 1;
    if ((ulonglong)param_2[2] < uVar7) {
      (*(code *)param_2[3])(param_2);
      lVar8 = param_2[1];
      uVar7 = lVar8 + 1;
    }
    param_2[1] = uVar7;
    *(char *)(*param_2 + lVar8) = (char)(0x202b2d00 >> (sbyte)(uVar10 << 3));
    uVar10 = 0;
    if ((uint)param_4[1] != 0) {
      *(uint *)(param_4 + 1) = (uint)param_4[1] - 1;
    }
  }
  uVar11 = (uint)*param_4;
  uVar1 = *(uint *)((longlong)param_4 + 0xc);
  uVar9 = uVar1;
  if (((int)uVar1 < 0) && (uVar9 = 6, (uVar11 & 7) == 0)) {
    FUN_14001a1d0(&local_2d8);
    FUN_140024310(this,param_2,&local_2d8,param_4,CONCAT44(uVar5,uVar10),CONCAT44(uVar13,0x10),
                  param_5);
    return this;
  }
  local_2d0 = (char *)0x0;
  local_2c0 = std::bad_alloc::bad_alloc_Constructor_or_Destructor;
  local_2d8 = local_2b8;
  local_2c8 = 500;
  if (((byte)uVar11 & 7) == 1) {
    if (uVar9 == 0x7fffffff) {
      local_51 = 1;
                    /* inlined constructor or destructor (approx location) for std::exception */
      local_70 = &std::exception::vftable;
      local_68 = (undefined1  [16])0x0;
      local_98 = "number is too big";
      local_90 = 1;
      __std_exception_copy(&local_98,local_68);
                    /* inlined constructor or destructor (approx location) for
                       fmtquill::v12::format_error */
      local_70 = (exception_vftable *)&fmtquill::v12::format_error::vftable;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_70,(ThrowInfo *)&DAT_141412540);
    }
    uVar9 = uVar9 + 1;
    if (uVar1 != 0) {
      *(byte *)((longlong)param_4 + 1) = *(byte *)((longlong)param_4 + 1) | 0x20;
    }
  }
  else if ((uVar11 & 7) == 2) {
    if (uVar1 != 0) {
      uVar11 = uVar11 | 0x2000;
      *(uint *)param_4 = uVar11;
    }
  }
  else {
    if ((uVar11 & 7) == 4) {
      if (uVar10 != 0) {
        uVar11 = uVar10 << 3;
        local_2b8[0].vfunction1._0_1_ = (undefined1)(0x202b2d00 >> (sbyte)uVar11);
      }
      local_2d0 = (char *)(ulonglong)(uVar10 != 0);
      local_a8 = *param_4;
      uStack_a0 = param_4[1];
      FUN_14001d590(uVar11,&local_a8,&local_2d8);
      local_70 = local_2d8;
      local_68._0_8_ = local_2d0;
      FUN_14001fc50(this,param_2,param_4,local_2d0,local_2d0,&local_70);
      goto LAB_140025cd7;
    }
    uVar9 = uVar9 + (uVar9 == 0);
  }
  uVar5 = number_is_too_big(uVar11,uVar9,param_4,0,&local_2d8);
  *(uint *)((longlong)param_4 + 0xc) = uVar9;
  local_70 = local_2d8;
  local_68._4_4_ = uVar5;
  local_68._0_4_ = local_2d0._0_4_;
  FUN_1400229e0(this,param_2,&local_70,param_4,uVar10,CONCAT44(uVar13,0x10),param_5);
LAB_140025cd7:
  if (local_2d8 != local_2b8) {
    free(local_2d8);
  }
  return this;
}

