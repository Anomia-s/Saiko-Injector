/**
 * Function: gen_init
 * Address:  140b7d870
 * Signature: undefined gen_init(void)
 * Body size: 276 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong gen_init(undefined4 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_1 == (undefined4 *)0x0) {
LAB_140b7d930:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\pmeth_gn.c",0x59,"gen_init");
    FUN_140b91cc0(6,0x96,0);
    uVar3 = 0xfffffffe;
  }
  else {
    FUN_140b7c180();
    lVar1 = *(longlong *)(param_1 + 8);
    *param_1 = 4;
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) {
      lVar1 = FUN_140bfe0f0(lVar1,3,0);
      *(longlong *)(param_1 + 10) = lVar1;
      if (lVar1 != 0) {
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\pmeth_gn.c",0x34,"gen_init");
      FUN_140b91cc0(6,0x86,0);
      goto LAB_140b7d969;
    }
    lVar1 = *(longlong *)(param_1 + 0x1e);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x38) == 0)) goto LAB_140b7d930;
    if (*(code **)(lVar1 + 0x30) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x30))(param_1);
    uVar3 = uVar2 & 0xffffffff;
    if (0 < (int)uVar2) {
      return uVar2;
    }
  }
  if (param_1 == (undefined4 *)0x0) {
    return uVar3;
  }
LAB_140b7d969:
  FUN_140b7c180(param_1);
  *param_1 = 0;
  return uVar3;
}

