/**
 * Function: dgram_recvmmsg
 * Address:  140b90b20
 * Signature: undefined dgram_recvmmsg(void)
 * Body size: 291 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dgram_recvmmsg(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
              undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  int *fromlen;
  int local_res20 [2];
  
  if (param_4 == 0) {
    *param_6 = 0;
    return 1;
  }
  if (param_2[3] != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_dgram.c",0x6b7,"dgram_recvmmsg")
    ;
    FUN_140b91cc0(0x20,0x6f,0);
    *param_6 = 0;
    return 0;
  }
  local_res20[0] = 0x1c;
  fromlen = local_res20;
  if ((sockaddr *)param_2[2] == (sockaddr *)0x0) {
    fromlen = (int *)0x0;
  }
  iVar1 = recvfrom((longlong)*(int *)(param_1 + 0x38),(char *)*param_2,*(int *)(param_2 + 1),0,
                   (sockaddr *)param_2[2],fromlen);
  if (iVar1 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_dgram.c",0x6c7,"dgram_recvmmsg")
    ;
    iVar1 = WSAGetLastError();
    FUN_140b91cc0(2,iVar1,0);
    return 0;
  }
  param_2[1] = (longlong)iVar1;
  param_2[4] = 0;
  *param_6 = 1;
  return 1;
}

