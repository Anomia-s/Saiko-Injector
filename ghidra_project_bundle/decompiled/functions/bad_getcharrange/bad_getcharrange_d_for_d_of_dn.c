/**
 * Function: bad_getcharrange_d_for_d_of_dn
 * Address:  1407fb650
 * Signature: undefined bad_getcharrange_d_for_d_of_dn(void)
 * Body size: 725 bytes
 */


void bad_getcharrange_d_for_d_of_dn(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  size_t sVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffff68;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  local_78 = param_3;
  local_70 = param_1;
  if (param_2 < 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x30))();
    if (param_2 < lVar2) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x40))
                        (*(longlong **)(param_1 + 200),param_2);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
  }
  do {
    if (local_78 < param_2) {
      if (0xf < local_50) {
        uVar7 = local_50 + 1;
        ppppuVar5 = (undefined8 ****)local_68;
        if (0xfff < uVar7) {
          ppppuVar5 = (undefined8 ****)local_68[-1];
          if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppuVar5))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar7 = local_50 + 0x28;
        }
        thunk_FUN_140b68ba8(ppppuVar5,uVar7);
      }
      return;
    }
    lVar3 = param_2 + 1;
    local_80 = lVar3;
    if (param_2 < -1) {
      lVar3 = 0;
    }
    else {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 200) + 0x30))();
      if (lVar3 < lVar6) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 200) + 0x40))
                          (*(longlong **)(param_1 + 200),lVar3);
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x28);
      }
    }
    uVar7 = lVar3 - lVar2;
    sVar4 = uVar7 - local_58;
    ppppuVar5 = &local_68;
    if (uVar7 < local_58 || sVar4 == 0) {
      local_58 = uVar7;
      if (0xf < local_50) {
        ppppuVar5 = (undefined8 ****)local_68;
      }
LAB_1407fb81b:
      *(undefined1 *)((longlong)ppppuVar5 + uVar7) = 0;
      param_1 = local_70;
    }
    else {
      if (sVar4 <= local_50 - local_58) {
        if (0xf < local_50) {
          ppppuVar5 = (undefined8 ****)local_68;
        }
        _Dst = (void *)(local_58 + (longlong)ppppuVar5);
        local_58 = uVar7;
        memset(_Dst,0,sVar4);
        goto LAB_1407fb81b;
      }
      in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffffff00;
      FUN_140001af0(&local_68,sVar4,sVar4,sVar4,in_stack_ffffffffffffff68);
    }
    ppppuVar5 = &local_68;
    if (0xf < local_50) {
      ppppuVar5 = (undefined8 ****)local_68;
    }
    if ((lVar2 < 0) || ((longlong)uVar7 < 1)) {
LAB_1407fb7c3:
      if (local_58 == 0) goto LAB_1407fb6d0;
LAB_1407fb89f:
      uVar7 = local_58;
      ppppuVar5 = &local_68;
      if (0xf < local_50) {
        ppppuVar5 = (undefined8 ****)local_68;
      }
      lVar6 = 0;
      lVar2 = 0;
      uVar8 = local_58;
      do {
        while( true ) {
          uVar1 = FUN_140a44390(ppppuVar5,uVar7);
          uVar1 = uVar1 & 7;
          if (uVar1 != 4) break;
          lVar2 = lVar2 + 1;
          ppppuVar5 = (undefined8 ****)((longlong)ppppuVar5 + 4);
          uVar8 = uVar8 - 4;
          if (uVar8 == 0) goto LAB_1407fb6d6;
        }
        lVar6 = lVar6 + 1;
        ppppuVar5 = (undefined8 ****)((longlong)ppppuVar5 + (ulonglong)uVar1);
        uVar8 = uVar8 - uVar1;
      } while (uVar8 != 0);
    }
    else {
      if (*(longlong *)(param_1 + 0x28) < lVar3) {
        httplib::ClientImpl::vfunction4();
        goto LAB_1407fb7c3;
      }
      sVar4 = *(longlong *)(param_1 + 0x30) - lVar2;
      if ((longlong)uVar7 < (longlong)sVar4) {
        sVar4 = uVar7;
      }
      if (*(longlong *)(param_1 + 0x30) <= lVar2) {
        sVar4 = 0;
      }
      memmove(ppppuVar5,(void *)(*(longlong *)(param_1 + 8) + lVar2),sVar4);
      memmove((void *)((longlong)ppppuVar5 + sVar4),
              (void *)(lVar2 + *(longlong *)(param_1 + 8) + sVar4 + *(longlong *)(param_1 + 0x38)),
              uVar7 - sVar4);
      if (local_58 != 0) goto LAB_1407fb89f;
LAB_1407fb6d0:
      lVar6 = 0;
      lVar2 = 0;
    }
LAB_1407fb6d6:
    param_1 = local_70;
    local_90 = lVar6;
    local_88 = lVar2;
    (**(code **)(**(longlong **)(local_70 + 200) + 0x50))
              (*(longlong **)(local_70 + 200),param_2,&local_90);
    param_2 = local_80;
    lVar2 = lVar3;
  } while( true );
}

