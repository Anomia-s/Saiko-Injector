/**
 * Function: dtls1_write_app_data_bytes
 * Address:  140bf0fc0
 * Signature: undefined dtls1_write_app_data_bytes(void)
 * Body size: 259 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dtls1_write_app_data_bytes
          (int *param_1,undefined1 param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = 0x140bf0fe0;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  piVar3 = (int *)0x0;
  if (*param_1 == 0) {
    piVar3 = param_1;
  }
  if (piVar3 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar1 = FUN_140ba2f50();
  if ((iVar1 != 0) && (iVar1 = FUN_140ba3380(piVar3), iVar1 == 0)) {
    uVar2 = (**(code **)(piVar3 + 0x1c))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((int)uVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\d1_msg.c",0x1b,"dtls1_write_app_data_bytes");
      uVar4 = 0xe5;
      goto LAB_140bf104b;
    }
  }
  if (param_4 < 0x4001) {
    uVar4 = dtls1_write_bytes(piVar3,param_2,param_3,param_4,param_5,uVar4);
    return uVar4;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\d1_msg.c",0x21,"dtls1_write_app_data_bytes");
  uVar4 = 0x14e;
LAB_140bf104b:
  FUN_140b91cc0(0x14,uVar4,0);
  return 0xffffffff;
}

