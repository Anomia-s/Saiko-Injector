/**
 * Function: joystick_only_has_d_axes
 * Address:  140129960
 * Signature: undefined joystick_only_has_d_axes(void)
 * Body size: 408 bytes
 */


undefined1 joystick_only_has_d_axes(longlong param_1,int param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  
  FUN_140106160(&DAT_14152564c,1);
  FUN_1401552a0(DAT_141525650);
  FUN_140106160(&DAT_14152564c,0xffffffff);
  DAT_141525658 = DAT_141525658 + 1;
  cVar2 = FUN_1403d8fa0(param_1,4);
  if (cVar2 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","joystick");
    DAT_141525658 = DAT_141525658 + -1;
    if ((DAT_141525658 == 0 && (DAT_141525648 & 1) == 0) &&
       (iVar3 = FUN_140106170(&DAT_14152564c), uVar1 = DAT_141525650, iVar3 == 0)) {
      FUN_1401552a0(DAT_141525650);
      FUN_1401552c0(DAT_141525650);
      DAT_141525650 = 0;
      FUN_1401552c0(uVar1);
      FUN_140155290(uVar1);
      uVar4 = 0;
    }
    else {
      FUN_1401552c0(DAT_141525650);
      uVar4 = 0;
    }
  }
  else {
    if (param_2 < *(int *)(param_1 + 0x40)) {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *(undefined2 *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 10);
      }
      uVar4 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 6 + (longlong)param_2 * 10);
    }
    else {
      FUN_1400fbed0("Joystick only has %d axes");
      uVar4 = 0;
    }
    DAT_141525658 = DAT_141525658 + -1;
    if ((DAT_141525658 == 0 && (DAT_141525648 & 1) == 0) &&
       (iVar3 = FUN_140106170(&DAT_14152564c), uVar1 = DAT_141525650, iVar3 == 0)) {
      FUN_1401552a0(DAT_141525650);
      FUN_1401552c0(DAT_141525650);
      DAT_141525650 = 0;
      FUN_1401552c0(uVar1);
      FUN_140155290(uVar1);
    }
    else {
      FUN_1401552c0(DAT_141525650);
    }
  }
  return uVar4;
}

