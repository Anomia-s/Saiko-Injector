/**
 * Function: tried_to_send_rumble_with_invalid_size
 * Address:  14064f9d0
 * Signature: undefined tried_to_send_rumble_with_invalid_size(void)
 * Body size: 188 bytes
 */


ulonglong tried_to_send_rumble_with_invalid_size(longlong param_1,char *param_2,uint param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if ((int)param_3 < 1) {
    FUN_1400fbed0("Tried to send rumble with invalid size");
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    cVar1 = hidapi_rumble();
    if (cVar1 != '\0') {
      if (DAT_1416fde90 != (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
        plVar4 = DAT_1416fde90;
        do {
          if (*plVar4 == param_1) {
            plVar2 = plVar4;
          }
          plVar4 = (longlong *)plVar4[0x14];
        } while (plVar4 != (longlong *)0x0);
        if (((plVar2 != (longlong *)0x0) && (param_3 == *(uint *)(plVar2 + 0x11))) &&
           (*param_2 == (char)plVar2[1])) {
          memcpy(plVar2 + 1,param_2,(ulonglong)param_3);
          FUN_1401552c0(DAT_1416fde98);
          return (ulonglong)param_3;
        }
      }
      uVar3 = couldnt_send_rumble_size_d_is_greater_than_d(param_1,param_2,(ulonglong)param_3,0,0);
    }
  }
  return uVar3;
}

