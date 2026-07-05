/**
 * Function: cryptodsadsa_signc
 * Address:  140c7ded0
 * Signature: undefined cryptodsadsa_signc(void)
 * Body size: 438 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
cryptodsadsa_signc(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  int *param_5,longlong param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong local_res20;
  undefined1 local_48 [56];
  undefined8 uStack_10;
  
  uStack_10 = 0x140c7deea;
  local_res20 = param_4;
  if (param_4 != 0) {
    if ((*(longlong *)(param_6 + 0xb8) == 0) ||
       (lVar2 = FUN_140c99120(), *(longlong *)(param_6 + 0xa0) != lVar2)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)(param_6 + 0xa0) + 8))(param_2,param_3,param_6);
    }
    else {
      puVar3 = (undefined8 *)
               ossl_dsa_do_sign_int(param_2,param_3,param_6,param_7,param_8,param_9,param_10);
    }
    if (puVar3 != (undefined8 *)0x0) {
      iVar1 = FUN_140c6e950(puVar3,&local_res20);
      *param_5 = iVar1;
      FUN_140bfcb30(*puVar3);
      FUN_140bfcb30(puVar3[1]);
      FUN_140b8d990(puVar3,"crypto\\dsa\\dsa_sign.c",0x2f);
      return 1;
    }
    *param_5 = 0;
    return 0;
  }
  lVar2 = *(longlong *)(param_6 + 0x10);
  local_res20._0_4_ = -1;
  if (lVar2 != 0) {
    iVar1 = FUN_140c21c10(local_48,0);
    if (iVar1 != 0) {
      iVar1 = FUN_140cdc8a0(local_48,lVar2,lVar2);
      if (((iVar1 != 0) && (iVar1 = FUN_140c22710(local_48,&local_res20), iVar1 != 0)) &&
         (iVar1 = FUN_140c21e60(local_48), iVar1 != 0)) {
        if ((int)local_res20 < 0) {
          *param_5 = 0;
          return 1;
        }
        goto LAB_140c7df89;
      }
      FUN_140b8ef10(0);
      FUN_140c227c0();
    }
    local_res20._0_4_ = 0;
  }
LAB_140c7df89:
  *param_5 = (int)local_res20;
  return 1;
}

