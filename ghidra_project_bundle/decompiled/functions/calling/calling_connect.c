/**
 * Function: calling_connect
 * Address:  140bd6990
 * Signature: undefined calling_connect(void)
 * Body size: 615 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 calling_connect(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  sockaddr *name;
  undefined8 uVar2;
  SOCKET s;
  char local_res8 [8];
  
  s = (SOCKET)param_1;
  local_res8[0] = '\x01';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  if (param_1 == -1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock2.c",0x56,"BIO_connect");
    FUN_140b91cc0(0x20,0x87,0);
    return 0;
  }
  iVar1 = calling_ioctlsocket(param_1,(uint)((param_3 & 0xffffffff) >> 3) & 1);
  if (iVar1 != 0) {
    if (((param_3 & 4) == 0) || (iVar1 = setsockopt(s,0xffff,8,local_res8,4), iVar1 == 0)) {
      if (((param_3 & 0x10) == 0) || (iVar1 = setsockopt(s,6,1,local_res8,4), iVar1 == 0)) {
        iVar1 = FUN_140bd8020(param_2);
        name = (sockaddr *)FUN_140bd8010(param_2);
        iVar1 = connect(s,name,iVar1);
        if (iVar1 != -1) {
          return 1;
        }
        iVar1 = FUN_140b72ef0(0xffffffff);
        if (iVar1 != 0) {
          return 0;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock2.c",0xb2,"BIO_connect")
        ;
        iVar1 = WSAGetLastError();
        FUN_140b91cc0(2,iVar1,"calling connect()");
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock2.c",0xb4,"BIO_connect")
        ;
        uVar2 = 0x67;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock2.c",0x6a,"BIO_connect")
        ;
        iVar1 = WSAGetLastError();
        FUN_140b91cc0(2,iVar1,"calling setsockopt()");
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock2.c",0x6c,"BIO_connect")
        ;
        uVar2 = 0x8a;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock2.c",0x60,"BIO_connect");
      iVar1 = WSAGetLastError();
      FUN_140b91cc0(2,iVar1,"calling setsockopt()");
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock2.c",0x62,"BIO_connect");
      uVar2 = 0x89;
    }
    FUN_140b91cc0(0x20,uVar2,0);
  }
  return 0;
}

