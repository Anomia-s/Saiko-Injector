/**
 * Function: tls_process_client_key_exchange
 * Address:  140bc06a0
 * Signature: undefined tls_process_client_key_exchange(void)
 * Body size: 391 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_client_key_exchange(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x300) + 0x1c);
  if ((uVar1 & 0x1c8) != 0) {
    iVar2 = d_aplatformplatformopenssl_srcincludeinternal();
    if (iVar2 == 0) goto LAB_140bc07e7;
  }
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x41) == 0) {
      if ((uVar1 & 0x102) == 0) {
        if ((uVar1 & 0x84) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if ((uVar1 & 0x10) == 0) {
              if ((uVar1 >> 9 & 1) == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xd81,"tls_process_client_key_exchange");
                uVar3 = 0x50;
                uVar4 = 0xf9;
                goto LAB_140bc07dc;
              }
              iVar2 = FUN_140bc3020(param_1,param_2);
            }
            else {
              iVar2 = FUN_140bc2d50(param_1,param_2);
            }
          }
          else {
            iVar2 = FUN_140bc2b40(param_1,param_2);
          }
        }
        else {
          iVar2 = FUN_140bc2950(param_1,param_2);
        }
      }
      else {
        iVar2 = FUN_140bc2760(param_1,param_2);
      }
    }
    else {
      iVar2 = tls_client_version(param_1,param_2);
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0xd5a,"tls_process_client_key_exchange");
      uVar3 = 0x32;
      uVar4 = 0x9f;
LAB_140bc07dc:
      FUN_140ba3290(param_1,uVar3,uVar4,0);
      goto LAB_140bc07e7;
    }
    iVar2 = FUN_140bed4e0(param_1,0,0,0);
  }
  if (iVar2 != 0) {
    return 2;
  }
LAB_140bc07e7:
  FUN_140b8db20(*(undefined8 *)(param_1 + 0x3c0),*(undefined8 *)(param_1 + 0x3c8),
                "ssl\\statem\\statem_srvr.c",0xd88);
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  return 0;
}

