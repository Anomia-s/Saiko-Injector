/**
 * Function: x509_verify_x509
 * Address:  140bda1f0
 * Signature: undefined x509_verify_x509(void)
 * Body size: 410 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_verify_x509(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_vfy.c",0x14b,"x509_verify_x509");
    FUN_140b91cc0(0xb,0x69,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_vfy.c",0x155,"x509_verify_x509");
    FUN_140b91cc0(0xb,0xc0101,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  iVar1 = FUN_140b75800(param_1 + 0x98,*(longlong *)(param_1 + 8),1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x94) = 1;
  iVar1 = FUN_140bdcab0(param_1,*(undefined8 *)(param_1 + 8));
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar2 == 0) {
      lVar2 = FUN_140b77990(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar2;
    *(undefined4 *)(param_1 + 0xb0) = 0x42;
    uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    iVar1 = FUN_140b77980(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8));
    if (0 < iVar1) {
      uVar3 = FUN_140bdb120(param_1);
      goto LAB_140bda368;
    }
  }
  uVar3 = FUN_140bdafb0(param_1);
LAB_140bda368:
  if (((int)uVar3 < 1) && (*(int *)(param_1 + 0xb0) == 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  return uVar3;
}

