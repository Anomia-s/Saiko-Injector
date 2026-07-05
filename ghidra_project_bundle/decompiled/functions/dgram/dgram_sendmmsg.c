/**
 * Function: dgram_sendmmsg
 * Address:  140b909f0
 * Signature: undefined dgram_sendmmsg(void)
 * Body size: 303 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dgram_sendmmsg(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
              undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  sockaddr *to;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    *param_6 = 0;
    return 1;
  }
  if (param_2[3] == 0) {
    if (param_2[2] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_140bd8020();
    }
    if (param_2[2] == 0) {
      to = (sockaddr *)0x0;
    }
    else {
      to = (sockaddr *)FUN_140bd8010();
    }
    iVar1 = sendto((longlong)*(int *)(param_1 + 0x38),(char *)*param_2,*(int *)(param_2 + 1),0,to,
                   iVar1);
    if (0 < iVar1) {
      param_2[1] = (longlong)iVar1;
      param_2[4] = 0;
      *param_6 = 1;
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_dgram.c",0x5d3,"dgram_sendmmsg")
    ;
    iVar1 = WSAGetLastError();
    uVar2 = 2;
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_dgram.c",0x5c4,"dgram_sendmmsg")
    ;
    iVar1 = 0x6f;
    uVar2 = 0x20;
  }
  FUN_140b91cc0(uVar2,iVar1,0);
  *param_6 = 0;
  return 0;
}

