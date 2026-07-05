/**
 * Function: calling_wsasocketa_d
 * Address:  140cc5b20
 * Signature: undefined calling_wsasocketa_d(void)
 * Body size: 304 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int calling_wsasocketa_d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0x100000080;
  iVar1 = WSASocketA();
  if ((iVar1 == -1) &&
     (iVar1 = WSASocketA(param_1,param_2,param_3,0,0,uVar3 & 0xffffffff00000000), iVar1 == -1)) {
    iVar1 = WSAGetLastError();
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\rio\\rio_notifier.c",0x62,"create_socket");
    FUN_140b91cc0(2,iVar1,"calling WSASocketA() = %d",iVar1);
    iVar1 = -1;
  }
  else {
    iVar2 = setsockopt((longlong)iVar1,0xffff,-5,"\x01",4);
    if (iVar2 < 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\rio\\rio_notifier.c",0x69,"create_socket")
      ;
      iVar2 = WSAGetLastError();
      FUN_140b91cc0(2,iVar2,"calling setsockopt()");
      FUN_140bd6c00(iVar1);
      iVar1 = -1;
    }
  }
  return iVar1;
}

