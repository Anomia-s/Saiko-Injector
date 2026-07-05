/**
 * Function: get_payload_private_key
 * Address:  140c030a0
 * Signature: undefined get_payload_private_key(void)
 * Body size: 202 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 get_payload_private_key(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  if (*(int *)(*(longlong *)(param_3 + 0x30) + 8) == 2) {
    iVar1 = FUN_140b7def0(uVar2);
    if (iVar1 == 0x1c) {
      uVar2 = FUN_140b7ec10(uVar2);
      uVar2 = FUN_140b987a0(uVar2);
    }
    else {
      if (iVar1 != 0x198) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\ctrl_params_translate.c",0x63e,"get_payload_private_key");
        FUN_140b91cc0(6,0xe0,0);
        goto LAB_140c0311e;
      }
      uVar2 = FUN_140c0a4d0(uVar2);
      uVar2 = FUN_140b6a6a0(uVar2);
    }
    *(undefined8 *)(param_3 + 0x20) = uVar2;
    uVar2 = action_d_state_d_names_values(param_1,param_2,param_3);
  }
  else {
LAB_140c0311e:
    uVar2 = 0;
  }
  return uVar2;
}

