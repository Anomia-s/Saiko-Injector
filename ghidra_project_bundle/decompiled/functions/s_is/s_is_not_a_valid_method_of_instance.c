/**
 * Function: s_is_not_a_valid_method_of_instance
 * Address:  14047a110
 * Signature: undefined s_is_not_a_valid_method_of_instance(void)
 * Body size: 464 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void s_is_not_a_valid_method_of_instance(undefined8 param_1)

{
  size_t sVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char *_Str;
  size_t _Size;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar4 = FUN_140473e90(param_1,1);
  if ((lVar4 == 0) || (iVar3 = FUN_140473f10(param_1), iVar3 != 3)) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s_expected_got_s(param_1,1,"Instance");
  }
  _Str = (char *)FUN_140473cb0(param_1);
  if (_Str == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"Invalid method call on Instance");
  }
  uVar9 = 0xcbf29ce484222325;
  _Size = strlen(_Str);
  lVar2 = DAT_1416f24e8;
  if (_Size == 0) {
    uVar9 = 0xcbf29ce484222325;
  }
  else {
    uVar5 = (ulonglong)((uint)_Size & 3);
    if (_Size < 4) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar9 = ((ulonglong)(byte)_Str[uVar6 + 3] ^
                ((ulonglong)(byte)_Str[uVar6 + 2] ^
                ((ulonglong)(byte)_Str[uVar6 + 1] ^ ((byte)_Str[uVar6] ^ uVar9) * 0x100000001b3) *
                0x100000001b3) * 0x100000001b3) * 0x100000001b3;
        uVar6 = uVar6 + 4;
      } while ((_Size & 0xfffffffffffffffc) != uVar6);
    }
    if (uVar5 != 0) {
      uVar7 = 0;
      do {
        uVar9 = ((byte)_Str[uVar7 + uVar6] ^ uVar9) * 0x100000001b3;
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
    }
  }
  lVar8 = (uVar9 & _DAT_1416f2510) * 0x10;
  lVar10 = *(longlong *)(DAT_1416f24f8 + 8 + lVar8);
  if (lVar10 != DAT_1416f24e8) {
    lVar8 = *(longlong *)(DAT_1416f24f8 + lVar8);
    if (_Size == 0) {
      for (; *(longlong *)(lVar10 + 0x18) != 0; lVar10 = *(longlong *)(lVar10 + 8)) {
        if (lVar10 == lVar8) goto LAB_14047a2b1;
      }
LAB_14047a290:
      if (lVar10 != lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014047a2ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar10 + 0x20))(param_1,lVar4);
        return;
      }
    }
    else {
      sVar1 = *(size_t *)(lVar10 + 0x18);
      while( true ) {
        if ((_Size == sVar1) && (iVar3 = memcmp(_Str,*(void **)(lVar10 + 0x10),_Size), iVar3 == 0))
        goto LAB_14047a290;
        if (lVar10 == lVar8) break;
        lVar10 = *(longlong *)(lVar10 + 8);
        sVar1 = *(size_t *)(lVar10 + 0x18);
      }
    }
  }
LAB_14047a2b1:
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"\'%s\' is not a valid method of Instance",_Str);
}

