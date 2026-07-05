/**
 * Function: nssignature_value
 * Address:  140b9f650
 * Signature: undefined nssignature_value(void)
 * Body size: 332 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 nssignature_value(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res20 [2];
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x140b9f665;
  iVar1 = FUN_140c078a0(param_1,"%*sSignature Algorithm: ",4,&DAT_1413a2ad6);
  if ((0 < iVar1) && (iVar1 = FUN_140bde8c0(param_1,*param_2), 0 < iVar1)) {
    if ((param_3 != 0) &&
       (iVar1 = FUN_140c078a0(param_1,"\n%*sSignature Value:",4,&DAT_1413a2ad6), iVar1 < 1)) {
      return 0;
    }
    iVar1 = FUN_140b964c0(*param_2);
    if ((((iVar1 != 0) && (iVar1 = FUN_140c24470(iVar1,local_18,local_res20), iVar1 != 0)) &&
        (lVar2 = FUN_140c0a620(0,local_res20[0]), lVar2 != 0)) &&
       (*(code **)(lVar2 + 0xa0) != (code *)0x0)) {
      uVar3 = (**(code **)(lVar2 + 0xa0))(param_1,param_2,param_3,8,0);
      return uVar3;
    }
    iVar1 = FUN_140b73860(param_1,&DAT_1413a7288,1);
    if (iVar1 == 1) {
      if (param_3 == 0) {
        return 1;
      }
      uVar3 = FUN_140b9f530(param_1,param_3,8);
      return uVar3;
    }
  }
  return 0;
}

