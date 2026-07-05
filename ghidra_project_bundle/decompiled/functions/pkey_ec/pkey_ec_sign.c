/**
 * Function: pkey_ec_sign
 * Address:  140bf83e0
 * Signature: undefined pkey_ec_sign(void)
 * Body size: 222 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_ec_sign(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
            undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  uVar4 = FUN_140c0a4d0(*(undefined8 *)(param_1 + 0x88));
  iVar2 = FUN_140c6eb20(uVar4);
  if (iVar2 < 1) {
LAB_140bf8461:
    uVar4 = 0;
  }
  else {
    uVar5 = (ulonglong)iVar2;
    if (param_2 != 0) {
      if (*param_3 < uVar5) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ec\\ec_pmeth.c",0x80,"pkey_ec_sign");
        FUN_140b91cc0(0x10,100,0);
        goto LAB_140bf8461;
      }
      if (*(longlong *)(lVar1 + 8) == 0) {
        uVar3 = 0x40;
      }
      else {
        uVar3 = FUN_140b78ee0();
      }
      uVar4 = cryptoececdsa_signc(uVar3,param_4,param_5,param_2,local_res8,uVar4);
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      uVar5 = (ulonglong)local_res8[0];
    }
    *param_3 = uVar5;
    uVar4 = 1;
  }
  return uVar4;
}

