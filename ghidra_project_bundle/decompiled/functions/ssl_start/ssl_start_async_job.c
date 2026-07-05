/**
 * Function: ssl_start_async_job
 * Address:  140b6f690
 * Signature: undefined ssl_start_async_job(void)
 * Body size: 407 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ssl_start_async_job(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  if ((param_1 == (int *)0x0) ||
     ((piVar2 = param_1, *param_1 != 0 &&
      ((-1 < (char)*param_1 || (piVar2 = (int *)FUN_140bc8b20(), piVar2 == (int *)0x0)))))) {
    return 0;
  }
  if (*(longlong *)(piVar2 + 0x548) == 0) {
    lVar3 = FUN_140ba0250();
    *(longlong *)(piVar2 + 0x548) = lVar3;
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    if ((*(longlong *)(piVar2 + 0x55a) != 0) &&
       (iVar1 = FUN_140ba0320(lVar3,FUN_140b6f630,param_1), iVar1 == 0)) {
      return 0xffffffff;
    }
  }
  piVar2[0x1a] = 1;
  iVar1 = async_start_job(piVar2 + 0x546,*(undefined8 *)(piVar2 + 0x548),local_res8,param_3,param_2,
                          0x28);
  if (iVar1 == 0) {
    piVar2[0x1a] = 1;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0x8ee,"ssl_start_async_job");
    FUN_140b91cc0(0x14,0x195,0);
    return 0xffffffff;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      piVar2[0x1a] = 5;
      return 0xffffffff;
    }
    if (iVar1 == 3) {
      piVar2[0x546] = 0;
      piVar2[0x547] = 0;
      return local_res8[0];
    }
    piVar2[0x1a] = 1;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0x8fb,"ssl_start_async_job");
    FUN_140b91cc0(0x14,0xc0103,0);
    return 0xffffffff;
  }
  piVar2[0x1a] = 6;
  return 0xffffffff;
}

