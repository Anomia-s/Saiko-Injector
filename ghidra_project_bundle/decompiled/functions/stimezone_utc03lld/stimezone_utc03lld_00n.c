/**
 * Function: stimezone_utc03lld_00n
 * Address:  140c6a940
 * Signature: undefined stimezone_utc03lld_00n(void)
 * Body size: 202 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
stimezone_utc03lld_00n(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 uVar2;
  
  uVar2 = 0x140c6a95a;
  if ((param_2[2] == 0) ||
     ((iVar1 = FUN_140bd8560(&local_res10), iVar1 == 1 &&
      (iVar1 = FUN_140c078a0(param_3,"%*sTimezone: UTC%+03lld:00\n",param_4,&DAT_1413a2ad6,
                             local_res10,uVar2), 0 < iVar1)))) {
    if (*(int *)(param_2 + 1) < 1) {
      iVar1 = FUN_140c078a0(param_3,"%*sTime:\n",param_4,&DAT_1413a2ad6);
    }
    else {
      iVar1 = FUN_140c078a0(param_3,"%*sNOT this time:\n",param_4,&DAT_1413a2ad6);
    }
    if (0 < iVar1) {
      uVar2 = any_time_after(param_1,*param_2,param_3,param_4 + 4);
      return uVar2;
    }
  }
  return 0;
}

