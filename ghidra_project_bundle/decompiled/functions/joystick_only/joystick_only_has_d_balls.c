/**
 * Function: joystick_only_has_d_balls
 * Address:  140129c80
 * Signature: undefined joystick_only_has_d_balls(void)
 * Body size: 434 bytes
 */


ulonglong joystick_only_has_d_balls
                    (longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  FUN_140106160(&DAT_14152564c,1);
  FUN_1401552a0(DAT_141525650);
  FUN_140106160(&DAT_14152564c,0xffffffff);
  DAT_141525658 = DAT_141525658 + 1;
  cVar2 = FUN_1403d8fa0(param_1,4);
  if (cVar2 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","joystick");
    DAT_141525658 = DAT_141525658 + -1;
    if (DAT_141525658 == 0 && (DAT_141525648 & 1) == 0) {
      iVar4 = FUN_140106170(&DAT_14152564c);
      uVar1 = DAT_141525650;
      if (iVar4 == 0) {
        FUN_1401552a0(DAT_141525650);
        FUN_1401552c0(DAT_141525650);
        DAT_141525650 = 0;
        FUN_1401552c0(uVar1);
        FUN_140155290(uVar1);
        uVar6 = 0;
        goto LAB_140129db3;
      }
    }
    FUN_1401552c0(DAT_141525650);
    uVar6 = 0;
  }
  else {
    if (param_2 < *(int *)(param_1 + 0x50)) {
      lVar5 = (longlong)param_2;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + lVar5 * 8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 4 + lVar5 * 8);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + lVar5 * 8) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 4 + lVar5 * 8) = 0;
      uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    }
    else {
      uVar3 = FUN_1400fbed0("Joystick only has %d balls");
      uVar6 = (ulonglong)uVar3;
    }
    DAT_141525658 = DAT_141525658 + -1;
    if (DAT_141525658 == 0 && (DAT_141525648 & 1) == 0) {
      iVar4 = FUN_140106170(&DAT_14152564c);
      uVar1 = DAT_141525650;
      if (iVar4 == 0) {
        FUN_1401552a0(DAT_141525650);
        FUN_1401552c0(DAT_141525650);
        DAT_141525650 = 0;
        FUN_1401552c0(uVar1);
        FUN_140155290(uVar1);
        goto LAB_140129db3;
      }
    }
    FUN_1401552c0(DAT_141525650);
  }
LAB_140129db3:
  return uVar6 & 0xffffffff;
}

