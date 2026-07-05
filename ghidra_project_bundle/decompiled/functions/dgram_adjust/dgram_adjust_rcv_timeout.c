/**
 * Function: dgram_adjust_rcv_timeout
 * Address:  140b8fef0
 * Signature: undefined dgram_adjust_rcv_timeout(void)
 * Body size: 709 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dgram_adjust_rcv_timeout(longlong param_1,char *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  sockaddr *from;
  undefined1 auStackY_a8 [32];
  int local_78;
  int local_74 [3];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_a8;
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_74[1] = 0x1c;
  if (param_2 != (char *)0x0) {
    WSASetLastError(0);
    FUN_140bd7990(local_68);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      local_74[0] = 4;
      iVar4 = getsockopt((longlong)*(int *)(param_1 + 0x38),0xffff,0x1006,(char *)&local_78,local_74
                        );
      if (iVar4 < 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\bio\\bss_dgram.c",0x13e,"dgram_adjust_rcv_timeout");
        iVar4 = WSAGetLastError();
        FUN_140b91cc0(2,iVar4,"calling getsockopt()");
      }
      else {
        *(longlong *)(lVar2 + 0x50) = (longlong)local_78 * 1000000;
      }
      uVar5 = FUN_140c21250();
      if ((*(ulonglong *)(lVar2 + 0x48) < uVar5) ||
         (uVar5 = *(ulonglong *)(lVar2 + 0x48) - uVar5, uVar5 < 1000)) {
        uVar5 = 1000;
      }
      uVar3 = *(ulonglong *)(lVar2 + 0x50);
      if (((uVar3 == 0) || (uVar5 < uVar3)) || (uVar5 <= uVar3)) {
        local_78 = (int)(uVar5 / 1000000);
        iVar4 = setsockopt((longlong)*(int *)(param_1 + 0x38),0xffff,0x1006,(char *)&local_78,4);
        if (iVar4 < 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\bio\\bss_dgram.c",0x15c,"dgram_adjust_rcv_timeout");
          iVar4 = WSAGetLastError();
          FUN_140b91cc0(2,iVar4,"calling setsockopt()");
        }
      }
    }
    iVar4 = *(int *)(lVar1 + 0x58);
    from = (sockaddr *)FUN_140bd8010(local_68);
    iVar4 = recvfrom((longlong)*(int *)(param_1 + 0x38),param_2,param_3,-(uint)(iVar4 != 0) & 2,from
                     ,local_74 + 1);
    if ((*(int *)(lVar1 + 0x38) == 0) && (-1 < iVar4)) {
      FUN_140b74190(param_1,0x2c,0,local_68);
      FUN_140b73030(param_1,0xf);
    }
    else {
      FUN_140b73030(param_1,0xf);
      if ((iVar4 < 0) && (iVar4 = FUN_140b90cc0(iVar4), iVar4 != 0)) {
        FUN_140b73010(param_1,9);
        iVar4 = WSAGetLastError();
        *(int *)(lVar1 + 0x3c) = iVar4;
      }
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) != 0) {
      local_74[0] = (int)(*(ulonglong *)(*(longlong *)(param_1 + 0x40) + 0x50) / 1000000);
      iVar4 = setsockopt((longlong)*(int *)(param_1 + 0x38),0xffff,0x1006,(char *)local_74,4);
      if (iVar4 < 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\bio\\bss_dgram.c",0x18b,"dgram_reset_rcv_timeout");
        iVar4 = WSAGetLastError();
        FUN_140b91cc0(2,iVar4,"calling setsockopt()");
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_a8);
}

