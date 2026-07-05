/**
 * Function: couldnt_send_rumble_size_d_is_greater_than_d
 * Address:  14064f8b0
 * Signature: undefined couldnt_send_rumble_size_d_is_greater_than_d(void)
 * Body size: 262 bytes
 */


uint couldnt_send_rumble_size_d_is_greater_than_d
               (longlong param_1,void *param_2,uint param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 < 0x81) {
    plVar2 = (longlong *)FUN_140160c70(1,0xa8);
    if (plVar2 == (longlong *)0x0) {
      FUN_1401552c0(DAT_1416fde98);
      param_3 = 0xffffffff;
    }
    else {
      *plVar2 = param_1;
      memcpy(plVar2 + 1,param_2,(longlong)(int)param_3);
      *(uint *)(plVar2 + 0x11) = param_3;
      plVar2[0x12] = param_4;
      plVar2[0x13] = param_5;
      FUN_140106160(param_1 + 0x88,1);
      plVar1 = plVar2;
      if (DAT_1416fde88 != (longlong *)0x0) {
        DAT_1416fde88[0x14] = (longlong)plVar2;
        plVar1 = DAT_1416fde90;
      }
      DAT_1416fde90 = plVar1;
      DAT_1416fde88 = plVar2;
      FUN_1401552c0(DAT_1416fde98);
      FUN_140158240(DAT_1416fde80);
    }
  }
  else {
    FUN_1401552c0(DAT_1416fde98);
    FUN_1400fbed0("Couldn\'t send rumble, size %d is greater than %d",param_3,0x80);
    param_3 = 0xffffffff;
  }
  return param_3;
}

