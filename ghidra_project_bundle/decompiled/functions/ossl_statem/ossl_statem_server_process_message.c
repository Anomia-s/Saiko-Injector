/**
 * Function: ossl_statem_server_process_message
 * Address:  140bbd700
 * Signature: undefined ossl_statem_server_process_message(void)
 * Body size: 971 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_statem_server_process_message(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x16:
    uVar4 = tls_process_client_hello(param_1);
    return uVar4;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x50a,"ossl_statem_server_process_message");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  case 0x1e:
    uVar4 = tls_process_client_certificate(param_1);
    return uVar4;
  case 0x20:
    uVar4 = tls_process_client_key_exchange(param_1);
    return uVar4;
  case 0x21:
    uVar4 = tls_process_cert_verify(param_1);
    return uVar4;
  case 0x22:
    pbVar6 = (byte *)*param_2;
    if (param_2[1] != 0) {
      uVar5 = (ulonglong)*pbVar6;
      pbVar1 = pbVar6 + 1;
      uVar4 = param_2[1] - 1;
      pbVar6 = pbVar1;
      if (uVar5 <= uVar4) {
        pbVar6 = pbVar1 + uVar5;
        lVar3 = uVar4 - uVar5;
        *param_2 = (longlong)pbVar6;
        param_2[1] = lVar3;
        if (lVar3 != 0) {
          uVar4 = (ulonglong)*pbVar6;
          if (uVar4 <= lVar3 - 1U) {
            pbVar6 = pbVar6 + uVar4 + 1;
            *param_2 = (longlong)pbVar6;
            param_2[1] = (lVar3 - 1U) - uVar4;
            if (param_2[1] == 0) {
              FUN_140b8d990(*(undefined8 *)(param_1 + 0xaf8),
                            "D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h",
                            0x1c6);
              *(undefined8 *)(param_1 + 0xaf8) = 0;
              uVar4 = 0;
              if (uVar5 != 0) {
                lVar3 = FUN_140b8c7c0(pbVar1,uVar5,
                                      "D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h"
                                      ,0x1cf);
                *(longlong *)(param_1 + 0xaf8) = lVar3;
                uVar4 = uVar5;
                if (lVar3 == 0) {
                  *(undefined8 *)(param_1 + 0xb00) = 0;
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\statem\\statem_srvr.c",0x1117,"tls_process_next_proto");
                  FUN_140ba3290(param_1,0x50,0xc0103,0);
                  return 0;
                }
              }
              *(ulonglong *)(param_1 + 0xb00) = uVar4;
              return 3;
            }
          }
        }
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x1111,"tls_process_next_proto");
    FUN_140ba3290(param_1,0x32,0x9f,0,pbVar6);
    return 0;
  case 0x23:
    uVar4 = FUN_140bb7b00(param_1);
    return uVar4;
  case 0x24:
    uVar4 = tls13_save_handshake_digest_for_pha(param_1);
    return uVar4;
  case 0x30:
    uVar4 = tls_process_key_update(param_1);
    return uVar4;
  case 0x35:
    break;
  }
  if (param_2[1] != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x1130,"tls_process_end_of_early_data");
    FUN_140ba3290(param_1,0x32,0x9f,0);
    return 0;
  }
  if ((*(int *)(param_1 + 0xf0) != 0xb) && (*(int *)(param_1 + 0xf0) != 10)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x1136,"tls_process_end_of_early_data");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  iVar2 = FUN_140baaca0(param_1 + 0xc48);
  if (iVar2 != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x113f,"tls_process_end_of_early_data");
    FUN_140ba3290(param_1,10,0xb6,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0xc;
  iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0xa1);
  return (ulonglong)(-(uint)(iVar2 != 0) & 3);
}

