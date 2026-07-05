/**
 * Function: expected_s_when_parsing_s_got_s
 * Address:  140787610
 * Signature: undefined expected_s_when_parsing_s_got_s(void)
 * Body size: 355 bytes
 */


void expected_s_when_parsing_s_got_s(longlong param_1,undefined4 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 **local_70 [3];
  ulonglong local_58;
  undefined8 **local_50 [3];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14079fd90(local_50,&local_88,param_2);
  the_beginning_of_an_interpolated_string(local_50,local_70);
  the_beginning_of_an_interpolated_string(param_1 + 0x80,local_50);
  if (local_38 < 0x10) {
    pppuVar2 = local_50;
    if (local_58 < 0x10) goto LAB_140787679;
LAB_1407876ae:
    pppuVar3 = (undefined8 ***)local_70[0];
    if (param_3 == 0) goto LAB_1407876be;
LAB_140787685:
    FUN_14078f3b0(param_1,param_1 + 0x84,"Expected %s when parsing %s, got %s",pppuVar3,param_3,
                  pppuVar2);
  }
  else {
    pppuVar2 = (undefined8 ***)local_50[0];
    if (0xf < local_58) goto LAB_1407876ae;
LAB_140787679:
    pppuVar3 = local_70;
    if (param_3 != 0) goto LAB_140787685;
LAB_1407876be:
    FUN_14078f3b0(param_1,param_1 + 0x84,"Expected %s, got %s",pppuVar3,pppuVar2);
  }
  if (0xf < local_38) {
    uVar1 = local_38 + 1;
    pppuVar2 = (undefined8 ***)local_50[0];
    if (0xfff < uVar1) {
      pppuVar2 = (undefined8 ***)local_50[0][-1];
      if (0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)pppuVar2))) goto LAB_14078775a;
      uVar1 = local_38 + 0x28;
    }
    thunk_FUN_140b68ba8(pppuVar2,uVar1);
  }
  if (0xf < local_58) {
    uVar1 = local_58 + 1;
    pppuVar2 = (undefined8 ***)local_70[0];
    if (0xfff < uVar1) {
      pppuVar2 = (undefined8 ***)local_70[0][-1];
      if (0x1f < (ulonglong)((longlong)local_70[0] + (-8 - (longlong)pppuVar2))) {
LAB_14078775a:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar1 = local_58 + 0x28;
    }
    thunk_FUN_140b68ba8(pppuVar2,uVar1);
  }
  return;
}

