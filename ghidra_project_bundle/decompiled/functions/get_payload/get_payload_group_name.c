/**
 * Function: get_payload_group_name
 * Address:  140c02f90
 * Signature: undefined get_payload_group_name(void)
 * Body size: 259 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 get_payload_group_name(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  size_t sVar4;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  iVar1 = FUN_140b7def0(uVar2);
  if (iVar1 == 0x1c) {
    uVar2 = FUN_140b7ec10(uVar2);
    iVar1 = FUN_140c133e0(uVar2);
    if (iVar1 == 0) goto LAB_140c03059;
    uVar2 = FUN_140c945f0(iVar1);
    uVar2 = FUN_140b76060(uVar2);
  }
  else {
    if (iVar1 != 0x198) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\ctrl_params_translate.c",0x611,"get_payload_group_name");
      FUN_140b91cc0(6,0xe0,0);
      return 0;
    }
    uVar2 = FUN_140c0a4d0(uVar2);
    lVar3 = FUN_140b772a0(uVar2);
    if ((lVar3 == 0) || (iVar1 = FUN_140c0bd90(lVar3), iVar1 == 0)) goto LAB_140c03059;
    uVar2 = FUN_140c93c50(iVar1);
  }
  *(undefined8 *)(param_3 + 0x20) = uVar2;
LAB_140c03059:
  if (*(char **)(param_3 + 0x20) == (char *)0x0) {
    uVar2 = 1;
  }
  else {
    sVar4 = strlen(*(char **)(param_3 + 0x20));
    *(int *)(param_3 + 0x1c) = (int)sVar4;
    uVar2 = action_d_state_d_names_values(param_1,param_2,param_3);
  }
  return uVar2;
}

