/**
 * Function: calling_socket
 * Address:  140bd68d0
 * Signature: undefined calling_socket(void)
 * Body size: 181 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

SOCKET calling_socket(int param_1,int param_2,int param_3)

{
  int iVar1;
  SOCKET SVar2;
  
  iVar1 = calling_wsastartup();
  if (iVar1 == 1) {
    SVar2 = socket(param_1,param_2,param_3);
    if ((int)SVar2 != -1) {
      return SVar2;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock2.c",0x33,"BIO_socket");
    iVar1 = WSAGetLastError();
    FUN_140b91cc0(2,iVar1,"calling socket()");
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock2.c",0x35,"BIO_socket");
    FUN_140b91cc0(0x20,0x76,0);
  }
  return 0xffffffff;
}

