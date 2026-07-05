/**
 * Function: get_dh_dsa_payload_p
 * Address:  140c034c0
 * Signature: undefined get_dh_dsa_payload_p(void)
 * Body size: 204 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 get_dh_dsa_payload_p(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  iVar1 = FUN_140b7def0(uVar2);
  if (iVar1 == 0x1c) {
    uVar2 = FUN_140b7ec10(uVar2);
    lVar3 = FUN_140b76c30(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\ctrl_params_translate.c",0x6de,"get_dh_dsa_payload_p");
      FUN_140b91cc0(6,0xe0,0);
      return 0;
    }
    uVar2 = FUN_140b7e910(uVar2);
    lVar3 = FUN_140b76c30(uVar2);
  }
  if ((lVar3 == 0) || (*(int *)(*(longlong *)(param_3 + 0x30) + 8) != 2)) {
    uVar2 = 0;
  }
  else {
    *(longlong *)(param_3 + 0x20) = lVar3;
    uVar2 = action_d_state_d_names_values(param_1,param_2,param_3);
  }
  return uVar2;
}

