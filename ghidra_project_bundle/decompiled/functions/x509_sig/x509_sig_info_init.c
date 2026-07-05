/**
 * Function: x509_sig_info_init
 * Address:  140b9f370
 * Signature: undefined x509_sig_info_init(void)
 * Body size: 443 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_sig_info_init(int *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  param_1[2] = -1;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  uVar1 = FUN_140b964c0(*param_2);
  iVar2 = FUN_140c24470(uVar1,local_res8,local_res10);
  if ((iVar2 == 0) || (local_res10[0] == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_set.c",0xe1,"x509_sig_info_init");
    uVar3 = 0x90;
LAB_140b9f50f:
    FUN_140b91cc0(0xb,uVar3,0);
    return 0;
  }
  *param_1 = local_res8[0];
  param_1[1] = local_res10[0];
  if (local_res8[0] == 0) {
    lVar4 = FUN_140c0a620(0);
    if (((lVar4 != 0) && (*(code **)(lVar4 + 0xd8) != (code *)0x0)) &&
       (iVar2 = (**(code **)(lVar4 + 0xd8))(param_1,param_2,param_3), iVar2 != 0))
    goto LAB_140b9f498;
    if ((param_4 == 0) || (iVar2 = FUN_140b7dfb0(param_4), iVar2 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\x509_set.c",0xf7,"x509_sig_info_init");
      uVar3 = 0x8e;
      goto LAB_140b9f50f;
    }
  }
  else {
    if (local_res8[0] == 4) {
      param_1[2] = 0x27;
      goto LAB_140b9f498;
    }
    if (local_res8[0] == 0x40) {
      param_1[2] = 0x3f;
      goto LAB_140b9f498;
    }
    if (local_res8[0] == 0x329) {
      param_1[2] = 0x69;
      goto LAB_140b9f498;
    }
    uVar3 = FUN_140b96490();
    lVar4 = FUN_140b999e0(uVar3);
    if (lVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\x509_set.c",0x117,"x509_sig_info_init");
      uVar3 = 0x8d;
      goto LAB_140b9f50f;
    }
    iVar2 = FUN_140b97b40(lVar4);
    if (iVar2 < 1) {
      return 0;
    }
    iVar2 = iVar2 * 4;
  }
  param_1[2] = iVar2;
LAB_140b9f498:
  if (((local_res8[0] == 0x40) || (local_res8[0] == 0x2a0)) ||
     ((local_res8[0] == 0x2a1 || (local_res8[0] == 0x2a2)))) {
    param_1[3] = param_1[3] | 2;
  }
  param_1[3] = param_1[3] | 1;
  return 1;
}

