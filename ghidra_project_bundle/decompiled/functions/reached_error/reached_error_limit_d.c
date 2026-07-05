/**
 * Function: reached_error_limit_d
 * Address:  14079c6a0
 * Signature: undefined __thiscall reached_error_limit_d(void * this)
 * Body size: 419 bytes
 */


void __thiscall
reached_error_limit_d(void *this,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  ParseError_vftable *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60 [3];
  ulonglong local_48;
  undefined1 local_40 [8];
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)((longlong)this + 0x1b0);
  if (((*(longlong *)((longlong)this + 0x1a8) == lVar2) ||
      (iVar5 = -(uint)((int)*(undefined8 *)(lVar2 + -0x30) == (int)*param_2),
      iVar6 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar2 + -0x30) >> 0x20) ==
                     (int)((ulonglong)*param_2 >> 0x20)), auVar3._4_4_ = iVar5, auVar3._0_4_ = iVar5
      , auVar3._8_4_ = iVar6, auVar3._12_4_ = iVar6, iVar5 = movmskpd((int)this,auVar3), iVar5 != 3)
      ) || (iVar5 = -(uint)((int)*(undefined8 *)(lVar2 + -0x28) == (int)param_2[1]),
           iVar6 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar2 + -0x28) >> 0x20) ==
                          (int)((ulonglong)param_2[1] >> 0x20)), auVar4._4_4_ = iVar5,
           auVar4._0_4_ = iVar5, auVar4._8_4_ = iVar6, auVar4._12_4_ = iVar6,
           iVar5 = movmskpd((int)lVar2,auVar4), iVar5 != 3)) {
    FUN_14079f560(local_60,param_3,param_4);
    if (DAT_1417003c0 == 1) {
      FUN_14000f430(local_40,local_60);
      local_a0 = 0;
      uStack_98 = 0;
                    /* inlined constructor or destructor (approx location) for Luau::ParseError */
      local_a8 = &Luau::ParseError::vftable;
      local_90 = *param_2;
      uStack_88 = param_2[1];
      uStack_78 = uStack_38;
      local_70 = local_30;
      uStack_68 = uStack_28;
      local_30 = 0;
      uStack_28 = 0xf;
      local_40[0] = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_a8,(ThrowInfo *)&DAT_1414b90c0);
    }
    FUN_14079de50((longlong)this + 0x1a8,param_2,local_60);
    if (((ulonglong)DAT_1417003c0 <=
         (ulonglong)
         ((*(longlong *)((longlong)this + 0x1b0) - *(longlong *)((longlong)this + 0x1a8) >> 3) *
         -0x71c71c71c71c71c7)) && (*(char *)((longlong)this + 0x59) == '\0')) {
                    /* WARNING: Subroutine does not return */
      Luau::ParseError::ParseError_Constructor_or_Destructor
                (param_2,"Reached error limit (%d)",(ulonglong)DAT_1417003c0,param_4);
    }
    if (0xf < local_48) {
      uVar1 = local_48 + 1;
      lVar2 = local_60[0];
      if (0xfff < uVar1) {
        lVar2 = *(longlong *)(local_60[0] + -8);
        if (0x1f < (ulonglong)((local_60[0] + -8) - lVar2)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar1 = local_48 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar2,uVar1);
    }
  }
  return;
}

