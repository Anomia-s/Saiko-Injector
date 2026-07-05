/**
 * Function: get_payload_public_key_ec
 * Address:  140c03340
 * Signature: undefined get_payload_public_key_ec(void)
 * Body size: 380 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 get_payload_public_key_ec(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar3 = FUN_140c0a4d0(*(undefined8 *)(param_3 + 0x20));
  uVar2 = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  if (lVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\ctrl_params_translate.c",0x695,"get_payload_public_key_ec");
    FUN_140b91cc0(6,0xe0,0);
    return 0;
  }
  uVar4 = FUN_140b9f2f0(lVar3);
  lVar5 = FUN_140c936d0(uVar4);
  if (lVar5 != 0) {
    uVar4 = FUN_140b97dc0(lVar3);
    uVar6 = FUN_140b772a0(lVar3);
    if (*(int *)(*(longlong *)(param_3 + 0x30) + 8) == 2) {
      lVar3 = FUN_140c93a20(lVar5);
      lVar7 = FUN_140c93a20(lVar5);
      if (((lVar7 != 0) &&
          (iVar1 = ec_point_is_at_infinity(uVar6,uVar4,lVar3,lVar7,lVar5), iVar1 != 0)) &&
         ((iVar1 = strncmp((char *)**(undefined8 **)(param_3 + 0x30),"qx",2), iVar1 == 0 ||
          (iVar1 = strncmp((char *)**(undefined8 **)(param_3 + 0x30),"qy",2), lVar3 = lVar7,
          iVar1 == 0)))) {
        *(longlong *)(param_3 + 0x20) = lVar3;
        uVar2 = action_d_state_d_names_values(param_1,param_2,param_3);
      }
    }
    FUN_140c93850(lVar5);
    return uVar2;
  }
  return 0;
}

