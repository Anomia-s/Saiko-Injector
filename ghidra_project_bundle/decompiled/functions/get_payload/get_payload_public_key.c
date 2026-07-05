/**
 * Function: get_payload_public_key
 * Address:  140c03170
 * Signature: undefined get_payload_public_key(void)
 * Body size: 449 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 get_payload_public_key(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res18;
  
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  local_res18 = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  iVar1 = FUN_140b7def0(uVar5);
  if (iVar1 == 0x1c) {
LAB_140c0329d:
    iVar1 = *(int *)(*(longlong *)(param_3 + 0x30) + 8);
    if (iVar1 == 2) {
      uVar5 = FUN_140b7ec10(uVar5);
      uVar5 = FUN_140b97e80(uVar5);
    }
    else {
      if (iVar1 != 5) goto LAB_140c03204;
      uVar5 = FUN_140b7ec10(uVar5);
      uVar5 = FUN_140c7a8e0(uVar5,&local_res18,0,1);
      *(undefined8 *)(param_3 + 0x28) = uVar5;
      uVar5 = local_res18;
    }
LAB_140c032eb:
    *(undefined8 *)(param_3 + 0x20) = uVar5;
LAB_140c032ef:
    uVar2 = action_d_state_d_names_values(param_1,param_2,param_3);
    FUN_140b8d990(local_res18,"crypto\\evp\\ctrl_params_translate.c",0x680);
  }
  else {
    if (iVar1 == 0x74) {
      if (*(int *)(*(longlong *)(param_3 + 0x30) + 8) == 2) {
        uVar5 = FUN_140b7e910(uVar5);
        uVar5 = FUN_140b97b30(uVar5);
        goto LAB_140c032eb;
      }
    }
    else if (iVar1 == 0x198) {
      if (*(int *)(*(longlong *)(param_3 + 0x30) + 8) == 5) {
        uVar5 = FUN_140c0a4d0(uVar5);
        uVar3 = FUN_140b9f2f0(uVar5);
        lVar4 = FUN_140c936d0(uVar3);
        uVar3 = FUN_140b772a0(uVar5);
        uVar5 = FUN_140b97dc0(uVar5);
        if (lVar4 != 0) {
          uVar5 = FUN_140c944b0(uVar3,uVar5,2,&local_res18,lVar4);
          *(undefined8 *)(param_3 + 0x28) = uVar5;
          *(undefined8 *)(param_3 + 0x20) = local_res18;
          FUN_140c93850(lVar4);
          goto LAB_140c032ef;
        }
      }
    }
    else {
      if (iVar1 == 0x398) goto LAB_140c0329d;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\ctrl_params_translate.c",0x67b,"get_payload_public_key");
      FUN_140b91cc0(6,0xe0,0);
    }
LAB_140c03204:
    uVar2 = 0;
  }
  return uVar2;
}

