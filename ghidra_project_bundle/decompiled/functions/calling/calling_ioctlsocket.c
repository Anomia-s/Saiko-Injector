/**
 * Function: calling_ioctlsocket
 * Address:  140bd8380
 * Signature: undefined calling_ioctlsocket(void)
 * Body size: 111 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool calling_ioctlsocket(int param_1,u_long param_2)

{
  int iVar1;
  int iVar2;
  u_long local_res8 [8];
  
  local_res8[0] = param_2;
  iVar1 = ioctlsocket((longlong)param_1,-0x7ffb9982,local_res8);
  if (iVar1 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_sock.c",0xf6,"BIO_socket_ioctl")
    ;
    iVar2 = WSAGetLastError();
    FUN_140b91cc0(2,iVar2,"calling ioctlsocket()");
  }
  return iVar1 == 0;
}

