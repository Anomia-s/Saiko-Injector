/**
 * Function: tls_construct_ctos_status_request
 * Address:  140cbbd40
 * Signature: undefined tls_construct_ctos_status_request(void)
 * Body size: 657 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_ctos_status_request
          (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_res20 [8];
  
  if ((param_4 != 0) || (*(int *)(param_1 + 0xa20) != 1)) {
    return 2;
  }
  iVar1 = FUN_140c22430(param_2,5,2,0,0x140cbbd4d);
  if ((((iVar1 == 0) || (iVar1 = FUN_140c22090(param_2,2), iVar1 == 0)) ||
      (iVar1 = FUN_140c22430(param_2,1,1), iVar1 == 0)) ||
     (iVar1 = FUN_140c22090(param_2,2), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0x181,"tls_construct_ctos_status_request");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  iVar4 = 0;
  iVar1 = FUN_140b77980(*(undefined8 *)(param_1 + 0xa38));
  if (0 < iVar1) {
    do {
      uVar3 = FUN_140b77990(*(undefined8 *)(param_1 + 0xa38),iVar4);
      iVar1 = FUN_140bc8960(uVar3,0);
      if (((iVar1 < 1) || (iVar2 = FUN_140c22220(param_2,(longlong)iVar1,local_res20,2), iVar2 == 0)
          ) || (iVar2 = FUN_140bc8960(uVar3,local_res20), iVar2 != iVar1)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar3 = 0x18d;
        goto LAB_140cbbeaf;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_140b77980(*(undefined8 *)(param_1 + 0xa38));
    } while (iVar4 < iVar1);
  }
  iVar1 = FUN_140c21e20(param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_140c22090(param_2,2), iVar1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar3 = 0x193;
    goto LAB_140cbbeaf;
  }
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    iVar1 = FUN_140b9f190(*(longlong *)(param_1 + 0xa40),0);
    if (iVar1 < 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0x19b;
      goto LAB_140cbbeaf;
    }
    iVar4 = FUN_140c221d0(param_2,(longlong)iVar1,local_res20);
    if ((iVar4 == 0) ||
       (iVar4 = FUN_140b9f190(*(undefined8 *)(param_1 + 0xa40),local_res20), iVar4 != iVar1)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0x1a1;
      goto LAB_140cbbeaf;
    }
  }
  iVar1 = FUN_140c21e20(param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_140c21e20(param_2), iVar1 != 0)) {
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  uVar3 = 0x1a6;
LAB_140cbbeaf:
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_clnt.c",uVar3,"tls_construct_ctos_status_request");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return 0;
}

