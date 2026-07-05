/**
 * Function: ossl_rio_notifier_init
 * Address:  140cc54f0
 * Signature: undefined ossl_rio_notifier_init(void)
 * Body size: 1085 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_rio_notifier_init(int *param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  u_long uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  SOCKET s;
  char *pcVar8;
  SOCKET SVar9;
  undefined1 auStack_88 [32];
  int local_68 [4];
  sockaddr local_58;
  sockaddr local_48;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  local_68[0] = 0x10;
  local_68[1] = 0x10;
  iVar6 = -1;
  s = 0xffffffff;
  local_58.sa_family = 0;
  local_58.sa_data[0] = '\0';
  local_58.sa_data[1] = '\0';
  local_58.sa_data[2] = '\0';
  local_58.sa_data[3] = '\0';
  local_58.sa_data[4] = '\0';
  local_58.sa_data[5] = '\0';
  local_58.sa_data[6] = '\0';
  local_58.sa_data[7] = '\0';
  local_58.sa_data[8] = '\0';
  local_58.sa_data[9] = '\0';
  local_58.sa_data[10] = '\0';
  local_58.sa_data[0xb] = '\0';
  local_58.sa_data[0xc] = '\0';
  local_58.sa_data[0xd] = '\0';
  iVar1 = FUN_140b8b890(&DAT_141700d78,FUN_140cc5a90);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_141700d80;
  }
  if (iVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\rio\\rio_notifier.c",0x9b,"ossl_rio_notifier_init");
    FUN_140b91cc0(0x14,0xc0103,"Cannot start Windows sockets");
    goto LAB_140cc5920;
  }
  iVar2 = calling_wsasocketa_d(2,1,6);
  SVar9 = (SOCKET)iVar2;
  if (iVar2 == -1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\rio\\rio_notifier.c",0xa3,"ossl_rio_notifier_init");
    DVar3 = GetLastError();
    FUN_140b91cc0(2,DVar3,"calling create_socket()");
    goto LAB_140cc5920;
  }
  local_58.sa_family = 2;
  uVar4 = htonl(0x7f000001);
  local_58.sa_data[2] = (char)uVar4;
  local_58.sa_data[3] = (char)(uVar4 >> 8);
  local_58.sa_data[4] = (char)(uVar4 >> 0x10);
  local_58.sa_data[5] = (char)(uVar4 >> 0x18);
  iVar1 = bind(SVar9,&local_58,0x10);
  if (iVar1 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\rio\\rio_notifier.c",0xad,"ossl_rio_notifier_init");
    DVar3 = GetLastError();
    pcVar8 = "calling bind()";
    s = 0xffffffff;
LAB_140cc581a:
    FUN_140b91cc0(2,DVar3,pcVar8);
    FUN_140bd6c00(iVar2);
    if ((int)s != -1) goto LAB_140cc58f1;
  }
  else {
    iVar1 = getsockname(SVar9,&local_58,local_68);
    if (iVar1 < 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar7 = 0xb5;
      s = 0xffffffff;
      iVar6 = -1;
LAB_140cc57fa:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\rio\\rio_notifier.c",uVar7,"ossl_rio_notifier_init");
      DVar3 = GetLastError();
      pcVar8 = "calling getsockname()";
      goto LAB_140cc581a;
    }
    iVar1 = listen(SVar9,1);
    if (iVar1 < 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\rio\\rio_notifier.c",0xbd,"ossl_rio_notifier_init");
      DVar3 = GetLastError();
      pcVar8 = "calling listen()";
      goto LAB_140cc581a;
    }
    iVar1 = calling_wsasocketa_d(2,1,6);
    s = (SOCKET)iVar1;
    if (iVar1 == -1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\rio\\rio_notifier.c",0xc5,"ossl_rio_notifier_init");
      DVar3 = GetLastError();
      pcVar8 = "calling create_socket()";
      goto LAB_140cc581a;
    }
    iVar5 = FUN_140b69250(iVar1,1);
    if (iVar5 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\rio\\rio_notifier.c",0xcf,"ossl_rio_notifier_init");
      DVar3 = GetLastError();
      pcVar8 = "calling BIO_set_tcp_ndelay()";
      goto LAB_140cc581a;
    }
    iVar5 = connect(s,&local_58,0x10);
    if (iVar5 < 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\rio\\rio_notifier.c",0xd9,"ossl_rio_notifier_init");
      DVar3 = GetLastError();
      pcVar8 = "calling connect()";
      goto LAB_140cc581a;
    }
    SVar9 = accept(SVar9,&local_48,local_68 + 1);
    iVar6 = (int)SVar9;
    if (iVar6 == -1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\rio\\rio_notifier.c",0xe3,"ossl_rio_notifier_init");
      DVar3 = GetLastError();
      pcVar8 = "calling accept()";
      goto LAB_140cc581a;
    }
    iVar5 = getsockname(s,&local_58,local_68);
    if (iVar5 < 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar7 = 0xea;
      goto LAB_140cc57fa;
    }
    FUN_140bd6c00(iVar2);
    if ((local_48.sa_family == 2) && (local_48.sa_data._0_2_ == local_58.sa_data._0_2_)) {
      iVar2 = calling_ioctlsocket(SVar9 & 0xffffffff,1);
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar7 = 0xff;
      }
      else {
        iVar2 = calling_ioctlsocket(iVar1,1);
        if (iVar2 != 0) {
          *param_1 = iVar6;
          param_1[1] = iVar1;
          goto LAB_140cc5920;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar7 = 0x105;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\rio\\rio_notifier.c",uVar7,"ossl_rio_notifier_init");
      DVar3 = GetLastError();
      pcVar8 = "calling BIO_socket_nbio()";
      uVar7 = 2;
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\rio\\rio_notifier.c",0xf8,"ossl_rio_notifier_init");
      pcVar8 = "connected address differs from accepted address";
      DVar3 = 0xc0103;
      uVar7 = 0x14;
    }
    FUN_140b91cc0(uVar7,DVar3,pcVar8);
LAB_140cc58f1:
    FUN_140bd6c00(s & 0xffffffff);
  }
  if (iVar6 != -1) {
    FUN_140bd6c00(iVar6);
  }
LAB_140cc5920:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_88);
}

