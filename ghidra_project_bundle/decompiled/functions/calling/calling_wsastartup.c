/**
 * Function: calling_wsastartup
 * Address:  140bd83f0
 * Signature: undefined calling_wsastartup(void)
 * Body size: 199 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 calling_wsastartup(void)

{
  int iVar1;
  undefined8 in_R9;
  undefined8 uVar2;
  
  uVar2 = 0x140bd83fa;
  if (DAT_1416ffe60 == 0) {
    DAT_1416ffe60 = 1;
    memset(&DAT_1416ffe70,0,0x198);
    iVar1 = WSAStartup(0x202,(LPWSADATA)&DAT_1416ffe70);
    if (iVar1 != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\bio\\bio_sock.c",0x98,"BIO_sock_init",in_R9,uVar2);
      iVar1 = WSAGetLastError();
      FUN_140b91cc0(2,iVar1,"calling wsastartup()");
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock.c",0x9a,"BIO_sock_init");
      FUN_140b91cc0(0x20,0x7a,0);
      return 0xffffffff;
    }
  }
  return 1;
}

