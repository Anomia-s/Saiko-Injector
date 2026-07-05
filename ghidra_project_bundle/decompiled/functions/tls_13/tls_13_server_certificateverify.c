/**
 * Function: tls_13_server_certificateverify
 * Address:  140bb99b0
 * Signature: undefined tls_13_server_certificateverify(void)
 * Body size: 369 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_13_server_certificateverify
          (longlong param_1,char *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  char *_Source;
  longlong local_res8;
  
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    builtin_strncpy(param_2,"                                                                ",0x40)
    ;
    if ((*(int *)(param_1 + 0xac) == 0x2b) || (*(int *)(param_1 + 0xac) == 0x2c)) {
      _Source = "TLS 1.3, server CertificateVerify";
    }
    else {
      _Source = "TLS 1.3, client CertificateVerify";
    }
    strcpy(param_2 + 0x40,_Source);
    if ((*(int *)(param_1 + 0xac) == 0x2b) || (*(int *)(param_1 + 0xac) == 0x21)) {
      memcpy(param_2 + 0x62,(void *)(param_1 + 0x880),*(size_t *)(param_1 + 0x8c0));
      local_res8 = *(longlong *)(param_1 + 0x8c0) + 0x62;
      *param_3 = param_2;
    }
    else {
      iVar1 = ssl_handshake_hash(param_1,param_2 + 0x62,0x40,&local_res8);
      if (iVar1 == 0) {
        return 0;
      }
      local_res8 = local_res8 + 0x62;
      *param_3 = param_2;
    }
  }
  else {
    iVar1 = FUN_140b74190(*(undefined8 *)(param_1 + 0x1a8),3,0,param_3);
    if (iVar1 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",0x12e,"get_cert_verify_tbs_data");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
    local_res8 = (longlong)iVar1;
  }
  *param_4 = local_res8;
  return 1;
}

